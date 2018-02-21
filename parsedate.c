# include <stdio.h>
# include "parsedate.h"

int parse_year(const char *buf) 
{
	int year, input;
	int i;

	input = 0;
	year = 0;
	i = 0;
	while(buf[i] != '/'){
		input = buf[i] - '0'; 
		year = (year * 10) + input;
		i = i + 1;
	}
	return year;
}

int parse_month(const char *buf) 
{
	int year = 0;
	int input = 0;
	int month = 0;

	int i = 0;
	while(buf[i] != '/'){
		input = buf[i] - '0'; 
		year = (year * 10) + input;
		i = i + 1;
	}
	i = i + 1;
	input = 0;
	while(buf[i] != '/'){
		input = buf[i] - '0'; 
		month = (month * 10) + input;
		i = i + 1;
	}
  return month;
}


int parse_day(const char *buf) 
{
	int input = 0;
	int year = 0;
	int month = 0;
	int day = 0;

	int i = 0;
	while(buf[i] != '/'){
		input = buf[i] - '0'; 
		year = (year * 10) + input;
		i = i + 1;
	}
	i = i + 1;
	input = 0;
	while(buf[i] != '/'){
		input = buf[i] - '0'; 
		month = (month * 10) + input;
		i = i + 1;
	}
	i = i + 1;
	input = 0;
	while(buf[i] != '\0'){
		input = buf[i] - '0'; 
		day = (day * 10) + input;
		i = i + 1;
	}
  return day;
}

