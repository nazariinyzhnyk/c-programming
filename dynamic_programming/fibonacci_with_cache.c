#include <stdio.h>

int cache[100] = {0};

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

int fiboncci(int number) // this is dynamic from up till down approach
{
    if (number <= 1) return number;
    else {
        if (cache[number] != 0) {
            return cache[number];
        }
        else {
            cache[number] = fiboncci(number - 1) + fiboncci(number - 2);
            return cache[number];
        } 
    }
}