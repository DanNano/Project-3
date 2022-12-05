#include "covid.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


set<string> Covid::stateOptions;
set<string> Covid::yearOptions;
vector<Covid*> Covid::covidData;
map<string, vector<Covid*> > Covid::stateData;
map<string, vector<Covid*> > Covid::yearData;
map<string, map<string, int> > Covid::conditionAGM; //condition age group map
map<string, string> Covid::states ={{"AL",  "Alabama"},
                             {"AK",  "Alaska"},
                             {"AZ",  "Arizona"},
                             {"AR",  "Arkansas"},
                             {"CA",  "California"},
                             {"CO",  "Colorado"},
                             {"CT",  "Connecticut"},
                             {"DE",  "Delaware"},
                             {"DC",  "District of Columbia"},
                             {"FL",  "Florida"},
                             {"GA",  "Georgia"},
                             {"HI",  "Hawaii"},
                             {"ID",  "Idaho"},
                             {"IL",  "Illinois"},
                             {"IN",  "Indiana"},
                             {"IA",  "Iowa"},
                             {"KA",  "Kansas"},
                             {"KY",  "Kentucky"},
                             {"LA",  "Louisiana"},
                             {"ME",  "Maine"},
                             {"MD",  "Maryland"},
                             {"MA",  "Massachusetts"},
                             {"MI",  "Michigan"},
                             {"MN",  "Minnesota"},
                             {"MS",  "Mississippi"},
                             {"MO",  "Missouri"},
                             {"MT",  "Montana"},
                             {"NE",  "Nebraska"},
                             {"NV",  "Nevada"},
                             {"NH",  "New Hampshire"},
                             {"NJ",  "New Jersey"},
                             {"NM",  "New Mexico"},
                             {"NY",  "New York"},
                             {"NYC", "New York City"},
                             {"NC",  "North Carolina"},
                             {"ND",  "North Dakota"},
                             {"OH",  "Ohio"},
                             {"OK",  "Oklahoma"},
                             {"OR",  "Oregon"},
                             {"PA",  "Pennsylvania"},
                             {"RI",  "Rhode Island"},
                             {"SC",  "South Carolina"},
                             {"SD",  "South Dakota"},
                             {"TN",  "Tennessee"},
                             {"TX",  "Texas"},
                             {"UT",  "Utah"},
                             {"VT",  "Vermont"},
                             {"VA",  "Virginia"},
                             {"WA",  "Washington"},
                             {"WV",  "West Virginia"},
                             {"WI",  "Wisconsin"},
                             {"WY", "Wyoming"},
                             {"PR", "Puerto Rico"}
};

void Covid::addStateData(Covid* covid){
    string state = covid->getState();
    stateOptions.insert(state);
    if(stateData.find(state) == stateData.end()){

        vector<Covid*> states;
        stateData[state] = states;
    }
    stateData[state].push_back(covid);
}
string Covid::getStateAbrev(string name) {
	for(auto it = states.begin(); it!= states.end(); it++) {
		if(it->second == name) return it->first;
	}
	return "";
}
void Covid::printStateOptions(){
	int i = 0;
	for(auto it= stateOptions.begin(); it!= stateOptions.end(); it++) {
		cout << setw(15) <<right << *it;
		string abrev = getStateAbrev(*it);
		cout << " ("<< abrev<<") ";
		i++;
		if(i%4==0) {
			cout << endl;
		}
	}
}
void Covid::printYearOptions(){

	for(auto it= yearOptions.begin(); it!= yearOptions.end(); it++) {
		cout << *it << ":  ";

	}
}
void  Covid::addYearData(Covid* covid){
    string year = covid->getYear();
    yearOptions.insert(year);
    if(yearData.find(year) == yearData.end()){
     //   cout << "Added year " << year << endl;
        vector<Covid*> years;
        yearData[year] = years;
    }
    yearData[year].push_back(covid);
}
void Covid::addCondition(Covid* covid){
    string condition = covid->getCondition();
    string ageGroup = covid->getAgeGroup();
    int deaths = covid->getCovidDeaths();

    if(conditionAGM.find(condition) == conditionAGM.end()){
        map<string, int> conditionMap;
        conditionAGM[condition] = conditionMap;
    }

    if(conditionAGM[condition].find(ageGroup) == conditionAGM[condition].end()){
        conditionAGM[condition][ageGroup] = 0;

    }
    conditionAGM[condition][ageGroup] += deaths;
}
void Covid::readFile(const string& fileName){
    ifstream ifs(fileName);
    string row;
    getline(ifs, row); // read title row!
    cout << "" << fileName << endl;
    cout << row << endl;
    cout << ifs.eof() << endl;

    while(!ifs.eof()){
        getline(ifs, row);
       // cout << row << endl;

        Covid* covid = new Covid(row);
        covidData.push_back(covid);
        addCondition(covid);
        addStateData(covid);
        addYearData(covid);

       // cout << row << endl;
    }
}

Covid::Covid(const string& row){
    int next = 0;
    int col = 0;

    while (next < row.size()){
        int comma = row.find(",", next);

        if(comma == string::npos){
            comma = row.size();

        }
        string field = row.substr(next, comma - next);
        if(field[0] == '"'){
            int quote = row.find("\"", next + 1);
            field = row.substr(next, quote - next);
            comma = quote;
        }
        switch (col){

            case 0: // DataAsOf;
                dataAsOf = field;
                break;

            case 1: // StartDate;
                startDate = field;
                break;
            case 2: // EndDate;
                endDate = field;
                break;
            case 3: // Group;
                group = field;
                break;
            case 4: // Year;
                year = field;
                break;
            case 5: // Month;
                month = field;
                break;
            case 6: // State;
                state = field;
                break;
            case 7: // ConditionGroup;
                conditionGroup = field;
                break;
            case 8: // Condition;
                condition = field;
                break;
            case 9: // ICD10_codes;
                icd10_codes = field;
                break;
            case 10: // AgeGroup;
            // cout << field << endl;
           /* while(field[1] == 'J'){
                icd10_codes += "," + field;
                int comma = row.find(",", next);

                field = row.substr(next, comma - next);
            } */
                ageGroup = field;
                break;
            case 11: // COVIDDeaths;
                covidDeaths = field;
                break;
            case 12: // NumberofMentions;
                numberofMentions = field;
                break;
            case 13: // Flag;
                flag = field;
                break;

            default:
                break;
        }
        ++col;
        next = comma + 1;
    }
}

string Covid::getAgeGroup(){
    return ageGroup;
}
string Covid::getCondition(){
    return condition;
}
int Covid:: getCovidDeaths(){
   // cout << covidDeaths << endl;
   try {
       return stoi(covidDeaths);
   } catch(std::invalid_argument& e){
       return 0;
   }
}

void Covid::print() {
    string ages[] = {"0-24", "25-34", "35-44", "45-54", "55-64", "65-74", "75-84", "85+"};

  //  cout << "AGM SIze =" << conditionAGM.size() << endl;
    cout << setw(45) << " ";

    for (int i = 0; i < 8; i++) {
        cout << setw(10) << ages[i];
    }
    cout << endl;

    for (auto it = conditionAGM.begin(); it != conditionAGM.end(); it++) {
        if (it->first.size() > 0) {

            cout << setw(45) << it->first;
            for (int i = 0; i < 8; i++) {
                cout << setw(10) << it->second[ages[i]];
            }
            cout << endl;
        }
    }
    /* for(int i = 0; i < 10; i++){

        cout << setw(10) << covidData[i].dataAsOf;
        cout << setw(10) << covidData[i].startDate;
        cout << setw(10) << covidData[i].endDate;
        cout << setw(10) << covidData[i].group;
        cout << setw(10) << covidData[i].year;
        cout << setw(10) << covidData[i].month;
        cout << setw(10) << covidData[i].state;
        cout << setw(10) << covidData[i].conditionGroup;
        cout << setw(10) << covidData[i].condition;
        cout << setw(10) << covidData[i].icd10_codes;
        cout << setw(10) << covidData[i].ageGroup;
        cout << setw(10) << covidData[i].covidDeaths;
        cout << setw(10) << covidData[i].numberofMentions;
        cout << setw(10) << covidData[i].flag;
        cout << endl;
    } */
}
string Covid::getDataAsOf(){
    return dataAsOf;
}
string  Covid::getStartDate(){
    return startDate;
}
string Covid:: getEndDate(){
    return endDate;
}
string Covid:: getGroup(){
    return group;
}
string Covid:: getYear(){
    return year;
}
string Covid:: getMonth(){
    return month;
}
string Covid:: getState(){
    return state;
}
string Covid:: getConditionGroup(){
    return conditionGroup;
}
string Covid:: getIcd10_codes(){
    return icd10_codes;
}
string Covid:: getNumberofMentions(){
    return numberofMentions;
}
string Covid:: getFlag(){
    return flag;
}

    void Covid::printRow(){
        cout << setw(15) << dataAsOf << setw(15) << startDate << setw(15) << endDate << setw(10) << group << setw(10) << year
        << setw(4) << month << setw(4) << conditionGroup << setw(45) << condition <<setw(15) << icd10_codes << setw(10) << ageGroup
        << setw(10) << covidDeaths << endl;
        /* string dataAsOf;
    string startDate;
    string endDate;
    string group;
    string year;
    string month;
    string state;
    string conditionGroup;
    string condition;
    string icd10_codes;
    string ageGroup;
    string covidDeaths;
    string numberofMentions;
    string flag; */
    }

    void Covid::printState(const string& input2){
    cout << "Print state " << input2 << endl;
    string state = states[input2];
    cout << state << endl;
        for(int i = 0; i < stateData[state].size(); i++){
            stateData[state][i]->printRow();
        }
    }
  void  Covid::printYear(int input2){
      cout << "Print year " << input2 << endl;
      stringstream ss;
      ss << input2;
      string year = ss.str();
      cout << year << endl;
      for(int i = 0; i < yearData[year].size(); i++){
          yearData[year][i]->printRow();
      }
}

