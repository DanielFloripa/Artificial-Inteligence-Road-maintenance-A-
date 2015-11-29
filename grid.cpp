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
			switch (matriz.at(i).at(j)) {
			case 1:
				cout << "\033[1;34m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 2:
				cout << "\033[1;35m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 3:
				cout << "\033[1;32m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 4:
				cout << "\033[1;33m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 5:
				cout << "\033[1;35m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 6:
				cout << "\033[1;31m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 7:
				cout << "\033[1;37m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 8:
				cout << "\033[1;38m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 9:
				cout << "\033[1;39m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 10:
				cout << "\033[1;40m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 11:
				cout << "\033[1;41m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 12:
				cout << "\033[1;42m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 13:
				cout << "\033[1;43m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 14:
				cout << "\033[1;44m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 15:
				cout << "\033[1;45m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 16:
				cout << "\033[1;46m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 17:
				cout << "\033[1;47m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 18:
				cout << "\033[1;48m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 19:
				cout << "\033[1;49m" << matriz.at(i).at(j) << "\033[0m";
				break;
			case 20:
				cout << "\033[1;46m" << matriz.at(i).at(j) << "\033[0m";
				break;
			default:
				cout << " ";
				break;

			}
		}
		cout << endl;
	}
}

