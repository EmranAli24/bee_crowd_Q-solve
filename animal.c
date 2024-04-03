//beecrowd 1049
#include<stdio.h>
#include<string.h>

void removeNewline(char* str)
{ 
	str[strcspn(str,"\n")] = '\0';
}

int main(){

	char str1[20],str2[20],str3[20];

	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	fgets(str3,sizeof(str3),stdin);

	removeNewline(str1);
	removeNewline(str2);
	removeNewline(str3);

	//section 1

	int d1 = strcmp(str1,"vertebrado");
	int d2 = strcmp(str2,"ave");
	int d3 = strcmp(str3,"onivoro");
	if(d1==0 && d2==0 && d3 !=0)
	{
		printf("aguia\n");
	}
	else if (d1==0 && d2==0 && d3 ==0)
	{
		printf("pomba\n");
	}
	else if (d1==0 && d2!=0 && d3 ==0)
	{
		printf("homem\n");
	}
	else if (d1==0 && d2!=0 && d3 !=0)
	{
		printf("vaca\n");
	}

	//section2
	int e1 = strcmp(str1,"invertebrado");
	int e2 = strcmp(str2,"inseto");
	int e3 = strcmp(str3,"hematofago");
	if(e1==0 && e2==0 && e3!=0)
	{
		printf("lagarta\n");
	}
	else if (e1==0 && e2==0 && e3 ==0)
	{
		printf("pulga\n");
	}
	else if (e1==0 && e2!=0 && e3 ==0)
	{
		printf("sanguessuga\n");
	}
	else if (e1==0 && e2!=0 && e3 !=0)
	{
		printf("minhoca\n");
	}
	return 0;
}






