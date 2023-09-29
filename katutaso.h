#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"
class katutaso : public kerros
{
public:
    katutaso();

    void maaritaAsunnot()override;
    double laskeKulutus(double);

    asunto* as1 = new asunto();
    asunto* as2 = new asunto();
};

#endif // KATUTASO_H
