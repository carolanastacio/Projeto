#define abono 150
#define ajuste 0.075
#define cond 1750

int main ()
{
	float salario, salarioAB, salarioAjuste;
	printf("\n###################################################");
	printf("\n#       M E T R A - C A T A G U A S E S           #");
	printf("\n#       Nome: Ana Carolina Anastacio              #");
	printf("\n#       RA: 21043452-5                            #");
	printf("\n###################################################");
	printf("\n");
	printf("\n Digite o seu salario atual: R$");
	scanf("%f", &salario);

	
	if (salario<=cond)
	{
		printf("\nSeu salario atual e de R$ %.2f\n", salario);
		printf("\nVoce tem direito ao abono salarial de R$150,00!\n");
		printf("\nVoce tem um reajuste de 7,5 %% \n");
	
		salarioAB = (salario*ajuste) + abono + salario;
		
		printf("------------------------------------------------");
		printf("\n Seu salario final e de R$  %.2f\n", salarioAB);
	}
	else
	{
		printf("\nSeu salario atual e de R$ %.2f\n", salario);
		printf("\nVoce tem direito apenas ao reajuste de 7,5 %% !\n");
		
		salarioAjuste = (salario*ajuste) + salario;
		
	    printf("------------------------------------------------");
		printf("\nSeu salario final e R$ %.2f\n", salarioAjuste);
		printf("\n (Caramba! Ta rica! :) )\n");
		printf("------------------------------------------------\n");
	}
		system ("pause");
		return (0);
} 