#include <iostream>

using namespace std;

int factorial(int n){

    if(n > 1){
        return n * factorial(n-1);
    }
    else {
        return 1;
    }
}

int main (){

    int number;
    cout << "Please Input a number: ";
   cin >> number;

   cout << "Factorial of " << number << " : " << factorial(number) << endl;

  return 0;
}
