#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char ISBN[10];
	int acc[10];
    scanf("%c %c %c %c %c %c %c %c %c %c",&ISBN[0],&ISBN[1],&ISBN[2],&ISBN[3],&ISBN[4],&ISBN[5],&ISBN[6],&ISBN[7],&ISBN[8],&ISBN[9]);
	for(int i=0; i<10; i++){
		if(ISBN[i] == 'X'){
            acc[i] = 10;
        }else{
            acc[i] = ISBN[i]-48;
        }
		if(i != 0){
			acc[i] += acc[i-1];
		}
	}
	for(int i=1; i<10; i++){
			acc[i] += acc[i-1];
	}
	if(acc[9] % 11 == 0) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}