#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int x,y,z;
            cin>>x>>y>>z;

          if ((x & y) == (y & z) && (y & z) == (z & x))
             cout << "YES"<<endl;
          else
            cout << "NO"<<endl;

    }



}
