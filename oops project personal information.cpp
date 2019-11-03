#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include <stdlib.h>
using namespace std;
class name_ad
{

   private:

 string address;

   protected:
    string idno;
   public:
    string name;


    void get1(void)
    { fstream file;
  file.open("info.txt",ios::out|ios::in|ios::app);
        cout<<"\nPlease Enter the Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And the ID no         :";
       cin>>idno;

       file<<name<<" "<<idno<<" ";

      cout<<"\nAddress of your residence :";
     cin>>address;
      file<<address<<"\n";
      cout<<endl;
    }


    void display1(void)
    {fstream file;
     file.open("info.txt",ios::out|ios::in);
    string line;

   string arr[3];
    string s;
    int k=0;
  while(getline(file,line)){
       int k=0;

  for(int i=0;i<=line.length();i++)
  {

      char ch=line[i];
      if(ch!=' ')
       s=s+ch;
       else
       {
           arr[k]=s;
           s=" ";
           k++;
       }


  }
  name=arr[0];
       idno=arr[1];
       address=arr[2];


       cout<<endl;
       cout<<"name: "<<name<<endl;
       cout<<"id: "<<idno<<endl;
       cout<<"address: "<<address<<endl;
       cout<<"\n***********************************************";
       cout<<endl;
  }


    }

};
//====================================================================

class numbers:public name_ad
{
  public:
       string res_tele;
          string b_group;
        string i_card;
        string p_no;
        string acc_no;
        string c_no;
        string t_no;
        string r_no;

  public:
       void get2(void);
       void display2(void);

};

void numbers::get2(void)
{
 fstream file1;
  file1.open("info1.txt",ios::out|ios::in|ios::app);

   cout<<"\n\n  Please,Enter your important numbers:\n";
   cout<<"\n Name                :";
   cin>>name;
   cout<<"\n ID no               :";
   cin>>idno;
   cout<<"\n Res. Telephone     : ";
   cin>>res_tele;
   cout<<"\n Blood Group        :";
   cin>>b_group;
   cout<<"\n identity card no   :";
   cin>>i_card;
   cout<<"\n Bank Account no    :";
   cin>>acc_no;
   cout<<"\n Income tax no      :";
   cin>>t_no;
   cout<<"\n Credit card no     :";
   cin>>c_no;
   cout<<"\n Car resistration no:";
   cin>>r_no;
 file1<<name<<" "<<idno<<" "<<res_tele<<" "<<b_group<<" "<<i_card<<" "<<acc_no<<" "<<t_no<<" "<<c_no<<" "<<r_no<<" ";
 cout<<endl;


}

void numbers::display2()
{

   fstream file1;
     file1.open("info1.txt",ios::out|ios::in);
    string line;

   string arr[9];
    string s;
    int k=0;
  while(getline(file1,line)){
       int k=0;

  for(int i=0;i<=line.length();i++)
  {

      char ch=line[i];
      if(ch!=' ')
       s=s+ch;
       else
       {
           arr[k]=s;
           s=" ";
           k++;
       }


  }
  name=arr[0];
       idno=arr[1];

       res_tele=arr[2];
       b_group=arr[3];
       i_card=arr[4];
       acc_no=arr[5];
       t_no=arr[6];
       c_no=arr[7];
       r_no=arr[8];

       cout<<"\n***********************************************";
   cout<<"\n\n  Name               :"<<name<<endl;
   cout<<"\n\n  ID No              :"<<idno<<endl;
   cout<<"\n\n  Res telephone no   :"<<res_tele<<endl;
   cout<<"\n\n  Blood group        :"<<b_group<<endl;
   cout<<"\n\n  Identity Card no   :"<<i_card<<endl;
   cout<<"\n\n  Bank account no    :"<<acc_no<<endl;
   cout<<"\n\n  Income tax no      :"<<t_no<<endl;
   cout<<"\n\n  Credit card no     :"   <<c_no<<endl;
   cout<<"\n\n  Car resistration no:"<<r_no<<endl;
   cout<<"\n************************************************\n";

}
}


//=====================================================================

class reminder:public numbers
{
   public:
      string pr;
      string ir;
      string dr;
      string id;
        string mc;

   public:
      void get3();
      void display3();
      void s3();

}
;

void reminder::get3()
{
 fstream file2;
     file2.open("info2.txt",ios::out|ios::in|ios::app);
  cout<<"\nPlease Enter the Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And the ID no         :";
       cin>>idno;
  cout<<"\n\n Passport Renewal(date-month-year) :";
  cin>>pr;
  cout<<"\n\n Insurance Renewal                 :";
  cin>>ir;
  cout<<"\n\n Driving licence renewal           :";
  cin>>dr;
  cout<<"\n\n Income Tax Date Due               :";
  cin>>id;
  cout<<"\n\n Medical check-up                  :";
  cin>>mc;
file2<<name<<" "<<idno<<" "<<pr<<" "<<ir<<" "<<dr<<" "<<id<<" "<<mc<<" ";
cout<<endl;
}

void reminder::display3()
{
    fstream file2;
     file2.open("info2.txt",ios::out|ios::in);
    string line;

   string arr[7];
    string s;
    int k=0;
  while(getline(file2,line)){
       int k=0;

  for(int i=0;i<=line.length();i++)
  {

      char ch=line[i];
      if(ch!=' ')
       s=s+ch;
       else
       {
           arr[k]=s;
           s=" ";
           k++;
       }

  }
  name=arr[0];
  idno=arr[1];
  pr=arr[2];
  ir=arr[3];
  dr=arr[4];
  id=arr[5];
  mc=arr[6];

  cout<<"\n****************************************************";
  cout<<"\n\n Name                               :"<<name<<endl;
  cout<<"\n\n ID no                              :"<<idno<<endl;
  cout<<"\n\n Passport Renewal(date-month-year)  :"<<pr<<endl;
  cout<<"\n\n Insurance renewal                  :"<<ir<<endl;
  cout<<"\n\n Driving licence renewal            :"<<dr<<endl;
  cout<<"\n\n Income Tax Date due                :"<<id<<endl;
  cout<<"\n\n Medical check up                   :"<<mc<<endl;
  cout<<"\n****************************************************\n";

}
}

//=========================================================================
class abstClass{
       virtual void get4(void)=0;
       virtual void display4(void)=0;

};

class office:public name_ad, public abstClass
{
  public:
       string  c;
       string ad1;
       string tel;
       string mob;
       string fax;

  public:
       void get4(void);
       void display4(void);
};

void office::get4(void)
{
fstream file3;
     file3.open("info3.txt",ios::out|ios::in|ios::app);
   cout<<"\nPlease Enter the Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And the ID no         :";
       cin>>idno;
   cout<<"\n\nPlease Enter the information about your working place :";
   cout<<"\n\nEnter the name of your company :";
   cin>>c;
   cout<<"\n\nAddress                        :";
   cin>>ad1;
   cout<<"\n\nTelephone                      :";
   cin>>tel;
   cout<<"\n\nMobile                         :";
   cin>>mob;
   cout<<"\n\nFax                            :";
   cin>>fax;
file3<<name<<" "<<idno<<" "<<c<<" "<<ad1<<" "<<tel<<" "<<mob<<" "<<fax<<" ";
cout<<endl;
}

void office::display4()
{ fstream file3;
     file3.open("info3.txt",ios::out|ios::in);
    string line;

   string arr[7];
    string s;
    int k=0;
  while(getline(file3,line)){
       int k=0;

  for(int i=0;i<=line.length();i++)
  {

      char ch=line[i];
      if(ch!=' ')
       s=s+ch;
       else
       {
           arr[k]=s;
           s=" ";
           k++;
       }


  }
  name=arr[0];
       idno=arr[1];
       c=arr[2];
       ad1=arr[3];
       tel=arr[4];
       mob=arr[5];
       fax=arr[6];
   cout<<"\n*******************************************************";
   cout<<"\n\n Name         :"<<name<<endl;
   cout<<"\n\n ID No        :"<<idno<<endl;
   cout<<"\n\n Company      :"<<c<<endl;
   cout<<"\n\n Address      :"<<ad1<<endl;
   cout<<"\n\n Telephone    :"<<tel<<endl;
   cout<<"\n\n Mobile       :"<<mob<<endl;
   cout<<"\n\n Fax          :"<<fax<<endl;
   cout<<"\n*******************************************************\n";

}
}

//====================================================================

class routine:public name_ad
{
  public:
       string sunday,monday,tuesday;
       string  wednesday,thursday,friday,saturday;

  public:
       void get5(void);
       void display5(void);

};

void routine::get5()
{ fstream file4;
     file4.open("info4.txt",ios::out|ios::in|ios::app);

   cout<<"\nPlease Enter the Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And the ID no         :";
       cin>>idno;
  cout<<"\n  Enter your Routine of The Week :(Time)-Plan***(Time)-Plan....";
  cout<<"\nSunday    :";
  cin>>sunday;
  cout<<endl;
  cout<<"\nMonday    :";
  cin>>monday;
  cout<<endl;
  cout<<"\nTuesday   :";
  cin>>tuesday;
  cout<<endl;
  cout<<"\nWednesday :";
  cin>>wednesday;
  cout<<endl;
  cout<<"\nThursday   :";
  cin>>thursday;
  cout<<endl;
  cout<<"\nFriday    :";
  cin>>friday;
  cout<<endl;
  cout<<"\nSaturday  :";
  cin>>saturday;

file4<<name<<" "<<idno<<" "<<sunday<<" "<<monday<<" "<<tuesday<<" "<<wednesday<<" "<<thursday<<" "<<friday<<" "<<saturday<<" ";
cout<<endl;
}

void routine::display5()
{ fstream file4;
     file4.open("info4.txt",ios::out|ios::in);
    string line;

   string arr[7];
    string s;
    int k=0;
  while(getline(file4,line)){
       int k=0;

  for(int i=0;i<=line.length();i++)
  {

      char ch=line[i];
      if(ch!=' ')
       s=s+ch;
       else
       {
           arr[k]=s;
           s=" ";
           k++;
       }


  }
  name=arr[0];
       idno=arr[1];
       sunday=arr[2];
       monday=arr[3];
       tuesday=arr[4];
       wednesday=arr[5];
       thursday=arr[6];
       friday=arr[7];
       saturday=arr[8];

  cout<<"\n**************************************************************";
  cout<<"\n  Routine of The Week :";
  cout<<"\n  Name     :"<<name<<endl;
  cout<<"\n  ID no    :"<<idno<<endl;
  cout<<"\n  Sunday   :"<<sunday<<endl;
  cout<<"\n  Monday   :"<<monday<<endl;
  cout<<"\n  Tuesday  :"<<tuesday<<endl;
  cout<<"\n  Wednesday:"<<wednesday<<endl;
  cout<<"\n  Thursday  :"<<thursday<<endl;
  cout<<"\n  Friday   :"<<friday<<endl;
  cout<<"\n  Saturday :"<<saturday<<endl;
  cout<<"\n**************************************************************\n";
  }
}


//======================================================================

int main()
{

 system("cls");
  int a,i;
  char ch;

  name_ad n[10],n1;
  numbers b[10],b1;
  reminder r[10],r1;
  office o[10],o1;
  routine t[10],t1;

  cout<<"\n\n*#*#*#*  THIS IS PERSONAL INFORMATION MANAGEMENT  *#*#*#*#*"<<"\n\n";
  cout<<"\n\nHow many people's information you want to management?\n";

  cin>>a;
  int x;
  do
  {
      cout<<"\n*******************************************\n"
      <<"\n*    You can do the following ;           *\n"
      <<"\n*    Enter the appropriate number         *\n";
      cout<<"\n*    1 :For Name & address                *\n";
      cout<<"\n*    2 :For Display name & address        *\n";
      cout<<"\n*    3 :For Important Numbers             *\n";
      cout<<"\n*    4 :For Display Important numbers     *\n";
      cout<<"\n*    5 :For Reminders                     *\n";
      cout<<"\n*    6 :To Display Reminders              *\n";
      cout<<"\n*    7 :For official recognisation        *\n";
      cout<<"\n*    8 :To Display Official recognisation *\n";
      cout<<"\n*    9 :To Make a Routine                 *\n";
      cout<<"\n*    10:To Display The Routine            *\n";
      cout<<"\n*    11:Quit                              *\n";
      cout<<"\n*    What is your option?                 *\n"
      <<"\n*******************************************\n";

   cin>>x;

   switch(x)
   {

   case 1:
       for( i=0;i<a;i++)
      {
         cout<<"\nName,ID & Address of person :"<<i+1<<"\n\n";
         n[i]. get1();
       }
   break;

   case 2:
       cout<<"\nName,ID & Address of person"<<"\n\n";
       n1.display1();
  break;



  case 3:
     for(i=0;i<a;i++)
    {
      cout<<"\nEnter the Important numbers :"<<i+1<<"\n\n";
      b[i].get2();

    }

   break;

   case 4:

        cout<<"\nThe Important Numbers for"<<"\n\n";
        b1.display2();
   break;



  case 5:
      for(i=0;i<a;i++)
    {
       cout<<"\nEnter What you want to remind for"<<i+1<<"?"<<"\n\n";
       r[i].get3();
    }

  break;
  case 6:
        cout<<"\nThe Reminders for"<<i+1<<"\n\n";

        r1.display3();

  break;



  case 7:
       for(i=0;i<a;i++)
      {
        cout<<"\nEnter the Information Of the working place for"<<"\n\n";
        o[i].get4();

      }
  break;

  case 8:

       cout<<"\nThe Information of Working Place of" <<"\n\n";
       o1.display4();

  break;


 case 9:
      for(i=0;i<a;i++)
      {
    cout<<" Make Routine\n";
    t[i].get5();
       }
  break;

  case 10:
     cout<<" Routine :\n";
     t1.display5();
  break;


  case 11:

  break;



 default:
      cout<<"\n\nError Input ,Try again.\n ";

      }


 }while(x!=11);

 getch();
 return 0;

}
