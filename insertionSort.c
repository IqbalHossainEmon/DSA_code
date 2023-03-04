#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void insertionSort(int a[], int n)
{
    int i, j, item;
    for (i = 1; i < n; i++)
    {
        item = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > item)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = item;
    }
    printf("\nsorted :");
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

    insertionSort(array, size);

    printf("\nArray Elements after insertion sort: ");
    printArray(array, size);

    return 0;
}