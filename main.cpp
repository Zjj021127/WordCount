#include<bits/stdc++.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int CountOfCharacter(FILE *fp)
{
	int res = 0;
	int c;
	while((c = fgetc(fp)) != EOF)
	{
	  if(c != ' ')res++;
	}
	return res;
} 
int CountOfWord(FILE *fp)
{
	int res = 0;
	int c;
	int flag = 0;
	while((c = fgetc(fp)) != EOF)
	{
	   if(c == ' ' || c == ',')flag = 0;
	   else if(flag == 0)
	   {
	   	res++;
	   	flag = 1;
	   }
	}
	return res;
}
int main(int argc, char** argv) 
{   
    const char* op = argv[1];
    const char* filename = argv[2];
    FILE *fp = fopen(filename,"r");
    if(strcmp(op,"-c") == 0)
	{
		printf("字符个数是：%d",CountOfCharacter(fp));
	}
    else
	{
        printf("单词个数是：%d",CountOfWord(fp));	
	}
	return 0;
}
