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
			else if (input2 == "AL")
				state.AL();
			else if (input2 == "AK")
				state.AK();
			else if (input2 == "AZ")
				state.AZ();
			else if (input2 == "AR")
				state.AR();
			else if (input2 == "CA")
				state.CA();
			else if (input2 == "CO")
				state.CO();
			else if (input2 == "CT")
				state.CT();
			else if (input2 == "DE")
				state.DE();
			else if (input2 == "FL")
				state.FL();
			else if (input2 == "GA")
				state.GA();
			else if (input2 == "HI")
				state.HI();
			else if (input2 == "ID")
				state.ID();
			else if (input2 == "IL")
				state.IL();
			else if (input2 == "IN")
				state.IN();
			else if (input2 == "IA")
				state.IA();
			else if (input2 == "KA")
				state.KA();
			else if (input2 == "KY")
				state.KY();
			else if (input2 == "LA")
				state.LA();
			else if (input2 == "ME")
				state.ME();
			else if (input2 == "MD")
				state.MD();
			else if (input2 == "MA")
				state.MA();
			else if (input2 == "MI")
				state.MI();
			else if (input2 == "MN")
				state.MN();
			else if (input2 == "MS")
				state.MS();
			else if (input2 == "MO")
				state.MO();
			else if (input2 == "MT")
				state.MT();
			else if (input2 == "NE")
				state.NE();
			else if (input2 == "NV")
				state.NV();
			else if (input2 == "NH")
				state.NH();
			else if (input2 == "NJ")
				state.NJ();
			else if (input2 == "NM")
				state.NM();
			else if (input2 == "NY")
				state.NY();
			else if (input2 == "NC")
				state.NC();
			else if (input2 == "ND")
				state.ND();
			else if (input2 == "OH")
				state.OH();
			else if (input2 == "OK")
				state.OK();
			else if (input2 == "OR")
				state.OR();
			else if (input2 == "PA")
				state.PA();
			else if (input2 == "RI")
				state.RI();
			else if (input2 == "SC")
				state.SC();
			else if (input2 == "SD")
				state.SD();
			else if (input2 == "TN")
				state.TN();
			else if (input2 == "TX")
				state.TX();
			else if (input2 == "UT")
				state.UT();
			else if (input2 == "VT")
				state.VT();
			else if (input2 == "VA")
				state.VA();
			else if (input2 == "WA")
				state.WA();
			else if (input2 == "WV")
				state.WV();
			else if (input2 == "WI")
				state.WI();
			else if (input2 == "WY")
				state.WY();
			else
				"Please enter a state abreviation or enter -1";

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
			else if (inputYear == -1)
			{
				break;
			}
			else
			{
				cout << "Please enter a correct year: " << endl;
			}

			cout << "Please enter another year to view another or -1 to quit: ";
			cin >> inputYear;
			cout << endl;
		}
	}
	else if (input == "-1")
	{
		break;
	}
	else
	{
	  cout << "Please enter again or -1 to exit program: ";
        }
}
