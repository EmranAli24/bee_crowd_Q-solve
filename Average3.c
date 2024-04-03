//beecrowd 1040
#include<stdio.h>
int main(){
	float N1,N2,N3,N4,Media;
	scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
	Media=(2*N1+3*N2+4*N3+1*N4)/(10);

	if (Media<5.0)
	{
		printf("Media: %.1f\n",Media);
		printf("Aluno reprovado.\n");
	}
	else if	(Media>=5.0&&Media<=6.9)
	{
		float  P,F;
		scanf("%f",&P);
		F=(Media+P)/2;


		printf("Media: %.1f\n",Media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n",P);
		if(F>=5)
		{	
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",F);
		}
		else
		{	
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",F);
		}
	}

	else
	{
		printf("Media: %.1f\n",Media);
		printf("Aluno aprovado.\n");
	}
	return 0;
}

