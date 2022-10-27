#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
        vector<char> v1(m);
        string s;
        cin >> s;
        long balloons = 0;
        for (int i = 0; i <m ; ++i) {
            vector<char>::iterator it = find(v1.begin(), v1.end(), s[i]);
            if (it != v1.end())
                ++balloons;
            else {
                balloons += 2;
                v1.push_back(s[i]);
            }
        }
        cout << balloons << endl;
    }
 
    return 0;
}