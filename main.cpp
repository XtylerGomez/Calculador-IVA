#include "converter.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
	converter cv;

	if (argc == 1) {
		cout << "Utiliza el comando -a para consultar los comandos" << endl;
	}
	else {
		vector<string> argList;
		for (int i = 1; i < argc; i++) {
			argList.push_back(argv[i]);
		}
		if (argList[0] == "-a" || argList[0] == "a" || argList[0] == "ayuda") {
			cv.ayuda();
			return 0;
		}

		if (argList[0] == "-s" || argList[0] == "s" || argList[0] == "suma") {
			int cantidad = stoi(argList[1]);
			cv.suma(cantidad);
			return 0;
		}

		if (argList[0] == "-a" || argList[0] == "a" || argList[0] == "ayuda") {
			int cantidad = stoi(argList[1]);
			cv.resta(cantidad);
			return 0;
		}

		if (argList[0] == "-a" || argList[0] == "a" || argList[0] == "ayuda") {
			int cantidad = stoi(argList[1]);
			cv.checkRegalos(cantidad);
			return 0;
		}
	}
	return 0;
}