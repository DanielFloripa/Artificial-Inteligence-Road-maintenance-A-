/*
 * main.cpp
 *
 *  Created on: 28 de set de 2015
 *      Author: dekonunes
 */
#include "main.hpp"

int main(int argc, char **argv) {
	//int tipoBusca = atoi(argv[1]);
	vector<vector<int> > matriz, matrizMovimentos;
	int positionRobotX = 0,positionRobotY = 0;
	createLand(&matriz);
	createLand(&matrizMovimentos);
	populateItems(&matriz, 20, 1); //20 baterias de carga elétrica
	populateItems(&matriz, 10, 2); //10 braços de solda
	populateItems(&matriz, 8, 3); //8 bombas de sucção
	populateItems(&matriz, 6, 4); //6 dispositivos de refrigeração
	populateItems(&matriz, 4, 5); //4 braços pneumáticos
	populateFactories(&matriz, 1); //Indústria de melhoramento genético de grãos com falta de energia elétrica nas incubadoras;
	populateFactories(&matriz, 2); //Empresa de manutenção de cascos de embarcações
	populateFactories(&matriz, 3); //Indústria petrolífera com dutos entupidos
	populateFactories(&matriz, 4); //Fábrica de fundição com superaquecimento nas caldeiras
	populateFactories(&matriz, 5); //Indústria de vigas de aço com falta de braços mecânicos para moldagem
	robot(&matriz,&positionRobotX,&positionRobotY); //20 é o robo
	for (int var = 0; var < 10; ++var) {
		moveRobot(&matriz,&matrizMovimentos,positionRobotX,positionRobotY);
		showLand(matriz);
		interfaceGrafica(matriz);
		getchar();
	}

	//buscaA(&matriz,10,10,20,20);
	showLand(matriz);
	interfaceGrafica(matriz);
	return 0;
}

