#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <dos.h>


#include<ctime>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
using namespace std;

void intro(void);
void intro2(void);

 static const char alphanum[] ={
"0123456789"
"@#$&"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"};
int stringLength = sizeof(alphanum) - 1;

int c=0;
int cp=0;
//====================================================================================================================================================
//====================================================================================================================================================

class Doc
{
public:
     int room;
     char dname[50];
     char dq[20],dstate[15];
     int de;
     char did[10];
     char dspecial[50];

void get_ddetails()
{   cout<<endl;
    cout<<"ENTER DOCTOR'S ID                        :: ";
    cin>>did;
    cout<<endl;
    cout<< "ENTER DOCTOR'S NAME                      :: ";
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore(256,'\n');
    cin.getline(dname,50);
    cout<<endl;
    cout<<"ENTER DOCTOR'S QUOLIFICATION             :: ";
    cin.getline(dq,20);
    cout<<endl;
    cout<<"ENTER DOCTOR'S SPECIALISATION            :: ";
    cin.getline(dspecial,60);
    cout<<endl;
    cout<<"ENTER DOCTOR'S EXPERIENCE                :: ";
    cin>>de;
    cout<<endl;
    cout<<"ENTER DOCTOR'S STATE                     :: ";
    cin>>dstate;
    cout<<endl;
    cout<<"ENTER THE ROOM NO                        :: ";
    cin>>room;
    cout<<endl;
}
void put_ddetails()
{       cout<<endl;
        cout<<"DOCTOR'S ID                           :: "<<did<<endl;
        cout<< "NAME                                  :: ";
        puts(dname);
        cout<<"DOCTOR'S QUOLIFICATION                :: "<<dq<<endl;
        cout<<"SPECIALISATION                        :: "<< dspecial<<endl;
        cout<<"ENTER DOCTOR'S EXPERIENCE             :: "<<de<<endl;
        cout<<"ENTER DOCTOR'S STATE                  :: "<<dstate<<endl;
        cout<<"ROOM NO"<<room<<endl;
        cout<<endl;

}

int search_d(char a[])
{
        if (strcmp(a,dname)==0)
        {

            c=1;
        }

}

void edit_ddetails()
{        cout<<endl;
        cin.ignore();
        cout<<"ENTER NAME                            :: ";
        cin.getline(dname,50);
        cout<<endl;
        cout<<"ENTER DOCTOR'S NEW QUOLIFICATION      :: ";
        cin.getline(dq,20);
        cout<<endl;
        cout<<"ENTER SPECIALISATION                  :: ";
        cin.getline(dspecial,50);
        cout<<endl;
        cout<<"ENTER DOCTOR'S NEW EXPERIENCE         :: ";
        cin>>de;
        cout<<endl;
        cout<<"ENTER DOCTOR'S STATE                  :: ";
        cin>>dstate;
        cout<<endl;
        cout<<"ENTER ROOM NO                         :: ";
        cin>>room;
        cout<<endl;
}



};
//====================================================================================================================================================
//====================================================================================================================================================

class Pat:public Doc
{

public:
    char pname[50];
    int age;
    char address[100],family[50],rel[10],phone[50],city[10],doa[15],disease[50],coa[50];
    char doc[50],docs[50];
    int rom;
    char pid[10],dat[25];
         // chars we need for generation


//--------------------------------------------------
char genRandom()
{

    return alphanum[rand()%stringLength];
}
//--------------------------------------------------

//--------------------------------------------------
void get_pdata()
{ cout<<endl;
    time_t now = time(0);
    cin.ignore();
    cout<<endl;
    cout<<"PATIENT'S NAME                  :: ";
    cin.getline(pname,50);
    cout<<endl;
    cout<<"AGE                             :: ";
    cin>>age;
    cout<<endl;
    cin.ignore();
    cout<<"ADDRESS                         :: ";
    cin.getline(address,100);
    cout<<endl;
    cout<<"CITY                            :: ";
    cin>>city;
    cout<<endl;

    cout<<"PHONE NO.                       :: ";
    cin>>phone;
    cout<<endl;
    cin.ignore();
    cout<<"FAMILY MEMBER                   :: ";
    cin.getline(family,50);cout<<endl;
    cout<<"RELATION                        :: ";
    cin>>rel;
    cin.ignore();
    cout<<endl;
    cout<<"DATE OF ADMISSION               :: ";
    // convert now to string form
    char* dt = ctime(&now);
    strcpy(doa,dt);
    cout<<doa;
    cout<<endl;
    cout<<"DISEASE                         :: ";
    cin.getline(disease,50);
    cout<<"CONDITIION AT TIME OF ADMISSION :: ";
    cin.getline(coa,50);
    cout<<"UNIQUE ID                       :: ";

    srand(time(0));
    for(int i=0;i<5;i++)
     {
        pid[i]=genRandom();
     }
    pid[5]='\0';

    cout<<pid;
    cout<<endl;
}
//--------------------------------------------------

//--------------------------------------------------
void show_pdata()
{        cout<<endl;
    cout<<"UNIQUE ID                     :: ";
    cout<<pid;
    cout<<endl;
    cout<<"PATIENT'S NAME                :: "<<pname;
    cout<<endl;
    cout<<"AGE                           :: ";
    cout<<age;
    cout<<endl;

    cout<<"ADDRESS                       :: ";
    cout<<address;
    cout<<endl;
    cout<<"CITY                          :: ";
    cout<<city;
    cout<<endl;

    cout<<"PHONE NO.                     :: ";
    cout<<phone;
    cout<<endl;

    cout<<"FAMILY MEMBER                 :: ";
    cout<<family;
    cout<<endl;
    cout<<"RELATION                      :: ";
    cout<<rel;
    cout<<endl;
    cout<<"DATE OF ADMISSION             :: ";
    // convert now to string form
    //char* dt = ctime(&now);
    cout<<doa;
    cout<<endl;
}
//--------------------------------------------------

//--------------------------------------------------
void apoinrecord(char dname[],int room,char dspecial[])
{        cout<<endl;
        time_t now = time(0);
        cout<<endl<<endl;
        cout<<"DATE AND TIME        ::";
        char* dt = ctime(&now);
        strcpy(dat,dt);
        cout<<dat;
        cout<<"DOCTOR               ::";
        strcpy(doc,dname);
        cout<<doc;
        cout<<endl;
        cout<<"ROOM NO              ::";
        rom=room;
        cout<<rom;
        cout<<endl;
        cout<<"SPECIALISATION       ::";
        strcpy(docs,dspecial);
        cout<<docs;
        cout<<endl;
        cout<<"ENTER PATIENT'S NAME ::";
        cin.getline(pname,50);
        cout<<"AGE                  ::";
        cin>>age;
        cout<<endl;
}
//--------------------------------------------------

//--------------------------------------------------
void showapoinrecord()
{          cout<<endl;
        cout<<"DOCTOR               ::";

        cout<<doc;
        cout<<endl;
        cout<<"ROOM NO              ::";

        cout<<rom;
        cout<<endl;
        cout<<"SPECIALISATION       ::";

        cout<<docs;
        cout<<endl;
        cout<<"PATIENT'S NAME       ::";
        cout<<pname;
        cout<<endl;
        cout<<"AGE                  ::";
        cout<<age;
        cout<<endl;
        cout<<"DATE AND TIME        ::";
        cout<<dat;
        cout<<endl;
}
//--------------------------------------------------


};
//====================================================================================================================================================
//====================================================================================================================================================

class Dis:public Pat
{   char pnamed[50];
    int aged;
    char addressd[100],familyd[50],reld[10],phoned[50],cityd[10],cond[50],doad[15],dod[20],coad[50];
    float checkup_fee,room_charge,admission_fee,medicine_fee,total;
public:
    char pidd[10];
    Dis()
    {


    }

void discharge( char pname[],int age,char address[],char family[],char rel[],char phone[],char city[],char doa[], char pid[],char coa[])
{  // current date/time based on current system
    cout<<endl;
    time_t now = time(0);
    cout<<"UNIQUE ID                          :: ";
    strcpy(pidd,pid);
    cout<<pidd;
    cout<<endl;
    cout<<endl;
    cout<<"PATIENT'S NAME                     :: ";
    strcpy(pnamed,pname);
    cout<<pnamed;
    cout<<endl;
    cout<<"AGE                                :: ";
    aged=age;
    cout<<aged;
    cout<<endl;
     cout<<"ADDRESS                           :: ";
    strcpy(addressd,address);
    cout<<addressd;
    cout<<endl;
    cout<<"CITY                               :: ";
    strcpy(cityd,city);
    cout<<cityd;
    cout<<endl;

    cout<<"PHONE NO                           :: ";
    strcpy(phoned,phone);
    cout<<phoned;
    cout<<endl;

    cout<<"FAMILY MEMBER                      :: ";
    strcpy(familyd,family);
    cout<<familyd;
    cout<<endl;
    cout<<"RELATION                           :: ";
    strcpy(reld,rel);
    cout<<reld;
    cout<<endl;
    cout<<"DATE OF ADMISSION                  :: ";
    strcpy(doad,doa);
    cout<<doad;
    cout<<endl;
    cin.ignore();
    cout<<"CONDITION AT TIME OF ADDMISSION    :: ";
    strcpy(coad,coa);
    cout<<coad;
    cout<<endl;
    cout<<"DATE OF DISCHARGE                  :: ";
    // convert now to string form
   char* dt = ctime(&now);
    strcpy(dod,dt);
    cout<<dod;
    cout<<"CONDITION AT THE TIME OF DISCHARGE :: ";
    cin.getline(cond,50);
    get_bill();
    cout<<endl;


}
 void show_discharge()
{
    cout<<endl;
    cout<<"UNIQUE ID                        :: ";
    cout<<pidd;
    cout<<endl;
    cout<<endl;
    cout<<"PATIENT NAME                     :: ";

    cout<<pnamed;
    cout<<endl;
    cout<<"AGE                              :: ";

    cout<<aged;
    cout<<endl;

    cout<<"ADDRESS                          :: ";


    cout<<addressd;
    cout<<endl;
    cout<<"CITY                             :: ";

    cout<<cityd;
    cout<<endl;

    cout<<"PHONE NO                         ::";

    cout<<phoned;
    cout<<endl;

    cout<<"FAMILY MEMBER                    ::";

    cout<<familyd;
    cout<<endl;
    cout<<"RELATION                         ::";

    cout<<reld;
    cout<<endl;
    cout<<"DATE OF ADMISSION                ::";

    cout<<doad;
    cout<<endl;
    cout<<"DATE OF DISCHARGE                ::";
    cout<<dod;
    cout<<endl;
    cout<<"CONDITION AT TIME OF DISCHARGE   ::";
    cout<<cond;
    cout<<endl;
    show_bill();
    cout<<endl;

}

void get_bill()
{       checkup_fee=500;
        room_charge=2000;
        admission_fee=500;
        cout<<"ENTER MEDICINE FEE           ::";
        cin>>medicine_fee;
        total=checkup_fee+room_charge+medicine_fee+admission_fee;
        cout<<"BILL                         :: Rs "<<total;
        cout <<endl;
}

float show_bill()
{
    cout<<"BILL                             :: Rs"<<total;
}

};
//====================================================================================================================================================
//======================================================================================================================================================

int main()
{
system("color 4f");
Doc D,D1;
Pat p;
Dis d;
int pp=0;
fstream f;
ofstream of;
ifstream iff;
char pass[50];
intro();
intro2();
cout<< "\n\t\t\tPRESS ANY KEY TO CONTINUE..."<<endl;
_getch();
system("cls");
again:
intro();

intro2();
char password[50]="1234";
char aa;

cout<<"\n\t\tHELLO SIR PLEASE ENTER THE PASSWORD : ";


for(int ii=0;ii<50;ii++)
{
     aa=_getch();
 if(aa==13)
 {
     pass[ii]='\0';

     break;
 }
 else if(aa==8)
 {
     cout<<"\b \b";

    ii= ii-2;

 }
 else
  {

pass[ii]=aa;
cout<< "*";
  }
}
backmm :
if (strcmp(pass,password)==0)
{




system("cls");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<< "\t    =============== WELCOME TO CPU HOSPITAL =============="<<endl<<endl<<endl;

  cout<<"\t\t\tPRESS 1 TO ENTER DOCTOR'S MENU"<<endl;
  cout<< endl;

  cout<< "\t\t\tPRESS 2 TO ENTER PATIENT'S MENU "<<endl<<endl;
  cout<< "\t\t\tPRESS 3 TO EXIT "<<endl<<endl;
  cout<< "\t    ======================================================"<<endl<<endl;
  cout<< "\t\t\tENTER HERE : ";
  int mm;
  cin>>mm;
  //main switch starts here.....
switch(mm)
{

case 1  :     //case 1 of main switch....
{


system("cls") ;
do
{
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<< "\t    ==================== DOCTOR'S  MENU ===================="<<endl<<endl<<endl;
           cout<<"\t\t PRESS 1 TO ENTER THE DETAILS OF NEW DOCTOR"<<endl<<endl;
           cout<<"\t\t PRESS 2 TO GET DETAILS OF DOCTORS"<<endl<<endl;
           cout<<"\t\t PRESS 3 TO EDIT DETAILS OF DOCTORS "<<endl<<endl;
           cout<<"\t\t PRESS 4 TO DELETE DETAILS OF DOCTORS "<<endl<<endl;
           cout<<"\t\t PRESS 5 TO DELETE DATABASE OF DOCTORS "<<endl<<endl;
           cout<<"\t\t PRESS 0 TO GO BACK "<<endl<<endl;
           cout<< "\t    ======================================================"<<endl<<endl;
           cout<<endl;
           cout<<"ENTER YOUR CHOICE::";
           int o;
          cin>>o;


                //nested switch....
                  switch(o)
             {

case 0 :

               goto backmm;
               break;

case 1 :
                       of.open("Doc.dat",ios::binary|ios::app);
                       system("cls");

                       while(of)
                         { cout<<"================================================================================"<<endl;
                           cout<< "\t******************** NEW DOCTOR DETAILS MENU ********************"<<endl;       // add doctor
                           cout<<"================================================================================"<<endl;
                           D.get_ddetails();
                           of.write((char*)&D,sizeof(D));
                           system("cls");
                           cout<<"CONGO! DATA SAVED"<<endl<<endl;
                           cout<<"WANNA ENTER MORE(Y/N)?"<<endl;
                           char ans;
                           cin>>ans;
                           system("cls");
                           if(ans!='y')
                            {
                                  break;
                          }
                            system("cls");
                       }
                of.close();
                break;
                 //case 1 (doctors ) over...

case 2 :  iff.open("Doc.dat",ios::binary);
                 system("cls");
                 cout<<"================================================================================"<<endl;
                       cout<< "\t******************** DOCTOR DETAILS MENU ********************"<<endl;       // add doctor
                     cout<<"================================================================================"<<endl;
                while(iff.read((char*)&D,sizeof(D)))
                {

                D.put_ddetails();

                  }
                  iff.close();
                break;


  char pid[10];
              //case 2 (doctors ) over...
case 3 :{
                     cout<<"================================================================================"<<endl;
                       cout<< "\t******************** EDIT DOCTOR DETAILS MENU ********************"<<endl;       // add doctor
                  cout<<"================================================================================"<<endl;
f.open("Doc.dat",ios::in|ios::out|ios::binary);
system("cls");
cout<<"ENTER ID OF DOCTOR TO BE SEARCHED::";                //edit doctors record....
char edit[50];
cin.ignore(256,'\n');
cin.getline(edit,50);
cout<<endl;
f.seekg(0);
int pos;
while(f)
{
pos=f.tellg();

    c=0;

f.read((char*)&D,sizeof(D));
    if(strcmp(D.did,edit)==0)
    { D.put_ddetails();
    cout<<"WANNA EDIT THE INFORMATION"<<endl;
    char aa;
    cin>>aa;

    if(aa=='y')
    {
        D.edit_ddetails();
        f.seekg(pos);
    f.write((char*)&D,sizeof(D));


        cout<<"THE DETAILS HAVE BEEN SAVED"<<endl;

    }
     break;
    }

}
f.close();
                          break;
}

case 4 : {        system("cls");
             cout<<"================================================================================"<<endl;
                       cout<< "\t******************** DELETE DOCTOR DETAILS MENU ********************"<<endl;       // add doctor
                       cout<<"================================================================================"<<endl;
           iff.open("Doc.dat",ios::in|ios::binary);
           of.open("Temp.dat",ios::out|ios::binary);
           iff.seekg(0);
           cout<<"ENTER DOCTOR'S ID::"<<endl;
           char idd[10];
           cin>>idd;
           while(iff.read((char*)&D,sizeof(D)))
           {

               if(strcmp(D.did,idd)!=0)
               {
                  of.write((char*)&D,sizeof(D));
               }
               else
            {
             cout<<"THE RECORD IS FOUND"<<endl;
             D.put_ddetails();
             cout<<"DO YOU WANT TO DELETE THIS RECORD"<<endl;
             char dchoose;
             cin>>dchoose;
             if(dchoose!='y')
             {
                 of.write((char*)&D,sizeof(D));
             }
            }
        }
        iff.close();
        of.close();
        remove("Doc.dat");
        rename("Temp.dat","Doc.dat");
         break; }

case 5: {  system("cls");
            cout<<"================================================================================"<<endl;
                       cout<< "\t******************** DELETE DOCTOR DATABASE MENU ********************"<<endl;       // add doctor
                     cout<<"================================================================================"<<endl;
           remove("Doc.dat");

           break;
        }




             }


                     cout<<"PRESS 1 TO GO TO DOCTOR'S MENU OR 0 TO GO TO MAIN MENU"<<endl;
                         int a;
                            cin>>a;
                            if(a==0)
                             goto backmm;
                            if(a!=1)
                            {
                                break;
                            }

                       system("cls");
                          }while(1);
                       break;
}






  // doctors menu over...

  //patient's menu case 2 of main switch starts here...


case 2 : backpm:
         system("cls");
         do {

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
            cout<< "\t    ====================  PATIENTS MENU =================="<<endl<<endl;
            cout<< "\t\t\tPRESS 1 TO ISSUE TOKEN FOR PATIENTS "<<endl<<endl;
            cout<< "\t\t\tPRESS 2 TO ADMIT/DISCHARGE PATIENTS "<<endl<<endl;
            cout<< "\t\t\tPRESS 3 TO SEARCH FOR PATIENTS DETAILS "<<endl<<endl;
            cout<<"\t\t\tPRESS 4 TO DELETE DETAILS OF PATIENTS "<<endl<<endl;
            cout<<"\t\t\tPRESS 5 TO DELETE DATABASE OF PATIENTS "<<endl<<endl;
            cout<<"\t\t\tPRESS 0 TO GO BACK "<<endl<<endl;
            cout<< "\t    ======================================================"<<endl<<endl;
            cout<<"\t\t\tENTER YOUR CHOICE::";
            int patie;
            cin>>patie;


            switch(patie)
            {
                case 0 : goto backmm;
                           break;


                case 1 : {
                          system("cls");
                          cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                          cout<< "\t    ==================== APPOINTMENT MENU =================="<<endl<<endl;
                          cout<<"\t\t\tPRESS 1 FOR NEW APPOINTMENTS"<<endl<<endl;
                          cout<<"\t\t\tPRESS 2 FOR APPOINTMENT DETAILS"<<endl<<endl;
                          cout<<"\t\t\tPRESS 0 TO RETURN BACK"<<endl;
                          cout<< "\t    ======================================================"<<endl<<endl;
                          int ap;
                          cin>>ap;
                          if(ap==0)
                            goto backpm;
                          if(ap==1)
                             {      system("cls");
                                    char spe[50];
                                    c=0;

                                    cout<<"================================================================================"<<endl;
                       cout<< "\t******************** ISSUE TOKENS MENU ********************"<<endl;       // add doctor
                       cout<<"================================================================================"<<endl;

                                    cout << endl;
                                    cin.ignore();
                                    cout<< "ENTER THE SPECIALIZATION"<<endl;
                                    cin.getline(spe,50);
                                    f.open("Doc.dat",ios::in|ios::out|ios::binary);

                                    while(f.read((char*)&D,sizeof(D)))
                                      {
                                         if(strcmpi(D.dspecial,spe)==0)
                                            {D.put_ddetails();
                                            c++;
                                            }


                                       }
                                        f.close();
                          if(c==0)
                          {
                              cout<< "NO DOCTOR AVAILABLE RIGHT NOW"<<endl;

                          }
                         else
                         { char diid[50];
                        f.open("Doc.dat",ios::in|ios::out|ios::binary);
                        of.open("appoi.dat",ios::out|ios::binary);
                             cout<<"ENTER DOCTOR'S ID::";

                             cin.getline(diid,50);

                             while(f.read((char*)&D,sizeof(D)))
                             {


                                 if(strcmp(D.did,diid)==0)
                                 {
                                     p.apoinrecord(D.dname,D.room,D.dspecial);
                                     of.write((char*)&p,sizeof(p));
                                    cout<<"APPOINTMENT IS SET "<<endl;

                                 }
                             }


                          }
                          f.close();
                          of.close();
                        }
                else
                    { system("cls");
                       cout<<"ENTER DOCTOR'S SPECIALITY"<<endl;
                       char appsearch[50];
                        cin.ignore();
                       cin.getline(appsearch,50);

                         iff.open("appoi.dat",ios::in|ios::binary);
                         while(iff.read((char*)&p,sizeof(p)))
                         {
                           if(strcmpi(p.docs,appsearch)==0)
                             p.showapoinrecord();

                         }
                         iff.close();
                    }

                          break;
                }

                            // case 1 of patients over...

       case 2 :   system("cls");
       cout<<endl;
       cout<<endl;
         cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
                 cout<< "\t  ============= PATIENTS ADMIT/DISCHARGE MENU =============="<<endl<<endl;
                  cout<<"\t\t\tPRESS 1 TO ADD NEW PATIENT"<<endl<<endl;
                  cout<<"\t\t\tPRESS 2 TO DISCHARGE A PATIENT"<<endl<<endl;
                  cout<<"\t\t\tPRESS 0 TO RETURN BACK"<<endl<<endl;
                   cout<< "\t    ======================================================"<<endl<<endl;
                  int option;
                  cin>>option;
                  if(option==0)
                    goto backpm;

               if(option==1)
               {

               system("cls");
                 of.open("Pat.dat",ios::binary|ios::app);
                while(of)
                 { cout<<"================================================================================"<<endl;
                       cout<< "\t******************** NEW PATIENTS DETAILS MENU ********************"<<endl;       // add doctor
                     cout<<"================================================================================"<<endl;
                    p.get_pdata();
                    of.write((char*)&p,sizeof(p));
                    cout<<"WANNA ENTER MORE(Y/N)?"<<endl;
                    char ans;
                    cin>>ans;
                    if(ans!='y')
                    {
                        break;
                    }
                    system("cls");
                 }
                 cout<<"DETAILS SAVED"<<endl<<endl;
                 of.close();
               }
               if(option==2)
               {  system("cls");

                cout<<"================================================================================"<<endl;
                       cout<< "\t********************  PATIENTS DISCHARGE MENU ********************"<<endl;       // add doctor
                      cout<<"================================================================================"<<endl;
                   cout<<"ENTER THE PATIENT'S ID YOU WANT TO DISCHARGE::";
                   char piddd[10];
                   cin>>piddd;
                   iff.open("Pat.dat",ios::binary);
                   iff.seekg(0);
                   of.open("Dis.dat",ios::binary);
                   while(iff.read((char*)&p,sizeof(p)))
                   {

                       if(strcmp(piddd,p.pid)==0)
                       {
                           d.discharge(p.pname,p.age,p.address,p.family,p.rel,p.phone,p.city,p.doa,p.pid,p.coa);
                           of.write((char*)&d,sizeof(d));

                       }
                   }
                   iff.close();
                   of.close();
                   iff.open("Pat.dat",ios::binary);
                   iff.seekg(0);
                   of.open("Temp.dat",ios::binary);

                   while(iff)
                   {
                       iff.read((char*)&p,sizeof(p));
                       if(strcmp(piddd,p.pid)!=0)
                       {
                           of.write((char*)&p,sizeof(p));

                       }


                   }
                   of.close();
                   iff.close();
                   remove("Pat.dat");
                   rename("Temp.dat","Pat.dat");

               }
                 break;
                 // case 2 of patients over...



case 3:
             system("cls");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
             cout<< "\t   ============= PATIENT ADMIT/DISCHARGE DETAILS =============="<<endl<<endl;
             cout<<"\t\t\tENTER 1 FOR CURRENT ADMISSION DETAILS"<<endl<<endl;
             cout<<"\t\t\tENTER 2 FOR DISCHARGED PATIENT DETAILS"<<endl<<endl;
             cout<<"\t\t\tENTER 3 FOR ALL PATIENTS' DETAILS"<<endl<<endl;
             cout<<"\t\t\tENTER 0 TO RETURN BACK"<<endl<<endl;
             cout<< "\t    =========================================================="<<endl<<endl;
             int option3;
             cin>>option3;
             if(option3==0)
                goto backpm;
             if(option3==1)
             {
               system("cls");

                cout<<"================================================================================"<<endl;
                       cout<< "\t******************** CURRENT ADMISSION DETAILS ********************"<<endl;
                      cout<<"================================================================================"<<endl;
                iff.open("Pat.dat",ios::binary);
                 iff.seekg(0);
                 cout<<"enter the pid"<<endl;
                 char id[10];
                 cin>>id;
                 while(iff.read((char*)&p,sizeof(p)))
                 {
                  if(strcmpi(p.pid,id)==0)
                   {

                    p.show_pdata();
                     cout<<endl<<endl;
                   }
                 }
                 iff.close();
             }
             if(option3==2)
             {
                  system("cls");

               cout<<"================================================================================"<<endl;
                       cout<< "\t******************** DISCHARGED PATIENT DETAILS ********************"<<endl;       // add doctor
                       cout<<"================================================================================"<<endl;
                iff.open("Dis.dat",ios::binary);
                 cout<<"enter the pid"<<endl;
                 char id[10];
                 cin>>id;
                 while(iff.read((char*)&d,sizeof(d)))
                 {
                  if(strcmpi(d.pidd,id)==0)
                    {

                    d.show_discharge();
                     cout<<endl<<endl;
                   }
                 }
                 iff.close();
             }
             else if(option3==3)
             { system("cls");

              cout<<"================================================================================"<<endl;
                       cout<< "\t******************** ALL PATIENTS' DETAILS ********************"<<endl;       // add doctor
                       cout<<"================================================================================"<<endl;
                 cout<<"PLEASE ENTER THE PASSWORD :: ";
                for(int ii=0;ii<50;ii++)
{
     aa=_getch();
 if(aa==13)
 {
     pass[ii]='\0';

     break;
 }
 else if(aa==8)
 {
     cout<<"\b \b";

    ii= ii-2;

 }
 else
  {

pass[ii]=aa;
cout<< "*";
  }
}

                 if(strcmp(pass,password)==0)
                 {
                     iff.open("Pat.dat",ios::binary);
                     iff.seekg(0);
                     cout<<"\n\nCURRENTLY ADMITED PATIENTS"<<endl<<endl;
                     while(iff.read((char*)&p,sizeof(p)))
                     {
                         p.show_pdata();
                         cout<<endl;
                     }
                     iff.close();
                     cout<<"\n\nDISCHARGED PATIENTS"<<endl<<endl;
                     iff.open("Dis.dat",ios::binary);
                     iff.seekg(0);
                     while(iff.read((char*)&d,sizeof(d)))
                    { d.show_discharge();
                    cout<<endl<<endl;

                     }
                     iff.close();

                 }
             }

                 break;

case 4 :{ system("cls");
              int counter=0;
            cout<<"================================================================================"<<endl;
                       cout<< "\t******************** DELETE PATIENTS DETAILS MENU ********************"<<endl;       // add doctor
            cout<<"================================================================================"<<endl;
           iff.open("Pat.dat",ios::binary);
        of.open("Tem.dat",ios::binary);
          iff.seekg(0);
          cout<<"ENTER THE PATIENTS ID::"<<endl;
          char pidd[6];
          cin>>pidd;
          while(iff.read((char*)&p,sizeof(p)))
          {

               if(strcmp(p.pid,pidd)!=0)
               {
                   of.write((char*)&p,sizeof(p));

               }
               else {
                 cout<<"THE RECORD IS FOUND"<<endl;
                 cout<<"ARE YOU SURE YOU WANT TO DELETE THIS (Y/N)"<<endl;
                 char pchoose;
                 cin>>pchoose;
                 if(pchoose!='y')
                 {
                     of.write((char*)&p,sizeof(p));
                     counter=1;
                 }

               }

          }
          if(counter==0)
          { system("cls");
              cout<<"THE RECORD WAS DELETED FORM THE DATABASE..."<<endl;

          }
          else
            cout<<"THE RECORD WAS NOT DELETED...."<<endl;

          iff.close();
          of.close();
          remove("Pat.dat");
          rename("tem.dat","Pat.dat");
          break;}

case 5 :{ system("cls");
         cout<<"================================================================================"<<endl;
         cout<< "\t******************** DELETE PATIENTS DATABASE MENU ********************"<<endl;       // add doctor
         cout<<"================================================================================"<<endl;
         remove("Pat.dat");
         cout<<endl<<endl;
         cout<<"DATABASE HAS BEEN DELETED...."<<endl;
         break;
         }


            }
           cout<<endl;
            cout<<"ENTER 1 TO GO TO PATIENTS MENU AND O TO GO TO MAIN MENU"<<endl;
            int paa;
            cin>>paa;
            if(paa==0)
                goto backmm;
            if(paa!=1)
            {
                break;
            }

         }while (1);
         break;

case 3 : cout<<"EXITING....";
         exit(0);
         break;

  }

}




else
 {
system("cls");
    cout<<"\n\nWRONG PASSWORD ENTERED! ACCESS DENIED"<<endl<<endl;
    cout<<"PRESS 1 TO ENTER AGAIN OR PRESS 2 TO EXIT : ";
    int retry;
    cin>>retry;
    cout<<endl;
    if(retry==1)
    {  system("cls");
        goto again;
    }
    else
        exit(0);
}


    _getch();

    return 0;
}









void intro(void)
{
cout<< " /$$$$$$  /$$$$$$$   /$$   /$$"<<endl;delay(50);
cout<<" /$$__ $$ | $$__ $$ | $$  | $$"<<endl;delay(50);
cout<<"| $$  \__/ | $$  \ $$ | $$  | $$"<<endl;delay(50);
cout<<"| $$      | $$$$$$$/| $$  | $$ " <<endl;delay(50);
cout<<"| $$      | $$____/ | $$  | $$" <<endl;delay(50);
cout<<"| $$    $$| $$      | $$  | $$"<<endl;delay(50);
cout<<"|  $$$$$$/| $$      |  $$$$$$/"<<endl;delay(50);
cout<<" \______/  |__/       \______/"<<endl;delay(50);
delay(50);
}
void intro2(void)
{cout<<endl;
cout<<" /$$                                     /$$   /$$               /$$"<<endl;delay(50);
cout<<"| $$                                    |__/  | $$              | $$"<<endl;delay(50);
cout<<"| $$$$$$$   /$$$$$$   /$$$$$$$  /$$$$$$  /$$ /$$$$$$    /$$$$$$ | $$"<<endl;delay(50);
cout<<"| $$__  $$ /$$__  $$ /$$_____/ /$$__  $$| $$|_  $$_/   |____  $$| $$"<<endl;delay(50);
cout<<"| $$  \  $$| $$  \  $$ | $$$$$$ | $$  \  $$| $$  | $$      /$$$$$$$| $$"<<endl;delay(50);
cout<<"| $$  | $$| $$  | $$ \____  $$ | $$  | $$| $$  | $$ /$$ /$$__  $$| $$"<<endl;delay(50);
cout<<"| $$  | $$|  $$$$$$/ /$$$$$$$/| $$$$$$$/| $$  |  $$$$/ | $$$$$$$| $$"<<endl;delay(50);
cout<<"|__/  |__/ \______/ |_______/  | $$____/ |__/   \\___/    \_______/|__/"<<endl;delay(50);
cout<<"                              | $$                                  "<<endl;delay(50);
cout<<"                              | $$                                  "<<endl;delay(50);
cout<<"                              |__/                                  "<<endl;delay(50);
}


