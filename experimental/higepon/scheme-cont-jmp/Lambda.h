#ifndef __LAMBDA_H__
#define __LAMBDA_H__

#include "scheme.h"
#include "Object.h"

namespace monash {

class Lambda : public Object
{
public:
    Lambda(Objects* body, Variables* parameters, bool isExtendableParameter, uint32_t lineno = 0);
    virtual ~Lambda();

    virtual ::util::String toString();
    virtual int type() const;
    virtual uint32_t lineno() const { return lineno_; }
    virtual Object* eval(Environment* env);
    virtual bool eqv() const;
    virtual bool eq()  const;
    bool isExtendableParameter() const { return isExtendableParameter_; }
    bool isExtendableParameters() const { return isExtendableParameters_; }
    Objects* body() const { return body_; }
    Variables* parameters() { return parameters_;}

protected:
    Objects* body_;
    Variables* parameters_;
    bool isExtendableParameter_;
    bool isExtendableParameters_;
    uint32_t lineno_;
};

}; // namespace monash

#endif // __LAMBDA_H__
