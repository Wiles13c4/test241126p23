﻿#include <iostream>
#include "p23.h"
using namespace std;
int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn== item2.isbn) {
		cout << item1 + item1 << endl;
		return 0;
	}
	else {
		cerr << "Data must refer to same ISBN" << endl;
		return -1;
	}
}