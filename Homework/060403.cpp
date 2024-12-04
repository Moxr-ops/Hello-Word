#include <stdio.h>

int Position(int* a, int size, int num)
{
    for (int index = 0; index < size; index++)
    {
        if (num <= a[index])
        {
            return index;
        }  
    }
    return size;
}

void printArray(int *a, int size, int index, int num) 
{
    for (int i = 0; i < index; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("%d ", num);
    for (int i = index; i < size; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[5] = {5, 10, 20, 24, 80}, num;

    printf("type a number:\n");
    scanf("%d", &num);
    printArray(a, 5, Position(a, 5, num), num);

    return 0;
}