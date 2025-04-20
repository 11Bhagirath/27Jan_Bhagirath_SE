#include<iostream>
using namespace std;
void studentdata()
{
	int English, Gujarati, Maths, Science, total;
	float PR;
	
	cout<<"Enter English Marks:";
	cin>>English;
	cout<<"Enter Gujarati Marks:";
	cin>>Gujarati;
	cout<<"Enter Maths Marks:";
	cin>>Maths;
	cout<<"Enter Science Marks:";
	cin>>Science;
	
	
	if(English>=40 && Gujarati>=40 && Maths>=40 && Science>=40)
	{
	
		total=English+Gujarati+Maths+Science;
		cout<<"\nTotal:"<<total;
	
		PR=total/4;
		cout<<"\nPR:"<<PR;
		
		if(PR>=70)
		{
			cout<<"\nYour Grade Is A+";
			cout<<"\nResult: PASS!";
		}
		else if(PR>=60)
		{
			cout<<"\nYour Grade Is A";
			cout<<"\nResult: PASS!";
		}
	
		else if(PR>=50)
		{
			cout<<"\nYour Grade Is B";
			cout<<"\nResult: PASS!";
		}
	
		else if(PR>=40)
		{
			cout<<"\nYour Grade Is C";
			cout<<"\nResult: PASS!";
		}
	}
		else 
		{
			cout<<"Result:FAIL";	
		}
}

main()
{
	studentdata();
}
