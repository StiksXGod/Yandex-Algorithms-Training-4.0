#include <iostream>
using namespace std;


int main(){
    int n,m ;
    cin >> n >> m;
    int pole[n][m];
    int dp[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pole[i][j];
            dp[i][j] = 0;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(pole[i][0]==1)dp[i][0] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        if(pole[0][i]==1)dp[0][i] = 1;
    }
    
    
    
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (pole[i][j] == 1)
            {
                int temp = min(dp[i-1][j], dp[i-1][j-1]);
                dp[i][j] = min(temp, dp[i][j-1])+1;
                if (dp[i][j]>max)
                {
                    max = dp[i][j];
                }
            }
            
        }
        
    }
    cout << max << "\n";
    
    
    

    


    return 0;
}