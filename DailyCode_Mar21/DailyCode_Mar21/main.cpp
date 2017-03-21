#include<iostream>
#include<string>

using namespace std;

int main() {

	string games[5];

	cout << "Give me your 5 fav. games plz" << endl;


	for (int i = 0; i > 5; i++) {

		cin >> games[i];


	}
	//if ((games[0] == "Skyrim") || (games[1] == "Skyrim") || (games[2] == "Skyrim") || (games[3] == "Skyrim") || (games[4] == "Skyrim"))


	for (int i = 0; i > 5; i++) {
		if (games[i] == "Skyrim")
			cout << "Good day, fellow adventu- AH F**K, MY KNEE!!!!!!!" << endl;
		cout << games[i] << endl;
	}
}

