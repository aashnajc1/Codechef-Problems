#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int following, followers;
	    cin >> following >> followers;
	    if(following > (10*followers)){
	        cout << "yes" << endl;
	    }
	    else{
	        cout << "no" << endl;
	    }
	}
	return 0;
}
