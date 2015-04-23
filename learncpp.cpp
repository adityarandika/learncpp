#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name, second name and age\n";
	string first_name; 
	string second_name;	
	string a;	// first_name is a variable of type string
	double age, month;                // integer variable
	cin >> first_name >> second_name >> age;
	//cin >> second_name;// read characters into first_name
	//cin >> age;				// read an integer
	cout << "Hello, " << first_name << " (age " << age << ")\n\n";
	a = first_name + " " + second_name + "\n";
	month = age * 12;
	cout << "You age in month are: " << month << " Month old\n";
	cout << a << "\n";
	keep_window_open();
	return 0;

}
