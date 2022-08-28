#include <iostream>
#include <regex>

void f_email(std::string email)
{
	const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	
	if (regex_match(email, pattern))
	{
		int i = 0;
		std::string str = "";

		if (!(email[i] >= 97 && email[i] <= 122))
		{
			std::cout << "Email address is invalid! " << email << std::endl;
			
			return;
		}
		while (email[i] != '@')
		{
			++i;
		}
		while (email[i] != '\0')
		{
			str += email[i];
			++i;
		}
		if (str == "@mail.ru" || str == "@inbox.ru" || str == "@list.ru" || str == "@bk.ru" || str == "@internet.ru" || str == "@yandex.r    u" || str == "@gmail.com" || str == "@yahoo.com" || str == "@hotmail.com" || str == "@autolook.com")
		{
			std::cout << "Email address is valid: " << email << std::endl;
			
			return;
		}
		else
		{
			std::cout << "Email address is invalid!" << email << std::endl;
			
			return;
		}
	}
	else
	{
		std::cout << "Your Email is invalid!" << email << std::endl;
		
		return;
	}
}

void f_date(int day, int month, int year)
{
	if (day >= 1 && day <= 31)
	{
		if (month >= 1 && month <= 12)
		{
			if (year >= 1860 && year <= 2022)
			{
				if (month == 2)
				{
					if (day <= 29 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
					{
						std::cout << "Date is valid: " << day << "." << month << "." << year << std::endl;
						
						return;
					}
					if (day <= 28 && !(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
					{
						std::cout << "Date is valid: " << day << "." << month << "." << year << std::endl;
						
						return;
					}
				}
				if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
				{
					std::cout << "Date is valid: " << day << "." << month << "." << year << std::endl;
					
					return;
				}
				else
				{
					std::cout << "Date is valid: " << day << "." << month << "." << year << std::endl;
					
					return;
				}
			}
		}
	}

	return;
}

void f_website_link(std::string website_link)
{
	const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
	
	if (regex_match(website_link, pattern))
	{
		std::cout << "Website_link is valid: " << website_link << std::endl;
		
		return;
	}
	else
	{
		std::cout << "Website_link is invalid: " << website_link << std::endl;
		
		return;
	}

	return;
}

void f_phone_number(std::string phone_number)
{
	const std::regex pattern("(091|099|096|043|033|079|055|095|041|044|066|050|093|094|077|098|049|022)?[0-9]{6}");
	
	if (regex_match(phone_number, pattern))
	{
		std::cout << "Phone number is valid: " << phone_number << std::endl;
		
		return;
	}
	else
	{
		std::cout << "Phone number is invalid! " << phone_number << std::endl;
		
		return;
	}
}

int main()
{
	int day;
	int month;
	int year;
	std::string email;
	std::string website_link;
	std::string credit_card_number;
	std::string phone_number;

//	std::cout << "Your Email: ";
//	std::cin >> email;
//	std::cout << "Day: ";
//	std::cin >> day;
//	std::cout << "Month: ";
//	std::cin >> month;
//	std::cout << "Year: ";
//	std::cin >> year;
//	std::cout << "Website link: ";
//	std::cin >> website_link;
	std::cout << "Credit card number: ";
	std::cin >> credit_card_number;
//	std::cout << "Phone number: ";
//	std::cin >> phone_number;

//	f_email(email);
//	f_date(day, month, year);
//	f_website_link(website_link);
	f_credit_card_number(credit_card_number);
//	f_phone_number(phone_number);

	return 0;
}

