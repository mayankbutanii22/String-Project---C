#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
    int length=0, y=1,x=0;

    printf("Enter any string: ");
    gets(str);

    for(x=0; str[x]!='\0';x++){
        length++;
    }
    for(x=0; x<length/2; x++){
        if(str[x]!=str[length-1-x]){
        	y++;
        }
    }
    if(y==1){
        printf("\nPalindrome.");
    }
    else{
        printf("\nis not a Palindrome.");
    }
}