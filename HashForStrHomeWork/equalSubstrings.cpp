#include <iostream>
using namespace std;

#define p   2000000011
#define x   27



int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int size = s.size();
    long long a[size+1];
    long long xp[size+1];
    bool res[n];
    a[0] = 0;
    xp[0] = 1;
    for (int i = 1; i < size+1; i++)
    {
        a[i] = ((a[i-1]*x)+int(s[i-1]))%p;
        xp[i] = (xp[i-1]*x)%p;

    }
    /* for (int i = 1; i < size+1; i++)
    {
        cout << a[i] << " ";
    } */
    //cout << "\n"; 
    for (int i = 0; i < n; i++)
    {
        int len,s1,s2;
        cin >> len >> s1 >> s2;
        int hash1 = (a[s1+len]+a[s2]*xp[len])%p;
        // cout << hash1 << "\n";
        int hash2 = (a[s2+len]+a[s1]*xp[len])%p;
        // cout << hash2 << "\n";
        if (hash1==hash2)
        {
            res[i] = 1;
            continue;
        }
        res[i] = 0;
        
    }
    for (int i = 0; i < n; i++)
    {
        res[i]==1 ? cout << "yes\n": cout << "no\n";
    }
    
    
    return 0;
    
    


}