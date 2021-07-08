#include<iostream>
using namespace std;

//This is an abstract class now.
class AbstractEmployee {
	virtual void askForPromotation()=0; //Virtual function or abstract function
};

//Template or blueprint
class Employee : AbstractEmployee
{
//private:
	//string Name;
	//string Company;
	//int Age; 
protected:
	string Name;
	string Company;
	int Age; 
public:
	void setName(string s) //Setter
	{
		Name = s;
	}
	string getName()	//Getter
	{
		return Name;
	}
	void setCompany(string company)
	{
		Company = company;
	}
	string getCompany()
	{
		return Company;
	}
	void setAge(int age)
	{
		if (age >= 18)
		{
			Age = age;
		}
	}
	int getAge()
	{
		return Age;
	}
	void introduceYourself()
	{
		cout << "Name - " << Name << endl;
		cout << "Company - " << Company << endl;
		cout << "Age - " << Age << endl;
	}
	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

	void askForPromotation()
	{
		if (Age >= 30)
		{
			cout << Name << " got promoted!!!\n";
		}
		else
		{
			cout << Name << " Sorry no promotion for you!!!\n";
		}
	}

	virtual void Work() //Virtual function
	{
		cout << Name << " is checking email, backlog:\n";
	}
};

class Developer : public Employee
{
	string FavProgrammingLang;

public:
	Developer(string name, string company, int age,string lang) 
		: Employee(name, company, age)
	{
		FavProgrammingLang = lang;
	}

	void fixBug()
	{
		cout << getName() << " fixed a bug using " << FavProgrammingLang<<"\n"; // For private properties.
	}

	void Work()
	{
		cout << Name << " is writing "<<FavProgrammingLang<<" code in Visual Studio\n";
	}
};

class Teacher: public Employee
{
	string subject;

public:
	Teacher(string name, string company, int age, string sub)
		: Employee(name, company, age)
	{
		subject = sub;
	}

	void PrepareLesson()
	{
		cout << Name << " is preparing " << subject << " lesson\n";
	}

	void Work()
	{
		cout << Name << " is teaching " << subject << " of Genghis Khan today\n";
	}
};

int main()
{
	//Employee empOne, empTwo;
	//empOne.Company = "Intel";
	//empOne.name = "Argha";
	//empOne.Age = 21;
	//empOne.introduceYourself();
	//empOne.Company = "YouTube";
	//empOne.name = "Mitchell";
	//empOne.Age = 35;
	//empTwo.introduceYourself();

	Employee empOne = Employee("Argha", "Intel", 21);
	//empOne.introduceYourself();
	Employee empTwo = Employee("Mitchell", "YouTube", 35);
	//empTwo.introduceYourself();
	//cout << endl;

	//empOne.setAge(10);
	//cout << empOne.getName() << " is " << empOne.getAge() << " yrs old";

	//empOne.askForPromotation();
	//empTwo.askForPromotation();

	Developer dev = Developer("Argha", "YouTube", 25, "C++");
	dev.fixBug();
	dev.fixBug();
	dev.fixBug();
	dev.fixBug();
	dev.fixBug();
	dev.fixBug();
	dev.askForPromotation();

	Teacher t = Teacher("Jack", "DPS", 35, "History");
	t.PrepareLesson();
	t.askForPromotation();

	//dev.Work();
	//t.Work();

	Employee* eOne= &dev; //A pointer of base class can hold reference to the derived class object.
	Employee* eTwo = &t;

	eOne->Work();
	eTwo->Work();

	//When a virtual function is invoked, then it checks if it has some other implementation of itself in the derived classes. If 'yes' then execute that implementation instead.
}  