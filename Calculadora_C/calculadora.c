#include <stdio.h>

int main()
{
    int opcao;
    int caractere;
    double primeiroNumero;
    double segundoNumero;

    do {
        opcao = -1;
        printf("\n=== Calculadora ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            if (feof(stdin)) {
                break;
            } else {
                printf("Entrada invalida. Digite o numero de uma opcao.\n");
                while ((caractere = getchar()) != '\n' && caractere != EOF) {
                }
            }
        } else {
            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }

            if (opcao == 0) {
                printf("Encerrando a calculadora.\n");
                break;
            } else if (opcao < 1 || opcao > 4) {
                printf("Opcao invalida. Escolha um numero de 0 a 4.\n");
            } else {
                printf("Digite o primeiro numero: ");
                if (scanf("%lf", &primeiroNumero) != 1) {
                    if (feof(stdin)) {
                        break;
                    } else {
                        printf("Entrada invalida. Digite um numero.\n");
                        while ((caractere = getchar()) != '\n' && caractere != EOF) {
                        }
                    }
                } else {
                    while ((caractere = getchar()) != '\n' && caractere != EOF) {
                    }

                    printf("Digite o segundo numero: ");
                    if (scanf("%lf", &segundoNumero) != 1) {
                        if (feof(stdin)) {
                            break;
                        } else {
                            printf("Entrada invalida. Digite um numero.\n");
                            while ((caractere = getchar()) != '\n' && caractere != EOF) {
                            }
                        }
                    } else {
                        while ((caractere = getchar()) != '\n' && caractere != EOF) {
                        }

                        if (opcao == 1) {
                            printf("Resultado: %.2f\n", primeiroNumero + segundoNumero);
                        } else if (opcao == 2) {
                            printf("Resultado: %.2f\n", primeiroNumero - segundoNumero);
                        } else if (opcao == 3) {
                            printf("Resultado: %.2f\n", primeiroNumero * segundoNumero);
                        } else if (segundoNumero == 0.0) {
                            printf("Erro: nao e possivel dividir por zero.\n");
                        } else {
                            printf("Resultado: %.2f\n", primeiroNumero / segundoNumero);
                        }
                    }
                }
            }
        }
    } while (opcao != 0);

    return 0;
}
