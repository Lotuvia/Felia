
#include <iostream>
#include <stdio.h>
#include <time.h>

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
    int code = x;

    struct tm* ptr;
    time_t It;
    It = time(NULL);
    ptr = localtime(&It);
    printf(asctime(ptr));
  
    return 0;
}
