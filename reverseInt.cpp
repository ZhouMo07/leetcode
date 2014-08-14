#include<stdio.h>
#include<iostream>


using namespace std;

int reverse(int x) 
{
     if ( x==0 ) return 0;  
    bool neg = x<0;  
    x=neg?-x:x;  
  
    int ans=0;  
    while(x)  
    {  
        ans=ans*10+x%10;  
        x=x/10;  
    }  
    return neg?-ans:ans;  
}

int main()
{
    
    cout<<reverse(-0);
     system("pause");
}
