#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int is_substring_present(char* main, char* sub){
	int count=0;
	char sub_sim='1',main_sim='2';
	int len_sub=strlen(sub);
	while(*sub!='\0')
	{
		while(*main!='\0')
		{	
			if(*sub==*main)
			{
				main++;
				count++;
				break;
			}
			else
			main++;
		}
		sub++;
		if(*main!=*sub&&*sub!='\0')
		return false;	
	}	
	if(count == len_sub)
		return true;
}

void assert_true(int value) {
	if (value == false){
		printf("Expected true, but was false");
		exit(1);
	}
}

void assert_false(int value) {
	if (value == true){
		printf("Expected false, but was true");
		exit(1);
	}
}




int main() {
	int a,len_sub,len_main;
	
	assert_true(is_substring_present("abcdefg", "bcd"));
	assert_true(is_substring_present("aabbccdd", "bc"));
	assert_true(is_substring_present("aaabbbbccccdddd", "cd"));
	assert_false(is_substring_present("aaabbbbccccdddd", "bcd"));
}

