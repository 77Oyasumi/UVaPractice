#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int M=1100;
string a,b;
char c[M];
bool cmp(char a,char b)
{
    return a<b;
}
int main()
{
    while(getline(cin,a),getline(cin,b))
    {
        memset(c,0,sizeof(c));
        int la=a.length();
        int lb=b.length();
        sort(&a[0],&a[0]+la,cmp);
        sort(&b[0],&b[0]+lb,cmp);
        int i=0,j=0,l=0;
        while(i<la && j<lb)
        {
            if(a[i]<b[j])
            i++;
            else if(a[i]>b[j])
            j++;
            else
            {
                c[l++]=a[i];
                i++;
                j++;
            }
        }
        printf("%s\n",c);
    }
    return 0;
}