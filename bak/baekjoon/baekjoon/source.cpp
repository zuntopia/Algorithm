#include <iostream>

using namespace std;

#if 0

int main() {
	unsigned int a, b;
	cin >> a >> b;
	int pos = 1;
	while(true) {
		pos = pos * 10;

		cout << (a*((b % pos) / ( pos/10 ))) << endl;

		if (b / pos == 0) break;
	}
	cout << a*b << endl;
}

#endif

#if 1
int white=0;
int blue=0;

int arr[129][129];

void find(int sx, int sy, int size) {
	int start = arr[sx][sy];

	if (size == 1) {
		if (start == 0) white++;
		else if (start == 1) blue++;
		return;
	}

	bool clean = true;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (arr[sx+i][sy+j] != start) clean = false;
		
	
	if (clean) {
		if (start == 0) white++;
		else if (start == 1) blue++;
	}
	else {

		find(sx, sy,  size / 2);
		find(sx+(size/2), sy, size / 2);
		find(sx, sy+(size/2), size / 2);
		find(sx+(size/2), sy+(size/2), size / 2);

	}

	return;
}

int main() {
	int def;
	cin >> def;
	for ( int i = 0; i < def; i++) {
		for ( int j = 0; j < def; j++) {
			cin >> arr[i][j];
		}
	}
	find(0, 0, def);
	cout << white << endl;
	cout << blue << endl;
	return 0;
}

#endif