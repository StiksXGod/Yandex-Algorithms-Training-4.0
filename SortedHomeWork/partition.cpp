#include <iostream>
#include <algorithm>
using namespace std;

int partition(long long *mass, int size, long long pivot){
    int i = 0;
    int j = size; 
    while(i<=j){
        while(mass[i]<pivot && i<=j)i++;
        while(mass[j]>pivot && j>=i)j--;
        if (i<j)
        {
            long long temp = mass[i];
            mass[i] = mass[j];
            mass[j] = temp;
            ++i;
            --j;
        }
        
    }
    return i;
    

}

int main(){
    int n;
    long long x;
    cin >> n;
    long long mass[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
    cin >> x;
    int i = partition(mass, n-1, x);
    int i1 = n-i;
    cout << i << "\n" << i1 << "\n";
    return 0;
    

}