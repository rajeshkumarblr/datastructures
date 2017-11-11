#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <map>
#include "bitops.h"
#include "dsutils.h"

using namespace std;

unsigned int val;

void printValueDriver() {
	printf("Current Value: decimal: %u hex: %x binary: %s\n", val, val, binary_str(val));
}

void setValueDriver() {
	cout << "Enter the value for bitops";
	cin >> val;
	printValueDriver();
}

void count1sDriver() {
	int cnt = count1s(val);
	printf("  count of 1s %d \n",cnt);
	
	cnt = count1s_buitlin(val);
	printf("  builtin count of 1s %d \n",cnt);
	
	cnt = count1s_efficient(val);
	printf("  efficient count of 1s %d \n",cnt);
}

void getMsbDriver() {
	cout << "MSB bit using algorithm:" << getmsb(val) << endl;
	cout << "MSB bit using asm: " << getmsbasm(val) << endl;
}

void reverseBitsDriver() {
	reverseBits(val);
}

static vector<option>  options {
	{ "Set Value", setValueDriver },
	{ "Count1s in Value", count1sDriver },
	{ "Get MSB", getMsbDriver},
	{ "Bit Reverse",reverseBitsDriver }
};

int main(int argc, char **argv)
{
	val = 0xABCD;
	menuloop(options,printValueDriver);
	return 0;
}
