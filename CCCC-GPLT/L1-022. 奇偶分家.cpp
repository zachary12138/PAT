#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnta = 0, cntb = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(temp % 2 == 0)
            cntb++;
        else
            cnta++;
    }
    cout << cnta << " " << cntb;
    return 0;
}