#include <stdio.h>
#include <iostream>
#include "bitmanip.h"

using namespace std;
int main(int argc, char **argv)
{
	int val;
	while (true) {
		cout << "Enter the number \n";
		cin >> val;
		printf("val is %d %x %s\n", val, val, binary_str(val));
		printf("msb is %d  %d \n", getmsb(val),getmsbasm(val));	
	}
	
	/*int cnt = count1s(val);
	printf("count of 1s %d \n",cnt);
	cnt = count1s_buitlin(val);
	printf("builtin count of 1s %d \n",cnt);
	cnt = count1s_efficient(val);
	printf("efficient count of 1s %d \n",cnt);*/
	return 0;
}
