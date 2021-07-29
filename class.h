#include<iostream>
#include<Windows.h>
#include<vector>
#include<fstream>
#include<string>
using namespace std;


class organization
{
	protected:
		string id; //id of the worker or employeer[ER for Employeer and CD for Employee]
		string name;  
		string password;
		string conpass;

	public:

	organization()
	{

	}

	void getData();
	bool writedata();
	void showdata(string p);

};
class Employeer:public organization
{
	protected:

	public:
		Employeer(){

		}

		
};

class Employee:public organization
{
	protected:
		string empno; // name of the employeer
		int ndays; // total days of work
		float spd; // salary per day
	public:
		Employee(){

		}

		void get_Data();
		bool write_Data();
		void update_data();
		void setemployeer(string s);
		void show_Data(string id,string s);
		void remove(string rid);
};
