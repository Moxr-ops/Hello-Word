#include <stdio.h>

void det_transposition(int* arr, int r) 
{
    int temp;
    for (int i = 0; i < r; i++) 
    {
        for (int j = i + 1; j < r; j++) 
        {
            temp = *(arr + (i * r) + j);
            *(arr + (i * r) + j) = *(arr + (j * r) + i);
            *(arr + (j * r) + i) = temp;
        }
    }
}

void print_arr(int* a, int r) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < r; j++) 
        {
            printf("%d  ", *(a + (i * r) + j));
        }
        printf("\n");
    }
    return;
}

int main() 
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    det_transposition(&arr[0][0], 3);
    print_arr(&arr[0][0], 3);
    return 0;
}