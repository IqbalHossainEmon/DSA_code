#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void linearSearch(int a[], int n)
{
    int x, po = -1;
    printf("\nenter the data you want to search:");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            po = i + 1;
            break;
        }
    }
    if (po != -1)
    {
        printf("\nData founded in %d position in array:", po);
    }
    else
    {
        printf("Data not founded");
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

    linearSearch(array, size);

    return 0;
}