#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--){
       string s;
       cin >> s;
       long sum1=0;
       long sum2=0;
        for (int i = 0; i <3 ; ++i) {
           sum1 += (int)s[i];
        }
        for (int i = 3; i <6 ; ++i) {
            sum2 += (int)s[i];
        }
       if(sum1 == sum2) cout << "YES" << endl ;
       else cout << "NO" << endl;
    }
 
    return 0;
}