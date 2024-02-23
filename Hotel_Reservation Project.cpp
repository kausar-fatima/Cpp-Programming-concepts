#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<Windows.h>

using namespace std;

int No_Of_Reservations = 0;
struct Biodata
{
	int ID_No;
	string name;
	string phone_no;
};

void reserved(Biodata array[]);
void Reservation(Biodata array[]);
void facility(Biodata array[]);
void Check_Reservation(Biodata array[]);
int totalCharges(int Reserve, int charges);
void writeRoomsSummary(Biodata array[]);
void readRoomsSummary(Biodata array[]);
void writeRoomsData(Biodata array[], int totalcharges = 5000);
void readRoomsData(Biodata array[], int totalcharges = 5000);

int main()
{
	system("color 01");
	Biodata array[40] = { {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}, };
	facility(array);
}

void reserved(Biodata array[])
{
	array[2].ID_No = 3;
	array[2].name = "Nimra";
	array[2].phone_no = "032981736463";
	array[3].ID_No = 4;
	array[3].name = "Sana";
	array[3].phone_no = "032746573822";
}

void Check_Reservation(Biodata array[])
{

	reserved(array);

	int count = 0;
	system("CLS");
	cout << "\t\t**********************************" << endl;
	cout << "\t\t*                                *" << endl;
	for (int i = 0; i < 40; i++)
	{
		if (array[i].ID_No != 0)
		{
			cout << "\t\t*       Room " << i + 1 << " is reserved       *" << endl;
			count++;
		}
		else
		{
			cout << "\t\t*       Room " << i + 1 << " is available      *" << endl;
		}
	}

	cout << "\t\t*                                 *" << endl;
	cout << "\t\t***********************************" << endl;
	if (count == 40)
	{
		cout << "\t\t************************************************" << endl;
		cout << "\t\t*                                              *" << endl;
		cout << "\t\t*        All rooms are reserved                *" << endl;
		cout << "\t\t*        SORRY! No any room is available       *" << endl;
		cout << "\t\t*                                              *" << endl;
		cout << "\t\t************************************************" << endl;
		exit(0);
	}
}

int totalCharges(int Reserve, int charges)
{
	int totalcharges = No_Of_Reservations * charges;
	return totalcharges;
}

void Reservation(Biodata array[])
{

	int room_no;
	char choice;
	int charges = 5000;
	int totalcharges;

	cout << "\n\t\tPer night reservation charges are:   Rs." << charges << "\n\n" << endl;
	do
	{
		cout << "\n\n\t\t\t\t\t\t\t      Which one room do you want to reserve?     ";
		cin >> room_no;
		reserved(array);
		while (array[room_no - 1].ID_No != 0)
		{
			cout << "\n\n\t\t\t\t\t\t***************************************************************************\n\n";
			cout << "\t\t\t\t\t\t\t   Entered room is reserved re_enter room no:    ";
			cin >> room_no;
		}

		cout << "\n\n\t\t\t\t\t\t***************************************************************************\n\n";
		cout << "\t\t\t\t\t\t\t          Plz enter your name:     ";
		cin >> array[room_no - 1].name;
		cout << "\n\n";
		cout << "\t\t\t\t\t\t***************************************************************************\n\n";

		cout << "\t\t\t\t\t\t\t          Plz enter your phone no:      ";
		cin >> array[room_no - 1].phone_no;
		cout << "\n\n";
		cout << "\t\t\t\t\t\t***************************************************************************\n\n";

		array[room_no - 1].ID_No = room_no;
		cout << "\t\t\t\t\t\t\t          Your reserved room ID no is:      " << array[room_no - 1].ID_No << "\n\n\n";
		cout << "\t\t\t\t\t\t***************************************************************************\n\n";

		No_Of_Reservations++;
		cout << "\t\t\t\t\t\t\t     Do you want more reservations(y for yes and n for no):     ";
		cin >> choice;
		cout << "\t\t\t\t\t\t      ***************************************************************************\n\n";
		system("CLS");
	} while (choice == 'y');
	totalcharges = totalCharges(No_Of_Reservations, charges);
	cout << "\n\n\n\t\t\t\t\t\t      ***************************************************************************\n";
	cout << "\t\t\t\t\t\t      *                                                                         *\n";
	cout << "\t\t\t\t\t\t      *          Your total charges for reservation are:  " << totalcharges << "                  *\n";
	cout << "\t\t\t\t\t\t      *                                                                         *\n";
	cout << "\t\t\t\t\t\t      ***************************************************************************\n";

	writeRoomsData(array);
	writeRoomsSummary(array);
}

void facility(Biodata array[])
{
	char choice;
	char enter;
	char site;
	int select;
	int charges;
	int room_no = 0;
	do {
		system("CLS");
		cout << endl;
		cout << "\t\t\t\t\t\t             ***********************************\t\t\t" << endl;
		cout << "\t\t\t\t\t\t             *                                 *\t\t\t" << endl;
		cout << "\t\t\t\t\t\t             *     WELCOME TO FATIMA HOTEL     *\t\t\t" << endl;
		cout << "\t\t\t\t\t\t             *                                 *\t\t\t" << endl;
		cout << "\t\t\t\t\t\t             ***********************************\t\t\t" << endl;
		cout << "\n\n\t\t\t\t\t             WE PROVIDE OUR SERVICES FOR BOTH CUSTOMERS AND MANAGER\n" << endl;
		cout << "************************************************************************************************************************************************************************\n" << endl;
		cout << "\t\tON CUSTOMER SITE                \t\t\t\t\t\t\t" << "        ON MANAGER SITE\n\n" << endl;
		cout << "\t\t*************************************\t\t\t\t\t\t\t\t" << "*****************************************" << endl;
		cout << "\t\t*                                   *\t\t\t\t\t\t\t\t" << "*                                       *" << endl;
		cout << "\t\t*  1->     By online reservation    *\t\t\t\t\t\t\t\t" << "*  1->      To see reserved rooms       *" << endl;
		cout << "\t\t*  2->     By manually reservation  *\t\t\t\t\t\t\t\t" << "*  2->      To see reserved rooms data  *" << endl;
		cout << "\t\t*                                   *\t\t\t\t\t\t\t\t" << "*                                       *" << endl;
		cout << "\t\t*************************************\t\t\t\t\t\t\t\t" << "*****************************************\n\n" << endl;

		cout << "\t\t\t\t\t\t\t      *****************************************" << endl;
		cout << "\t\t\t\t\t\t\t      *                                       *" << endl;
		cout << "\t\t\t\t\t\t\t      *      a->      On manager site         *" << endl;
		cout << "\t\t\t\t\t\t\t      *      b->      On Customer site        *" << endl;
		cout << "\t\t\t\t\t\t\t      *                                       *" << endl;
		cout << "\t\t\t\t\t\t\t      *****************************************\n\n" << endl;
		cout << "\t\t\t\t\t\t\t      Enter your site:   ";
		cin >> site;
		system("CLS");
		if (site == 'a')
		{
			cout << "\n\n\t\t\t\t\t\t\t      **************************************************" << endl;
			cout << "\t\t\t\t\t\t\t      *                                                *" << endl;
			cout << "\t\t\t\t\t\t\t      *      1->      To see reserved rooms            *" << endl;
			cout << "\t\t\t\t\t\t\t      *      2->      To see reserved rooms data       *" << endl;
			cout << "\t\t\t\t\t\t\t      *                                                *" << endl;
			cout << "\t\t\t\t\t\t\t      **************************************************\n\n" << endl;
			cout << "\t\t\t\t\t\t\t      Enter your choice:   ";
			cin >> select;
			system("CLS");
			if (select == 1)
			{
				readRoomsSummary(array);

			}
			else if (select == 2)
			{
				readRoomsData(array);
			}
		}
		else if (site == 'b')
		{
			cout << "\n\n\t\t\t\t\t\t\t      **************************************************" << endl;
			cout << "\t\t\t\t\t\t\t      *                                                *" << endl;
			cout << "\t\t\t\t\t\t\t      *      1->      By Online Reservation            *" << endl;
			cout << "\t\t\t\t\t\t\t      *      2->      By Manually Reservation          *" << endl;
			cout << "\t\t\t\t\t\t\t      *                                                *" << endl;
			cout << "\t\t\t\t\t\t\t      **************************************************\n\n" << endl;
			cout << "\t\t\t\t\t\t\t      Enter your choice:   ";
			cin >> select;
			system("CLS");
			if (select == 1)
			{
				Check_Reservation(array);
				Reservation(array);
			}
			else if (select == 2)
			{
				cout << "\n\n\t\t\t\t\t\t      ***************************************************************************\n\n";
				cout << "\t\t\t\t\t\t                             How may I help you?\n\n" << endl;
				cout << "\t\t\t\t\t\t                If you want room reservation then enter y else n:   ";
				cin >> enter;
				cout << "\n\n";
				cout << "\t\t\t\t\t\t      ***************************************************************************\n\n";
				system("CLS");
				if (enter == 'y')
				{
					Check_Reservation(array);
					Reservation(array);
					cout << "\n\n\t\t\t\t\t\t      ***************************************************************************\n\n";
					cout << "\t\t\t\t\t\t      Please provide the charges for room and take your reserved room keys:  ";
					cin >> charges;
					cout << "\n\n";
					system("CLS");
					cout << "\n\n\n\n\t\t\t\t\t\t      ***************************************************************************" << endl;
					cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
					cout << "\t\t\t\t\t\t      *                           Here are your keys                            *" << endl;
					cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
					cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
				}
			}
		}
		cout << "\n\n\t\t\t\t\t\t      ***************************************************************************\n\n";
		cout << "\t\t\t\t\t\t               Do you want to continue(y for yes and n for no):   ";
		cin >> choice;
		cout << "\n\n";
	} while (choice == 'y');
}
void writeRoomsSummary(Biodata array[])
{
	reserved(array);
	ofstream write2_file;
	write2_file.open("ReservedRooms.txt");
	if (write2_file)
	{
		for (int i = 0; i < 40; i++)
		{
			if (array[i].ID_No != 0)
			{
				write2_file << "Room no." << i + 1 << " is reserved" << endl;
			}
			else
				write2_file << "Room no." << i + 1 << " is not reserved" << endl;
		}
	}
	else
	{
		cout << "\n\n\n\n\t\t\t\t\t\t      ***************************************************************************" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      *                         Sorry! File is not created                      *" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
	}
	write2_file.close();
}

void readRoomsSummary(Biodata array[])
{
	system("CLS");
	writeRoomsSummary(array);

	ifstream read_file;
	read_file.open("ReservedRooms.txt");
	if (read_file)
	{
		cout << "\n\n\n\n";
		for (int i = 0; i < 40; i++)
		{
			if (array[i].ID_No != 0)
			{
				read_file >> array[i].ID_No;
				cout << "\t\t\t\t\t\t      *********************************************************************" << endl;
				cout << "\t\t\t\t\t\t                          Room no." << i + 1 << " is reserved" << endl;
			}
			else
			{
				cout << "\t\t\t\t\t\t      *********************************************************************" << endl;
				cout << "\t\t\t\t\t\t                          Room no." << i + 1 << " is not reserved" << endl;
			}
		}
	}
	else
	{
		cout << "\n\n\n\n\t\t\t\t\t\t      ***************************************************************************" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      *                          Sorry! File is not found                       *" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
	}
	read_file.close();
}

void writeRoomsData(Biodata array[], int totalcharges)
{
	reserved(array);
	ofstream write1_file;
	write1_file.open("RoomsData.txt");
	if (write1_file)
	{
		for (int i = 0; i < 40; i++)
		{
			if (array[i].ID_No != 0)
			{
				write1_file << "Room no." << i + 1 << "   " << array[i].name << "   " << array[i].phone_no << endl;
				write1_file << "Total Charges: " << totalcharges << endl;
			}
		}
	}
	else
	{
		cout << "\n\n\n\n\t\t\t\t\t\t      ***************************************************************************" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      *                         Sorry! File is not created                      *" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
	}
	write1_file.close();
}

void readRoomsData(Biodata array[], int totalcharges)
{
	system("CLS");
	writeRoomsData(array);
	ifstream read_file;
	read_file.open("RoomsData.txt");
	if (read_file)
	{
		cout << "\n\n\n\n";
		for (int i = 0; i < 40; i++)
		{
			if (array[i].ID_No != 0)
			{
				read_file >> array[i].ID_No >> array[i].name >> array[i].phone_no;
				read_file >> No_Of_Reservations;
				read_file >> totalcharges;
				cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
				cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
				cout << "\t\t\t\t\t\t      *   Room no." << i + 1 << "     " << array[i].name << "     " << array[i].phone_no << "                                  *" << endl;
				cout << "\t\t\t\t\t\t      *   Total Charges: " << totalcharges << "                                                   *" << endl;
				cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
				cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
			}
		}
	}
	else
	{
		cout << "\n\n\n\n\t\t\t\t\t\t      ***************************************************************************" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      *                          Sorry! File is not found                       *" << endl;
		cout << "\t\t\t\t\t\t      *                                                                         *" << endl;
		cout << "\t\t\t\t\t\t      ***************************************************************************" << endl;
	}
}