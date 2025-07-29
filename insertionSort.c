#include<stdio.h>
void insertion_sort (int a[] ,  int n)
{
    int i , j , item ;
    for ( i=1 ; i< n ;  i++ ){
        item=a[i];

        j=i-1;

        while(j>=0  && a[j]>item ){
            a[j+1] =  a[j];
            j=j-1;
        }
        a[j+1]=item;
    }

}
int main()
{
    int a[] = {10, 5, 2, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);

    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
