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
    vector <int> way(N+1,-1);
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
    way[S] = 0;
    for (int i = 1; i < N+1; i++)
    {
        visited[now] = 1;
        for (int j = 1; j < N+1; j++)
        {
            if (matrix[now][j]==-1 or matrix[now][j]==0){
                continue;
            }
            if (dist[j]>dist[now]+matrix[now][j]){
                way[j] = now;
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
    if(way[F]==-1){
        cout << "-1\n";
        return 0;
    }
    now = F;
    vector <int> res;
    res.push_back(F);
    while(way[now]!=0){
        res.push_back(way[now]);
        now = way[now];
    }
    for(int i = size(res)-1; i>-1;i--){
        cout << res[i] << " ";

    }
    cout << "\n";

    return 0;
}
