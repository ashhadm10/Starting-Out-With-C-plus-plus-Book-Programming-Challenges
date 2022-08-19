#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name, age, city, clg, profession, type_animal, pet_name;
	cout << "Enter your Name: ";
	getline(cin, name);
	cout << "Enter your Age: ";
	getline(cin, age);
	cout << "Enter Name of a City: ";
	getline(cin, city);
	cout << "Enter Name of a College: ";
	getline(cin, clg);
	cout << "Enter any Profession: ";
	getline(cin, profession);
	cout << "Enter a Type of Animal: ";
	getline(cin, type_animal);
	cout << "Enter Pet's Name: ";
	getline(cin, pet_name);
	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at ";
	cout << clg << ", " << name << " graduated and went to work as a " << profession << "." << " Then, " << name << " adopted a(n) " << type_animal;
	cout << " named " << pet_name << ". They both lived happily ever after." << endl; 
	return 0;
}