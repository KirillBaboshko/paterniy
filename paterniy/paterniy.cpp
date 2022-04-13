#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	int old;
	Animal(int o)
	{
		old = o;
	}
	virtual void Vid() = 0;
	virtual void Print() = 0;
};
class Mleco :public Animal
{
public:
	int nogi;
	Mleco(int o, int n) :Animal(o) { nogi = n; };
	virtual void Vid()
	{
		cout << "\'Type: Mleco\'\n";
	}
	virtual void Print()
	{
		cout << "Old:" << old << endl;
		cout << nogi << " Nog" << endl;
	}
};
class Presmi :public Animal
{
public:
	bool toxic;
	Presmi(int c, bool t) :Animal(c) { toxic = t; };

	virtual void Vid()
	{
		cout << "\'Type: Presmi\'\n";
	}
	virtual void Print()
	{
		cout <<"Old:"<< old << endl;

		if (toxic)
		{
			cout << "Have poison" << endl;
		}
	}
	
};
class Ribi :public Animal
{
public:
	int plav;
	string vid;
	Ribi(int o) :Animal(o) {};
	Ribi(int o, int p, string v) :Animal(o) { plav = p; vid = v; };
	virtual void Vid()
	{
		cout << "\'Type: Ribi\'\n";
	}
	virtual void Print()
	{
		cout << "Old:" << old << endl;
		cout << "Vid: " << vid << endl;
		cout << plav << " Plav";
	}
};
class Dori: public Ribi
{
	string name;
public:
	Dori(int o, int p) :Ribi(o, p,"Dori") {};
	void SetName()
	{
		cout << "\nSet name" << endl;
		cin >> name;
	}
	void Print2()
	{
		cout << "Name " << name << endl;
	}
};
class Nemo : public Ribi
{
	string name;
	int glaza;
public:
	Nemo(int o, int p) :Ribi(o, p,"Nemo") {};
	void SetName()
	{
		cout << "\nSet name" << endl;
		cin >> name;
	}
	void SetGlaza()
	{
		cout << "\nSet glaza" << endl;
		cin >> glaza;
	}
	void Print2()
	{
		cout << "Name " << name << endl;
		cout << "Glaza " << glaza << endl;
	}
};
class Ovcharka : public Mleco
{
public:
	Ovcharka(int o, int n) :Mleco(o,n) {};
	void Golos()
	{
		cout << "\nGVGAAGAGAGAGAGAG" << endl;
	}

};
class Zmei : public Presmi
{
	double lenth;
public:
	Zmei(int o, int x) :Presmi(o, x) {};
	void SetLenth()
	{
		cout << "\nSet Lenth" << endl;
		cin >> lenth;
	}
	void Print2()
	{
		cout << "Lenth "<<lenth << endl;
	}
};
void main()
{
	//Animal* animals[3] = { new Mleco(6),new Ribi(2),new Presmi(10)};
	//for (int i = 0; i < 3; i++)
	//{
	//	animals[i]->Vid();
	//}
	//animals[2]->Print();
	//cout << endl;
	Dori r(1,2);
	r.Vid();
	r.Print();
	cout << endl;
	r.SetName();
	r.Print2();
	cout << endl;

	Nemo n(2, 3);
	n.Vid();
	n.Print();
	cout << endl;
	n.SetName();
	n.SetGlaza();
	n.Print2();
	cout << endl;

	Ovcharka o(5, 4);
	o.Vid();
	o.Print();
	cout << endl;
	o.Golos();
	cout << endl;

	Zmei z(3, 1);
	z.Vid();
	z.Print();
	cout << endl;
	z.SetLenth();
	z.Print2();

}