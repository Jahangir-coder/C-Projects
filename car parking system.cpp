#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int c=0;
	int r=0;
	int b=0;
	int input;
	int amount=0, count=0;
	system("color 4a");
	// Menu Bar
	while(true) // Loop Condition
	{
	cout<<endl;
	cout<<"				*****************************************"<<endl;
	cout<<"					Press 1 for Rikshaw Record"<<endl;
	cout<<"					Press 2 for Normal Car Record"<<endl;
	cout<<"					Press 3 for Buses Record"<<endl;
	cout<<"					Press 4 to show the Record"<<endl;
	cout<<"					Press 5 to delete the Record"<<endl;
	cout<<endl;
	cout<<"				*****************************************"<<endl;
	cin>>input;
	// Checks and Conditions
	if(input==1)
	{
		if(count<=50)
		{
		r= r+1;
		amount= amount+100;
		count= count+1;	
	    }
	    else
	    {
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
	    	cout<<"Sorry!!!"<<endl;
	    	cout<<"Parking is full........."<<endl;
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
		}
	}
	else if(input==2)
	{
		if(count<=50)
		{
		c= c+1;
		amount= amount+200;
		count= count+1;
	    }
	     else
	    {
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
	    	cout<<"Sorry!!!"<<endl;
	    	cout<<"Parking is full........."<<endl;
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
		}
	}
	else if(input==3)
	{
		if(count<=50)
		{
		b= b+1;	
		amount= amount+300;
		count= count+1;
		}
		else
	    {
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
	    	cout<<"Sorry!!!"<<endl;
	    	cout<<"Parking is full........."<<endl;
	    	cout<<endl;
			cout<<"*****************************************"<<endl;
		}
	}
	else if(input==4)
	{
		cout<<"*****************************************"<<endl;
		cout<<endl;
		cout<<"The Total Amount is "<<amount<<endl;
		cout<<"The Total Number of Vehicles is "<<count<<endl;
		cout<<"The Total Number of Rikshaws is "<<r<<endl;
		cout<<"The Total Number of Cars is "<<c<<endl;
		cout<<"The Total Number of buses is "<<b<<endl;
		cout<<endl;
		cout<<"*****************************************"<<endl;
	}
	else if(input==5)
	{
		amount= 0;
		count= 0;
		r=0;
		c=0;
		b=0;
		cout<<endl;
		cout<<"*****************************************"<<endl;
		cout<<"Record Deleted"<<endl;
		cout<<endl;
		cout<<"*****************************************"<<endl;
	}
	else
	{
		cout<<endl;
		cout<<" 			************************************************"<<endl;
		cout<<" 					Invalid Number"<<endl;
		cout<<endl;
		cout<<" 			************************************************"<<endl;
		break;
	}
	}
	return 0;
}
