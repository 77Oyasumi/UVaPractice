#include <iostream>

using namespace std;

int main(){

    int number, i;

    while(~scanf("%d", &number)){

        int x[number];
        int check[number] = {0};

        for(i = 0; i < number; i ++){
            scanf("%d", &x[i]);
        }

        for(i = 1; i < number; i++){
            check[abs(x[i - 1] - x[i])] = 1;
        }

        for(i = 1; i < number; i++){
            if(check[i] == 0){
                break;
            }
        }

        if(i == number){
            printf("Jolly\n");
        }else{
            printf("Not jolly\n");
        }
    }
    return 0;
}