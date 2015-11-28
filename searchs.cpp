/*
 * searchs.cpp
 *
 *  Created on: 6 de out de 2015
 *      Author: dekonunes
 */

#include "searchs.hpp"

void buscaA(vector<vector<int> > *matriz, int beginX, int beginY, int targetX,
		int targetY) {
	vector<Node*> pesquisa;
	int custoAC;
	double custoD;
	Node *dad = new Node(beginX, beginY, Cost(matriz, beginX, beginY),
			(distanciaEuclid(beginX, beginY, targetX, targetY)
					+ Cost(matriz, beginX, beginY)), 0);
	pesquisa.push_back(dad);
	matriz->at(beginX).at(beginY) += 4;

	int xElem = dad->getX();
	int yElem = dad->getY();

	int nosVisitados = 1;
	unsigned int j = 0;

	for (int i = 0; true; i++) {
		dad = pesquisa[i];
		xElem = dad->getX();
		yElem = dad->getY();
		nosVisitados++;
		if (xElem == targetX && yElem == targetY) {

			break;
		}
		if (yElem - 1 >= 0 && matriz->at(xElem).at(yElem - 1) <= 2) { 	// norte
			custoAC = dad->getcost() + Cost(matriz, xElem, yElem - 1);
			custoD = custoAC
					+ distanciaEuclid(xElem, yElem - 1, targetX, targetY);
			for (j = i + 1; j <= pesquisa.size(); j++) {
				if (j == pesquisa.size()) {
					pesquisa.push_back(
							new Node(xElem, yElem - 1, custoAC, custoD, dad));
					break;
				} else {
					if (pesquisa[j]->getcostD() > custoD) {
						pesquisa.insert(pesquisa.begin() + j,
								new Node(xElem, yElem - 1, custoAC, custoD,
										dad));
						break;
					}
				}
			}
			matriz->at(xElem).at(yElem - 1) += 4;

		}
		if (xElem + 1 < 42 && matriz->at(xElem + 1).at(yElem) <= 2) { // leste
			custoAC = dad->getcost() + Cost(matriz, xElem + 1, yElem);
			custoD = custoAC
					+ distanciaEuclid(xElem + 1, yElem, targetX, targetY);
			for (j = i + 1; j <= pesquisa.size(); j++) {
				if (j == pesquisa.size()) {
					pesquisa.push_back(
							new Node(xElem + 1, yElem, custoAC, custoD, dad));
					break;
				} else {
					if (pesquisa[j]->getcostD() > custoD) {
						pesquisa.insert(pesquisa.begin() + j,
								new Node(xElem + 1, yElem, custoAC, custoD,
										dad));
						break;
					}
				}
			}
			matriz->at(xElem + 1).at(yElem) += 4;
		}
		if (yElem + 1 < 42 && matriz->at(xElem).at(yElem + 1) <= 2) { // sul
			custoAC = dad->getcost() + Cost(matriz, xElem, yElem + 1);
			custoD = custoAC
					+ distanciaEuclid(xElem, yElem + 1, targetX, targetY);
			for (j = i + 1; j <= pesquisa.size(); j++) {
				if (j == pesquisa.size()) {
					pesquisa.push_back(
							new Node(xElem, yElem + 1, custoAC, custoD, dad));
					break;
				} else {
					if (pesquisa[j]->getcostD() > custoD) {
						pesquisa.insert(pesquisa.begin() + j,
								new Node(xElem, yElem + 1, custoAC, custoD,
										dad));
						break;
					}
				}

			}
			matriz->at(xElem).at(yElem + 1) += 4;

		}
		if (xElem - 1 >= 0 && matriz->at(xElem - 1).at(yElem) <= 2) { 	// oeste
			custoAC = dad->getcost() + Cost(matriz, xElem - 1, yElem);
			custoD = custoAC
					+ distanciaEuclid(xElem - 1, yElem, targetX, targetY);
			for (j = i + 1; j <= pesquisa.size(); j++) {
				if (j == pesquisa.size()) {
					pesquisa.push_back(
							new Node(xElem - 1, yElem, custoAC, custoD, dad));
					break;
				} else {
					if (pesquisa[j]->getcostD() > custoD) {
						pesquisa.insert(pesquisa.begin() + j,
								new Node(xElem - 1, yElem, custoAC, custoD,
										dad));
						break;
					}
				}

			}
			matriz->at(xElem - 1).at(yElem) += 4;

		}
	}

	Node *aux = dad;
	int custoFinal = aux->getcost();
	cout << "Custo Final:\t" << custoFinal << "\tnos visitados:\t"
			<< nosVisitados << endl;
	while (aux != NULL) {
		matriz->at(aux->getX()).at(aux->getY()) = 8;
		aux = aux->getDad();
	}
	matriz->at(beginX).at(beginY) = -2;
	matriz->at(targetX).at(targetY) = -1;
}

double distanciaEuclid(int x, int y, int xFinal, int yFinal) {
	return sqrt(pow(x - xFinal, 2) + pow(y - yFinal, 2));
}

int Cost(vector<vector<int> > *matriz, int x, int y) {
	int custo = matriz->at(x).at(y);
	switch (custo) {
	case 0:
		return 1;
	case 1:
		return 5;
	case 2:
		return 10;
	case 3:
		return 15;
	}
	return -1;
}

