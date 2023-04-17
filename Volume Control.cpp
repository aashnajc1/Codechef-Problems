#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int diff = abs(x-y);
	    cout << diff << endl;
	}
	return 0;
}
