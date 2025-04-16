#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;}
void quickSort(char str[], int low, int high) {
if (low < high) {
int i = low;
int j = high;
char pivot = str[(low + high) / 2];
while (i <= j) {
while (str[i] < pivot) i++;
while (str[j] > pivot) j--;
if (i <= j){
swap(&str[i], &str[j]);
i++;
j--;}}
if (low < j) quickSort(str, low, j);
if (i < high) quickSort(str, i, high);
}
}
int main() {
char str[100];
scanf("%[^\n]", str);
int len = strlen(str);
quickSort(str, 0, len - 1);
printf("%s \n", str);
return 0;
}
