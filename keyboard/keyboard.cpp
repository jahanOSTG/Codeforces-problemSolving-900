#include<iostream>
using namespace std;
int main(){
    char LorR;
    char text[101];
    char key[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>LorR;
    cin>>text;
    for(int i=0; text[i]!='\0';i++){
        for(int j=0; key[j]!='\0';j++){
            if(text[i]==key[j]){
                if(LorR=='R'){
                    cout<<key[j-1];
                }else if(LorR=='L'){
                     cout<<key[j+1];
                }
                break;
            }
        }
    }
    cout<<endl;
}
