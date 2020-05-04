#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
enum CommandTypes {
  A_COMMAND, C_COMMAND, L_COMMAND
	  //dest=comp;jump
}

class Parser{
string CurrentLine;
string NextLine;
CommandTypes types;
	Parser(){}
	void advance() {
		
        if (CurrentLine.find("//") != string::npos) // if only have '//'
            CurrentLine = CurrentLine.substr(0, CurrentLine.find("//"));
	if (line.find_first_not_of(' ') == line.npos)// if only have 'blank' 
             getline(cin, line);
	    //return ;
	}
	CommandTypes commandtype()
    {
        if (CurrentLine.find("@") == 0)
		return A_COMMAND;
	if (CurrentLine.find("(") != string::npos)
		return L_COMMAND;
	else
		return C_COMMAND;
    }
    string symbol() const
    {
        if (CurrentLine.find("@") != string::npos)
            return CurrentLine.substr(1);
    }
    string dest() const
    {
        if (CurrentLine.find("=") == string::npos) //no dest part if no =, return null 
            return "null";
        else
            return CurrentLine.substr(0, line.find("="));
    }
    string jump() const
    {
       if (CurrentLine.find(";") == string::npos) // if no found ;, return null 
            return "null";
        else
            return CurrentLine.substr(line.find(";") + 1);
    }
    string comp() const
    {
       
	  
    }
	
	
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
		else if (input == "M-1")
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

	
	
	
	
}

int main () {
    Parser parser;
    Code code;
    CommandTypes t;
}
