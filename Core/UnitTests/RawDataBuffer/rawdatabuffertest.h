#ifndef RAWDATABUFFERTEST_H
#define RAWDATABUFFERTEST_H

#include <QObject>

class RawDataAbstract;

class RawDataBufferTest : public QObject
{
    Q_OBJECT
public:
    explicit RawDataBufferTest(QObject *parent = 0);

private slots:
    void SimulatorTest();
private:
    bool resetTest(RawDataAbstract* const data);
};

#endif // RAWDATABUFFERTEST_H
