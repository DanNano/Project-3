#ifndef COVID_H
#define COVID_H
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Covid{
public:

    static void readFile(const string& fileName);

    Covid(const string& row);

    static void print();
    int getCovidDeaths();
    string getDataAsOf();
    string getStartDate();
    string getEndDate();
    string getGroup();
    string getYear();
    string getMonth();
    string getState();
    string getConditionGroup();
    string getCondition();
    string getIcd10_codes();
    string getAgeGroup();
    string getNumberofMentions();
    string getFlag();
    void printRow();
    static void addCondition(Covid* covid);
    static void addStateData(Covid* covid);
    static void  addYearData(Covid* covid);
    static void  printState(const string& input2);
    static void  printYear(int input2);
    static void printStateOptions();
    static void printYearOptions();
    static string getStateAbrev(string name) ;
private:
    string dataAsOf;
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
    string flag;

    static vector<Covid*> covidData;
    static map<string, vector<Covid*> > stateData;
    static map<string, vector<Covid*> > yearData;
    static map<string, map<string, int> > conditionAGM; //condition age group map
    static map<string, string> states;
    static set<string> stateOptions;
    static set<string> yearOptions;
};

#endif
