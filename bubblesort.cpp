#include<stdio.h>
#include<string.h>
void bubbleSort(char arr[], int n) {
for (int i=0;i<n-1;i++) {
for (int j=0;j<n-i-1;j++){
if (arr[j]>arr[j + 1]) {
char temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;}}
}
}
int main() {
char arr[] ={'L', 'A', 'C' ,'N', 'O' ,'F', 'W'};
int n = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);
for (int i = 0; i <n; i++) {
printf("%c ", arr[i]);}
printf("\n");
return 0;
}
