#include "robot.hpp"

int robot(vector<vector<int> > *matriz, int *positionRobotX,
		int *positionRobotY) {
	srand(time(NULL) + 1);
	int randX = 0, randY = 0, flag = 0;

	while (flag == 0) {
		randX = rand() % 42;
		randY = rand() % 42;
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe algo aqui
		} else {
			matriz->at(randX).at(randY) = 20;
			*positionRobotX = randX;
			*positionRobotY = randY;
			flag = 1;
		}
	}
	return 0;
}

int moveRobot(vector<vector<int> > *matriz,
		vector<vector<int> > *matrizMovimentos, int positionRobotX,
		int positionRobotY) {
	int iAux = positionRobotX,jAux = positionRobotY;
	//buscaA(matrizMovimentos, positionRobotX, positionRobotY, 20, 20);

	direcao = rand()%4;
	switch ((int) direcao) {
	case 1:
		iAux--;
		if (formigas[var].i == 0)
			iAux = tamMatrizIAux;
		break;
	case 3:
		jAux--;
		if (formigas[var].j == 0)
			jAux = tamMatrizJAux;
		break;
	case 4:
		jAux++;
		if (formigas[var].j == tamMatrizJAux)
			jAux = 0;
		break;
	case 6:
		iAux++;
		if (formigas[var].i == tamMatrizIAux)
			iAux = 0;
		break;
	default:
		break;
	}
	switch (direcao) {
	case 1:
		formigas[var].i = iAux;
		break;
	case 3:
		formigas[var].j = jAux;
		break;
	case 4:
		formigas[var].j = jAux;
		break;
	case 6:
		formigas[var].i = iAux;
		break;
	default:
		break;
	}

	return 0;

}

