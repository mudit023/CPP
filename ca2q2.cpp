// Create a class Student with following data members- name, roll no and marks as private 
// data member. Create array of objects for three students, compare their marks using 
// operator overloading, and display the record of the student who is getting highest score

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int rollNo;
	int mark;
  static int studentCount;
public:
	Student()
  {
    ++studentCount;
    cout<<"Student "<<studentCount<<endl;
    char n[100];
    int roll_no;
    int numbers;
    cout<<"Enter the following data:\n";
    cout<<"Enter the name: ";
    cin>>n;
    // fgets(n,100,stdin);
    // fflush(stdin);
    name=n;
    cout<<endl<<"Enter the roll number: ";
    cin>>roll_no;
    rollNo=roll_no;
    cout<<endl<<"Enter the marks: ";
    cin>>numbers;
    mark=numbers;
  }
	void display() {
		cout<<"\nStudent name: "<<name<<endl;
		cout<<"Student roll no: "<<rollNo<<endl;
		cout<<"Student marks: "<<mark<<endl;
	}
	//compare marks using operator overloading
	bool operator>(const Student &s1)
	{
		return (mark>s1.mark);
	}
};
int Student::studentCount=0;

int main(){
	//array of objects for three students
	Student students[3];
	Student highestScore=students[0];

	for(int i=0;i<3;i++){
		if(students[i]>highestScore){
			highestScore=students[i];
		}
	}
	cout<<"\n Student with highest score:\n";
	highestScore.display();
	return 0;
}