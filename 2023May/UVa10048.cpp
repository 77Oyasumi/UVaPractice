// 給定一張圖, 點代表十字路口, 邊的權重則代表這條街上平均的噪音大小
// 給定兩點c1, c2, 詢問所有從 c1 到 c2 路徑中, 某路徑擁有的最大噪音與其他路徑的最大噪音相比最小, 請問此路徑的最大噪音為何？（找最大中的最小）

// ACFG 140, ABEG 90, ABDG 120, ACFDG 80 => 80

// 每筆測資會先輸入C,S,Q，代表有 C 個交叉路口，Ｓ條路，Ｑ個巡問

// 接下來Ｓ行輸入c1, c2, d，代表 c1 到 c2 的平均噪音是 d
// 之後會有Ｑ行輸入c1, c2，詢問從 c1 到 c2 的所有路徑中，最小的最大噪音是多少？

// 對每筆test case, 先輸出 Case #
// 再依照 query 輸出答案 有路就輸出數值 沒有就輸出 no path
// 每筆 test case 之間需要空一行

#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

struct Edge{
    int u, v, w;
    bool operator<(const Edge& e) const{
        return w < e.w;
    }
};

int fa[100 + 5];
vector<Edge> G;

void init(int n){
    for(int i = 0; i <= n; i++){
        fa[i] = i;
    }
}

int findr(int x){
    return x == fa[x] ? fa[x] : fa[x] = findr(fa[x]); // 同源嗎? 同源就回傳源, 不同源就回傳你的源
}

bool unite(int x, int y){
    x = findr(x);
    y = findr(y);
    if(x == y){
        return false;  // 同源就不連結，不然會產生環
    }
    fa[x] = y;
    return true;
}

int kruskal(vector<Edge>G, int s, int t){
    for(int i = 0; i < G.size(); i++){
        unite(G[i].u, G[i].v);
        if(findr(s) == findr(t)){
            return G[i].w;
        }
    }
    return -1;
}

int main(){
    IOS
    int n, m, q;
    int cnt = 0;
    
    while(cin >> n >> m >> q){
        if(n == 0 && m == 0 && q == 0) break;
        if(cnt){
            cout << '\n';
        }
        cout << "Case #" << ++cnt << "\n";
        G.clear();
        for(int i = 0; i < m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            G.push_back({u, v, w});
        }

        sort(G.begin(), G.end());

        int s, t;
        
        for(int i = 0; i < q; i++){
            cin >> s >> t;
            init(n);
            int ans = kruskal(G, s, t);
            if(ans == -1){
                cout << "no path\n"; 
            }else{
                cout << ans << "\n";
            }
        }
    }
    return 0;
}