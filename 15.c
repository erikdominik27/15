#include <stdio.h>

int checking(char ch);

int main()
{
char ch;

printf("Enter a character: ");
scanf("%c", &ch);
int result=checking(ch);
    if (result == 1) {
        printf("alphabet");
    } 
    else if (result == 2){
        printf("Digit");
        
    }
    else if (result == 3){
    printf("Special Character");
    }
}
int checking(char ch){
    if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1;
    }
    else if (ch >= '0' && ch <= '9') {
        return 2;
    }
    else {
        return 3; 
    } 
    
}