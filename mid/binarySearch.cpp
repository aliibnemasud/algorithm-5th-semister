#include <iostream>

using namespace std;

 int binarySearchFunction(int elementsArray[], int numberOfElements, int unknownNumber){

     int right,left, mid;
     left = 0;
     right = numberOfElements - 1;

     while(left <= right){
        mid = (left + right) / 2;

        if(elementsArray[mid] == unknownNumber){
            return mid;
        }

        if(unknownNumber > elementsArray[mid]){
            right = mid + 1;
        } else {
            left = mid - 1;
        }
     }

    return -1;

 }


int main(){

  int arrayOfNumbers[] = {12, 16, 19, 32, 89, 90};
  int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
  int x = 16;

  int x3 = binarySearchFunction(arrayOfNumbers, N, x);
  cout << x3 << endl;

 return 0;
}
