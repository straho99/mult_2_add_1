#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = 1;
    
    while(pow(2, k) <= n) {
        k+=1;
    }
    
    cout << k << endl;
    
    int steps[k], i = k-1;

    while (n != 0) {
        if (n % 2 == 0) {
            steps[i] = 1;
        } else {
            steps[i] = 2;
        }
        
        n/=2;
        i--;
    }
    
    for (int j = 0; j < k; j++) {
        if (j == 0) {
            cout << steps[j];
        } else {
            cout << " " << steps[j];
        }
    }
    cout << endl;
    
    return 0;
}
