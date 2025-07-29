#include<stdio.h>
int main ()
{
    int n;
    scanf("%d" , &n);
    int data[n];
    for(int i = 0; i < n; i++){
            int val;
            scanf("%d ", &val);
            data[ i] = val;
    }

//  for (int i=0 ; i< n ; i ++ ){
//    printf("%d\n" , data[i]);
//  }

    int found = -1;
int check = 12;

    for (int i=0 ; i < n ; i++){

        if (data[i] == check ){
            printf("data found %d" , i);
            found = i;
            break;
        }

    }
    if(found != -1){
        printf("data found %d" , found);
    }
    else{
        printf("data not found");
    }
    return 0;

}
