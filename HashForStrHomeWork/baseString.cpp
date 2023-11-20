#include <iostream>
using namespace std;

#define p   2000000011
#define x   257



int main(){
    string s;
    cin >> s;
    int size = s.size();
    long long a[size+1];
    long long xp[size+1];
    a[0] = 0;
    xp[0] = 1;
    for (int i = 1; i < size+1; i++)
    {
        a[i] = ((a[i-1]*x)+int(s[i-1]-'`'))%p;
        xp[i] = (xp[i-1]*x)%p;

    }
    int k = 1;
    int n = size;
    while(n-k>0){
        int hash1 = (a[n-k]+a[k]*xp[n-k])%p;
        int hash2 = (a[n]+a[0]*xp[n-k])%p;
        if (hash1==hash2)
        {
            cout << k << "\n";
            return 0;
        }
        k++;
        
    }
    cout << n << "\n";

}