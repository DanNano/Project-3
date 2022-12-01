#include "covid.h"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

vector<Covid> Covid::covidData;

map<string, map<string, int> > Covid::conditionAGM; //condition age group map


void Covid::addStateData(Covid& covid){

}

void  Covid::addYearData(Covid& covid){

}
void Covid::addCondition(Covid& covid){
    string condition = covid.getCondition();
    string ageGroup = covid.getAG();
    int deaths = covid.getCovidDeaths();

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

        Covid covid(row);
        covidData.push_back(row);
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

string Covid::getAG(){
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

void Covid::print(){
    string ages[] ={"0-24", "25-34", "35-44", "45-54", "55-64", "65-74", "75-84", "85+"};

    cout << "AGM SIze ="<< conditionAGM.size() << endl;
    cout << setw(45) << " ";

    for(int i = 0; i < 8; i++){
        cout << setw(10) << ages[i];
    }
    cout << endl;

    for(auto it = conditionAGM.begin(); it!= conditionAGM.end(); it++) {
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

