//Q(1.)Convert Decimal to Binary:
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    float ans=0;
    int i=0;
    while (num != 0)
    {
       int bit= num & 1;

       ans=(bit*pow(10,i)) + ans;
       
       num = num >> 1; // right shifting by 1

       i++;
    }
    cout<<"Answer is:"<<ans<< endl;
}   */

//Q(2.)Convert Binary to Decimal:

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout <<"Enter any binary number:";
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0)
    {
       int digit = n % 10;

       if(digit==1)
       {
        ans = ans+pow(2,i);
       }
       n = n/10;
       i++;
    }
    cout<<ans<<endl;
    return 0;
}