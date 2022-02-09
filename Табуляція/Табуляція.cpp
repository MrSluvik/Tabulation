// Дан рядок символів. Замінити в ньому всі пробіли на табуляцію
#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    string text;
    cout << "Вводьте текст :\n";
    getline(cin, text);
    while (text[i]!='\0')
    {
        if (text[i] == ' ') text[i] = '\t';
        i++;
    }
    cout << text << "\n";
}


