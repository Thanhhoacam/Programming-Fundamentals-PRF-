#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{

    int i;
    int n = 1;
    double x = 1.0;
    time_t t1 = time(NULL); // get current time
    for (i = 0; i < 1000000000; i++)
    {
        x = x + 1;
    }
    time_t t2 = time(NULL); // get current time
    double dt = difftime(t2, t1);
    printf("Cost of 1 billion real number adding operations : %lf sec\n", dt);
    // add 1000000000 int number : Time ??

    t1 = time(NULL); // get current time
    for (i = 0; i < 1000000000; i++)
    {
        n = n + 1;
    }
    t2 = time(NULL); // get current time
    dt = difftime(t2, t1);
    printf("Cost of 1 billion integer number adding operations : %lf sec\n", dt);
    return 0;
}

// note time(NULL) = clock()