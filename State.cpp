#include "State.h"
#include <iostream>
#include <map>
using namespace std;

void State::AL()
{
	map<int, int> AL;

	AL.insert({ 2020, 6706 });
	AL.insert({ 2021, 9719 });
	AL.insert({ 2022, 3854 });

	cout << "\tAlabama Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = AL.begin(); it != AL.end(); it++)
	{
		cout << it->first << "\t\t" << it->second << endl;
	}
}
void State::AK()
{
	map<int, int> AS;

	AS.insert({ 2020, 254 });
	AS.insert({ 2021, 839 });
	AS.insert({ 2022, 296 });

	cout << "\tAlaska Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = AS.begin(); it != AS.end(); it++)
	{
		cout << it->first << "\t\t" << it->second << endl;
	}
}
void State::AZ()
{
	map<int, int> AZ;

	AZ.insert({ 2020, 9321 });
	AZ.insert({ 2021, 14060 });
	AZ.insert({ 2022, 5012 });

	cout << "\tArizona Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = AZ.begin(); it != AZ.end(); it++)
	{
		cout << it->first << "\t\t" << it->second << endl;
	}
}
void State::AR()
{
	map<int, int> AK;

	AK.insert({ 2020, 4027 });
	AK.insert({ 2021, 5336 });
	AK.insert({ 2022, 2451 });

	cout << "\tArkansas Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = AK.begin(); it != AK.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;

}
void State::CA()
{
	map<int, int> CA;

	CA.insert({ 2020, 33578 });
	CA.insert({ 2021, 48327 });
	CA.insert({ 2022, 19201 });

	cout << "\tCalifornia Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = CA.begin(); it != CA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::CO()
{
	map<int, int> CO;

	CO.insert({ 2020, 5073 });
	CO.insert({ 2021, 6207 });
	CO.insert({ 2022, 2844 });

	cout << "\tColorado Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = CO.begin(); it != CO.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::CT()
{
	map<int, int> CT;

	CT.insert({ 2020, 6298 });
	CT.insert({ 2021, 3153 });
	CT.insert({ 2022, 2134 });

	cout << "\tConnecticut Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = CT.begin(); it != CT.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::DE()
{
	map<int, int> DE;

	DE.insert({ 2020, 1096 });
	DE.insert({ 2021, 1266 });
	DE.insert({ 2022, 765 });

	cout << "\tDelaware Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = DE.begin(); it != DE.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::FL()
{
	map<int, int> FL;

	FL.insert({ 2020, 21827 });
	FL.insert({ 2021, 38874 });
	FL.insert({ 2022, 15261 });

	cout << "\tFlorida Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = FL.begin(); it != FL.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::GA()
{
	map<int, int> GA;

	GA.insert({ 2020, 10454 });
	GA.insert({ 2021, 17309 });
	GA.insert({ 2022, 6471 });

	cout << "\tGeorgia Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = GA.begin(); it != GA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::HI()
{
	map<int, int> HI;

	HI.insert({ 2020, 365 });
	HI.insert({ 2021, 744 });
	HI.insert({ 2022, 550 });

	cout << "\tHawaii Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = HI.begin(); it != HI.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::ID()
{
	map<int, int> ID;

	ID.insert({ 2020, 1541 });
	ID.insert({ 2021, 2785 });
	ID.insert({ 2022, 956 });

	cout << "\tIdaho Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = ID.begin(); it != ID.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::IL()
{
	map<int, int> IL;

	IL.insert({ 2020, 16721 });
	IL.insert({ 2021, 11787 });
	IL.insert({ 2022, 7739 });

	cout << "\tIllinois Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = IL.begin(); it != IL.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::IN()
{
	map<int, int> IN;

	IN.insert({ 2020, 9775 });
	IN.insert({ 2021, 10054 });
	IN.insert({ 2022, 5225 });

	cout << "\tIndiana Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = IN.begin(); it != IN.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::IA()
{
	map<int, int> IA;

	IA.insert({ 2020, 4769 });
	IA.insert({ 2021, 3526 });
	IA.insert({ 2022, 1887 });

	cout << "\tIowa Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = IA.begin(); it != IA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::KA()
{
	map<int, int> KA;

	KA.insert({ 2020, 3510 });
	KA.insert({ 2021, 3806 });
	KA.insert({ 2022, 2104 });

	cout << "\tKansas Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = KA.begin(); it != KA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::KY()
{
	map<int, int> KY;

	KY.insert({ 2020, 4619 });
	KY.insert({ 2021, 8694 });
	KY.insert({ 2022, 4943 });

	cout << "\tKentucky Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = KY.begin(); it != KY.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::LA()
{
	map<int, int> LA;

	LA.insert({ 2020, 7066 });
	LA.insert({ 2021, 6918 });
	LA.insert({ 2022, 2768 });

	cout << "\tLouisiana Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = LA.begin(); it != LA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::ME()
{
	map<int, int> ME;

	ME.insert({ 2020, 465 });
	ME.insert({ 2021, 1433 });
	ME.insert({ 2022, 895 });

	cout << "\tMaine Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto i = ME.begin(); i != ME.end(); i++)
		cout << i->first << "\t\t" << i->second << endl;
}
void State::MD()
{
	map<int, int> MD;

	MD.insert({ 2020, 6729 });
	MD.insert({ 2021, 6101 });
	MD.insert({ 2022, 3745 });

	cout << "\tMaryland Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MD.begin(); it != MD.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MA()
{
	map<int, int> MA;

	MA.insert({ 2020, 10221 });
	MA.insert({ 2021, 5578 });
	MA.insert({ 2022, 3645 });

	cout << "\tMassachusetts Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MA.begin(); it != MA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MI()
{
	map<int, int> MI;

	MI.insert({ 2020, 12342 });
	MI.insert({ 2021, 14945 });
	MI.insert({ 2022, 6796 });

	cout << "\tMichigan Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MI.begin(); it != MI.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MN()
{
	map<int, int> MN;

	MN.insert({ 2020, 5834 });
	MN.insert({ 2021, 5181 });
	MN.insert({ 2022, 2746 });

	cout << "\tMinnesota Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MN.begin(); it != MN.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MS()
{
	map <int, int> MS;

	MS.insert({ 2020, 5162 });
	MS.insert({ 2021, 5907 });
	MS.insert({ 2022, 2912 });

	cout << "\tMississippi Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MS.begin(); it != MS.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MO()
{
	map<int, int> MO;

	MO.insert({ 2020, 8059 });
	MO.insert({ 2021, 8946 });
	MO.insert({ 2022, 4722 });

	cout << "\tMissouri Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MO.begin(); it != MO.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::MT()
{
	map<int, int> MT;

	MT.insert({ 2020, 1269 });
	MT.insert({ 2021, 1816 });
	MT.insert({ 2022, 644 });

	cout << "\tMontana Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = MT.begin(); it != MT.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NE()
{
	map<int, int> NE;

	NE.insert({ 2020, 2253 });
	NE.insert({ 2021, 1939 });
	NE.insert({ 2022, 1046 });

	cout << "\tNebraska Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NE.begin(); it != NE.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NV()
{
	map<int, int> NV;

	NV.insert({ 2020, 3527 });
	NV.insert({ 2021, 5645 });
	NV.insert({ 2022, 2397 });

	cout << "\tNevada Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NV.begin(); it != NV.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NH()
{
	map<int, int> NH;

	NH.insert({ 2020, 828 });
	NH.insert({ 2021, 1204 });
	NH.insert({ 2022, 660 });

	cout << "\tNew Hampshire Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NH.begin(); it != NH.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NJ()
{
	map<int, int> NJ;

	NJ.insert({ 2020, 18164 });
	NJ.insert({ 2021, 9605 });
	NJ.insert({ 2022, 5691 });

	cout << "\tNew Jersey Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NJ.begin(); it != NJ.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NM()
{
	map<int, int> NM;

	NM.insert({ 2020, 2886 });
	NM.insert({ 2021, 3704 });
	NM.insert({ 2022, 1656 });

	cout << "\tNew Mexico Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NM.begin(); it != NM.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NY()
{
	map<int, int> NY;

	NY.insert({ 2020, 16195 });
	NY.insert({ 2021, 14799 });
	NY.insert({ 2022, 7632 });

	cout << "\tNew York Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NY.begin(); it != NY.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::NC()
{
	map<int, int> NC;

	NC.insert({ 2020, 8789 });
	NC.insert({ 2021, 15234 });
	NC.insert({ 2022, 7313 });

	cout << "\tNorth Carolina Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = NC.begin(); it != NC.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::ND()
{
	map<int, int> ND;

	ND.insert({ 2020, 1513 });
	ND.insert({ 2021, 939 });
	ND.insert({ 2022, 469 });

	cout << "\tNorth Dakota Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = ND.begin(); it != ND.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::OH()
{
	map<int, int> OH;

	OH.insert({ 2020, 15097 });
	OH.insert({ 2021, 20536 });
	OH.insert({ 2022, 10353 });

	cout << "\tOhio Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = OH.begin(); it != OH.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::OK()
{
	map<int, int> OK;

	OK.insert({ 2020, 5248 });
	OK.insert({ 2021, 7850 });
	OK.insert({ 2022, 4002 });

	cout << "\tOklahoma Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = OK.begin(); it != OK.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::OR()
{
	map<int, int> OR;

	OR.insert({ 2020, 1612 });
	OR.insert({ 2021, 4189 });
	OR.insert({ 2022, 2349 });

	cout << "\tOregon Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = OR.begin(); it != OR.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::PA()
{
	map<int, int> PA;

	PA.insert({ 2020, 18407 });
	PA.insert({ 2021, 20546 });
	PA.insert({ 2022, 10047 });

	cout << "\tPennsylvania Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = PA.begin(); it != PA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::RI()
{
	map<int, int> RI;

	RI.insert({ 2020, 1918 });
	RI.insert({ 2021, 1217 });
	RI.insert({ 2022, 658 });

	cout << "\tRhode Island Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = RI.begin(); it != RI.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::SC()
{
	map<int, int> SC;

	SC.insert({ 2020, 5705 });
	SC.insert({ 2021, 9497 });
	SC.insert({ 2022, 4090 });

	cout << "\tSouth Carolina Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = SC.begin(); it != SC.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::SD()
{
	map<int, int> SD;

	SD.insert({ 2020, 1715 });
	SD.insert({ 2021, 987 });
	SD.insert({ 2022, 535 });

	cout << "\tSouth Dakota Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = SD.begin(); it != SD.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::TN()
{
	map<int, int> TN;

	TN.insert({ 2020, 7927 });
	TN.insert({ 2021, 13653 });
	TN.insert({ 2022, 6410 });

	cout << "\tTennessee Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = TN.begin(); it != TN.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::TX()
{
	map<int, int> TX;

	TX.insert({ 2020, 33542 });
	TX.insert({ 2021, 48786 });
	TX.insert({ 2022, 16934 });

	cout << "\tTexas Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = TX.begin(); it != TX.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::UT()
{
	map<int, int> UT;

	UT.insert({ 2020, 1657 });
	UT.insert({ 2021, 2671 });
	UT.insert({ 2022, 1125 });

	cout << "\tUtah Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = UT.begin(); it != UT.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::VT()
{
	map<int, int> VT;

	VT.insert({ 2020, 146 });
	VT.insert({ 2021, 312 });
	VT.insert({ 2022, 301 });

	cout << "\tVermont Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = VT.begin(); it != VT.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::VA()
{
	map<int, int> VA;

	VA.insert({ 2020, 6156 });
	VA.insert({ 2021, 9668 });
	VA.insert({ 2022, 5346 });

	cout << "\tVirginia Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = VA.begin(); it != VA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::WA()
{
	map<int, int> WA;

	WA.insert({ 2020, 3703 });
	WA.insert({ 2021, 6156 });
	WA.insert({ 2022, 3561 });

	cout << "\tWashington Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = WA.begin(); it != WA.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::WV()
{
	map<int, int> WV;

	WV.insert({ 2020, 1564 });
	WV.insert({ 2021, 3938 });
	WV.insert({ 2022, 2069 });

	cout << "\tWest Virginia Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = WV.begin(); it != WV.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::WI()
{
	map<int, int> WI;

	WI.insert({ 2020, 6286 });
	WI.insert({ 2021, 6076 });
	WI.insert({ 2022, 3253 });

	cout << "\tWisconsin Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = WI.begin(); it != WI.end(); it++)
		cout << it->first << "\t\t" << it->second << endl;
}
void State::WY()
{
	map<int, int> WY;

	WY.insert({ 2020, 461 });
	WY.insert({ 2021, 963 });
	WY.insert({ 2022, 288 });

	cout << "\tWyoming Numbers" << endl;
	cout << "Year: " << "\t\t" << "Death Count: " << endl;
	cout << "-------------------------------------------" << endl;

	for (auto it = WY.begin(); it != WY.end(); it++)
	{
		cout << it->first << "\t\t" << it->second << endl;
	}
}