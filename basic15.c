#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i=0,len=0,cmp=0;
    char word[100];
    char store[100][100];
    char *s = " ";
    char *token;
    char tmp;
    int counter[25]={0}; 
    fgets(word,100,stdin);
    token = strtok(word, s);
    while(token!=NULL){
        //printf("%s\n",token);
        strcpy(store[i],token);
        i++;
        token=(strtok(NULL,s));
    }
    for(int j=0;j<i;j++){
        len=strlen(store[j]);
        for(int k=0;k<len;k++){
            store[j][k]=tolower(store[j][k]);
            tmp=store[j][k];
            cmp=(int)tmp;
            counter[cmp-97]++;
        }
    }
    printf("%d\n",i);
    for(int j=0;j<25;j++){
        if(counter[j]!= 0){
            printf("%c : %d\n",97+j,counter[j]);
        }
    }
    return 0;
}