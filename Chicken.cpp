#include<iostream>
using namespace std;
void Monster();

int main() {

	srand(time(NULL));
	while (1) {
		Monster();
		system("pause");
	}
}
void Monster() {
	int num = rand() % 100;
	if (num < 5)//5%
		cout << "a hord of spiders" << endl;
	else if (num < 20) //15%
		cout << "a ork" << endl;
	else if (num < 40) //20%
		cout << "a shrek" << endl;
	else if (num < 50) //10%
		cout << "a chicken" << endl;
	else //50%
		cout << "a fairy" << endl;


}