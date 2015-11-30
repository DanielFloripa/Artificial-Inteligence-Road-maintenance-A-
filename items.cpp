#include "items.hpp"

int populateItems(vector<vector<int> > *matriz, int qtdItems, int tipoItem) {
	srand (time(NULL));int randX = 0,randY = 0,i=0;
	while (i != qtdItems) {
		randX = rand()%42;
		randY = rand()%42;
		switch (tipoItem) {
			case 1:
			//baterias de carga elétrica
			if (matriz->at(randX).at(randY) == 0) {
				matriz->at(randX).at(randY) = 10; //inclue somente no campo grama
			} else {
				//Já existe uma fabrica ou item nesse local
				i--;
			}
			break;
			case 2:
			//braços de solda
			if (matriz->at(randX).at(randY) == 0) {
				matriz->at(randX).at(randY) = 11;
			} else {
				//Já existe uma fabrica ou item nesse local
				i--;
			}
			break;
			case 3:
			//bombas de sucção
			if (matriz->at(randX).at(randY) == 0) {
				matriz->at(randX).at(randY) = 12;
			} else {
				//Já existe uma fabrica ou item nesse local
				i--;
			}
			break;
			case 4:
			//dispositivos de refrigeração
			if (matriz->at(randX).at(randY) == 0) {
				matriz->at(randX).at(randY) = 13;
			} else {
				//Já existe uma fabrica ou item nesse local
				i--;
			}
			break;
			case 5:
			//braços pneumáticos
			if (matriz->at(randX).at(randY) == 0) {
				matriz->at(randX).at(randY) = 14;
			} else {
				//Já existe uma fabrica ou item nesse local
				i--;
			}
			break;
			default:
			break;
		}
		i++;
	}
	return 0;
}

