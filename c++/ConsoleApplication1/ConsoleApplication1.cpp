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
    std::cout << "random number(0,9999) after filter = " << x << std::endl;

    int tm_year;
    time_t time(time_t * time);
    char* ctime(const time_t * time);
    struct tm* localtime(const time_t*time);

    std::cout << "time.1 = " << time << std::endl;
    std::cout << "time.2 = " << ctime << std::endl;
    std::cout << "time.3 = " << localtime << std::endl;
    
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
