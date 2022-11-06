//OBJECT ORIENTED
#include<iostream>
using namespace std;
int main()
{
	//Declaring class
	class cricket{
		public:
		cricket(){
			cout<<"constructer has benn called"<<endl;
		}
		int runs;
	};
	 cricket sachin;
	 cout<<sizeof(sachin)<<endl;
	 sachin.runs=100;
	 cout<<sachin.runs;
	 
	 return 0;
}
