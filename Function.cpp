//Only Include Static functions of the Program.
//function only for displaying.

#include<iostream>
#include<Windows.h>
using namespace std;
void line();
void line176(int a,int val);
void welcome()
{
	
	cout<<"\n\n";
	line176(100,254);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   "<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\t\t\t     WELCOME TO THE PAYROLL MANAGEMENT SYSTEM"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	 cout<<"\t\t\t\t   "<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   "<<char(176)<<endl;
	line176(100,254);
	cout<<"\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\t\t\tA. Register as new employeer"<<endl;
	cout<<"\t\t\tB. Login (if you have registered earlier)"<<endl;
}

void line(int a,int val)
{
	char ch = val;
	for(int i=0;i<a;i++)
	{
		cout<<"*";
	}
	cout<<endl;
}

void line176(int a,int val)
{
	cout<<"\t\t\t";
	char ch = val;
	for(int i=0;i<a;i++)
	{
		cout<<ch;
	}
	cout<<endl;
}

void login()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\n\n";
	line176(73,254);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"\t\t\t  WELCOME TO LOGIN POTRAL  ";  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(73,254);
	cout<<"\n\n";
}

void ln()
{
	cout<<"\n\n";
	cout<<"\t\t";line176(50,176);
	cout<<"\t\t\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t "<<char(176)<<endl;
	cout<<"\t\t\t\t\t"<<char(176); 
	cout<<"\t     YOUR ARE LOGINED NOW";  cout<<"\t\t "<<char(176);
	cout<<endl; 
	cout<<"\t\t\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t "<<char(176)<<endl;
	cout<<"\t\t";line176(50,176);
	cout<<"\n\n";
	system("pause");
}

void loginOption()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n";
	line176(81,4);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),112);
	cout<<"\t\t\t EMPLOYEE MANAGEMENT DASHBOARD "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(81,4);
	cout<<"\n\n";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"\t\t\t1. Enroll a new employee       "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\t\t\t2. Remove a previous employee  "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"\t\t\t3. Update an employee          "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\t\t\t4. Show Details of All Employee"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"\t\t\t5. Exit From the Dashboard     "<<endl;
}

void enroll()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n";
	line176(65,4);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"\t\t\t Enroll a New Employee "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(65,4);
	cout<<"\n\n";
}

void removeemployee()
{
		system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n";
	line176(65,4);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\t\tRemove a previous Employee "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(65,4);
	cout<<"\n\n";
}

void updateemployee()
{
		system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n";
	line176(65,4);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"\t\t\tUpdate a  Employee "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(65,4);
	cout<<"\n\n";
}

void Register()
{
	system("cls");
	cout<<"\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	line176(97,176);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\t\t\t     WELCOME TO EMPLOYEER REGISTERATION POTRAL     "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout<<"\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(97,176);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

	cout<<"\n\n";
}

void fromBegin()
{
	system("cls");
	cout<<"\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	line176(81,254);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(4); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"\t\t\t  A. Login/Register       B. Exit";  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\t\t\t"<<char(4);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(81,254);
}

void headEmployee()
{
	cout<<"Employee ID\t"<<"Employeer ID\t"<<"Name\t\t"<<"Password\t"<<"DOW\t\t"<<"SPD\t"<<"Total Salary"<<endl;
}

