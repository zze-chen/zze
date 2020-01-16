#include <stdio.h>

int main()
{
  int arr[6];
  int output = 0;
  for(int i = 0; i < 6; i++){
    scanf("%d",&arr[i]);
    output += arr[i] * arr[i] * arr[i];
  }
  printf("%d\n",output);
  return 0;
}