#include "stdafx.h"
#include <iostream>
using namespace std;
void MoveAllZeroesToEnd(int arr[], int len)
{
	int slow = 0;
	int fast = 0;
	while(fast < len)
	{
		if(arr[fast] == 0)
		{
			fast++;
			continue;
		}
		arr[slow] = arr[fast];
		slow++;
		fast++;
	}
	while(slow < len)
		arr[slow++] = 0; 
}
int main()
{
	int arr[] = {1,2,0,0,3,0,5,0,0,0,6};
	int l = sizeof(arr)/sizeof(arr[0]);
	MoveAllZeroesToEnd(arr, l);
	
	for(int i = 0 ; i < l; i++)
		cout<<arr[i]<<", ";
	return 0;
}