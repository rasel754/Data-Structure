#include<iostream>
int linearSearch(int arr[],int size ,int target){
    for (int i=0; i<size; ++i){
        return i;
    }
    return -1;
}

int main (){
    int myArray []={10, 5, 8, 2, 7};
    int arraySize = sizeof(myArray)/sizeof(myArray[0]);
    int targetElement=8;

    //perform linear search
    int index = linearSearch(myArray ,arraySize ,targetElement );

    //output the result
    if (index!=-1){
        std::cout<<"element " << targetElement << "found at index " << index <<std::endl;
    }
    else {
        std::cout << "element "<<targetElement <<"not found in the array"<< std::endl;
    }
    return 0;
}


