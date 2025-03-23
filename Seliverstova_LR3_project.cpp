#include <iostream>
#include <string>
using namespace std;

void task1()
{
    int X = 0;
    cout << "Введите натуральное число: ";
    cin >> X;
}

void task2()
{
    //разрабатывается
}

void task3()
{
    //разрабатывается
}

int main()
{
    while(true)
    {
        int task;
        cout << "Task 1. Ввод натурального числа X" << endl;
        cout << "Task 2. Нахождение наибольшей цифры в записи числа X" << endl;
        cout << "Task 3. Нахождение наименьшей цифры в записи числа X" << endl;
        cout << "Введите номер желаемого действия или 0, если вы желаете закрыть приложение: ";
        cin >> task;

        switch(task)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 0: return 0;
        }
        cout << endl;
    }
    return 0;
}