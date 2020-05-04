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
			return "0111111";
		else if (input == "-1")
			return "0111010";
		else if (input == "D")
			return "0001100";
		else if (input == "A")
			return "0110000";
		else if (input == "M")
			return "1110000";
		else if (input == "!D")
			return "0001101";
		else if (input == "!A")
			return "0110001";
		else if (input == "!M")
			return "1110001";
		else if (input == "-D")
			return "0001111";
		else if (input == "-A")
			return "0110011";
		else if (input == "-M")
			return "1001111";
		else if (input == "D+1")
			return "0011111";
		else if (input == "A+1")
			return "0110111";
		else if (input == "M+1")
			return "1110111";
		else if (input == "D-1")
			return "0001110";
		else if (input == "A-1")
			return "0110010";
		else if (in == "M-1")
			return "1110010";
		else if (input == "D+A")
			return "0000010";
		else if (input == "D+M")
			return "1000010";
		else if (input == "D-A")
			return "0010011";
		else if (input == "D-M")
			return "1010011";
		else if (input == "A-D")
			return "0000111";
		else if (input == "M-D")
			return "1000111";
		else if (input == "D&A")
			return "0000000";
		else if (input == "D&M")
			return "1000000";
		else if (input == "D|A")
			return "0010101";
		else if (input == "D|M")
			return "1010101";
		}
};
