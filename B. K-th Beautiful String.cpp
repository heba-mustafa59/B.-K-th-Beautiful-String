/* yildiz
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n1, n2, n3;
    cin >> t;

    for (int i = 0; i < t; i++) {
        n3 = 1;
        cin >> n1 >> n2;
        string s(n1, 'a');

        for (; n2 > n3; n3++) {
            n2 -= n3;
        }

        s[n1 - n3 - 1] = 'b';
        s[n1 - n2] = 'b';

        cout << s << "\n";
    }

    return 0;
}
