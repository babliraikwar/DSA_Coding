#include <iostream>
#include <vector>
using namespace std;

int findodd(int n) {
    int s = 0;
    while (n) {
        int r = n % 10;
        if (r % 2)
            s += r;
        n /= 10; // Corrected: Divide n by 10 to remove the last digit
    }
    return s;
}

int findele(vector<int> p, int n) {
    int max= 0; // Initialize with -1 to handle cases where all sums are 0
    int x = 0; // Initialize max_element to store the element with the max odd sum

    for (int k : p) {
        int ans = findodd(k);
        if (ans> max) {
            max= ans;
            x= k;
        }
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    cout << findele(p, n);
    return 0;
}