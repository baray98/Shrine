#ifndef RAWDATAABSTRACT_H
#define RAWDATAABSTRACT_H

class RawDataAbstract
{
public:
    RawDataAbstract();
    virtual ~RawDataAbstract();

    virtual int next() = 0;
    virtual int prev() = 0;
    virtual int rowCount() = 0;
    virtual int columnCount()=0;

};

#endif // RAWDATAABSTRACT_H
