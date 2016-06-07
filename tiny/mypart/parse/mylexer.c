/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 6 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 06/02/16
* Time: 10:01:24
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2016Äê5ÔÂ27ÈÕ
****************************************************************************/
#include "myparser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char myToken[1000];
int lineNo = 1;
char oneLine[1000];
int lineNumber = 0;

#line 60 "mylexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 84 ".\\mylexer.l"
	char c;
				while (1) {
					c = input();
					if(c=='\n') lineNo++;
					if (c=='}') break;
				}
			
#line 187 "mylexer.c"
		}
		break;
	case 2:
		{
#line 91 ".\\mylexer.l"
	lineNumber=0;oneLine[lineNumber]='\0';lineNo++;
#line 194 "mylexer.c"
		}
		break;
	case 3:
		{
#line 92 ".\\mylexer.l"
 
				char c;
				oneLine[lineNumber++]='\'';
				int cnt = 0;
				while (1) {
					c = input();
					oneLine[lineNumber++]=c;
					if (c=='\'' ||c=='\n') break;
					myToken[cnt] = c;
					++cnt;
				}
				if(c == '\n'){
					oneLine[lineNumber]='\0';
//					fprintf(stdout, "%s\n", oneLine);
					lineNumber=0;
					oneLine[lineNumber]='\0';
					lineNo++;
					return ERROR;
				}
				myToken[cnt] = '\0';
				oneLine[lineNumber++]='\'';
				oneLine[lineNumber]='\0'; 
				if (cnt>1) return STRING;
				else return CHAR;
			
#line 225 "mylexer.c"
		}
		break;
	case 4:
		{
#line 117 ".\\mylexer.l"
 
				char c;
				oneLine[lineNumber++]='\"';
				int cnt = 0;
				while (1) {
					c = input();
					oneLine[lineNumber++]=c;
					if (c=='\"' ||c=='\n') break;
					myToken[cnt] = c;
					++cnt;
				}
				if(c == '\n'){
					oneLine[lineNumber]='\0';
//					fprintf(stdout, "%s\n", oneLine);
					lineNumber=0;
					oneLine[lineNumber]='\0';
					lineNo++;
					return ERROR;
				}
				myToken[cnt] = '\0';
				oneLine[lineNumber++]='\"';
				oneLine[lineNumber]='\0'; 
				if (cnt>1) return STRING;
				else return CHAR;
			
#line 256 "mylexer.c"
		}
		break;
	case 5:
		{
#line 142 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return DOT; 
#line 263 "mylexer.c"
		}
		break;
	case 6:
		{
#line 143 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return SEMI; 
#line 270 "mylexer.c"
		}
		break;
	case 7:
		{
#line 144 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return EQUAL; 
#line 277 "mylexer.c"
		}
		break;
	case 8:
		{
#line 145 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return LP;
#line 284 "mylexer.c"
		}
		break;
	case 9:
		{
#line 146 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return RP;
#line 291 "mylexer.c"
		}
		break;
	case 10:
		{
#line 147 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return LB;
#line 298 "mylexer.c"
		}
		break;
	case 11:
		{
#line 148 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return RB;
#line 305 "mylexer.c"
		}
		break;
	case 12:
		{
#line 149 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return COMMA;
#line 312 "mylexer.c"
		}
		break;
	case 13:
		{
#line 150 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return COLON;
#line 319 "mylexer.c"
		}
		break;
	case 14:
		{
#line 151 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return ASSIGN;
#line 326 "mylexer.c"
		}
		break;
	case 15:
		{
#line 152 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return UNEQUAL;
#line 333 "mylexer.c"
		}
		break;
	case 16:
		{
#line 153 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return GE;
#line 340 "mylexer.c"
		}
		break;
	case 17:
		{
#line 154 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return GT;
#line 347 "mylexer.c"
		}
		break;
	case 18:
		{
#line 155 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return LE;
#line 354 "mylexer.c"
		}
		break;
	case 19:
		{
#line 156 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return LT;
#line 361 "mylexer.c"
		}
		break;
	case 20:
		{
#line 157 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return PLUS;
#line 368 "mylexer.c"
		}
		break;
	case 21:
		{
#line 158 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return MINUS;
#line 375 "mylexer.c"
		}
		break;
	case 22:
		{
#line 159 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return MUL;
#line 382 "mylexer.c"
		}
		break;
	case 23:
		{
#line 160 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return MOD;
#line 389 "mylexer.c"
		}
		break;
	case 24:
		{
#line 161 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return DIV;
#line 396 "mylexer.c"
		}
		break;
	case 25:
		{
#line 162 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return PROGRAM;
#line 403 "mylexer.c"
		}
		break;
	case 26:
		{
#line 163 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return CONST;
#line 410 "mylexer.c"
		}
		break;
	case 27:
		{
#line 164 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return SYS_CON;
			
#line 420 "mylexer.c"
		}
		break;
	case 28:
		{
#line 168 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return TYPE;
#line 427 "mylexer.c"
		}
		break;
	case 29:
		{
#line 169 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return SYS_TYPE;
			
#line 437 "mylexer.c"
		}
		break;
	case 30:
		{
#line 173 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return ARRAY;
#line 444 "mylexer.c"
		}
		break;
	case 31:
		{
#line 174 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return OF;
#line 451 "mylexer.c"
		}
		break;
	case 32:
		{
#line 175 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return RECORD;
#line 458 "mylexer.c"
		}
		break;
	case 33:
		{
#line 176 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return END;
#line 465 "mylexer.c"
		}
		break;
	case 34:
		{
#line 177 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return BEGIN2;
#line 472 "mylexer.c"
		}
		break;
	case 35:
		{
#line 178 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return SYS_PROC;
			
#line 482 "mylexer.c"
		}
		break;
	case 36:
		{
#line 182 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return READ;
#line 489 "mylexer.c"
		}
		break;
	case 37:
		{
#line 183 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return IF;
#line 496 "mylexer.c"
		}
		break;
	case 38:
		{
#line 184 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return THEN;
#line 503 "mylexer.c"
		}
		break;
	case 39:
		{
#line 185 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return ELSE;
#line 510 "mylexer.c"
		}
		break;
	case 40:
		{
#line 186 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return REPEAT;
#line 517 "mylexer.c"
		}
		break;
	case 41:
		{
#line 187 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return UNTIL;
#line 524 "mylexer.c"
		}
		break;
	case 42:
		{
#line 188 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return FOR;
#line 531 "mylexer.c"
		}
		break;
	case 43:
		{
#line 189 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return DO;
#line 538 "mylexer.c"
		}
		break;
	case 44:
		{
#line 190 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return TO;
#line 545 "mylexer.c"
		}
		break;
	case 45:
		{
#line 191 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return DOWNTO;
#line 552 "mylexer.c"
		}
		break;
	case 46:
		{
#line 192 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return CASE;
#line 559 "mylexer.c"
		}
		break;
	case 47:
		{
#line 193 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return GOTO;
#line 566 "mylexer.c"
		}
		break;
	case 48:
		{
#line 194 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return AND;
#line 573 "mylexer.c"
		}
		break;
	case 49:
		{
#line 195 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return OR;
#line 580 "mylexer.c"
		}
		break;
	case 50:
		{
#line 196 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return SYS_FUNCT;
			
#line 590 "mylexer.c"
		}
		break;
	case 51:
		{
#line 200 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				return VAR;
			
#line 599 "mylexer.c"
		}
		break;
	case 52:
		{
#line 203 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return FUNCTION;
#line 606 "mylexer.c"
		}
		break;
	case 53:
		{
#line 204 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return PROCEDURE;
#line 613 "mylexer.c"
		}
		break;
	case 54:
		{
#line 205 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return WHILE;
#line 620 "mylexer.c"
		}
		break;
	case 55:
		{
#line 206 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return NOT;
#line 627 "mylexer.c"
		}
		break;
	case 56:
		{
#line 207 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return REAL;
			
#line 637 "mylexer.c"
		}
		break;
	case 57:
		{
#line 211 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return INTEGER;
			
#line 647 "mylexer.c"
		}
		break;
	case 58:
		{
#line 215 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
				strcpy(myToken, yytext);
				return ID;
			
#line 657 "mylexer.c"
		}
		break;
	case 59:
		{
#line 219 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);return DOTDOT;
#line 664 "mylexer.c"
		}
		break;
	case 60:
		{
#line 220 ".\\mylexer.l"

//				fprintf(stdout, "%s\n", oneLine);
				lineNumber=0;
				oneLine[lineNumber]='\0';
				lineNo++;
			
#line 676 "mylexer.c"
		}
		break;
	case 61:
		{
#line 226 ".\\mylexer.l"
	strcat(oneLine, yytext);lineNumber=strlen(oneLine);
#line 683 "mylexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 305;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 62, 29 },
	{ 94, 56 },
	{ 78, 38 },
	{ 76, 37 },
	{ 58, 27 },
	{ 50, 24 },
	{ 71, 74 },
	{ 77, 37 },
	{ 68, 32 },
	{ 79, 38 },
	{ 59, 27 },
	{ 109, 75 },
	{ 80, 38 },
	{ 110, 75 },
	{ 63, 29 },
	{ 84, 41 },
	{ 108, 74 },
	{ 51, 24 },
	{ 88, 56 },
	{ 81, 38 },
	{ 64, 29 },
	{ 52, 24 },
	{ 69, 32 },
	{ 5, 1 },
	{ 82, 39 },
	{ 85, 41 },
	{ 111, 75 },
	{ 53, 25 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 54, 25 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 15, 1 },
	{ 16, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 19, 1 },
	{ 20, 1 },
	{ 47, 18 },
	{ 48, 18 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 22, 1 },
	{ 133, 108 },
	{ 23, 1 },
	{ 83, 40 },
	{ 21, 1 },
	{ 134, 108 },
	{ 24, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 27, 1 },
	{ 28, 1 },
	{ 29, 1 },
	{ 30, 1 },
	{ 21, 1 },
	{ 31, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 32, 1 },
	{ 33, 1 },
	{ 34, 1 },
	{ 35, 1 },
	{ 21, 1 },
	{ 36, 1 },
	{ 37, 1 },
	{ 38, 1 },
	{ 39, 1 },
	{ 40, 1 },
	{ 41, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 42, 1 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 60, 28 },
	{ 44, 14 },
	{ 61, 28 },
	{ 86, 44 },
	{ 88, 50 },
	{ 89, 51 },
	{ 90, 52 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 91, 53 },
	{ 92, 54 },
	{ 93, 55 },
	{ 49, 20 },
	{ 21, 173 },
	{ 95, 57 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 21, 173 },
	{ 71, 34 },
	{ 55, 26 },
	{ 72, 34 },
	{ 135, 109 },
	{ 66, 31 },
	{ 96, 58 },
	{ 97, 59 },
	{ 98, 60 },
	{ 56, 26 },
	{ 99, 61 },
	{ 100, 62 },
	{ 125, 109 },
	{ 67, 31 },
	{ 101, 63 },
	{ 73, 34 },
	{ 57, 26 },
	{ 45, 15 },
	{ 102, 64 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 15, 15 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 87, 87 },
	{ 103, 65 },
	{ 104, 67 },
	{ 105, 68 },
	{ 106, 69 },
	{ 107, 70 },
	{ 88, 73 },
	{ 70, 33 },
	{ 43, 13 },
	{ 112, 76 },
	{ 113, 77 },
	{ 114, 78 },
	{ 115, 80 },
	{ 116, 81 },
	{ 117, 82 },
	{ 118, 83 },
	{ 119, 84 },
	{ 120, 85 },
	{ 74, 35 },
	{ 121, 90 },
	{ 122, 91 },
	{ 123, 92 },
	{ 124, 93 },
	{ 125, 94 },
	{ 126, 95 },
	{ 127, 97 },
	{ 128, 98 },
	{ 115, 100 },
	{ 129, 102 },
	{ 130, 103 },
	{ 131, 104 },
	{ 132, 105 },
	{ 75, 36 },
	{ 46, 16 },
	{ 136, 110 },
	{ 137, 111 },
	{ 88, 112 },
	{ 88, 113 },
	{ 138, 114 },
	{ 139, 115 },
	{ 140, 116 },
	{ 141, 117 },
	{ 142, 119 },
	{ 143, 120 },
	{ 144, 121 },
	{ 145, 122 },
	{ 146, 123 },
	{ 147, 126 },
	{ 148, 127 },
	{ 149, 129 },
	{ 150, 131 },
	{ 151, 132 },
	{ 152, 133 },
	{ 153, 134 },
	{ 154, 136 },
	{ 155, 137 },
	{ 156, 141 },
	{ 157, 142 },
	{ 158, 143 },
	{ 159, 146 },
	{ 160, 148 },
	{ 161, 149 },
	{ 94, 150 },
	{ 139, 151 },
	{ 162, 152 },
	{ 163, 153 },
	{ 164, 154 },
	{ 165, 155 },
	{ 166, 158 },
	{ 125, 159 },
	{ 167, 161 },
	{ 168, 162 },
	{ 169, 163 },
	{ 170, 166 },
	{ 171, 167 },
	{ 172, 168 },
	{ 173, 172 },
	{ 65, 30 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -9, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 61 },
	{ 0, 0, 60 },
	{ 0, 0, 4 },
	{ 0, 0, 3 },
	{ 0, 0, 8 },
	{ 0, 0, 9 },
	{ 0, 0, 22 },
	{ 0, 0, 20 },
	{ 0, 0, 12 },
	{ 0, 0, 21 },
	{ 0, 189, 5 },
	{ 0, 79, 24 },
	{ 0, 160, 57 },
	{ 0, 199, 13 },
	{ 0, 0, 6 },
	{ 0, -7, 19 },
	{ 0, 0, 7 },
	{ 0, 100, 17 },
	{ 173, 0, 58 },
	{ 0, 0, 10 },
	{ 0, 0, 11 },
	{ 173, -91, 58 },
	{ 173, -72, 58 },
	{ 173, 94, 58 },
	{ 173, -99, 58 },
	{ 173, 17, 58 },
	{ 173, -95, 58 },
	{ 173, 193, 58 },
	{ 173, 92, 58 },
	{ 173, -87, 58 },
	{ 173, 123, 58 },
	{ 173, 90, 58 },
	{ 173, 131, 58 },
	{ 173, 158, 58 },
	{ 173, -108, 58 },
	{ 173, -100, 58 },
	{ 173, -84, 58 },
	{ 173, -12, 58 },
	{ 173, -87, 58 },
	{ 0, 0, 1 },
	{ 0, 0, 59 },
	{ -44, 118, 0 },
	{ 87, 0, 0 },
	{ 0, 0, 14 },
	{ 0, 0, 18 },
	{ 0, 0, 15 },
	{ 0, 0, 16 },
	{ 173, 14, 58 },
	{ 173, 30, 58 },
	{ 173, 17, 58 },
	{ 173, 55, 58 },
	{ 173, 48, 58 },
	{ 173, 45, 58 },
	{ 173, -94, 58 },
	{ 173, 53, 58 },
	{ 173, 77, 58 },
	{ 173, 77, 43 },
	{ 173, 82, 58 },
	{ 173, 99, 58 },
	{ 173, 92, 58 },
	{ 173, 89, 58 },
	{ 173, 97, 58 },
	{ 173, 112, 58 },
	{ 173, 0, 37 },
	{ 173, 113, 58 },
	{ 173, 110, 58 },
	{ 173, 131, 58 },
	{ 173, 116, 58 },
	{ 73, 0, 58 },
	{ 173, 0, 31 },
	{ 173, 133, 49 },
	{ 173, -93, 58 },
	{ 173, -84, 58 },
	{ 173, 122, 58 },
	{ 173, 138, 58 },
	{ 173, 137, 58 },
	{ 173, 0, 44 },
	{ 173, 122, 58 },
	{ 173, 128, 58 },
	{ 173, 125, 58 },
	{ 173, 128, 58 },
	{ 173, 138, 58 },
	{ 173, 139, 58 },
	{ 0, 0, 2 },
	{ 0, 170, 56 },
	{ 173, 0, 50 },
	{ 173, 0, 48 },
	{ 173, 149, 58 },
	{ 173, 142, 58 },
	{ 173, 140, 58 },
	{ 173, 148, 58 },
	{ 173, 136, 58 },
	{ 173, 136, 58 },
	{ 173, 0, 24 },
	{ 173, 142, 58 },
	{ 173, 152, 58 },
	{ 173, 0, 33 },
	{ 173, 139, 58 },
	{ 173, 0, 42 },
	{ 173, 156, 58 },
	{ 173, 145, 58 },
	{ 173, 156, 58 },
	{ 173, 153, 58 },
	{ 173, 0, 23 },
	{ 173, 0, 55 },
	{ 173, -16, 58 },
	{ 173, 93, 58 },
	{ 173, 150, 58 },
	{ 173, 161, 58 },
	{ 173, 147, 50 },
	{ 173, 165, 58 },
	{ 173, 155, 58 },
	{ 173, 165, 58 },
	{ 173, 166, 58 },
	{ 173, 163, 58 },
	{ 173, 0, 51 },
	{ 173, 161, 58 },
	{ 173, 154, 58 },
	{ 173, 150, 58 },
	{ 173, 162, 58 },
	{ 173, 172, 58 },
	{ 173, 0, 46 },
	{ 173, 0, 29 },
	{ 173, 158, 58 },
	{ 173, 159, 58 },
	{ 173, 0, 39 },
	{ 173, 160, 58 },
	{ 173, 0, 47 },
	{ 173, 174, 58 },
	{ 173, 168, 58 },
	{ 173, 178, 58 },
	{ 173, 166, 58 },
	{ 173, 0, 36 },
	{ 173, 167, 58 },
	{ 173, 185, 58 },
	{ 173, 0, 38 },
	{ 173, 0, 27 },
	{ 173, 0, 28 },
	{ 173, 175, 58 },
	{ 173, 183, 58 },
	{ 173, 184, 58 },
	{ 173, 0, 30 },
	{ 173, 0, 34 },
	{ 173, 189, 58 },
	{ 173, 0, 26 },
	{ 173, 176, 58 },
	{ 173, 183, 58 },
	{ 173, 188, 58 },
	{ 173, 174, 58 },
	{ 173, 191, 58 },
	{ 173, 195, 58 },
	{ 173, 193, 58 },
	{ 173, 178, 58 },
	{ 173, 0, 41 },
	{ 173, 0, 54 },
	{ 173, 187, 35 },
	{ 173, 186, 58 },
	{ 173, 0, 45 },
	{ 173, 186, 58 },
	{ 173, 181, 58 },
	{ 173, 190, 58 },
	{ 173, 0, 32 },
	{ 173, 0, 40 },
	{ 173, 190, 58 },
	{ 173, 191, 58 },
	{ 173, 188, 58 },
	{ 173, 0, 25 },
	{ 173, 0, 35 },
	{ 173, 0, 52 },
	{ 173, 202, 58 },
	{ 0, 67, 53 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 229 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
