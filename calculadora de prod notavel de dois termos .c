#include <stdio.h>

int main()
{
	int a, b, formula, escolha;
	
	printf("==================== Calculadora de Produto Notavel de Dois Termos ======================== \n Digite a opcao conforme o que deseja: \n 1 - Quadrado da Soma de dois termos;\n 2 - Quadrado da diferenca de dois termos; \n 3 - Produto da soma pela diferenca de dois termos; \n");
	scanf("%d", &escolha);
	if(escolha == 1 || escolha == 2 || escolha == 3)
	{
	printf("Digite aqui o valor da primeira variavel: \n");
	scanf("%d", &a);
	printf("Digite aqui o valor da segunda variavel: \n");
	scanf("%d", &b);
    }
    else 
    printf("Voce nao digitou nenhuma opcao ou o numero nao condiz com uma opcao !");
    
    if(escolha == 1 || escolha == 2 || escolha ==3)
    {
     if(escolha == 1)
	    formula = a*a + 2*a*b + b*b;
	 else if(escolha == 2)
	    formula = a*a - 2*a*b + b*b;
	 else if(escolha == 3)
	    formula = a*a - b*b;
	    printf("O resultado do produto notavel e': %d \n", formula);
    }
	
	return 0;
}
