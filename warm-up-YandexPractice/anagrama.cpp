#include <algorithm>
#include <iostream>
using namespace std;

#define MAXSIZE 100000

int max(int a, int b){
    return a>=b ? a: b;
}

int main(){
    string string1;
    string string2;
    cin >> string1;
    cin >> string2;
    if (string1.length()!=string2.length())
    {
        cout << "NO\n";
        return 0;
    }
    
    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());
    string1==string2 ? cout << "YES\n" : cout << "NO\n"; 
    
    


}