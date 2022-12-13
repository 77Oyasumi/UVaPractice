#include <iostream>

using namespace std;

int main(){
    int a,b,testCase,i;
    cin>>testCase;
    for(i = 0; i < testCase; i++){
        cin>>a>>b;
        if(a < b){
            cout<<"<"<<endl;
        }else if (a > b){
            cout<<">"<<endl;
        }else{
            cout<<"="<<endl;
        }    
    }
    return 0;
}