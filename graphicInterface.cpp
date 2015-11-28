/*
 * graphicInterface.cpp
 *
 *  Created on: 7 de set de 2015
 *      Author: deko
 */
#include "graphicInterface.hpp"

void interfaceGrafica(vector<vector<int> > matriz) {
	bool flag;
	sf::RenderWindow *window;
	std::vector<std::vector<sf::RectangleShape> > grid;
	window = new sf::RenderWindow(sf::VideoMode(resolucao, resolucao),
			"Blind Pursuit!");
	window->setPosition(sf::Vector2i(700 / 2, 50));

	for (int i = 0; i < 42; ++i) {
		vector<sf::RectangleShape> row;
		for (int j = 0; j < 42; ++j) {
			row.push_back(
					sf::RectangleShape(
							sf::Vector2f((resolucao / 42), (resolucao / 42))));
			row[j].setOutlineThickness(2);
			row[j].setOutlineColor(sf::Color(0, 0, 0));
			row[j].setPosition(i * (resolucao / 42), j * (resolucao / 42));

			flag = false;
			if (!flag) {
				if (matriz.at(i).at(j) == 0)
					row[j].setFillColor(sf::Color(sf::Color(146, 208, 80)));
				else if (matriz.at(i).at(j) == 1)
					row[j].setFillColor(sf::Color(sf::Color(148, 138, 84)));
				else if (matriz.at(i).at(j) == 2)
					row[j].setFillColor(sf::Color(sf::Color(84, 141, 212)));
				else if (matriz.at(i).at(j) == 3)
					row[j].setFillColor(sf::Color(sf::Color(227, 108, 10)));
			}
		}
		grid.push_back(row);
	}
	update(matriz, window, grid);
	getchar();
}

void update(vector<vector<int> > matriz, sf::RenderWindow *window,
		std::vector<std::vector<sf::RectangleShape> > grid) {
	//buscaProfundidade(&matriz,10,10);
	updateColor(matriz, &grid);
	for (int i = 0; i < 42; i++)
		for (int j = 0; j < 42; j++)
			window->draw(grid.at(i).at(j));
	window->display();
}

void updateColor(vector<vector<int> > matriz,
		std::vector<std::vector<sf::RectangleShape> > *grid) {
	for (int i = 0; i < 42; i++) {
		for (int j = 0; j < 42; j++) {
			if (matriz.at(i).at(j) == 0) {
				grid->at(i).at(j).setFillColor(
						sf::Color(sf::Color(153, 204, 50))); // formiga sem item
			} else if (matriz.at(i).at(j) == 1) {
				grid->at(i).at(j).setFillColor(
						sf::Color(sf::Color(184, 115, 51))); // formiga com item
			} else if (matriz.at(i).at(j) == 2) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color::Blue));
			} else if (matriz.at(i).at(j) == 3) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color::Red));
			} else if (matriz.at(i).at(j) == 4) {
				grid->at(i).at(j).setFillColor(
						sf::Color(sf::Color(20, 133, 79)));
			} else if (matriz.at(i).at(j) == 5) {
				grid->at(i).at(j).setFillColor(
						sf::Color(sf::Color(139, 109, 81)));
			} else if (matriz.at(i).at(j) == 6) {
				grid->at(i).at(j).setFillColor(
						sf::Color(sf::Color(157, 155, 255)));
			} else if (matriz.at(i).at(j) == 7) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color(0, 100, 0)));
			} else if (matriz.at(i).at(j) == 8) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color(255, 146, 0)));
			} else if (matriz.at(i).at(j) == -1) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color::Black));
			} else if (matriz.at(i).at(j) == -2) {
				grid->at(i).at(j).setFillColor(sf::Color(sf::Color::White));
			}
		}
	}
}

