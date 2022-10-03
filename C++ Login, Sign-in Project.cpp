#include<string>
#include <iostream>

using namespace std;

int main()
{
	int choice;
	string username="aprajitaaa_", password="aprajita@19";   //default username and password of id
	string u1,u2, p1,p2,p3,p4;
	cout << "INSTAGRAM" << endl << endl << endl;
    cout << "Login" << endl<<endl;          //login option
	cout << "Username" << endl;
	cin >> u1;
	if (u1 == username)
	{
		cout << endl<<"Password" << endl;
		cin >> p1;
		system("cls");
		if (p1 == password)
		{
			cout << "Login Succesfull" << endl;
			exit(0);
		}
		while (1 > 0)
		{
			if (p1 != password)
			{
				cout << "Incorrect Password" << endl << endl;
				cout << "1.Create New Password" << endl;   
				cout << "2.Exit Window" << endl;
				cout << "Enter your option here ";
				cin >> choice;
				system("cls");
				switch (choice)
				{
				case 1:
					cout << "Create New Password" << endl;
					cin >> p2;
					if (p2 == password)
					{
						system("cls");
						cout << "Already Used Password...Try something New" << endl << endl;;
						break;
					}
					else
					{
						cout << "Confirm your New Password" << endl;
						cin >> p3;
						if (p2 == p3)
						{
							system("cls");
							cout << "Password Changed Succesfully" << endl;
							exit(0);
						}
						else
						{
							system("cls");
							cout << "Error" << endl << endl;
							break;
						}
					}
					break;

				case 2:
					cout << "Thanks for Visit" << endl;
					exit(0);
				}

			}
		}
	}
	else
	{
		system("cls");
		cout << "Username doesn't exist" << endl << endl<<endl;
		while (1 > 0)
		{
			cout << "Sign-In" << endl << endl;   //sign-in option for new users
			cout << "Create Username" << endl;
			cin >> u2;
			system("cls");
			if (u2 == username)
			{
				cout << "Username already exist....Try another Username" << endl << endl;
			}
			else
			{
				cout << endl << "Create Password" << endl;
				cin >> p4;
				system("cls");
				cout << "Account Generated Succesfully" << endl;
				exit(0);
			}
		}
	}
	return 0;
}

