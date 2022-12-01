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

	State state;
	Year year;

	Covid::readFile("C:\\Users\\gabri\\downloads\\Conditions_Contributing_to_COVID-19_Deaths__by_State_and_Age__Provisional_2020-2022.csv");
    Covid::print();

	cout << "Do you want to view by Year or by State: ";
	cin >> input;

	if (input == "State")
	{
		cout << "Please enter initials of State you want to view: ";
		cin >> input2;

		cout << endl;

		while (true)
		{
			if (input2 == "-1")
				break;
			if (input2 == "AL")
				state.AL();
			if (input2 == "AK")
				state.AK();
			if (input2 == "AZ")
				state.AZ();
			if (input2 == "AR")
				state.AR();
			if (input2 == "CA")
				state.CA();
			if (input2 == "CO")
				state.CO();
			if (input2 == "CT")
				state.CT();
			if (input2 == "DE")
				state.DE();
			if (input2 == "FL")
				state.FL();
			if (input2 == "GA")
				state.GA();
			if (input2 == "HI")
				state.HI();
			if (input2 == "ID")
				state.ID();
			if (input2 == "IL")
				state.IL();
			if (input2 == "IN")
				state.IN();
			if (input2 == "IA")
				state.IA();
			if (input2 == "KA")
				state.KA();
			if (input2 == "KY")
				state.KY();
			if (input2 == "LA")
				state.LA();
			if (input2 == "ME")
				state.ME();
			if (input2 == "MD")
				state.MD();
			if (input2 == "MA")
				state.MA();
			if (input2 == "MI")
				state.MI();
			if (input2 == "MN")
				state.MN();
			if (input2 == "MS")
				state.MS();
			if (input2 == "MO")
				state.MO();
			if (input2 == "MT")
				state.MT();
			if (input2 == "NE")
				state.NE();
			if (input2 == "NV")
				state.NV();
			if (input2 == "NH")
				state.NH();
			if (input2 == "NJ")
				state.NJ();
			if (input2 == "NM")
				state.NM();
			if (input2 == "NY")
				state.NY();
			if (input2 == "NC")
				state.NC();
			if (input2 == "ND")
				state.ND();
			if (input2 == "OH")
				state.OH();
			if (input2 == "OK")
				state.OK();
			if (input2 == "OR")
				state.OR();
			if (input2 == "PA")
				state.PA();
			if (input2 == "RI")
				state.RI();
			if (input2 == "SC")
				state.SC();
			if (input2 == "SD")
				state.SD();
			if (input2 == "TN")
				state.TN();
			if (input2 == "TX")
				state.TX();
			if (input2 == "UT")
				state.UT();
			if (input2 == "VT")
				state.VT();
			if (input2 == "VA")
				state.VA();
			if (input2 == "WA")
				state.WA();
			if (input2 == "WV")
				state.WV();
			if (input2 == "WI")
				state.WI();
			if (input2 == "WY")
				state.WY();

			cout << "Please enter another state to view or -1 to exit: ";
			cin >> input2;
			cout << endl;
		}
	}
	else if (input == "Year")
	{
		cout << "Please select the year for viewing, ranked by total COVID cases: " << "2020\t" << "2021\t" << "2022\t" << endl;
		cin >> inputYear;
		cout << endl;

		while (true)
		{
			if (inputYear == 2020)
			{
				year.year2020();
				cout << endl;
			}
			else if (inputYear == 2021)
			{
				year.year2021();
				cout << endl;
			}
			else if (inputYear == 2022)
			{
				year.year2022();
				cout << endl;
			}
			else
			{
				cout << "Please enter a correct year: " << endl;
			}

			cout << "Please enter another year to view another: ";
			cin >> inputYear;
			cout << endl;
		}
    }
	else
	{
	cout << "Please enter again: ";
 }
}
