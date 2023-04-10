/*
kuti = 10000000 (千萬)
lakh = 100000   (十萬)
hajar = 1000    (千)
shata = 100     (百)

45897458973958
=> 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58

七位七位一個看 4589745 / 8973958 中間用 kuti 相連

100000000
=> 10 kuti
*/

#include <stdio.h>

void bangla(long long num){
    if (num >= 10000000){
        //超過 7 位數, 用遞迴呼叫先處理前段
        bangla(num / 10000000);
        printf(" kuti");
        //取出後 7 位數, 繼續處理
        num %= 10000000;
    }
    if (num >= 100000){
        //印出第6, 7位數以及單位 lakh
        printf(" %lld lakh", num / 100000);
        //取出後 5 位, 繼續處理
        num %= 100000;
    }
    if (num >= 1000){
        //印出第4, 5位數以及單位 hajar
        printf(" %lld hajar", num / 1000);
        //取出後 3 位, 繼續處理
        num %= 1000;
    }
    if (num >= 100){
        //印出第 3 位數以及單位 shata
        printf(" %lld sahta", num / 100);
        //取出後 2 位, 繼續處理
        num %= 100;
    }
    if (num){
        //印出最後 2 位
        printf(" %lld", num);
    }
}

int main(){
    long long num;
    long long countCase = 0;
    //如果還有輸入的資料
    while(scanf("%lld", &num)==1){
        //印出資料組數, 固定是四位的整數, 三個空格 + 一個編號
        printf("%4lld.", ++countCase);
        //如果資料不是 0 呼叫 bangla 函數
        if(num){
            bangla(num);
        }else{
            //如果是0, 直接輸出
            printf(" 0");
        }
        //換行處理下一組資料
        printf("\n");
    }
    return 0;
}