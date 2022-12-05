#include <iostream>
#include <fstream>
#include <map>
#include "State.h"
#include "Year.h"
#include "covid.h"
using namespace std;

int main()
{
	string input;
	string input2;
	int inputYear;


	Covid::readFile("C:\\Users\\gabri\\downloads\\Conditions_Contributing_to_COVID-19_Deaths__by_State_and_Age__Provisional_2020-2022.csv");


	cout << "Do you want to view by Year, by State, or totalDeaths: ";
	cin >> input;

	if (input == "State" || input == "state")
	{
		cout << "Please enter initials of State you want to view: ";
		Covid::printStateOptions();
		cin >> input2;

		cout << endl;

		while (true)
		{
            Covid::printState(input2);
			cout << "Please enter another state to view or -1 to exit: ";
			Covid::printStateOptions();
			cin >> input2;
			cout << endl;
		}
	}
	else if (input == "Year" || input == "year")
	{
		cout << "Please select the year for viewing, ranked by total COVID cases: "<< endl;
		Covid::printYearOptions();
		cin >> inputYear;
		cout << endl;

		while (true)
		{
            Covid::printYear(inputYear);

			cout << "Please enter another year to view another: ";
			Covid::printYearOptions();
			cin >> inputYear;
			cout << endl;
		}
    }
	else if (input == "totalDeaths" || input == "totalDeaths")
		{
	    Covid::print();
		}
	else
	{
	cout << "Please enter again: ";
 }
}
