#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


pair<int, int> partition(int *a, int l, int r){
    int n = l, e = l, g = l;
    int pivot = a[l+(rand()%(r-l+1))];
    while(n<=r){
        if (a[n]==pivot)
        {
            swap(a[n], a[g]);
            ++g;
        }else if(a[n]<pivot){
            swap(a[g], a[n]);
            swap(a[g], a[e]);
            ++g;
            ++e;
        }
        ++n;
        
    }
    return make_pair(e, g);
     
}

/*
          g
            n     
    2 3 1 5 4 pivot = 4
          e
*/

void quickSort(int *a, int l, int r){
    if (l>=r)
    {
        return;
    }
    pair <int,int> wall = partition(a,l,r);
    quickSort(a,l,wall.first-1);
    quickSort(a,wall.second,r);
    
}



int main(){
    srand(time(0));
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int mass[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
    quickSort(mass,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << "\n";
    return 0;




}