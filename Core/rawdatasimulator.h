#ifndef RAWDATASIMULATOR_H
#define RAWDATASIMULATOR_H

#include "rawdataabstract.h"

class RawDataSimulator : public RawDataAbstract
{
public:
    RawDataSimulator();
    virtual ~RawDataSimulator();

    int next();
    int prev();
    int rowCount();
    int columnCount();
};

#endif // RAWDATASIMULATOR_H
