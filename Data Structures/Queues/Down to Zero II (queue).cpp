// github.com/andy489

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAXN 1000001

vector<int>compute;

int main(){
    int i, j;
    compute.assign(MAXN, -1);
    compute[0] = 0;

    queue<int>q;
    q.push(0);

    int r = 0;
    while (!q.empty()){
        int s = (int)q.size();
        while (s--){
            int cur = q.front();
            q.pop();

            if (compute[cur + 1] == -1){
                compute[cur + 1] = r + 1;
                q.push(cur + 1);
            }

            for (j = 2;j <= cur && j * cur < MAXN;++j){
                if (compute[cur * j] == -1){
                    compute[cur * j] = r + 1;
                    q.push(cur * j);
                }
            }
        }
        ++r;
    }

    int t, n;
    cin >> t;
    
    while (t--){
        cin >> n;
        cout << compute[n] << '\n';
    }
    return 0;
}
