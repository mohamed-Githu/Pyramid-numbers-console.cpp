#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void linea()
{
	cout << "\n" << "______________________________________" << "\n\n" ;
}

int main(int argc, char** argv) {
	
	int rows ;
	
	cout << "Rows = " ;
	cin >> rows ;
	
	linea() ;
	
	for ( int x = 0 ; x < rows ; x ++ )
	{
		for ( int y = 0 ; y < rows - x ; y ++ )
		{
			cout << " " ;
		}
		for ( int y = 0 ; y <= x * 2 ; y ++ )
		{
			cout << x + 1 ;
		}
		cout << endl ;
	}
	
	linea() ;
	
	for ( int x = 0 ; x < rows ; x += 2 )
	{
		for ( int y = 0 ; y < rows - x ; y ++ )
		{
			cout << " " ;
		}
		for ( int y = 0 ; y <= x ; y ++ )
		{
			cout << x + 1 << " " ;
		}
		cout << endl ;
	}
	
	linea() ;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
