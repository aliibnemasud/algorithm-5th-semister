#include <iostream>

using namespace std;

int febonacciSeries(int n){

    if(n <= 1){
        return n;
    }
    else {
        return febonacciSeries(n -1) + febonacciSeries(n-2);
    }
}

int main (){

    int n = 9;
    cout << febonacciSeries(n);

  return 0;
}
