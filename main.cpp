/*
 * main.cpp
 *
 *  Created on: 28 de set de 2015
 *      Author: dekonunes
 */
#include "main.hpp"


int main(int argc, char **argv) {
	//int tipoBusca = atoi(argv[1]);
	vector<vector<int> > matriz;
	createLand(&matriz);
	//showLand(matriz);
	//buscaLargura(&matriz,10,10,20,20);
	//buscaProfundidade(&matriz,10,10,20,20);
	//buscaCustoUniforme(&matriz,10,10,20,20);
	buscaA(&matriz,10,10,20,20);
	showLand(matriz);
	interfaceGrafica(matriz);
	return 0;
}




