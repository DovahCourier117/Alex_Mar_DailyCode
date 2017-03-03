#include <iostream>
#include <Windows.h>
#include<stdio.h>

using namespace std;

void JukeBox(int song);



int main() {

	int input;

	cout << "Hello! Please pick a song:" << endl << endl;
	cout << "1: Rick Astley - Never Gonna Give You Up" << endl;
	cout << "2: Rick Astley - Never Gonna Give You Up" << endl;
	cout << "3: Rick Astley - Never Gonna Give You Up" << endl;
	cout << "4: Rick Astley - Never Gonna Give You Up" << endl;
	cout << "5: Rick Astley - Never Gonna Give You Up" << endl;
	cin >> input;
	JukeBox(input);



}

void JukeBox(int song) {

	if (song = 1)
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);
	else if (song = 2)
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);
	else if (song = 3)
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);
	else if (song = 4)
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);
	else if (song = 5)
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);
	else
		PlaySound(TEXT("NGGYU.wav"), NULL, SND_FILENAME);

}