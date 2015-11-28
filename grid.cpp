#include "grid.hpp"
#include "ParserCSV.hpp"

void createLand(vector<vector<int> > *matriz) {
	string file = "terreno.csv";
	CsvFile *land = new CsvFile(file.c_str(), ' ', 1);
	int tamMatriz = land->lines;

	// aloca matriz;
	for (int i = 0; i < tamMatriz; i++) {
		vector<int> row;
		for (int j = 0; j < tamMatriz; j++)
			row.push_back(stoi(land->info[j][i]));
		matriz->push_back(row);
	}

}

void showLand(vector<vector<int> > matriz) {
	for (int i = 0; i < 42; ++i) {
		for (int j = 0; j < 42; ++j) {
			if (matriz.at(i).at(j) == 1) {
				cout << "\033[1;34m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 2) {
				cout << "\033[1;35m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 3) {
				cout << "\033[1;32m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 4) {
				cout << "\033[1;33m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 5) {
				cout << "\033[1;35m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 6) {
				cout << "\033[1;31m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 7) {
				cout << "\033[1;37m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 8) {
				cout << "\033[1;38m" << matriz.at(i).at(j) << "\033[0m";
			} else if (matriz.at(i).at(j) == 9) {
				cout << "\033[1;39m" << matriz.at(i).at(j) << "\033[0m";
			} else {
				//cout << matriz->at(i).at(j) ;
				cout << " ";
			}
		}
		cout << endl;
	}
}

