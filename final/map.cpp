#include <iostream>
#include <map>
using namespace std;


int main(){

  map<int, int> numbers; //  Defining map

  numbers.insert({1, 10}); //  Inserting Data with key and value 1 is key and 10 is the value
  numbers.insert({2, 20});
  numbers.insert({3, 30});
  numbers.insert({4, 40});
  numbers.insert({5, 50});

  cout << numbers.at(1) << endl; // Printing output manually using at()
  cout << numbers[4] << endl; // Printing output manually // using []


  // using for loop on the map

  for (auto number: numbers){
    cout << number.first << " " << number.second << endl;
  }

  // Let's create objects

  map<int, string>students;

  students.insert({1, "Ali Ibne Masud"});
  students.insert({2, "Sakib Biswash"});
  students.insert({3, "Tanik"});
  students.insert({4, "Noor Hossain"});

  cout << students.at(1) << endl;




 return 0;
}

