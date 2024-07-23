#include<iostream>
#include<stdio.h>
#include<conio.h>//for get ch
#include<fstream>//Stream class to both read and write from/to files.
#include<iomanip>//to manipulate input output files
#include <stdlib.h>// standard library to allocate memory to functions
using namespace std;
class name_ad
{

   private:

    char address[10];


   public:
    char name[10];
    int idno;

    void get1(void)
    {
       cout<<"\nPlease Enter your Name  :";
       cin>>name;
       cout<<endl;
       cout<<"\n And your ID no         :";
       cin>>idno;
       cout<<endl;
    }

    void get(void)
    {
      cout<<"\nAddress of your residence :";
      cin>>address;
      cout<<endl;
    }

    void display1(void)
    {
      cout<<"\n****************************************\n"
         <<"  Name    :"<<name<<endl;
      cout<<"\n  ID No   :"<<idno<<endl;
      cout<<"\n  Address :"<<address<<endl;
      cout<<"\n****************************************";
    }

    int id()
    {
    return idno;
    }

};
void Insert()
{
ofstream fout;
fout.open("today.dat",ios::binary|ios::app);
name_ad n;
n.get1();
n.get();
fout.write((char*)&n,sizeof(n));
 fout.seekp(0);
fout.close();
}
void show()
{ifstream fin;
fin.open("today.dat",ios::binary|ios::in);
name_ad n;
 while(fin.read((char*)&n,sizeof(n)))
n.display1();
 fin.seekg(0);
fin.close();
}


void Search()
    {

     cout<<"\nPlease,Enter your ID.\n";
     int q;
     cin>>q;
     name_ad n;
     ifstream fin("today.dat",ios::binary|ios::in);
     while(fin.read((char*)&n,sizeof(n)))
    { if(q==n.id())
     {

         n.display1();
     }
    }
    fin.seekg(0);
    fin.close();

 }
 void Delete()
 {
  cout<<"\nEnter the id whose record is to to be deleted\n";
  int q;
  cin>>q;
  name_ad n;
  ofstream fout("temp.dat",ios::binary|ios::app);
      ifstream fin("today.dat",ios::binary|ios::in);
     while(fin.read((char*)&n,sizeof(n)))
    { if(q!=n.id())
     { fout.write((char*)&n,sizeof(n));
     }
    }fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today.dat");
    rename("temp.dat","today.dat");
 }
void modify()
{cout<<"\nEnter the id whose record is to to be modify\n";
  int q;
  cin>>q;
  name_ad n;
  ofstream fout("temp.dat",ios::binary|ios::app);
      ifstream fin("today.dat",ios::binary|ios::in);
     while(fin.read((char*)&n,sizeof(n)))
    { if(q==n.id())
      {
          n.get1();
          n.get();
      }
      fout.write((char*)&n,sizeof(n));
    }
    fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today.dat");
    rename("temp.dat","today.dat");
}





class numbers:public name_ad
{
  private:
       char res_tele[10];
       char b_group[10];
       char i_card[10];
       char p_no[10];
       char acc_no[10];
       char c_no[10];
       char t_no[10];
       char r_no[10];

  public:
       void get2(void);
       void display2(void);
       void s2(void);
       int id(void);

};

void numbers::get2()
{
   cout<<"\n\n  Please,Enter your important numbers:\n";
  cout<<"\n Name                :";
  cin>>name;
   cout<<"\n Id no               :";
   cin>>idno;
   cout<<"\n Res. Telephone     : ";
   cin>>res_tele;
   cout<<"\n Blood Group        :";
   cin>>b_group;
   cout<<"\n Identity card no   :";
   cin>>i_card;
   cout<<"\n Bank Account no    :";
   cin>>acc_no;
  cout<<"\n Income tax no      :";
  cin>>t_no;
   cout<<"\n Credit card no     :";
   cin>>c_no;
  cout<<"\n Car Registration no:";
   cin>>r_no;
}



void numbers::display2()
{
   cout<<"\n***********************************************";
   cout<<"\n\n  Name               :"<<name<<endl;
    cout<<"\n\n  Id No              :"<<idno<<endl;
    cout<<"\n\n  Registeres telephone no   :"<<res_tele<<endl;
   cout<<"\n\n  Blood group        :"<<b_group<<endl;
   cout<<"\n\n  Identity Card no   :"<<i_card<<endl;
   cout<<"\n\n  Bank account no    :"<<acc_no<<endl;
   cout<<"\n\n  Income tax no      :"<<t_no<<endl;
   cout<<"\n\n  Credit card no     :"   <<c_no<<endl;
   cout<<"\n\n  Car Registration no:"<<r_no<<endl;
   cout<<"\n************************************************\n";
}
int numbers:: id()
    {
    return idno;
    }
void Insert1()
{
ofstream fout;
fout.open("today1.dat",ios::binary|ios::app);
numbers n1;
n1.get2();
fout.write((char*)&n1,sizeof(n1));
 fout.seekp(0);
fout.close();
}
void show1()
{ifstream fin;
fin.open("today1.dat",ios::binary|ios::in);
numbers n1;
 while(fin.read((char*)&n1,sizeof(n1)))
n1.display2();
 fin.seekg(0);
fin.close();
}

void Search1()
    {

     cout<<"\nPlease,Enter your ID.\n";
     int q;
     cin>>q;
     numbers n1;
     ifstream fin("today1.dat",ios::binary|ios::in);
     while(fin.read((char*)&n1,sizeof(n1)))
    { if(q==n1.id())
     {

         n1.display2();
     }
    }
    fin.seekg(0);
    fin.close();

 }
void Delete1()
 {
  cout<<"\nEnter the id whose record is to to be deleted\n";
  int q;
  cin>>q;
  numbers n1;
  ofstream fout("temp1.dat",ios::binary|ios::app);
      ifstream fin("today1.dat",ios::binary|ios::in);
     while(fin.read((char*)&n1,sizeof(n1)))
    { if(q!=n1.id())
     { fout.write((char*)&n1,sizeof(n1));
     }
    }fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today1.dat");
    rename("temp1.dat","today1.dat");
 }
void modify1()
{cout<<"\nEnter the id whose record is to to be modify\n";
  int q;
  cin>>q;
  numbers n1;
  ofstream fout("temp1.dat",ios::binary|ios::app);
      ifstream fin("today1.dat",ios::binary|ios::in);
     while(fin.read((char*)&n1,sizeof(n1)))
    { if(q==n1.id())
      {
          n1.get2();

      }
      fout.write((char*)&n1,sizeof(n1));
    }
    fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today1.dat");
    rename("temp1.dat","today1.dat");
}

class abstClass{
       virtual void get4(void)=0;
       virtual void display4(void)=0;

};


class office:public name_ad,public abstClass
{
  private:
       char c[20];
       char ad1[10];
       char tel[10];
       char mob[10];
       char fax[10];

  public:
       void get4(void);
       void display4(void);
       void s4(void);
       int  id(void);
};

void office::get4(void)
{

   get1();
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

}
void office::display4()
{
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
int office::id()
{

    return idno;
}

void Insert2()
{
ofstream fout;
fout.open("today2.dat",ios::binary|ios::app);
office n2;
n2.get4();
fout.write((char*)&n2,sizeof(n2));
 fout.seekp(0);
fout.close();
}
void show2()
{ifstream fin;
fin.open("today2.dat",ios::binary|ios::in);
office n2;
 while(fin.read((char*)&n2,sizeof(n2)))
n2.display4();
 fin.seekg(0);
fin.close();
}

void Search2()
    {

     cout<<"\nPlease,Enter your ID.\n";
     int q;
     cin>>q;
     office n2;
     ifstream fin("today2.dat",ios::binary|ios::in);
     while(fin.read((char*)&n2,sizeof(n2)))
    { if(q==n2.id())
     {

         n2.display4();
     }
    }
    fin.seekg(0);
    fin.close();

 }


void Delete2()
 {
  cout<<"\nEnter the id whose record is to to be deleted\n";
  int q;
  cin>>q;
  office n2;
  ofstream fout("temp2.dat",ios::binary|ios::app);
      ifstream fin("today2.dat",ios::binary|ios::in);
     while(fin.read((char*)&n2,sizeof(n2)))
    { if(q!=n2.id())
     { fout.write((char*)&n2,sizeof(n2));
     }
    }fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today2.dat");
    rename("temp2.dat","today2.dat");
 }

 void modify2()
{cout<<"\nEnter the id whose record is to to be modify\n";
  int q;
  cin>>q;
  office n2;
  ofstream fout("temp2.dat",ios::binary|ios::app);
      ifstream fin("today.dat",ios::binary|ios::in);
     while(fin.read((char*)&n2,sizeof(n2)))
    { if(q==n2.id())
      {
          n2.get4();

      }
      fout.write((char*)&n2,sizeof(n2));
    }
    fin.seekg(0);
    fout.seekp(0);
    fout.close();
    fin.close();
    remove("today2.dat");
    rename("temp2.dat","today2.dat");
}

int main()
{ system("cls");
    int a,i;
 name_ad n;

  cout<<"\n\n*#*#*#*  THIS IS PERSONAL INFORMATION MANAGEMENT  *#*#*#*#*"<<"\n\n";
  cout<<"\n\n*#*#*#*          MADE BY HARSH AND SAKSHI         *#*#*#*#*"<<"\n\n";
  cout<<"\n\nHow many people's information you want to manage?\n";

  cin>>a;
  int x;
  do
  {
      cout<<"\n*******************************************\n"
      <<"\n*    You can do the following ;           *\n"
      <<"\n*    Enter the appropriate number         *\n";
      cout<<"\n*    1 :To insert Name & address                *\n";
      cout<<"\n*    2 :To Display name & address        *\n";
      cout<<"\n*    3 :TO Search Name & Address          *\n";
      cout<<"\n*    4 :TO Delete Name & Address          *\n";
      cout<<"\n*    5 :TO Update Name & Address          *\n";
      cout<<"\n   ********************************\n";
      cout<<"\n*    6 :To insert Important Numbers             *\n";
      cout<<"\n*    7 :To Display Important numbers     *\n";
      cout<<"\n*    8 :To Search Important Numbers       *\n";
      cout<<"\n*    9 :To Delete Important Numbers       *\n";
      cout<<"\n*    10:To Update Important Numbers       *\n";
      cout<<"\n   ********************************\n";
      cout<<"\n*    11:To insert official recognisation        *\n";
      cout<<"\n*    12:To Display Official recognisation *\n";
      cout<<"\n*    13:To Search Official Recognisation  *\n";
      cout<<"\n*    14:To Delete Official Recognisation  *\n";
      cout<<"\n*    15:To Update Official Recognisation  *\n";
cin>>x;
system("cls");
switch(x)
{   case 1:
    for(i=0;i<a;i++)
    {Insert();
    }

    break;
    case 2:
    show();
    break;
    case 3:
    Search();
    break;
    case 4:
     Delete();
     break;
    case 5:
     modify();
     break;
    case 6:
       for(i=0;i<a;i++)
    {Insert1();
    }
    break;
    case 7:
    show1();
    break;
    case 8:
    Search1();
    break;
    case 9:
     Delete1();
     break;
    case 10:
     modify1();

    case 11:
       for(i=0;i<a;i++)
    {Insert2();
    }
    break;
    case 12:
    show2();
    break;
    case 13:
    Search2();
    break;
    case 14:
     Delete2();
     break;
    case 15:
     modify2();

}
  }while(x!=16);
 getch();

}
