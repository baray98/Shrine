#ifndef RAWDATAABSTRACT_H
#define RAWDATAABSTRACT_H

class RawDataAbstract
{
public:
    RawDataAbstract();
    virtual ~RawDataAbstract();

    virtual int next() = 0;/*!navigate column forward*/
    virtual int prev() = 0;
    virtual int rowCount() = 0;
    virtual int columnCount()=0;
    virtual int currentColumn()=0;
    virtual double data (const int x,const int y)=0;
    virtual int seek(const int index)=0;
    virtual int reset() = 0;

};

#endif // RAWDATAABSTRACT_H
