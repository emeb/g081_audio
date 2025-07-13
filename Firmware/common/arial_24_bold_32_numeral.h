#ifndef arial_24_bold_32_numeralH
#define arial_24_bold_32_numeralH

#ifndef SMfgTypes
#define SMfgTypes

/*======= binar input =======*/
#define b2b(b7,b6,b5,b4,b3,b2,b1,b0) ((unsigned char)((b7)*128u + (b6)*64u + (b5)*32u + (b4)*16u + (b3)*8u + (b2)*4u + (b1)*2u + (b0)))

/*============================================================================*/
/* You have to manualy set correct types TCDATA and TCLISTP                   */
/* for your platform and compiler.                                            */
/*                                                                            */
/* Keil C51 example:                                                          */
/* Character data (TCDATA) are stored in code memory,                         */
/* array of pointers to characters (TCLISTP) is stored in code memory         */
/* and pointers are pointing into code memory.                                */
/*                                                                            */
/* typedef unsigned char code TCDATA;                                         */
/* typedef TCDATA * code TCLISTP;                                             */
/*============================================================================*/

typedef const unsigned char TCDATA;
typedef const TCDATA* TCLISTP;

#endif

/*======= Character pointers table =======*/
extern TCLISTP arial_24_bold_32_numeral[256];

/*======= Characters data =======*/
TCDATA arial_24_bold_32_numeral_n0[57];
TCDATA arial_24_bold_32_numeral_n1[45];
TCDATA arial_24_bold_32_numeral_n2[57];
TCDATA arial_24_bold_32_numeral_n3[57];
TCDATA arial_24_bold_32_numeral_n4[61];
TCDATA arial_24_bold_32_numeral_n5[57];
TCDATA arial_24_bold_32_numeral_n6[57];
TCDATA arial_24_bold_32_numeral_n7[57];
TCDATA arial_24_bold_32_numeral_n8[57];
TCDATA arial_24_bold_32_numeral_n9[57];
TCDATA arial_24_bold_32_numeral_blank[33];

#endif
