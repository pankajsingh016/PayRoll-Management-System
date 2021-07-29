//employeeid,employeerid,name,password,workingdays,salaryperday,totalsalary

/*
	sf = static function
	cf = class function  
	ff = functional in file
	ocf = (orginization class function) 
	emcf = employeer class function
	ecf = employee class function
    numeric_d = numeric class data 


	-------------------------------
	* functionality Check
	-------------------------------
	* Register				 		| working |
	* Login 				 		| working |
	* Unique id of employeer 		| working |
	* Password Again Enter   		| working |
	* Adding New Employee|login		| working |
	* Removing a Employee           | working |
	* Update a Employee				| working |

	------------------------------
	To Do
	------------------------------
	* Masking of Password  :done
	* Making of Update function :done
	* Color Change :done
*/
#include<iostream>
#include<conio.h>
#include<vector>
#include "Function.cpp"
#include "classfunction.cpp"
using namespace std;

//Function used in this file
//--------------------------------------------------
	void choose(int a,string super);
	bool checklog(string id,string p,int c1,int c2);
//--------------------------------------------------

int main()
{	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	//write_change("EE21","2200",6);
	//system("pause");
	Again:
	system("cls");
	welcome();
	char c;
	cin>>c;

	if(c>=97)
	{
		c = c-32;
	}

	switch(c)
	{
		case 'A':
		{	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),143);
			Register();//sf
			Employeer e1;
			
			e1.getData();
			
			fflush(stdin);
			
			e1.showdata("data//employeer.csv");

			system("pause");

			break;			
		}

		case 'B':
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),135);

			login();//sf

			//-------------------------------------------------------------------
				string id;
				vector <char> pa;
				fflush(stdin);
				cout<<"Enter Employeer ID -:";    getline(cin,id); fflush(stdin);
				cout<<"Enter Password -:"; 	      
				char ch;
				do{
					ch = getch();
					
					if(ch!=13)
					{
						pa.push_back(ch);
						cout<<"*";
					}
				

				}while(ch!=13);

				std::string p(pa.begin(),pa.end());
				
				// cout<<"\n"<<p<<endl;
				// getline(cin,p); fflush(stdin); 
			//------------------------------------------------------------------

			bool c = checklog(id,p,0,2);
			
			if(c)
				ln();//sf 

			else
			{	
				cout<<"\nRe-Enter the value found invalid"<<endl;
				exit(0);
			}


			//-----------------------------------------------------------------
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
				loginOption();//sf
				int a;
				cin>>a;
				choose(a,id); //ff
				break;
			//-----------------------------------------------------------------
		}

		default: 
			cout<<"Invalid Option"<<endl;

	}

		fromBegin();//sf as user to run the program again
			char d;
			cin>>d;

			if(d=='A'||d=='a')
			{
				goto Again;
			}

	return 0;
}
//------------------------------------------------main end();
void choose(int a,string id) //takes choice and superviser who has select the choice.
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
	int b = a;

	Employee e11;

	while(1)
	{

			switch(b)
			{
				case 1:
				{
					enroll();	
					e11.setemployeer(id);
					e11.get_Data();
					
					
					break;
				}
				
				case 2:
				{
					removeemployee();
					string rid;
					fflush(stdin);
					cout<<"Enter the Employee ID -:"<<endl;
					cin>>rid;
					e11.remove(rid);
					cout<<"Record is Deleted"<<endl;

					break;
				}
				
				case 3://
				{
					system("cls");
					updateemployee();
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
					e11.update_data();
					
					break;
				}
				
				case 4:
				{
					system("cls");
					system("COLOR 01");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
					cout<<"4. Details of all employee enrolled by your ID"<<endl;
					Employee e11;
					line(100,3);
					headEmployee();
					line(100,3);
					e11.show_Data(id,"data//employee.csv");
					break;
				}

				case 5:
				{
					system("cls");
					return;
				}

				default:
					return;

			}
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
			loginOption();
			cin>>b;

	}
	return;
}

bool checklog(string eid,string pass,int col1,int col2)   //check for the match in the employeer.csv 
{

	ifstream fin;
	fin.open("data//employeer.csv",ios::in);

	if(!fin)
	{
		cout<<"Something went wrong"<<endl;
		return false;
	}

	string s1;
	vector <char> c;
	vector <char> p;

	while(!fin.eof())
	{	
		int count=0;
		getline(fin,s1);

		for(int i=0;s1[i]!='\0';i++)
		{
			if(s1[i]==',')
			{
				count++;
			}

			if(count==col1 && s1[i]!=',')
				c.push_back(s1[i]);

			else if(count==col2 && s1[i]!=',')
				p.push_back(s1[i]);
			
		}

		std::string id(c.begin(),c.end());
		fflush(stdin);
		
		std::string pwd(p.begin(),p.end());
		fflush(stdin);

		c.clear();
		p.clear();


		if(id == eid && pwd ==pass)
		{
			fin.close();
			return true;
		}

		id.clear();
		pwd.clear();
		s1.clear();
	}

	fin.close();
	return false;
}