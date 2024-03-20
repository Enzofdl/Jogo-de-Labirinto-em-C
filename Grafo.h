typedef struct adjacencia
{
    int vertice;
    struct adjacencia *prox;
}Adjacencia;

typedef struct vertice
{
    Adjacencia *head;
}Vertice;

typedef struct grafo
{
    int vertices;
    int arestas;
    Vertice *adj;
}Grafo;

Grafo *criaGrafo(int v);
Adjacencia *criaAdjacencia(int v);
int criaAresta(Grafo *gr, int vi, int vf);
