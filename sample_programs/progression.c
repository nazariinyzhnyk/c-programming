#include <stdio.h>

int main()
{
    int start, stop, step;
    printf("Enter start, stop, step: ");
    scanf("%d%d%d", &start, &stop, &step);
    printf("Will perform progression for %d %d %d\n", start, stop, step);
    int x = start;
    while (x < stop) {
        printf("x=%d\n", x);
        x += step;
    }
    printf("Final x=%d\n", x);
    return 0;
}
