#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int pow;
    int res;

    printf("Please enter number and power:");
    scanf("%d%d", &num, &pow);
    printf("Will raise %d to %dth power.\n", num, pow);
    res = power(num, pow);
    printf("Result: %d ", res);
    return 0;
}

int power(int number, int pwr)
{
    if (pwr){
        return (number * power(number, pwr - 1));
    }
    return 1;
}