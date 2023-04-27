#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main ()
{
 system("cls");

    char str[1000],name[200],email_id[200],contact_no[11];
    int arr[1000];
    int flag=0;
    int choice=1,query;

    cout<<"Welcome to divy power\n";
    cout<<"Type start and than press enter\n";
    label:
    if(flag!=0){
	system("cls");
	cout<<"Error!!!\n*****Please Type Start*****\n";
    }
    cin>>str;
    strupr(str);

    flag=strcmp(str,"START");
    if(flag!=0)
    goto label;

    cout<<"How may I help you today choose\n";
    cout<<"1.Product    2.Service\n";
    label1:
    if(choice!=1&&choice!=2){
	cout<<"Error!!!\n";
    }
    cout<<"kindly enter your choice between 1 and 2\n";
    cin>>choice;
    if(choice!=1&&choice!=2){
	  system("cls");
	  goto label1;
       }
     if (choice==1)
       {
	cout<<" Which product are you planing for ?\n";
	cout<<" 1.Rooftop solar   2. Generator\n";
    cout<<"kindly enter your choice between 1 and 2 and than press enter\n";
    cin>>choice;
    if (choice==1)
     {
      cout<<"choose\n (1) Enquire to buy solar now  (2) Talk to Executive\n";
      cout<<"kindly enter your choice between 1 and 2 and press enter\n";
      cin>>choice;
      if(choice==1)
       {
	cout<<"Where are your planning for?\nchoose\n (1)Residential  (2)Commercial\n Kindly Enter your choice between 1 and 2 and than press enter\n";
	cin>>choice;
	if (choice==1)
	 {
	  cout<<" As you select Residential previously we are assuming\n That your sanction load is less than 20 kwp\n kindly give your following details so that our executive will connect to you soon\n";
	  cout<<"Kindly Enter your site sanction load in KwP and press enter->\n";
	  cin>>str;

	  cout<<"Kindly Enter your name and press enter->\n";
	  
	  cin>>name;
	 cout<<"kindly Enter your Email id and press enter->\n";
	  
	  cin>>email_id;
	  cout<<"kindly Enter your Contact Number and press enter\n";
	  cin>>contact_no;

	  cout<<"********** DETAILS YOU SHARED WITH US have been saved **********"<<endl;
	  cout<<"PROCESSING YOUR DETAILS";
	  for(int i=0 ; i<5 ;i++){
	     cout<<".";
	     //sleep(2);
	  }
	  cout<<"\nSanction load :"<<str<<endl;
	  cout<<"Name:"<<name<<endl;
	  cout<<"Email-id : "<<email_id<<endl;
	  cout<<"Mobile Number : "<<contact_no<<endl;
	  cout<<endl;

	  cout<<"********** THANKYOU FOR YOUR INTREST IN OUR PRODUCT :-)*******\n our sales executive will connet to you soon\nKINDLY PRESS A KEY TO EXIT\n";
	 }
	else
	 {
	 cout<<" As you select commercial previously we are are assuming\n That your sanction load is more than 20 kwp\n kindly give your following details so\n that our executive will connect to you soon\n";
	 cout<<"Kindly Enter your site sanction load in kwp and press enter->\n";
	  cin>>str;
	  cout<<"Kindly Enter your name and press enter->\n";
	  cin>>name;
	  cout<<"kindly Enter your Email id and press enter->\n";
	  cin>>email_id;
	  cout<<"kindly Enter your Contact Number and press enter\n";
	  cin>>contact_no;
	  cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	    cout<<"PROCESSING YOUR DETAILS";
	  for(int i=0 ; i<5 ;i++){
	     cout<<".";
	     //sleep(2);
	  }
	  cout<<"\nSanction load :"<<str<<endl;
	  cout<<"Name:"<<name<<endl;
	  cout<<"Email-id : "<<email_id<<endl;
	  cout<<"Mobile Number : "<<contact_no<<endl;
	  cout<<endl;

	  cout<<" THANKYOU FOR YOUR INTREST IN OUR PRODUCT :-)\n our sales executive will connet to you soon\nKINDLY PRESS A KEY TO end chat\n";
	 }
       } //buy solar now
	  else        // talk to executive for rooftop
	   {
	    cout<<"As you want to connect with our sales executive person\n kindly mention your contact no and press enter\n";
	    cin>>str;
	    cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	cout<<"PROCESSING YOUR DETAILS";
	 for(int i=0 ; i<5 ;i++)
	    {
	     cout<<".";

	     //sleep(2);
	    }
	    cout<<"\nMobile no:"<<str<<endl;
	    cout<<"\nOur executive will contact you within 24 hour\n THANKYOU FOR YOUR INTREST IN OUR PRODUCT :-)\n KINDLY PRESS A KEY TO end chat\n";
	   }
     }// For rooftop
	  else  //For generator
	   {

	    cout<<"choose\n (1) Enquire to buy generator now  (2) Talk to executive\n";
	    cout<<"kindly enter your choice between 1 and 2 and press enter\n";
	    cin>>query;
	    if(query==1)
	    {
	     cout<<"What type of generator are you planning for?\n choose\n (1)Petrol Generator   (2)Diesel Generator\n";
	     cout<<"kindly enter your choice between 1 and 2 and press enter\n";
	     cin>>query;
	     if(query==1)
	      {
	       cout<<" As you want to buy petrol generator\n kindly mention how much capacity of genset are you planning for?\n";
	       cout<<"Kindly mention your genset need in kva here and press enter->\n";
	       cin>>str;
	       cout<<"kindly mention your following details\n so that we can share a estimate budget\n";

	       cout<<"Kindly Enter your name and press enter->\n";
	       cin>>name;
	       cout<<"kindly Enter your Email id and press enter->\n";
	       cin>>email_id;
	       cout<<"kindly Enter your Contact Number and press enter\n";
	       cin>>contact_no;
	       cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	       cout<<"PROCESSING YOUR DETAILS";
	       for(int i=0 ; i<5 ;i++){
	       cout<<".";
	       //sleep(2);
		}
	       cout<<"Name:"<<name<<endl;
	       cout<<"Email-id : "<<email_id<<endl;
	       cout<<"Mobile Number : "<<contact_no<<endl;
	       cout<<"Generator type:Pertrol"<<endl;

	       cout<<" THANKYOU FOR YOUR INTREST IN OUR PRODUCT\N OUR SALES EXECUTIVE WILL CONNECT WITH YOU SOON\N";
	      }//for petrol generator
	      else
	      {
	       cout<<" As you want to buy diesel generator, kindly mention how much capacity of genset are you planning for?"<<endl;
	       cout<<"Kindly mention your genset need in kva here and press enter->\n";
	       cin>>str;
	       cout<<"kindly mention your following details\n so that we can share a estimate budget\n";
	       cout<<"Kindly Enter your name and press enter->\n";
	       cin>>name;
	       cout<<"kindly Enter your Email id and press enter->\n";
	       cin>>email_id;
	       cout<<"kindly Enter your Contact Number and press enter\n";
	       cin>>contact_no;
	       cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	       cout<<"PROCESSING YOUR DETAILS";
	       for(int i=0 ; i<5 ;i++){
	       cout<<".";
	       //sleep(2);
		}
	       cout<<"Name:"<<name<<endl;
	       cout<<"Email-id : "<<email_id<<endl;
	       cout<<"Mobile Number : "<<contact_no<<endl;
	       cout<<"Generator type:Diesel"<<endl;

	       cout<<" THANKYOU FOR YOUR INTREST IN OUR PRODUCT :-)\n our sales executive will connet to you soon\nKINDLY PRESS A KEY TO end chat\n";
	      }//for diesel generator
	    } //for buy  generator
	     else  //for talk to executive for generator
	     {
		cout<<"As you want to connect with our sales executive person\n kindly mention your contact no and press enter\n";
		cin>>str;
		cout<<"Our executive will contact you within 24 hour\n THANKYOU FOR YOUR INTREST IN OUR PRODUCT :-)\n KINDLY PRESS A KEY TO end chat\n";
	     }
	  } //for generator
    } //for product
  else
   {
     cout<<" *****Welcome to our service*****\n Kindly choose for which product do you want to take service\n (1) Rooftop solar (2) generator\n";
     cout<<"Kindly enter your choice between 1 and 2 and press enter\n";
     cin>>query;
     if (query==1)//for rooftop service
      {
	cout<< "kindly mention which type of problem are you facing?\n (1) Electricity Generation  (2) Online Monitoring  (3) Inverter\n (4) Panel  (5) Electricity issue\n (6) Others\n";
	cout<<"Kindly enter your choice between 1,2,3,4,5 and 6 than press enter 2 times\n";
	cin>>query;
	cout<<"*****Thankyou for thinking about us for taking service*****\nkindly mention your following details\n so that we can appoint a meeting of our service executive with you\n";
	cout<<"\nkindly mention your following details\n";
	cout<<"Kindly Enter your name and press enter->\n";
	cin>>name;
	cout<<"kindly Enter your Email id and press enter->\n";
	cin>>email_id;
	cout<<"kindly Enter your Contact Number and press enter\n";
	cin>>contact_no;
	cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	cout<<"PROCESSING YOUR DETAILS";
	 for(int i=0 ; i<5 ;i++)
	    {
	     cout<<".";
	     //sleep(2);
	    }
	cout<<"\nName:"<<name<<endl;
	cout<<"Email-id : "<<email_id<<endl;
	cout<<"Mobile Number : "<<contact_no<<endl;
	cout<<" ******THANKYOU FOR YOUR INTREST IN OUR SERVICE\n OUR SERVICE EXECUTIVE WILL CONNECT TO YOU SOON\n******";
      }  //for rooftop service
     else
      { //for generator service
	cout<<"Kindly mention which type of generator are you using\n (1)Petrol generator  (2)Diesel generator\n ";
	cout<<"kindly enter your choice between 1 and 2\n";
	cin>>query;
	if (query==1)
	 {//petrol generator
	   cout<<"*****Thankyou for thinking about us for taking service*****\nkindly mention your following details\n so that we can appoint a meeting of our service executive with you\n";
	   cout<<"\nkindly mention your following details\n";
	   cout<<"Kindly Enter your name and press enter->\n";
	   cin>>name;
	   cout<<"kindly Enter your Email id and press enter->\n";
	   cin>>email_id;
	   cout<<"kindly Enter your Contact Number and press enter\n";
	   cin>>contact_no;
	   cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	   cout<<"PROCESSING YOUR DETAILS";
	    for(int i=0 ; i<5 ;i++)
	    {
	     cout<<".";
	     //sleep(2);
	    }
	   cout<<"\nName:"<<name<<endl;
	   cout<<"Email-id : "<<email_id<<endl;
	   cout<<"Mobile Number : "<<contact_no<<endl;
	   cout<<"Generator Type :Petrol"<<endl;
	   cout<<endl;
	   cout<<" ******THANKYOU FOR YOUR INTREST IN OUR SERVICE\n OUR SERVICE EXECUTIVE WILL CONNECT TO YOU SOON\n******";
	 }//petrol generator
	else
	{
	   cout<<"*****Thankyou for thinking about us for taking service*****\nkindly mention your following details\n so that we can appoint a meeting of our service executive with you\n";
	   cout<<"\nkindly mention your following details\n";
	   cout<<"Kindly Enter your name and press enter->\n";
	   cin>>name;
	   cout<<"kindly Enter your Email id and press enter->\n";
	   cin>>email_id;
	   cout<<"kindly Enter your Contact Number and press enter\n";
	   cin>>contact_no;
	   cout<<"********** DETAILS YOU SHARED WITH US **********"<<endl;
	   cout<<"PROCESSING YOUR DETAILS";
	    for(int i=0 ; i<5 ;i++)
	    {
	     cout<<".";
	     //sleep(2);
	    }
	   cout<<"\nName:"<<name<<endl;
	   cout<<"Email-id : "<<email_id<<endl;
	   cout<<"Mobile Number : "<<contact_no<<endl;
	   cout<<"Generator Type :Diesel"<<endl;
	   cout<<endl;
	   cout<<" ******THANKYOU FOR YOUR INTREST IN OUR SERVICE\n OUR SERVICE EXECUTIVE WILL CONNECT TO YOU SOON\n******";
	 }
     } //for generator service


  //for end coummunication program
   } //for start menu
 getch();
}

