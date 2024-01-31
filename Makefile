all: clear ola

ola:
	@echo "compilando programa ola" 
	@gcc ola.c -o ola
	@echo "tornando programa executavel"
	@chmod +x ola
	@echo "execuntando programa ola"
	@./ola

clear:
	@echo "removendo programa ola"
	@rm ola

help:
	@echo "ola= copila e executa o programa ola"
	@echo "clear= limpa"
	@echo "all= executa o programa clear e ola"