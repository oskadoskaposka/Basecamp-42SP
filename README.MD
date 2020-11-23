http://dontpad.com/e11even
https://www.amazon.com.br/dp/B08HCGCFWJ/ref=dp-kindle-redirect?_encoding=UTF8&btkr=1

# Shell00
<!-- Caminho padrão -->
Shell00 > Shell01 > C00 > C01 > C02
<!-- Caminho que eu segui -->
Shell00 > C00 > C01 > Shell01 > C02

## Ex00

## Ex01

## Ex02
ARRUMAR AS PERMISSÕES DO TEST3

## Ex03

## Ex04

## Ex05
https://yeonghoey.com/git/ls-files/
<!-- Testar, pq parece que nao esta funcionando -->
	#!/bin/sh
	shopt -s globstar
	git check-ignore . **/*
<!-- No do ALEFE foi o comando abaixo -->
	#!/bin/sh
	git ls-files -o -i --exclude-standard
<!-- Comando para "des-ocultar" um arquivo -->
	mv .aquivoXX arquivoXX

## Ex06
<!-- Comando para salvar as diferenças entre o 'sw.diff' e o 'a' no arquivo 'b'-->
patch -o b a<sw.diff

## Ex07
FALTOU NO COMMIT QUE FOI SUBIDO ESPECIFICAR PARA LISTAR APENAS ARQUIVOS
<!-- Ver a playlist do frances ate final, ele explica que  -->
<!-- tanto a barra antes dos parenteses -->
find . -type f \( -name "#*#" -o -name "*~" \) -print -delete
<!-- quanto colocar os parenteses entre aspas funciona para proteger a logica -->
find . -type f "(" -name "*~" -or -name "#*#" ")" -print -delete

## Ex08
https://www.youtube.com/watch?v=0YAgz7dZgBc
https://linux.die.net/man/5/magic
https://unix.stackexchange.com/questions/453202/when-trying-to-compile-magic-file-warning-type-invalid-and-warning-offset
http://cweiske.de/tagebuch/custom-magic-db.htm
<!-- SEM COMPILAR O ARQUIVO -->
41 string 42 42 file
<!-- pra testar o arquivo test2, seguindo as regras do arquivo ft_magic -->
file -m ft_magic test2

# Rush00
<!-- Link com muitas informações sobre C -->
https://study.cs50.net/
https://www.ime.usp.br/~pf/algoritmos/index.html#C-language
<!-- Como compilar arquivos em C -->
https://fig.if.usp.br/~esdobay/c/gcc.html
<!-- documentação funcao write -->
https://pubs.opengroup.org/onlinepubs/007904875/functions/write.html
<!-- LOGICA USADA PRA FAZER O RUSH -->
	//putchar
	void escreverX () {
		...
	}
	void escreverY () {
		...
	}
	void escreverFIM () {
		...
	}
	//rush com include na putchar
	escreverX ()
	int contadorY = 1
	WHILE (contadorY < variavelY) {
		escreverY ()
		contadorY++
	}
	IF (variavelY != 1) {
		escreverFIM ()
	}
	//main com includa na rush
	rush(5,1)


# C00
<!-- Para usar a norminette para checar o arquivo -->
norminette -R CheckForbiddenSourceHeader nome_do_arquivo.c

## Ex00
## Ex01
## Ex02
## Ex03
## Ex04
## Ex05
## Ex06
## Ex07
## Ex08

# Shell01
## Ex00
## Ex01
## Ex02
## Ex03
## Ex04
## Ex05
## Ex06
## Ex07
## Ex08

