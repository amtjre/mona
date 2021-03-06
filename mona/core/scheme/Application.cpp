/*!
    \file   Application.cpp
    \brief

    Copyright (c) 2002-2007 Higepon.
    All rights reserved.
    License=MIT/X License

    \author  Higepon
    \version $Revision$
    \date   create:2007/07/14 update:$Date$
*/
#include "Application.h"
#include "Kernel.h"
#include "scheme.h"

using namespace util;
using namespace monash;

Application::Application(Object* operatorr, Cons* operands, uint32_t lineno) : operatorr_(operatorr), operands_(operands), lineno_(lineno)
{
}

Application::~Application()
{
}

String Application::toString()
{
    return "Application : " + operatorr_->toString();
}

Object* Application::eval(Environment* env)
{
//    register char* esp asm ("%esp");
//    if (toString() == "Application : variable: hoge") printf("app:eval %x\n", esp);
    Object* procedure = Kernel::evalTailOpt(operatorr(), env);
    if (!procedure->isCompoundProcedure() &&
        !procedure->isPrimitiveProcedure() &&
        !procedure->isContinuation() &&
        !procedure->isTraditionaMacro() &&
        !procedure->isSRegexp() &&
        !procedure->isSRegMatch())
    {
        RAISE_ERROR(lineno(), "invalid application [%s]", procedure->toString().data());
    }
    Object* ret = Kernel::apply(procedure, operands(), env);
    procedure = NULL;
    return ret;
}
