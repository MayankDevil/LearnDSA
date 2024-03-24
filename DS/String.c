/*
	----------
	[ STRING ]
	----------
*/
#include<stdio.h>
/*
	17. calculate the length of a string.
*/
void program17()
{
	char *string = "welcome";
	
	int s;
	
	for(s = 0;string[s] != '\0'; s++);
	
//	s = printf(string);
	
	printf("\n string length is %d",s);
}
/*
	18. write a program to identify an alphabet, number, or any, in a string.
*/
void program18()
{
	char *string = "nxxx_69+18";
	
	int i = 0;
	
	while(string[i] != '\0')
	{	
		if((string[i] >= 33 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
			printf("\n %c symbol",string[i++]);
			
		if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
			printf("\n %c alphabet",string[i++]);
		
		if(string[i] >= 48 && string[i] <= 57)
			printf("\n %c number",string[i++]);
	}
}
/*
	19. reverse a string.
*/
void program19()
{
	char string[] = "welcome bro";
	
	int s;
	
	for(s = sizeof(string) - 1; s >= 0; s--)
	{
		printf("%c",string[s]);
	}
}
/*
	20. convert into upercase.
*/
void program20()
{
	char *string = "Welcome Master";
	
	int i = 0;
	
	while(string[i] != '\0')
	{
		if(string[i] >= 97 && string[i] <= 122)
			printf("%c ",(string[i++]-32));	
		else
			printf("%c ",string[i++]);
	}
}
/*
	21. convert into lowercase.
*/
void program21()
{
	char *string = "HERO HERA LAL";
	
	int i = 0;
	
	while(string[i] != '\0')
	{
		if(string[i] >= 65 && string[i] <= 90)
			printf("%c ",(string[i++]+32));	
		else
			printf("%c ",string[i++]);
	}
}
/*
	22. convert into title case.
*/
void program22()
{
	char *string = "subtitle of title";
	
	int i = 0, o = 0;
	
	while(string[i] != '\0')
	{
		if(string[i] == 32) o = i+1;
		
		if(i == o)
			if(string[i] >= 97 && string[i] <= 122)
				printf("%c ",(string[i++]-32));	
			else
				printf("%c ",string[i++]);
		else
			printf("%c ",string[i++]);
	}
}
/*
	23. convert into toggle case.
*/
void program23()
{
	char *string = "once is big next is small";
	
	int i = 0;
	
	while(string[i] != '\0')
	{
		if(i%2 == 0)
			if(string[i] >= 97 && string[i] <= 122)
				printf("%c ",(string[i++]-32));	
			else
				printf("%c ",string[i++]);
		else
			if(string[i] >= 65 && string[i] <= 90)
				printf("%c ",(string[i++]+32));	
			else
				printf("%c ",string[i++]);
	}
}
/*
	24. reverse using recursion.
*/
void recursionPrint(char *string, int s)
{
	if(s != 0)
	{
		recursionPrint(string,--s);
		printf("%c",string[s]);
	}
}
void program24()
{
	char string[] = "Superhero Gandhi Ji";
	
	int s = sizeof(string);
	
	recursionPrint(string,s);
}
/*
	25. concatenate two string.
*/
void program25()
{
	char a[] = "Chetu", b[] = "Pro";

	int i,s;
	
	for(s = 0; s < sizeof(a) -1 + sizeof(b) -1; s++)
	{
		if(s >= sizeof(a)-1)
			printf("\n %c %d",b[s-printf(a)],s);
		else
			printf("\n %c %d",a[s],s);
	}
}
/*
	26. enter charater and replace that character in string.
*/
void program26()
{
	char old_charater, new_charater, line[] = "welcome chetu bro";
	
	int i;
	
	puts(line);
	
	printf("\n enter character need to replace = ");
	scanf("\n %c",&old_charater);

	printf("\n enter character that replace = ");
	scanf("\n %c",&new_charater);
	
	for(i = 0; i < sizeof(line); i++)
	{
		if(line[i] == old_charater) line[i] = new_charater;
		
		printf("%c",line[i]);
	}
}
/*
	27. count number of spaces in the string.
*/
void program27()
{
	char *string = "number of space in string is ";
	
	int i = 0, space = 0;
	
	while(string[i] != '\0')
	{
		if(string[i] == 32) space++;
		
		printf("%c",string[i++]);
	}
	printf("%d",space);
}
/*
	28. compare two strings and tell they are same or not.
*/
void program28()
{
	char *a = "Welcome", *b = "Welcome";
	
	int i, n = 0;
	
	for(i = 0; a[i] != '\0' || b[i] != '\0'; i++)
	{
		if(a[i] != b[i])
		{
			n = 1;
			break;
		}
	}
	if(n)
		printf("\n string is not same");
	else
		printf("\n string is same");
}
/*
	29. sort the string in alphbetical order.
*/
void program29()
{
	char t, string[] = "SWEET DREAM?";
	
	int i, s, o;
	
	puts(string);
		
	for(i = 0; i < sizeof(string)-1; i++)
	{
		for(o = i; o < sizeof(string)-1; o++)
		{
			if(string[i] > string[o])
			{
				t = string[o];
				
				string[o] = string[i];
				
				string[i] = t;
			}
		}
	}
	puts("\n sort alphbetical order = \n");
	puts(string);
}
/*
	30. copy the reverse of a string.
*/
void program30()
{
	char *copy, string[] = "Program Goddes";
	
	int i;
	
	puts(string);
	
	for(i = sizeof(string)-1; i >= 0; i--)
	{
		printf("%c",string[i]);
		
		copy[i] == string[i];
	}
	puts(copy);
}
/*
	31. string is palindrome or not.
*/
void program31()
{
	char string[] = "12321";
	
	int i, n = 0, o = sizeof(string)-1, s = (sizeof(string)-1 / 2) + 1;

	for(i = 0; i < s; i++)
	{
		o--;
		
		if(string[i] != string[o])
		{
			n = 1;
			
			break;
		}
	}
	if(n)
		printf("\n string is not palindrome");
	else
		printf("\n string is palindrome");
}
/*
	32. delete that character from the string and print the remainig string.
*/
void program32()
{
	char del_charater, string[] = "Yahoo Baba";
	
	int i;
	
	puts(string);
	
	printf("\n enter character need to replace = ");
	scanf("\n %c",&del_charater);
	
	for(i = 0; i < sizeof(string)-1; i++)
	{
		if(string[i] != del_charater)
			printf("%c",string[i]);
	}
}
/*
	33. enter a line from the user and count the number of words.
*/
void program33()
{
	char string[20]; 	// string
	
	int i = 0, word = 0;
	
	puts("\n input string = \n");
	
	gets(string);	// fgets(string,sizeof(string),stdin);
	
	for(i = 0; i < sizeof(string); i++)
	{
		if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) word++;
		
		printf("%c",string[i]);
	}
	printf("\n number of word in line is %d",word);
}
/*
	34. count the number of alpbvets, digits & special charaters in the string.
*/
void program34()
{
	char string[] = "rtx(500)sped1-";
	
	int i = 0;
	
	int word = 0, number = 0, symbol = 0, space = 0;
	
	for(i = 0; i < sizeof(string)-1; i++)
	{
		if((string[i] >= 33 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
			symbol++;
		else if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
			word++;
		else if(string[i] >= 48 && string[i] <= 57)
			number++;
		else
			space++;
	}
	printf("\n word %d \n number %d \n symbol %d \n space %d \n",word,number,symbol,space);
}
/*
	35. count the number of frequency of each charater in strings.
*/
void program35()
{
	char t, string[15] = "www.google.com";
	
	int i = 0;
	
	puts("\n String and number of Frequency\n");
	
	while(string[i] != '\0')
	{
		int o = 0, frequency = 0;
		
		while(string[o] != '\0')
		{		
			if(string[i] == string[o++]) frequency++;
		}
		printf("\n %c %d",string[i++],frequency);		
	}
}
/*
	36. find the substring in the string and print its starting index.
*/
void program36()
{
	char substring[10], string[20]= "Hello MisWorld";
	
	int i, o, x, s, e = 0, f = 0;
	
	puts(string);
	
	puts("\n enter substring = ");
	
	scanf("%s",substring);

	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == substring[0])
		{
			s = i;
			x = i;	

			for(e = 0; substring[e] != '\0'; e++)
			{
				if(string[x++] == substring[e]) f++;
			}
			if(f == e) printf("\n substring start index is %d",s);
		}
	}
	puts("\n substring");
}
/*
	37. enter a line from user then enter the charater you want to replace with another character.
*/
void program37()
{
	char old_charater, new_charater, line[20];
	
	int i;
	
	puts("\n write line = \n");
	
	gets(line);
	
	puts(line);
		
	puts("\n enter old character replace = ");
	
	scanf("\n %c",&old_charater);
	
	puts("\n enter new character replace = ");
	
	scanf("\n %c",&new_charater);
	
	for(i = 0; i < sizeof(line); i++)
	{
		if(line[i] == old_charater)
		{
			line[i] = new_charater;
		}
		printf("%c",line[i]);
	}	
}
/*
	38. enter number from user and change it into strng.
*/
void program38()
{
	int i, number[10];
	
	puts("\n enter numbers for change into string = \n");
	
	for(i = 0; i < 10; i++) scanf("%d",&number[i]);
	
	puts("\n change string is = \n");
	
	for(i = 0; i < 10; i++) printf("%c",number[i]);
}
/*
	39. enter the string from user and replace into numbers.
*/
void program39()
{
	char string[20];
	
	int i, number;
	
	puts("\n write = \n");
	
	gets(string);
	
	puts("\n convert into number = \n");
	
	while(string[i] != '\0')
	{
		printf(" %d ",string[i++]);	
	}
}
/*
	main function
*/
void main()
{
//	program17();
//	program18();
//	program19();
	
//	program20();
//	program21();
//	program22();
//	program23();
//	program24();
//	program25();
//	program26();
//	program27();
//	program28();
//	program29();
	
//	program30();
//	program31();
//	program32();
//	program33();
//	program34();
//	program35();
	program36();
//	program37();
//	program38();
//	program39();
}
// the end
