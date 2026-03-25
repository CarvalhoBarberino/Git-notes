# git add

## Útil para
- Adiciona as mudanças ao stage

## Explicação
Esse comando adiciona as mudanças à área "stage".

A stage é uma área onde se acumulam todas as mudanças que serão comitadas. Quando você realizar um "commit", apenas as mudanças que estão na stage serão comitadas. A área stage é uma forma de formalizar exatamente o que será comitado. Inclusive você pode escolher deixar uma alteração fora da stage se você não quiser comitar essa alteração.

## Sintáxe/exemplo
Você pode explicitar o nome do arquivo que será adicionado à stage.
```
git add meuArquivo.txt
```
Ou você pode usar o operador "." (ponto) que significa "tudo" ou "todos"
```
git add .
```
Ou você pode especificar uma pasta.
```
git add minhapasta/
```
Ou você pode especificar uma regra de nome usando o operador "*" (asterisco), que também significa "tudo".
```
git add minhapasta/*.txt
```
