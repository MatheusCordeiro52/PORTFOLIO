#include <stdio.h>

void imprimirDirecao(){ //procedimento para imprimir a direção da peça
    printf("Movimentação da peça:\n"); printf("1. Direita:\n"); printf("2. Cima:\n"); printf("3. Esquerda:\n"); printf("4. Baixo:\n");
    
}
void imprimirDirecaoCavalo(){ //Procedimento para imprimir direção do cavalo
    printf("Movimentação da peça:\n"); //Saida para saber qual direção a peça se movimentará
    printf("1. Cima Direita:\n"); printf("2. Cima Esquerda:\n"); printf("3. Direita cima:\n"); printf("4. Esquerda Cima:\n"); printf("5. Direita Baixo\n"); printf("6. Esquerda Baixo\n"); printf("7. Baixo Direita\n"); printf("8. Baixo Esquerda\n");
}
void imprimirDirecaoBispo(){
    printf("Movimentação da peça:\n"); //Saida para saber qual direção a peça se movimentará
    printf("1.Diagonal para cima e direita:\n"); printf("2.Diagonal para cima e esquerda:\n"); printf("3.Diagonal para baixo e direita:\n"); printf("4.Diagonal para baixo e esquerda:\n");
}


void moverPecaDireita(int casas){//procedimento para imprimir direita caso usuario escolha direita
    if(casas > 0){
        printf("Direita\n");
        moverPecaDireita(casas-1);
    }
}
void moverPecaEsquerda(int casas){//procedimento para imprimir esquerda caso usuario escolha esquerda
    if(casas > 0){
        printf("Esquerda\n");
        moverPecaEsquerda(casas-1);
    }
}
void moverPecaCima(int casas){//procedimento para imprimir cima caso usuario escolha cima
    if(casas > 0){
        printf("Cima\n");
        moverPecaCima(casas-1);
    }
}
void moverPecaBaixo(int casas){//procedimento para imprimir baixo caso usuario escolha baixo
    if(casas > 0){
        printf("Baixo\n");
        moverPecaBaixo(casas-1);
    }
}

int main(){

    // Variaveis das peças
    int torre, bispo = 0, rainha, cavalo; 
    int casaTorre, casaBispo, casaRainha, movimentoCavalo = 1;
    int peca;

    // Escolha de qual peça mover
    printf("Qual peça deseja mover:\n"); printf("1.Torre:\n"); printf("2.Bispo:\n"); printf("3.Rainha:\n"); printf("4.Cavalo:\n"); printf("5.Sair\n"); scanf("%d", &peca);

    switch (peca) { //movimentação usando for
    case 1: //Saida para saber qual direção a peça se movimentará
        imprimirDirecao();
        scanf("%d", &torre);
        printf("Quantas casas a torre deve percorrer:\n"); // saida para saber quantas casas percorrer
        scanf("%d", &casaTorre);
        // bloco de código para mostrar resultado
        switch (torre){ 
        case 1:moverPecaDireita(casaTorre); break;
        case 2: moverPecaCima(casaTorre); break;
        case 3: moverPecaEsquerda(casaTorre); break;
        case 4: moverPecaBaixo(casaTorre); break;
        }

    case 2: // movimentação usando while
        imprimirDirecaoBispo();
        scanf("%d", &bispo);
        printf("Quantas casas o bispo deve percorrer:"); // saida para saber quantas casas percorrer
        scanf("%d", &casaBispo); 
        switch (bispo){ // bloco de código para mostrar resultado
        case 1:
            while (bispo <= casaBispo){//função para identificar quantas casas o usuario inseriu e imprimir cima
            for (int i = 0; i < 1; i++) {//função para identificar quantas casas o usuario inseriu e imprimir direita
                printf("cima\n"); }
            printf("Direita\n");
            bispo++; } break;
        case 2:
        while (bispo <= casaBispo){//função para identificar quantas casas o usuario inseriu e imprimir cima
            for (int i = 0; i < 1; i++) {//função para identificar quantas casas o usuario inseriu e imprimir Esquerda
                printf("cima\n"); }
            printf("Esquerda\n");
            bispo++; } break;
        case 3:
        while (bispo <= casaBispo){//função para identificar quantas casas o usuario inseriu e imprimir Baixo
            for (int i = 0; i < 1; i++) {//função para identificar quantas casas o usuario inseriu e imprimir Direita
                printf("Baixo\n"); }
            printf("Direita\n");
            bispo++; } break;
        case 4:
        while (bispo <= casaBispo){//função para identificar quantas casas o usuario inseriu e imprimir Baixo
            for (int i = 0; i < 1; i++) {//função para identificar quantas casas o usuario inseriu e imprimir Esquerda
                printf("Baixo\n"); }
            printf("Esquerda\n");
            bispo++; } break;
            }break;

    case 3:
    imprimirDirecao();
    scanf("%d", &rainha);

    printf("Quantas casas a rainha deve percorrer:"); // saida para saber quantas casas percorrer
    scanf("%d", &casaRainha);  

        switch (rainha) {   // bloco de código para mostrar resultado
        case 1: moverPecaDireita(casaRainha); break;
        case 2: moverPecaCima(casaRainha); break;
        case 3: moverPecaEsquerda(casaRainha); break;
        case 4: moverPecaBaixo(casaRainha); break;
        } 
        break;

    case 4:
    imprimirDirecaoCavalo();
    scanf("%d", &cavalo);
        switch (cavalo)
        {
        case 1: 
        while (movimentoCavalo <= 1) {
            for (int i = 0; i < 2; i++) { 
            printf("cima\n"); }
        printf("Direita\n");
        movimentoCavalo++; } break;
        case 2:
        while (movimentoCavalo <= 1){
            for (int i = 0; i < 2; i++) {
            printf("cima\n"); }
        printf("Esquerda\n");   
        movimentoCavalo++; } break;
        case 3:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Direita\n"); }
        printf("Cima\n");    
        movimentoCavalo++; } break;
        case 4:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Esquerda\n"); }
        printf("Cima\n");    
        movimentoCavalo++; } break;

        case 5:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Direita\n"); }
        printf("Baixo\n");    
        movimentoCavalo++; } break;

        case 6:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Esquerda\n"); }
        printf("Baixo\n");  
        movimentoCavalo++; } break;

        case 7:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); }
        printf("Direita\n");
        movimentoCavalo++; } break;

        case 8:
        while (movimentoCavalo <=1) {
            for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); }
        printf("Esquerda\n");  
        movimentoCavalo++; }break;      
        }
        break;
    }
    return 0;
}