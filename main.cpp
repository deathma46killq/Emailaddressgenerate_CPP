#include<iostream>
#include<string.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void start(){
    char n;
cout<<"-----------EMAIL ADDRESS GENERATOR---------\n"<<endl;
  cout<<"------------------------------------\n"<<endl;
  cout<<"----------generates the email address--------\n"<<endl;
  cout<<"-do you want to start?(y/n)\n\n"<<endl;
  cin>>n;
 
}
int randomnumber(){
    srand(time(0));
   int k= rand()%1000;
   return k;

}
string name(){
    string name;
    cout<<"Enter the name you want in your email:\n";
    cin>>name;

    return name;
}
string domain(){
    int i;
    cout<<"Select the domain you want for Your email address\n\n";
    cout<<"1)gmail.com\n";
    cout<<"2)Hotmail.com\n";
    cout<<"3)yaaho.com\n";
    cout<<"4)edu.in\n";
    cin>>i;
   
   if (i==1)
   {
       return "gmail.com";
   }
   else if (i==2)
   {
       return "Hotmail.com";
       
   }
   else if(i==3){
       return "yaaho.com";
     
   }
   else
   {
       return "edu.in";
       
   }
   
}
int generate(int randomnumber,string name,string domain){
    cout<<"::Your generated email is::\n";
    cout<<":::::::::::::::::::::::::::\n";
    cout<<name<<randomnumber<<"@"<<domain<<endl;
}
int main()
{
  start();
 randomnumber();

  generate(randomnumber(),name(),domain());



    
    return 0;
}

