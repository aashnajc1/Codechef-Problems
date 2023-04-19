#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int buying_price = x-y;
	    int profit = x + x*0.1;
	    int new_profit = profit - buying_price;
	    cout << new_profit << endl;
	}
	return 0;
}
