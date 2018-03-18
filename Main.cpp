#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a = 5;
	ForwardList <int> line(5);
	//ForwardList <char> line2('a');
	line.Add(9);
	//line.Add('f');
	//line2.Add('b');
	line.Show();
	cout << "-----line2----" << endl;
	//line2.Show();
	system("pause");
	return 0;
}