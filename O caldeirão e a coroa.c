#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*FUNÇÕES*/

int Abrir_Menu(){
	int opcao_menu_iniciar; 
	
	printf ("\n=============================================\n");
	printf ("            O CALDEIRÃO E A COROA            \n");
	printf ("=============================================\n");	
	
	
	printf("\n1. Iniciar uma nova aventura\n");
	printf("2. Carregar a aventura salva\n");
	printf("3. Sair\n");
	
	scanf("%d", &opcao_menu_iniciar);
	return opcao_menu_iniciar;
}

int main() {
	
/*variáveis*/

int opcao_menu_iniciar;

/*configurações de ambiente*/
	
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

	
/* Com base na escolha anterior, faça algo.

Como quero que a função Abrir_Menu() seja chamada
dentro do laço de repetição, ela precisa ficar dentro do do.

O do executa o bloco de código antes de verificar a condição
do while. Se a condição for verdadeira, o bloco será repetido.

No caso, enquanto o usuário digitar algo diferente
de 1, 2 ou 3, o menu será exibido novamente. Quando ele digitar 
uma dessas opções, o laço terminará.*/
	
	do {
		
	opcao_menu_iniciar = Abrir_Menu();
	printf("\nVocê escolheu a opção: %d\n", opcao_menu_iniciar);
		
	if (opcao_menu_iniciar == 1){	
		printf("\nA aventura vai começar!\n");	
		
	} else if (opcao_menu_iniciar == 2) {
		printf ("\nCarregando a aventura...\n");
		
	} else if (opcao_menu_iniciar == 3) {
		printf("\nSaindo do jogo... Até a próxima, aventureira!\n");
		
	} else {
		printf("\nOpção inválida, tente novamente.\n");
	}
	} while (opcao_menu_iniciar != 1 && 
	opcao_menu_iniciar != 2 && 
	opcao_menu_iniciar != 3); 
	
return 0;
}

