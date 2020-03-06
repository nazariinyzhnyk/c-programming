#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;

    printf("%d\n", i);
    *pi = 20;
    printf("%d\n", i);
    (*(*ppi)) = 30;
    printf("%d\n", i);
    ***pppi = 40;
    printf("%d\n", i);
    //           A             A+5
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = A + 5;
    int *q = A + 7;
    printf("%d\n", p[0]);  // 6
    printf("%d\n", p[-1]); // 5
    printf("%d\n", p[1]);  // 7
    if (p > q)
        printf("p>q\n");
    else
        printf("p<=q\n");
    
    printf("p-q=%ld\n", p - q); // quantity of cells between pointers

    i = 450;
    char c = 'W';
    double d = -1;
    void *pnt;
    pnt = &i;
    printf("%i\n", *(int*)pnt);
    pnt = &c;
    printf("%c\n", *(char*)pnt);
    pnt = &d;
    printf("%d\n", *(double*)pnt);
    return 0;
}
