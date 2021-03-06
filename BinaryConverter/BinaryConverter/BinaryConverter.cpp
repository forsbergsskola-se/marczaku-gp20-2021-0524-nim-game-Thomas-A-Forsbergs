/*
 * Copied from Joel Ring.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "BinaryConverter.h"
using namespace std;

/*
Write a Program that reads (cin) decimal Integer numbers (positive only) And Outputs the Binary representation of that number: 0b110
Firstly, implement the function the way we know, with division and modulo.
Secondly, implement the function using binary operations.
Tip: Both exercises will be a lot easier, if you output one character at a time!
*/

int main()
{
	while (true)
	{
		const int intToConvert = getNumberFromPlayer("Enter a positive integer, in the decimal system, to convert to binary representation: ", 0, INT32_MAX);
		cout << "You want to convert: " << intToConvert << endl;
		string result = ConvertDecToBinDivMod(intToConvert);
		cout << "Binary representation using / and % operators: " << result << endl;

		result = ConvertDecToBinBinaryOp(intToConvert);
		cout << "Binary representation using binary operations: " << result << endl;
		cout << endl;
	}
}

int getNumberFromPlayer(string instruction, int minSelection, int maxSelection)
{
	int playerSelection = -1;
	bool validInput = false;
	while (!validInput || playerSelection < minSelection || playerSelection > maxSelection)
	{
		validInput = true;
		cout << instruction;
		cin >> playerSelection;
		if (!cin)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			validInput = false;
		}
	}
	return playerSelection;
}

string ConvertDecToBinDivMod(int integerToConvert)
{
	if (integerToConvert == 0)
		return "0b0";

	int lengthBinary = 0;
	int binary[32];
	for (int i = 0; integerToConvert > 0; i++)
	{
		binary[i] = integerToConvert % 2;
		integerToConvert = integerToConvert / 2;
		lengthBinary++;
	}

	string resultString = "0b";
	for (int i = lengthBinary - 1; i >= 0; i--)
	{
		resultString = resultString + to_string(binary[i]);
	}
	return resultString;
}

string ConvertDecToBinBinaryOp(int integerToConvert)
{
	if (integerToConvert == 0)
		return "0b0";


	string bitString;
	while (integerToConvert != 0)
	{
		bitString = bitString + to_string(integerToConvert & 1);
		integerToConvert >>= 1;
	}

	reverse(bitString.begin(), bitString.end());

	return "0b" + bitString;
}
