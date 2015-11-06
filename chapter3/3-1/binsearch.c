#include <stdio.h>

int binsearch(int v[], int x, int n);

int main(void)
{
    int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%d\n", binsearch(v, 10, 10));
    printf("%d\n", binsearch(v, 5, 10));
    printf("%d\n", binsearch(v, 99, 10));
    return 0;
}

int binsearch(int v[], int x, int n)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high && x != v[mid])
    {
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;
    else 
        return -1;
}