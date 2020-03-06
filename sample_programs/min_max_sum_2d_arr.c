#include <stdio.h>
#include <stdlib.h>

void print_matrix(int *arr, int m, int n) {
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *((arr+i*n) + j));
        }
        printf("\n");
    }
}

void print_matrix_as_in_mem(int *arr, int m, int n) {
    printf("\nMatrix (as in memory):\n");
    for(int *p = arr; p < arr + m * n; p++)
            printf("%d ", *p);
        printf("\n\n");
}

void get_min_max_stats(int *arr, int m, int n) {
    int max_elem=arr[0];
    int min_elem=arr[0];
    int sum_from_max_to_min=0;
    int sum_tmp=arr[0];

    for(int *p = arr+1; p < arr + m * n; p++) {
        if(*p>max_elem) {
            max_elem = *p;
            sum_from_max_to_min = max_elem;
            sum_tmp = max_elem;
        } else {
            sum_tmp += *p;
            if(*p<=min_elem) {
                min_elem = *p;
                sum_from_max_to_min = sum_tmp;
            }
        }
    }
    printf("Matrix maximum element: %d\n", max_elem);
    printf("Matrix minimum element: %d\n", min_elem);
    printf("Sum of matrix elements from max to min: %d\n", sum_from_max_to_min);
    if(sum_from_max_to_min==max_elem)
        printf("Looks like min element preceeds max.\n");
}

int main()
{   
    int row, col, elem;
    printf("Please, enter array #rows: \n");
    scanf("%d", &row);
    printf("Please, enter array #cols: \n");
    scanf("%d", &col);

    int M[row][col];

    printf("Please, enter array[%d][%d] elements: \n", row, col);

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            scanf("%d", &elem);
            M[i][j] = elem;
        }
    }
    print_matrix((int *)M, row, col);
    print_matrix_as_in_mem((int *)M, row, col);
    get_min_max_stats((int *)M, row, col);
    return 0;
}
