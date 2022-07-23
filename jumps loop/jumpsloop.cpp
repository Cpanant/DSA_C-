#include<iostream>
using namespace std;

int main()
{
int carNo;
cout<<"Drag race \n";
for(int carNo=0;carNo<10;carNo++)
{
    if(carNo==4)
{
    break;
}
cout<<carNo;    
}
cout<<"\n";
cout<<"Lep race \n";
for(int carNo=0;carNo<=10;carNo++)
{
    if(carNo==4)
{
continue;    
}
cout<<carNo;    
}

return 0;
}