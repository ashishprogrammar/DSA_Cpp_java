#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long no = n;
    int count = 0;

    while(no) {
        int rev = no % 10;
        if(rev == 7 || rev == 4)
            count++;
        no /= 10;
    }

    if(count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
