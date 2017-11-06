#ifndef _BITAMANIP_H
#define _BITAMANIP_H

char* binary_str(unsigned int val);

int getmsb(unsigned int n);
int getmsbasm(unsigned int n);

unsigned int count1s(unsigned int val);
unsigned int count1s_buitlin(unsigned int val);
unsigned int count1s_efficient(unsigned int val);

void reverseBits(unsigned int& val);
	
#endif