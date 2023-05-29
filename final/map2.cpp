#include <iostream>
#include <map>
#include <list>

using namespace std;

int main(){

    map<string, list<string>> students;

    list<string> AliInfo {"Md Rubel Hassan", "181", "3.89"};
    list<string> RakinInfo {"Rakin Absar", "156", "3.74"};
    list<string> KabirInfo {"Kabir Nirob", "500", "2.14"};

    students.insert(pair<string, list<string>>("Ali", AliInfo));
    students.insert(pair<string, list<string>>("Rakin", RakinInfo));
    students.insert(pair<string, list<string>>("Kabir", KabirInfo));


    for (auto student : students){
        cout << student.first << "-";

        for (auto info : student.second ){
            cout << info << endl;
        }

        cout << endl;
    }

    return 0;
}
