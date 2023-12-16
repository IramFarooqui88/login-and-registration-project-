#include<bits/stdc++.h>
using namespace std;
void login();
void registration();
void forgot_password();

int main()
{
    int ch;
    cout<<"Press 1 to login:"<<endl;
    cout<<"Press 2 to registration:"<<endl;
    cout<<"press 3 to recover password:"<<endl;
    cout<<"Select one choice:"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1: login(); break;
        case 2: registration(); break;
        case 3: forgot_password(); break;
        default: system("cls");
                 cout<<"Select correct choice:"<<endl;
                 main();
    }
    return 0;
}

void login()
{
    system("cls");
    int count=0;
    string id,pass,username,password;
    cout<<"Enter your username:"<<endl;
    cin>>id;
    cout<<"Enter your password:"<<endl;
    cin>>pass;

    ifstream i1("test.txt");
   while(i1>>username>>password)
   {
        if(username==id && password==pass)
        count =1;
   }
   i1.close();
   system("cls");
   if (count==1)
   cout<<"Successful Login.... \n\n\n"<<endl;
   else
   cout<<"Login error!\nPlease check your username or password...\n\n\n";
   main();

}


void registration(){
    system("cls");
   string user_name,pass;
   cout<<"Enter your username:"<<endl;
   cin>>user_name;
   cout<<"Enter your password:"<<endl;
   cin>>pass;
   ofstream of("test.txt");
   of<<user_name<<" "<<pass;
   of.close();
   system("cls");
   cout<<"Registration done successfully:\n\n\n";
   main();
}



void forgot_password()
{
    system("cls");
    string username,userid,pass;
    int count=0;
    cout<<"Forget password??\n No worries!!\n\n";
    cout<<"Enter your username\n";
    cin>>username;

    ifstream i2("test.txt");
    while(i2>>userid>>pass)
    {
        if(userid==username)
        count=1;
    }
    i2.close();
    system("cls");
    if(count==1)
    cout<<"Your password is -> \n\n\n"<<pass;
    else
    cout<<"Incorrect username ! \nPlease try again...\n\n\n";
    main();
}