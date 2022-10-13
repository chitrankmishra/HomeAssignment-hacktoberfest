#include <stdio.h>
int main() {    

    int number1, number2, sum,diff;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2; 
    diff = number1 - number2;
    
    printf("%d + %d = %d", number1, number2, sum);
    
    printf("%d - %d = %d", number1, number2, diff );
    return 0;
}
int remove_duplicate_elements(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
    break;
}
