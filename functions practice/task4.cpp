#include<iostream>
using namespace std;
int getNUMAccidents(string region)
{
	int No_of_Accidents;
	cin >> No_of_Accidents;
	if (No_of_Accidents < 0)
	{
		cout << "No. of Accidents can't be less than -1" << endl;
		cout << "Reenter the no. of Accidents: " << endl;
		cin >> No_of_Accidents;
		return No_of_Accidents;
	}
}
	void findLowest(int Accident1, int Accident2, int Accident3, int Accident4, int Accident5, string region1, string region2, string region3, string region4, string region5)
	{
		string region;
		int Accident;
		if (Accident1 < Accident2 && Accident1 < Accident3 && Accident1 < Accident4 && Accident1 < Accident5)
		{
			region = "North";
			Accident=Accident1;
		}
		if (Accident2 < Accident1 && Accident2 < Accident3 && Accident2 < Accident4 && Accident2 < Accident5)
		{
			region = "South";
			Accident = Accident2;
		}
		if (Accident3 < Accident2 && Accident3 < Accident1 && Accident3 < Accident4 && Accident3 < Accident5)
		{
			region = "East";
			Accident = Accident3;
		}
		if (Accident4 < Accident2 && Accident4 < Accident3 && Accident4 < Accident1 && Accident4 < Accident5)
		{
			region = "West";
			Accident = Accident4;
		}
		if (Accident5 < Accident2 && Accident5 < Accident3 && Accident5 < Accident4 && Accident5 < Accident1)
		{
			region = "Central";
			Accident = Accident5;
		}
		cout << "Lowest number of accidents are of ";
			cout<< region << " which are " << endl;
	    cout<< Accident;

	}
	int main()
	{
		string region1 = "North",
		       region2 = "South",
			   region3 = "East",
			   region4 = "West",
			   region5 = "Central";
		     cout << "Plz enter the number of accidents for " << region1;
			 int accident1=getNUMAccidents(region1);
			 cout << "Plz enter the number of accidents for " << region2;
			 int accident2 = getNUMAccidents(region2);
			 cout << "Plz enter the number of accidents for " << region3;
			 int accident3 = getNUMAccidents(region3);
			 cout << "Plz enter the number of accidents for " << region4;
			 int accident4 = getNUMAccidents(region4);
			 cout << "Plz enter the number of accidents for " << region5;
			 int accident5 = getNUMAccidents(region5);
			 cout << "Now we will find lowest accident" << endl;
			 findLowest(accident1, accident2, accident3, accident4, accident5, region1, region2, region3, region4, region5);
}