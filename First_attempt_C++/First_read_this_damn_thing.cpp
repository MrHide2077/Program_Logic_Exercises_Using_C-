#include <iostream>
using namespace std;
int main() {
	cout << "Hello World!\n";
	cout << "LMAO dude, now I'm hacker. Go f**k everyone!\n";
	cout << "As you can see I'm new here. Just the beginning folks, now wait for C++ exercises soon!!.\n";
	cout << "Just wait...\n";
		//Trying to print numbers;
		cout << 1 << "\n";
		cout << 1 + 1 << "\n"; // \n is the most used to create a new blank line
		cout << 2 + 1 << "\n";
		cout << 3 + 1 << endl; // endl is also used to create a new blank line
		cout << 4 + 1 << "\t"; // same thing but \t is used to create a tab space
		cout << 5 + 1 << "\\"; // \\ is used to print a backslash
		cout << 6 + 1 << "\"" << "\n"; // \" is used to print a double quote
		cout << endl; // this is used to create a new line (empty)

		// Creating variables...  If you learned Java first, this thing will be easy to understand
		string myname = "Mr_Hyde";
		int mybirthday = 2010;
		double myprom = 90.2;
		char myletter = 'V';
		bool myboolean = true;
		cout << "My name is: " << myname << "\n";
		cout << "My birthday is in the year: " << mybirthday << "\n";
		cout << "My average grade is: " << myprom << "\n";
		cout << "My favorite letter is: " << myletter << "\n";
		cout << "I am a student: " << myboolean << "\n";
		mybirthday = 2002; // Yeah you can overwrite the value of the variable, but NOT the type
		cout << "Naaa, my real birthday is in the year: " << mybirthday << "\n";
		cout << endl;

		int x = 10;
		int y = 13;
		int result = x + y;	// First operations
		cout << "I'm " << result << " years old" << "\n";	

		int xy = 10, yx = 20, yz = 30; // Yeah you can declare multiple variables in one line, but it's not recommended
		cout << "The result of the operation of xy, yx and yz, is: "<< "\n" << xy + yx + yz << "\n";
}