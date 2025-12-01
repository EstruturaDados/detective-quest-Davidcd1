#include <stdio.h>

// Desafio Detective Quest
// Tema 4 - Árvores e Tabela Hash
// Este código inicial serve como base para o desenvolvimento das estruturas de navegação, pistas e suspeitos.
// Use as instruções de cada região para desenvolver o sistema completo com árvore binária, árvore de busca e tabela hash.

/* ---------------------------------------------
    Struct da Sala (Nível Novato)
------------------------------------------------ */
typedef struct Sala {
    char nome[50];
    struct Sala *esquerda;
    struct Sala *direita;
} Sala;

/* ---------------------------------------------
   🔧 Protótipos das Funções
------------------------------------------------ */
Sala* criarSala(const char *nome);
void explorarSalas(Sala *atual);

int main() {

    // 🌱 Nível Novato: Mapa da Mansão com Árvore Binária
    //
    // - Crie uma struct Sala com nome, e dois ponteiros: esquerda e direita.
    // - Use funções como criarSala(), conectarSalas() e explorarSalas().
    // - A árvore pode ser fixa: Hall de Entrada, Biblioteca, Cozinha, Sótão etc.
    // - O jogador deve poder explorar indo à esquerda (e) ou à direita (d).
    // - Finalize a exploração com uma opção de saída (s).
    // - Exiba o nome da sala a cada movimento.
    // - Use recursão ou laços para caminhar pela árvore.
    // - Nenhuma inserção dinâmica é necessária neste nível.

     /* ---------------------------------------------
         Construção fixa da árvore (mansão)
    ------------------------------------------------ */

    // Nó raiz
    Sala *hall = criarSala("Hall de Entrada");

    // Sub-salas
    Sala *biblioteca = criarSala("Biblioteca");
    Sala *cozinha = criarSala("Cozinha");
    Sala *salaMapas = criarSala("Sala de Mapas");
    Sala *salaSecreta = criarSala("Sala Secreta");
    Sala *despensa = criarSala("Despensa");
    Sala *jardim = criarSala("Jardim de Inverno");

    // Conexões à esquerda e direita
    hall->esquerda = biblioteca;
    hall->direita = cozinha;

    biblioteca->esquerda = salaMapas;
    biblioteca->direita = salaSecreta;

    cozinha->esquerda = despensa;
    cozinha->direita = jardim;

    /* ---------------------------------------------
        Início da exploração
    ------------------------------------------------ */
    explorarSalas(hall);

    return 0;
}

/* ---------------------------------------------
   criarSala()
   - Cria dinamicamente uma sala
   - Define o nome
   - Inicializa os ponteiros como NULL
------------------------------------------------ */
Sala* criarSala(const char *nome) {
    Sala *nova = (Sala*) malloc(sizeof(Sala));
    if (!nova) {
        printf("Erro ao alocar memória para a sala!\n");
        exit(1);
    }
    strcpy(nova->nome, nome);
    nova->esquerda = NULL;
    nova->direita = NULL;
    return nova;
}

/* ---------------------------------------------
   🚶‍♂️ explorarSalas()
   - Permite ao jogador navegar pela mansão
   - Opções:
        e → ir para a esquerda
        d → ir para a direita
        s → sair da exploração
------------------------------------------------ */
void explorarSalas(Sala *atual) {
    char opcao;

    while (1) {
        printf("\nVocê está em: %s\n", atual->nome);

        // Verifica caminhos possíveis
        printf("Escolha seu caminho:\n");
        if (atual->esquerda != NULL) printf("  (e) Ir para a esquerda → %s\n", atual->esquerda->nome);
        if (atual->direita != NULL) printf("  (d) Ir para a direita  → %s\n", atual->direita->nome);
        printf("  (s) Sair da exploração\n");
        printf("Sua escolha: ");

        scanf(" %c", &opcao);

        if (opcao == 's' || opcao == 'S') {
            printf("\nSaindo da mansão... até mais, detetive!\n");
            break;
        }

        if (opcao == 'e' || opcao == 'E' && atual->esquerda != NULL) {
            atual = atual->esquerda;
        }
        else if (opcao == 'd' || opcao == 'D' && atual->direita != NULL) {
            atual = atual->direita;
        }
        else {
            printf("Caminho inválido! Tente novamente.\n");
        }

        // Se chegou a um nó-folha, acaba a exploração
        if (atual->esquerda == NULL && atual->direita == NULL) {
            printf("\nVocê chegou ao fim do caminho! Última sala visitada: %s\n", atual->nome);
            break;
        }
    }
}
