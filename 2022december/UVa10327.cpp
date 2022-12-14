#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testcase;

    while(~scanf("%d", &testcase)){

        vector<int> dataSet(testcase);

        for(int i = 0; i < testcase; i++){
            scanf("%d", &dataSet[i]);
        }

        int exchange = 0;

        for(int i = 0; i < testcase; i++){
            for(int j = i + 1; j < testcase; j++){
                if(dataSet[i] > dataSet[j]){
                    exchange++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", exchange);
    }
    return 0;
}