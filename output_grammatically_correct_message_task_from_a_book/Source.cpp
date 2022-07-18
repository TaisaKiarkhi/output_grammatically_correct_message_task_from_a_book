#include <iostream>
#include <format>
using namespace std;

int main() {
	int mouse{};
	int brown{};
	int white{};

	cout << "How many brown mice do you have? ";
	cin >> brown;
	cout << "How many white mice do you have? ";
	cin >> white;

	mouse = white + brown;

	if (mouse == 0) {
		//print nothing
	}

	else if (mouse==1) {
		cout << format("It is a {} mouse ", brown==1 ? "brown":"white");
	}

	else {
		
		
		cout << format("Of these mice, {} {} brown {}", brown, brown==1 ? "is a":"are", brown==1?"mouse":"mice");
	}

	return 0;
}







