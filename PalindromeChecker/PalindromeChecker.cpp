#include <iostream>

using namespace std;

static inline string GetUserString() noexcept {
	string str;
	cout << "Enter a word to check if it's a palindrome: ";
	cin >> str;

	return str; 
}

static inline string IsPalindrome(const string& str) noexcept {
	const size_t count = str.size() >> 1;
	const size_t last = str.size() - 1;
	const char* cstr = str.c_str();

	for (size_t i = 0; i < count; i++)
		if (cstr[i] != cstr[last - i])
			return "Is not a palindrome.";

	return "Is a palindrome. ";

}

int main() {
	cout << IsPalindrome(GetUserString()) << endl;

}