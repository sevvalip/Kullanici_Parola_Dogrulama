#include <iostream>

using namespace std;

int main()
{
   string sys_username="sevval";
   string sys_password="123456";
   string username;
   string password;

   cout<<"kullanici adinizi giriniz : ";
   cin>>username;
   cout<<"parolanizi giriniz : ",
   cin>>password;

   if(sys_username==username && sys_password==password)
   {
       cout<<"hos geldiniz :)";
   }
   else if(sys_username==username && sys_password!=password)
   {
       cout<<"parola hatali !";
   }
   else if(sys_username!=username && sys_password==password)
   {
       cout<<"kullanici adi hatali";
   }
   else
   {
       cout<<"kullanici adi ve parola hatali !!";
   }

    return 0;
}
