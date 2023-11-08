#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    int mass[n], middle;
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
    int prefix[n];
    prefix[0] = mass[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + mass[i];
    }
    int min = mass[0], max = mass[n-1];
    for (int i = 0; i < n; i++)
    {
        int before, after;
        if (mass[i]==min)
        {
            middle = prefix[n-1] - min*n;
            cout << middle <<" ";
            continue;
        }else if(mass[i] == max){
            middle = abs(prefix[i]-mass[i]*(i+1));
            cout << middle <<" ";
            continue;
        }else{
            before = abs(prefix[i]-mass[i]*(i+1));
            after = (prefix[n-1] - prefix[i]) - mass[i] *(n-i-1);
            middle = before + after;
            cout << middle << " "; 

        }
        
    }
    cout << "\n";
    

    return 0;
    


    



}