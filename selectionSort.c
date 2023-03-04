#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void selectionSort(int a[], int n)
{
    int i, j, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("\nsorted:-");
}

int main()
{

    int size;
    printf("enter the size of array:");
    scanf(" %d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d th element:", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Array Elements are: ");
    printArray(array, size);

    selectionSort(array, size);

    printf("\nArray Elements after selection sort: ");
    printArray(array, size);

    return 0;
}