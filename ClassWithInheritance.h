
#include "I_BaseClass.h"

class ClassWithInheritance : public I_BaseClass
{

 public:
    explicit ClassWithInheritance();
    virtual ~ClassWithInheritance();

 public:
    void functionA() override;

};