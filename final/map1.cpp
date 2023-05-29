#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("A", "CSE"));
    myDictionary.insert(pair<string, string>("B", "BBA"));
    myDictionary.insert(pair<string, string>("C", "EEE"));

    cout << myDictionary.at("A") << endl;

    for (auto university: myDictionary){
        cout << university.first << "-" << university.second << endl;
    }

return 0;
}
