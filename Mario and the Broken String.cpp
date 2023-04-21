#include <iostream>
using namespace std;
#include <cstring>

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    string s1,s2;
	    int n = s.length();
	    for(int i=0;i<n/2;i++){
	        s1+=s[i];
	    }
	    for(int j=(n/2);j<n;j++){
	        s2+=s[j];
	    }
	    /*string r1 = s1+s2;
	    string r2 = s2+s1;*/
	    if(s1 == s2){
	        cout << "yes" << endl;
	    }
	    else{
	        cout << "no" << endl;
	    }
	    
	}
	return 0;
}
