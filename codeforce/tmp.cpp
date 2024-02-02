#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, n;
        cin >> x >> n;
        
        int max_balance = 1;
        for (int i = 1; i <= n; ++i) {
            int diff = x / i;
            if (x % i == 0 && diff <= n) {
                max_balance = max(max_balance, diff);
            }
        }
        
        cout << max_balance << endl;
    }
    
    return 0;
}
