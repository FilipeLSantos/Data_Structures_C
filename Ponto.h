// arquivo Ponto.h
typedef struct ponto Ponto;

// criar um novo ponto
Ponto* pto_cria(float x, float y);

// liberar um ponto - libera a memoria na alocaçao  
void pto_libera(Ponto* p);

// acessa os valores 'x' e 'y' de um ponto 
void pto_acessa(Ponto* p, float* x, float* y);

// atribui valores 'x' e 'y' a um ponto 
void pto_atribui(Ponto* p, float x, float y);

// calcula a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);
