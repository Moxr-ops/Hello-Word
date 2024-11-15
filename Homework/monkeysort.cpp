#include <stdio.h>
#include <random>

void monkeySort(int *array, int size) 
{
    int i, j, temp;
    for (int t = 0; t < 1000; t++)
    {
        for (i = 0; i < size; i++) 
        {
            j = rand() % size;
            if (array[i] > array[j]) 
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }  
}

int main()
{
    int a[5] = {5, 10, 90, 36 , 1};
    monkeySort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d,", a[i]);
    }

    return 0;
}