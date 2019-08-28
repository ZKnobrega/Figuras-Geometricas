//++++ Triangulo ++++

#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x;
	for (int i=0; i<=x; i++)
	{
		for (int y=0; y<=i; y++)
		{
			if (i==0 ||)
			cout << "* ";
		}
		cout << "\n";
	}
}

//+++FIM+++




//++++Triangulo vazado++++
#include <iostream>
using namespace std;
int main()
{
	int x, z;
	cin >> x;
	for (int i=0; i<=x; i++)
	{
		for (int y=0; y<=i; y++)
		{
			if (i==x || y==i|| y==0)
			{
				cout << "* ";
			}
			else 
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}
}

//+++FIM+++





//++++ Quadrado ++++

#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int matriz[x][x];
	for (int i=0; i<x; i++)
	{
		for (int y=0; y<x; y++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
}
//+++FIM+++





//++++ Quadrado Vasado ++++
#include <iostream>

using namespace std;
int main()
{
	int x;
	cin >> x;
	cout << "\n";
	int matriz[x][x];
	for (int i=0; i<x; i++)
	{
		for (int y=0; y<x; y++)
		{
			if (i==0 || i== x-1 ||y==0 || y==x-1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
}

+++FIM+++
 




++++Pirâmide Números++++

#include <iostream>
using namespace std;
int main()
{
    int x;
                    cin >> x;
                    for(int i=1;i<=x;i++){
                        for(int y=1;y<=x-i;y++){
                            cout <<" ";
                        }
                        for(int z=1;z<=i;z++)
                            cout << z;
                       for(int b=i-1;b>=1;b--)
                        cout << b;
                       cout <<"\n";
                    }
}
