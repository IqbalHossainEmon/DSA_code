#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void binarySearch(int a[], int n)
{
    int x, po = -1, beg, end, mid;
    beg = 0;
    end = n - 1;
    printf("\nenter the data you want to search:");
    scanf("%d", &x);
    while (beg < end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == x)
        {
            po = mid;
            break;
        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (po != -1)
    {
        printf("\ndata founded in %d position", po + 1);
    }
    else
    {
        printf("\nnot founded");
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

    binarySearch(array, size);

    return 0;
}