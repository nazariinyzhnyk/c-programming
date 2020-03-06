#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int res;
    printf("Please enter number of sequence elements:");
    scanf("%d", &num);
    res = fiboncci(num);
    printf("Fib %d\n", res);
}

int fiboncci(int number) // this is dynamic from down till up approach
{
    int Fibs[number + 1]; // our knowledge base
    Fibs[0] = 0;
    Fibs[1] = 1;
    for (int i = 2; i <= number; i++)
    {
        Fibs[i] = Fibs[i-1] + Fibs[i-2];
    }

    return Fibs[number];
}