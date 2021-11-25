// BIBLIOTECA

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//Declarar as variáveis


	char *nomePct [50] [100];
	char endereco [50] [100];
	char email [50] [100];
	char login [10] [100];
	char arquivo[1];


	char cpf[12] [100];
	char cep [12] [100];
	int tel [14] [100];
	int dtNascimento [8] [100];
	int dtCid [8] [100];
	int cid [10] [100];
	int senha [5] [100];


	int op [1];
	int op1 [1];



//inicio do main --- principal----

int main ()

{


    char login[15] = "Enfermagem";
    char login1[15];
    char senha[15] = "14521";
    char senha1[15];


 printf("\n");
    printf( "-------------------------------------------------------------- \n \n");
	printf("Digite seu Login: ");
    scanf("%s",login1);
    printf("Senha: ");
    scanf("%s",senha1);
 printf("\n");
    printf( "-------------------------------------------------------------- \n \n");


	 if  ((senha1 == senha) && (login1 == login));
	{


	printf("%"                   "BEM VINDO"                            "\n\n");
	printf("\n\n"  "Sistema de Cadastro de Pacientes com Covid-19 - SCPC" "\n\n");
    printf( "---------------------------------------------------------------\n");

	               printf("Escolha uma opção:  \n\n");

	printf("1- Cadastrar um(a) novo(a) paciente  \n\n");
	printf("0- Sair	 \n\n");
    printf("-------------------------------------------------------------- \n \n");

    scanf ("%d", &op);


    	while(*op==1) { // inicio op cadastro

				printf("\n \n");

            printf("\n""Digite o nome do paciente:""\n");
				getchar();
				scanf ("%s",&nomePct);

	     		printf("\n""Digite o CPF: ""\n");
				getchar();
				scanf ("%s", &cpf);
		        printf("\n \n");

		     	printf("\n""Digite um telefone:\n");
			 	getchar();
				scanf ("%i", &tel );
			 	printf("\n \n");

			printf("\n""Digite a data de nascimento: \n");
			 	getchar();
				scanf ("%s", &dtNascimento );
			  	printf("\n \n");

			printf("\n""Digite um endereco: \n");
			 	getchar();
				scanf ("%s", &endereco );
			 	printf("\n \n");

            printf("\n""Digite o CEP: \n");
			 	getchar();
				scanf ("%s", &cep );
			 	printf("\n \n");


			 printf("\n""Digite um e-mail: \n");
			 	getchar();
				scanf ("%s", &email);
			 	printf("\n \n");


		printf("------- Informacoes sobre o quadro clinico do paciente ----------- \n");
		printf("\n \f");

			printf("\n""Informe o diagnostico: \n");
			 	scanf ("%s", &cid );
			 	getchar();
			 	printf("\n \n");

			printf("\n""Informe a data do diagnostico: \n");
			 	scanf ("%s", &dtCid );
			 	getchar();
			 	printf("\n \n");
			 	system("pause");

			printf("\n""Digite 1 para cadastrar um novo paciente ou digite 2 para gerar arquivo: \n");
				scanf ("%d", &op);
				getchar();
				printf("\n \n");

            continue;

} // fim if cadastrar
        if(*op==2){


			printf("\n  \n"" **   CONFIRMA GERAR O ARQUIVO ? (S/N)  **  \n   \n");
			scanf ("%c", &arquivo);


			if(*arquivo == 's'){


			FILE *pont_arq;

   		pont_arq = fopen("arquivo.txt", "a"); //abrindo o arquivo

   		fprintf(pont_arq,"\n" "CPF: " "%s""\nCEP: " "%s" "\n", *cpf, *cep);

                   fclose(pont_arq);   // fechando arquivo

   			printf("O arquivo foi criado com sucesso!"); //mensagem para o usuário

   			getch();

 			system("pause");
  			return(0);

	} //fim do if arquivo
			else {
				system("exit");
			}

} // fim do if listar e gerar arquivo

		if (*op==0){
			printf("\n -------------------------------------------- \n");
			printf("\n  \nSaindo......\n  \n");
			system("exit");

}//fim do if sair

		if (*op >=4){
			printf("\n\n  Opção inválida!! \n\n");
			system("exit");

} // fim do if opcao invalida

else
		{
 		printf("\n \n -------------------------------------------- \n \n");
		printf("\n Usuario e/ou senha inválido(a).\n");

		system("exit");

} //fim do else invalido

}//fim if login

} // fim do main
