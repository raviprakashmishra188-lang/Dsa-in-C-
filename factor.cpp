// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             cout << i << " ";
//             if (i != n / i)
//                 cout << n / i << " ";
//         }
//     }
// }

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> large;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i)
                large.push_back(n / i);
        }
    }

    for (int i = large.size() - 1; i >= 0; i--) {
        cout << large[i] << " ";
    }

    return 0;
}