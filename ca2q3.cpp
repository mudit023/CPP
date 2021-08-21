// Create a class: "Prime" with private data members: upper_limit (int), lower_limit (int) 
// and parameterized constructor, which initializes the values of both data members. Apart 
// from initialization, this constructor also displays the count of prime numbers from 
// upper_limit to lower_limit. [Example: upper_limit:15, lower_limit:10, count of prime 
// numbers is:2 (11 and 13), also make sure the value of upper_limit should be greater 
// than lower_limit].
#include <iostream>
#include <string>


using namespace std;


class Prime{
private:
	//private data members: upper_limit (int), lower_limit (int)
	int upper_limit;
	int lower_limit;
	static int count;
public:
	//parameterized constructor, which initializes the values of both data members.
	Prime(int a,int b){
		upper_limit=a;
		lower_limit=b;
		//constructor also displays the count of prime numbers from upper_limit to lower_limit. 
		for (int number = lower_limit; number<= upper_limit; number++)
		{
			int isPrime=0;
			if (number == 0 || number == 1) 
			{
				isPrime=1;
			}
			else 
			{
				for (int i = 2; i <= number/2; i++) {
					if (number % i == 0) {
						isPrime=1;
						break;
					}
				}
			}
			if(isPrime==0){
				++count;
			}
		}
		cout<<"The count of prime numbers: "<<count<<"\n";
	}


};
int Prime::count=0;
int main (){
	int upper_limit, lower_limit;
	//Read upper limit from the user 
	cout<<"Enter upper limit: ";
	cin>>upper_limit;
	//Read lower limit from the user 
	while(upper_limit<=lower_limit){
		cout<<"Enter lower limit: ";
		cin>>lower_limit;
	}
	//create Prime object
	Prime prime(upper_limit,lower_limit);


	return 0;
}

