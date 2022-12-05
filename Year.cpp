#include "Year.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;

void Year::year2020()
{
    int count = 50;
    map<int, string> Y20;

    Y20.insert({ 6702, "Alabama" });
    Y20.insert({ 254, "Alaska" });
    Y20.insert({ 9321, "Arizona" });
    Y20.insert({ 4027, "Arkansas" });
    Y20.insert({ 33578, "California" });
    Y20.insert({ 5073, "Colorado" });
    Y20.insert({ 6298, "Connecticut" });
    Y20.insert({ 1096, "Delaware" });
    Y20.insert({ 21827, "Florida" });
    Y20.insert({ 10454, "Georgia" });
    Y20.insert({ 365, "Hawaii" });
    Y20.insert({ 1541, "Idaho" });
    Y20.insert({ 16721, "Illinois" });
    Y20.insert({ 9775, "Indiana" });
    Y20.insert({ 4769, "Iowa" });
    Y20.insert({ 3510, "Kansas" });
    Y20.insert({ 4619, "Kentucky" });
    Y20.insert({ 7066, "Louisiana" });
    Y20.insert({ 465, "Maine" });
    Y20.insert({ 6729, "Maryland" });
    Y20.insert({ 4914, "Massachusetts" });
    Y20.insert({ 12342, "Michigan" });
    Y20.insert({ 5834, "Minnesota" });
    Y20.insert({ 5162, "Mississippi" });
    Y20.insert({ 8059, "Missouri" });
    Y20.insert({ 1269, "Montana" });
    Y20.insert({ 2253, "Nebraska" });
    Y20.insert({ 3527, "Nevada" });
    Y20.insert({ 828, "New Hampshire" });
    Y20.insert({ 18164, "New Jersey" });
    Y20.insert({ 2886, "New Mexico" });
    Y20.insert({ 16195, "New York" });
    Y20.insert({ 8789, "North Carolina" });
    Y20.insert({ 1513, "North Dakota" });
    Y20.insert({ 15097, "Ohio" });
    Y20.insert({ 5248, "Oklahoma" });
    Y20.insert({ 1612, "Oregon" });
    Y20.insert({ 18407, "Pennsylvania" });
    Y20.insert({ 1918, "Rhode Island" });
    Y20.insert({ 5705, "South Carolina" });
    Y20.insert({ 1715, "South Dakota" });
    Y20.insert({ 7927, "Tennessee" });
    Y20.insert({ 33542, "Texas" });
    Y20.insert({ 1657, "Utah" });
    Y20.insert({ 146, "Vermont" });
    Y20.insert({ 6156, "Virginia" });
    Y20.insert({ 3703, "Washington" });
    Y20.insert({ 1564, "West Virginia" });
    Y20.insert({ 6286, "Wisconsin" });
    Y20.insert({ 461, "Wyoming" });

    cout << "\tYear 2020 Totals: " << endl;
    cout << "Total Deaths: " << "\t\t" << "State Rankings: " << endl;
    cout << "------------------------------------------------------" << endl;

    for (auto it = Y20.begin(); it != Y20.end(); it++)
    {
        cout << it->first << "\t\t\t" << "#" << count << " " << it->second << endl;
        count--;
    }
}

void Year::year2021()
{
    int count = 50;
    map<int, string> Y21;

    Y21.insert({ 9719, "Alabama" });
    Y21.insert({ 839, "Alaska" });
    Y21.insert({ 14060, "Arizona" });
    Y21.insert({ 5336, "Arkansas" });
    Y21.insert({ 48327, "California" });
    Y21.insert({ 6207, "Colorado" });
    Y21.insert({ 3153, "Connecticut" });
    Y21.insert({ 1266, "Delaware" });
    Y21.insert({ 38874, "Florida" });
    Y21.insert({ 17309, "Georgia" });
    Y21.insert({ 744, "Hawaii" });
    Y21.insert({ 2785, "Idaho" });
    Y21.insert({ 11787, "Illionis" });
    Y21.insert({ 10054, "Indiana" });
    Y21.insert({ 3526, "Iowa" });
    Y21.insert({ 3806, "Kansas" });
    Y21.insert({ 8694, "Kentucky" });
    Y21.insert({ 6918, "Lousiana" });
    Y21.insert({ 1433, "Maine" });
    Y21.insert({ 6101, "Maryland" });
    Y21.insert({ 10221, "Massachusetts" });
    Y21.insert({ 14945, "Michigan" });
    Y21.insert({ 5181, "Minnesota" });
    Y21.insert({ 5907, "Mississippi" });
    Y21.insert({ 8946, "Missouri" });
    Y21.insert({ 1816, "Montana" });
    Y21.insert({ 1939, "Nebraska" });
    Y21.insert({ 5645, "Nevada" });
    Y21.insert({ 1204, "New Hampshire" });
    Y21.insert({ 9605, "New Jersey" });
    Y21.insert({ 3704, "New Mexico" });
    Y21.insert({ 14799, "New York" });
    Y21.insert({ 15234, "North Carolina" });
    Y21.insert({ 939, "North Dakota" });
    Y21.insert({ 20536, "Ohio" });
    Y21.insert({ 7850, "Oklahoma" });
    Y21.insert({ 4189, "Oregon" });
    Y21.insert({ 20546, "Pennsylvania" });
    Y21.insert({ 1217, "Rhode Island" });
    Y21.insert({ 9497, "South Carolina" });
    Y21.insert({ 987, "South Dakota" });
    Y21.insert({ 13653, "Tennessee" });
    Y21.insert({ 48786, "Texas" });
    Y21.insert({ 2671, "Utah" });
    Y21.insert({ 312, "Vermont" });
    Y21.insert({ 9668, "Virginia" });
    Y21.insert({ 6165, "Washington" });
    Y21.insert({ 3938, "West Virginia" });
    Y21.insert({ 6076, "Wisconsin" });
    Y21.insert({ 963, "Wyoming" });

    cout << "\tYear 2021 Totals: " << endl;
    cout << "Total Deaths: " << "\t\t" << "State Rankings: " << endl;
    cout << "------------------------------------------------------" << endl;

    for (auto it = Y21.begin(); it != Y21.end(); it++)
    {
        cout << it->first << "\t\t\t" << "#" << count << " " << it->second << endl;
        count--;
    }
}

void Year::year2022()
{
    map<int, string> Y22;
    int count = 50;

    Y22.insert({ 3854, "Alabama" });
    Y22.insert({ 296, "Alaska" });
    Y22.insert({ 5012, "Arizona" });
    Y22.insert({ 2451, "Arkansas" });
    Y22.insert({ 19201, "California" });
    Y22.insert({ 2844, "Colorado" });
    Y22.insert({ 2134, "Connecticut" });
    Y22.insert({ 765, "Delaware" });
    Y22.insert({ 15261, "Florida" });
    Y22.insert({ 6471, "Georgia" });
    Y22.insert({ 55, "Hawaii" });
    Y22.insert({ 956, "Idaho" });
    Y22.insert({ 7739, "Illinois" });
    Y22.insert({ 5225, "Indiana" });
    Y22.insert({ 1887, "Iowa" });
    Y22.insert({ 2104, "Kansas" });
    Y22.insert({ 4943, "Kentucky" });
    Y22.insert({ 2768, "Louisiana" });
    Y22.insert({ 895, "Maine" });
    Y22.insert({ 3745, "Maryland" });
    Y22.insert({ 3654, "Massachusetts" });
    Y22.insert({ 6796, "Michigan" });
    Y22.insert({ 2746, "Minnesota" });
    Y22.insert({ 2912, "Mississippi" });
    Y22.insert({ 4722, "Missouri" });
    Y22.insert({ 644, "Montanta" });
    Y22.insert({ 1046, "Nebraska" });
    Y22.insert({ 2397, "Nevada" });
    Y22.insert({ 660, "New Hampshire" });
    Y22.insert({ 5691, "New Jersey" });
    Y22.insert({ 1656, "New Mexico" });
    Y22.insert({ 7632, "New York" });
    Y22.insert({ 7313, "North Carolina" });
    Y22.insert({ 469, "North Dakota" });
    Y22.insert({ 10353, "Ohio" });
    Y22.insert({ 4002, "Oklahoma" });
    Y22.insert({ 2349, "Oregon" });
    Y22.insert({ 10047, "Pennsylvania" });
    Y22.insert({ 658, "Rhode Island" });
    Y22.insert({ 4090, "South Carolina" });
    Y22.insert({ 535, "South Dakota" });
    Y22.insert({ 6410, "Tennessee" });
    Y22.insert({ 16934, "Texas" });
    Y22.insert({ 1125, "Utah" });
    Y22.insert({ 301, "Vermont" });
    Y22.insert({ 5346, "Virginia" });
    Y22.insert({ 3561, "Washington" });
    Y22.insert({ 2069, "West Virginia" });
    Y22.insert({ 3253, "Wisconsin" });
    Y22.insert({ 288, "Wyoming" });

    cout << "\tYear 2022Totals: " << endl;
    cout << "Total Deaths: " << "\t\t" << "State Rankings: " << endl;
    cout << "------------------------------------------------------" << endl;

    for (auto it = Y22.begin(); it != Y22.end(); it++)
    {
        cout << it->first << "\t\t\t" << "#" << count << " " << it->second << endl;
        count--;
    }
}
