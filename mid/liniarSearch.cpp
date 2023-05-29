#include <iostream>

using namespace std;

int linearSearch(int a[], int arrayLength, int unknownNumber){

    for (int i=0; i<arrayLength; i++){
        if(a[i] == unknownNumber){
            return i;
        }
    }

    return -1;
}


int main(){

    int arrayOfNumbers[] = {12, 16, 19, 17, 32};
    int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    cout << N - 1 << endl;
    int unknownNumber = 332;

    cout << "Number Index: " << linearSearch(arrayOfNumbers, N, unknownNumber) << endl;



return 0;
}
