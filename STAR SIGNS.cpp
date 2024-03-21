#include<iostream>
using namespace std;
int main()
{
	int date,month;
	cout<<"enter date"<<endl;
	cin>>date;
	cout<<"enter month"<<endl;
	cin>>month;
	if(date<1 || date>31)
		cout<<"enter valid date of birth"<<endl;
	else if( (date>=22 && month==12) || (date<=20 && month==1) )
		cout<<"capricorn"<<endl;
		
	else if( (date>=21 && month==1) || (date<=19 && month==2) )
		cout<<"aquarius"<<endl;
		
			else if( (date>=20 && month==2) || (date<=20 && month==3) )
		cout<<"pices"<<endl;
		
	else if((date>=21 && month==3) || (date<=19 && month==4))
		cout<<"aries"<<endl;
		
			else if((date>=20 && month==4) || (date<=20 && month==5))
		cout<<"taurus"<<endl;
		
	else if((date>=21 && month==5) || (date<=21 && month==6))
		cout<<"gemini"<<endl;
		
			else if((date>=22 && month==8) || (date<=23 && month==7))
		cout<<"virgo"<<endl;
		
	else if((date>=24 && month==7) || (date<=23 && month==8))
		cout<<"leo"<<endl;
		
		else if((date>=24 && month==8) || (date<=22 && month==9))
		cout<<"virgo"<<endl;
		
			else if((date>=23 && month==9) || (date<=22 && month==10))
		cout<<"libra"<<endl;
		
	else if((date>=23 && month==10) || (date<=22 && month==11))
		cout<<"scorpio"<<endl;
		
			else if((date>=23 && month==11) || (date<=20 && month==12))
		cout<<"sagatarius"<<endl;
		return 0;
	 
		}
			

