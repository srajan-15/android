#include<iostream>
#include<conio.h>
int x=0;
using namespace std;
class T4Tutorials
{
	public:
	void header()
{
	
	cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*"<<endl;
	cout<<"\t\t\t\t\t QUIZ GAME "<<endl;
	cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*"<<endl;
}
void footer()
{
		
	cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*"<<endl;
	cout<<"\t\t\t\t\t RESULTS "<<endl;
	cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*"<<endl;
}
void user()
{
	char ch1[100];
	cout<<"\t Guest Enter Your Name : ";
	cin>>ch1;
	cout<<" \t Welcome "<<ch1<<endl;
}
void results()
{
	if(x==100)
	cout<<" \t No cheating...... You have done this earlier also.";
	if(x==90)
	cout<<" \t You are extremely intelligent Your Score is 90";
	if(x==80)
	cout<<" \t You are intelligent Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<" \t You are average Your Score is "<<x<<"Better luck next time";
	else if(x<=40)
	cout<<" \t No use........ Not even 5 questions right";	
	}
 
};
int main()
{
	char ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	T4Tutorials obj1,obj2,obj3,obj4;
	obj1.user();
	obj2.header();
	cout<<"\t Q1. Which of the followins is ' THE HOLY  LAND'? \n\t a.Jerusalem \n\t b.Mathura \n\t c.Mecca  "<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q2. Which of the followins is called as ' THE ROOF OF THE WORLD'? \n\t a.Nepal \n\t b.Rome \n\t c.Tibet "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
 
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q3. Which of the followins is called as ' THE LAND OF RISING SUN'? \n\t a.Chicago \n\t b.Japan \n\t c.Tibet"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q4. Which of the following is called as ' THE GIFT OF NILE'? \n\t a.Chicago \n\t b.Egypt \n\t c.Africa "<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q5. Which of the following is called as ' THE LAND OF MIDNIGHT SUN'? \n\t a.Norway \n\t b.Japan \n\t c.Australia"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q6. Which of the following is called as ' THE LAND OF THUNDERBOLT'? \n\t a.Bhutan \n\t b.Canada \n\t c.Arab"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<" \t Q7. Which of the following is called as ' THE WINDY CITY? \n\t a.Jerusalem \n\t b.Japan \n\t c.Chicago"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'? \n\t a.Bangladesh \n\t b.Thailand \n\t c.India"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q9. Which of the following is called as ' THE CITY OF SEVEN HILLS'? \n\t a.Rome \n\t b.Nilgiri Hills \n\t c.Tibet "<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"\t Q10. Which of the following is called as ' THE DARK CONTIENENT'? \n\t a.Asia \n\t b.Australia \n\t c.Africa"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Grea! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj3.footer();
	obj4.results();
	getch();
 	return 0;
}