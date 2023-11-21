#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b){
    if (a<b)
    {
        return a;
    }
    return b;
    
}

int main(){
    string s;
    cin >> s;
    int size = s.size();
    vector <int> z(size,0);
    int l = 0, r = 0;
    for (int i = 1; i < size; i++)
    {
        if (i<=r)
        {
            z[i] = min(r-i+1, z[i-l]);
        }
        while(z[i]+i<size && s[z[i]]==s[z[i]+i]){
            z[i]++;
        }
        if (z[i]+i-1>r)
        {
            r = z[i]+i-1;
            l = i;
        }
        
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << z[i] << " ";
    }
    cout << "\n";

    


}