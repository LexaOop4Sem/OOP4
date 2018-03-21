#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a = 5;
	ForwardList <int> line(1);
	
	for (int i = 2; i < 10; i++) {
		line.Add(i);
	}

	line.Show();
	cout << "-----line2----" << endl;
	//line.Search(10);
	line.Del(5);
	cout << "--------------------" << endl;;
	line.Show();

	system("pause");
	return 0;
}