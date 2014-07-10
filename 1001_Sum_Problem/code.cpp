#include <idstream>
using namespace std;

//for some reason, we can not use type "long" here, can only use int.
int main(){
    int a = 0, sum = 0;
    while (cin >> a){
        if (a % 2 == 0){sum = a / 2 * (a + 1);}   //a is integer, so make sure a/2 is integer
        else {sum = (a + 1）/ 2 * a;}   // a is integer, so make sure (a+1)/2 is integer
        cout << sum << endl << endl;
    }
    return 0;
}
