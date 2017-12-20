%{
/* 
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "asm.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;
static char* fileName ;
static FILE* output;
%}

/* regular definitions */
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
integer_const	([1-9]{digit}*)|"0"
white_space		[ \t]+
special_char	\\[nt]

%x COMMENT
%%
"write_int"		        { printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"write_string"		        { printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"write_char"		        { printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"int" 		|
"char"		{ printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return TYPE; }
"void"		{ printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return VOID; }
"struct"	{ printLex(yytext);//printf("%s\n", yytext);
    yylval.stringVal = yytext;return STRUCT;}
"return"	{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return RETURN; }
"if"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return IF; }
"else"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return ELSE; }
"while"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return WHILE; }
"for"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return FOR; }
"break"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return BREAK; }
"continue"	{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return CONTINUE; }
"||"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return LOGICAL_OR; }
"&&"		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return LOGICAL_AND; }
"<"		|
"<="		|
">"		|
">="		{printLex(yytext);//printf("%s\n", yytext); 
    yylval.stringVal = yytext;return RELOP; }
"=="		|
"!="		{ printLex(yytext);//printf("%s\n", yytext);
    yylval.stringVal = yytext;return EQUOP; }
"++"		{ printLex(yytext);//printf("%s\n", yytext);
    yylval.stringVal = yytext;return INCOP; }
"--"		{ printLex(yytext);//printf("%s\n", yytext);
    yylval.stringVal = yytext;return DECOP; }
"->"		{ printLex(yytext);//printf("%s\n", yytext);
    yylval.stringVal = yytext;return STRUCTOP; }	
{id}		{
		//Search the hash table to find the pointer of entry for yytext.
		struct id* entered = enter(0, yytext, yyleng);
		printLex(yytext);//printf("%s\n", yytext);
		yylval.idPtr = entered;
		//yylval.stringVal = entered->name;
		//printLex(yytext);//printf("subc.l : yylval.idPtr->name : %s\n", (yylval.idPtr)->name);
		//return entered->lextype;
		return ID;
}
{integer_const}	{//printf("%s\n", yytext);
            printLex(yytext);
		   yylval.intVal = atoi(yytext);
		   return INTEGER_CONST;
		}
\"({special_char}|[^\\\"\n])*\"	{
			/* String Variable */
		   printLex(yytext);//printf("%s\n", yytext); 
		yylval.stringVal = yytext;
		   return STRING;
		}
'({special_char}|[^\\'\n])'	{
			/* Character Variable */
		   printLex(yytext);//printf("%s\n", yytext);
			yylval.stringVal = yytext;
		   return CHAR_CONST;
		}
"."			{printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"("                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
")"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"["                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"]"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"{"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"}"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
","                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"!"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"~"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"*"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"\\"                     {printLex(yytext);//printf("%s\n", yytext);i
    return yytext[0];}
"%"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"-"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"<<"                    {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
">>"                    {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"/"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"%"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"+"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"-"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"&"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"^"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"|"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"?"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
":"                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
";"                     {printLex(yytext);//printf("%s\n", yytext);
    return ';';}
"="                     {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"&="                    {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"^="                    {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"|="                    {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
"<<="                   {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
">>="                   {printLex(yytext);//printf("%s\n", yytext);
    return yytext[0];}
{white_space}
<*>\n		   ++lineno;
<INITIAL,COMMENT>"/*"	{
		   ++comment_depth;
		   BEGIN (COMMENT);
		}
<COMMENT>"*/"	   if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.		 {}


%%
void printLex(char* token){
    printf("%s\n", token);
}

int read_line()
{
   return lineno;
}

char* get_file_name(){
    return fileName;
}

FILE* getFilePtr(){
    return output;
} 
int main(int argc, char* argv[])
{
   static char *keyword[] = {"int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue", "||", "&&", "<", "<=", ">", ">=", "==", "!=", "++", "--", "->", NULL };
   static int tokentype[] = {TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, LOGICAL_OR, LOGICAL_AND, RELOP, RELOP, RELOP, RELOP, EQUOP, EQUOP, INCOP, DECOP, STRUCTOP, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(0, keyword[i], strlen(keyword[i]));

   if(argc >= 2) {
       yyin = fopen(argv[1], "r");
       fileName = argv[1];

       output = fopen(argv[2], "w");
       //fprintf(output, "%d\n", 1);
	
   }
   else yyin = stdin;
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }

   initType();	
   yyparse();
   fclose(yyin);
   fclose(output);
  return 0;
}
