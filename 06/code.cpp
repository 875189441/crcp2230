class Code
{
public:
	string dest(string input)
	{
		if (input == "null")
			return "000";
		else if (input == "M")
			return "001";
		else if (input == "D")
			return "010";
		else if (input == "MD")
			return "011";
		else if (input == "A")
			return "100";
		else if (input == "AM")
			return "101";
		else if (input == "AD")
			return "110";
		else if (input == "AMD")
			return "111";
	}
	string comp(string input)
	{
		if (input == "0")
			return "0101010";
		else if (input == "1")
		}
};