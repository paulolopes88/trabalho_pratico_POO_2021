#pragma warning(disable : 4996)
#include <string>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Uteis {
private:
	vector<string> arr;
public:
	void split(string str, string sep) {
		arr.clear();
		char* cstr = const_cast<char*>(str.c_str());
		char* current;
		current = strtok(cstr, sep.c_str());
		while (current != NULL) {
			arr.push_back(current);
			current = strtok(NULL, sep.c_str());
		}
	}
	string GetElement(int pos) {
		if (arr.size() >= pos)
			return arr[pos];
		return "";
	}
};