#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

class Item{
    public:

    int Q_num, Period, Time;

    bool operator < (const Item& a) const{
        return (Time > a.Time || Time == a.Time && Q_num > a.Q_num);
    }
};

int main(){
    priority_queue<Item> pq;
    char s[20];

    while (scanf("%s", s) && s[0] != '#'){
        Item item;
        scanf("%d%d", &item.Q_num, &item.Period);
        item.Time = item.Period;
        pq.push(item);
    }

    int K;
    scanf("%d", &K);

    while(K--){
        Item r = pq.top();
        pq.pop();
        printf("%d\n", r.Q_num);
        r.Time += r.Period;
        pq.push(r);
    }
    return 0;
}