#include "rawdatabuffertest.h"
#include "./../../rawdatasimulator.h"

#include <QtTest>
#include <QDebug>

RawDataBufferTest::RawDataBufferTest(QObject *parent) :
        QObject(parent)
{
}
void RawDataBufferTest::SimulatorTest()
{
    RawDataSimulator sim;
    sim.setColumnCount(10);
    sim.setRowCount(10);

    QVERIFY2(resetTest(&sim),"Simulator Reset Fail");

}
bool RawDataBufferTest::resetTest(RawDataAbstract* const data)
{
    int col = data->columnCount() ;
    int row = data->rowCount();

    data->reset();

    bool result = (data->currentColumn() == -1); //must not point to any column
    result &= (data->columnCount() == col);
    result &= (data->rowCount() == row);

    return result;
}
