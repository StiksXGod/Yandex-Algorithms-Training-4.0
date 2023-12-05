#include <iostream>
#include <vector>

using namespace std;

#define ll  long long
#define MAX_NUM 10e5

vector <vector <int>> matrix(101, vector<int>(101));

const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    short int N,S,F;
    cin >> N >> S >> F;
    vector <int> visited(N+1,0);
    vector <int> dist(N+1,MAX_NUM);
    int minn = 700000;
    short int index = -1;
    for (size_t i = 1; i < N+1; i++)
    {
        for (size_t j = 1; j < N+1; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    int now = S;
    dist[S] = 0;
    for (int i = 1; i < N+1; i++)
    {
        visited[now] = 1;
        for (int j = 1; j < N+1; j++)
        {
            if (matrix[now][j]==-1 or matrix[now][j]==0){
                continue;
            }
            dist[j] = min(dist[j], dist[now]+matrix[now][j]);
        }

        minn = 700000;
        for (int i = 1; i < N+1 ; i++)
        {
            if (dist[i]<minn and visited[i]==0)
            {
                minn = dist[i];
                index = i;
            }
            

        }
        if (index==-1){
            break;

        }
        now = index;
    }
    if (dist[F]==MAX_NUM){
        cout << -1 << "\n";
        return 0;
    }
    cout << dist[F] << "\n";
    

    return 0;
}
