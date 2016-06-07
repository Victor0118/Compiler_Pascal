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
* myparser.c
* C source file generated from myparser.y.
* 
* Date: 06/02/16
* Time: 10:09:20
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2016Äê5ÔÂ27ÈÕ
****************************************************************************/
#include "mylexer.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define drawTree 1
extern char myToken[1000];
typedef enum {Kprogram,
              Kprogram_head,
              Kroutine,
              Ksub_routine,
              Kroutine_head,
              Klabel_part,
              Kconst_part,
              Kconst_expr_list,
              Kconst_value,
              Ktype_part,
              Ktype_decl_list,
              Ktype_definition,
              Ktype_decl,
              Karray_type_decl,
              Krecord_type_decl,
              Kfield_decl_list,
              Kfield_decl,
              Kname_list,
              Ksimple_type_decl,
              Kvar_part,
              Kvar_decl_list,
              Kvar_decl,
              Kroutine_part,
              Kfunction_decl,
              Kfunction_head,
              Kprocedure_decl,
              Kprocedure_head,
              Kparameters,
              Kpara_decl_list,
              Kpara_type_list,
              Kvar_para_list,
              Kval_para_list,
              Kroutine_body,
              Kstmt_list,
              Kstmt,
              Knon_label_stmt,
              Kassign_stmt,
              Kproc_stmt,
              Kcompound_stmt,
              Kif_stmt,
              Kelse_clause,
              Krepeat_stmt,
              Kwhile_stmt,
              Kfor_stmt,
              Kdirection,
              Kcase_stmt,
              Kcase_expr_list,
              Kcase_expr,
              Kgoto_stmt,
              Kexpression_list,
              Kexpression,
              Kexpr,
              Kterm,
              Kfactor,
              Kargs_list,
              KID,
              KINTEGER, 
              KREAL, 
              KCHAR, 
              KSTRING,
              KSYS_CON,
              KSYS_PROC,
              KSYS_FUNCT,
              KSYS_TYPE,
              Kerror
              } NodeKind;

char enumToString[100][20] = {"program",
              "program_head",
              "routine",
              "sub_routine",
              "routine_head",
              "label_part",
              "const_part",
              "const_expr_list",
              "const_value",
              "type_part",
              "type_decl_list",
              "type_definition",
              "type_decl",
              "array_type_decl",
              "record_type_decl",
              "field_decl_list",
              "field_decl",
              "name_list",
              "simple_type_decl",
              "var_part",
              "var_decl_list",
              "var_decl",
              "routine_part",
              "function_decl",
              "function_head",
              "procedure_decl",
              "procedure_head",
              "parameters",
              "para_decl_list",
              "para_type_list",
              "var_para_list",
              "val_para_list",
              "routine_body",
              "stmt_list",
              "stmt",
              "non_label_stmt",
              "assign_stmt",
              "Kproc_stmt",
              "compound_stmt",
              "if_stmt",
              "else_clause",
              "repeat_stmt",
              "while_stmt",
              "for_stmt",
              "direction",
              "case_stmt",
              "case_expr_list",
              "case_expr",
              "goto_stmt",
              "expression_list",
              "expression",
              "expr",
              "term",
              "factor",
              "args_list",
              "ID",
              "INTEGER", 
              "REAL", 
              "CHAR", 
              "STRING",
              "SYS_CON",
              "SYS_PROC",
              "SYS_FUNCT",
              "SYS_TYPE",
              "error"
};
int myNodeId = 1;
typedef struct{
	int child[5];
	NodeKind nodeKind;
	int nodeID;
	int derivation;
	union{
		char* nodeString;
	}attr;
}node;
node myNode[100000];
#define YYSTYPE node *
node* newNode(NodeKind n){
	myNode[myNodeId].nodeID = myNodeId;
	myNode[myNodeId].nodeKind = n;
	return &myNode[myNodeId++];
}
node* newIDNode(NodeKind n, char * nodeString){
	int len;
	myNode[myNodeId].nodeID = myNodeId;
	myNode[myNodeId].nodeKind = n;
	len = strlen(nodeString);
	myNode[myNodeId].attr.nodeString = (char *)malloc(len + 1);
	if(!myNode[myNodeId].attr.nodeString){
		printf("err!\n");
	}
	else{
		strcpy(myNode[myNodeId].attr.nodeString, nodeString);
	}
	return &myNode[myNodeId++];
}
node* myNodePtr, *myNodePtr2;
node* saveStack[10000];
node* topStack[10000];
node* root;
int topId = -1;
int topId2 = -1;
extern int lineNo;

#line 228 "myparser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\myparser.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 260 ".\\myparser.y"

	yyval = newNode(Kprogram);
	yyattribute(2 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	root = yyval;

#line 363 "myparser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 271 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Kprogram_head);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 383 "myparser.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 278 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 401 "myparser.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 283 ".\\myparser.y"

	yyval = newIDNode(Kprogram_head, "error");
	yyval->derivation = 1;
		printf("%d %d %d %s\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->attr.nodeString);
	topStack[++topId2] = yyval;

#line 419 "myparser.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 289 ".\\myparser.y"

	yyval = newNode(Kroutine);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 441 "myparser.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 299 ".\\myparser.y"

	yyval = newNode(Ksub_routine);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 463 "myparser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 310 ".\\myparser.y"

	yyval = newNode(Kroutine_head);
	yyattribute(5 - 5) = topStack[topId2--];
	yyattribute(4 - 5) = topStack[topId2--];
	yyattribute(3 - 5) = topStack[topId2--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyattribute(1 - 5) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 5)->nodeID;
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->child[2] = yyattribute(3 - 5)->nodeID;
	yyval->child[3] = yyattribute(4 - 5)->nodeID;
	yyval->child[4] = yyattribute(5 - 5)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2], yyval->child[3], yyval->child[4]);
	topStack[++topId2] = yyval;

#line 491 "myparser.c"
			}
		}
		break;
	case 7:
		{
#line 326 ".\\myparser.y"

	yyval = newNode(Klabel_part);
	yyval->derivation = 0;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 504 "myparser.c"
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 332 ".\\myparser.y"

	yyval = newNode(Kconst_part);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 523 "myparser.c"
			}
		}
		break;
	case 9:
		{
#line 340 ".\\myparser.y"

	yyval = newNode(Kconst_part);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 536 "myparser.c"
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 346 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Kconst_expr_list);
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 557 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 355 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 6) = topStack[topId2--];
	yyval->child[2] = yyattribute(2 - 6)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2]);
	topStack[++topId2] = yyval;

#line 577 "myparser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 363 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kconst_expr_list);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 597 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 370 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 617 "myparser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 378 ".\\myparser.y"

	myNodePtr = newIDNode(KINTEGER, myToken);
	yyval = newNode(Kconst_value);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 639 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 388 ".\\myparser.y"

	myNodePtr = newIDNode(KREAL, myToken);
	yyval = newNode(Kconst_value);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 661 "myparser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 398 ".\\myparser.y"

	myNodePtr = newIDNode(KCHAR, myToken);
	yyval = newNode(Kconst_value);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 2;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 683 "myparser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 408 ".\\myparser.y"

	myNodePtr = newIDNode(KSTRING, myToken);
	yyval = newNode(Kconst_value);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 3;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 705 "myparser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 418 ".\\myparser.y"

	myNodePtr = newIDNode(KSYS_CON, myToken);
	yyval = newNode(Kconst_value);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 4;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 727 "myparser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 428 ".\\myparser.y"

	yyval = newNode(Ktype_part);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 747 "myparser.c"
			}
		}
		break;
	case 20:
		{
#line 436 ".\\myparser.y"

	yyval = newNode(Ktype_part);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 760 "myparser.c"
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 442 ".\\myparser.y"

	yyval = newNode(Ktype_decl_list);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 781 "myparser.c"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 452 ".\\myparser.y"

	yyval = newNode(Ktype_decl_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 801 "myparser.c"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 460 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Ktype_definition);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 821 "myparser.c"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 467 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 841 "myparser.c"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 475 ".\\myparser.y"

	yyval = newNode(Karray_type_decl);
	yyattribute(6 - 6) = topStack[topId2--];
	yyattribute(3 - 6) = topStack[topId2--];
	yyval->child[0] = yyattribute(3 - 6)->nodeID;
	yyval->child[1] = yyattribute(6 - 6)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 863 "myparser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 485 ".\\myparser.y"

	yyval = newNode(Krecord_type_decl);
	yyattribute(2 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 883 "myparser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 493 ".\\myparser.y"

	yyval = newNode(Kfield_decl_list);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 905 "myparser.c"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 503 ".\\myparser.y"

	yyval = newNode(Kfield_decl_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 925 "myparser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 511 ".\\myparser.y"

	yyval = newNode(Kfield_decl);
	yyattribute(3 - 4) = topStack[topId2--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 4)->nodeID;
	yyval->child[1] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 947 "myparser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 521 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kname_list);
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 971 "myparser.c"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 533 ".\\myparser.y"

	yyval = newNode(Kname_list);
	yyval->derivation = 1;
	myNodePtr = newIDNode(KID, myToken);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 993 "myparser.c"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 543 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyval->derivation = 0;
	myNodePtr = newIDNode(KSYS_TYPE, myToken); 
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1015 "myparser.c"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 553 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyval->derivation = 1;
	myNodePtr = newIDNode(KID, myToken); 
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1037 "myparser.c"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 563 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyattribute(2 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1057 "myparser.c"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 571 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1079 "myparser.c"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 581 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyattribute(4 - 4) = topStack[topId2--];
	yyattribute(2 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 4)->nodeID;
	yyval->child[1] = yyattribute(4 - 4)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1101 "myparser.c"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 591 ".\\myparser.y"

	yyval = newNode(Ksimple_type_decl);
	yyattribute(5 - 5) = topStack[topId2--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 5)->nodeID;
	yyval->child[1] = yyattribute(5 - 5)->nodeID;
	yyval->derivation = 5;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1123 "myparser.c"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 601 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Ksimple_type_decl);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 1143 "myparser.c"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 608 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyval->derivation = 6;
	myNodePtr = newIDNode(KID, myToken); 
	yyval->child[1] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1165 "myparser.c"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 618 ".\\myparser.y"

	yyval = newNode(Ktype_decl);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1185 "myparser.c"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 626 ".\\myparser.y"

	yyval = newNode(Ktype_decl);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1205 "myparser.c"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 634 ".\\myparser.y"

	yyval = newNode(Ktype_decl);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1225 "myparser.c"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 642 ".\\myparser.y"

	yyval = newNode(Kvar_part);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1245 "myparser.c"
			}
		}
		break;
	case 44:
		{
#line 650 ".\\myparser.y"

	yyval = newNode(Kvar_part);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 1258 "myparser.c"
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 656 ".\\myparser.y"

	yyval = newNode(Kvar_decl_list);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1279 "myparser.c"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 666 ".\\myparser.y"

	yyval = newNode(Kvar_decl_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1299 "myparser.c"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 674 ".\\myparser.y"

	yyval = newNode(Kvar_decl);
	yyattribute(3 - 4) = topStack[topId2--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 4)->nodeID;
	yyval->child[1] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1321 "myparser.c"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 685 ".\\myparser.y"

	yyval = newNode(Kroutine_part);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1343 "myparser.c"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 695 ".\\myparser.y"

	yyval = newNode(Kroutine_part);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1365 "myparser.c"
			}
		}
		break;
	case 50:
		{
#line 705 ".\\myparser.y"

	yyval = newNode(Kroutine_part);
	yyval->derivation = 2;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 1378 "myparser.c"
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 711 ".\\myparser.y"

	yyval = newNode(Kfunction_decl);
	yyattribute(3 - 4) = topStack[topId2--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 4)->nodeID;
	yyval->child[1] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1399 "myparser.c"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 721 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Kfunction_head);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 1419 "myparser.c"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 728 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(3 - 6) = topStack[topId2--];
	yyattribute(1 - 6) = topStack[topId2--];
	yyval->child[1] = yyattribute(1 - 6)->nodeID;
	yyval->child[2] = yyattribute(3 - 6)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2]);
	topStack[++topId2] = yyval;

#line 1441 "myparser.c"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 738 ".\\myparser.y"

	yyval = newNode(Kprocedure_decl);
	yyattribute(3 - 4) = topStack[topId2--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 4)->nodeID;
	yyval->child[1] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1463 "myparser.c"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 748 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken);
	yyval = newNode(Kprocedure_head);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	saveStack[++topId] = yyval;

#line 1483 "myparser.c"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 755 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[1] = yyattribute(1 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1503 "myparser.c"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 763 ".\\myparser.y"

	yyval = newNode(Kparameters);
	yyattribute(2 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1523 "myparser.c"
			}
		}
		break;
	case 58:
		{
#line 771 ".\\myparser.y"

	yyval = newNode(Kparameters);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 1536 "myparser.c"
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 777 ".\\myparser.y"

	yyval = newNode(Kpara_decl_list);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1557 "myparser.c"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 787 ".\\myparser.y"

	yyval = newNode(Kpara_decl_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1577 "myparser.c"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 795 ".\\myparser.y"

	yyval = newNode(Kpara_type_list);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1599 "myparser.c"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 805 ".\\myparser.y"

	yyval = newNode(Kpara_type_list);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1621 "myparser.c"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 815 ".\\myparser.y"

	yyval = newNode(Kvar_para_list);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1641 "myparser.c"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 823 ".\\myparser.y"

	yyval = newNode(Kval_para_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1661 "myparser.c"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 832 ".\\myparser.y"

	yyval = newNode(Kroutine_body);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1681 "myparser.c"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 840 ".\\myparser.y"

	yyval = newNode(Kcompound_stmt);
	yyattribute(2 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1701 "myparser.c"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 848 ".\\myparser.y"

	yyval = newNode(Kstmt_list);
	yyattribute(2 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1723 "myparser.c"
			}
		}
		break;
	case 68:
		{
#line 858 ".\\myparser.y"

	yyval = newNode(Kstmt_list);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 1736 "myparser.c"
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 864 ".\\myparser.y"

	yyval = newNode(Kstmt);
	yyattribute(3 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1755 "myparser.c"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 872 ".\\myparser.y"

	yyval = newNode(Kstmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1775 "myparser.c"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 880 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1795 "myparser.c"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 888 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1815 "myparser.c"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 896 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1835 "myparser.c"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 904 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1855 "myparser.c"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 912 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1875 "myparser.c"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 920 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 5;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1895 "myparser.c"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 928 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 6;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1915 "myparser.c"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 936 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 7;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1935 "myparser.c"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 944 ".\\myparser.y"

	yyval = newNode(Knon_label_stmt);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 8;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 1955 "myparser.c"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 952 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kassign_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 1975 "myparser.c"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 959 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 4) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 1995 "myparser.c"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 967 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kassign_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2015 "myparser.c"
			}
		}
		break;
	case 83:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 974 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(5 - 7) = topStack[topId2--];
	yyattribute(2 - 7) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 7)->nodeID;
	yyval->child[2] = yyattribute(5 - 7)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2]);
	topStack[++topId2] = yyval;

#line 2037 "myparser.c"
			}
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 984 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kassign_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2057 "myparser.c"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 991 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = saveStack[topId--];
	yyval->child[1] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	yyval->derivation = 2;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2078 "myparser.c"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 999 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 7) = topStack[topId2--];
	yyval->child[2] = yyattribute(2 - 7)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2]);
	topStack[++topId2] = yyval;

#line 2098 "myparser.c"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1007 ".\\myparser.y"

	yyval = newNode(Kproc_stmt);
	yyval->derivation = 0;
	myNodePtr = newIDNode(KID, myToken);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2120 "myparser.c"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1017 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kproc_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2140 "myparser.c"
			}
		}
		break;
	case 89:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1024 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2160 "myparser.c"
			}
		}
		break;
	case 90:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1032 ".\\myparser.y"

	yyval = newNode(Kproc_stmt);
	yyval->derivation = 2;
	myNodePtr = newIDNode(KSYS_PROC, myToken);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2182 "myparser.c"
			}
		}
		break;
	case 91:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1042 ".\\myparser.y"

	myNodePtr = newIDNode(KSYS_PROC, myToken); 
	yyval = newNode(Kproc_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2202 "myparser.c"
			}
		}
		break;
	case 92:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1049 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2222 "myparser.c"
			}
		}
		break;
	case 93:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 1057 ".\\myparser.y"

	yyval = newNode(Kproc_stmt);
	yyattribute(3 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2242 "myparser.c"
			}
		}
		break;
	case 94:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1065 ".\\myparser.y"

	yyval = newNode(Kif_stmt);
	yyattribute(5 - 5) = topStack[topId2--];
	yyattribute(4 - 5) = topStack[topId2--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 5)->nodeID;
	yyval->child[1] = yyattribute(4 - 5)->nodeID;
	yyval->child[2] = yyattribute(5 - 5)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2]);
	topStack[++topId2] = yyval;

#line 2266 "myparser.c"
			}
		}
		break;
	case 95:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1077 ".\\myparser.y"

	yyval = newNode(Kelse_clause);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2286 "myparser.c"
			}
		}
		break;
	case 96:
		{
#line 1085 ".\\myparser.y"

	yyval = newNode(Kelse_clause);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 2299 "myparser.c"
		}
		break;
	case 97:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 1091 ".\\myparser.y"

	yyval = newNode(Krepeat_stmt);
	yyattribute(4 - 4) = topStack[topId2--];
	yyattribute(2 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 4)->nodeID;
	yyval->child[1] = yyattribute(4 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2320 "myparser.c"
			}
		}
		break;
	case 98:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 1101 ".\\myparser.y"

	yyval = newNode(Kwhile_stmt);
	yyattribute(4 - 4) = topStack[topId2--];
	yyattribute(2 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 4)->nodeID;
	yyval->child[1] = yyattribute(4 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2342 "myparser.c"
			}
		}
		break;
	case 99:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1111 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kfor_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2362 "myparser.c"
			}
		}
		break;
	case 100:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[10];
			yyinitdebug(yya, 10);
#endif
			{
#line 1118 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(6 - 9) = topStack[topId2--];
	yyattribute(4 - 9) = topStack[topId2--];
	yyattribute(3 - 9) = topStack[topId2--];
	yyattribute(2 - 9) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 9)->nodeID;
	yyval->child[2] = yyattribute(3 - 9)->nodeID;
	yyval->child[3] = yyattribute(4 - 9)->nodeID;
	yyval->child[4] = yyattribute(6 - 9)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1], yyval->child[2], yyval->child[3], yyval->child[4]);
	topStack[++topId2] = yyval;

#line 2388 "myparser.c"
			}
		}
		break;
	case 101:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1132 ".\\myparser.y"

	yyval = newNode(Kdirection);
	yyval->derivation = 0;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 2406 "myparser.c"
			}
		}
		break;
	case 102:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1138 ".\\myparser.y"

	yyval = newNode(Kdirection);
	yyval->derivation = 1;
	printf("%d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation);
	topStack[++topId2] = yyval;

#line 2424 "myparser.c"
			}
		}
		break;
	case 103:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1144 ".\\myparser.y"

	yyval = newNode(Kcase_stmt);
	yyattribute(4 - 5) = topStack[topId2--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 5)->nodeID;
	yyval->child[1] = yyattribute(4 - 5)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2446 "myparser.c"
			}
		}
		break;
	case 104:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1154 ".\\myparser.y"

	yyval = newNode(Kcase_stmt);
	yyattribute(2 - 2) = topStack[topId2--];
	yyattribute(1 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 2)->nodeID;
	yyval->child[1] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2468 "myparser.c"
			}
		}
		break;
	case 105:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1164 ".\\myparser.y"

	yyval = newNode(Kcase_expr_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2488 "myparser.c"
			}
		}
		break;
	case 106:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 1172 ".\\myparser.y"

	yyval = newNode(Kcase_expr);
	yyattribute(3 - 4) = topStack[topId2--];
	yyattribute(1 - 4) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 4)->nodeID;
	yyval->child[1] = yyattribute(3 - 4)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2510 "myparser.c"
			}
		}
		break;
	case 107:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1182 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kcase_expr);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 2530 "myparser.c"
			}
		}
		break;
	case 108:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1189 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2550 "myparser.c"
			}
		}
		break;
	case 109:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1197 ".\\myparser.y"

	myNodePtr = newIDNode(KINTEGER, myToken);
	yyval = newNode(Kgoto_stmt);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);
	yyval->derivation = 0;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2572 "myparser.c"
			}
		}
		break;
	case 110:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1207 ".\\myparser.y"

	yyval = newNode(Kexpression_list);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2594 "myparser.c"
			}
		}
		break;
	case 111:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1217 ".\\myparser.y"

	yyval = newNode(Kexpression_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2614 "myparser.c"
			}
		}
		break;
	case 112:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1225 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2636 "myparser.c"
			}
		}
		break;
	case 113:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1235 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2658 "myparser.c"
			}
		}
		break;
	case 114:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1245 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2680 "myparser.c"
			}
		}
		break;
	case 115:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1255 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2702 "myparser.c"
			}
		}
		break;
	case 116:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1265 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2724 "myparser.c"
			}
		}
		break;
	case 117:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1275 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 5;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2746 "myparser.c"
			}
		}
		break;
	case 118:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1285 ".\\myparser.y"

	yyval = newNode(Kexpression);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 6;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2766 "myparser.c"
			}
		}
		break;
	case 119:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1293 ".\\myparser.y"

	yyval = newNode(Kexpr);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2788 "myparser.c"
			}
		}
		break;
	case 120:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1303 ".\\myparser.y"

	yyval = newNode(Kexpr);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2810 "myparser.c"
			}
		}
		break;
	case 121:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1313 ".\\myparser.y"

	yyval = newNode(Kexpr);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2832 "myparser.c"
			}
		}
		break;
	case 122:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1323 ".\\myparser.y"

	yyval = newNode(Kexpr);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2852 "myparser.c"
			}
		}
		break;
	case 123:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1331 ".\\myparser.y"

	yyval = newNode(Kterm);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2874 "myparser.c"
			}
		}
		break;
	case 124:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1341 ".\\myparser.y"

	yyval = newNode(Kterm);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2896 "myparser.c"
			}
		}
		break;
	case 125:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1351 ".\\myparser.y"

	yyval = newNode(Kterm);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2918 "myparser.c"
			}
		}
		break;
	case 126:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1361 ".\\myparser.y"

	yyval = newNode(Kterm);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 2940 "myparser.c"
			}
		}
		break;
	case 127:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1371 ".\\myparser.y"

	yyval = newNode(Kterm);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2960 "myparser.c"
			}
		}
		break;
	case 128:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1379 ".\\myparser.y"

	yyval = newNode(Kfactor);
	myNodePtr = newIDNode(KID, myToken); 
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	yyval->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 2982 "myparser.c"
			}
		}
		break;
	case 129:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1389 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kfactor);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 3002 "myparser.c"
			}
		}
		break;
	case 130:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1396 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 3022 "myparser.c"
			}
		}
		break;
	case 131:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1404 ".\\myparser.y"

	myNodePtr = newIDNode(KSYS_FUNCT, myToken); 
	yyval = newNode(Kfactor);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 3042 "myparser.c"
			}
		}
		break;
	case 132:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1411 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 2;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 3062 "myparser.c"
			}
		}
		break;
	case 133:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1419 ".\\myparser.y"

	yyval = newNode(Kfactor);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 3;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 3082 "myparser.c"
			}
		}
		break;
	case 134:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1427 ".\\myparser.y"

	yyval = newNode(Kfactor);
	yyattribute(2 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 3)->nodeID;
	yyval->derivation = 4;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 3102 "myparser.c"
			}
		}
		break;
	case 135:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1435 ".\\myparser.y"

	yyval = newNode(Kfactor);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 5;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 3122 "myparser.c"
			}
		}
		break;
	case 136:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 1443 ".\\myparser.y"

	yyval = newNode(Kfactor);
	yyattribute(2 - 2) = topStack[topId2--];
	yyval->child[0] = yyattribute(2 - 2)->nodeID;
	yyval->derivation = 6;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 3142 "myparser.c"
			}
		}
		break;
	case 137:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1451 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kfactor);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 3162 "myparser.c"
			}
		}
		break;
	case 138:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 1458 ".\\myparser.y"

	yyval = saveStack[topId--];
	yyattribute(2 - 5) = topStack[topId2--];
	yyval->child[1] = yyattribute(2 - 5)->nodeID;
	yyval->derivation = 7;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 3182 "myparser.c"
			}
		}
		break;
	case 139:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1466 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = newNode(Kfactor);
	yyval->child[0] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 3202 "myparser.c"
			}
		}
		break;
	case 140:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 1473 ".\\myparser.y"

	myNodePtr = newIDNode(KID, myToken); 
	yyval = saveStack[topId--];
	yyval->child[1] = myNodePtr->nodeID;
	myNodePtr->derivation = 0;
	yyval->derivation = 8;
	printf("%d %d %d %s\n", myNodePtr->nodeID, myNodePtr->nodeKind, myNodePtr->derivation, myNodePtr->attr.nodeString);	
	saveStack[++topId] = yyval;

#line 3223 "myparser.c"
			}
		}
		break;
	case 141:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 1482 ".\\myparser.y"

	yyval = newNode(Kargs_list);
	yyattribute(3 - 3) = topStack[topId2--];
	yyattribute(1 - 3) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 3)->nodeID;
	yyval->child[1] = yyattribute(3 - 3)->nodeID;
	yyval->derivation = 0;
	printf("%d %d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0], yyval->child[1]);
	topStack[++topId2] = yyval;

#line 3245 "myparser.c"
			}
		}
		break;
	case 142:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 1492 ".\\myparser.y"

	yyval = newNode(Kargs_list);
	yyattribute(1 - 1) = topStack[topId2--];
	yyval->child[0] = yyattribute(1 - 1)->nodeID;
	yyval->derivation = 1;
	printf("%d %d %d %d\n", yyval->nodeID, yyval->nodeKind, yyval->derivation, yyval->child[0]);
	topStack[++topId2] = yyval;

#line 3265 "myparser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "error", 256 },
	{ "DOT", 257 },
	{ "PROGRAM", 258 },
	{ "ID", 259 },
	{ "SEMI", 260 },
	{ "CONST", 261 },
	{ "EQUAL", 262 },
	{ "INTEGER", 263 },
	{ "REAL", 264 },
	{ "CHAR", 265 },
	{ "STRING", 266 },
	{ "SYS_CON", 267 },
	{ "TYPE", 268 },
	{ "LP", 269 },
	{ "RP", 270 },
	{ "LB", 271 },
	{ "RB", 272 },
	{ "DOTDOT", 273 },
	{ "SYS_TYPE", 274 },
	{ "ARRAY", 275 },
	{ "OF", 276 },
	{ "RECORD", 277 },
	{ "COMMA", 278 },
	{ "COLON", 279 },
	{ "ASSIGN", 280 },
	{ "BEGIN2", 281 },
	{ "END", 282 },
	{ "SYS_PROC", 283 },
	{ "READ", 284 },
	{ "IF", 285 },
	{ "THEN", 286 },
	{ "ELSE", 287 },
	{ "REPEAT", 288 },
	{ "UNTIL", 289 },
	{ "FOR", 290 },
	{ "DO", 291 },
	{ "TO", 292 },
	{ "DOWNTO", 293 },
	{ "CASE", 294 },
	{ "GOTO", 295 },
	{ "GE", 296 },
	{ "GT", 297 },
	{ "LE", 298 },
	{ "LT", 299 },
	{ "UNEQUAL", 300 },
	{ "PLUS", 301 },
	{ "MINUS", 302 },
	{ "MUL", 303 },
	{ "MOD", 304 },
	{ "DIV", 305 },
	{ "OR", 306 },
	{ "AND", 307 },
	{ "SYS_FUNCT", 308 },
	{ "VAR", 309 },
	{ "FUNCTION", 310 },
	{ "PROCEDURE", 311 },
	{ "WHILE", 312 },
	{ "NOT", 313 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: program",
	"program: program_head routine DOT",
	"$$1:",
	"program_head: PROGRAM ID $$1 SEMI",
	"program_head: error",
	"routine: routine_head routine_body",
	"sub_routine: routine_head routine_body",
	"routine_head: label_part const_part type_part var_part routine_part",
	"label_part:",
	"const_part: CONST const_expr_list",
	"const_part:",
	"$$2:",
	"const_expr_list: const_expr_list ID $$2 EQUAL const_value SEMI",
	"$$3:",
	"const_expr_list: ID $$3 EQUAL const_value SEMI",
	"const_value: INTEGER",
	"const_value: REAL",
	"const_value: CHAR",
	"const_value: STRING",
	"const_value: SYS_CON",
	"type_part: TYPE type_decl_list",
	"type_part:",
	"type_decl_list: type_decl_list type_definition",
	"type_decl_list: type_definition",
	"$$4:",
	"type_definition: ID $$4 EQUAL type_decl SEMI",
	"array_type_decl: ARRAY LB simple_type_decl RB OF type_decl",
	"record_type_decl: RECORD field_decl_list END",
	"field_decl_list: field_decl_list field_decl",
	"field_decl_list: field_decl",
	"field_decl: name_list COLON type_decl SEMI",
	"name_list: name_list COMMA ID",
	"name_list: ID",
	"simple_type_decl: SYS_TYPE",
	"simple_type_decl: ID",
	"simple_type_decl: LP name_list RP",
	"simple_type_decl: const_value DOTDOT const_value",
	"simple_type_decl: MINUS const_value DOTDOT const_value",
	"simple_type_decl: MINUS const_value DOTDOT MINUS const_value",
	"$$5:",
	"simple_type_decl: ID $$5 DOTDOT ID",
	"type_decl: simple_type_decl",
	"type_decl: array_type_decl",
	"type_decl: record_type_decl",
	"var_part: VAR var_decl_list",
	"var_part:",
	"var_decl_list: var_decl_list var_decl",
	"var_decl_list: var_decl",
	"var_decl: name_list COLON type_decl SEMI",
	"routine_part: routine_part function_decl",
	"routine_part: routine_part procedure_decl",
	"routine_part:",
	"function_decl: function_head SEMI sub_routine SEMI",
	"$$6:",
	"function_head: FUNCTION ID $$6 parameters COLON simple_type_decl",
	"procedure_decl: procedure_head SEMI sub_routine SEMI",
	"$$7:",
	"procedure_head: PROCEDURE ID $$7 parameters",
	"parameters: LP para_decl_list RP",
	"parameters:",
	"para_decl_list: para_decl_list SEMI para_type_list",
	"para_decl_list: para_type_list",
	"para_type_list: var_para_list COLON simple_type_decl",
	"para_type_list: val_para_list COLON simple_type_decl",
	"var_para_list: VAR name_list",
	"val_para_list: name_list",
	"routine_body: compound_stmt",
	"compound_stmt: BEGIN2 stmt_list END",
	"stmt_list: stmt_list stmt SEMI",
	"stmt_list:",
	"stmt: INTEGER COLON non_label_stmt",
	"stmt: non_label_stmt",
	"non_label_stmt: assign_stmt",
	"non_label_stmt: proc_stmt",
	"non_label_stmt: compound_stmt",
	"non_label_stmt: if_stmt",
	"non_label_stmt: repeat_stmt",
	"non_label_stmt: while_stmt",
	"non_label_stmt: for_stmt",
	"non_label_stmt: case_stmt",
	"non_label_stmt: goto_stmt",
	"$$8:",
	"assign_stmt: ID $$8 ASSIGN expression",
	"$$9:",
	"assign_stmt: ID $$9 LB expression RB ASSIGN expression",
	"$$10:",
	"$$11:",
	"assign_stmt: ID $$10 DOT ID $$11 ASSIGN expression",
	"proc_stmt: ID",
	"$$12:",
	"proc_stmt: ID $$12 LP args_list RP",
	"proc_stmt: SYS_PROC",
	"$$13:",
	"proc_stmt: SYS_PROC $$13 LP expression_list RP",
	"proc_stmt: READ LP factor RP",
	"if_stmt: IF expression THEN stmt else_clause",
	"else_clause: ELSE stmt",
	"else_clause:",
	"repeat_stmt: REPEAT stmt_list UNTIL expression",
	"while_stmt: WHILE expression DO stmt",
	"$$14:",
	"for_stmt: FOR ID $$14 ASSIGN expression direction expression DO stmt",
	"direction: TO",
	"direction: DOWNTO",
	"case_stmt: CASE expression OF case_expr_list END",
	"case_expr_list: case_expr_list case_expr",
	"case_expr_list: case_expr",
	"case_expr: const_value COLON stmt SEMI",
	"$$15:",
	"case_expr: ID $$15 COLON stmt SEMI",
	"goto_stmt: GOTO INTEGER",
	"expression_list: expression_list COMMA expression",
	"expression_list: expression",
	"expression: expression GE expr",
	"expression: expression GT expr",
	"expression: expression LE expr",
	"expression: expression LT expr",
	"expression: expression EQUAL expr",
	"expression: expression UNEQUAL expr",
	"expression: expr",
	"expr: expr PLUS term",
	"expr: expr MINUS term",
	"expr: expr OR term",
	"expr: term",
	"term: term MUL factor",
	"term: term DIV factor",
	"term: term MOD factor",
	"term: term AND factor",
	"term: factor",
	"factor: ID",
	"$$16:",
	"factor: ID $$16 LP args_list RP",
	"$$17:",
	"factor: SYS_FUNCT $$17 LP args_list RP",
	"factor: const_value",
	"factor: LP expression RP",
	"factor: NOT factor",
	"factor: MINUS factor",
	"$$18:",
	"factor: ID $$18 LB expression RB",
	"$$19:",
	"factor: ID $$19 DOT ID",
	"args_list: args_list COMMA expression",
	"args_list: expression"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 3, 0 },
	{ 3, 0, 1 },
	{ 2, 4, 2 },
	{ 2, 1, 3 },
	{ 4, 2, 4 },
	{ 5, 2, 5 },
	{ 6, 5, 6 },
	{ 7, 0, 7 },
	{ 8, 2, 8 },
	{ 8, 0, 9 },
	{ 10, 0, 10 },
	{ 9, 6, 11 },
	{ 11, 0, 12 },
	{ 9, 5, 13 },
	{ 12, 1, 14 },
	{ 12, 1, 15 },
	{ 12, 1, 16 },
	{ 12, 1, 17 },
	{ 12, 1, 18 },
	{ 13, 2, 19 },
	{ 13, 0, 20 },
	{ 14, 2, 21 },
	{ 14, 1, 22 },
	{ 16, 0, 23 },
	{ 15, 5, 24 },
	{ 17, 6, 25 },
	{ 18, 3, 26 },
	{ 19, 2, 27 },
	{ 19, 1, 28 },
	{ 20, 4, 29 },
	{ 21, 3, 30 },
	{ 21, 1, 31 },
	{ 22, 1, 32 },
	{ 22, 1, 33 },
	{ 22, 3, 34 },
	{ 22, 3, 35 },
	{ 22, 4, 36 },
	{ 22, 5, 37 },
	{ 23, 0, 38 },
	{ 22, 4, 39 },
	{ 24, 1, 40 },
	{ 24, 1, 41 },
	{ 24, 1, 42 },
	{ 25, 2, 43 },
	{ 25, 0, 44 },
	{ 26, 2, 45 },
	{ 26, 1, 46 },
	{ 27, 4, 47 },
	{ 28, 2, 48 },
	{ 28, 2, 49 },
	{ 28, 0, 50 },
	{ 29, 4, 51 },
	{ 31, 0, 52 },
	{ 30, 6, 53 },
	{ 32, 4, 54 },
	{ 34, 0, 55 },
	{ 33, 4, 56 },
	{ 35, 3, 57 },
	{ 35, 0, 58 },
	{ 36, 3, 59 },
	{ 36, 1, 60 },
	{ 37, 3, 61 },
	{ 37, 3, 62 },
	{ 38, 2, 63 },
	{ 39, 1, 64 },
	{ 40, 1, 65 },
	{ 41, 3, 66 },
	{ 42, 3, 67 },
	{ 42, 0, 68 },
	{ 43, 3, 69 },
	{ 43, 1, 70 },
	{ 44, 1, 71 },
	{ 44, 1, 72 },
	{ 44, 1, 73 },
	{ 44, 1, 74 },
	{ 44, 1, 75 },
	{ 44, 1, 76 },
	{ 44, 1, 77 },
	{ 44, 1, 78 },
	{ 44, 1, 79 },
	{ 46, 0, 80 },
	{ 45, 4, 81 },
	{ 47, 0, 82 },
	{ 45, 7, 83 },
	{ 48, 0, 84 },
	{ 49, 0, 85 },
	{ 45, 7, 86 },
	{ 50, 1, 87 },
	{ 51, 0, 88 },
	{ 50, 5, 89 },
	{ 50, 1, 90 },
	{ 52, 0, 91 },
	{ 50, 5, 92 },
	{ 50, 4, 93 },
	{ 53, 5, 94 },
	{ 54, 2, 95 },
	{ 54, 0, 96 },
	{ 55, 4, 97 },
	{ 56, 4, 98 },
	{ 58, 0, 99 },
	{ 57, 9, 100 },
	{ 59, 1, 101 },
	{ 59, 1, 102 },
	{ 60, 5, 103 },
	{ 61, 2, 104 },
	{ 61, 1, 105 },
	{ 62, 4, 106 },
	{ 63, 0, 107 },
	{ 62, 5, 108 },
	{ 64, 2, 109 },
	{ 65, 3, 110 },
	{ 65, 1, 111 },
	{ 66, 3, 112 },
	{ 66, 3, 113 },
	{ 66, 3, 114 },
	{ 66, 3, 115 },
	{ 66, 3, 116 },
	{ 66, 3, 117 },
	{ 66, 1, 118 },
	{ 67, 3, 119 },
	{ 67, 3, 120 },
	{ 67, 3, 121 },
	{ 67, 1, 122 },
	{ 68, 3, 123 },
	{ 68, 3, 124 },
	{ 68, 3, 125 },
	{ 68, 3, 126 },
	{ 68, 1, 127 },
	{ 69, 1, 128 },
	{ 70, 0, 129 },
	{ 69, 5, 130 },
	{ 71, 0, 131 },
	{ 69, 5, 132 },
	{ 69, 1, 133 },
	{ 69, 3, 134 },
	{ 69, 2, 135 },
	{ 69, 2, 136 },
	{ 72, 0, 137 },
	{ 69, 5, 138 },
	{ 73, 0, 139 },
	{ 69, 4, 140 },
	{ 74, 3, 141 },
	{ 74, 1, 142 }
};

int YYNEAR YYDCDECL yytokenaction_size = 237;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 271, YYAT_SHIFT, 29 },
	{ 267, YYAT_SHIFT, 134 },
	{ 242, YYAT_SHIFT, 67 },
	{ 259, YYAT_SHIFT, 114 },
	{ 271, YYAT_SHIFT, 30 },
	{ 267, YYAT_SHIFT, 68 },
	{ 267, YYAT_SHIFT, 69 },
	{ 267, YYAT_SHIFT, 70 },
	{ 267, YYAT_SHIFT, 71 },
	{ 267, YYAT_SHIFT, 72 },
	{ 255, YYAT_SHIFT, 268 },
	{ 267, YYAT_SHIFT, 135 },
	{ 242, YYAT_SHIFT, 73 },
	{ 110, YYAT_SHIFT, 162 },
	{ 210, YYAT_SHIFT, 238 },
	{ 84, YYAT_SHIFT, 130 },
	{ 267, YYAT_SHIFT, 136 },
	{ 173, YYAT_SHIFT, 124 },
	{ 173, YYAT_SHIFT, 125 },
	{ 173, YYAT_SHIFT, 126 },
	{ 255, YYAT_SHIFT, 269 },
	{ 173, YYAT_SHIFT, 127 },
	{ 210, YYAT_SHIFT, 204 },
	{ 258, YYAT_SHIFT, 114 },
	{ 271, YYAT_SHIFT, 32 },
	{ 271, YYAT_SHIFT, 33 },
	{ 271, YYAT_SHIFT, 34 },
	{ 207, YYAT_SHIFT, 236 },
	{ 257, YYAT_SHIFT, 114 },
	{ 271, YYAT_SHIFT, 35 },
	{ 84, YYAT_ERROR, 0 },
	{ 271, YYAT_SHIFT, 36 },
	{ 259, YYAT_SHIFT, 271 },
	{ 235, YYAT_SHIFT, 114 },
	{ 110, YYAT_ERROR, 0 },
	{ 271, YYAT_SHIFT, 37 },
	{ 271, YYAT_SHIFT, 38 },
	{ 259, YYAT_SHIFT, 116 },
	{ 259, YYAT_SHIFT, 117 },
	{ 259, YYAT_SHIFT, 118 },
	{ 259, YYAT_SHIFT, 119 },
	{ 259, YYAT_SHIFT, 120 },
	{ 234, YYAT_SHIFT, 114 },
	{ 78, YYAT_SHIFT, 115 },
	{ 267, YYAT_SHIFT, 139 },
	{ 242, YYAT_SHIFT, 74 },
	{ 207, YYAT_ERROR, 0 },
	{ 178, YYAT_SHIFT, 114 },
	{ 78, YYAT_ERROR, 0 },
	{ 170, YYAT_SHIFT, 121 },
	{ 170, YYAT_SHIFT, 122 },
	{ 242, YYAT_SHIFT, 75 },
	{ 156, YYAT_SHIFT, 114 },
	{ 271, YYAT_SHIFT, 39 },
	{ 170, YYAT_SHIFT, 123 },
	{ 268, YYAT_SHIFT, 250 },
	{ 242, YYAT_SHIFT, 76 },
	{ 258, YYAT_SHIFT, 116 },
	{ 258, YYAT_SHIFT, 117 },
	{ 258, YYAT_SHIFT, 118 },
	{ 258, YYAT_SHIFT, 119 },
	{ 258, YYAT_SHIFT, 120 },
	{ 257, YYAT_SHIFT, 116 },
	{ 257, YYAT_SHIFT, 117 },
	{ 257, YYAT_SHIFT, 118 },
	{ 257, YYAT_SHIFT, 119 },
	{ 257, YYAT_SHIFT, 120 },
	{ 235, YYAT_SHIFT, 116 },
	{ 235, YYAT_SHIFT, 117 },
	{ 235, YYAT_SHIFT, 118 },
	{ 235, YYAT_SHIFT, 119 },
	{ 235, YYAT_SHIFT, 120 },
	{ 154, YYAT_SHIFT, 114 },
	{ 213, YYAT_ERROR, 0 },
	{ 213, YYAT_SHIFT, 240 },
	{ 213, YYAT_SHIFT, 241 },
	{ 234, YYAT_SHIFT, 116 },
	{ 234, YYAT_SHIFT, 117 },
	{ 234, YYAT_SHIFT, 118 },
	{ 234, YYAT_SHIFT, 119 },
	{ 234, YYAT_SHIFT, 120 },
	{ 178, YYAT_SHIFT, 116 },
	{ 178, YYAT_SHIFT, 117 },
	{ 178, YYAT_SHIFT, 118 },
	{ 178, YYAT_SHIFT, 119 },
	{ 178, YYAT_SHIFT, 120 },
	{ 156, YYAT_SHIFT, 116 },
	{ 156, YYAT_SHIFT, 117 },
	{ 156, YYAT_SHIFT, 118 },
	{ 156, YYAT_SHIFT, 119 },
	{ 156, YYAT_SHIFT, 120 },
	{ 151, YYAT_SHIFT, 114 },
	{ 172, YYAT_SHIFT, 124 },
	{ 172, YYAT_SHIFT, 125 },
	{ 172, YYAT_SHIFT, 126 },
	{ 265, YYAT_SHIFT, 92 },
	{ 172, YYAT_SHIFT, 127 },
	{ 187, YYAT_SHIFT, 219 },
	{ 191, YYAT_SHIFT, 92 },
	{ 191, YYAT_SHIFT, 223 },
	{ 29, YYAT_REDUCE, 85 },
	{ 248, YYAT_ERROR, 0 },
	{ 262, YYAT_SHIFT, 137 },
	{ 67, YYAT_REDUCE, 140 },
	{ 262, YYAT_SHIFT, 138 },
	{ 187, YYAT_SHIFT, 92 },
	{ 154, YYAT_SHIFT, 116 },
	{ 154, YYAT_SHIFT, 117 },
	{ 154, YYAT_SHIFT, 118 },
	{ 154, YYAT_SHIFT, 119 },
	{ 154, YYAT_SHIFT, 120 },
	{ 248, YYAT_ERROR, 0 },
	{ 29, YYAT_REDUCE, 89 },
	{ 157, YYAT_SHIFT, 205 },
	{ 29, YYAT_REDUCE, 83 },
	{ 67, YYAT_REDUCE, 130 },
	{ 248, YYAT_ERROR, 0 },
	{ 67, YYAT_REDUCE, 138 },
	{ 171, YYAT_SHIFT, 124 },
	{ 171, YYAT_SHIFT, 125 },
	{ 171, YYAT_SHIFT, 126 },
	{ 157, YYAT_SHIFT, 206 },
	{ 171, YYAT_SHIFT, 127 },
	{ 29, YYAT_REDUCE, 81 },
	{ 260, YYAT_SHIFT, 272 },
	{ 151, YYAT_SHIFT, 116 },
	{ 151, YYAT_SHIFT, 117 },
	{ 151, YYAT_SHIFT, 118 },
	{ 151, YYAT_SHIFT, 119 },
	{ 151, YYAT_SHIFT, 120 },
	{ 81, YYAT_SHIFT, 124 },
	{ 81, YYAT_SHIFT, 125 },
	{ 81, YYAT_SHIFT, 126 },
	{ 253, YYAT_SHIFT, 267 },
	{ 81, YYAT_SHIFT, 127 },
	{ 169, YYAT_SHIFT, 121 },
	{ 169, YYAT_SHIFT, 122 },
	{ 168, YYAT_SHIFT, 121 },
	{ 168, YYAT_SHIFT, 122 },
	{ 0, YYAT_SHIFT, 1 },
	{ 169, YYAT_SHIFT, 123 },
	{ 0, YYAT_SHIFT, 2 },
	{ 168, YYAT_SHIFT, 123 },
	{ 252, YYAT_SHIFT, 266 },
	{ 248, YYAT_ERROR, 0 },
	{ 167, YYAT_SHIFT, 121 },
	{ 167, YYAT_SHIFT, 122 },
	{ 166, YYAT_SHIFT, 121 },
	{ 166, YYAT_SHIFT, 122 },
	{ 251, YYAT_SHIFT, 92 },
	{ 167, YYAT_SHIFT, 123 },
	{ 250, YYAT_SHIFT, 55 },
	{ 166, YYAT_SHIFT, 123 },
	{ 164, YYAT_SHIFT, 121 },
	{ 164, YYAT_SHIFT, 122 },
	{ 80, YYAT_SHIFT, 121 },
	{ 80, YYAT_SHIFT, 122 },
	{ 247, YYAT_SHIFT, 263 },
	{ 164, YYAT_SHIFT, 123 },
	{ 246, YYAT_SHIFT, 262 },
	{ 80, YYAT_SHIFT, 123 },
	{ 59, YYAT_SHIFT, 94 },
	{ 59, YYAT_SHIFT, 95 },
	{ 244, YYAT_SHIFT, 261 },
	{ 227, YYAT_SHIFT, 256 },
	{ 224, YYAT_SHIFT, 248 },
	{ 220, YYAT_SHIFT, 246 },
	{ 218, YYAT_SHIFT, 245 },
	{ 214, YYAT_SHIFT, 243 },
	{ 208, YYAT_SHIFT, 237 },
	{ 202, YYAT_SHIFT, 233 },
	{ 201, YYAT_SHIFT, 232 },
	{ 200, YYAT_SHIFT, 231 },
	{ 199, YYAT_SHIFT, 230 },
	{ 198, YYAT_SHIFT, 13 },
	{ 197, YYAT_SHIFT, 226 },
	{ 196, YYAT_SHIFT, 226 },
	{ 192, YYAT_SHIFT, 224 },
	{ 189, YYAT_SHIFT, 221 },
	{ 186, YYAT_SHIFT, 218 },
	{ 183, YYAT_SHIFT, 216 },
	{ 181, YYAT_SHIFT, 215 },
	{ 165, YYAT_SHIFT, 211 },
	{ 161, YYAT_SHIFT, 209 },
	{ 155, YYAT_SHIFT, 203 },
	{ 152, YYAT_SHIFT, 201 },
	{ 146, YYAT_SHIFT, 195 },
	{ 141, YYAT_SHIFT, 194 },
	{ 140, YYAT_SHIFT, 193 },
	{ 137, YYAT_SHIFT, 188 },
	{ 134, YYAT_REDUCE, 39 },
	{ 133, YYAT_SHIFT, 185 },
	{ 130, YYAT_SHIFT, 180 },
	{ 129, YYAT_SHIFT, 179 },
	{ 112, YYAT_SHIFT, 163 },
	{ 109, YYAT_SHIFT, 161 },
	{ 108, YYAT_SHIFT, 160 },
	{ 107, YYAT_SHIFT, 159 },
	{ 106, YYAT_SHIFT, 158 },
	{ 102, YYAT_SHIFT, 153 },
	{ 98, YYAT_SHIFT, 150 },
	{ 96, YYAT_SHIFT, 149 },
	{ 95, YYAT_SHIFT, 148 },
	{ 94, YYAT_SHIFT, 147 },
	{ 92, YYAT_SHIFT, 145 },
	{ 88, YYAT_SHIFT, 132 },
	{ 86, YYAT_SHIFT, 131 },
	{ 82, YYAT_SHIFT, 128 },
	{ 65, YYAT_SHIFT, 105 },
	{ 64, YYAT_ERROR, 0 },
	{ 63, YYAT_SHIFT, 103 },
	{ 62, YYAT_SHIFT, 102 },
	{ 61, YYAT_SHIFT, 101 },
	{ 60, YYAT_SHIFT, 100 },
	{ 57, YYAT_SHIFT, 93 },
	{ 56, YYAT_SHIFT, 55 },
	{ 53, YYAT_SHIFT, 90 },
	{ 52, YYAT_SHIFT, 89 },
	{ 40, YYAT_SHIFT, 87 },
	{ 38, YYAT_SHIFT, 85 },
	{ 36, YYAT_SHIFT, 83 },
	{ 33, YYAT_SHIFT, 66 },
	{ 32, YYAT_REDUCE, 92 },
	{ 30, YYAT_SHIFT, 64 },
	{ 25, YYAT_SHIFT, 24 },
	{ 22, YYAT_SHIFT, 51 },
	{ 21, YYAT_SHIFT, 31 },
	{ 20, YYAT_SHIFT, 27 },
	{ 19, YYAT_SHIFT, 24 },
	{ 18, YYAT_SHIFT, 23 },
	{ 12, YYAT_SHIFT, 19 },
	{ 11, YYAT_SHIFT, 17 },
	{ 9, YYAT_SHIFT, 16 },
	{ 7, YYAT_SHIFT, 11 },
	{ 6, YYAT_SHIFT, 10 },
	{ 3, YYAT_ACCEPT, 0 },
	{ 2, YYAT_SHIFT, 5 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ -117, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ -23, 1, YYAT_ERROR, 0 },
	{ 235, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ -23, 1, YYAT_ERROR, 0 },
	{ -28, 1, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_DEFAULT, 198 },
	{ -28, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ -28, 1, YYAT_ERROR, 0 },
	{ -38, 1, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 69 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 66 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ -30, 1, YYAT_REDUCE, 9 },
	{ -31, 1, YYAT_ERROR, 0 },
	{ -82, 1, YYAT_REDUCE, 45 },
	{ -56, 1, YYAT_DEFAULT, 271 },
	{ -37, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 24 },
	{ -35, 1, YYAT_REDUCE, 20 },
	{ 0, 0, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_DEFAULT, 250 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ -157, 1, YYAT_REDUCE, 88 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 67 },
	{ -47, 1, YYAT_REDUCE, 91 },
	{ -48, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 69 },
	{ -39, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -44, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -42, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 74 },
	{ 0, 0, YYAT_REDUCE, 76 },
	{ 0, 0, YYAT_REDUCE, 77 },
	{ 0, 0, YYAT_REDUCE, 80 },
	{ 0, 0, YYAT_REDUCE, 73 },
	{ 0, 0, YYAT_REDUCE, 78 },
	{ 0, 0, YYAT_REDUCE, 79 },
	{ 0, 0, YYAT_REDUCE, 72 },
	{ 0, 0, YYAT_REDUCE, 75 },
	{ 0, 0, YYAT_REDUCE, 71 },
	{ 0, 0, YYAT_DEFAULT, 248 },
	{ -45, 1, YYAT_ERROR, 0 },
	{ -46, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ -44, 1, YYAT_REDUCE, 44 },
	{ -65, 1, YYAT_DEFAULT, 191 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ -149, 1, YYAT_REDUCE, 7 },
	{ -67, 1, YYAT_ERROR, 0 },
	{ -59, 1, YYAT_ERROR, 0 },
	{ -46, 1, YYAT_ERROR, 0 },
	{ -59, 1, YYAT_ERROR, 0 },
	{ -54, 1, YYAT_DEFAULT, 271 },
	{ -61, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -154, 1, YYAT_REDUCE, 129 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 132 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 134 },
	{ -243, 1, YYAT_DEFAULT, 259 },
	{ 0, 0, YYAT_REDUCE, 128 },
	{ -146, 1, YYAT_REDUCE, 119 },
	{ -173, 1, YYAT_REDUCE, 123 },
	{ -82, 1, YYAT_DEFAULT, 271 },
	{ 0, 0, YYAT_REDUCE, 100 },
	{ -261, 1, YYAT_DEFAULT, 259 },
	{ 0, 0, YYAT_REDUCE, 110 },
	{ -85, 1, YYAT_DEFAULT, 259 },
	{ 0, 0, YYAT_REDUCE, 68 },
	{ -55, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 248 },
	{ 0, 0, YYAT_DEFAULT, 262 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -55, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 262 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ -57, 1, YYAT_ERROR, 0 },
	{ -59, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ -60, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -60, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 70 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -72, 1, YYAT_ERROR, 0 },
	{ -74, 1, YYAT_ERROR, 0 },
	{ -73, 1, YYAT_ERROR, 0 },
	{ -62, 1, YYAT_ERROR, 0 },
	{ -257, 1, YYAT_DEFAULT, 259 },
	{ 0, 0, YYAT_REDUCE, 137 },
	{ -75, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 136 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 271 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -87, 1, YYAT_ERROR, 0 },
	{ -67, 1, YYAT_DEFAULT, 248 },
	{ 0, 0, YYAT_DEFAULT, 271 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -69, 1, YYAT_ERROR, 0 },
	{ -83, 1, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_DEFAULT, 250 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ -82, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 250 },
	{ 0, 0, YYAT_DEFAULT, 248 },
	{ -72, 1, YYAT_ERROR, 0 },
	{ -86, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ 0, 0, YYAT_REDUCE, 43 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -74, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ -171, 1, YYAT_REDUCE, 82 },
	{ -87, 1, YYAT_DEFAULT, 207 },
	{ 0, 0, YYAT_REDUCE, 86 },
	{ -190, 1, YYAT_REDUCE, 143 },
	{ -86, 1, YYAT_DEFAULT, 210 },
	{ -210, 1, YYAT_REDUCE, 112 },
	{ -157, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 94 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -76, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 135 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -148, 1, YYAT_REDUCE, 117 },
	{ -105, 1, YYAT_REDUCE, 97 },
	{ -154, 1, YYAT_REDUCE, 113 },
	{ -156, 1, YYAT_REDUCE, 114 },
	{ -164, 1, YYAT_REDUCE, 115 },
	{ -166, 1, YYAT_REDUCE, 116 },
	{ -252, 1, YYAT_REDUCE, 118 },
	{ -185, 1, YYAT_REDUCE, 120 },
	{ -211, 1, YYAT_REDUCE, 121 },
	{ -286, 1, YYAT_REDUCE, 122 },
	{ 0, 0, YYAT_REDUCE, 124 },
	{ 0, 0, YYAT_REDUCE, 126 },
	{ 0, 0, YYAT_REDUCE, 125 },
	{ 0, 0, YYAT_REDUCE, 127 },
	{ -215, 1, YYAT_REDUCE, 98 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 108 },
	{ -98, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 106 },
	{ -102, 1, YYAT_DEFAULT, 130 },
	{ 0, 0, YYAT_REDUCE, 99 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ -94, 1, YYAT_ERROR, 0 },
	{ -173, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 267 },
	{ -104, 1, YYAT_DEFAULT, 250 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ -180, 1, YYAT_ERROR, 0 },
	{ -96, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 0, 0, YYAT_DEFAULT, 248 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -93, 1, YYAT_REDUCE, 59 },
	{ -94, 1, YYAT_REDUCE, 59 },
	{ -107, 1, YYAT_ERROR, 0 },
	{ -87, 1, YYAT_ERROR, 0 },
	{ -88, 1, YYAT_ERROR, 0 },
	{ -109, 1, YYAT_ERROR, 0 },
	{ -110, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 90 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_REDUCE, 93 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -245, 1, YYAT_DEFAULT, 259 },
	{ -101, 1, YYAT_DEFAULT, 210 },
	{ 0, 0, YYAT_REDUCE, 141 },
	{ -256, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 271 },
	{ 0, 0, YYAT_REDUCE, 95 },
	{ -218, 1, YYAT_DEFAULT, 259 },
	{ -111, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 271 },
	{ 0, 0, YYAT_REDUCE, 104 },
	{ 0, 0, YYAT_REDUCE, 105 },
	{ -92, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ -106, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_DEFAULT, 262 },
	{ -137, 1, YYAT_DEFAULT, 248 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_DEFAULT, 268 },
	{ -115, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ 0, 0, YYAT_DEFAULT, 242 },
	{ -220, 1, YYAT_REDUCE, 142 },
	{ -229, 1, YYAT_REDUCE, 111 },
	{ 0, 0, YYAT_REDUCE, 139 },
	{ 0, 0, YYAT_REDUCE, 131 },
	{ 0, 0, YYAT_REDUCE, 133 },
	{ 0, 0, YYAT_REDUCE, 96 },
	{ 0, 0, YYAT_REDUCE, 102 },
	{ 0, 0, YYAT_REDUCE, 103 },
	{ -257, 1, YYAT_DEFAULT, 248 },
	{ 0, 0, YYAT_DEFAULT, 271 },
	{ -97, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ -117, 1, YYAT_ERROR, 0 },
	{ -103, 1, YYAT_ERROR, 0 },
	{ -158, 1, YYAT_DEFAULT, 267 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ -108, 1, YYAT_ERROR, 0 },
	{ -129, 1, YYAT_REDUCE, 65 },
	{ -136, 1, YYAT_ERROR, 0 },
	{ -146, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 267 },
	{ -234, 1, YYAT_REDUCE, 84 },
	{ -239, 1, YYAT_REDUCE, 87 },
	{ -259, 1, YYAT_ERROR, 0 },
	{ -136, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 107 },
	{ -173, 1, YYAT_DEFAULT, 267 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ -183, 1, YYAT_REDUCE, 64 },
	{ 0, 0, YYAT_DEFAULT, 267 },
	{ -258, 1, YYAT_ERROR, 0 },
	{ -254, 1, YYAT_DEFAULT, 250 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ -259, 1, YYAT_DEFAULT, 198 },
	{ 0, 0, YYAT_REDUCE, 109 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 0, YYAT_REDUCE, 63 },
	{ 0, 0, YYAT_REDUCE, 62 },
	{ 0, 0, YYAT_REDUCE, 60 },
	{ 0, 0, YYAT_REDUCE, 101 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 147;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 271, 41 },
	{ 127, 77 },
	{ 271, 277 },
	{ 271, 50 },
	{ 271, 48 },
	{ 183, 181 },
	{ 262, 142 },
	{ 262, 144 },
	{ 268, 251 },
	{ 271, 45 },
	{ 267, 141 },
	{ 262, 143 },
	{ 271, 49 },
	{ 262, 273 },
	{ 271, 42 },
	{ 271, 43 },
	{ 271, 46 },
	{ 226, 255 },
	{ 226, 254 },
	{ 271, 47 },
	{ 267, 275 },
	{ 198, 229 },
	{ 198, 15 },
	{ 271, 44 },
	{ 268, 276 },
	{ 268, 253 },
	{ 268, 252 },
	{ 29, 60 },
	{ 29, 61 },
	{ 29, 62 },
	{ 59, 97 },
	{ 59, 98 },
	{ 29, 63 },
	{ 59, 99 },
	{ 59, 96 },
	{ 163, 154 },
	{ 56, 57 },
	{ 67, 108 },
	{ 266, 274 },
	{ 67, 107 },
	{ 67, 109 },
	{ 256, 270 },
	{ 56, 91 },
	{ 163, 210 },
	{ 4, 6 },
	{ 250, 265 },
	{ 4, 8 },
	{ 4, 7 },
	{ 242, 259 },
	{ 242, 80 },
	{ 242, 81 },
	{ 150, 200 },
	{ 150, 198 },
	{ 150, 7 },
	{ 248, 264 },
	{ 183, 217 },
	{ 189, 222 },
	{ 189, 191 },
	{ 127, 177 },
	{ 138, 189 },
	{ 138, 190 },
	{ 130, 183 },
	{ 130, 182 },
	{ 123, 173 },
	{ 123, 79 },
	{ 120, -1 },
	{ 120, 170 },
	{ 105, 157 },
	{ 105, 156 },
	{ 64, -1 },
	{ 64, 104 },
	{ 27, 56 },
	{ 27, 58 },
	{ 19, 25 },
	{ 19, 26 },
	{ 0, 3 },
	{ 0, 4 },
	{ 243, 260 },
	{ 233, 258 },
	{ 232, 257 },
	{ 224, 249 },
	{ 223, 247 },
	{ 215, 244 },
	{ 213, 242 },
	{ 211, 239 },
	{ 206, 235 },
	{ 204, 234 },
	{ 197, 228 },
	{ 196, 227 },
	{ 194, 225 },
	{ 188, 220 },
	{ 180, 214 },
	{ 179, 213 },
	{ 165, 212 },
	{ 160, 208 },
	{ 159, 207 },
	{ 153, 202 },
	{ 149, 199 },
	{ 148, 197 },
	{ 147, 196 },
	{ 139, 192 },
	{ 135, 187 },
	{ 134, 186 },
	{ 131, 184 },
	{ 128, 178 },
	{ 126, 176 },
	{ 125, 175 },
	{ 124, 174 },
	{ 122, 172 },
	{ 121, 171 },
	{ 119, 169 },
	{ 118, 168 },
	{ 117, 167 },
	{ 116, 166 },
	{ 115, 165 },
	{ 114, 164 },
	{ 103, 155 },
	{ 101, 152 },
	{ 100, 151 },
	{ 93, 146 },
	{ 90, 140 },
	{ 89, 133 },
	{ 83, 129 },
	{ 82, 40 },
	{ 76, 113 },
	{ 75, 112 },
	{ 74, 111 },
	{ 73, 110 },
	{ 66, 106 },
	{ 51, 88 },
	{ 39, 86 },
	{ 37, 84 },
	{ 35, 82 },
	{ 34, 78 },
	{ 32, 65 },
	{ 28, 59 },
	{ 25, 54 },
	{ 24, 53 },
	{ 23, 52 },
	{ 20, 28 },
	{ 17, 22 },
	{ 13, 21 },
	{ 12, 20 },
	{ 11, 18 },
	{ 8, 14 },
	{ 7, 12 },
	{ 5, 9 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 74, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 40, -1 },
	{ 143, -1 },
	{ 0, -1 },
	{ 137, -1 },
	{ 104, 198 },
	{ 0, -1 },
	{ 0, -1 },
	{ 134, -1 },
	{ 129, -1 },
	{ 99, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 129, -1 },
	{ 0, -1 },
	{ 59, -1 },
	{ 114, -1 },
	{ 0, 82 },
	{ 0, -1 },
	{ 128, -1 },
	{ 121, -1 },
	{ 121, -1 },
	{ 0, -1 },
	{ 45, 56 },
	{ 107, -1 },
	{ -19, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 82, -1 },
	{ 0, -1 },
	{ 67, 242 },
	{ 90, -1 },
	{ 0, -1 },
	{ 65, 242 },
	{ 0, -1 },
	{ 64, 242 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 117, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 15, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 1, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 26, 271 },
	{ 0, -1 },
	{ 59, 127 },
	{ -33, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 61, 242 },
	{ 57, 127 },
	{ 54, -1 },
	{ 55, 127 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 80, 271 },
	{ 64, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 109, -1 },
	{ 96, 262 },
	{ 0, -1 },
	{ 0, -1 },
	{ 95, 262 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 52, 242 },
	{ 51, 242 },
	{ 0, -1 },
	{ 42, 163 },
	{ 0, -1 },
	{ 2, 242 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 48, 120 },
	{ 71, 271 },
	{ 46, 120 },
	{ 45, 120 },
	{ 44, 120 },
	{ 43, 120 },
	{ -1, 242 },
	{ 41, 123 },
	{ 40, 123 },
	{ -5, 127 },
	{ 38, 127 },
	{ 37, 127 },
	{ 36, 127 },
	{ -11, -1 },
	{ 38, 242 },
	{ 0, -1 },
	{ 0, 183 },
	{ 60, 271 },
	{ 0, -1 },
	{ 0, -1 },
	{ 79, -1 },
	{ 80, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 40, 189 },
	{ 88, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 68, -1 },
	{ 64, -1 },
	{ 92, 150 },
	{ 46, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 47, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, 242 },
	{ 20, 163 },
	{ 0, -1 },
	{ 0, -1 },
	{ -31, 242 },
	{ 0, -1 },
	{ 39, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 26, 242 },
	{ 28, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -7, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 68, 267 },
	{ 36, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 77, -1 },
	{ 0, -1 },
	{ 53, -1 },
	{ 52, -1 },
	{ -19, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 20, 242 },
	{ 0, -1 },
	{ 19, 242 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 41, 271 },
	{ 0, -1 },
	{ 24, -1 },
	{ 0, -1 },
	{ 39, 271 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 57, 262 },
	{ 68, -1 },
	{ 0, -1 },
	{ -19, 268 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 13, 242 },
	{ 12, 242 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -18, 123 },
	{ 34, 271 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 42, -1 },
	{ 0, -1 },
	{ 24, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 19, 267 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -11, 267 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 16, 267 },
	{ -2, -1 },
	{ -13, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -41, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 1500 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section
int DrawTree(FILE *fp, node * T, int depth){
	int i =0;
	for(i = 0;i < depth - 1;i++){
		fprintf(fp, "\t|");	
	}
	if(depth > 0){
		fprintf(fp, "\t");	
	}
	fprintf(fp, "+--");	
//	fprintf(stderr, "%d:%d\n", T->nodeID, enumToString[T->nodeKind]);
	if(T->attr.nodeString){
		fprintf(fp, "nodeID:%d;nodeType:%s;whichDerivation:%d;nodeContent:%s \n", T->nodeID, enumToString[T->nodeKind], T->derivation, T->attr.nodeString);
	}
	else{
		fprintf(fp, "nodeID:%d;nodeType:%s;whichDerivation:%d\n", T->nodeID, enumToString[T->nodeKind], T->derivation);
	}
	for(i = 0;i < 5;i++){
		if(T->child[i]){
			DrawTree(fp, &myNode[T->child[i]], depth + 1);
		}
	}
	return 1;
}
int ClearTree(node *T){
	int i;
	for(i = 0;i < 5;i++){
		if(T->child[i]){
			ClearTree(&myNode[T->child[i]]);
		}
	}
	if(T->attr.nodeString){
		free(T->attr.nodeString);
	}
	return  1;
}

int main(int argc, char * argv[])
{
	if (argc < 2){ fprintf(stdout,"yyin miss: %s <filename>\n",argv[0]);
      exit(1);
    }
    else{
	    fprintf(stdout,"filename: %s \n",argv[1]);
	    if ((yyin = fopen(argv[1], "r")) == NULL){
	        fprintf(stdout,"Can't open file: %s \n", argv[1]);		
	    }
	    if(argc > 2){
			fprintf(stdout,"filename: %s \n",argv[1]);
			if((yyout = fopen("argv[2]", "w")) == NULL){
				fprintf(stdout,"Can't opne file: %s \n",argv[2]);
			}
	    }
	    else{
			fprintf(stdout,"yyout miss: %s <filename>\n",argv[0]);
			if((yyout = fopen("my_yyout", "w")) == NULL){
				fprintf(stdout,"Can't opne file: my_yyout \n");
			}	    
		}
	    
    }
	if(freopen("test_output", "w", stdout) == NULL){
		fclose(yyin);
		fclose(yyout);	
        fprintf(stderr,"error redirecting stdout\n");
	}
    yyparse();
	fclose(yyin);
	fclose(yyout);
	if(drawTree){
		FILE * fp;
		if((fp = fopen("tree", "w")) == NULL){		
	       fprintf(stderr,"Can't draw tree!\n");
		}
		DrawTree(fp, root, 0);
		fclose(fp);
	}
	ClearTree(root);
	fclose(stdout);
	getchar();
	return 0;
}

void yyerror(char *s)
{
	fprintf(stderr, "line %d:you have a sytax error near %s %s\n", lineNo, yytext,myToken);
	return 1;
}



