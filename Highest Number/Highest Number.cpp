
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int gethighestnumber(vector<int> data) {
	int high{};
	for (auto i : data) {
		if (i > high) {
			high = i;
		}
	}
	return high;
}

pair<int,int> highandoccurences(vector<int> data) {
	int high{};
	int occur{};

	for (auto i : data) {
		
		if (i == high) {
			occur++;
		}
		
		else if (i > high) {
			high = i;
			occur = 0;
			occur++;
		}
	}
	
	

	return { high,occur };
}
int main()
{
	vector <int> data{ 55, 66, 5, 43, 67, 99, 23, 12 };
	vector <int> data2{ 99, 2, 5, 7, 8, 99, 6, 5, 1, 99, 99 };
	int highestnumber = gethighestnumber(data);
	pair<int, int>highestoccurs = highandoccurences(data2);

	//for (auto i : highestoccurs) {
	//	cout << i.second << endl;
	//}

	cout<<"lalaland"<<endl;
	cout << "The highest number is " << highestoccurs.first;
	cout << " with the number of occurances is " << highestoccurs.second;
	//cout << highestnumber << endl;

}

