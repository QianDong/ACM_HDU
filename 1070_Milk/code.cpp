#include <iostream>
#include <string>

using namespace std;

int get_day(int v){
	if (v >= 1000) { return 5; }		//Ignatius will never drink milk after 5 days
	else { return v / 200; }			//Ignatius will not drink milk when the left milk in bottle < 200 ml
}


int main(){
	int group;
	cin >> group;
	while (group--){
		int num;
		double min_price = 99999999, max_volume = 0;	//initialize price, give them big numbersm, make sure new price can be smaller
		string min_brand;
		cin >> num;
		while (num--){
			string brand;
			double price;
			int volume;
			cin >> brand >> price >> volume;
			if (volume >= 200) {					//Ignatius need to drink at least 200 ml every day
				int day = get_day(volume);
				double day_price = price / day;
				if (min_price > day_price) {
					min_price = day_price;
					min_brand = brand;
					max_volume = volume;
				}
				else if (min_price == day_price && max_volume < volume){	//same day_price, but one has large volume, choose the large volume
						min_brand = brand; }
			}				
		}
		cout << min_brand << endl;
	}
	return 0;
}
