#include <iostream>
#include <fstream>
#include <cstring>
#define B 3
#define L 200
#define NUM_INDIVIDUAL 10015

using namespace std;

int main() {
	ifstream in ("phase1.chr20.10-11Mb.haps");
	char c = ' ';
	int count = 0;
	while (c!='\n') {
		c = in.get();
		if (c != ' ')
			count++;
	}
	cout<<count - 1;
	in.close();
	return 0;
}
