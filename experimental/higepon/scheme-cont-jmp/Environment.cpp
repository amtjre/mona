
#include "Environment.h"

using namespace monash;
using namespace monash::util;

Environment::Environment(MacroFilter& filter, Translator& translator, uint32_t lineno /* = 0 */) : filter_(filter), translator_(translator), lineno_(lineno)
{
    frames_ = new Frames();
    ASSERT(frames_);
    Frame* f = new Frame();
    ASSERT(f);
    frames_->add(f);
}

Environment::~Environment()
{
//    delete frames_;
}

Environment* Environment::clone()
{
    Environment* env = new Environment(filter_, translator_);ASSERT(env);
    Frames* target = env->frames();
    for (int i = 0; i < frames_->size(); i++)
    {
        target->add(frames_->get(i));
    }
    return env;
}

void Environment::setVaribale(Variable* variable, Object* value)
{
    for (int i = frames_->size() - 1 ; i >= 0; i--)
    {
        Frame* f = frames_->get(i);
        if (f->lookup(variable) != NULL)
        {
            f->insert(variable, value);
            return;
        }
    }
    RAISE_ERROR(variable->lineno(), "set! unbound variable [%s]", variable->toString().data());
    return;
}

void Environment::defineVariable(Variable* variable, Object* value)
{
    Frame* lastFrame = frames_->get(frames_->size() -1);
    lastFrame->insert(variable, value); // insert or overwrite
    return;
}

void Environment::extend(Variables* variables, Objects* objects)
{
    Frame* f = new Frame(variables, objects);
    ASSERT(f);
    frames_->add(f);
}

Object* Environment::lookupVariableValue(Variable* variable)
{
    for (int i = frames_->size() - 1; i >= 0; i--)
    {
        Frame* f = frames_->get(i);
        Object* found = f->lookup(variable);
        if (NULL != found) {
            return found;
        }
    }

    RAISE_ERROR(variable->lineno(), "unbound variable [%s]", variable->toString().data());
    return NULL;
}

::util::String Environment::toString()
{
    ::util::String result = "";
    for (int i = frames_->size() - 1 ; i >= 0; i--)
    {
        result += "****************\n";
        result += frames_->get(i)->toString() + "\n\n";
    }
    return result;
}

int Environment::type() const
{
    return Object::ENVIRONMENT;
}

Object* Environment::eval(Environment* env)
{
    return this;
}
