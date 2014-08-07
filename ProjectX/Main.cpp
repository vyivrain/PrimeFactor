#include <vector>
#include <iostream>
#include <conio.h>

using namespace std;

template<typename T>
void PrintVector( vector<T>* V )
{
	for( auto i = V->begin(); i != V->end(); i++ )
	{
		cout << *i << " ";
	}
	cout << endl;
}

template<typename T>
vector<T>* PrimeFactor( T number )
{
	vector<T>* factors = new vector<T>;
	T modulo = 2;

	while( number > 1 )
	{
		while( number % modulo == 0 )
		{
			factors->push_back( modulo );
			number /= modulo;
		}
		modulo += 1;
	}

	return factors;
}

int main()
{
	vector<unsigned long long>* factor = new vector<unsigned long long>;
	unsigned long long number = 1876191413;
	factor = PrimeFactor( number );

	PrintVector( factor );

	_getch();
	return 0;
}