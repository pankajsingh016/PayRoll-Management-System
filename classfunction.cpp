#include "class.h"

void wrtie_change(int col,string epoy,string change);

void show(string s)//ff
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==',')
		{
			cout<<"\t\t";
		}

		else
			cout<<s[i];
	}

	cout<<endl;
}

bool verify(string i,string m) //ff
{
	ifstream fin;
	fin.open(m,ios::in);

	while(!fin.eof())
	{
		vector <char> c;
		string s;
		getline(fin,s);

		for(int i=0;s[i]!=',';i++)
		{
			c.push_back(s[i]);
		}

		std::string sn(c.begin(),c.end());

		if(sn == i)
		{
			return true;
		}

		s.clear();
		c.clear();
		sn.clear();
	}
	return false;
}

void organization::getData() //ocf
{
	ide:
	cout<<"Enter the ID of the Employeer -:";;//1d
	fflush(stdin);
	cin>>id;

	bool cv = verify(id,"data//employeer.csv");
	if(cv)
	{
		cout<<":: This ID is previously registerd enter a new ID ::"<<endl;
		id.clear();
		goto ide;
	}


	fflush(stdin);//id match verify()


	cout<<"Enter Name -:"; getline(cin,name); //2d
	fflush(stdin);

	pass:
	cout<<"Enter Password-:"; getline(cin,password); //3d
	fflush(stdin);

	cout<<"Confirm Password -:"; getline(cin,conpass);//4d

	if(conpass == password)
		cout<<"Password Set"<<endl;

	else{
		cout<<"Password doesn't match with the currnet entered password"<<endl;
		password.clear();
		conpass.clear();
		goto pass;
	}


	bool check = organization::writedata(); //ocf

	if(check)
	{
		cout<<"The Data has Stored Successfully -:"<<endl;
	}
	else
	{
		cout<<"File not opened"<<endl;
	}
}

bool organization::writedata() //ocf
{
	fstream fout;
	fout.open("data//employeer.csv",ios::out|ios::app); //writing to file
	if(!fout)
	{
		return false;
	}
	fout<<endl;
	fout<<id<<","<<name<<","<<password;
	return true;
}

void organization::showdata(string p)  //ocf
{
	fstream fin;
	fin.open(p,ios::in);
	if(!fin)
	{
		cout<<"File opening fail"<<endl;
		return;
	}

	while(!fin.eof())
	{
		string s;
		getline(fin,s);

		show(s);
		// for(int i=0;s[i]!='\0';i++)
		// {
		// 	if(s[i]==',')
		// 	{
		// 		s[i] = '\t';
		// 	}
		// }

		// cout<<s<<endl;
	}
}

void Employee::setemployeer(string s)
{
	empno = s;
}

void Employee::get_Data()
{

	eid:
	fflush(stdin);
	id.clear();
	cout<<"Enter the ID of the Employee -:";//1d
	fflush(stdin);
	cin>>id;
	fflush(stdin);//id match verify()
	if(verify(id,"data//employee.csv"))
	{
		cout<<"\n :: Enter a unique ID this ID is taken earlier ::"<<endl;
		goto eid;
	}



	cout<<"Enter Name -:"; getline(cin,name); //2d
	fflush(stdin);

	epass:
	cout<<"Enter Password-:"; getline(cin,password); //3d
	fflush(stdin);

	cout<<"Confirm Password -:"; getline(cin,conpass);//4d

	if(conpass == password)
		cout<<"Password Set"<<endl;
	
	else{
		cout<<"\n Password Don't Match with the Confirm Password"<<endl;
		password.clear();
		conpass.clear();
		goto epass;
	}

	
	cout<<"Enter Total Days of work -:"; cin>>ndays; 
	cout<<"Enter Salary Per Day -:"; cin>>spd;


	bool check = Employee::write_Data(); //ocf

	if(check)
	{
		cout<<"The Data has Stored Successfully -:"<<endl;
	}
	else
	{
		cout<<"File not opened"<<endl;
	}
}

bool Employee::write_Data()
{
	fstream fout;
	fout.open("data//employee.csv",ios::out|ios::app); //writing to file
	if(!fout)
	{
		return false;
	}
	fout<<endl;
	fout<<id<<","<<empno<<","<<name<<","<<password<<","<<ndays<<","<<spd<<","<<ndays*spd;
	return true;
}

void choosecolor()
{
	system("cls");
	cout<<"\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	line176(97,176);
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	cout<<"\t\t\t"<<char(176); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\t\t\t     CHOOSE THE DETAIL YOU WANT TO UPDATE     "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout<<"\t\t\t\t"<<char(176);
	cout<<endl; 
	cout<<"\t\t\t"<<char(176);    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<char(176)<<endl;
	line176(97,176);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

	cout<<"\n\n";
}

//-----------------------------------------------Update data
void changing_menu()//ff
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
	cout<<"\n\n";
	choosecolor();
	cout<<"\n";
	cout<<"\t\t\t\t1.NUMBER OF DAYS WORKED"<<endl;
	cout<<"\t\t\t\t2.SALARY PER DAY"<<endl;
	cout<<"\t\t\t\t3.PAIED THE SALARY"<<endl;

}


int get_line(string epoy)//ff
{
	fstream fio;
	fio.open("data//employee.csv",ios::in);
	int refline=0;

	while(!fio.eof())
	{
		string s;
		getline(fio,s);
		vector <char> c;
		
		for(int i=0;s[i]!=',';i++)
		{
			c.push_back(s[i]);
		}

		std::string p(c.begin(),c.end());
		refline++;
		if(p==epoy)
		{
			return refline;
		}
		p.clear();
		c.clear();
	}

	return 0;

}


void write_change(string epoy,string change,int col)
{
	fstream fio;
	fio.open("data//employee.csv",ios::in|ios::out);

	char ch;
	int line=0;
	int count=0;
	int m=1;
	int pos;
	int offset = -4;
	int refline=0;

	refline = get_line(epoy);
	refline--;

	fio.seekg(0,ios::beg);
	fio.seekp(0,ios::beg);
	
	while(!fio.eof())
	{
		ch = fio.get();
		if(ch=='\n')
		{
			count=0;
			line++;
		}	
			

		if(ch==',')
			count++;

		if((col==count) && (line==refline))
			{
				if(m)
				{
					pos= fio.tellg();
					offset = line+offset;

					if(offset>=0)
						offset=0;

					fio.seekg(offset,ios::cur);
					fio<<change;
				 	cout<<"\n\n"<<pos<<endl;
					m=0;
				}
			}	
	}
}

void Employee::update_data()
{
	string epoy;
	cout<<"Enter The Employee ID of the Employeer -:";
	cin>>epoy;
	string change;
	changing_menu();
	int col;
	int a;
	cin>>a;

	cout<<"Enter The Change you want to put in -:"<<endl;
	fflush(stdin);
	switch(a)
	{
		case 1:
		{
			getline(cin,change);
			col = 4;
			break;
		}

		case 2:
		{
			getline(cin,change);
			col = 5;
			break;
		}

		case 3:
		{

			getline(cin,change);
			col = 6;
			break;
		}

		default:
			exit(0);
	}

	write_change(epoy,change,col);
	
}

//-----------------------------------------------------------Update data end here()


void Employee::show_Data(string id,string f)
{
	fstream fin;
	fin.open(f,ios::in);

	while(!fin.eof())
	{
		int count =0;
		vector <char> c;
		string s;
		getline(fin,s);
		fflush(stdin);

		for(int i=0;count<2;i++)
		{
			if(s[i]==',')
				count++;
			
			if(count==1 && s[i]!=',')
			{
				c.push_back(s[i]);
			}

		
		}

			std::string m(c.begin(),c.end());
			c.clear();

			if(m==id)
			{
				show(s);
			}
			s.clear();
			m.clear();

	}

	system("pause");

}



void Employee::remove(string rid)// it will not delete the lastest employee 
{
	fstream fin;
	fin.open("data//employee.csv",ios::in|ios::out);

	while(!fin.eof())
	{
		int count =0;
		vector <char> c;
		string s;
		getline(fin,s);
		fflush(stdin);

		for(int i=0;count<1;i++)
		{
			if(s[i]==',')
				count++;
			
			if(count==0 && s[i]!=',')
			{
				c.push_back(s[i]);
			}

		
		}

			std::string m(c.begin(),c.end());
			c.clear();

			if(rid==m)
			{
				long back = s.length();
				fin.seekp(-back,ios::cur);
				for(int i=0; (i<(back-5)) && (s[i]!='\0') ;i++)
				{
					if(s[i]==',')
						fin<<',';
					else
						fin<<'-';
				}
				fin.seekp(ios::end);
				return;
			}
			s.clear();
			m.clear();

	}

	system("pause");

}

