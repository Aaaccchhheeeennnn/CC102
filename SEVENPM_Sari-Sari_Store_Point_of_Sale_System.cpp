#include <iostream>

using namespace std;

int main()
{
	int sugarQty;
	int riceQty;
	int sardinesQty;
	int coffeeQty;
	int milkQty;
	
	double sugarPriceUSD;
	double ricePricePound;
	double sardinesPricePound;
	double coffeePriceUSD;
	double milkPriceUSD;

    double usdToPhp = 57.460;
    double poundToPhp = 62.67;	
	cout << "Enter the price of sugar (in USD): ";
	cin >> sugarPriceUSD;
	cout << "Enter the price of rice (in Pound): ";
	cin >> ricePricePound;
	cout << "Enter the price of sardines (in Pound): ";
	cin >> sardinesPricePound;
	cout << "Enter the price of coffee (in USD): ";
	cin >> coffeePriceUSD;
	cout << "Enter the price of milk (in USD): ";
	cin >> milkPriceUSD;
	
	cout << "Enter the quantity of sugar purchased: ";
	cin >> sugarQty;
	cout << "Enter the quantity of rice purchased: ";
	cin >> riceQty;
	cout << "Enter the quantity of sardines purchased: ";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffee purchased: ";
	cin >> coffeeQty;
	cout << "Enter the quantity of milk purchased: ";
	cin >> milkQty;

	double sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
    double riceCostPHP = ricePricePound * poundToPhp * riceQty;
    double sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
    double coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
    double milkCostPHP = milkPriceUSD * usdToPhp * milkQty;

    double totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
	cout << "\n--- Purchase Details ---\n";
    cout << "Item\t\tQuantity\tPrice (PHP)\tTotal Cost (PHP)\n";
    cout << "Sugar\t\t" << sugarQty << "\t\t" << sugarPriceUSD * usdToPhp << "\t\t" << sugarCostPHP << "\n";
    cout << "Rice\t\t" << riceQty << "\t\t" << ricePricePound * poundToPhp << "\t\t" << riceCostPHP << "\n";
    cout << "Sardines\t" << sardinesQty << "\t\t" << sardinesPricePound * poundToPhp << "\t\t" << sardinesCostPHP << "\n";
    cout << "Coffee\t\t" << coffeeQty << "\t\t" << coffeePriceUSD * usdToPhp << "\t\t" << coffeeCostPHP << "\n";
    cout << "Milk\t\t" << milkQty << "\t\t" << milkPriceUSD * usdToPhp << "\t\t" << milkCostPHP << "\n";
    
    cout << "\nTotal amount to be paid in PHP: " << totalCostPHP << "\n";
	
	return 0;
}