#include <iostream>
#include <string>

using namespace std;

int main(){

    int kase;

    cin>>kase;

    string Day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(kase--){
        int m, d;

        cin>>m>>d;

        int days = 0;

        for(int i = 0; i < m; i++){
            days += month[i];
        }

        int w = (days + d + 5) % 7; // 1/6 => 禮拜"4", 1/1 => 禮拜"6" 

        cout<<Day[w]<<endl;
    }
    return 0;
}