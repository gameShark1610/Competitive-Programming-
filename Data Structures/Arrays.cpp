#include <iostream>

using namespace std;



//Function that takes and array as parameter
//It's necessary to pass the size of the paramter
/*
Explanation of why is necessary to pass the size of the array:

When you call printArray(nums, 5), the array nums decays into a pointer — basically, it becomes a memory address pointing to nums[0].
So inside the function, the compiler only knows that arr is a pointer, not a full array.

*/
void ArrayAsParameter(int pass[],int n){

    cout<<sizeof(pass)*n/sizeof(pass[0]);
}

int main(){
    //How to create: data:type array_name[size]
    int arreglosDeInts[5];
    string arregloDeString[10];

    //Initialize the array
    int arreglosDeIntsInicializado[5] = {1,2,3,4,5};
    string arregloDeStringInicializado[4] = {"Hola","Soy", "Pepe","Guillermo"};

    //The size can be skipped if the size should be same as the number of values.
    int SkipSize[]={1,2,3,4,5};

    //Initialize an array with elements to zero, only works with zero, not with other values
    int InitializeToZero[10]={0};

    //Initializing and array of n dimensions with zeros
    //int arrNdimensions[n][n][n] = {0}
    int arrNdimensions[2][3] = {0}



    //Get the size: To get the size we need to divide the total size of the array with the size of one element
    int ArrayOfTenElements[10];
    int sizeofArray = sizeof(ArrayOfTenElements)/sizeof(ArrayOfTenElements[0]);
    cout<<sizeofArray;
    //Passing an array as parameter
    ArrayAsParameter(ArrayOfTenElements, sizeofArray);

    return 0;
}
