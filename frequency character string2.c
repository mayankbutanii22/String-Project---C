#include<stdio.h>
#include<string.h>
main() 
{
   int freq[26]={0};
   char str[25]="development";
   int x=0,y=0;
   
   
   for(x=0; str[x]!=NULL; x++){
   	  freq[str[x]-'a']++;
   }for(y=0; y<26; y++){
   	    if(freq[y]>0){  	
   	    printf("%c=>%d\n",y +'a',freq[y]);
   }
}
}
    