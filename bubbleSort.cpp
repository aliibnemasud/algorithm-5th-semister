#include <iostream>

using namespace std;


int selectionSort(int a[], int n){

    int i,j,temp;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}

int main (){

    int arrayOfNumbers[] = {90, 69, 32,16, 19, 89, 12, 2};
    int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    int x = selectionSort(arrayOfNumbers, N);

    cout << "Bubble Sort: " << endl;

    for (int i=0; i<N-1; i++){
        cout << arrayOfNumbers[i] << endl;
    }


  return 0;
}

