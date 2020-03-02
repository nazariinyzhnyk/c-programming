#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int res;
    printf("Please enter number to take factorial:");
    scanf("%d", &num);
    printf("Will calc %d!\n", num);
    res = factorial(num);
    printf("Result: %d ", res);
    return 0;
}

int factorial(int number)
{
    if (number==0 || number == 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}