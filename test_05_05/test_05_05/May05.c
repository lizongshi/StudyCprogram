#include "May05.h"
//¶ş·Ö²éÕÒ
void BinarySearch(int arr[], int x,int length){
	int left = 0;
	int right = length;
	while (left <= right){
		int mid = (left + right) / 2;
			if(arr[mid]>x){
			right = mid - 1;
			}else if(arr[mid] < x){
			left = mid + 1;
			}
			else{
				printf("the location is %d\n", mid+1);
				break;
			}
	}
	if (left > right){
		printf("no found!\n");
	}
}