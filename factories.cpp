#include "factories.hpp"

int populateFactories(vector<vector<int> > *matriz, int tipoFabrica) {
	srand(time(NULL)+tipoFabrica);
	int randX = 0, randY = 0;
	randX = rand() % 42;
	randY = rand() % 42;
	switch (tipoFabrica) {
	case 1:
		//Indústria de melhoramento genético de grãos com falta de energia elétrica nas incubadoras
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe uma fabrica ou item nesse local
		} else {
			matriz->at(randX).at(randY) = 15;
		}
		break;
	case 2:
		//Empresa de manutenção de cascos de embarcações
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe uma fabrica ou item nesse local
		} else {
			matriz->at(randX).at(randY) = 16;
		}
		break;
	case 3:
		//Indústria petrolífera com dutos entupidos
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe uma fabrica ou item nesse local
		} else {
			matriz->at(randX).at(randY) = 17;
		}
		break;
	case 4:
		//Fábrica de fundição com superaquecimento nas caldeiras
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe uma fabrica ou item nesse local
		} else {
			matriz->at(randX).at(randY) = 18;
		}
		break;
	case 5:
		//Indústria de vigas de aço com falta de braços mecânicos para moldagem
		if (matriz->at(randX).at(randY) >= 3) {
			//Já existe uma fabrica ou item nesse local
		} else {
			matriz->at(randX).at(randY) = 19;
		}
		break;
	default:
		break;
	}

	return 0;
}

