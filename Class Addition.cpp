
#include <iostream>
using namespace std;

class fira {
	public: 		    
		float a, b, sum;
	    void addition ();
};

void fira::addition() {
	start:
	system("title FOR ADDIGN TWO NUMBERS");
	int f = 0;
	system("color 8f");
	system("cls");
	cout<<"\n 	To Perform Addition\n 	===================\n"<<endl;
	cout<<"	+-----------------------------------------+\n";
	cout<<"	|                                         |\n";
    cout<<"	| 1. Addition                             |\n";
	cout<<"	+-----------------------------------------+\n"; 

	cout<<"\n\n\tEnter The First Number: "; 
	cin>>a;     
    cout<<"\n\tEnter The Second Number: "; 
	cin>>b; 
	sum = a + b; 
	cout<<"\n\n\t"<<a<<" + "<<b<<" = "<<sum<<endl;
	cout<<"\tADDITION ENDED !!"<<endl;		
	cout<<"	                                         \n";
	cout<<"	                                         \n";
	cout<<"	-------------------------------------------\n";
	cout<<"	-------------------------------------------\n";	

	invalid:
	cout<<"\n>> Press[1] To ADD Again Press[2] For EXIT: ";
	cin>>f;
	if (f==1) 
	goto start;
	if (f==2) 
	goto exit;

	else
	    system("title IT WAS MISTAKE...");
		system("color 4f");
		cout <<"\a\a";
		system("cls");
		cout <<"\n\n   ["<<f<<"] Is Invalid Please Tray Again !!"<<endl;
		goto invalid;

	exit:
		{
			system("title EXIT...");
			system("color 07");
			system("cls");
			cout<<"\n\n\n\t\t Thank You For Using This Program\n\t\t COOLSTAR_73... \n\n\n";
			system("exit");
		}	

}

void intro();				
void addition ();

int main (int argc, char** argv) 
{
	intro();
	fira obj;
	obj.addition();

return 0;

}

void intro ()
{
	system("color 8f");
	cout<<"\n\n\n\tCOOL STAR";
	cout<<"\n\n\tFOR ADDIGN TWO NUMBERS";
	cout<<"\n\n\tDEVELOPED BY COOL STAR CORPORATION\n";
	cout<<"\n\n\n\n ******************************\n";
	cout<<"\n  PRESS ENTER TO GET STARTED: \n";
	cout<<"\n ******************************\n";
	cin.ignore();

}



