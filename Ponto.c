
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //  arquivo '.H' - vai ficar os meus prototipos
#include <stdio.h>

struct ponto    
{
    float x;
    float y;
};


int main()
{
    float d;
    float *p, *q;

    p = pto_cria(10, 21);
    q = pto_cria(7,25);

    d = pto_distancia(p,q);

    printf("distancia entre pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);

    
    return 0;
}

// Aloca e retornar um ponto de cordenadas para os meus 'x' e 'y'
Ponto* pto_cria(float x, float y) // Ponto - é um ponteiro, no qual tenho que fazer uma alocaçao com ele
{
    Ponto *p =  (Ponto*)malloc(sizeof(Ponto));// alocando um espaço para guarda x e y
    if(p != NULL)
    {
        // atriburi valores as meus pontos
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(Ponto* p)
{
    free(p);
}

void pto_acessa(Ponto* p, float* x, float* y)
{
    *x  = p->x;
    *y = p->y;
}

void pto_atribui(Ponto* p, float x, float y)
{
    p->x = x;
    p->y = y;
}

float pto_distancia(Ponto* p1, Ponto* p2)
{
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}


