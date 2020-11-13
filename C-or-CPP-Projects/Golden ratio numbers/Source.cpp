#include <iostream>
#include <string>
using namespace std;
string addBigNumbers(string number1, string number2) {
	string sum = "";
	bool carry = false;
	const unsigned long long int startingNumber1Length = number1.length();
	const unsigned long long int startingNumber2Length = number2.length();
	unsigned long long int number1Length = startingNumber1Length;
	unsigned long long int number2Length = startingNumber2Length;
	while (true) {
		int intNumber1 = 0;
		int intNumber2 = 0;
		if (number1Length != 0) {
			intNumber1 = number1[number1Length - 1] - '0';
			number1 = number1.erase(number1Length - 1);
		}
		if (number2Length != 0) {
			intNumber2 = number2[number2Length - 1] - '0';
			number2 = number2.erase(number2Length - 1);
		}
		int intSum = intNumber1 + intNumber2;
		if (carry) {
			intSum++;
		}
		bool check = false;
		if (intSum > 9 & (number1Length == 0 & number2Length == 0)) {
			bool check = true;
		}
		else if (intSum > 9) {
			intSum -= 10;
			carry = true;
		}
		else {
			carry = false;
		}
		if (number1Length == startingNumber1Length || number2Length == startingNumber2Length) {
			sum = std::to_string(intSum);
		}
		else if (intSum != 0 || (number1Length != 0 || number2Length != 0)) {
			sum.std::string::insert(0, std::to_string(intSum));
		}
		if (check) {
			sum.std::string::insert(0, "1");
		}
		if (number1Length == 0 & number2Length == 0) {
			break;
		}
		if (number1Length > 0) {
			number1Length--;
		}
		if (number2Length > 0) {
			number2Length--;
		}
	}
	return sum;
}
void addLastTwo(string number1, string number2, int limit) {
	bool check = false;
	if (limit < 0) {
		check = true;
	}
	int i = 0;
	string sum = "";
	cout << 1 << ", " << number1 << '\n';
	cout << 2 << ", " << number2 << '\n';
	while (i < limit || check) {
		sum = addBigNumbers(number1, number2);
		cout << i+3 << ", " << sum << '\n';
		number2 = number1;
		number1 = sum;
		i++;
	}
	std::cin.ignore();
}
int main() {
	std::cout << "What are the two starting numbers?" << '\n';
	unsigned long long int startingNumber1 = 0;
	unsigned long long int startingNumber2 = 0;
	int limit = 0;
	cout << "Choose the first starting number" << '\n';
	cin >> startingNumber1;
	cout << "Choose the second starting number" << '\n';
	cin >> startingNumber2;
	cout << "What do you want the stopping point to be? Type a negative number to have no limit" << '\n';
	cin >> limit;
	string startingNumber1string = to_string(startingNumber1);
	string startingNumber2string = to_string(startingNumber2);
	addLastTwo(startingNumber1string, startingNumber2string, limit);
	return 0;
}