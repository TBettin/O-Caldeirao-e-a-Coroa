# O-Caldeirao-e-a-Coroa
RPG de fantasia em terminal desenvolvido em C. O projeto acompanha a jornada de Morgana em um mundo de magia, criaturas e mistérios, enquanto exploro e pratico conceitos de programação, como funções, estruturas de dados, condicionais, laços de repetição e gerenciamento de atributos.

## Histórico de desenvolvimento

###28/10/2026 — Implementação do menu inicial

Criação da função Abrir_Menu(), responsável pela exibição das opções iniciais do jogo.
Implementação da leitura e do retorno da opção escolhida pelo usuário.
Utilização da estrutura de repetição do-while para manter o menu ativo até uma opção válida ser selecionada.
Implementação da validação de opções numéricas, com tratamento de entradas inválidas.

### 29/10/2026 — Estrutura inicial de personagens

- Criação da `struct Personagem`, com atributos de vida, mana, experiência, nível, ataque e defesa.
- Criação da `struct Inimigo`, com atributos de vida, ataque, defesa e experiência concedida.
- Declaração de cinco inimigos: Goblin, Aranha Gigante, Soldado Morto-Vivo, Dragão e Feiticeiro.
- Implementação da função `Iniciar_Personagens()`, responsável pela inicialização dos atributos da Morgana e dos inimigos.
- Implementação da função `Exibir_Ficha()`, com apresentação dos atributos da personagem.
- Integração da ficha ao início da aventura.
