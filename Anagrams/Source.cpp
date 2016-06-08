#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct AnagramNode {
	char value;
	AnagramNode* node[4];
};

void getAllAnagrams(string s, int length, int constantLength);
void getAllAnagramsIterative(string s);
string removechar(string str, char c);
void buildAnagramTree(AnagramNode *root, int length, string word);

char word[8];
vector <char> v;
ofstream open("test.txt");

int main() {
	string str = "abcdefgi";
	int numberofwords = 0;

	getAllAnagrams(str, str.length(), str.length());
	//AnagramNode *root = new AnagramNode();

	//buildAnagramTree(root, 4, "abba");

	//cout << root->node[0]->value << root->node[0]->node[0]->value << root->node[0]->node[0]->node[0]->value << root->node[0]->node[0]->node[0]->node[0]->value;
	//cout << root->node[0]->value << root->node[0]->node[0]->value << root->node[0]->node[0]->node[1]->value << root->node[0]->node[0]->node[1]->node[0]->value;
	
	/*char word[4];

	AnagramNode *temp = root;
	for (int i = 0; i < str.length(); i++) {
		//first array
		word [str.length() - 4] = temp->node[i]->value;
		for (int x = 0; x < str.length() - 1; x++) {
			//first array and counting
			word[str.length() - 3] = temp->node[i]->node[x]->value;
			for (int b = 0; b < str.length() - 2 ; b++) {
				word[str.length() - 2] = temp->node[i]->node[x]->node[b]->value;
				for (int n = 0; n < str.length() - 3; n++) {
					//cout << "i: " << i << " x: " << x << " b: " << b << " n: " << n << endl;
					word[str.length() - 1] = temp->node[i]->node[x]->node[b]->node[n]->value;
					for (int y = 0; y < 4; y++) {
						cout << word[y];
					}
					cout << endl;
				}
			}
		}
	}*/
	//root->value = 'a';
	
	/*
	root->node[0] = new AnagramNode;
	root->node[0]->value = 'a';

	root->node[1] = new AnagramNode;
	root->node[1]->value = 'b';

	root->node[2] = new AnagramNode;
	root->node[2]->value = 'b';

	root->node[3] = new AnagramNode;
	root->node[3]->value = 'a';

	root->node[0]->node[0] = new AnagramNode;
	root->node[0]->node[1] = new AnagramNode;
	*/

	//root->node[0]->value = "t";
	//removechar(str, 'a');
	
	/*for (int i = 0; i < str.length(); i++) {
		string temp = str;
		//cout << getAllAnagrams(temp.erase(i, 1), str.length() - 1);
	}*/
	//cout << getAllAnagrams("abba", 4);
}

void buildAnagramTree(AnagramNode *root, int length, string word) {
	string temp;
	if (length == 0) {
		return;
	}
	else {
		for (int i = 0; i < length; i++) {
			temp = word;
			root->node[i] = new AnagramNode();
			root->node[i]->value = temp.at(i);
			buildAnagramTree(root->node[i], length - 1, temp.erase(i, 1));
		}
		return;
	}
}

void getAllAnagrams(string s, int length, int constantLength)
{
	if (s.length() == 0) {
		for (int i = 0; i < constantLength; i++) {
			open << word[i];
		}
		open << endl;
		return;
	}
	else {
		string str;
		for (unsigned int i = 0; i < s.length(); i++) {
			str = s;
			word[constantLength - length] = str.at(i);
			getAllAnagrams(str.erase(i, 1), str.length()-1, constantLength);
		}
		return;
	}
}
void getAllAnagramsIterative(string s) {

}
string removechar(string str, char c) {
	string temp = str;
	cout << str.find(c);
	return "ABC";
}