#include <iostream>

using namespace std;

 int binarySearchFunction(int elementsArray[], int numberOfElements, int unknownNumber){

     int right, left = 0, mid;
     right = numberOfElements - 1;

     while(left <= right){
        mid = (left + right) / 2;
        if(elementsArray[mid] == unknownNumber){
            return mid;
        }

        if(unknownNumber > elementsArray[mid]){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
     }

    return -1;

 }


int main(){

  int arrayOfNumbers[] = {12, 16, 19, 17, 32, 89, 90, 2, 34};
  int N = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
  int x = 2;
  int result = binarySearchFunction(arrayOfNumbers, N, x);

  if(result==-1){
    cout<<"not found"<<endl;
  }
  else{
    cout<<"found: "<<result<< endl;
  }


 return 0;
}
