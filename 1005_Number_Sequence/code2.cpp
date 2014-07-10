#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a = 0, b = 0, n = 0;
	vector<int> vect;
	while(cin >> a >> b >> n && !(a == 0 && b == 0 && n == 0)){
		vect.clear();
		vect.push_back(1); 
		vect.push_back(1);
		for(int i = 2; i < 48; ++i){
			int element = (a * vect[i-1] + b * vect[i-2]) % 7;
			vect.push_back(element);
		}
		{cout << vect[(n-1) % 48] << endl;}  
	}
	return 0;			
}
