#include <iostream> 
#include <string.h> 
#include <conio.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
// Função para copiar strings
void copiarString(char destino[], const char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

// Função para aguardar o usuário pressionar Enter
void esperarEnter() {
    printf("Pressione Enter para voltar ao menu...");
    while (getchar() != '\n');  // Aguarda até encontrar um Enter
}

int main() {
		    setlocale(LC_ALL,"portuguese"); 
        const char* manualUsuario = 
    "Manual de Usuário - Sistema de Cadastro de Seguro de Veículos\n\n"
    "1. Introdução\n"
    "O Sistema de Cadastro de Seguro de Veículos é uma aplicação simples desenvolvida em linguagem C para permitir o cadastro e cálculo de seguro para veículos automotores. Este manual fornece instruções detalhadas sobre como utilizar o sistema.\n\n"
    "2. Requisitos do Sistema\n"
    "Para utilizar o Sistema de Cadastro de Seguro de Veículos, é necessário ter um compilador C instalado no seu sistema operacional.\n\n"
    "3. Iniciando o Sistema\n"
    "Após compilar e executar o código fornecido, o sistema exibirá um menu com as seguintes opções:\n\n"
    "- [1] Manual de Uso do Sistema\n"
    "- [2] Cadastro de seguro\n"
    "- [3] Sair do sistema\n\n"
    "4. Manual de Uso do Sistema\n"
    "Esta opção não possui funcionalidade implementada no momento. No entanto, este manual serve como guia para o uso adequado do sistema.\n\n"
    "5. Cadastro de Seguro\n"
    "Ao selecionar a opção [2] Cadastro de seguro, o sistema solicitará uma série de informações para calcular o valor do seguro. As informações solicitadas são:\n\n"
    "- Nome do usuário\n"
    "- Idade do usuário\n"
    "- Informação sobre deficiência\n"
    "- CPF\n"
    "- Estado\n"
    "- CEP\n"
    "- Email\n"
    "- Número de telefone\n"
    "- Profissão\n"
    "- CNH\n"
    "- Forma de pagamento\n\n"
    "Em seguida, o sistema pedirá informações sobre o veículo, incluindo:\n\n"
    "- Tipo/Modelo do veículo\n"
    "- Placa do veículo\n"
    "- Ano do veículo\n"
    "- Marca do veículo\n"
    "- Local onde o veículo é guardado\n"
    "- Uso do veículo\n"
    "- Informações do condutor principal (idade, sexo, estado civil)\n\n"
    "O sistema permite cadastrar até 5 veículos por consulta.\n\n"
    "6. Visualizando os Dados\n"
    "Após fornecer todas as informações solicitadas, o sistema exibirá os dados dos veículos cadastrados, incluindo os detalhes do seguro e o valor total do seguro.\n\n"
    "7. Encerrando o Programa\n"
    "Ao finalizar o processo de cadastro e visualização dos dados, o sistema oferecerá a opção de realizar outra consulta ou sair do programa.\n\n"
    "8. Observações\n"
    "- Certifique-se de inserir as informações corretamente para obter resultados precisos.\n"
    "- Este sistema não armazena os dados fornecidos após o término da execução. Todos os dados são perdidos quando o programa é encerrado.\n"
    "- Caso encontre algum problema ou tenha dúvidas, consulte este manual ou entre em contato com o desenvolvedor do sistema.";

    int continuarPrograma = 1;

    while (continuarPrograma) {
        int quantidadeVeiculos = 0;
        char tipoModelo[5][50];
        char placa[5][10];
        int ano[5];
        char marca[5][50];
        char localGuardado[5][20];
        char usoVeiculo[5][20];
        char condutorPrincipal[5][100];
        char Nome[50], Estado[30], Email[60], Profissao[35], Forma_de_Pagamento[20], Premio_Seguro[25], CID[5];
        int Idade, CEP[10], CPF[12], Numero_de_Telefone[16], CNH[14], Estado_Civil[15], Deficiencia;
        float valorSeguro = 1000.0;
        int op;
				//menu bonito
		    printf("\n\n");
    printf("         _______ \n");
    printf("        //  ||\\ \n");
    printf("  _____//___||_\\ \\___          Bem-Vindo\n");
    printf("  )  _          _    \\     Ao sistema de cadastro de seguros \n");
    printf("  |_/ \\________/ \\___|   \n");
    printf("____\\_/________\\_/____  \n\n\n");
        printf("Escolha uma opção: \n");
        printf("[1]Manual de Uso do Sistema\n");
        printf("[2] Cadastro de seguro \n");
        printf("[3] Sair do sistema\n");
        printf("Selecione uma das opções para continuar:");
        scanf("%d", &op);
		getchar(); // Limpa o buffer após o scanf
		
        switch (op) {
            case 1:
             // Exibe o manual de usuário
                printf("%s\n", manualUsuario);
                esperarEnter(); // Aguarda o usuário pressionar Enter
                break;

            case 2:
				        printf("-------------------------------------------------------------------------\n");
        printf("Prezado, digite seu nome: \n");
        scanf("%50s", Nome);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe sua idade: ");
        scanf("%d", &Idade);
        printf("-------------------------------------------------------------------------\n");
        printf("Você e portador de alguma Deficiencia? \n Sim - [1] \n Nao - [2] \nEscolha a resposta que te define:");
        scanf("%d", &Deficiencia);
        getchar();

        if (Deficiencia == 1) {
            printf("Informe seu CID: ");
            scanf("%5s", CID);
            valorSeguro += 150.0; // Incrementa o valor do seguro para deficientes
             } 
			 else {
            printf("Você não é portador de deficiência.\n");
            valorSeguro += 50.0; // Incrementa o valor do seguro para não deficientes
        }

        printf("-------------------------------------------------------------------------\n");
        printf("Informe seu CPF: ");
        scanf("%12s", &CPF);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe o Estado em que mora: ");
        scanf("%30s", Estado);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe o seu CEP: ");
        scanf("%10s", &CEP);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe seu Email: ");
        scanf("%60s", Email);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe seu Número de Telefone: ");
        scanf("%15s", &Numero_de_Telefone);
        printf("-------------------------------------------------------------------------\n");
        printf("Informe sua Profissão: ");
        scanf("%35s", Profissao);
        printf("-------------------------------------------------------------------------\n");
        printf("Digite o número da sua CNH: ");
        scanf("%14s", &CNH);
        printf("-------------------------------------------------------------------------\n");
        printf("Digite qual será a Forma de Pagamento: ");
        scanf("%20s", Forma_de_Pagamento);
        printf("-------------------------------------------------------------------------\n");


        while (quantidadeVeiculos < 5) {
            // Coleta do Tipo/Modelo do veículo
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Tipo/Modelo do veículo: ");
            scanf(" %[^\n]%*c", tipoModelo[quantidadeVeiculos]);

            // Coleta da Placa do veículo
            printf("-------------------------------------------------------------------------\n");
            printf("Digite a Placa do veículo: ");
            scanf(" %[^\n]%*c", placa[quantidadeVeiculos]);

            // Coleta do Ano do veículo
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Ano do veículo: ");
            scanf("%d", &ano[quantidadeVeiculos]);
            getchar();

            // Coleta da Marca do veículo
            printf("-------------------------------------------------------------------------\n");
            printf("Digite a Marca do veículo: ");
            scanf(" %[^\n]%*c", marca[quantidadeVeiculos]);

            // Coleta do Local onde o veículo é guardado
            int opcao;
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Local onde o veículo é guardado:\n1. Garagem fechada (+R$100)\n2. Estacionamento na rua (+R$150)\nEscolha uma opção: ");
            scanf("%d", &opcao);
            getchar();

            if (opcao == 1) {
                copiarString(localGuardado[quantidadeVeiculos], "Garagem fechada");
                valorSeguro += 100.0; // Incrementa o valor do seguro
            } 
			else {
                copiarString(localGuardado[quantidadeVeiculos], "Estacionamento na rua");
                valorSeguro += 150.0; // Incrementa o valor do seguro
            }

            // Coleta do Uso do veículo
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Uso do veículo:\n1. Particular (+R$50)\n2. Lazer (+R$100)\n3. Trabalho (+R$150)\nEscolha uma opção: ");
            scanf("%d", &opcao);
            getchar();

            if (opcao == 1) {
                copiarString(usoVeiculo[quantidadeVeiculos], "Particular");
                valorSeguro += 50.0; // Incrementa o valor do seguro
            } else if (opcao == 2) {
                copiarString(usoVeiculo[quantidadeVeiculos], "Lazer");
                valorSeguro += 100.0; // Incrementa o valor do seguro
            } else {
                copiarString(usoVeiculo[quantidadeVeiculos], "Trabalho");
                valorSeguro += 150.0; // Incrementa o valor do seguro
            }

            // Coleta das informações do condutor principal
            char idade[10], sexo[10], estadoCivil[20];
            printf("-------------------------------------------------------------------------\n");
            printf("Digite a Idade do condutor princípal: ");
            scanf(" %[^\n]%*c", idade);
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Sexo do condutor princípal: ");
            scanf(" %[^\n]%*c", sexo);
            printf("-------------------------------------------------------------------------\n");
            printf("Digite o Estado Civil do condutor princípal (Solteiro/Casado): ");
            scanf(" %[^\n]%*c", estadoCivil);

            if (strcmp(estadoCivil, "Solteiro") == 0) {
                valorSeguro += 100.0; // Incrementa o valor do seguro para solteiros
            } else if (strcmp(estadoCivil, "Casado") == 0) {
                valorSeguro += 50.0; // Incrementa o valor do seguro para casados
            }

            // Concatena as informações do condutor principal em uma string
            snprintf(condutorPrincipal[quantidadeVeiculos], sizeof(condutorPrincipal[quantidadeVeiculos]), "Idade: %s, Sexo: %s, Estado Civil: %s", idade, sexo, estadoCivil);

            quantidadeVeiculos++;

            if (quantidadeVeiculos < 5) {
                // Pergunta ao usuário se deseja adicionar outro veículo
                char continuar;
                printf("-------------------------------------------------------------------------\n");
                printf("Você quer adicionar outro veículo? (S/N): ");
                scanf(" %c", &continuar);
                getchar();

                if (continuar == 'N' || continuar == 'n') {
                    break;
                }
            }
        }

        // Exibe os dados dos veículos coletados
        printf("-------------------------------------------------------------------------\n");
        printf("\nExibindo dados dos veículos coletados:\n");
        for (int i = 0; i < quantidadeVeiculos; i++) {
            printf("-------------------------------------------------------------------------\n");
            printf("\n--- Dados do Veículo %d ---\n", i + 1);
            printf("Tipo/Modelo: %s\n", tipoModelo[i]);
            printf("Placa: %s\n", placa[i]);
            printf("Ano: %d\n", ano[i]);
            printf("Marca: %s\n", marca[i]);
            printf("Local Guardado: %s\n", localGuardado[i]);
            printf("Uso do Veículo: %s\n", usoVeiculo[i]);
            printf("Condutor Principal: %s\n", condutorPrincipal[i]);
            printf("-------------------------------------------------------------------------\n");
        }

        // Exibe o valor total do seguro
        printf("\nValor total do seguro: R$%.2f\n", valorSeguro);

        // Pergunta ao usuário se deseja continuar ou encerrar o programa
        char continuar;
        printf("-------------------------------------------------------------------------\n");
        printf("Você deseja realizar outra consulta? (S/N): ");
        scanf(" %c", &continuar);
        getchar();

        if (continuar == 'N' || continuar == 'n') {
            continuarPrograma = 0;
        }
    

                break;

            case 3:
                continuarPrograma = 0;
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
