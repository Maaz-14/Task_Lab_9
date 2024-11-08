#include<stdio.h>
#include<string.h>
void reverse_characters(char str[],int start,int end){
	
	while (start<end){
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
		
	}
	return;
	
}

void reverse_words(char str[]){
	int start=0;
	int i=0;
	int length=strlen(str);
	
	while (i<=length){
		
		if(str[i]==' '||str[i]=='\0'){
			reverse_characters(str,start,i-1);
			start=i+1;
		}
		i++;
	}
	
}

int main()
{
	char str[100];
	int length=0;
	
	
	printf("Enter a sentence: ");
	fgets(str,sizeof(str),stdin);
	
	length=strlen(str);
	if(str[length-1]=='\n'){
		str[length-1]='\0';
		
	}
	reverse_words(str);
	printf("\nReversed string: %s",str);
	
	
	return 0;
}
