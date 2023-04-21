#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int sum = a+b+c;
	    if(sum >= 100 && (a >= 10 && b >= 10 && c>=10)){
	        cout << "pass" << endl;  
	    }
	    else{
	        cout << "fail" << endl;
	    }
	}
	return 0;
}
