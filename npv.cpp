using namespace std;

double NPV(double upfrontCost, double discount, double year1, double year2, double year3, double successrate);

int main()
{
	double upfrontCost, discount, year1, year2, year3, successrate = 0;

	cout << "Enter upfront cost:\n";
	cin >> upfrontCost;

	cout << endl;

	cout << "Enter discount (as percentage):\n";
	cin >> discount;

	cout << endl;

	cout << "Enter year 1 profit:\n";
	cin >> year1;

	cout << endl;

	cout << "Enter year 2 profit:\n";
	cin >> year2;

	cout << endl;

	cout << "Enter year 3 profit:\n";
	cin >> year3;

	cout << endl;

	cout << "Enter chance of success (as percentage):\n";
	cin >> successrate;

	double answer = NPV(upfrontCost, discount, year1, year2, year3, successrate);

	cout << "\nYour NPV is: " << answer << endl << endl;

	system("pause");

	return 0;

}

double NPV(double upfrontCost, double discount, double year1, double year2, double year3, double successrate)
{
	double success, failure, a, b, c, sum, e, f, bing;

	discount = ((discount / 100) + 1);
	success = successrate / 100;
	failure = ((100 - successrate) / 100);

	a = (year1 / discount);

	b = (year2 / (discount * discount));

	c = (year3 / (discount * discount * discount));

	sum = a + b + c;

	e = sum - upfrontCost;

	f = e * success;

	bing = (f - (upfrontCost * failure));

	return bing;
}
