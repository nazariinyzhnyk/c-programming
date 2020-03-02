// #include's are not actually c code, they are like preprocess step to include libs on top of object code files
#include <stdio.h> // input/output lib
#include <stdbool.h> // to use bool's need to include this lib
#include <inttypes.h> // to use int's with byte specifications

#define N 150 // this will replace every usage of "N" in code with 150

int main() { // int here points that we return int

    printf("N=%d!\n", N);
    printf("Hello, World!\n");
    bool i = true;
    printf("Now I can use bool i: %d\n", i);

    int64_t my_int = 127;
    printf("my_int 64 bytes = %lld\n", my_int);
    my_int = my_int + 1;
    printf("my_int 64 bytes + 1 = %lld\n", my_int);

    int8_t my_int_new = 127;
    printf("my_int_new 8 bytes = %d\n", my_int_new);
    my_int_new += 1;
    printf("my_int_new 8 bytes + 1 = %d\n", my_int_new); // expect overflow and print -128

    int8_t myint = -128;
    printf("myint 8 bytes = %d\n", myint);
    myint -= 1;
    printf("myint 8 bytes - 1 = %d\n", myint); // expect underflow and print 127

    long long int z = -100 + 10U; // signed int + unsigned int will convert to unsigned - be careful!!!
    printf("z=%lld\n", z); // z=4294967206

    long long int y = -100 + (int)10U; // signed int + unsigned int with strict typing
    printf("y=%lld\n", y); // y=-90

    char c = "Я";
    int d = (int)c + 10;
    printf("d=%d\n", d); // d=-85

    2+2; //no effect, but without errors
    printf("%d\n", 4/3); // 1
    double x;
    x = 1 / 2;
    printf("%d\n", x); // !!!! 73896
    x = 1. / 2.;
    printf("%d\n", x); // !!!! 73896 -> %d
    x = 1 / 2;
    printf("%f\n", x); // !!!! 0.0
    x = 1. / 2;
    printf("%f\n", x); // 0.5

    return 0; // 0 here points error code. 0 - no error
}
