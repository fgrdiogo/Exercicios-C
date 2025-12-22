# 🚀 Exercícios em C — Repositório de Prática

Repositório dedicado à resolução de exercícios em **linguagem C**, com foco no desenvolvimento de lógica, manipulação de memória e estruturação de código.
Os exercícios foram organizados por tema para facilitar navegação, estudo e evolução contínua.

---

## 📁 Conteúdos abordados

| Tema | Descrição |
|------|-----------|
| 🔹 Arrays (Vetores) | Manipulação de listas, ordenação, busca, leitura e armazenamento sequencial. |
| 🔹 Multidimensional Arrays (Matrizes) | Operações com matrizes, diagonais, somatórios, percursos e aplicações matemáticas. |
| 🔹 Ponteiros | Endereçamento de memória, aritmética de ponteiros, passagem por referência e manipulação de variáveis. |
| 🔹 Funções | Modularização, organização do código, parâmetros e retornos. |
| 🔹 Structs | Criação e manipulação de registros compostos, modelagem de dados e vetores de structs. |

---

## 📂 Estrutura do repositório

O projeto está organizado por pastas temáticas. Exemplo de estrutura:

```
Makefile
README.md
Arrays/
    01.c
    02.c
    03.c
    06.c
Functions/
    Functions 01.c
    Functions 02.c
    Functions 03.c
    Functions 04.c
    functions 05.c
    Functions 06.c
    Functions 08.c
    Functions 09.c
MultidimensionalArrays/
    Matrices 01.c
    Matrices 02.c
    Matrices 03.c
    Matrices 04.c
    Matrices 05.c
    Matrices 06.c
    Matrices 07.c
    Matrices 08.c
    Matrices 09.c
Pointers/
    Pointers 01.c
    Pointers 02.c
    Pointers 03.c
Struct/
    struct 01.c
```

Cada arquivo contém um exercício independente em C. Os nomes seguem (quando possível) um padrão simples para facilitar busca e execução.

---

## 🛠️ Como compilar e executar

Recomenda-se compilar cada arquivo individualmente com o GCC. Exemplos (execute no diretório raiz do repositório):

```bash
# Crie a pasta de binários
mkdir -p bin

# Compilar um arquivo específico e gerar executável
gcc -Wall -Wextra -std=c11 Arrays/01.c -o bin/arrays_01

# Executar
./bin/arrays_01

# Compilar todos os arquivos de uma pasta (exemplo: Arrays)
for f in Arrays/*.c; do
  name=$(basename "$f" .c)
  gcc -Wall -Wextra -std=c11 "$f" -o "bin/${name}"
done

# Executar um executável gerado
./bin/01
```

Observações:
- Use `-std=c11` (ou ajuste conforme sua necessidade).
- `-Wall -Wextra` ativa warnings úteis para aprendizado.
- Crie a pasta `bin/` para armazenar os executáveis.

---

## ✅ Convenções e boas práticas

- Prefira nomes de arquivos claros e consistentes (por exemplo `arrays_01.c` ou `matrices_01.c`).
- Inclua comentários que expliquem a lógica principal do exercício.
- Evite alterar o comportamento de outros exercícios ao adicionar novos arquivos.

---

## 🤝 Como contribuir

1. Faça um fork do repositório.
2. Crie uma branch com nome descritivo: `feature/nome-do-exercicio`.
3. Adicione seu arquivo `.c` na pasta correspondente.
4. Garanta que o código compile com `gcc -Wall -Wextra -std=c11`.
5. Abra um Pull Request descrevendo o exercício e as escolhas de implementação.

Para correções rápidas (typos, README), pode abrir PR diretamente na branch `main` do seu fork.

---

## 🧪 Testes rápidos

Você pode criar um `Makefile` simples para facilitar compilação ou usar os comandos de exemplo acima. Um exemplo mínimo de `Makefile`:

```
CC=gcc
CFLAGS=-Wall -Wextra -std=c11

all:
	mkdir -p bin
	for f in Arrays/*.c; do \
		name=$$(basename $$f .c); \
		$(CC) $(CFLAGS) $$f -o bin/$$name; \
	done

clean:
	rm -rf bin
```

---



