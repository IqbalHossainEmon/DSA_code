#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void insert(int a[], int n)
{
    int i, x, lo;
    printf("enter the value and position you want to add:");
    scanf("%d%d", &x, &lo);
    for (i = n; i >= lo; i--)
    {
        a[i] = a[i - 1];
    }
    n++;
    a[lo - 1] = x;
    printf("inserted\n");
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
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

    insert(array, size);

    printf("\nArray Elements after insertion: ");
    printArray(array, size);

    return 0;
}