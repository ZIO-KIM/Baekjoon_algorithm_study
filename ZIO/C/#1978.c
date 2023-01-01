
// #1978 - 소수 찾기
// https://www.acmicpc.net/problem/1978

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int N; 
    int *arr, i, j; 
    int cnt = 0, num_of_prime_number = 0; 

    scanf("%d", &N); 
    arr = (int*)malloc(sizeof(N)); 

    for (i=0; i<N; i++) {
        scanf("%d", &arr[i]); 
    }
    
    for (i=0; i<N; i++) {
        cnt = 0; 
        for (j=1; j<=arr[i]; j++) {
            if (arr[i] % j == 0) {
                cnt ++; 
            }
        }
        if (cnt == 2) {
            num_of_prime_number ++; 
        }
    }
	
    printf("%d", num_of_prime_number); 
}