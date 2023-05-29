#include <iostream>

using namespace std;


int main(){

    int i, j, n, countt;
    cout << "Enter any numbers: ";
    cin >> n;

    countt = 0;

    for(i=0; i< n; i++){

     for(j=0; j< n; j++){

        countt = countt + 1;
        }
    }

    cout << "Count: " << countt << endl;

return 0;
}
