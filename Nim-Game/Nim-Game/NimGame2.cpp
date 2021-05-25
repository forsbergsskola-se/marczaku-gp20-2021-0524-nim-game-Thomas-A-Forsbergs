#include <iostream>

int main() {
	std::cout << "Hello World!\n";

	int matches = 24;

	while (matches > 0)
	{
		drawMatches(matches);
		matches -= getValidUserMatchDrawInput(1, matches);
	}
}

static void NimGame2() {

}