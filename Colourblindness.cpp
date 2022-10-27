#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    long long i;
    long long j;
    int a;
    string b;
    string c;
    cin>>n;
    int sum=0;
    while(n--){
        cin >> a >> b >> c;
        for(i=0; i<a; i++){
            if(b[i] != c[i] ){
                if (b[i]=='R' || c[i]=='R') sum = 1;
            }
        }
        if(sum == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        sum = 0;
    }
 
    return 0;
}
 