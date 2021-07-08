#include "generationstringclass.h"

#include <generationmethodsclass.h>

GenerationStringClass::GenerationStringClass()
{

}
QStringList GenerationStringClass::onGenerateString()
{
    GenerationMethodsClass *number = new GenerationMethodsClass();
    GenerationMethodsClass *symbol = new GenerationMethodsClass();
    int firstNumberFromMethod = number->onGenerateNumbersForString();
    int secondNumberFromMethod = number->onGenerateNumbersForString();
    QString symbolFromMethod = symbol->onGenerateSymbolForString();

    QStringList mainString;
    mainString.append(QString::number(firstNumberFromMethod) + " " + symbolFromMethod + " " + QString::number(secondNumberFromMethod) + " = ? ");

    return mainString;
}
