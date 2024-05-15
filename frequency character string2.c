#include<stdio.h>
#include<string.h>
main() 
{
    char str[50]="development";  
    int x, y, length= strlen(str);  
    int freq[length];  
    printf("Enter any string: ");
    gets(str);
    for(x=0; x<strlen(str); x++) {  
        freq[x]=1;  
        for(y=x+1; y<strlen(str); y++) {  
            if(str[x] == str[y]) {  
                freq[x]++;  
                str[y] ='0';  
            }  
        }  
    }   
    printf("Frequency of each letter:\n");  
    for(x=0; x<length; x++) {  
        if(str[x] != '0' && str[x]!='0')  
            printf("%c=>%d\n", str[x], freq[x]);  
    }  
}
    