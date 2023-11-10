#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define pi  3.1415926535

bool onDirect(int x1,int x2, int y1, int y2){
    double chisl_1 = -x1, chisl_2 = -y1;
    double znam_1 = x2-x1, znam_2 = y2-y1;
    if (znam_1 == 0 || znam_2 == 0)
    {
        return false;
    }else{
        return (chisl_1/znam_1)==(chisl_2/znam_2) ? true: false;
    }
    
}

int main(){
    long double res1, res2;
    long double toMid, fromMid, dugs, alfa, betta, gumma;
    long int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    alfa = atan2(x1,y1);
    alfa < 0 ? alfa = pi - abs(alfa) : alfa;
    betta = atan2(x2,y2);
    betta < 0 ? betta = pi - abs(betta): betta;
    gumma = abs(alfa - betta);
    toMid = sqrt(x1*x1+y1*y1);
    fromMid = sqrt(x2*x2+y2*y2);
    if (toMid>=fromMid)
    {
        dugs = gumma*fromMid;
        res2 = dugs + (toMid-fromMid);
    }else{
        dugs = gumma*toMid;
        res2 = dugs + (fromMid-toMid);
    }
    if (onDirect(x1,x2,y1,y2) or (x1==x2 && x2==y1 && y1==y2))
    {
        long double res = toMid * 2;
        cout << setprecision(12) << res << "\n";
        return 0;
    }
    
    
    res1 = fromMid+toMid;
    res1<=res2 ? cout << setprecision(12) << res1 << "\n": cout << setprecision(12) << res2 << "\n";
    return 0;


}