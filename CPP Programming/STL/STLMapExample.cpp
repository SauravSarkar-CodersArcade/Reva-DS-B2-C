#include<iostream>
#include<map>
using namespace std;
int main()
{   
    map<string, string> stateLanguages;
    stateLanguages.insert(pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string, string>("Bihar", "Bhojpuri"));
    stateLanguages.insert(pair<string, string>("Maharashtra", "Marathi"));
    stateLanguages.insert(pair<string, string>("Assam", "Assamese"));
    stateLanguages["Kerala"] = "Malayalam";
    stateLanguages.erase("Assam");
    // stateLanguages.clear(); // All data will be cleared
    for(auto data : stateLanguages){
       cout << "State: " << data.first << ", Language: " << data.second << "\n"; 
    }
}