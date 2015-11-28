/*
 * searchs.hpp
 *
 *  Created on: 6 de out de 2015
 *      Author: dekonunes
 */

#ifndef SRC_BLIND_PURSUIT_ROBOT_SEARCHS_HPP_
#define SRC_BLIND_PURSUIT_ROBOT_SEARCHS_HPP_

#include <vector>
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <algorithm>
#include <iterator>
#include "node.hpp"
#include "graphicInterface.hpp"
using namespace std;

void buscaProfundidade(vector<vector<int> > *, int, int, int, int);
void buscaLargura(vector<vector<int> > *, int, int, int, int);
void buscaLarguraC(vector<vector<int> > *, int, int, int, int);
void buscaCustoUniforme(vector<vector<int> > *, int, int, int, int);
void buscaA(vector<vector<int> > *, int, int, int, int);
double distanciaEuclid(int, int, int, int);
int Cost(vector<vector<int> > *, int, int);

#endif /* SRC_BLIND_PURSUIT_ROBOT_SEARCHS_HPP_ */
