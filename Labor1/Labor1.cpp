#include <iostream> 
//стандартні бібліотеки
using namespace std;
//використання простору стд, щоб не вводити весь час в тілі

int main()
{
    cout << "How many years did the Ukrainian revolution last (1917-1921)?\n";
    //Вивід в консоль

    int sum;
    //для перевірки відповіді
    cin >> sum;

    if (sum == 4)   //якщо відповідь правильна
    {
        cout << "Nice, you good in history\n";
    }

    else //якщо відповідь неправильна
    {
        cout << "Bad answer\n";
    }

}
