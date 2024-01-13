English translation of the tasks given->Tasks to be completed:
Task 10.1. Floating Point Number
Define a regular expression that allows checking whether a given character string contains a floating-point number with a sign (an integer separated from the fractional part by a dot, e.g., +6.789, -7.234). In the main function, test the created regular expressions.

Task 10.2. Time
Define a regular expression for recognizing the time. We assume that the time format is either hh:mm:ss or hh:mm, where hh is hours (0-23), mm is the number of minutes (0-59), and ss is the number of seconds (0-59). Providing seconds is optional. The numbers (hh, mm, ss) are always represented with two digits. In the main function, test the created regular expressions.

Task 10.3. Address of Residence
Define regular expressions to check:
- Street (the name can consist only of Latin alphabet letters and spaces).
- Postal code (in the format XX-XXX, where X is a digit).
- House number (a number or a number with a letter, e.g., 28, 28B).
- Apartment number.
In the main function, test the created regular expressions.

Task 10.4. Record Book
Define regular expressions to check:
- First name (the name can consist only of Latin alphabet letters).
- Last name (the last name can consist of Latin alphabet letters and a hyphen in compound last names, for example: Nowak-Kowalska).
- Age (a number from 0 to 99).
- Mobile phone number (a phone number consists of 9 digits, where the first digit cannot be 0).
- Email (email in the form u@x.y, where u is the username, which can consist of Latin alphabet letters, digits, and characters: underscore, hyphen, dot, and cannot start with a digit, underscore, dot, or hyphen; x.y is the domain name, which can consist of Latin alphabet letters and digits).
Write a program that will read from the user: first name, last name, age, mobile phone number, and email, and check with the defined regular expressions if the provided data is correct. If the user has entered valid data, it should be saved to a file. If the file exists, the data should be appended at the end. Information about one person should be written in one line, where the data should be separated by a semicolon.

Task 10.5. Statistics
Use the file created in task 10.4. and display the following information based on it:
- Names of unique domains.
- Phone numbers ending with an even number.
- Compound last names.
- Statistics of first names (name + number of occurrences).
