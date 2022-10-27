#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i];
        sort(arr,arr+n);
        int minN = arr[0];
        long count = 0;
        for (int i = 0; i <n ; ++i) {
            while(arr[i] > minN){
                arr[i] = --arr[i];
                ++count;
            }
        }
        cout << count << endl;
    }
 
    return 0;
}