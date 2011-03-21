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
    int reset();
    int currentColumn();
    double data(const int x,const int y);
    int seek(const int index);

    int setRowCount(const int size);
    int setColumnCount(const int size);
private:
    class PrivateData;
    PrivateData* p_data;
};

#endif // RAWDATASIMULATOR_H
