/*
Jiaxin Zhang - 09/28/17 Period:1
Assignment Name: Take In data
Create cin statements*/
//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std; //*
//Fuctions()
void pause() {
	cout << "Press any key to continue. . .";
	while (!_kbhit());
		_getch();
	cout << '/n';
}
//MAIN
void main() {
	bool correct = false;
	int number = 1;
	int diff;
	float piapprox = 3.14;
	double piapprox2 = 3.1415;
	float testpiF;
	double testpiD;
	char letter1 = 'a';
	char letter;
	cout <<"What is 2-1?";
	cin >> diff;
	correct = diff == number;
	if (correct) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}
	cout <<"What are the first 3 digits are pi?";
	cin >> testpiF;
	correct = testpiF == piapprox;
	if (correct) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}
	cout << "What are the first 5 digits of pi?";
	cin >> testpiD;
	correct = testpiD == piapprox2;
	if (correct) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}
	cout << "What is the first letter of the alphabet?";
	cin >> letter;
	correct = letter == letter1;
	if (correct) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}
	pause();
}