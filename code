#include <iostream>
#include <map>
#include <string> //seems Visual Studio didn't include <string> in <iostream>

using namespace std;

int main() {
	int N;
	map<string, int> res_map;
	string str;
	while (cin >> N && N != 0) {	//Fisrt read in the N number, N is normmaly > 1
		res_map.clear();
		while (N-- > 0) {
			cin >> str;	//then read in the color, save it as string
			if (res_map.find(str) == res_map.end()) { //use "find" to find if the color is appeared before
				res_map.insert(make_pair(str, 1)); //if not appeared before, then insert into map, second element = 1
													//first element str is color, second element is the number this color has appeared
			}
			else {
				++res_map[str]; //if appeared before, the number +1
			}
		}
		map<string, int>::iterator max = res_map.begin(); //this iterator is for the map, so map<>::iterator (name)
														//first let max = begin element in map
		for (map<string, int>::iterator iter = res_map.begin(); iter != res_map.end(); ++iter) {
			// map<>::iterator (name), this for loop goes from begin element to end element in map
			if (max->second < iter->second) { //compare the second element in pair()
				max = iter;		//if max's second < iter's second element, then max = iter,
			}
		}
		cout << max->first << endl; //cout only the color of max(), eg first element
		//NB! the order it reads into map, is not the order it stored in map, fx read in red, blue, green, stored as:blue, green, red
	}
	return 0;
}
