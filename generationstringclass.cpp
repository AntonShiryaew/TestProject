#include "generationstringclass.h"

#include <generator.h>

GenerationStringClass::GenerationStringClass()
{

}
QStringList GenerationStringClass::onGenerateString(const int countNumbers)
{
    Generator *generationMethods = new Generator();
    QStringList mainStringList;
    mainStringList.append(QString::number(generationMethods->onGenerateNumbersForString()));
    for(int i = 1; i < countNumbers; i++){
        QString symbol = generationMethods->onGenerateSymbolForString();
        int number = generationMethods->onGenerateNumbersForString();
        if(symbol == "/")
        {
            while (number == 0)
                number = generationMethods->onGenerateNumbersForString();
            mainStringList.append(symbol);
            mainStringList.append(QString::number(number));
        }
        else
        {
            mainStringList.append(symbol);
            mainStringList.append(QString::number(number));
        }
    }
    return mainStringList;
}
