#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person();
	void set_firstname(string fname);
	string get_firstname();
	void set_lastname(string lname);
	string get_lastname();
	void set_gender(char gender);
	char get_gender();
	void set_age(int age);
	int get_age();
	void set_account(double acc_bal);
	double get_account();
	void comp_age(Person p2);
private:
	string m_firstname;
	string m_lastname;
	char m_gender;
	int m_age;
	double m_account;
};

Person::Person()
{
	m_firstname = "";
	m_lastname = "";
	m_gender = ' ';
	m_age = 0;
	m_account = 0.0;
}

void Person::set_firstname(string fname)
{
	m_firstname = fname;
}

string Person::get_firstname()
{
	return m_firstname;
}

void Person::set_lastname(string lname)
{
	m_lastname = lname;
}

string Person::get_lastname()
{
	return m_lastname;
}

void Person::set_gender(char gender)
{
	m_gender = gender;
}

char Person::get_gender()
{
	return m_gender;
}

void Person::set_age(int age)
{
	if ( m_age < 0 || m_age > 120){
		cout << "Invalid age" << endl;
	} else {
		m_age = age;
	}
}

int Person::get_age()
{
	return m_age;
}

void Person::set_account(double acc_bal)
{
	m_account = acc_bal;
}

double Person::get_account()
{
	return m_account;
}

void Person::comp_age(Person p2)
{
	if ( get_age() < p2.get_age() ){
		cout << get_firstname() << " is younger than " << p2.get_firstname() << endl;
	} else if ( get_age() == p2.get_age() ){
		cout << get_firstname() << " is as old as " << p2.get_firstname() << endl;
	} else {
		cout << get_firstname() << " is older than " << p2.get_firstname() << endl;
	}
}

int main()
{
	Person person1, person2;
	
	person1.set_firstname( "Chandler" );
	person1.set_lastname( "Bing" );
	person1.set_age( 25 );
	person1.set_gender( 'M' );
	person1.set_account( 1020.50 );
	
	person2.set_firstname( "Rachel" );
	person2.set_lastname( "Green" );
	person2.set_age( 24 );
	person2.set_gender( 'F' );
	person2.set_account( 10020.50 );
	
	cout << "Person 1 full name is " << person1.get_firstname() << " " << person1.get_lastname() << endl;
	cout << "Person 2 full name is " << person2.get_firstname() << " " << person2.get_lastname() << endl;
	
	person1.comp_age(person2);
	
	return 0;
}
