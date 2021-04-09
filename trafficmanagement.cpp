#include<iostream>
#include<fstream>
#include<stdlib.h>
//Record of vechile ==recofveh()
//Record of challan ==recofchall()
//Search for vechile records ==vehsch()
//Traffic Control Both ==trffcontbooth()
//Control Traffic ==trffcont()
//Help ==help()
//Exit ==exit()
using namespace std;
class Traffic
{
	public:
		char choice;
		int welcome()
		{
			system("cls");
			cout<<"*************************************************************************"<<endl<<endl;
			cout<<"*************************WELCOME TO TRAFFIC MANAGEMENT SYSTEM************"<<endl<<endl;
			cout<<"Options : "<<endl<<endl;
			cout<<"1.Record of vehicles\n2.Record of challan\n3.Search for vehicle records\n4.Traffic Control Booth\n5.Control Traffic\n6.Help!!\n7.Exit"<<endl<<endl;
			cout<<"Enter your choice : ";
			cin>>choice;
			if(choice>0 && choice<8)
			{
				switch(choice)
				{
					case 1:
						system("cls");
						recofveh();
						break;
//					case 2:
//						system("cls");
//						rechofchall();
//						break;
//					case 3:
//						system("cls");
//						vehsch();
//						break;
//					case 4:
//					    system("cls");
//						trffcontbooth();
//						break;
//					case 5:
//					    system("cls");
//						trffcont():
//						break;
//					case 6:
//					    system("cls");
//						help();
//						break;
//						
//							
				}
			}
			else{
				exit(0);
			}

		}
		int recofveh()
		{
			system("cls");
			cout<<endl<<endl<<endl;
			cout<<"Option:"<<endl<<endl;
			cout<<"1.Add a new Vechile\n2.Search a vechile using registration number\n3.Back to main menu"<<endl<<endl;
			cout<<"Enter your choice:";
			int RecOfVehChoice{0};
            cin>>RecOfVehChoice;
				switch (RecOfVehChoice)
				{
				case 0 :
					system("cls");
					welcome();
					break;	
				case 1:
					recofveh_1();
					break;
				case 2:
			//		recofveh_2();
					break;
				case 3:
			//	    recofveh_3();
					break;	
			}
             return 0;			
		}
		int recofveh_1()
		{
			system("cls");
			fstream fio;
			string line;
			cout<<"Enter the vehicles:"<<endl;
			cout<<"Enter the registration number for vehicle:"<<endl;
			cout<<"Enter'/.'to Exit"<<endl;
			fio.open("RecordOfVehicles.txt", ios::app | ios::out | ios::in);
			 while (fio) {
            getline(cin, line);
            if (line == "./")
                break;
            fio << line << endl;
        }
        cout<<"Data Entered successfully !!"<<endl;
        system("cls");
        recofveh();
		}
		
};
int main()
{
	Traffic obj1;
	obj1.welcome();
}
