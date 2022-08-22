#pragma once
#include <iostream>
#include <vector>


class lex_scan {
	std::string var;//variable name
};





std::vector<std::string> ident {
	"int", "bool", "char", "string"
};
//at empty space, check if next character is space , if true, current can pos increment by 1, if not see if first char matches with any illegals 

std::vector<std::string> words;// stored words 


void lex_parse(FILE* f_ptr, std::string file_name) {//this funciton turns chars from input into a readable format for program
	std::string temp;//temporary variable, push shit into it 
	
	
	
	
	errno_t err;
	 
	char ch_temp;
	int count = 0;
	//if ((err = fopen_s(&f_ptr, "text.txt", "r")) != 0) {
	fopen_s(&f_ptr, "text.txt", "r");
		while (feof(f_ptr) != EOF) {
			printf("%i", count);
			ch_temp = fgetc(f_ptr);
			if (ch_temp != ' ') {
				temp += ch_temp;
			}
			else if (temp.length() > 0 and ch_temp == ' ') {
				words.push_back(temp);
				temp.clear();
			}
		}
	//}
	//else {
	//	printf("else ");
	//}



}


