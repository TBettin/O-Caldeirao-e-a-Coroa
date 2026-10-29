#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*STRUCTS*/

struct Personagem {
	int hp;
	int mp;
	int xp;
	int nivel;
	int ataque;
	int defesa;
} Morgana;

struct Inimigo {
	int hp;
	int ataque;
	int defesa;
	int xp_concedido;
} Goblin, Aranha_Gigante,Soldado_Morto_Vivo, Dragao, Feiticeiro;


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

void Iniciar_Aventura(){
	
	printf("\nEra uma vez, em um reino distante, onde a magia florescia entre as árvores de uma floresta encantada, " 
	"uma jovem bruxa chamada Morgana. Ela vivia em uma pequena cabana no coração do bosque, dedicando seus dias " 
	"à arte da cura e à companhia de seu fiel gatinho preto.\n"
	
	"\nCerta vez, ao visitar o palácio real, Morgana conheceu a princesa. Bastou um olhar para que as duas se apaixonassem, " 
	"dando início a um amor tão inesperado quanto os encantos que habitavam aquelas terras.\n"
	
	"\nMas, nas sombras, um feiticeiro maligno tramava tomar o reino para si. Em uma noite terrível, lançou uma maldição sobre " 
	"aquelas terras, transformando a princesa em pedra e submetendo a rainha à sua vontade. O rei, devastado pela dor de perder " 
	"a filha, não resistiu à tristeza e faleceu, deixando o reino à mercê das trevas.\n"
	
	"\nDesde então, criaturas sombrias passaram a rondar a floresta, e a magia que antes protegia o reino começou a se enfraquecer. " 
	"Enquanto a rainha permanecia sob o domínio do feiticeiro, a princesa aguardava, imóvel, por uma esperança que parecia impossível.\n"
	
	"\nMas Morgana não estava disposta a desistir. Armada com seus conhecimentos de magia e cura, acompanhada de seu pequeno companheiro, " 
	"ela partirá em uma jornada por florestas perigosas, ruínas esquecidas e caminhos repletos de mistérios.\n"
	
	"\nPara salvar sua amada, libertar a rainha e restaurar a paz, Morgana precisará enfrentar o feiticeiro e descobrir que até a magia " 
	"mais poderosa pode nascer de um coração cheio de coragem.");
}

void Iniciar_Personagens(){

/*PERSONAGEM PRINCIPAL*/

Morgana.hp = 100;
Morgana.mp = 50; 
Morgana.xp = 0;
Morgana.nivel = 1; 
Morgana.ataque = 10;
Morgana.defesa = 5; 

/*INIMIGOS*/

Goblin.hp = 30;
Goblin.ataque = 7;
Goblin.defesa = 3;
Goblin.xp_concedido = 15;

Aranha_Gigante.hp = 50;
Aranha_Gigante.ataque = 14;
Aranha_Gigante.defesa = 7;
Aranha_Gigante.xp_concedido = 25;

Soldado_Morto_Vivo.hp = 70;
Soldado_Morto_Vivo.ataque = 21;
Soldado_Morto_Vivo.defesa = 10;
Soldado_Morto_Vivo.xp_concedido = 35;

Dragao.hp = 120;
Dragao.ataque = 30;
Dragao.defesa = 20;
Dragao.xp_concedido = 100;

Feiticeiro.hp = 150;
Feiticeiro.ataque = 40;
Feiticeiro.defesa = 25;
Feiticeiro.xp_concedido = 200;
}

void Exibir_Ficha(){
	
	printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n|   Ficha de Personagem    |\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		
	printf ("\n\n+-----------------------------------------+");
	printf ("\n|                MORGANA                  |");
	printf ("\n|             bruxa curandeira            |");
	printf ("\n+-----------------------------------------+");
	printf ("\n| VIDA: 100/100                           |");	
	printf ("\n| MANA: 50/50                             |");	
	printf ("\n+-----------------------------------------+");
	printf ("\n| NÍVEL: 1                XP: 0           |");
	printf ("\n| ATAQUE: 10              DEFESA: 5       |");
	printf ("\n+-----------------------------------------+");
		
}

int main() {
	
/*INICIALIZAÇÃO*/

Iniciar_Personagens();



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
		printf ("\n\n*********************************************");		
		printf("\n         A aventura vai começar!\n");	
		printf ("*********************************************\n");	
		Iniciar_Aventura();
		Exibir_Ficha();
		
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

