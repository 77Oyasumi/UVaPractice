#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20005;

int fa[MAXN];
int dis[MAXN];

void init(int n){
    for(int i = 1; i < n; i++){
        fa[i] = i;
        dis[i] = 0;
    }
}

int findr(int x){
    if(x == fa[x]){
        return x;
    }
    int root = findr(fa[x]);
    dis[x] += dis[fa[x]]; // 從我這個 root 出發到你那個點要多遠, dis[x] 記載的就是從 root 到這要多遠, 出發點是 root ! 比較好想
    return root;
}

void unite(int x, int y){
    fa[x] = y;
    dis[x] = abs(x - y) % 1000; // x 跟 y 的距離 更新到 x 那邊紀錄
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        init(n);
        string cmd;
        while(cin >> cmd){
            if(cmd[0] == 'O'){
                break;
            }else if(cmd[0] == 'E'){

                int x;
                cin >> x;

                findr(x);
                cout << dis[x] << "\n";
            }else{

                int x, y;
                cin >> x >> y;

                unite(x,y);
            }
        }
    }
    return 0;
}