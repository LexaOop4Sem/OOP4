#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a = 5;
	ForwardList <int> line(5);
	
	line.Add(9);
	line.Add(10);

	line.Show();
	cout << "-----line2----" << endl;
	//line.Search(10);
	line.Del(9);

	

	system("pause");
	return 0;
}