#include <iostream>

using namespace std;


int selectionSort(int a[], int n){

    int minimum_number,temp,i,j;

    for(i=0; i<n-1; i++){
        minimum_number = i;

        for(j=i+1; j<n; j++){
            if(a[j] < a[minimum_number] ){
                minimum_number = j;
            }
        }

        if(minimum_number !=i){
            temp = a[i];
            a[i] = a[minimum_number];
            a[minimum_number]= temp;
        }
    }

}

int main (){

    int arrayOfNumbers[] = {90,32, 16, 19, 89, 12};
    int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    int x = selectionSort(arrayOfNumbers, N);


    for (int i=0; i<N-1; i++){
        cout << arrayOfNumbers[i] << endl;
    }


  return 0;
}
