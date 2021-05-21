#include <iostream>

using namespace std;

int main() {
	int numbers, subset;
	cin >> numbers >> subset;

	//int arr[16] = { 1, 2, 3, 4, 5, 6, 7, 8};

	int arr[256];
	for (int i = 0; i < 256; i++) arr[i] = i + 1;

	for (int i = 0; i < (1 << numbers); i++) { //전체
		for (int j = 0; j < subset; j++) { //출력			
			if (subset & (1 << j )) cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}