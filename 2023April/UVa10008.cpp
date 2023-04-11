#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>

using namespace std;

char a[10001];

struct data{
    char c;
    int n;
};

struct data s[1000];

bool cmp(struct data a, struct data b){
    if(a.n == b.n)
        return a.c < b.c;
    else
        return a.n > b.n;
}

int main(){

    int n, i, j, sum, max;

    cin >> n;
    getchar();
    
    for(i = 0; i < n; i++){
        gets(a);
        max = 0;
        for(j = 0; j < strlen(a); j++){
            if(isalpha(a[j])){
                char t = toupper(a[j]);
                s[t - 'A'].c = t;
                s[t - 'A'].n++;
            }
        }
    }

    sort(s, s+26, cmp);

    for(int i = 0; i < 26 && s[i].n != 0; i++){
        cout << s[i].c << ' ' << s[i].n << endl;;
    }
    return 0;
}