#include <stdio.h>

void bubble_sort(int a[] , int n)
{
    int i, j , temp ;
    for(i=0 ; i<n; i++){
for (j =0; j<n-i-1; j++ ){
    if(a[j] > a[j+1]){
        temp= a[j];
        a[j] = a[j+1];
        a[j+1]= temp;
    }
}

    }
}
int main()
{
    int a[] = {10, 5, 2, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
