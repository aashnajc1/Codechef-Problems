#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int cost;
	    if(x>=y){
	       cost = y*1;
	    }
	    else{
	        cost = (y-x)*2 + x;
	    }
	    cout << cost << endl;
	}
	return 0;
