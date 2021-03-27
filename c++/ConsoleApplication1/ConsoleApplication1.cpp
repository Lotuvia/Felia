#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
using std::cout;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "RAND_MAX = " << RAND_MAX << std::endl;
    std::cout << "random number = " << rand() << std::endl;

#pragma region массив

    int box[100] = {};
    int x = 1 + rand() % 9999;
    std::cout << "random number(0,9999) = " << x << std::endl;

    if (x / 10000 == 0)
    {
        x = x * 100;
    }
    else if (x / 1000 == 0)
    {
        x = x * 1000;
    }
    else if (x / 100 == 0)
    {
        x = x * 10000;
    }
    else if (x / 10 == 0)
    {
        x = x * 100000;
    }
    
    for (int i = 0; i < 100; i++)

    {
        int j = 0;


        if (box[j] == 0)
        {
        }
        else
        {
            std::cout << "massive " << box[j] << std::endl;
        }
        j++;
    }

#pragma endregion

  /*  int x = 1 + rand() % 9999;
    std::cout << "random number(0,9999) = " << x << std::endl;

    if (x / 10000 == 0)
    {
        x = x * 100;
    }
    else if (x / 1000 == 0)
    {
        x = x * 1000;
    }
    else if (x / 100 == 0)
    {
        x = x * 10000;
    }
    else if (x / 10 == 0)
    {
        x = x * 100000;
    }
    */

    std::cout << "random number(0,9999) after filter = " << x << std::endl;

    SYSTEMTIME st;
    GetLocalTime(&st);

    std::cout << "time = " << st.wYear << std::endl;

    int year = st.wYear % 100;
    int code = x + year;

    std::cout << "not unique code = " << code << std::endl;

    cin.get();
    system("PAUSE");
    return 0;
}
