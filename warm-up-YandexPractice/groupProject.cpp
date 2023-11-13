#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n,a,b;
        cin  >> n >> a >> b;
        
        if (n%a<=(n/a)*(b-a))
        {
            cout << "YES\n";
            continue;
        }else{
            cout << "NO\n";
        }
        
        

    }
    

}