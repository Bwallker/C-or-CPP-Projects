#include <iostream>
#include <string>
using namespace std;
string addBigNumbers(string number1, string number2) {
	string sum = "";
	unsigned long long int i = std::max(number1.length(), number2.length()) - 1;
	bool carry = false;
	do {
		int intNumber1 = 0;
		int intNumber2 = 0;
		if (i <= number1.length()-1) {
			intNumber1 = number1[i] - '0';
		}
		if (i <= number2.length()-1) {
			intNumber2 = number2[i] - '0';
		}
		int intSum = intNumber1 + intNumber2;
		if (carry) {
			intSum++;
		}

		if (intSum > 9 & i == 0) {
			sum.std::string::insert(0, "1");
		}
		else if (intSum > 9) {
			intSum -= 10;
			carry = true;
		}
		else {
			carry = false;
		}
		if (i == std::max(number1.length(), number2.length()) - 1) {
			sum = std::to_string(intSum);
		}
		else if (i != 0) {
			sum.std::string::insert(sum.length() - 1, std::to_string(intSum));
		}
		else {
			sum.std::string::insert(sum.length() - 2, std::to_string(intSum));
		}
		if (i > 0) {
			--i;
		}
		else {
			break;
		}
	} while (i > 0);
	return sum;
}
void addLastTwo(string number1, string number2, int limit) {
	int i = 0;
	string sum = "";
	while (i < limit) {
		sum = addBigNumbers(number1, number2);
		cout << i << ", " << sum << '\n';
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
	cout << "What do you want the stopping point to be?" << '\n';
	cin >> limit;
	if (startingNumber1 > startingNumber2) {
		int temp = startingNumber1;
		startingNumber1 = startingNumber2;
		startingNumber2 = temp;
	}
	string startingNumber1string = to_string(startingNumber1);
	string startingNumber2string = to_string(startingNumber2);
	addLastTwo(startingNumber1string, startingNumber2string, limit);
	return 0;
}
