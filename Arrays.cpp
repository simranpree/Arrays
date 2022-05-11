// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototype
void Greet(string person);



//main function
int main()
{
	string name;
	cout << "Enter your name: ";
	cin >> name;
	Greet(name);//call the function and pass name as parameter 
	Greet("Simran");
	return 0;
}

//function definition
void Greet(string person) {
	cout << "Hello " << person << endl;
}