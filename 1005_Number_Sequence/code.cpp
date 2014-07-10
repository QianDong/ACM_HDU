#include<iostream>

using namespace std;

int fn(int aa, int bb, int nn){
	if (nn < 3){return 1;} 
	return (aa*fn(aa,bb,nn-1) + bb*fn(aa,bb,nn-2)) % 7;
}

int main(){
	int A=0, B=0, N=0;
	while (cin >> A >> B >> N && !(A == 0 && B == 0 && N == 0)){
		int res = fn(A,B,N);
		cout << res << endl;
	}
	return 0;
}
