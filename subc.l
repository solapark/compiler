%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;

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
"int" 		|
"char"		{ printf("%s\n", yytext); yylval.stringVal = yytext;return TYPE; }
"void"		{ printf("%s\n", yytext); yylval.stringVal = yytext;return VOID; }
"struct"	{ printf("%s\n", yytext);yylval.stringVal = yytext;return STRUCT;}
"return"	{printf("%s\n", yytext); yylval.stringVal = yytext;return RETURN; }
"if"		{printf("%s\n", yytext); yylval.stringVal = yytext;return IF; }
"else"		{printf("%s\n", yytext); yylval.stringVal = yytext;return ELSE; }
"while"		{printf("%s\n", yytext); yylval.stringVal = yytext;return WHILE; }
"for"		{printf("%s\n", yytext); yylval.stringVal = yytext;return FOR; }
"break"		{printf("%s\n", yytext); yylval.stringVal = yytext;return BREAK; }
"continue"	{printf("%s\n", yytext); yylval.stringVal = yytext;return CONTINUE; }
"||"		{printf("%s\n", yytext); yylval.stringVal = yytext;return LOGICAL_OR; }
"&&"		{printf("%s\n", yytext); yylval.stringVal = yytext;return LOGICAL_AND; }
"<"		|
"<="		|
">"		|
">="		{printf("%s\n", yytext); yylval.stringVal = yytext;return RELOP; }
"=="		|
"!="		{ printf("%s\n", yytext);yylval.stringVal = yytext;return EQUOP; }
"++"		{ printf("%s\n", yytext);yylval.stringVal = yytext;return INCOP; }
"--"		{ printf("%s\n", yytext);yylval.stringVal = yytext;return DECOP; }
"->"		{ printf("%s\n", yytext);yylval.stringVal = yytext;return STRUCTOP; }	
{id}		{
		//Search the hash table to find the pointer of entry for yytext.
		struct id* entered = enter(0, yytext, strlen(yytext));
	
		printf("%s\n", yytext);
		yylval.stringVal = entered->name;
		//return entered->lextype;
		return ID;
}
{integer_const}	{printf("%s\n", yytext);
		   yylval.intVal = atoi(yytext);
		   return INTEGER_CONST;
		}
\"({special_char}|[^\\\"\n])*\"	{
			/* String Variable */
		   printf("%s\n", yytext); 
		yylval.stringVal = yytext;
		   return STRING;
		}
'({special_char}|[^\\'\n])'	{
			/* Character Variable */
		   printf("%s\n", yytext);
			yylval.stringVal = yytext;
		   return CHAR_CONST;
		}
"."			{printf("%s\n", yytext);return yytext[0];}
"("                     {printf("%s\n", yytext);return yytext[0];}
")"                     {printf("%s\n", yytext);return yytext[0];}
"["                     {printf("%s\n", yytext);return yytext[0];}
"]"                     {printf("%s\n", yytext);return yytext[0];}
"{"                     {printf("%s\n", yytext);return yytext[0];}
"}"                     {printf("%s\n", yytext);return yytext[0];}
","                     {printf("%s\n", yytext);return yytext[0];}
"!"                     {printf("%s\n", yytext);return yytext[0];}
"~"                     {printf("%s\n", yytext);return yytext[0];}
"+"			{printf("%s\n", yytext);return yytext[0];}
"*"                     {printf("%s\n", yytext);return yytext[0];}
"\\"                     {printf("%s\n", yytext);return yytext[0];}
"%"                     {printf("%s\n", yytext);return yytext[0];}
"-"                     {printf("%s\n", yytext);return yytext[0];}
"<<"                    {printf("%s\n", yytext);return yytext[0];}
">>"                    {printf("%s\n", yytext);return yytext[0];}
"/"                     {printf("%s\n", yytext);return yytext[0];}
"%"                     {printf("%s\n", yytext);return yytext[0];}
"+"                     {printf("%s\n", yytext);return yytext[0];}
"-"                     {printf("%s\n", yytext);return yytext[0];}
"&"                     {printf("%s\n", yytext);return yytext[0];}
"^"                     {printf("%s\n", yytext);return yytext[0];}
"|"                     {printf("%s\n", yytext);return yytext[0];}
"?"                     {printf("%s\n", yytext);return yytext[0];}
":"                     {printf("%s\n", yytext);return yytext[0];}
";"                     {printf("%s\n", yytext);return yytext[0];}
"="                     {printf("%s\n", yytext);return yytext[0];}
"&="                    {printf("%s\n", yytext);return yytext[0];}
"^="                    {printf("%s\n", yytext);return yytext[0];}
"|="                    {printf("%s\n", yytext);return yytext[0];}
"<<="                   {printf("%s\n", yytext);return yytext[0];}
">>="                   {printf("%s\n", yytext);return yytext[0];}
{white_space}
<*>\n		   ++lineno;
<INITIAL,COMMENT>"/*"	{
		   ++comment_depth;
		   BEGIN (COMMENT);
		}
<COMMENT>"*/"	   if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.		 {}


%%

int read_line()
{
   return lineno;
}
   
int main(int argc, char* argv[])
{
   static char *keyword[] = {"int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue", "||", "&&", "<", "<=", ">", ">=", "==", "!=", "++", "--", "->", NULL };
   static int tokentype[] = {TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, LOGICAL_OR, LOGICAL_AND, RELOP, RELOP, RELOP, RELOP, EQUOP, EQUOP, INCOP, DECOP, STRUCTOP, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(0, keyword[i], strlen(keyword[i]));

   if(argc >= 2) yyin = fopen(argv[1], "r");
   else yyin = stdin;
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }
	
   yyparse();
   fclose(yyin);
   return 0;
}
