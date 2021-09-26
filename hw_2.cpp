#include <iostream>
#include <string>


int countStudent = 0;

class Person
{
public: 

	std::string name;
	int age;
	std::string gender;
	int weight;

	void chenge_name(std::string newName)
	{
		name = newName;
	}

	void chenge_age(int newAge)
	{
		age = newAge;
	}

	void chenge_weight(int newWeight)
	{
		weight = newWeight;
	}
};

class Student : Person
{
	int studeYear[2] = {};
public:
	void makeStudent(std::string n_name, int n_age, std::string n_gender, int n_weight, int strSt, int endSt)
	{
	name = n_name;
	age = n_age;
	gender = n_gender;
	weight = n_weight;
	studeYear[0] = strSt;
	studeYear[1] = endSt;
	countStudent++;
	}

	void listStudent()
	{
		std::cout << "Student name: " << name << "\nAeg: " << age << "\nGender: " <<
			gender << "\nWeight: " << weight << "\nYear of stude: " << studeYear[0] <<
			" - " << studeYear[1] << std::endl << std::endl;

	}
	void chenge_name(std::string newName)
	{
		name = newName;
	}

	void chenge_age(int newAge)
	{
		age = newAge;
	}

	void chenge_weight(int newWeight)
	{
		weight = newWeight;
	}

};



class Fruit
{
public:
	std::string name;
	std::string color;
};


class Apple : Fruit
{
public:
	std::string  getName()
	{
		name = "apple";
		return  name;
	}
	std::string getColor()
	{
		color = "green";
		return  color;
	}

};

class Banana : Fruit
{
public:
	std::string getName()
	{
		name = "banana";
		return name;
	}
	std::string getColor()
	{
		color = "yellow";
		return color ;
	}

};

class GrannySmith : public Apple
{
public:
	std::string getName() {
		return "Granny Smith apple";
	};
};



int main()
{
	// Part_1
	Student firstStu;
	firstStu.makeStudent("Ivan", 21, "boy", 75, 2020, 2022);
	firstStu.listStudent();

	Student secStu;
	secStu.makeStudent("Olya", 22, "girl", 60, 2019, 2023);
	secStu.listStudent();

	firstStu.chenge_name("David");
	firstStu.chenge_age(24);
	firstStu.chenge_weight(65);
	firstStu.listStudent();

	std::cout << "Count student: " << countStudent << std::endl;

	// Part_2

	Apple a;
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;
}
