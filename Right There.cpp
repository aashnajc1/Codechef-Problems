#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    if(n<=x){
	        cout << "yes" << endl;
	    }
	    else{
	        cout << "no" << endl;
	    }
	}
	return 0;
}
