#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::istream;
using std::string;
using std::ofstream;

int main()
{

	//File
	ofstream outputFile;

	//File Open Attempt
	outputFile.open("financial_info.txt");

	//Verify

	if(outputFile.is_open())
	{
		//Process File
		outputFile << "Financial Info Data" << endl;

		//Close
		outputFile.close();
	}

	// Declare Variables For Calculating Our Financial Information

	// Company Name Form
	string companyName;

	// User Input Form
	double dm;				 // Direct Materials
	double dl;				 // Direct Labor
	double mo;				 // Manufacturing Overhead
	double sellExp;			 // Selling Expenses
	double adminExp;		 // Administrative Expenses
	double adminSalary;		 // Administrative Salary
	double saleCommission;	 // Sales Commissions
	double inDL;			 // Indirect Labor
	double unitsSold;		 // Number of Units Sold
	double begMerchInv;		 // Begginning Merchandise Inventory
	double endMerchInv;		 // Ending Merchandise Inventory
	double varAdminExp;		 // Variable Administrative Expenses
	double varSellExp;		 // Variable Selling Expenses
	double totalFixAdminExp; // Total Fixed Administrative Expenses
	double totalFixSellExp;	 // Total Fixed Selling Expenses
	double sellPricePerUnit; // Selling Price Per Unit

	// Calculating Various Calculations
	double conversionCost; // Direct Labor + Manufacturing Overcast
	double cmPerUnit;	   // Contribution Margin Per Unit = Selling Price per Unit = Variable Cost per Unit
	double margin;		   // Net Operating Income / Average Operating Assets
	double turnover;	   // Sales / Average Operating Assets
	double roi;			   // Return on Investments = Margin * Turnover
	double cmRatio;		   // Contribution Margin Ratio = Contribution Margin / Sales
	double por;			   // Predetermined Overhead Rate = Estimated Total Overhead / Estimated Total Direct Labor Hours

	// Options
	int options;

	cout << "Welcome to the Managerial Accounting Program. " << endl;

	// Display Options
	cout << "1. Conversion Cost " << endl;
	cout << "2. Contribution Margin Per Unit " << endl;
	cout << "3. Margin " << endl;
	cout << "4. Turnover " << endl;
	cout << "5. Return on Investments " << endl;
	cout << "6. Contribution Margin Ratio " << endl;
	cout << "7. Predetermined Overhead Rate " << endl;

	// Option User Input
	cout << "What do you want to calculate? " << endl;
	cin >> options;

	// getline(cin, options);

	// Switch Options
	switch (options)
	{

	case 1:
		cout << "You've selected Conversion Cost" << endl;
		break;

	case 2:
		cout << "You've selected Contribution Margin Per Unit" << endl;
		break;

	case 3:
		cout << "You've selected Margin " << endl;
		break;

	case 4:
		cout << "You've selected Turnover" << endl;
		break;

	case 5:
		cout << "You've selected Return on Investments" << endl;
		break;

	case 6:
		cout << "You've selected Contribution Margin Ratio" << endl;
		break;

	case 7:
		cout << "You've selected Predetermined Overhead Rate" << endl;
		break;

	default:
		cout << "Not an Option. Please Select Again" << endl;
	}
	return 0;
}