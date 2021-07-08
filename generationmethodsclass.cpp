#include "generationmethodsclass.h"
#include "QRandomGenerator"

GenerationMethodsClass::GenerationMethodsClass()
{

}
int GenerationMethodsClass::onGenerateNumbersForString()
{
    QRandomGenerator *randomForNumbers = QRandomGenerator::global();
    return randomForNumbers->bounded(-100,100);
}
QString GenerationMethodsClass::onGenerateSymbolForString()
{
    QRandomGenerator *randomForSymbol = QRandomGenerator::global();
    QVector<QString> symbol = {"+","-","*","/"};
    return symbol[randomForSymbol->bounded(0,3)];
}
