    #include <iostream>
#include <conio.h>
#include <math.h>
#include <vcl.h>
#pragma hdrstop


//---------------------------------------------------------------------------
#pragma argsused
int main(int argc, char* argv[])
{
	int x;
	float y;
	std::
		cin >> x;
	if (!cin || x < -1 || x > 20)
	{
		cout << "Error!" << endl;
		getch();
	}


				else
					y = pow(x, 4);
		cout << "Znachenie funkcii =" << y << endl;



		getch();
		return 0;
	}
}
//-----------------
