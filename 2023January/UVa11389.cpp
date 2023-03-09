#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

void InputNumber(vector<int> &array){
    for(unsigned int i = 0; i < array.size(); i++){
        scanf("%d", &array[i]);
    }
}

int main(){
    int n, d, r;
    while(scanf("%d%d%d", &n, &d, &r) != EOF && n != 0 && d !=0 && r !=0){
        vector<int> morningRoute(n, 0); //設n個0
        vector<int> eveningRoute(n, 0);
        InputNumber(morningRoute);
        InputNumber(eveningRoute);

        sort(morningRoute.begin(), morningRoute.end());
        sort(eveningRoute.begin(), eveningRoute.end());

        int overtimeAmountLength = 0;
        for(int i = 0; i < n; i++){
            int driverRouteLength = morningRoute[i] + eveningRoute[eveningRoute.size() - i - 1];
            overtimeAmountLength += (d < driverRouteLength) ? driverRouteLength - d : 0;
        }

        printf("%d\n", overtimeAmountLength * r);
    }
    return 0;
}