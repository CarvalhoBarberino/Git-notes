# git branch

## Útil para
- Tratar os branches

## Explicação
Esse comando cria branches, mostra informações do branch, deleta e renomeia branches.

Cada branch é um ponteiro que aponta para um determinado commit. Como cada commit aponta para um anterior e podem haver vários commits formando uma "árvore", então cada branch acaba se comportando como o nome de uma das pontas da "árvore".

Com vários branches, é possível que muitas pessoas trabalhem com o mesmo repositório sem que uma atrapalhe a outra, mas atenção, não é bagunçado. Fica convencionado que todos os desenvolvedores irão fazer branches derivados do branch main e o merge sempre fará o main receber as alterações dos branches dos desenvolvedores.

## Sintáxe/exemplo
Cria branches sem mudar pra ele.
```
git branch teste123
```
Mostra branches.
```
git branch
```
Mostra versões de cada branch.
```
git branch -v
```
Mostra branches remotos.
```
git branch -r
```
Mudar nome de branch atual.
```
git branch -m novoNome123
```
Mudar nome de branch.
```
git branch -m antigoNome123 novoNome123
```
Deletar branch.
```
git branch -d teste123
```
