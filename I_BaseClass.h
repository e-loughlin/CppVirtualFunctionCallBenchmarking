///-----------------------------------------------------------------------------
/// I_BaseClass.h
///
/// Author: Evan Loughlin
///
/// Description: An interface for testing virtual function calls.
///-----------------------------------------------------------------------------


#ifndef I_BASECLASS_H
#define I_BASECLASS_H

class I_BaseClass 
{
 public:
    virtual ~I_BaseClass(){}

 public:
    virtual void functionA() = 0;

};

#endif //I_BASECLASS_H