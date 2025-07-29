#include<stdio.h>
void quick_sort(int a[] , int low , int high )
{
    if (low>= high ){
        return;
    }
    int p ;
    p = partition(a, low , high);

    quick_sort( a , low , p-1);
    quick_sort ( a , p+1 , high);
}
int main()
{
    int a[] = {10, 5, 2, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort(a,0, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
