#include<bits/stdc++.h>
using namespace std;

void simple_tokenizer(string s) 
{
	stringstream ss(s);
	string word;
	while (ss >> word) {
		cout << word << endl;

	}
}

int main(int argc, char const* argv[])
{
	string a = "How are you ? ";
	simple_tokenizer(a);
	cout << endl;
	return 0;
}