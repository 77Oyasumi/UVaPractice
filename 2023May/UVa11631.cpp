// 一個城市有很多個道路相連, 每條道路每公尺每天花費 1 元, 為了要省錢, 政府決定將部分路燈關掉, 然而仍要讓任兩點之間至少有一條路有路燈.
// 請問在上述條件下, 政府每天最多可以節省多少錢

// 每筆測資會先輸入n, m，分別代表 n 個交叉路口與 m 條道路
// 接下來 m 行輸入, 分別為x, y, z，代表 x 路口與 y 路口距離 z 公尺
// 當 n, m為0, 0時結束

// 對於每筆輸出, 輸出每天最多可以省多少錢

#include <bits/stdc++.h>

using namespace std;

struct Edge{
    int u, v, w;
    bool operator <(const Edge& e) const{
        return w < e.w;
    }
};

int fa[200000 + 5];

void init(int n){
    for(int i = 0; i < n; i++){
        fa[i] = i; // 初始化, 使每個點都自己當頭
    }
}

int findr(int x){
    return x == fa[x] ? fa[x] : fa[x] = findr(fa[x]);
}

bool unite(int x, int y){
    x = findr(x);
    y = findr(y);
    if(x == y){
        return false; // 同源就不牽線
    }
    fa[x] = y; // 牽線, 改源頭
    return true;
}

int kruskal(vector<Edge>& G){
    int ans = 0;
    sort(G.begin(), G.end());
    for(int i = 0; i < G.size(); i++){
        if(unite(G[i].u, G[i].v)){
            ans += G[i].w;
        }
    }
    return ans;
}

int main(){
    int n, m;
    while(cin >> n >> m){
        if(n == 0 && m ==0) break;
        init(n);
        vector<Edge> G;
        int total = 0;
        for(int i = 0; i< m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            G.push_back({u, v, w});
            total += w; // 計算原本要花多少錢, 每輸入一筆, 就加到 total 中
        }
        int ans = kruskal(G);
        cout << total - ans << '\n';
    }
    return 0;
}