#include <iostream>

int main(){
    long a, b;
    int count, sum, carry;
    scanf("%ld %ld", &a, &b);
    while(a||b){
        carry = count = 0;
        while (a||b)
        {
            sum = 0;
            sum += a%10+b%10+carry;
            carry = sum / 10;
            if (sum > 9){
                count ++;
            }
            a /= 10;
            b /= 10;
        }
        if (count == 0){
            printf("No carry operation.\n");
        }else if (count == 1)
        {
            printf("1 carry operation.\n");
        }else{
            printf("%d carry operations.\n", count);
        }
        scanf("%ld %ld", &a, &b);
    }
    return 0;
}
/*

#include<stdio.h>

int main(){

    int n, m;

    while(scanf("%d %d", &n, &m) && (n || m)){
        int i;
        int carry = 0;
        int temp = 0;

        while(n || m){
            if((n % 10) + (m % 10) + temp >= 10){
                carry++;
                temp = 1;
            }
            else{
                temp = 0;
            }
            n = n / 10;
            m = m / 10;
        }

        if(carry == 1){
            printf("1 carry operation.\n");
        }
        else if(!carry){
            printf("No carry operation.\n");
        }
        else{
            printf("%d carry operations.\n", carry);
        }
    }

    return 0;
}

*/