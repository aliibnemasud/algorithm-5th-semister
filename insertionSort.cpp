#include <iostream>

using namespace std;


int insertionSort(int a[], int n){

        int i,j,item;
        for (i=1; i<n; i++){
            item = a[i];
            j = i -1;
            while(j>=0 && a[j]> item){
                a[j+1] = a[j];
                j = j-1;
            }
            a[j+1] = item;
        }
    }

int main (){

    int arrayOfNumbers[] = {90, 69, 32,16, 19, 89, 12, 2};
    int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    int x = insertionSort(arrayOfNumbers, N);

    cout << "Insertion Sort: " << endl;

    for (int i=0; i<N-1; i++){
        cout << arrayOfNumbers[i] << endl;
    }


  return 0;
}

