#include <iostream>
#include <vector>
using namespace std;



vector<int> merge(vector <int> a, vector <int> b){
    if (a.size()<1)
    {
        return b;
    }else if(b.size()<1){
        return a;
    }
    
    int size = a.size()+b.size();
    vector <int> res;
    int s1 = 0;
    int s2 = 0;
    int sizeA = a.size();
    int sizeB = b.size();
    for (int i = 0; i < size; i++)
    {
        if ((a[s1]<b[s2] and sizeA>s1) || s2>=sizeB)
        {
            res.push_back(a[s1]);
            s1++;
            continue;            
        }else{
            res.push_back(b[s2]);
            s2++;
        }
        
    }
    
    return res;
}
/* 

 5
 1 3 5 5 9
 3
 2 5 6
 1 2 3 5 5 5 6


 */




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n1, n2;
    cin >> n1;
    vector <int> mass1(n1);
    for (size_t i = 0; i < n1; i++)
    {
        cin >> mass1[i];
    }
    cin >> n2;
    vector <int> mass2(n2);
    for (size_t i = 0; i < n2; i++)
    {
        cin >> mass2[i];
    }
    vector <int> res = merge(mass1, mass2);
    
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
    
    


}