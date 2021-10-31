#include <iostream>
using namespace std;

int first_choice()
{
	cout << "Как заполнять строку? (1) - random, (2) - вручную" << endl;
	int choice;
	cin >> choice;

	return choice == 1 ?  1 :  2;
}


int second_choice()
{
  cout << "Чем заполнять строку? (1) - цифры, (2) - буквы, (3) - любые символы" << endl;
  int choice_2;
  cin >> choice_2;

  switch(choice_2)
  {

    case 1:
      return 1;
      break;
    case 2:
      return 2;
      break;
    case 3:
      return 3;
      break;
	default:
	  cout << "Error";

  }

}




int main() {







  return 0;
}