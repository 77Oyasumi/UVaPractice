#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    bool flag = false;

    while(getline(cin, s)){
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '"'){
                if(!flag){
                    printf("``");
                    flag = true;
                }else{
                    printf("''");
                    flag = false;
                }
            }else{
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

/*

int main(){
  string s;
  bool leftorright = 0;
  while( getline( cin, s ) )
  {
    for( int i = 0 ; i < s.length() ; i++ )
      if( s[i] == '"' ){
        if( leftorright )
          printf( "''" );
        else
          printf( "``" );
        leftorright ^= 1;
      }
      else{
        printf( "%c", s[i] );
      }
    printf( "\n" );
  }
  return 0;
}

*/