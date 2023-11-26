#include <iostream>
#include <vector>
#include <math.h>
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
    vector <int> odd(size,1);
    vector <int> even(size, 0);
    // Нечетные 
    int l = 0, r = 0;
    for (int i = 1; i < size; i++)
    {
        if (i<r)
        {
            odd[i] = min(odd[l+r-i], r-i+1);
        }
        while(s[i+odd[i]]==s[i-odd[i]] && i+odd[i]<size && i-odd[i]>=0){
            odd[i]++;
        }
        if (i+odd[i]-1>r)
        {
            r = i+odd[i]-1, l = i-odd[i]+1;
        }
        
        
    }
    int l1 = -1, r1 = -1;
    // Четные
    for (int i = 0; i < size-1; i++)
    {
        if (i<r1)
        {
            even[i] = min(r1-i, even[l1+r1-i-1]);
        }
        while(s[i-even[i]]==s[i+even[i]+1] && i-even[i]>=0 && i+even[i]+1<size){
            even[i]++;
        }
        if (i+even[i]>r1)
        {
            r1 = i+even[i], l1 = i-even[i]+1;
        }

        
        
    }
    
    long long sum = 0;
    for (int i = 0; i < size-1; i++)
    {
        sum += odd[i]+even[i];
    }
    sum+= odd[size-1];
    cout << sum << "\n";
    


    return 0;
    

}