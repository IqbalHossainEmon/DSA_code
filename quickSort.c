#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

int partition(int a[], int beg, int end)
{
    int i, j, pivot, temp;
    // pivot=beg;
    i = beg;
    j = end;
    pivot = end;
    while (i < j)
    {
        while (a[i] <= a[pivot])
            i++;
        while (a[j] > a[pivot])
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;

    return j;
}

void quicksort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int pi = partition(a, beg, end);
        quicksort(a, beg, pi - 1);
        quicksort(a, pi + 1, end);
    }
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

    quicksort(array, 0, size - 1);

    printf("\nArray Elements after quick sort: ");
    printArray(array, size);

    return 0;
}