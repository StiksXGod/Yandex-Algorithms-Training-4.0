#include <iostream>
using namespace  std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* void print_Arr(int *a, int s, int e){
    for (int i = s; i <= e; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    
} */

void merge(int *a, int s, int e, int *b){
    int l1 = s;
    int r1 = s+((e-s)/2);
    int l2 = r1+1;
 /*    print_Arr(a,l1,r1);
    print_Arr(a,l2,e); */
    int i = s;
    while(i<=e){
        if ((a[l1]<a[l2] && l1<=r1)|| l2>e)
        {
            b[i] = a[l1];
            l1++;
        }else{
            b[i] = a[l2];
            l2++;
        }
        i++;
    }
    for (int i = s; i <= e; i++)
    {
        a[i] = b[i];
    }
    

}

void insertionSort(int *a, int s, int e){
    for (int i = s; i <e; i++)
    {
        int temp = i;
        while(a[temp]>a[temp+1] && temp>=s){
            swap(a[temp], a[temp+1]);
            temp--;
        }
    }
    
}

void mergeSort(int *a, int s, int e, int *b){
    
    if (e-s+1<2)
    {
        return;
    }
    if (e-s+1==2)
    {
        if (a[s]>a[s+1])
        {
            swap(a[s], a[s+1]);
        }
        return;
        
    }
    if (e-s+1<=15)
    {
        insertionSort(a,s,e);
        return;
    }
    
    
   
    mergeSort(a,s, s+((e-s)/2), b);
    mergeSort(a,s+((e-s)/2)+1,e,b);
    merge(a,s,e,b);
    

    
}

/*
    1 5 2 4 3
    
    1 5 2

 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a,0,n-1,b);
    // insertionSort(a,0,n-1);
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    

    
}