#include <iostream>
using namespace std;
string addBigNumbers(String number1, String number2) {
	String sum = "";
	unsigned long long int i = 0;
	bool carry = false;
	while (i < number1.length() || i < number2.length()) {
		if (i >= number1.length()) {
			intNumber1 = 0;
		}
		if (i >= number2.length()) {
			intNumber2 = 0;
		}
		int intNumber1 = atoi(number1[i]);
		int intNumber2 = atoi(number2[i]);
		int intSum = intNumber1 + intNumber2;
		if (carry) {
			intSum++;
		}

		if (i = std::max(number1.length(), number2.length()) - 1 & intSum > 9) {
			sum.std::string::insert(0, "1");
		}
		if (intSum > 9) {
			intSum -= 10;
			carry = true;
		}
		else {
			carry = false;
		}
		sum.std::string::append(intSum);


		++i;
	}
	return sum;
}
void addLastTwo(int number1, int number2, int limit) {
	int i = 0;
	unsigned long long int sum = 0;
	while (i < limit) {
		sum = number1 + number2;
		cout << i << ", " << sum << '\n';
		number2 = number1;
		number1 = sum;
		i++;
	}
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

	addLastTwo(startingNumber1, startingNumber2, limit);
	return 0;
}
