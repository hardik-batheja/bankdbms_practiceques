#include <iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;

struct userdetails{
    int accountnumber;
    char name[50];
    char password[50];
    float balance;
    int accounttype;
    userdetails *next;
}*head=NULL,*last=NULL;;

void hold(){
    system("Color 09");
    cout<<"\t\t\t\tPress any key to continue...";
    getch();
    cout<<endl;
    system("cls");
}

class User{
    private:
    void displayuser(){
        system("cls");
        system("Color 0A");
        cout<<"\n\n\t\t\t\tAccount number: "<<last->accountnumber<<endl;
        cout<<"\t\t\t\tAccount holder: "<<last->name<<endl;
        if (last->accounttype==1)
        cout<<"\t\t\t\tAccount type: Current Account"<<endl;
        else
        cout<<"\t\t\t\tAccount type: Savings Account"<<endl;
        cout<<"\t\t\t\tAccount balance available: "<<last->balance<<"\n\n";
        cout<<"\t\t\t\tAccount created successfully. Please note down these details.\n\n";
        hold();
    }
    public:
    int caccount_number=0;
    User(){
        // struct userdetails *temp=(struct userdetails *)malloc(sizeof(struct userdetails));
        userdetails *temp=new userdetails;
        system("cls");
        system("Color F1");
        temp->next=NULL;
        cout<<"\n\n\t\t\t\tEnter 1 to open current account.";
        cout<<"\n\t\t\t\tEnter 2 to open savings(default) account.";
        int temptype;
        temptype=getch();
        if(temptype=='1')
        temp->accounttype=1;
        else
        temp->accounttype=2;
        cout<<"\n\t\t\t\tEnter your name: ";
        // cin>>ws;
        cin.getline(temp->name,50,'\n');
        // scanf("%[^\t\n]",temp->name);
        cout<<"\t\t\t\tEnter a secret PIN: ";
        cin>>temp->password;
        cout<<"\t\t\t\tEnter amount to deposit: ";
        cin>>temp->balance;
        cout<<endl;
        if(last){
            temp->accountnumber=last->accountnumber+1;
            last->next=temp;
            last=temp;
        }
        else{
            temp->accountnumber=1;
            head=temp;
            last=temp;
        }
        caccount_number=last->accountnumber;
        displayuser();
    }
};

class Transaction{
    userdetails *headt=head;
    public:
    Transaction(int n){
        while(n!=headt->accountnumber)
        headt=headt->next;
        cout<<"\n\n\t\t\t\t"<<headt->name<<" Logged In\n\n";
    }
    int showbalance(){
        cout<<"\n\n\t\t\t\tAccount Number:\t\t\t"<<headt->accountnumber<<endl;
        cout<<"\t\t\t\tAcount holder's Name:\t\t"<<headt->name<<endl;
        cout<<"\t\t\t\tAccount Balance Available:\t"<<headt->balance<<" Rs."<<endl;
        hold();
        return 0;
    }
    void deposit(){
        system("cls");
        system("Color 5B");
        int amt;
        cout <<"\n\n\t\t\t\tEnter amount to be depositted: ";
        cin>>amt;
        headt->balance+=amt;
        showbalance();
    }
    void withdrawl(){
        system("cls");
        system("Color 5B");
        int amt;
        cout <<"\n\n\t\t\t\tEnter amount to be withdrawn: ";
        cin>>amt;
        if(headt->accounttype==2 && amt>40000)
            cout<<"\n\t\t\t\tAmount requested is beyond savings account withdraw limit.";
        else{
            if(amt<=headt->balance){
                headt->balance-=amt;
                cout<<"\n\t\t\t\tAmount Withdrawn successfully.";
            }
            else
            cout<<"\n\t\t\t\tLow Balance...";
        }
        showbalance();
    }
    void deactivate(){
        system("cls");
        system("Color 4E");
        userdetails *headtemp;
        headtemp=head;
        if(headtemp->next){
            while(headtemp->next!=headt)
                headtemp=headtemp->next;
                if(headt==last)
                    last=headtemp;
            headtemp->next=headt->next;
        }
        else{
            head=NULL;
            last=NULL;
        }
        free(headt);
        cout<<"\n\n\t\t\t\tAccount Deactivated\n";
    }
};

class admin{
    userdetails *headt;
    public:
    void displayacc(userdetails *headt){
        system("Color 5E");
        cout<<"\n\t\t\t\t*********\n";
            cout<<"\t\t\t\tAccount No.     : "<<headt->accountnumber<<endl;
            cout<<"\t\t\t\tAccount Holder. : "<<headt->name<<endl;
            cout<<"\t\t\t\tAccount Balance : "<<headt->balance<<endl;
            if (headt->accounttype==1)
            cout<<"\t\t\t\tAccount type    : Current Account\n\n";
            else
            cout<<"\t\t\t\tAccount type    : Savings Account\n\n";
    }
    void displayallacc(){
        headt=head;
        cout<<"\n\n";
        while(headt){
            displayacc(headt);
            headt=headt->next;
        }
        hold();
    }
    void displayaccountype(int typen){
        headt=head;
        while(headt){
            if(headt->accounttype==typen)
            displayacc(headt);
            headt=headt->next;
        }
        hold();
    }
    void searchaccount(){
        headt=head;
        int searchaccno,foundflag=0;
        cout<<"\n\t\t\t\tEnter Account number to search: ";
        cin>>searchaccno;
        while(headt){
            if(headt->accountnumber==searchaccno){
                foundflag=1;
                displayacc(headt);
            }
            headt=headt->next;
        }
        if(foundflag==0)
        cout<<"\n\t\t\t\tNo Account matches the input.\n\n";
        hold();
    }
};

class Bank{
    public:
    int verify(int tacc,char tpass[50]){
        system("cls");

        userdetails *headt=head;
        int i=0;
        while(headt){
            if(tacc==headt->accountnumber){
                if(strcmp(tpass,headt->password)==0){
                    return 1;
                }
                else{
                    for(;i<3;i++){
                        system("Color 4E");
                        cout<<"\n\n\t\t\t\tIncorrect PIN\n\t\t\t\tPlease try again("<<3-i<<" attempts remaining\n";
                        cout<<"\t\t\t\tEnter secret PIN: ";
                        cin>>tpass;
                        continue;
                    }
                    if(headt->next)
                    headt=headt->next;
                    else{
                        return 0;
                    }
                }
            }
            else{
                if(headt->next)
                headt=headt->next;
                else{
                    system("Color 4E");
                    cout<<"\n\n\t\t\t\tData Unavailable\n";
                    hold();
                    return 0;
                }
            }
            
        }
        system("Color 4E");
        cout<<"\n\n\t\t\t\tData Unavailable";
        hold();
        return 0;
    }
    int loginhome(int accno){
        Transaction cust(accno);
        int x=1;
        while(x){
            system("Color 5E");
            char opt;
            cout<<"\n\n\t\t\t\t1. Show Balance\n";
            cout<<"\t\t\t\t2. Deposit\n";
            cout<<"\t\t\t\t3. Withdraw\n";
            cout<<"\t\t\t\t4. Deactivate\n";
            cout<<"\t\t\t\tpress any key to Log Out!...\n";
            cout<<"\t\t\t\tEnter your choice:   ";
            opt=getch();
            switch(opt){
                case '1':{
                    system("cls");
                    cust.showbalance();
                    break;
                }
                case '2':{
                    cust.deposit();
                    break;
                }
                case '3':{
                    cust.withdrawl();
                    break;
                }
                case '4':{
                    cust.deactivate();
                    // don't break
                }
                default:
                x=0;
                cout<<"\n\n\t\t\t\t***Logged out***\n\n";
                hold();
                break;
            }
            system("cls");
        }
        return 0;
    }
    int loginfn(){
        system("cls");
        system("Color F1");
        int tacc;
        char tpass[50];
        cout<<"\n\n\t\t\t\tEnter your Account number: ";
        cin>>tacc;
        cout<<"\t\t\t\tEnter PIN: ";
        cin>>tpass;
        if(verify(tacc,tpass)){
            loginhome(tacc);
        }
        return 0;
    }
    int verifyadmin(){
        string adminid,adminpass;
        system("Color 0A");
        cout<<"\n\t\t\t\tEnter username:";
        cin>>adminid;
        cout<<"\n\t\t\t\tEnter Password:";
        cin>>adminpass;
        if(adminid=="123" && adminpass=="123"){
            cout<<"\n\t\t\t\tLogged In\n\n";
            return 1;
        }
        else{
            system("Color 4E");
            cout<<"\n\t\t\t\tWrong Password\n";
            hold();
            return 0;
        }
    }
    int accessadmin(){
        admin a;
        int x;
        hold();
        while(x){
            system("cls");
            system("Color 5B");
            char opt;
            cout<<"\n\n\t\t\t\tWelcome Admin!\n\n";
            cout<<"\t\t\t\t1. Display all accounts\n";
            cout<<"\t\t\t\t2. Display all Current accounts\n";
            cout<<"\t\t\t\t3. Display all Savings accounts\n";
            cout<<"\t\t\t\t4. Search account\n";
            cout<<"\t\t\t\tpress any key to Exit...\n";
            cout<<"\t\t\t\tEnter your choice: ";
            opt=getch();
            system("cls");
            system("Color 5E");
            cout<<endl;
            switch(opt){
                case '1':{
                    a.displayallacc();
                }
                break;
                case '2':{
                    a.displayaccountype(1);
                }
                break;
                case '3':{
                    a.displayaccountype(2);
                }
                break;
                case '4':{
                    a.searchaccount();
                }
                break;
                default:
                x=0;
                break;
            }
            system("cls");
        }
    }
    Bank(){
        int x=1;
        while(x){
            system("Color 03");
            char opt;
            cout<<"\n\n\t\t\t\tWelcome!\n\n";
            cout<<"\t\t\t\t1. Register User\n";
            cout<<"\t\t\t\t2. Login\n";
            cout<<"\t\t\t\t3. Admin\n";
            cout<<"\t\t\t\tpress any key to Exit...";
            opt=getch();
            cout<<endl;
            switch(opt){
                case '1':{
                    User newu;
                    if(newu.caccount_number)
                    loginhome(newu.caccount_number);
                    break;
                }
                case '2':{
                    loginfn();
                    break;
                }
                case '3':{
                    if(verifyadmin())
                    accessadmin();
                    break;
                }
                default:
                x=0;
                break;
            }
            system("cls");
        }
    }
};

class bankdatabase{
    public:
    void writedb(){
        ofstream harry("harrydb.txt");
        userdetails *headt=head;
        while(headt->next){
            harry<<headt->accountnumber<<","<<headt->name<<","<<headt->password;
            harry<<","<<headt->balance<<","<<headt->accounttype<<endl;
            headt=headt->next;
        }
        harry<<headt->accountnumber<<","<<headt->name<<","<<headt->password<<","<<headt->balance<<","<<headt->accounttype;
        harry.close();
    }
    void readdb(){
        ifstream harryin;
        string st;
        string storage;
        harryin.open("harrydb.txt");
        while(harryin.eof()==0){
            getline(harryin,st);
            if(st>" "){
                // userdetails *temp=(struct userdetails *)malloc(sizeof(struct userdetails));
                userdetails *temp=new userdetails;
                temp->next=NULL;
                stringstream X(st);
                getline(X ,storage , ',');
                temp->accountnumber=stoi(storage);
                getline(X ,storage , ',');
                strcpy(temp->name,storage.c_str());
                getline(X ,storage , ',');
                strcpy(temp->password,storage.c_str());
                getline(X ,storage , ',');
                temp->balance=stoi(storage);
                getline(X ,storage , ',');
                temp->accounttype=stoi(storage);
                if(head){
                    last->next=temp;
                    last=temp;
                }
                else{
                    head=temp;
                    last=temp;
                }
            }
        }
        harryin.close();
    }
};

int main(){
    bankdatabase a;
    a.readdb();
    system("cls");
    system("Color 03");
    Bank x;
    // User mannualc;
    // admin ad;
    // ad.displayallacc();
    // hold();
    a.writedb();
    cout<<"\n\t\t\t\t\tArigato Gozaimas!!!\n\t\t\t\t\tExited!\n";
    return 0;

}

//   Tools ->  app.diagram.com