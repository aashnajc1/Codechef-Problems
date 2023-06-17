#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,h;
	cin >> x >> y >> h;
	int extra_hours = h - 1;
	int extra_cost = extra_hours * y;
	int total_cost = extra_cost + x;
	cout << total_cost;
	return 0;
}
