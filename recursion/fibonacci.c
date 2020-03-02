#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Please enter number of sequence elements:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Fib %d\n", fiboncci(i));
    }
    return 0;
}

int fiboncci(int number)
{
    if (number == 0) {
        return 0;
    }
    else if (number == 1) {
        return 1;
    }
    else {
        return fiboncci(number - 1) + fiboncci(number - 2);
    }
}