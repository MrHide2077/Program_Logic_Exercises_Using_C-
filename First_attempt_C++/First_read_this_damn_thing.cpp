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
		cout << endl;	

		//Now  let's talk about constants, this means you can "block" a variable just to be read and not modified
		const int myconst = 1945;
		cout << "What is may damn constant? " << endl << myconst << "\n";
		cout << endl;

		//Now let's make this interesting, let's talk about cin (Now we are gonna introduce data)
		int x_1, y_1;
		cout << "Now enter a number: ";
		cin >> x_1;
		cout << "Now enter another number: ";
		cin >> y_1;
		cout << "The sum of " << x_1 << " and " << y_1 << " is: " << x_1 + y_1 << "\n";
		cout << "I hope you're enjoying this...bye!\n";
		cout << endl;

		//Well.. this is helpful, but use ONLY when the variables are simple. Yeah I'm talkiing about "auto" keyword, this is used to automatically detect the type of the variable, but it can be dangerous if you don't know what the hell you're doing
		auto mydumbnumber = 10; // This is an integer
		auto mydamndouble = 9.5; // This is a double
		auto mydamststring = "Hi"; // This is a string, as you can see, the compiler automatically detects the type, but don't be a fool using this in more complex variables. And you have to assign a value to the variable first
		cout << mydumbnumber << "\n";
		cout << mydamndouble << "\n";	
		cout << mydamststring << "\n";	
		cout << endl;

		//Haha we're gonna talk about operators, you know... +,-,/,*, and blah blah blah. So pay god damn attention, because this is important. Let's start with the basic ones:
		int a, b;
		a = 20;
		b = 15;
		cout << "Addition :" << (a+b) << "\n";
		cout << "Subtraction :" << (a - b) << "\n";
		cout << "Multiplication :" << (a * b) << "\n";
		cout << "Division :" << (a / b) << "\n";	
		cout << "Modulus :" << (a % b) << "\n"; // This is used to get the remainder of a division"
		cout << "Increment :" << (a++) << "\n"; // This is used to increment a variable by 1
		cout << "Decrement :" << (a--) << "\n"; // This is used to decrement a variable by 1. If you came from languages like Java, this this is basically the same thing
		//Let's make it fun, let's talk about assignment operators, this is used to assign a value to a variable, but it can also be used to perform operations on the variable and assign the result to the variable. For example:
		cout << "Assignment operator (+=) :" << (a += 5) << "\n"; // This is used to add a value to a variable and assign the result to the variable
		cout << "Assignment operator (-=) :" << (b -= 5) << "\n"; // This is used to subtract a value from a variable and assign the result to the variable
		cout << "Assignment operator (*=) :" << (a *= 5) << "\n"; // This is used to multiply a variable by a value and assign the result to the variable
		cout << "Assignment operator (/=) :" << (b /= 5) << "\n"; // This is used to divide a variable by a value and assign the result to the variable
		cout << "Assignment operator (%=) :" << (a %= 5) << "\n"; // This is used to get the remainder of a variable divided by a value and assign the result to the variable
		cout << "Assignment operator (|=) :" << (b |= 5) << "\n"; // This is used to perform a bitwise OR operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (&=) :" << (a &= 5) << "\n"; // This is used to perform a bitwise AND operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (^=) :" << (b ^= 5) << "\n"; // This is used to perform a bitwise XOR operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (>>=) :" << (a >>= 5) << "\n"; // This is used to perform a bitwise right shift operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (<<=) :" << (b <<= 5) << "\n"; // This is used to perform a bitwise left shift operation on a variable and a value and assign the result to the variable	
		cout << endl;

		//Now comparison operators, this is used to compare two values and return a boolean value (true or false).
		int val1 = 10;
		int val2 = 20;
		cout << "Is val1 equal to val2? " << (val1 == val2) << "\n"; //It's means that if val1 is equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 not equal to val2? " << (val1 != val2) << "\n"; // It's means that if val1 is not equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 greater than val2? " << (val1 > val2) << "\n"; // It's means that if val1 is greater than val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 less than val2? " << (val1 < val2) << "\n"; // It's means that if val1 is less than val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 greater than or equal to val2? " << (val1 >= val2) << "\n"; // It's means that if val1 is greater than or equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 less than or equal to val2? " << (val1 <= val2) << "\n"; // It's means that if val1 is less than or equal to val2, it will return true (1), otherwise it will return false (0)
		cout << endl;

		//Well it's making interesting, but let's talk about logical operators, this is used to combine two or more conditions and return a boolean value (true or false).
		//We have three logical operators: AND (&&), OR (||) and NOT (!). Same as Java lol:
		int val3 = 10;
		int val4 = 20;
		cout << "Is val3 equal to 10 AND val4 equal to 20? " << ((val3 == 10) && (val4 == 20)) << "\n"; // It's means that if val3 is equal to 10 AND val4 is equal to 20, it will return true (1), otherwise it will return false (0)
		cout << "Is val3 equal to 10 OR val4 equal to 20? " << ((val3 == 10) || (val4 == 20)) << "\n"; // It's means that if val3 is equal to 10 OR val4 is equal to 20, it will return true (1), otherwise it will return false (0)
		cout << "Is val3 not equal to 10? " << (!(val3 == 10)) << "\n"; // It's means that if val3 is not equal to 10, it will return true (1), otherwise it will return false (0)		
		cout << endl;	
		
		//Yeah this will be easy to understand, C++ solve operations in a priority order, this means that it will solve the operations in the following order: 
		cout << "First priority: Parentheses ()\n";
		cout << "Second priority: Exponents ^\n";
		cout << "Third priority: Multiplication * and Division /\n";
		cout << "Fourth priority: Addition + and Subtraction -\n";
		cout << "Fifth priority: Assignment =\n";
		cout << "Sixth priority: Comparison ==, !=, >, <, >=, <=\n";
		cout << "Seventh priority: Logical AND &&\n";
		cout << "Eighth priority: Logical OR ||\n";	
		cout << endl;

		//Now somenthing different, String concatenation
		string str1 = "My name is: ";
		string str2 = "Mr_Hyde";
		cout << str1 + str2 << "\n"; // This is used to concatenate two strings (+)
		//And you can use append() method to concatenate two strings, but it's not recommended because it's slower than using + operator
		cout << str1.append(str2) << "\n"; // This is used to concatenate two strings (append())
		cout << endl;

		//Now length of a string, this is used to get the length of a string (number of characters in a string)
		string str3 = "Damn string length is: ";
		cout << str3 << str3.length() << "\n"; // This is used to get the length of a string (length())
		//Also you can use size() method to get the length of a string, but it's not recommended because it's slower than using length() method
		cout << str3 << str3.size() << "\n"; // This is used to get the length of a string (size())
		cout << endl;

		//Acces string characters, this is used to access a specific character in a string (string[index])
	}
