/*Heading
Luke Hage-9/21/2017 2nd
Display Text
Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	while (!_kbhit());
	_getch();
	cout << '\n';
}

using namespace std;
void main() {
	cout << "My name is Luke Hage" << endl;
	pause();
}