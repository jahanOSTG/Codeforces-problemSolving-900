#include<iostream>
using namespace std;
int main(){
    long long n,k,s,t;
    cin>>t;
    while(t--){
        cin>>n>>k>>s;
        long long min_sum=k*(k+1)/2;
        long long max_sum=n*k-(k*(k-1))/2;

        if(s>=min_sum && s<=max_sum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
