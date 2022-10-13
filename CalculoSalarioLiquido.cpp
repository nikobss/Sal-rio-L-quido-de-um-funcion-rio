#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<locale.h>

float Tinss, Tir;
float qtdhoras, valorhora, salariobruto, inss, ir, salarioliq, horast;
char Nome[30];

main(){ 
setlocale(LC_ALL,"portuguese");
printf("Digite seu nome\n");
scanf("%s",&Nome);


printf("Digite a quantidade de horas trabalhadas\n");
scanf("%f",&horast);


printf("Qual o valor da sua hora trabalhada\n");
scanf("%f",&valorhora);

salariobruto = horast * valorhora;

printf("O salario bruto de %s e : %2.2f \n", Nome,salariobruto);

printf("Digite a porcentagem do seu INSS em decimal\n");
scanf("%f",&inss);



printf("Digite sua porcentagem de IR em decimal\n");
scanf("%f",&ir);

Tinss = (salariobruto * inss);

Tir = (salariobruto * ir);

salarioliq =  salariobruto - (Tinss + Tir);

printf("O salario liquido de %s eh: %f",Nome,salarioliq);



system("pause");







}

