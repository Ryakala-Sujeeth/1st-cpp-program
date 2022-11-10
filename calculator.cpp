#include <iostream>

using namespace std;
 int f(int n)
 {  int k=1;
     for(int i=1;i<=n;i++)
     {
        k=k*i;

     }
     return k;
 }
 double p(int n,int k)
 {
     double j=1;
     for(int i=1;i<=k;i++)
     {
         j=j*n;

     }
     return j;
 }
   double sin(double num1)
         {
             int sign=1;double s;
              for(int i=1;i<31;i+=2)
    {
        s+=sign*(p(num1,i))/(f(i));
      sign=sign*-1;}
      return s;
         }
         double cos(double num1)
         {

             int sign=1;double c;
             for(int i=0;i<31;i+=2)
     {
         c+=sign*(p(num1,i))/(f(i));
     sign=sign*-1;
     }return c;
         }



 int main()
{
    double num1,num2;char op;double result=1;int z;
    cout<<"enter 1 for arthematic operation"<<endl;
    cout<<"enter 2 for trignometric operation"<<endl;
    cin>>z;
    if(z==1)
       { cout<<"enter num 1,operator and num2"<<endl;
       cin>>num1;
       cin>>op;
       cin>>num2;

    switch(op)
    {
        case '+':result=num1+num2;break;
        case '-':result=num1-num2;break;
        case '*':result=num1*num2;break;
        case '/':result=num1/num2;break;
        case '^':
            {
                for(int i=0;i<num2;i++)

            result=result*num1;
        }

    break;}
    cout<<result;}



    else if(z==2)
    { string trig;double s=0,c=0;int sign=1,sig=1;
   cout<<"enter function and number in degrees"<<endl;
    cin>>trig;cin>>num1;
      num1=(num1*3.141592653589793238)/180;

     if(trig=="sin")
     {
         result=sin(num1);
     }
     else if(trig=="cos")
     {
         result=cos(num1);
     }
     else if(trig=="tan")
     {
         result=sin(num1)/cos(num1);
     }
     else if(trig=="cosec")
     {
         result=1/s;
     }
        else if(trig=="sec")
        {
            result=1/c;
        }
        else if(trig=="cot")
        {
            result=c/s;
        }
         else
         {
             cout<<"invalid";
         }
         cout<< result;
         }
         else
         {
             cout<<"invalid";
         }}









