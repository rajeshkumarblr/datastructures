#include "bitmanip.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define INT_SIZE sizeof(int)
#define INT_MSB ((sizeof(int) * 8) -1)

int getmsb(int n) {
	int msb = 0;	
	while (n>>=1) {	
		msb++;
	}	
	return msb;
}

int getmsbasm(int n) {
	unsigned int msb;
	asm("bsrl %1,%0" : "=r"(msb) : "r"(n));
	return msb;
}

char* binary_str(unsigned int val) {
	unsigned int max = getmsbasm(val);
	char* bitstr = (char*)malloc(max+1);
	if (bitstr == NULL) {
		printf("malloc returned NULL!");
		return NULL;
	}
	memset(bitstr,0,max);
	int cnt=0;
	for (int i=max; i>=0; i--) {
		unsigned int mask = 1<<i;
		bitstr[cnt++] = (val & mask)?'1':'0';
	}
	bitstr[cnt] = 0;
	return bitstr;
}

unsigned int count1s(unsigned int val) {
	unsigned int cnt =0;
	while (val) {
		binary_str(val);
		cnt += val & 1;
		val >>= 1;
	}
	return cnt;
}

unsigned int count1s_buitlin(unsigned int val) { 
		return __builtin_popcount(val);
}

unsigned int count1s_efficient(unsigned int val) {
	unsigned int cnt =0;
	while (val) {
		cnt++;
		val = val & (val -1);
	}
	return cnt;
}
