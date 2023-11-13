#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int tasks_b = b/n;
    b%n>0 ? tasks_b++ : tasks_b;
    a>tasks_b ? cout << "Yes\n": cout << "No\n";
}