#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	//Declare Variables For Calculating Our Financial Information

	//Company Name Form
	string companyName;

	//User Input Form
	double dm;	// Direct Materials
	double dl; // Direct Labor
	double mo; // Manufacturing Overhead
	double sellExp; // Selling Expenses
	double adminExp; // Administrative Expenses
	double adminSalary; // Administrative Salary
	double saleCommission; // Sales Commissions
	double inDL; //Indirect Labor
	double unitsSold; // Number of Units Sold
	double begMerchInv; // Begginning Merchandise Inventory 
	double endMerchInv; // Ending Merchandise Inventory
	double varAdminExp; // Variable Administrative Expenses
	double varSellExp; // Variable Selling Expenses
	double totalFixAdminExp; // Total Fixed Administrative Expenses
	double totalFixSellExp; // Total Fixed Selling Expenses
	double sellPricePerUnit; //Selling Price Per Unit

	//Calculating Various Calculations
	double conversionCost; //Direct Labor + Manufacturing Overcast
	double cmPerUnit; //Contribution Margin Per Unit = Selling Price per Unit = Variable Cost per Unit
	double margin; //Net Operating Income / Average Operating Assets
	double turnover; // Sales / Average Operating Assets
	double roi; //Return on Investments = Margin * Turnover
	double cmRatio; //Contribution Margin Ratio = Contribution Margin / Sales
	double por; //Predetermined Overhead Rate = Estimated Total Overhead / Estimated Total Direct Labor Hours

	



	cout << "Welcome to the Managerial Accounting Program. " << endl;

	return 0;
}