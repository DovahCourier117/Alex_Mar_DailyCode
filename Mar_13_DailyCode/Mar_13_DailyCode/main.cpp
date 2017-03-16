#include <iostream>

using namespace std;

void BadGuy();

int main() {

	while (100 == 100) {
		BadGuy();
		system("pause");
	}
}


void BadGuy() {

	int num = rand() % 100 + 1;

	if (num <= 50) {
		cout << "Goomba!" << endl;
	}
	else if (num >= 51 && num <= 80) {
		cout << "Koopa!" << endl;
	}
	else {
		cout << "Shy Guy!!" << endl;
	}

}
