#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);

    asunto* as1= new asunto();
    asunto* as2 = new asunto();
    asunto* as3 = new asunto();
    asunto* as4 = new asunto();

};

#endif // KERROS_H
