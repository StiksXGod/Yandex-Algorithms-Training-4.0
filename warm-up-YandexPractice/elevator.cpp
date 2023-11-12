#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long maxlim;
    int counterFloor;
    cin >> maxlim;
    cin >> counterFloor;
    long long lvl[counterFloor+1];
    int lastLvlNoZero;
    lvl[0] = 0;
    for (int i = 1; i < counterFloor+1; i++)
    {
        cin >> lvl[i];
        if (lvl[i]!=0)
        {
            lastLvlNoZero = i;
        }
        

    }
    unsigned long long timeCounter = 0;
    long long tmpElevator = 0;
    int i = lastLvlNoZero, lastIndNoZero = 1;
    bool flagTmpNoZero = false;
    while (i>0)
    {
        if (lvl[i]!=0)
        {
            int temp = lastIndNoZero - i;
            lastIndNoZero = i;
            tmpElevator > 0 ? timeCounter += temp: tmpElevator;
            timeCounter += lvl[i]/maxlim*i*2;
            tmpElevator += lvl[i]%maxlim;
            tmpElevator>0 and !flagTmpNoZero ? timeCounter+=i, flagTmpNoZero = true: tmpElevator;
            if (tmpElevator/maxlim == 1 and tmpElevator%maxlim)
            {
                timeCounter+=i;
            }
            timeCounter += tmpElevator/maxlim*i;
            tmpElevator %= maxlim;
            tmpElevator==0 ? flagTmpNoZero=false: tmpElevator; 

            
        }
        if (i==1 and tmpElevator>0)
        {
            timeCounter+=lastIndNoZero;
            break;
        }
        
        i--;
    }
    cout << timeCounter << "\n";
    


}