#include "generator.h"
#include "QRandomGenerator"

Generator::Generator()
{

}
int Generator::onGenerateNumbersForString()
{
    QRandomGenerator *randomForNumbers = QRandomGenerator::global();
    return randomForNumbers->bounded(-10,10);
}
QString Generator::onGenerateSymbolForString()
{
    QRandomGenerator *randomForSymbol = QRandomGenerator::global();
    QVector<QString> symbol = {"+","-","*","/"};
    return symbol[randomForSymbol->bounded(0,3)];
}
