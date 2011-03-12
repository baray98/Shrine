#ifndef RAWDATABUFFERTEST_H
#define RAWDATABUFFERTEST_H

#include <QObject>

class RawDataBufferTest : public QObject
{
    Q_OBJECT
public:
    explicit RawDataBufferTest(QObject *parent = 0);

private slots:
    void SimulatorTest();
};

#endif // RAWDATABUFFERTEST_H
