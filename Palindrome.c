#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
bool isPalindrome(int num);

int main() {
    // to determine palindrome num, reverse the number 
    // and check if reverse number is equal to actual number
    // mod 10 gives last digit and div 10 gives remaining digits

    printf("%d \n", isPalindrome(12321) ); // 1
    return 0;
}
bool isPalindrome(int num) {
   int reversedNum = 0;
   int shiftingNum = num; 
    while(shiftingNum > 0) { // 12321, 1232, 123, 12, 1
        reversedNum = reversedNum*10 + shiftingNum % 10; // multiplying by 10 shifts the number to left
        // 0 + 1 = 1, 10 + 2 = 12, 120 + 3 = 123, 1230 + 2 = 1232, 12320 + 1 = 12321
        shiftingNum = shiftingNum/10; 
    }
    if(reversedNum == num) {
        return true;
    }
    return false;
}
