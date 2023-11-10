#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int findMin(vector<int> mass, int l, int r){
    int min = 1000000;
    for (int i = l; i <= r; i++)
    {
        if (mass[i]<min)
        {
            min = mass[i];
        }
        
    }
    return min;
    
}


int main(){
    int c, n, l, r;
    cin >> c >> n;
    vector<int> mass(c);
    for (int i = 0; i < c; i++)
    {
        cin >> mass[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        cin >> l >> r;
        int min = findMin(mass, l, r);
        for (int i1 = l; i1 <= r; i1++)
        {
            if (min != mass[i1])
            {
                flag = true;
                cout << mass[i1] << "\n";
                break;
            }
            
        }
        
        if (!flag)
        {
            cout << "NOT FOUND\n";
        }
        
     
        
        
    }
    





    return 0;
}
