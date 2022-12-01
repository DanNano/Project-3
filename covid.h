#ifndef COVID_H
#define COVID_H
#include <string>
#include <vector>
#include <map>
using namespace std;

class Covid{
public:

    static void readFile(const string& fileName);

    Covid(const string& row);

    static void print();
    string getAG();
    string getCondition();
    int getCovidDeaths();
    static void addCondition(Covid& covid);
    static void addStateData(Covid& covid);
    static void  addYearData(Covid& covid);
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

    static vector<Covid> covidData;
    static map<string, vector<Covid*> > stateData;
    static map<string, vector<Covid*> > yearData;
    static map<string, map<string, int> > conditionAGM; //condition age group map
};

#endif