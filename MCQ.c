#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;



int
main ()
{


int n;


int r;


int q;


int score = 0;


char answer;




cout << "How many questions would you like to answer? ";


cin >> n;


cout << endl;




// while (q < n)

cout << "What color is the sky? " << endl << endl;


cout << "A) Blue" << endl;


cout << "B)/> Green" << endl;


cout << "C) Red" << endl;


cout << "D) Purple" << endl;


cin >> answer;


if (answer == 'a' || answer == 'A')


    {


cout << "Correct" << endl;


score++;


}


  else


cout << "Incorrect" << endl;


cout << endl;


cout << "What color is grass? " << endl;


cout << "A) Blue" << endl;


cout << "B)/> Green" << endl;


cout << "C) Red" << endl;


cout << "D) Purple" << endl;


cin >> answer;


if (answer == 'b' || answer == 'B')


    {


cout << "Correct" << endl;


score++;


}


  else


cout << "Incorrect" << endl;


cout << endl;


cout << "You got " << score << " out of " << n << " correct " << endl;


cout << endl;


cout << "thanks for playing";


cin.get ();


cin.get ();


return 0;

}


