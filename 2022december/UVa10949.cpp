#include <iostream>
#include <string>

using namespace std;

int main(){
    string judge;

    while(cin>>judge){
        if(judge == "0"){
            break;
        }

        int difference = 0;
        
        for(int i = 0; i < judge.length(); i++){
            if(i % 2 == 0){
                difference += judge[i] - '0';
            }else{
                difference -= judge[i] - '0';
            }
        }
        if(difference % 11 ==  0){
            cout<<judge<<" is a multiple of 11."<<endl;
        }else{
            cout<<judge<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}