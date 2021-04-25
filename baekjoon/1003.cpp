#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <set>
using namespace std;

int hash0[41];
int hash1[41];


void cheat() {
    hash0[0] = 1;
    hash1[0] = 0;
    hash0[1] = 0;
    hash1[1] = 1;
    for (register int i = 2; i < 41; i++) {
        hash0[i] = hash0[i - 1] + hash0[i - 2];
        hash1[i] = hash1[i - 1] + hash1[i - 2];
    }

}

int main() {
    int a, n;
    cin >> a;
    cheat();
    for (register int i = 0; i < a; i++) {
        cin >> n;
        cout << hash0[n] << " " << hash1[n] << endl;

    }
	return 0;
}
