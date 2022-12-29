#include <iostream>
using namespace std;
void towerofhanoi(int n, char from, char helper , char to)
{
	if(n==0)
	{
		return;
	}
	towerofhanoi(n-1,from,to,helper);
	cout<<"move disc from "<<from<<" to "<<to<<endl;
	towerofhanoi(n-1,helper,from,to);
}
int main()
{
	int n;
	cin>>n;
	towerofhanoi(n,'A','B','C');
}