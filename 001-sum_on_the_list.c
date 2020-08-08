/*

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/

#include <stdio.h>

int list[5] = {10, 15, 3, 7};
int k;
int i = 0;
int j = 1;

int test_sum(){
	
	while(list[i] != '\0'){
		while(j < 4){
			if(list[i] + list[j] == k){
				return 1;
			} else {
				j++;
			}
		}
	i++;
	j = i + 1;
	}
	return 0;
}


int main(){
	
	printf("Please input the k number..\n");
	scanf("%d", &k);
	
	if(test_sum() == 1){
		printf("\ntrue");
	}
	if(test_sum() == 0){
		printf("\nfalse");
	}
	
}

