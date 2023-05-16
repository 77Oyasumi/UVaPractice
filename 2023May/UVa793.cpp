// 有 n 台電腦 1~n
// 有若干個指令, 以空白行作為結束
//   指令 c 代表連結 a 與 b
//   指令 q 代表詢問 a 與 b 是否相連

// 輸出 相連 與 不相連 的個數

// input
// 第一行 t 代表有多少組測資
// 每筆測資以空白作為開頭
// 下一行爲共有幾台電腦
// 接下來若干行代表
//    c a b : 連結 a 與 b
//    q a b : 詢問 a 與 b 是否連結

// output
// 對於每筆輸出, 輸出相連與不相連的個數, 中間用逗號隔開
// 兩筆連續的資料中間用空行隔開

#include <bits/stdc++.h>

using namespace std;

int fa[100];
int thesize[100];

void init(){
    for(int i = 0; i < 100; i++){
        fa[i] = i;
        thesize[i] = 1;
    }
}

int findr(int x){
    return x == fa[x] ? fa[x] : fa[x] = findr(fa[x]);
}

void unite(int x, int y){
    x = findr(x);
    y = findr(y);
    if(x == y){
        return;
    }
    if(thesize[x] >= thesize[y]){
        fa[y] =x;
        thesize[x] += thesize[y];
    }else{
        fa[x] = y;
        thesize[y] += thesize[x];
    }
}
