#include "rawdatasimulator.h"
#include <vector>
#include <cassert>

using namespace std;

class RawDataSimulator::PrivateData
{
public:
    vector<double> row;
    vector<double> col;

    int m_currenCol;
};

RawDataSimulator::RawDataSimulator()
{
    p_data = new PrivateData;
    reset();
}
RawDataSimulator::~RawDataSimulator()
{
    delete p_data;
}
int RawDataSimulator::next()
{
    assert(false && "Not implemented yet");
    return 0;
}

int RawDataSimulator::prev()
{
    return 0;
}

int RawDataSimulator::rowCount()
{
    return p_data->row.size();
}

int RawDataSimulator::columnCount()
{
    return p_data->col.size();
}
int RawDataSimulator::reset()
{
    p_data->m_currenCol = -1;
}
int RawDataSimulator::currentColumn()
{
    return p_data->m_currenCol;
}

double RawDataSimulator::data(const int x,const int y)
{

}

int RawDataSimulator::seek(const int index)
{

}
int RawDataSimulator::setRowCount(const int size)
{
    p_data->row.clear();
    p_data->row.resize(size);
}

int RawDataSimulator::setColumnCount(const int size)
{
    p_data->col.clear();
    p_data->col.resize(size);
}
