#include "items.hpp"

int populateItems(vector<vector<int> > *matriz, int qtdItems, int tipoItem) {
	srand (time(NULL));
	int randX = 0,randY = 0,i=0;
	while (i != qtdItems) {
		randX = rand()%42;
		randY = rand()%42;
		switch (tipoItem) {
			case 1:
			//baterias de carga elétrica
			if (matriz->at(randX).at(randY) >= 3) {
				//Já existe uma fabrica ou item nesse local
				i--;
			} else {
				matriz->at(randX).at(randY) = 10;
			}
			break;
			case 2:
			//braços de solda
			if (matriz->at(randX).at(randY) >= 3) {
				//Já existe uma fabrica ou item nesse local
				i--;
			} else {
				matriz->at(randX).at(randY) = 11;
			}
			break;
			case 3:
			//bombas de sucção
			if (matriz->at(randX).at(randY) >= 3) {
				//Já existe uma fabrica ou item nesse local
				i--;
			} else {
				matriz->at(randX).at(randY) = 12;
			}
			break;
			case 4:
			//dispositivos de refrigeração
			if (matriz->at(randX).at(randY) >= 3) {
				//Já existe uma fabrica ou item nesse local
				i--;
			} else {
				matriz->at(randX).at(randY) = 13;
			}
			break;
			case 5:
			//braços pneumáticos
			if (matriz->at(randX).at(randY) >= 3) {
				//Já existe uma fabrica ou item nesse local
				i--;
			} else {
				matriz->at(randX).at(randY) = 14;
			}
			break;
			default:
			break;
		}
		i++;
	}
	return 0;
}

