#include <iostream>
#include <stack>
using namespace std;


int main(){
    string bracket;
    cin >> bracket;
    size_t size = bracket.length();
    stack <int> s;
    if (size%2!=0)
    {
        cout << "no\n";
        return 0;
    }
    for(int i = 0; i < size; i++)
    {
        if (bracket[i]=='}' or bracket[i]==']' or bracket[i]==')')
        {
            if (s.empty())
            {
                cout << "no\n";
                return 0;
            }
            else if (s.top()+1==bracket[i] or s.top()+2==bracket[i] or s.top()+2==bracket[i])
            {
                s.pop();
                continue;
            }else{
                cout << "no\n";
                return 0;
            }
            
        }
        
        s.push(int(bracket[i]));
    }
    cout << "yes\n";
    return 0;




}