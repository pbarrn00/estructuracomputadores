#include <stdio.h>
	
	int main(int argc, char const *argv[])
	{
		int Num;

		printf("Escribe una nota numérica\n");
		scanf("%d", &Num);

			if ((Num==5) || (Num==6))
			{
				printf("Aprobado\n");
			}
			 else{
			 		if ((Num==7)||(Num==8))
			 		{
			 			printf("Notable\n");
			 		}
			 		else{ 	
			 				if ((Num==9)||(Num==10))
			 				{
			 					printf("Sobresaliente\n");
			 				}
			 				else{
			 					printf("Suspenso\n");
			 				}

			 		}


			 }
	return 0;
	}		 
