#include <iostream>
using namespace std;

int main() {
    int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,y;
	       cin>>x>>y;
	       int a=x*100;
	       int b=y*10;
	       if(a>=b)
	       {
	           cout<<"cloth"<<endl;
	       }
	       else
	       {
	           cout<<"disposable"<<endl;
	       }
	   }
	return 0;
}
