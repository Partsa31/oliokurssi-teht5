#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double h);

private:
    kerros* eka = new kerros();
    kerros* toka = new kerros();
    kerros* kolmas = new kerros();
};

#endif // KERROSTALO_H
