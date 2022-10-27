#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n ;
    cin >> n;
 
    while (n--){
        long d;
        cin >> d;
        long arr[d];
        for (int i = 0; i <d ; ++i) {
            cin >> arr[i];
        }
        sort(arr,arr+d);
        bool flag = true;
        for (int i = 0; i <d-1 ; ++i) {
            if (arr[i] == arr[i+1]) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}
 