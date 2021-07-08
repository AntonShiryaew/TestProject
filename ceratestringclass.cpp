#include "ceratestringclass.h"

#include <QRandomGenerator>
#include <qrandom.h>
#include <QDebug>

CerateStringClass::CerateStringClass()
{

}
QVector<int> CerateStringClass::onGenerateNumbersForString()
{
    QRandomGenerator randomForNumbers;
    QVector<int> twoRandNumbers = {randomForNumbers.bounded(0, 19), randomForNumbers.bounded(0, 30)};
    return twoRandNumbers;
}
QString CerateStringClass::onGenerateSymbolForString()
{
    QRandomGenerator randomForSymbol;
    QString symbol = "";
    if(randomForSymbol.bounded(0,3) == 0)
        return symbol = "+";
    else if (randomForSymbol.bounded(0,3) == 1)
        return symbol = "-";
    else if (randomForSymbol.bounded(0,3) == 2)
        return symbol = "*";
    else
        return symbol = "/";

}
