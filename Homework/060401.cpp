#include <stdio.h>

void BubblingSort(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])    
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return;
}

void printArray(int *a, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[6] = {5, 10, 20, 24, 80, 0};

    printf("type a number:\n");
    scanf("%d", a + 5);
    BubblingSort(a, 6);
    printArray(a, 6);

    return 0;
}