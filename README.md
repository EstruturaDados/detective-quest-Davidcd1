# Desafio Detective Quest - Estruturas de Dados e Investigação

Bem-vindo ao desafio **Detective Quest**! Neste jogo de mistério, o jogador explora uma mansão, encontra pistas e relaciona evidências a suspeitos. Para tornar isso possível, você atuará como programador responsável por implementar toda a lógica de estruturas de dados do jogo.

A **Enigma Studios**, especializada em jogos educacionais, contratou você para criar a base de funcionamento da mansão e das investigações usando **árvore binária**, **árvore de busca** e **tabela hash**.

O desafio está dividido em três níveis: **Novato**, **Aventureiro** e **Mestre**, com cada nível adicionando mais complexidade ao anterior.  
**Você deve escolher qual desafio deseja realizar.**

🚨 **Atenção:** O nível Novato foca apenas na árvore binária de navegação de cômodos. Ideal para começar com estruturas básicas.

---

## 🎮 Nível Novato: Mapa da Mansão com Árvore Binária

No nível Novato, você criará a árvore binária que representa o **mapa da mansão**. Cada sala é um nó, e o jogador poderá explorar os caminhos à esquerda ou à direita, começando pelo "Hall de Entrada".

🚩 **Objetivo:** Criar um programa em C que:

- Construa dinamicamente uma árvore binária representando os cômodos.
- Permita que o jogador explore a mansão interativamente (esquerda, direita).
- Exiba o nome de cada cômodo visitado até alcançar um nó-folha (fim do caminho).

⚙️ **Funcionalidades do Sistema:**

- A árvore é criada automaticamente via `main()` com `criarSala()`.
- O jogador interage com o jogo usando `explorarSalas()`, escolhendo entre:
  - `e` → ir para a esquerda
  - `d` → ir para a direita
  - `s` → sair da exploração

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário navega pela mansão com base nas opções exibidas no terminal.
*   O programa mostra o nome da sala visitada a cada passo.

**Simplificações para o Nível Novato:**

*   Apenas árvore binária (sem inserção ou remoção durante o jogo).
*   A árvore é montada estaticamente via código.
*   Estrutura imutável em tempo de execução.

---
🕹️ Como usar o programa

Depois de compilar o código, você vai rodar um jogo simples de navegação pela mansão usando uma árvore binária. Aqui tá o passo a passo pra usar:

▶️ Executando o programa

Compile com:

gcc main.c -o detective


Rode com:

./detective

🎮 Jogando

Assim que o programa começar:

Você vai aparecer no Hall de Entrada (a raiz da árvore).

O jogo vai mostrar as opções de movimento.

Você controla tudo digitando apenas três letras:

Comando	Ação
e	Ir para a sala da esquerda
d	Ir para a sala da direita
s	Sair da exploração

Exemplo de uso:

Você está no: Hall de Entrada
Escolha (e = esquerda, d = direita, s = sair):
> e
Você está no: Sala de Jantar


O programa continua mostrando a sala atual até você chegar a uma sala sem caminhos (nó-folha) ou escolher sair (s).

🏁 Quando o jogo termina?

O programa encerra quando:

você chega ao final de um caminho (uma sala sem “filhos”), ou

você digita s para sair.

Ele também exibe uma mensagem avisando que a exploração acabou.

---

## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá desenvolvido um sistema de investigação funcional em C, utilizando estruturas fundamentais como árvores e tabelas hash para controlar lógica de jogo.

Boa sorte, e divirta-se programando com **Detective Quest**!

Equipe de Ensino – Enigma Studios
