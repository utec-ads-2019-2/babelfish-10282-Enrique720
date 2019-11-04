#include <iostream> 
#include <map>
#include <sstream>
using namespace std;

int main(){
	map <string, string> diccionario;
	string temp;
	string key, value;
	getline(cin, temp);
	while (temp != "")
	{
		stringstream ss(temp);
		ss >> value >> key;
		diccionario[key] = value;
		getline(cin, temp);
	}
	string comp;
	while (cin >> comp) {
		if (!diccionario[comp].empty()) {
			cout << diccionario[comp] << endl;
		}
		else {
			cout << "eh" << endl;
		}
	}

}

