#include <iostream>
using namespace std;

int main (){

    //null pointer
    int * pPointer = nullptr;
    int numbersArray[3] = {10, 20, 30,};

    pPointer = numbersArray;// assign address to the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "address of numbersArray[0]: " << numbersArray << endl;

    cout << "value at pPointer: " << *pPointer << endl;// output the value of first element using indirection and pointer

    cout << "value at ++pPointer: " << *(++pPointer) << endl;// outputs the value of the second element

    pPointer = numbersArray;// asign address of the first element to pointer

    cout << "value at pPointer++: " << *(pPointer++) << endl;
    return 0;

}