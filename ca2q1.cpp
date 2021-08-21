// Create a class Employee with the data members such as name, id and total salary. Create 
// a file as “Employee_Data” as binary file and write the information of four employees 
// to that file. Open that file in reading mode and only display the record of 2nd and 3rd 
// employees.

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int n=1;
class Employee
{
	public:
		string name;
		int id;
		float salary;
		void details(){
			cout<<"ENTER THE NAME OF EMPLOYEE "<<n<<" :\n";
			cin>>name;
			n++;
			cout<<"ENTER THE ID OF EMPLOYEE: \n";
			cin>>id;
			cout<<"ENTER THE SALARY OF EMPLOYEE: \n";
			cin>>salary;
		}
		
};

int main(){
	int n=1;
	string data;
	Employee obj;
	ofstream writing("Employee_Data.dat",ios::binary);
	for(int i=0;i<4;i++){
		obj.details();
		writing<<obj.id<<" "<<obj.name<<" "<<obj.salary<<endl;
	}
	writing.close();
	ifstream reading("Employee_Data.dat",ios::in);
	while(getline(reading,data))
	{
		if(n==2||n==3)
		{
			cout<<endl<<data<<endl;
		}
		n++;
	}
		reading.close();
	
}