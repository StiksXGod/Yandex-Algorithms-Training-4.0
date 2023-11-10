#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int *shortedFraction(int *mass){
    int tempM = mass[0];
    while(tempM!=1){
        if (mass[1]%tempM==0 && mass[0]%tempM==0)
        {
            mass[1] = mass[1]/tempM;
            mass[0] = mass[0]/tempM;
        }
        tempM--;
    }
    return mass;
}


int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (b==d)
    {
        int m = a+c;
        int mass[2] = {m, b};
        int *massFin = shortedFraction(mass);
        cout << massFin[0] << " " << massFin[1] << "\n"; 
    }else{
        int tempB = b;
        b = b * d;
        a = a * d;
        d = tempB * d;
        c = c * tempB;
        int m = a+c;
        int mass[2] = {m, b};
        int *massFin = shortedFraction(mass);
        cout << massFin[0] << " " << massFin[1] << "\n";
    }
    

    





    return 0;
}
