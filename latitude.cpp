#include <iostream>

int main()
{
	const float min_to_degree = 1 / 60.0;
	const float sec_to_degree = 1 / 3600.0;

	int degree, minutes, seconds;
	
	std::cout << "Enter a latitude in degrees, minutes, and seconds" << std::endl;
	std::cout << "First, enter the degrees: " << std::endl;
	std::cout << "degree: ";
	std::cin >> degree;
	std::cout << "Next minutes of arc: " << std::endl;
	std::cout << "minutes: ";
	std::cin >> minutes;
	std::cout << "Finally, enter the seconds of arc : " << std::endl;
	std::cout << "seconds: ";
	std::cin >> seconds;

	std::cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = " <<
		         degree + minutes * min_to_degree + seconds * sec_to_degree << " degrees " << std::endl;


	return 0;
	
	


}