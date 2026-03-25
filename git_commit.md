# git commit

## Útil para
- Comitar.

## Explicação
No linguajar do git, um commit é um registro de um momento da evolução de um repositório. Ele funciona como uma foto de um momento da história do repositório.

Cada commit registra as alterações do commit anterior para o posterior. Então é possível rastrear, por meio da sequência de commits, como o repositório estava em uma determinada data, por exemplo. Também é possível verificar quem alterou e o que foi alterado.

O comentário do commit é importante para esclarecer os motivos pelos quais houve a alteração. O comentário pode ser feito via editor de texto ou via a própria linha de comando.

## Sintáxe/exemplo
Apenas commitar.
```
git commit
```
Commitar e gravar comentário pela própria linha de comando, sem abrir editor de texto.
```
git commit -m "Fiz esse commit por que minha vózinha pediu."
```
Mudar comentario do ultimo commit.
```
git commit --amend -m "Fiz esse commit por que minha vózinha querida pediu."
```
