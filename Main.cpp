#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a = 5;
	ForwardList <int> line(5);
	
	line.Add(9);

	line.Show();
	cout << "-----line2----" << endl;
	
	system("pause");
	return 0;
}