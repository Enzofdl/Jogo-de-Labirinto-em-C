#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"

Grafo *criaGrafo(int v)
{
    Grafo *g = (Grafo *)malloc(sizeof(Grafo));
    g->vertices = v;
    g->arestas = 0;
    g->adj = (Vertice *)malloc(v*sizeof(Vertice));

    for(int i = 0 ; i < v ; i++)
    {
        g->adj[i].head=NULL;
    }
    return(g);
}

Adjacencia *criaAdjacencia(int v)

bool criaAresta(Grafo *gr, int vi, int vf)



