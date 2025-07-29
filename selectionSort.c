#include<stdio.h>
void selection_sort (int a[] , int n)
{
    int i, j , temp , index_min ;

    for (i=0 ; i<n-1; i++){
        index_min = i;
        for (j=i+1; j <n; j++){
            if ( a[j] < a [index_min]){
                index_min = j;
            }
        }
        if(index_min !=  i){
            temp = a[i];
            a[i]=a[index_min];
            a[index_min] = temp;
        }
    }
}
int main()
{
    int a[] = {3, 5, 7, 6, 9, 20};
    int n = sizeof(a) / sizeof(a[0]);

    selection_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
