#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

void generateTitle()
{
    // ASCI ART GERADA EM https://patorjk.com/software/taag/#p=display&f=Rectangles&t=Super%20Trunfo
    printf("\n");
    printf(" _____                    _____             ___     \n");
    printf("|   __|_ _ ___ ___ ___   |_   _|___ _ _ ___|  _|___ \n");
    printf("|__   | | | . | -_|  _|    | | |  _| | |   |  _| . |\n");
    printf("|_____|___|  _|___|_|      |_| |_| |___|_|_|_| |___|\n");
    printf("          |_|                                       \n");
    printf("\n");
}

int main()
{
    /**
     * Definição de variáveis utilizadas no projeto
     */
    float cidade_pontos_turisticos;

    float cidade_pib;
    float pib_per_capta;

    float cidade_area;
    float cidade_populacao;
    char cidade_nome[80];

    char estado_sigla[3];

    char carta_codigo[4]; // Código da carta (A01, A02, B01, B02)

    /**
     * Gera uma mensagem de bem vindo
     */
    generateTitle();

    /**
     * Solicita os dados ao usuário
     */
    printf("Informe o nome da cidade (Ex: Florianópolis): ");
    scanf(" %[^\n]", cidade_nome);

    printf("Informe a sigla do estado de '%s' (Ex: SC): ", cidade_nome);
    scanf("%2s", estado_sigla);

    printf("Informe a população de '%s': ", cidade_nome);
    scanf(" %f", &cidade_populacao);

    printf("Informe o PIB de '%s': ", cidade_nome);
    scanf(" %f", &cidade_pib);

    printf("Informe a área em KM2 de '%s': ", cidade_nome);
    scanf(" %f", &cidade_area);

    printf("Informe a quantidade de pontos turísticos de '%s': ", cidade_nome);
    scanf(" %f", &cidade_pontos_turisticos);

    printf("Por fim, o código da carta (Ex: A01, A02): ");
    scanf("%3s", carta_codigo);
    getchar();

    /**
     * Exibição dos resultados cadastrados.
     */
    printf("** Ótimo, você cadastrou sua carta com sucesso **\n\n");

    printf("Dados da carta cadastrada:\n");
    printf("- Código: %s\n", carta_codigo);
    printf("- Estado: %s\n", estado_sigla);
    printf("- Nome: %s\n", cidade_nome);
    printf("- População: %.0f\n", cidade_populacao);
    printf("- PIB: %.8f\n", cidade_pib);
    printf("- Área: %.4f km²\n", cidade_area);
    printf("- Pontos turísticos: %.0f\n", cidade_pontos_turisticos);

    return 0;
}
