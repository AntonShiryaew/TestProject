#include "resultforstringclass.h"
#include "generationstringclass.h"

ResultForStringClass::ResultForStringClass()
{

}
double ResultForStringClass::onResultInString(QStringList list)
{
    double result = 0;
    if (list.length() == 1)
        return list[0].toDouble();
    for (int i = 0; i < list.length(); i++)
    {
        if(list[i] == "/" || list[i] == "*")
        {
            result = onReturnValue(list[i].data()->toLatin1(), list[i-1].toInt(), list[i+1].toInt());
            list[i-1] = QString::number(result);
            list.removeAt(i);
            list.removeAt(i);
            i=i-1;
        }
    }
    for (int i = 0; i < list.length(); i++)
    {
        if(list[i] == "+" || list[i] == "-")
        {
            result = onReturnValue(list[i].data()->toLatin1(), list[i-1].toInt(), list[i+1].toInt());
            list[i-1] = QString::number(result);
            list.removeAt(i);
            list.removeAt(i);
            i = i-1;
        }
    }
    return list[0].toDouble();
}
double ResultForStringClass::onReturnValue(const char operation, const int firstValue, const int SecondValue){

    switch (operation) {
        case '/':
            return firstValue/SecondValue;
        case '*':
            return firstValue*SecondValue;
        case '+':
            return firstValue+SecondValue;
        case '-':
            return firstValue-SecondValue;
    }
}
