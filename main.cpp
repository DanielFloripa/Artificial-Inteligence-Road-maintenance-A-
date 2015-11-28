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
	populateItems(&matriz,20,1); //20 baterias de carga elétrica
	populateItems(&matriz,10,2); //10 braços de solda
	populateItems(&matriz,8,3); //8 bombas de sucção
	populateItems(&matriz,6,4); //6 dispositivos de refrigeração
	populateItems(&matriz,4,5); //4 braços pneumáticos
	//buscaA(&matriz,10,10,20,20);
	showLand(matriz);
	interfaceGrafica(matriz);
	return 0;
}




