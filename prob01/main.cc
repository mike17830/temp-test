

//
#include <iostream>
#include <string>


//
using std::cout, std::cin;
using std::endl;
using std::string;


//
int main()
{
	//	Declare variables
	string
		name1, name2,
		emotion,
		animal,
		letter
		;
	unsigned int number;
	float floating_point_number;
	
	//
	cout << "Welcome to MadLibs!" << endl;
	
	//
	cout << "Name: ";
	cin >> name1;
	
	//
	cout << "Emotion: ";
	cin >> emotion;
	
	//
	cout << "Animal: ";
	cin >> animal;
	
	//
	cout << "Number: ";
	cin >> number;
	
	//
	cout << "Letter: ";
	cin >> letter;
	
	//
	cout << "Floating point number between 0 and 100: ";
	cin >> floating_point_number;
	
	//
	cout << "Name: ";
	cin >> name2;
	
	//
	cout
		<< "Dear " << name1 << "," << endl
		<< "I am " << emotion << " that I was not able to complete my homework on time. "
			<< "My pet " << animal << " ate my textbook, and I was only able to retrieve " << number << " pages from its jaws. "
			<< "I hope I can get at least a " << letter << " grade because I've done " << floating_point_number << "% of the work. " << endl
		<< "Sincerely," << endl
		<< name2 << endl
		;
	
	return 0;
}




