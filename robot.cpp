#include "robot.hpp"

int robot(vector<vector<int> > *matriz) {
	srand(time(NULL) + 1);
	int randX = 0, randY = 0, flag = 0;

	while (flag == 0) {
		randX = rand() % 42;
		randY = rand() % 42;
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe algo aqui
		} else {
			matriz->at(randX).at(randY) = 20;
			flag = 1;
		}
	}
	return 0;
}

int moveRobot(vector<vector<int> > *matriz,
		vector<vector<int> > *matrizMovimentos) {
	srand(time(NULL) + 5);
	int randX = 0, randY = 0, flag = 0;

	randX = rand() % 42;
	randY = rand() % 42;
	buscaA(matrizMovimentos, randX, randY, 20, 20);
	for (int i = 0; i < 47; ++i) {

	}

	return 0;

}

