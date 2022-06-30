#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;
class test
{
	private:
	int r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,score=0,z,k;
	string Name,age,phone_number,email;
	public:
	int getdata();
};
int test::getdata()
{
	cout<<"\t\t\t\tWELCOME\n\n";
	cout<<"\t\t\tGENERAL KNOWLEDGE TEST\n\n\n";
	cout<<"\tFor Qualifing this Test Your  Score Should be  Atleast 6/10\n\n";
	cout<<"\tEnter Your details\n\n";
	cout<<"\tName:";
	cin>>name;
	cout<<"\n\tage:";
	cin>>age;
	cout<<"\n\tPhone number:";
	cin>>phone_number;
	cout<<"\n\tEmail:";
	cin>>email;
	if(!name.empty() && !age.empty() && !phone_number.empty() && !email.empty())
	{
		cout<<typeof(name);
		cout<<"\n\n\t\tDetails Saved\n\n";
		cout<<"\t\tDO YOU WANT TO START THE TEST?\n\n";
		cout<<"\t\t1.YES  2.NO\n\n\n";
		cin>>r;
		if(r==1)
		{
			start:
			int score=0;
			system("CLS");
			cout<<"\t\t\tGENERAL KNOWLEDGE TEST\n\n\n";
			cout<<"\n\t\t1. Who was the first Indian woman in Space?\n\n";
			cout<<"\t\t\t1.Kalpana Chawla\n\n\t\t\t2. Sunita Williams\n\n \t\t\t3. Koneru Humpi\n\n\t\t\t4. None of the above\n";
			cin>>r1;
			if(r1==1)
			{
				score++;
			}
			cout<<"\n\n\t\t2.Who was the first Indian in space?\n\n";
			cout<<"\t\t\t1. Vikram Ambalal\n\n\t\t\t2. Ravish Malhotra\n\n\t\t\t3.Rakesh Sharma \n\n\t\t\t4.Nagapathi Bhat\n\n";
			cin>>r2;
			if(r2==3)
			{
				score++;
			}
			cout<<"\n\n\t\t3. Who was the first Man to Climb Mount Everest Without Oxygen?\n\n";
			cout<<"\t\t\t1.Junko Tabei \n\n\t\t\t2.Reinhold Messner \n\n\t\t\t3.Peter Habeler \n\n\t\t\t4.Phu Dorji\n\n";
			cin>>r3;
			if(r3==4)
			{
				score++;
			}
			cout<<"\n\n\t\t4. Who built the Jama Masjid?\n\n";
			cout<<"\t\t\t1.Jahangir\n\n\t\t\t2.Akbar\n\n\t\t\t3.Imam Bukhari\n\n\t\t\t4.Shah Jahan";
			cin>>r4;
		
			if(r4==4)
			{
				score++;
			}
			system("CLS");
			cout<<"\n\n\t\t5. Who wrote the Indian National Anthem?\n\n";
			cout<<"\n\t\t\t1.Bakim Chandra Chatterji\n";
			cout<<"\n\t\t\t2.Rabindranath Tagore\n";
			cout<<"\n\t\t\t3.Swami Vivekanand\n";
			cout<<"\n\t\t\t4.None of the above\n";
			cin>>r5;
		
			if(r5==2)
			{
				score++;
			}
			cout<<"\t\t\tGENERAL KNOWLEDGE TEST\n\n\n";
			cout<<"\n\n\t\t6. Who was the first Indian Scientist to win a Nobel Prize?\n\n";
			cout<<"\n\t\t\t1.CV Raman\n";
			cout<<"\n\t\t\t2.Amartya Sen\n";
			cout<<"\n\t\t\t3.Hargobind Khorana\n";
			cout<<"\n\t\t\t4.Subramanian Chrandrashekar\n";
			cin>>r6;
		
			if(r6==1)
			{
				score++;
			}
			cout<<"\n\n\t\t7. Who is the first Indian to win a Nobel Prize?\n\n";
			cout<<"\n\t\t\t1.Rabindranath Tagore\n";
			cout<<"\n\t\t\t2.CV Raman\n";
			cout<<"\n\t\t\t3.Mother Theresa\n";
			cout<<"\n\t\t\t4.Hargobind Khorana\n";
			cin>>r7;
			if(r7==1)
			{
				score++;
			}
		
			cout<<"\n\n\t\t8. Who was the first Indian woman to win the Miss World Title?\n\n";
			cout<<"\n\t\t\t1.Aishwarya Rai\n";
			cout<<"\n\t\t\t2.Sushmita Sen\n";
			cout<<"\n\t\t\t3.Reita Faria\n";
			cout<<"\n\t\t\t4.Diya Mirza\n";
			cin>>r8;
			if(r8==3)
			{
				score++;
			}
			system("CLS");
			cout<<"\n\n\t\t9. Who was the first President of India?\n\n";
			cout<<"\n\t\t\t1.Abdul Kalam\n";
			cout<<"\n\t\t\t2.Lal Bahadur Shastri\n";
			cout<<"\n\t\t\t3.Dr. Rajendra Prasad\n";
			cout<<"\n\t\t\t4.Zakir Hussain\n";
			cin>>r9;
			if(r9==3)
			{
				score++;
			}
		
			cout<<"\n\n\t\t10. Who was the first Indian to win the Booker Prize?\n\n";
			cout<<"\n\t\t\t1.Dhan Gopal Mukerji\n";
			cout<<"\n\t\t\t2.Nirad C. Chaudhuri\n";
			cout<<"\n\t\t\t3.Arundhati Roy\n";
			cout<<"\n\t\t\t4.Aravind Adiga\n";
			cin>>r10;
		
			if(r10==3)
			{
				score++;
			}
			system("CLS");
				cout<<"\n\n\t\tYOUR TOTAL SCORE IS "<<score<<" OUT OF 10\n\n";
			if(score<6)
			{
				cout<<"\t\tFAIL!! BETTER LUCK NEXT TIME\n\n";
			}
			else
			{
				cout<<"\t\tCONGRATULATIONS!! YOU HAVE PASSED THE TEST\n\n\n";
			}
			cout<<"\t\tDo you want to retake the test\n\n";
			cout<<"\t1.Retake the Test 2.Display the Answers 3.Exit ";
			cin>>z;
			if(z==1){
				goto start;
			}
			if(z==2){
			
				cout<<"\n1. Who was the first Indian woman in Space?\n\n";
				cout<<"1.Kalpana Chawla\n\n2. Sunita Williams\n\n 3. Koneru Humpi\n\n4. None of the above\n";
				if(r1==1){
				cout<<"\t\t\tCorrect answer:"<<r1<<"\n";
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
					cout<<"\t\t\tYour answer:"<<r1<<"\n";
					cout<<"\t\t\tCorrect answer:1";
				}
				cout<<"\n\n2.Who was the first Indian in space?\n\n";
				cout<<"1. Vikram Ambalal\n\n2. Ravish Malhotra\n\n3.Rakesh Sharma \n\n4.Nagapathi Bhat\n\n";
				if(r2==3){
					cout<<"\t\t\tCorrect answer: "<<r2;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r2<<"\n";
				cout<<"\t\t\tCorrect answer: 3 ";
				}
			
				cout<<"\n\n3. Who was the first Man to Climb Mount Everest Without Oxygen?\n\n";
				cout<<"1.Junko Tabei \n\n\2.Reinhold Messner \n\n3.Peter Habeler \n\n4.Phu Dorji\n\n";
				if(r3==4){
					cout<<"\t\t\tCorrect answer: "<<r3;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r3<<"\n";
				cout<<"\t\t\tCorrect answer: 4 ";
				}
				cout<<"\n\n4. Who built the Jama Masjid?\n\n";
				cout<<"1.Jahangir\n\n2.Akbar\n\n3.Imam Bukhari\n\n4.Shah Jahan";
				if(r4==4){
					cout<<"\t\t\tCorrect answer: "<<r4;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
					cout<<"\t\t\tYour answer:"<<r4<<"\n";
					cout<<"\t\t\tCorrect answer: 4";
				}
				cout<<"\n\n5. Who wrote the Indian National Anthem?\n\n";
				cout<<"\n1.Bakim Chandra Chatterji\n";
				cout<<"\n2.Rabindranath Tagore\n";
				cout<<"\n3.Swami Vivekanand\n";
				cout<<"\n4.None of the above\n";
				if(r5==2){
					cout<<"\t\t\tCorrect answer: "<<r5;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
					cout<<"\t\t\tYour answer:"<<r5<<"\n";
					cout<<"\t\t\tCorrect answer: 2";
				}
				cout<<"\n\n\6. Who was the first Indian Scientist to win a Nobel Prize?\n\n";
				cout<<"\n1.CV Raman\n";
				cout<<"\n2.Amartya Sen\n";
				cout<<"\n3.Hargobind Khorana\n";
				cout<<"\n4.Subramanian Chrandrashekar\n";
				if(r6==1){
					cout<<"\t\t\tCorrect answer: "<<r6;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r6<<"\n";
				cout<<"\t\t\tCorrect answer: 1";
				}
				cout<<"\n\n7. Who is the first Indian to win a Nobel Prize?\n\n";
				cout<<"\n1.Rabindranath Tagore\n";
				cout<<"\n2.CV Raman\n";
				cout<<"\n3.Mother Theresa\n";
				cout<<"\n4.Hargobind Khorana\n";
				if(r7==1){
					cout<<"\t\t\tCorrect answer: "<<r7;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r7<<"\n";
				cout<<"\t\t\tCorrect answer: 1";
				}
				cout<<"\n\n8. Who was the first Indian woman to win the Miss World Title?\n\n";
				cout<<"\n1.Aishwarya Rai\n";
				cout<<"\n\t\t2.Sushmita Sen\n";
				cout<<"\n3.Reita Faria\n";
				cout<<"\n4.Diya Mirza\n";
				if(r8==3){
					cout<<"\t\t\tCorrect answer: "<<r8;
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r8<<"\n";
				cout<<"\t\t\tCorrect answer: 3";
				}
				cout<<"\n\n9. Who was the first President of India?\n\n";
				cout<<"\n1.Abdul Kalam\n";
				cout<<"\n2.Lal Bahadur Shastri\n";
				cout<<"\n3.Dr. Rajendra Prasad\n";
				cout<<"\n4.Zakir Hussain\n";
				if(r9==3){
					cout<<"\t\t\tCorrect answer: "<<r9<<"\n";
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r9<<"\n";
				cout<<"\t\t\tCorrect answer: 3";
				}
				cout<<"\n\n10. Who was the first Indian to win the Booker Prize?\n\n";
				cout<<"\n1.Dhan Gopal Mukerji\n";
				cout<<"\n2.Nirad C. Chaudhuri\n";
				cout<<"\n3.Arundhati Roy\n";
				cout<<"\n4.Aravind Adiga\n";
				if(r10==3){
					cout<<"\t\t\tCorrect answer: "<<r10<<"\n";
				}
				else{
					cout<<"\t\t\tXXX WRONG XXX\n";
				cout<<"\t\t\tYour answer:"<<r10<<"\n";
				cout<<"\t\t\tCorrect answer: 3";
				}
			}
		}
		else 
		{
			cout<<"\n\n\t\t\tTHANK YOU";
		}
	}
}

int main()
{
	test x;
	x.getdata();
}
