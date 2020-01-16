#include <iostream>
#include <string.h>
using namespace std;

void WelcomeInfo() {
	cout << endl << endl;
	for (int i = 0; i < 50; i++)
		cout << "=";
	cout << "\n\tWelcome to Garage Application\n";
	for (int i = 0; i < 50; i++)
		cout << "=";

	cout << endl << endl;
}

void TypeOfVehicle() {
	cout << "1. Bicycle \n";
	cout << "2. Motorcycle \n";
	cout << "3. Car \n";
	cout << "4. Bus \n";
	cout << "5. Truck \n";
	cout << "6. Exit Application\n";
}

void VehicleInformation(string temp) {
	cout << endl << endl;
	for (int i = 0; i < 50; i++)
		cout << "-";
	cout << "\n\tEnter Information of " << temp << "\n";
	for (int i = 0; i < 50; i++)
		cout << "-";

	cout << endl << endl;
}

void FurtherChoices(string temp) {
	cout << "1. Park your " << temp << "\n";
	cout << "2. Pick up the " << temp << "\n";
	cout << "3. List all " << temp << "\n";
	cout << "4. List all Vehicles \n";
	cout << "5. Back to Main Menu\n";

}

class Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string Model;
	int name;
public:
	Vehicle() {
		Brand = "";
		color = "";
		reg_no = "";
		Model = "";
		name = 0;
	}

	Vehicle(string a, string b, string c, string d, int e) {
		Brand = a;
		color = b;
		reg_no = c;
		Model = d;
		name = e;
	}

	string getBrand() {
		return Brand;
	}

	string getColor() {
		return color;
	}

	string getReg() {
		return reg_no;
	}

	string getYear() {
		return Model;
	}

	int getName() {
		return name;
	}

};

class Bicycle : public Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string  Model;
	int name;
public:
	Bicycle()
	{
		cout << "Default";
	}

	Bicycle(string a, string b, string c, string d, int e)
		:Vehicle(a, b, c, d, e)
	{
	}

};

class Motorcycle : public Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string Model;
	int name;
public:
	Motorcycle()
	{
		cout << "Default";
	}

	Motorcycle(string a, string b, string c, string d, int e)
		:Vehicle(a, b, c, d, e)
	{
	}
};

class Car : public Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string Model;
	int name;
public:
	Car()
	{
		cout << "Default";
	}
	Car(string a, string b, string c, string d, int e)
		:Vehicle(a, b, c, d, e)
	{
	}
};

class Bus : public Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string Model;
	int name;
public:
	Bus()
	{
		cout << "Default";
	}
	Bus(string a, string b, string c, string d, int e)
		:Vehicle(a, b, c, d, e)
	{
	}
};

class Truck : public Vehicle {
public:
	string Brand;
	string color;
	string reg_no;
	string Model;
	int name;
public:
	Truck()
	{
		cout << "Default";
	}
	Truck(string a, string b, string c, string  d, int e)
		:Vehicle(a, b, c, d, e)
	{
	}
};

class Garage {
public:
	int capacity;
	Vehicle* a;
	int index;
public:
	Garage() {
		capacity = 10;
		a = new Vehicle[capacity];
		index = 0;
	}
	Garage(int cap) {
		capacity = cap;
		a = new Vehicle[capacity];
		index = 0;
	}
	void AddVehicle(Vehicle& Obj) {
		if (index == capacity) {
			cout << "Garage is Full\n";
		}
		else {
			a[index].Brand = Obj.Brand;
			a[index].color = Obj.color;
			a[index].reg_no = Obj.reg_no;
			a[index].Model = Obj.Model;
			a[index].name = Obj.name;
			index++;
			cout << "\nSuccessfully Parked\n";
		}
	}
	void RemoveVehicle(string reg) {
		for (int i = 0; i < (index - 1); i++) {
			if (a[i].getReg() == reg) {
				a[i].Brand = a[i + 1].Brand;
				a[i].color = a[i + 1].color;
				a[i].reg_no = a[i + 1].reg_no;
				a[i].name = a[i + 1].name;
				a[i].Model = a[i + 1].Model;

			}
		}
		--index;
	}

	int getCapacity() {
		return capacity;
	}

	void DisplayAll() {
		if (index == 0) {
			cout << "\nGarage is Empty\n";
		}
		else {
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << "\nBicycles\n";
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << endl;

			for (int i = 0; i < index; i++) {
				if (a[i].getName() == 1) {
					cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
				}
			}
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << "\nMotorcycles\n";
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << endl;

			for (int i = 0; i < index; i++) {
				if (a[i].getName() == 2) {
					cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
				}
			}
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << "\nCars\n";
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << endl;

			for (int i = 0; i < index; i++) {
				if (a[i].getName() == 3) {
					cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
				}
			}
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << "\nBuses\n";
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << endl;

			for (int i = 0; i < index; i++) {
				if (a[i].getName() == 4) {
					cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
				}
			}
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << "\nTrucks\n";
			for (int i = 0; i < 15; i++)
				cout << "-";
			cout << endl;

			for (int i = 0; i < index; i++) {
				if (a[i].getName() == 5) {
					cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
				}
			}
		}
	}

	void DisplayBicycle() {
		for (int i = 0; i < index; i++) {
			if (a[i].getName() == 1) {
				cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
			}
		}
	}

	void DisplayMotorcycle() {
		for (int i = 0; i < index; i++) {
			if (a[i].getName() == 2) {
				cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
			}
		}
	}

	void DisplayCar() {
		for (int i = 0; i < index; i++) {
			if (a[i].getName() == 3) {
				cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
			}
		}
	}

	void DisplayBus() {
		for (int i = 0; i < index; i++) {
			if (a[i].getName() == 4) {
				cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
			}
		}
	}

	void DisplayTruck() {
		for (int i = 0; i < index; i++) {
			if (a[i].getName() == 5) {
				cout << a[i].Brand << " " << a[i].color << " " << a[i].reg_no << " " << a[i].Model << "\n";
			}
		}
	}
};

int main() {
	Garage MyGarage;
	int temp = MyGarage.getCapacity();
	int choice;
	do {
		WelcomeInfo();
		TypeOfVehicle();
		cout << "\nEnter Your Choice according to Your Vehicle Type : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int x;
			do {
				VehicleInformation("Bicycle");
				FurtherChoices("Bicycle");
				cout << "\nYour Choice : ";
				cin >> x;
				if (x == 1) {


					string Brand, color, reg_no, Model;
					cout << "\nEnter the Brand of Your Bicycle : ";
					cin >> Brand;

					cout << "\nEnter the color of Your Bicycle : ";
					cin >> color;

					cout << "\nEnter Registration Numeber of Your Bicycle : ";
					cin >> reg_no;

					cout << "\nEnter the Model of Your Cycle : ";
					cin >> Model;

					Vehicle* First = new Bicycle(Brand, color, reg_no, Model, 1);
					MyGarage.AddVehicle(*First);
				}
				else if (x == 2) {

					string reg;
					cout << "\nEnter Registration Number to Pick-Up : ";
					cin >> reg;
					MyGarage.RemoveVehicle(reg);
				}
				else if (x == 3) {
					MyGarage.DisplayBicycle();
				}
				else if (x == 4) {
					MyGarage.DisplayAll();
				}
				else if (x == 5) {
					break;
				}
			} while (x != 5);

			break;
		}
		case 2:
		{
			int x;
			do {
				VehicleInformation("Motorcycle");
				FurtherChoices("Motorcycle");
				cout << "\nYour Choice : ";
				cin >> x;
				if (x == 1) {

					string Brand, color, reg_no, Model;
					cout << "\nEnter the Brand of Your Motorcyce : ";
					cin >> Brand;

					cout << "\nEnter the color of Your Motorcyce : ";
					cin >> color;

					cout << "\nEnter Registration Numeber of Your Motorcyce : ";
					cin >> reg_no;

					cout << "\nEnter the Model of Your Motorcyce : ";
					cin >> Model;

					Vehicle* Second = new Motorcycle(Brand, color, reg_no, Model, 2);
					MyGarage.AddVehicle(*Second);
				}
				else if (x == 2) {

					string reg;
					cout << "\nEnter Registration Number to Pick-Up : ";
					cin >> reg;
					MyGarage.RemoveVehicle(reg);
				}
				else if (x == 3) {
					MyGarage.DisplayMotorcycle();
				}
				else if (x == 4) {
					MyGarage.DisplayAll();
				}
				else if (x == 5) {
					break;
				}
			} while (x != 5);
			break;
		}
		case 3:
		{
			int x;
			do {
				VehicleInformation("Car");
				FurtherChoices("Car");
				cout << "\nYour Choice : ";
				cin >> x;
				if (x == 1) {

					string Brand, color, reg_no, Model;
					cout << "\nEnter the Brand of Your Car: ";
					cin >> Brand;

					cout << "\nEnter the color of Your Car: ";
					cin >> color;

					cout << "\nEnter Registration Numeber of Your Car: ";
					cin >> reg_no;

					cout << "\nEnter the Model of Your Car: ";
					cin >> Model;

					Vehicle* Third = new Car(Brand, color, reg_no, Model, 3);
					MyGarage.AddVehicle(*Third);
				}
				else if (x == 2) {

					string reg;
					cout << "\nEnter Registration Number to Pick-Up : ";
					cin >> reg;
					MyGarage.RemoveVehicle(reg);
				}
				else if (x == 3) {
					MyGarage.DisplayCar();
				}
				else if (x == 4) {
					MyGarage.DisplayAll();
				}
				else if (x == 5) {
					break;
				}
			} while (x != 5);
			break;
		}
		case 4:
		{
			int x;
			do {
				VehicleInformation("Bus");
				FurtherChoices("Bus");
				cout << "\nYour Choice : ";
				cin >> x;
				if (x == 1) {

					string Brand, color, reg_no, Model;
					cout << "\nEnter the Brand of Your Bus: ";
					cin >> Brand;

					cout << "\nEnter the color of Your Bus: ";
					cin >> color;

					cout << "\nEnter Registration Numeber of Your Bus: ";
					cin >> reg_no;

					cout << "\nEnter the Model of Your Bus: ";
					cin >> Model;

					Vehicle* Fourth = new Bus(Brand, color, reg_no, Model, 4);
					MyGarage.AddVehicle(*Fourth);
				}
				else if (x == 2) {

					string reg;
					cout << "\nEnter Registration Number to Pick-Up : ";
					cin >> reg;
					MyGarage.RemoveVehicle(reg);
				}
				else if (x == 3) {
					MyGarage.DisplayBus();
				}
				else if (x == 4) {
					MyGarage.DisplayAll();
				}
				else if (x == 5) {
					break;
				}
			} while (x != 5);
			break;
		}
		case 5:
		{
			int x;
			do {
				VehicleInformation("Truck");
				FurtherChoices("Truck");
				cout << "\nYour Choice : ";
				cin >> x;
				if (x == 1) {

					string Brand, color, reg_no, Model;
					cout << "\nEnter the Brand of Your Truck: ";
					cin >> Brand;

					cout << "\nEnter the color of Your Truck: ";
					cin >> color;

					cout << "\nEnter Registration Numeber of Your Truck: ";
					cin >> reg_no;

					cout << "\nEnter the Model of Your Truck: ";
					cin >> Model;

					Vehicle* Fifth = new Truck(Brand, color, reg_no, Model, 5);
					MyGarage.AddVehicle(*Fifth);
				}
				else if (x == 2) {

					string reg;
					cout << "\nEnter Registration Number to Pick-Up : ";
					cin >> reg;
					MyGarage.RemoveVehicle(reg);
				}
				else if (x == 3) {
					MyGarage.DisplayTruck();
				}
				else if (x == 4) {
					MyGarage.DisplayAll();
				}
				else if (x == 5) {
					break;
				}
			} while (x != 5);
			break;
		}
		case 6:
		{
			cout << "Exiting\n";
			break;
		}
		default:
		{
			cout << "Default";
			break;
		}
		}
	} while (choice != 6);
	return 0;
}
