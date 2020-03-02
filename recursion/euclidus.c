#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int res;
    printf("Please enter numbers to find GCD:");
    scanf("%d%d", &num1, &num2);
    res = euclidus(num1, num2);
    printf("Result: %d ", res);
    return 0;
}

int euclidus(int a, int b)
{
    if (b==0) 
        return a;
    return euclidus(b, a%b);
}