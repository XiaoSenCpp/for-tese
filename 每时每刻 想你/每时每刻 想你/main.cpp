#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int count = 0;
	for (int i = 0; i < 24; i++){
		for (int x = 0; x < 60; x++){
			for (int y = 0; y < 60; y++)	{
				count++;
				cout << i << ":" << x << ":" << y << "����" << count << "��" << endl;

			}
		}
	}

	cout << "һ������" << count << "��" << endl;

	system("pause");
	return 0;
}
