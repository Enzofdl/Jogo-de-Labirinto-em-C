typedef struct no
{
    int ehfinal;
    int proximos;
    no* prox[proximos];
}no;

typedef struct grafo
{
    int qntvertices;
    int arestas;
    no *inicio;
    no* vertices;
}Grafo;

Grafo *criaGrafo(int qntnos);
no* criano(no* prox[], int proximos);

int criaAresta(Grafo *gr, int vi, int vf);
