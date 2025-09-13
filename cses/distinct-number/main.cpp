// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    int ans = 1;
    
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++){
        ans += (arr[i] != arr[i - 1]);
    }
    
    cout << ans << endl;
    return 0;
}