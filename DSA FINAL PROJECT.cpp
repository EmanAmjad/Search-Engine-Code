// DSA FINAL PROJECT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
#include <string>
using namespace std;
struct node
{
	string country;
	string capital;
	int population;
	string animal;
	string dress;
	node* next;
	node* prev;
};

class d_linklist
{
	node* tail;
public:
	d_linklist()
	{
		tail = NULL;
	}
	void add_node(string con, string cap, int pop, string an, string d)
	{
		node* temp = new node;
		temp->country = con;
		temp->capital = cap;
		temp->population = pop;
		temp->animal = an;
		temp->dress = d;
		if (tail == NULL)
		{
			temp->next = temp;
			temp->prev = temp;
		}
		else
		{
			temp->next = tail->next;
			temp->prev = tail;
			tail->next = temp;
		}
		tail = temp;
	}
    void SearchByName(string c)
	{
		node* s1;

		s1 = tail->next;
		do
		{
			if (s1->country == c)
			{
				cout << "Country : "<<s1->country << endl << "Capital : "<< s1->capital << endl <<"Population : "<< s1->population << endl <<"National Animal : "<< s1->animal << endl <<"National Dress : "<< s1->dress << endl;
				break;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
	}
	void SearchByCapital(string c)
	{
		node* s1;

		s1 = tail->next;
		do
		{
			if (s1->capital == c)
			{
				cout << "Country : " << s1->country << endl << "Capital : " << s1->capital << endl << "Population : " << s1->population << endl << "National Animal : " << s1->animal << endl << "National Dress : " << s1->dress << endl;
				break;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
	}
	void SearchByPopulation(int i)
	{
		node* s1;

		s1 = tail->next;
		do
		{
			if (s1->population == i)
			{
				cout << "Country : " << s1->country << endl << "Capital : " << s1->capital << endl << "Population : " << s1->population << endl << "National Animal : " << s1->animal << endl << "National Dress : " << s1->dress << endl;
				break;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
	}
	void SearchByAnimal(string c)
	{
		node* s1;

		s1 = tail->next;
		do
		{
			if (s1->animal == c)
			{
				cout << "Country : " << s1->country << endl << "Capital : " << s1->capital << endl << "Population : " << s1->population << endl << "National Animal : " << s1->animal << endl << "National Dress : " << s1->dress << endl;
				break;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
	}
	void SearchByDress(string c)
	{
		node* s1;

		s1 = tail->next;
		do
		{
			if (s1->dress == c)
			{
				cout << "Country : " << s1->country << endl << "Capital : " << s1->capital << endl << "Population : " << s1->population << endl << "National Animal : " << s1->animal << endl << "National Dress : " << s1->dress << endl;				break;
				break;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
	}
	void update(string nam)
	{
		int inp;
		cout << "\nWhich information about the country do you want to update?";
		cout << "\nEnter 1 for capital\t 2 for population ";
		cout << "\n3 for dress\t 4 for animal\n";
		cin >> inp;
		switch (inp)
		{
		case 1:
		{	string new_cap;
		node* s1;
		cout << "\nEnter new capital: ";
		cin >> new_cap;
		s1 = tail->next;
		do
		{
			if (s1->country == nam)
			{
				s1->capital = new_cap;
				cout << "\n\nThe information of the country has been updated....";
				cout << "The new capital of " << nam << " is " << s1->capital << endl << endl;
			}
			else
				s1 = s1->next;
		} while (s1 != tail->next);
		break;
		}
		case 2:
		{
			int new_pop;
			node* s1;
			cout << "\nEnter new population: ";
			cin >> new_pop;
			s1 = tail->next;
			do
			{
				if (s1->country == nam)
				{
					s1->population = new_pop;
					cout << "\n\nThe information of the country has been updated..";
					cout << "The new population of " << nam << " is " << s1->population << endl << endl;
				}
				else
					s1 = s1->next;
			} while (s1 != tail->next);
			break;
		}
		case 3:
		{
			string new_dress;
			node* s1;
			cout << "\nEnter new dress: ";
			cin >> new_dress;
			s1 = tail->next;
			do
			{
				if (s1->country == nam)
				{
					s1->dress = new_dress;
					cout << "\n\nThe information has been updated....";
					cout << "The new dress of " << nam << " is " << s1->dress << endl << endl;
				}
				else
					s1 = s1->next;
			} while (s1 != tail->next);
			break;
		}
		case 4:
		{
			string new_animal;
			node* s1;
			cout << "\nEnter new animal: ";
			cin >> new_animal;
			s1 = tail->next;
			do
			{
				if (s1->country == nam)
				{
					s1->animal = new_animal;
					cout << "\nThe information has been updated....";
					cout << "The new animal of " << nam << " is " << s1->animal << endl << endl;
					break;
				}
				else
					s1 = s1->next;
			} while (s1 != tail->next);
			break;
		}
		default:
			cout << "\ninvalid input....\n\n";
			break;
		}
	}
};

int main()
{
	system("color 1F");//screen color
	d_linklist L;
	int i,j;
	string a;
	L.add_node("Pakistan", "Islamabad", 1000, "Markhor", "Shalwar Kameez");
	L.add_node("China", "Beijing", 3000, "Panda", "Hanfu");
	L.add_node("Japan", "Tokyo", 4000, "Koi", "Kimono");
	L.add_node("Korea", "Seoul", 5000, "Cyberian Tiger", "Hanbook");
	L.add_node("Canada", "Ottawa", 6000, "Beaver", "Crinoline");
	L.add_node("Hongkong", "Victoria", 6500, "Giant Panda", "Chongsam");
	L.add_node("Switzerland", "Bern", 7000, "Cow", "Smock dresses");
	L.add_node("Amsterdam", "Netherland", 7500, "Lion", "skirts & trousers");
	L.add_node("Dubi", "Abu Dhabi", 8000, "Arabian Oryx", "Batoolas");
	L.add_node("Qatar", "Doha", 8500, "Oryx", "Thobe");
	L.add_node("USA", "Washington DC", 9000, "Bison", "Jeans & T-shirt");
	L.add_node("UK", "London", 9500, "Unicorn", "mini skirts");
	L.add_node("Iran", "Tehran", 10000, "Asiatic Lion", "Kamarbandh");
	L.add_node("Czech Republic", "Prague", 15000, "Double-tailed lion", "White shirt");
	L.add_node("Ukraine", "Kyiv", 20000, "Nightangle", "Long skirts");
	L.add_node("Turkey", "Ankara", 25000, "Grey wolf", "Turkish Shalwar");
	L.add_node("Madagasscar", "Antanarivo", 30000, "Ring talked Lemure", "Lamba");
	L.add_node("Egypt", "Cairo", 35000, "Steppe Eagle", "Tob Sebleh");
	L.add_node("Australia", "Canbera", 40000, "Kangroo", "Bush skirt");
	L.add_node("Kuwait", "Kuwait City", 45000, "Arabian Camel", "Abaya");
	L.add_node("Romania", "Bucharast", 50000, "Lynx", "White Pants");
	L.add_node("Srilanka", "Colombo", 55000, "elephant", "Saree");
	L.add_node("Thailand", "Bangkok", 60000, "pigeon", "Chut thai");
	L.add_node("India", "New Delhi", 65000, "Tiger", "Lehnga");
	L.add_node("Westindes", "Chaguaramas", 750000, "Mahi Mahi", "Madras");
	cout << "**********************SEARCH ENGINE***************************\n";
	do {
		cout << "\tPress 1 to search by country name\n";
		cout << "\tPress 2 to search by capital name\n";
		cout << "\tPress 3 to search by population\n";
		cout << "\tPress 4 to search by animal name\n";
		cout << "\tPress 5 to search by dress\n";
		cout << "\tPress 6 to Update\n";
		cout << "\tPress 0 to Exit\n";
		cout << "\tEnter________";
		cin >> i;
		switch (i)
		{
		case(1):
		{
			cout << "Enter Country name: ";
			cin >> a;
			L.SearchByName(a);
			break;
		}
		case(2):
		{
			cout << "Enter Capital name: ";
			cin >> a;
			L.SearchByCapital(a);
			break;
		}
		case(3):
		{
			cout << "Enter Population: ";
			cin >> j;
			L.SearchByPopulation(j);
			break;
		}
		case(4):
		{
			cout << "Enter Animal name: ";
			cin >> a;
			L.SearchByAnimal(a);
			break;
		}
		case(5):
		{
			cout << "Enter Dress: ";
			cin >> a;
			L.SearchByDress(a);
			break;
		}
		case(6):
		{
			cout << "Enter Country Name: ";
			cin >> a;
			L.update(a);
			break;
		}
		default:
			cout << "No Valid Input\n";
			break;
		}
	} while (i != 0);
	system("pause");
	return 0;
}