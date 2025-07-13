/*
 * mv_progs.c - auto-generated C code for Midiverb programs
 */
#include <stdint.h>
uint16_t addr;
int16_t acc, mem[16384];
void prog00(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3E38)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CFF)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E44)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x074C)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3D44)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3ED3)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D31)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0899)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3FC0)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 15
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 19
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 20
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 28
	mem[addr]=~acc; addr=(addr+0x3F34)&0x3fff; // 29
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CC)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EF4)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CC)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 37
	mem[addr]=~acc;  // 38
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x010C)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3D68)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F52)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AC)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F54)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3EF9)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0531)&0x3fff; // 63
	mem[addr]= acc; addr=(addr+0x3719)&0x3fff; // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E7)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x371A)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08F1)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x3B7D)&0x3fff; // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F75)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0089)&0x3fff; // 74
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F77)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x3ED7)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EE1)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x011D)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EE3)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E1)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x3716)&0x3fff; // 84
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08EA)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3717)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 87
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08F4)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AC3)&0x3fff; // 91
	mem[addr]= acc; addr=(addr+0x0533)&0x3fff; // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog01(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3E38)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CFF)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E44)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x074C)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3D44)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3ED3)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D31)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0899)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x371A)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E2)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x371F)&0x3fff; // 16
	mem[addr]= acc; addr=(addr+0x08A5)&0x3fff; // 17
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x375A)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E0)&0x3fff; // 22
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 23
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 31
	mem[addr]=~acc; addr=(addr+0x3F34)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CC)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 34
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EF4)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CC)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 40
	mem[addr]=~acc;  // 41
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 42
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x010C)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 52
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 54
	mem[addr]= acc; addr=(addr+0x3D68)&0x3fff; // 55
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F52)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AC)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F54)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 60
	mem[addr]= acc; addr=(addr+0x3EF9)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0531)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x3719)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E7)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x371A)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08F1)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x3B7D)&0x3fff; // 75
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F75)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0089)&0x3fff; // 77
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F77)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x3ED7)&0x3fff; // 81
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EE1)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x011D)&0x3fff; // 83
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EE3)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08E1)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3716)&0x3fff; // 87
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08EA)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3717)&0x3fff; // 89
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 90
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08F4)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AC3)&0x3fff; // 94
	mem[addr]= acc; addr=(addr+0x0533)&0x3fff; // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog02(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3D84)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B6F)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C50)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DAA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D14)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3C90)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D43)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C27)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BA1)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E61)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3FC0)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 15
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 19
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 20
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 28
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 29
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 37
	mem[addr]=~acc;  // 38
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3BEC)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E8A)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0174)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E8C)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3DCD)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07B5)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3697)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01B2)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E4E)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0969)&0x3fff; // 64
	mem[addr]= acc; addr=(addr+0x2F5D)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A3)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5E)&0x3fff; // 67
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10AD)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DB9)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x3731)&0x3fff; // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EAD)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 75
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAF)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 78
	mem[addr]= acc; addr=(addr+0x3DAB)&0x3fff; // 79
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0EB6)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2F63)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01E5)&0x3fff; // 82
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x109D)&0x3fff; // 85
	mem[addr]= acc; addr=(addr+0x2F5A)&0x3fff; // 86
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A6)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5B)&0x3fff; // 88
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 89
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10B0)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x368B)&0x3fff; // 93
	mem[addr]= acc; addr=(addr+0x096B)&0x3fff; // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog03(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3E38)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BD3)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D7C)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DAA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0AD0)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3D44)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DA7)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D53)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BA1)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C1D)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3FC0)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 15
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 19
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 20
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 28
	mem[addr]=~acc; addr=(addr+0x3F3E)&0x3fff; // 29
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C2)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EFE)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C2)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 37
	mem[addr]=~acc;  // 38
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0102)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3CA0)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EEE)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0110)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EF0)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3E31)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0725)&0x3fff; // 63
	mem[addr]= acc; addr=(addr+0x32CD)&0x3fff; // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D33)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CE)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D3D)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x38C1)&0x3fff; // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EAD)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 74
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAF)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x3E73)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E7D)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0181)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E7F)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D2D)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x32CA)&0x3fff; // 84
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D36)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CB)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 87
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D40)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38CF)&0x3fff; // 91
	mem[addr]= acc; addr=(addr+0x0727)&0x3fff; // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog04(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3E2A)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C37)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C50)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DAA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0BA6)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3D36)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D43)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CEF)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CCD)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0BC7)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3194)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E68)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3199)&0x3fff; // 16
	mem[addr]= acc; addr=(addr+0x0E2B)&0x3fff; // 17
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x31D4)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E66)&0x3fff; // 22
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 23
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 31
	mem[addr]=~acc; addr=(addr+0x3F3E)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C2)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 34
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EFE)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C2)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 40
	mem[addr]=~acc;  // 41
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 42
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0102)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 52
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 54
	mem[addr]= acc; addr=(addr+0x3C92)&0x3fff; // 55
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0174)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E8C)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 60
	mem[addr]= acc; addr=(addr+0x3E95)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4C)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01B2)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E4E)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07FB)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x3193)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E6D)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3194)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E77)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E5F)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x37F9)&0x3fff; // 75
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EAD)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 77
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAF)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x3E73)&0x3fff; // 81
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E19)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01E5)&0x3fff; // 83
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E67)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3190)&0x3fff; // 87
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E70)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3191)&0x3fff; // 89
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 90
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E7A)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37F9)&0x3fff; // 94
	mem[addr]= acc; addr=(addr+0x07FD)&0x3fff; // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog05(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3D84)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B6F)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C50)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DAA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D14)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3C90)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D43)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C27)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BA1)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E61)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3FC0)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 15
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 19
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 20
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 28
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 29
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 37
	mem[addr]=~acc;  // 38
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3BEC)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E8A)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0174)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E8C)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3DCD)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4C)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01B2)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E4E)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0969)&0x3fff; // 63
	mem[addr]= acc; addr=(addr+0x2F5D)&0x3fff; // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A3)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5E)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10AD)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DB9)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x3731)&0x3fff; // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EAD)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 74
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAF)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x3DAB)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E19)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01E5)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x109D)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x2F5A)&0x3fff; // 84
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A6)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5B)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 87
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10B0)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x368B)&0x3fff; // 91
	mem[addr]= acc; addr=(addr+0x096B)&0x3fff; // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog06(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3D84)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B6F)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C50)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DAA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D18)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x3C90)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D43)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C27)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BA1)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E63)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x2F5E)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x109E)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F63)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x1061)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F9E)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x109C)&0x3fff; // 20
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 21
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 29
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 30
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]=~acc;  // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x3BEC)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E8A)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0174)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E8C)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 58
	mem[addr]= acc; addr=(addr+0x3DCD)&0x3fff; // 59
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4C)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01B2)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E4E)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0969)&0x3fff; // 64
	mem[addr]= acc; addr=(addr+0x2F5D)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A3)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5E)&0x3fff; // 67
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10AD)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DB9)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x3731)&0x3fff; // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EAD)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 75
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAF)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 78
	mem[addr]= acc; addr=(addr+0x3DAB)&0x3fff; // 79
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E19)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01E5)&0x3fff; // 81
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E1B)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x109D)&0x3fff; // 84
	mem[addr]= acc; addr=(addr+0x2F5A)&0x3fff; // 85
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A6)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F5B)&0x3fff; // 87
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 88
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10B0)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x368B)&0x3fff; // 92
	mem[addr]= acc; addr=(addr+0x096B)&0x3fff; // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog07(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3CDD)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A1B)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x368A)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11CC)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B3)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3B85)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CB7)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35FD)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0FC3)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0200)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x3FC0)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 15
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 19
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 20
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 28
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 29
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 37
	mem[addr]=~acc;  // 38
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3AB9)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E26)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01D8)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E28)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3D55)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D84)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x027A)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C40)&0x3fff; // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; addr=(addr+0x29E8)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x161E)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x29E2)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1618)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x29E9)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1622)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D12)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x3439)&0x3fff; // 75
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D81)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x027D)&0x3fff; // 77
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D83)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x3DAB)&0x3fff; // 81
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D6F)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x028F)&0x3fff; // 83
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D71)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1612)&0x3fff; // 86
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 87
	mem[addr]= acc; addr=(addr+0x29E5)&0x3fff; // 88
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1621)&0x3fff; // 89
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x29DF)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x161B)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x29E6)&0x3fff; // 92
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 93
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1625)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33B4)&0x3fff; // 98
	mem[addr]= acc; addr=(addr+0x0C42)&0x3fff; // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog08(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3777)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32A8)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D11)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2778)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x015D)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x34CA)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37D5)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C05)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2359)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0401)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x0E9A)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30FF)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F02)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x309A)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C9)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F37)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F65)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30FD)&0x3fff; // 20
	mem[addr]=~acc; addr=(addr+0x3ED6)&0x3fff; // 21
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6F)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9E)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 29
	mem[addr]=~acc; addr=(addr+0x3DC9)&0x3fff; // 30
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CB)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]=~acc;  // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0193)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AF5)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0315)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CEB)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x080D)&0x3fff; // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x3334)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0CC2)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2DFB)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0541)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3ABF)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3AA7)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1760)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2395)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0509)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AF7)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1C6B)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x0E99)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316D)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E93)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3167)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9A)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3171)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37E7)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x2798)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2077)&0x3fff; // 79
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x19D7)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05B0)&0x3fff; // 81
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A50)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 84
	mem[addr]= acc; addr=(addr+0x3A35)&0x3fff; // 85
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BF6)&0x3fff; // 86
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0569)&0x3fff; // 88
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A97)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3161)&0x3fff; // 91
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 92
	mem[addr]= acc; addr=(addr+0x0E96)&0x3fff; // 93
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3170)&0x3fff; // 94
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E90)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316A)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E97)&0x3fff; // 98
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 99
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3174)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2389)&0x3fff; // 103
	mem[addr]= acc; addr=(addr+0x1C6D)&0x3fff; // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog09(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3777)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32A8)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D11)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2778)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x015D)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x35F6)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36A9)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C05)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2359)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0401)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x0E9A)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3164)&0x3fff; // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3F9B)&0x3fff; // 14
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F02)&0x3fff; // 15
	mem[addr]= acc; addr=(addr+0x309A)&0x3fff; // 16
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C9)&0x3fff; // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F37)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F65)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30FD)&0x3fff; // 21
	mem[addr]=~acc; addr=(addr+0x3ED6)&0x3fff; // 22
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6F)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9E)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 30
	mem[addr]=~acc; addr=(addr+0x3DC9)&0x3fff; // 31
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CB)&0x3fff; // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 34
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 39
	mem[addr]=~acc;  // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0193)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 42
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AF5)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0315)&0x3fff; // 47
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CEB)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x080D)&0x3fff; // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 52
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x3334)&0x3fff; // 54
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0CC2)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2DFB)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0541)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3ABF)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 60
	mem[addr]= acc; addr=(addr+0x3AA7)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1760)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2395)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0509)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AF7)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1C6B)&0x3fff; // 67
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 68
	mem[addr]= acc; addr=(addr+0x0E99)&0x3fff; // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316D)&0x3fff; // 70
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E93)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3167)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9A)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 74
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3171)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37E7)&0x3fff; // 78
	mem[addr]= acc; addr=(addr+0x2798)&0x3fff; // 79
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2077)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x19D7)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05B0)&0x3fff; // 82
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A50)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 85
	mem[addr]= acc; addr=(addr+0x3A35)&0x3fff; // 86
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BF6)&0x3fff; // 87
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0569)&0x3fff; // 89
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A97)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3161)&0x3fff; // 92
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 93
	mem[addr]= acc; addr=(addr+0x0E96)&0x3fff; // 94
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3170)&0x3fff; // 95
	 // 96
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E90)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316A)&0x3fff; // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E97)&0x3fff; // 99
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 100
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3174)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 103
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2389)&0x3fff; // 104
	mem[addr]= acc; addr=(addr+0x1C6D)&0x3fff; // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog10(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3CDD)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39B7)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3626)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1294)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B7)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x3B85)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C53)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3599)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x108B)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0202)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x3FC0)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 13
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 14
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003C)&0x3fff; // 16
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 17
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 18
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 21
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 26
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 27
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 29
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 30
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 35
	mem[addr]=~acc;  // 36
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 37
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 38
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3A55)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05A1)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A5F)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E26)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01D8)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E28)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 58
	mem[addr]= acc; addr=(addr+0x3CF1)&0x3fff; // 59
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A8C)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3574)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D84)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x027A)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D86)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D08)&0x3fff; // 67
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 68
	mem[addr]= acc; addr=(addr+0x293E)&0x3fff; // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16C8)&0x3fff; // 70
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2938)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16C2)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x293F)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 74
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16CC)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D12)&0x3fff; // 78
	mem[addr]= acc; addr=(addr+0x3371)&0x3fff; // 79
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F73)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 81
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x308D)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D81)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x027D)&0x3fff; // 84
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D83)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 87
	mem[addr]= acc; addr=(addr+0x3DC9)&0x3fff; // 88
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x142B)&0x3fff; // 89
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 90
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2BD5)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D6F)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x028F)&0x3fff; // 93
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D71)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16BC)&0x3fff; // 97
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 98
	mem[addr]= acc; addr=(addr+0x293B)&0x3fff; // 99
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16CB)&0x3fff; // 100
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2935)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16C5)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x293C)&0x3fff; // 103
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 104
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 105
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16CF)&0x3fff; // 106
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 107
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32EC)&0x3fff; // 108
	mem[addr]= acc; addr=(addr+0x0D0A)&0x3fff; // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog11(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x33A4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C82)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3063)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F78)&0x3fff; // 3
	mem[addr]= acc;  // 4
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 5
	*outl= acc; addr=(addr+0x3095)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FBA)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D64)&0x3fff; // 9
	mem[addr]= acc;  // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 11
	*outr= acc; addr=(addr+0x3FFA)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02FB)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D08)&0x3fff; // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 18
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 19
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 21
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 29
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B9E)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0460)&0x3fff; // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BA0)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 37
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C47)&0x3fff; // 44
	mem[addr]= acc; addr=(addr+0x2E27)&0x3fff; // 45
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11D8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x265E)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1C98)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 52
	mem[addr]= acc;  // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2365)&0x3fff; // 55
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 56
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x217E)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x153D)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 62
	mem[addr]= acc; addr=(addr+0x37F7)&0x3fff; // 63
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CE)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x02FC)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D05)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33B7)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x0C48)&0x3fff; // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog12(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3D69)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AE3)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3838)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0ECA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B7)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x3C11)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D7F)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37AB)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0CC1)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0202)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x2CEB)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1311)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CF0)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x12D4)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FC2)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D2B)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x130F)&0x3fff; // 20
	mem[addr]=~acc; addr=(addr+0x3F6B)&0x3fff; // 21
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F67)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0095)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 29
	mem[addr]=~acc; addr=(addr+0x3EEE)&0x3fff; // 30
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0040)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EAE)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0112)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]=~acc;  // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009B)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F65)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F49)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0152)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x3BA9)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x044D)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3A3D)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0174)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E8C)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3D55)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0870)&0x3fff; // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3578)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0216)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3DEA)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A88)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x2CEA)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x131C)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2CE4)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1316)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CEB)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1320)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D9E)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x362D)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C2B)&0x3fff; // 79
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x31D8)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01FB)&0x3fff; // 81
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E05)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 84
	mem[addr]= acc; addr=(addr+0x3D47)&0x3fff; // 85
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10E3)&0x3fff; // 86
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2CF0)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x022B)&0x3fff; // 88
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3DD5)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1310)&0x3fff; // 91
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 92
	mem[addr]= acc; addr=(addr+0x2CE7)&0x3fff; // 93
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x131F)&0x3fff; // 94
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2CE1)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1319)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CE8)&0x3fff; // 98
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 99
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1323)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x356C)&0x3fff; // 103
	mem[addr]= acc; addr=(addr+0x0A8A)&0x3fff; // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog13(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3721)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3370)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DC5)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2652)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0159)&0x3fff; // 4
	mem[addr]= acc;  // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 6
	*outr= acc; addr=(addr+0x3474)&0x3fff; // 7
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x389D)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CB9)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2233)&0x3fff; // 10
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03FF)&0x3fff; // 11
	mem[addr]= acc;  // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0EF8)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30A1)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0F60)&0x3fff; // 16
	mem[addr]= acc; addr=(addr+0x303C)&0x3fff; // 17
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C9)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F37)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0FC3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x309F)&0x3fff; // 22
	mem[addr]=~acc; addr=(addr+0x3ED6)&0x3fff; // 23
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6F)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9E)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 31
	mem[addr]=~acc; addr=(addr+0x3DC9)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CB)&0x3fff; // 34
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 40
	mem[addr]=~acc;  // 41
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0193)&0x3fff; // 42
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A9F)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x036B)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C95)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0863)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 52
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 54
	mem[addr]= acc; addr=(addr+0x32DE)&0x3fff; // 55
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B85)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0479)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3B87)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 60
	mem[addr]= acc; addr=(addr+0x39DF)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AC3)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x053B)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AC5)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1CF3)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x0EF7)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x310F)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0EF1)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3109)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0EF8)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3113)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3791)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x2784)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BDE)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0420)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BE0)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x396D)&0x3fff; // 84
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A95)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0569)&0x3fff; // 86
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A97)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3103)&0x3fff; // 89
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 90
	mem[addr]= acc; addr=(addr+0x0EF4)&0x3fff; // 91
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3112)&0x3fff; // 92
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0EEE)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x310C)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0EF5)&0x3fff; // 95
	 // 96
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 97
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3116)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2301)&0x3fff; // 101
	mem[addr]= acc; addr=(addr+0x1CF5)&0x3fff; // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog14(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x35A4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32A8)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A55)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C07)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x015D)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x32F7)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37D5)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2949)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27E8)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0401)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x3F35)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C9)&0x3fff; // 13
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 14
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F37)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0064)&0x3fff; // 16
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 17
	mem[addr]=~acc; addr=(addr+0x3ED6)&0x3fff; // 18
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 21
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9E)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 26
	mem[addr]=~acc; addr=(addr+0x3DC9)&0x3fff; // 27
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CB)&0x3fff; // 29
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 30
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 35
	mem[addr]=~acc;  // 36
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0193)&0x3fff; // 37
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 38
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3922)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x04E8)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3B18)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x09E0)&0x3fff; // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3161)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3ABD)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0541)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3ABF)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x39DF)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x19FB)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1F06)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06FD)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3903)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x20FA)&0x3fff; // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; addr=(addr+0x0686)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3980)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0680)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x397A)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0687)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3984)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3614)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x24DC)&0x3fff; // 75
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A4E)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05B0)&0x3fff; // 78
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A50)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 81
	mem[addr]= acc; addr=(addr+0x3841)&0x3fff; // 82
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3279)&0x3fff; // 83
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x068C)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06F9)&0x3fff; // 85
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3907)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3974)&0x3fff; // 88
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 89
	mem[addr]= acc; addr=(addr+0x0683)&0x3fff; // 90
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3983)&0x3fff; // 91
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x067D)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x397D)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0684)&0x3fff; // 94
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 95
	 // 96
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3987)&0x3fff; // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1EFA)&0x3fff; // 100
	mem[addr]= acc; addr=(addr+0x20FC)&0x3fff; // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog15(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x36B1)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32A8)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A55)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2AFA)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x015D)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x3404)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37D5)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2949)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x26DB)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0401)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x0794)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3805)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07FC)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x37A0)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00C9)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F37)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0860)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3802)&0x3fff; // 20
	mem[addr]=~acc; addr=(addr+0x3ED6)&0x3fff; // 21
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6F)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9E)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 29
	mem[addr]=~acc; addr=(addr+0x3DC9)&0x3fff; // 30
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CB)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0237)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]=~acc;  // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0193)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E6D)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A2F)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03DB)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C25)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08D3)&0x3fff; // 49
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x326E)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D88)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2D35)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0541)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3ABF)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x39DF)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3901)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06FD)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3903)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1FED)&0x3fff; // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; addr=(addr+0x0793)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3873)&0x3fff; // 68
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x078D)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x386D)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0794)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3877)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3721)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x24DC)&0x3fff; // 77
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x23F9)&0x3fff; // 78
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1655)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05B0)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A50)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x3841)&0x3fff; // 84
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3905)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06F9)&0x3fff; // 86
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3907)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3867)&0x3fff; // 89
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 90
	mem[addr]= acc; addr=(addr+0x0790)&0x3fff; // 91
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3876)&0x3fff; // 92
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x078A)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3870)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0791)&0x3fff; // 95
	 // 96
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 97
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x387A)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2007)&0x3fff; // 101
	mem[addr]= acc; addr=(addr+0x1FEF)&0x3fff; // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog16(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3AE0)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34FA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3607)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37F3)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2231)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x38DC)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x397E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3748)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35E9)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2073)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x183D)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x275C)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x18A5)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x270B)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B5)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 17
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F4B)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x18F4)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x275A)&0x3fff; // 20
	mem[addr]=~acc; addr=(addr+0x3F1D)&0x3fff; // 21
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00E3)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EB6)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00E3)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 29
	mem[addr]=~acc; addr=(addr+0x3DFC)&0x3fff; // 30
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0204)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B7)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D45)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0204)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6D)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]=~acc;  // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x014C)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EB4)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02BB)&0x3fff; // 45
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 48
	mem[addr]= acc; addr=(addr+0x37C3)&0x3fff; // 49
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0833)&0x3fff; // 50
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x33B6)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0415)&0x3fff; // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BEB)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 55
	mem[addr]= acc; addr=(addr+0x3B0B)&0x3fff; // 56
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1141)&0x3fff; // 57
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x29B4)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0509)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AF7)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x164C)&0x3fff; // 62
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 63
	mem[addr]= acc; addr=(addr+0x183C)&0x3fff; // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CA)&0x3fff; // 65
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1836)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27C4)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x183D)&0x3fff; // 68
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CE)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AE1)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x2ABD)&0x3fff; // 74
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1A58)&0x3fff; // 75
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x20BE)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x04E8)&0x3fff; // 77
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3B18)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x3B61)&0x3fff; // 81
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x23E3)&0x3fff; // 82
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1842)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03D9)&0x3fff; // 84
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C27)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27BE)&0x3fff; // 87
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 88
	mem[addr]= acc; addr=(addr+0x1839)&0x3fff; // 89
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CD)&0x3fff; // 90
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1833)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27C7)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x183A)&0x3fff; // 93
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 94
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27D1)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x29A8)&0x3fff; // 99
	mem[addr]= acc; addr=(addr+0x164E)&0x3fff; // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog17(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3AE0)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34FA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3607)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37F3)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2231)&0x3fff; // 4
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 5
	*outr=~acc; addr=(addr+0x38DC)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x397E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3748)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35E9)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2073)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 11
	*outl=~acc; addr=(addr+0x3F49)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B5)&0x3fff; // 13
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 14
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F4B)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0050)&0x3fff; // 16
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 17
	mem[addr]=~acc; addr=(addr+0x3F1D)&0x3fff; // 18
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00E3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0067)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 21
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EB6)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00E3)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 26
	mem[addr]=~acc; addr=(addr+0x3DFC)&0x3fff; // 27
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0204)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00B7)&0x3fff; // 29
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 30
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D45)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0204)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6D)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 35
	mem[addr]=~acc;  // 36
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x014C)&0x3fff; // 37
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 38
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EB4)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E91)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02BB)&0x3fff; // 42
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 43
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x000A)&0x3fff; // 45
	mem[addr]= acc; addr=(addr+0x37C3)&0x3fff; // 46
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0833)&0x3fff; // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x33B6)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0415)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BEB)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x3B0B)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1141)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x29B4)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0509)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AF7)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x164C)&0x3fff; // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; addr=(addr+0x183C)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CA)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1836)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27C4)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x183D)&0x3fff; // 65
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 66
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CE)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AE1)&0x3fff; // 70
	mem[addr]= acc; addr=(addr+0x2ABD)&0x3fff; // 71
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1A58)&0x3fff; // 72
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x20BE)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x04E8)&0x3fff; // 74
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3B18)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x3B61)&0x3fff; // 78
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x23E3)&0x3fff; // 79
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1842)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03D9)&0x3fff; // 81
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C27)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27BE)&0x3fff; // 84
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 85
	mem[addr]= acc; addr=(addr+0x1839)&0x3fff; // 86
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27CD)&0x3fff; // 87
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1833)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27C7)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x183A)&0x3fff; // 90
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 91
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x27D1)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x29A8)&0x3fff; // 95
	 // 96
	mem[addr]= acc; addr=(addr+0x164E)&0x3fff; // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog18(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x350E)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E6C)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3063)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C26)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x3191)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34A3)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x314A)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2884)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x096F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3694)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D62)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x029C)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D64)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CD6)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0328)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3CD8)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F32)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00CC)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F34)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0090)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F70)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A1F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2F23)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10DC)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x28EA)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0638)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39C8)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x388A)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E8E)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2172)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37E7)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0817)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x37E9)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 58
	mem[addr]= acc; addr=(addr+0x38BF)&0x3fff; // 59
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DEA)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1216)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x375A)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08A4)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x375C)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3690)&0x3fff; // 67
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 68
	mem[addr]= acc; addr=(addr+0x096A)&0x3fff; // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3696)&0x3fff; // 70
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x096A)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3696)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x096B)&0x3fff; // 73
	mem[addr]= acc;  // 74
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3696)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35DF)&0x3fff; // 78
	mem[addr]= acc; addr=(addr+0x0A20)&0x3fff; // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog19(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x31BA)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C14)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2ED3)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3362)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2EF2)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3088)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x016B)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E98)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A72)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058C)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A74)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D73)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36BB)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 55
	mem[addr]= acc; addr=(addr+0x3987)&0x3fff; // 56
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E94)&0x3fff; // 61
	mem[addr]= acc; addr=(addr+0x0166)&0x3fff; // 62
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0167)&0x3fff; // 64
	mem[addr]= acc;  // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x328B)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x0D74)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog20(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x33E5)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3132)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32BB)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x282F)&0x3fff; // 3
	mem[addr]= acc;  // 4
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0004)&0x3fff; // 5
	*outr= acc; addr=(addr+0x3089)&0x3fff; // 6
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x367E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3406)&0x3fff; // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x24EF)&0x3fff; // 9
	mem[addr]= acc;  // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0002)&0x3fff; // 11
	*outl= acc; addr=(addr+0x3FFC)&0x3fff; // 12
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E90)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 14
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 15
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3173)&0x3fff; // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 18
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 19
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3F00)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00FB)&0x3fff; // 21
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F05)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 25
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0300)&0x3fff; // 29
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D00)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AD6)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0528)&0x3fff; // 33
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AD8)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F41)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00BD)&0x3fff; // 37
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F43)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0068)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F98)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C06)&0x3fff; // 44
	mem[addr]= acc; addr=(addr+0x2F94)&0x3fff; // 45
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x106B)&0x3fff; // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2A87)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x050C)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AF4)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3A7E)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38AF)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x074F)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x38B1)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 57
	mem[addr]= acc; addr=(addr+0x3987)&0x3fff; // 58
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x375A)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08A4)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x375C)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316F)&0x3fff; // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; addr=(addr+0x0E8B)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x317B)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0E85)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3175)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E8C)&0x3fff; // 69
	mem[addr]= acc;  // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3175)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33F8)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x0C07)&0x3fff; // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog21(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x39CF)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3640)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x369E)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1956)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x39CC)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x379F)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x37D8)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16BF)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2174)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E8F)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3F5B)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00A0)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F60)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F27)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00D7)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F29)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4C)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01B2)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E4E)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DD1)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x022D)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3DD3)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F89)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0075)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F8B)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004C)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB4)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0626)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x3710)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08EF)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3711)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C1B)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03E3)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C1D)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3C13)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10C3)&0x3fff; // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2A97)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x04A4)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3B5C)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 58
	mem[addr]= acc; addr=(addr+0x3BFC)&0x3fff; // 59
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x196F)&0x3fff; // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2175)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x051A)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3AE6)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E8B)&0x3fff; // 65
	mem[addr]= acc; addr=(addr+0x216F)&0x3fff; // 66
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E91)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2170)&0x3fff; // 68
	mem[addr]= acc;  // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E91)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39D8)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x0627)&0x3fff; // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog22(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x344C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E76)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x312B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C16)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x30F2)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361A)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30E6)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2810)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0300)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D00)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BB0)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x044E)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BB2)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0068)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F98)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0B9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2ECF)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1130)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2896)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0638)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39C8)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x38EE)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1E7E)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1A95)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06EB)&0x3fff; // 50
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3915)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x372F)&0x3fff; // 54
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E3E)&0x3fff; // 55
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x08B8)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 57
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3748)&0x3fff; // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; addr=(addr+0x08B2)&0x3fff; // 62
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3754)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x08AC)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x374E)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08B3)&0x3fff; // 66
	mem[addr]= acc;  // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x374E)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x345F)&0x3fff; // 71
	mem[addr]= acc; addr=(addr+0x0BA0)&0x3fff; // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog23(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3214)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E76)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x312B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E4E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2EBA)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3426)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32DA)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A48)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A72)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058C)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A74)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0DD7)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2C97)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1368)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x265E)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0638)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39C8)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x38EE)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x20B6)&0x3fff; // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x185D)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x06EB)&0x3fff; // 50
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3915)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x372F)&0x3fff; // 54
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3980)&0x3fff; // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; addr=(addr+0x067A)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x398C)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0674)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3986)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x067B)&0x3fff; // 65
	mem[addr]= acc;  // 66
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3986)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3227)&0x3fff; // 70
	mem[addr]= acc; addr=(addr+0x0DD8)&0x3fff; // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog24(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x31BA)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C14)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F9B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x329A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FBA)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FC0)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x016B)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E98)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A72)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058C)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A74)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D73)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2406)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0700)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3900)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36BB)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 55
	mem[addr]= acc; addr=(addr+0x38BF)&0x3fff; // 56
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E94)&0x3fff; // 61
	mem[addr]= acc; addr=(addr+0x0166)&0x3fff; // 62
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0167)&0x3fff; // 64
	mem[addr]= acc;  // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x328B)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x0D74)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog25(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x31BA)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C14)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F9B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x329A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FBA)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FC0)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A72)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058C)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A74)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D73)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2406)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0700)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3900)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36BB)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x38BF)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E94)&0x3fff; // 58
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 59
	mem[addr]= acc; addr=(addr+0x0166)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EA0)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0160)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0167)&0x3fff; // 64
	mem[addr]= acc;  // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x328B)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x0D74)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog26(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x31B0)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E12)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F37)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x310A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E56)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33C2)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30E6)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D04)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C3)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C40)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A0E)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05F0)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A10)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E3B)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B6B)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1494)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2596)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05D4)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A2C)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x384B)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07B3)&0x3fff; // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x384D)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 55
	mem[addr]= acc; addr=(addr+0x372F)&0x3fff; // 56
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C3C)&0x3fff; // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 62
	mem[addr]= acc; addr=(addr+0x03BE)&0x3fff; // 63
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C48)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x03B8)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C42)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03BF)&0x3fff; // 67
	mem[addr]= acc;  // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C42)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x31C3)&0x3fff; // 72
	mem[addr]= acc; addr=(addr+0x0E3C)&0x3fff; // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog27(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x31BA)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E08)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3383)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CBE)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2F69)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3313)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D87)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FFF)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A72)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058C)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3A74)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D73)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2CFB)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1304)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x25FA)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0700)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3900)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36BB)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x36CB)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E94)&0x3fff; // 58
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 59
	mem[addr]= acc; addr=(addr+0x0166)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3EA0)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0160)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0167)&0x3fff; // 64
	mem[addr]= acc;  // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E9A)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x328B)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x0D74)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog28(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C1E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x312B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E49)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3307)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x301E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E94)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0297)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D6C)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2B08)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x24CE)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0638)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39C8)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x230E)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1411)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DF)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3721)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D68)&0x3fff; // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; addr=(addr+0x0292)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D74)&0x3fff; // 68
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x028C)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D6E)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0293)&0x3fff; // 71
	mem[addr]= acc;  // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D6E)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog29(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x33A4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C82)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D43)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x329A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x3095)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FBA)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D68)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02FB)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D08)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B9E)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0460)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BA0)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C47)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2E27)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11D8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x265E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x217E)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x153D)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x37F7)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CE)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0D32)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D04)&0x3fff; // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; addr=(addr+0x02F6)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D10)&0x3fff; // 68
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x02F0)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02F7)&0x3fff; // 71
	mem[addr]= acc;  // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33B7)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x0C48)&0x3fff; // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog30(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2B08)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 68
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 71
	mem[addr]= acc;  // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog31(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x33A4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BBA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C7B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x342A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x3095)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2EF2)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2EF8)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B9E)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0460)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BA0)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C47)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2D5F)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x22AA)&0x3fff; // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x13AD)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x09A7)&0x3fff; // 50
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3659)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x372F)&0x3fff; // 54
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35CA)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; addr=(addr+0x009E)&0x3fff; // 61
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0098)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F62)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009F)&0x3fff; // 65
	mem[addr]= acc;  // 66
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F62)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33B7)&0x3fff; // 70
	mem[addr]= acc; addr=(addr+0x0C48)&0x3fff; // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog32(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x33A4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C82)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D43)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x329A)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x3095)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x324B)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FBA)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2D68)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02FB)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D08)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C9A)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0364)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C9C)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B9E)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0460)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BA0)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0C47)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2E27)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11D8)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2E28)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3826)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x217E)&0x3fff; // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x153D)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 58
	mem[addr]= acc; addr=(addr+0x37F7)&0x3fff; // 59
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CE)&0x3fff; // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x02FC)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D04)&0x3fff; // 65
	mem[addr]= acc; addr=(addr+0x02F6)&0x3fff; // 66
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02F7)&0x3fff; // 68
	mem[addr]= acc;  // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33B7)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x0C48)&0x3fff; // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog33(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3814)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3199)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33F8)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x225E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x3631)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x356E)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34B0)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1FB3)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3F1E)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00DD)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F23)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3ED1)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x012D)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3ED3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E15)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01E9)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E17)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D2D)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02D1)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D2F)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F53)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AB)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F55)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA5)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0059)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FA7)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D7)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x35BA)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A45)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2F1D)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x069C)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3964)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x3AE2)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1603)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x29FD)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1603)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x22F2)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0709)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x38F7)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x3A4F)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x22C1)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1715)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0628)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39D8)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x28EB)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x170F)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x28F7)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1709)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x28F1)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1710)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x28F1)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3827)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x07D8)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog34(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DAE)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3063)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30A6)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x33DB)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3212)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BD8)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2BCF)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1430)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x2596)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0638)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39C8)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x3952)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x211A)&0x3fff; // 48
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x16CD)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0817)&0x3fff; // 50
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x37E9)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x385B)&0x3fff; // 54
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30DA)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 56
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 57
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 58
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x061C)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 60
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39E4)&0x3fff; // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; addr=(addr+0x0616)&0x3fff; // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39F0)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0610)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39EA)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0617)&0x3fff; // 69
	mem[addr]= acc;  // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39EA)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog35(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 62
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 63
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 65
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 68
	mem[addr]= acc;  // 69
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 73
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog36(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36F6)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 68
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 71
	mem[addr]= acc;  // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog37(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x346C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BBA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E6F)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x316E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x315D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30E6)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C3C)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02FB)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D08)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CFE)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0300)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3D00)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C02)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03FC)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C04)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0B7F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2E27)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11D8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x265E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x3952)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2052)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1669)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x36CB)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32CE)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x02FC)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A34)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x35CC)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D04)&0x3fff; // 66
	mem[addr]= acc; addr=(addr+0x02F6)&0x3fff; // 67
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02F7)&0x3fff; // 69
	mem[addr]= acc;  // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D0A)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x347F)&0x3fff; // 74
	mem[addr]= acc; addr=(addr+0x0B80)&0x3fff; // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog38(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 42
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 43
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog39(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F37)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34F2)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2DD9)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x301E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3088)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog40(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 57
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 62
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 63
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 64
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 70
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog41(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E3D)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 41
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog42(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BBA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34F2)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3380)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2FC0)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2C33)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x23D6)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1C2A)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x23D6)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x12E5)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x372F)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x35EE)&0x3fff; // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x09D0)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3630)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog43(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F37)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34F2)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2DD9)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3183)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x301E)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3088)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 42
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2B08)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 62
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 69
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 70
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 71
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 72
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 75
	mem[addr]= acc;  // 76
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog44(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003F)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC4)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2B08)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x14F8)&0x3fff; // 47
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x233E)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 52
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 53
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 57
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 62
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 63
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 65
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 72
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 73
	mem[addr]= acc; addr=(addr+0x003A)&0x3fff; // 74
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 75
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0034)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003B)&0x3fff; // 78
	mem[addr]= acc;  // 79
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC6)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 83
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog45(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x361E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D6C)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x30EC)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 32
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 36
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 39
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 40
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 46
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 47
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 49
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1AFE)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2502)&0x3fff; // 51
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x11B9)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 56
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 57
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B6)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 59
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 60
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 61
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0040)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0908)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36F8)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 66
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 67
	mem[addr]= acc; addr=(addr+0x003D)&0x3fff; // 68
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0037)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC3)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x003E)&0x3fff; // 72
	mem[addr]= acc;  // 73
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog46(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x314C)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BBA)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C7B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3682)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2E32)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x318E)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E2A)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3218)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x005D)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA6)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F14)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00EA)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F16)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x009A)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F66)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E9F)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2B07)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x375E)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2566)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1A9A)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2566)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1155)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x37B1)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36FC)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 62
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 63
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 64
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x005E)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08A4)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x375C)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA2)&0x3fff; // 69
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 70
	mem[addr]= acc; addr=(addr+0x0058)&0x3fff; // 71
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAE)&0x3fff; // 72
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0052)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0059)&0x3fff; // 75
	mem[addr]= acc;  // 76
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x315F)&0x3fff; // 80
	mem[addr]= acc; addr=(addr+0x0EA0)&0x3fff; // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog47(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x3164)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CE6)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x312B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x308E)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2D84)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3380)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x314A)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DB4)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0313)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CF0)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F0B)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00F3)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F0D)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F85)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0079)&0x3fff; // 39
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F87)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E87)&0x3fff; // 42
	mem[addr]= acc; addr=(addr+0x2C4B)&0x3fff; // 43
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 46
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 49
	mem[addr]= acc; addr=(addr+0x39B6)&0x3fff; // 50
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x21CA)&0x3fff; // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1E36)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x21CA)&0x3fff; // 54
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x14F1)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 56
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 59
	mem[addr]= acc; addr=(addr+0x38BF)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3252)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 62
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0DAE)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3252)&0x3fff; // 64
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0314)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A98)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3568)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CEC)&0x3fff; // 69
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x030E)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 71
	mem[addr]= acc;  // 72
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CF2)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3177)&0x3fff; // 76
	mem[addr]= acc; addr=(addr+0x0E88)&0x3fff; // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog48(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x32D4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3496)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2EF4)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F64)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0003)&0x3fff; // 11
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 12
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 13
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 28
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D17)&0x3fff; // 31
	mem[addr]= acc; addr=(addr+0x2C8F)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 35
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 38
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 39
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x237A)&0x3fff; // 40
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1C86)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x237A)&0x3fff; // 43
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1341)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 48
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 49
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x352E)&0x3fff; // 50
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 51
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0AD2)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x352E)&0x3fff; // 53
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0038)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A98)&0x3fff; // 55
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3568)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC8)&0x3fff; // 58
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 59
	mem[addr]= acc; addr=(addr+0x0035)&0x3fff; // 60
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FD1)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x002F)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0036)&0x3fff; // 64
	mem[addr]= acc;  // 65
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32E7)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x0D18)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog49(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x32D4)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2A8E)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2E0B)&0x3fff; // 2
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3496)&0x3fff; // 3
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 4
	*outl=~acc; addr=(addr+0x2EF4)&0x3fff; // 5
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3254)&0x3fff; // 6
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F56)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2F64)&0x3fff; // 8
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 9
	*outr=~acc; addr=(addr+0x3FFA)&0x3fff; // 10
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0037)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 12
	mem[addr]= acc; addr=(addr+0x3FFF)&0x3fff; // 13
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCC)&0x3fff; // 14
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 15
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 16
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1);  // 17
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3EBA)&0x3fff; // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0141)&0x3fff; // 19
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3EBF)&0x3fff; // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E4F)&0x3fff; // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AF)&0x3fff; // 23
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3E51)&0x3fff; // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C36)&0x3fff; // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03C8)&0x3fff; // 27
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3C38)&0x3fff; // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39AA)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0654)&0x3fff; // 31
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x39AC)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0D17)&0x3fff; // 34
	mem[addr]= acc; addr=(addr+0x2C8F)&0x3fff; // 35
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3836)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07C8)&0x3fff; // 38
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3838)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 41
	mem[addr]= acc; addr=(addr+0x37C2)&0x3fff; // 42
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x237A)&0x3fff; // 43
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 44
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1C86)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x237A)&0x3fff; // 46
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x1341)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0943)&0x3fff; // 48
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x36BD)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FFE)&0x3fff; // 51
	mem[addr]= acc; addr=(addr+0x3793)&0x3fff; // 52
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x352E)&0x3fff; // 53
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1);  // 54
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0AD2)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x352E)&0x3fff; // 56
	mem[addr]= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x0038)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A98)&0x3fff; // 58
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3568)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC8)&0x3fff; // 61
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x0032)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0001)&0x3fff; // 63
	mem[addr]= acc;  // 64
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1);  // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCE)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x32E7)&0x3fff; // 68
	mem[addr]= acc; addr=(addr+0x0D18)&0x3fff; // 69
	 // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog50(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0996)&0x3fff; // 45
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 46
	 // 47
	 // 48
	 // 49
	 // 50
	 // 51
	 // 52
	 // 53
	 // 54
	 // 55
	 // 56
	 // 57
	 // 58
	 // 59
	 // 60
	 // 61
	 // 62
	 // 63
	 // 64
	 // 65
	 // 66
	 // 67
	 // 68
	 // 69
	 // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog51(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0DFC)&0x3fff; // 53
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 54
	 // 55
	 // 56
	 // 57
	 // 58
	 // 59
	 // 60
	 // 61
	 // 62
	 // 63
	 // 64
	 // 65
	 // 66
	 // 67
	 // 68
	 // 69
	 // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog52(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x11D7)&0x3fff; // 60
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 61
	 // 62
	 // 63
	 // 64
	 // 65
	 // 66
	 // 67
	 // 68
	 // 69
	 // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog53(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x16D8)&0x3fff; // 69
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 70
	 // 71
	 // 72
	 // 73
	 // 74
	 // 75
	 // 76
	 // 77
	 // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog54(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1B8A)&0x3fff; // 77
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 78
	 // 79
	 // 80
	 // 81
	 // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog55(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA9)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F90)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2061)&0x3fff; // 86
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog56(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA9)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F90)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F81)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F61)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FD4)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x240A)&0x3fff; // 93
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog57(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA9)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F90)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F81)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F61)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FD4)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F16)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F04)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9A)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6A)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 103
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAF)&0x3fff; // 104
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F30)&0x3fff; // 105
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5E)&0x3fff; // 106
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBB)&0x3fff; // 107
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 108
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2CE2)&0x3fff; // 109
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog58(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3804)&0x3fff; // 13
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 14
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 15
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 16
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 18
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 20
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 22
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 24
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 26
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38FC)&0x3fff; // 27
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 28
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 31
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F72)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAB)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F3A)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA9)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F90)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F81)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F61)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FD4)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F16)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F04)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9A)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6A)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 103
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAF)&0x3fff; // 104
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F30)&0x3fff; // 105
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5E)&0x3fff; // 106
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBB)&0x3fff; // 107
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 108
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBD)&0x3fff; // 109
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 110
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 111
	 // 112
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 113
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FDA)&0x3fff; // 114
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F59)&0x3fff; // 115
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 116
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9B)&0x3fff; // 117
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1A)&0x3fff; // 118
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBB)&0x3fff; // 119
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F19)&0x3fff; // 120
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3301)&0x3fff; // 121
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog59(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1C8A)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 14
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1B7A)&0x3fff; // 15
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 16
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1D80)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1B7C)&0x3fff; // 31
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3DD1)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x013B)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D19)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0747)&0x3fff; // 41
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3BD6)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3E16)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01FD)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CD3)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D2C)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01AE)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D5A)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0190)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0AA2)&0x3fff; // 52
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x372F)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CF4)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01C9)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D50)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C65)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x025B)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D47)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x12F2)&0x3fff; // 64
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3172)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CC1)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01D6)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CF7)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CDD)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x025A)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D1E)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1810)&0x3fff; // 74
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2980)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0276)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C76)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01F5)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D4F)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1939)&0x3fff; // 81
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 82
	 // 83
	 // 84
	 // 85
	 // 86
	 // 87
	 // 88
	 // 89
	 // 90
	 // 91
	 // 92
	 // 93
	 // 94
	 // 95
	 // 96
	 // 97
	 // 98
	 // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog60(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1362)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 14
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x24A2)&0x3fff; // 15
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 16
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1458)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x24A4)&0x3fff; // 31
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38CA)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0642)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C0F)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02BD)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0747)&0x3fff; // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3801)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F99)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F95)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02BD)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C00)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05EA)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x38F0)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BA4)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0375)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BEF)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02FF)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0E8E)&0x3fff; // 59
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x30CE)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0391)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B90)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02B0)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C25)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C24)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02C4)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D1E)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1810)&0x3fff; // 73
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2980)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02D5)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C17)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01F5)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D4F)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F21)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A24)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0497)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D47)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0203)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1D10)&0x3fff; // 87
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2291)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0198)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D03)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0455)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AAC)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2207)&0x3fff; // 98
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 99
	 // 100
	 // 101
	 // 102
	 // 103
	 // 104
	 // 105
	 // 106
	 // 107
	 // 108
	 // 109
	 // 110
	 // 111
	 // 112
	 // 113
	 // 114
	 // 115
	 // 116
	 // 117
	 // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog61(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0A3B)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 14
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DC9)&0x3fff; // 15
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 16
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0B31)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2DCB)&0x3fff; // 31
	*outr= acc; addr=(addr+0x3F58)&0x3fff; // 32
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBA)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1D)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F42)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B87)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0345)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B6A)&0x3fff; // 45
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0377)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0866)&0x3fff; // 47
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x372F)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0378)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B72)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F68)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x033B)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BCD)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6E)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A47)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0479)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D4B)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01D6)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x10A2)&0x3fff; // 63
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2E73)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0194)&0x3fff; // 66
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D47)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0464)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A84)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F46)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8F)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BB4)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0338)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F84)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C79)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0250)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x1987)&0x3fff; // 80
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2581)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03B1)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B4E)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0251)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3CF9)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F26)&0x3fff; // 86
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B63)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03A9)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F57)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C4C)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0274)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x22B6)&0x3fff; // 98
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1CCB)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F61)&0x3fff; // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0401)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AE9)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02ED)&0x3fff; // 103
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BD7)&0x3fff; // 104
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9A)&0x3fff; // 105
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 106
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 107
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 108
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F71)&0x3fff; // 109
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6A)&0x3fff; // 110
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 111
	 // 112
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FAF)&0x3fff; // 113
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F30)&0x3fff; // 114
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5E)&0x3fff; // 115
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBB)&0x3fff; // 116
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2C01)&0x3fff; // 117
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 118
	 // 119
	 // 120
	 // 121
	 // 122
	 // 123
	 // 124
	 // 125
	 // 126
	 // 127
}

void prog62(int16_t in, int16_t *outl, int16_t *outr) {
	mem[addr]=in; addr=(addr+0x0009)&0x3fff; // 0
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x08DC)&0x3fff; // 1
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0015)&0x3fff; // 2
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FEB)&0x3fff; // 3
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 4
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC9)&0x3fff; // 5
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0035)&0x3fff; // 6
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FCB)&0x3fff; // 7
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 8
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 9
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x00AD)&0x3fff; // 10
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F53)&0x3fff; // 11
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 12
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0151)&0x3fff; // 13
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 14
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B3)&0x3fff; // 15
	*outl= acc; addr=(addr+0x0006)&0x3fff; // 16
	acc=(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x07D4)&0x3fff; // 17
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0020)&0x3fff; // 18
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FE0)&0x3fff; // 19
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 20
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 21
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x004B)&0x3fff; // 22
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3FB5)&0x3fff; // 23
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 24
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F79)&0x3fff; // 25
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0085)&0x3fff; // 26
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x3F7B)&0x3fff; // 27
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 28
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0247)&0x3fff; // 29
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1);  // 30
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x36B5)&0x3fff; // 31
	*outr= acc; acc=acc+(acc>>1)+((acc>>15)&1); addr=(addr+0x3BD2)&0x3fff; // 32
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FCA)&0x3fff; // 33
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8E)&0x3fff; // 34
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F37)&0x3fff; // 35
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F87)&0x3fff; // 36
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 37
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F88)&0x3fff; // 38
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 39
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A0D)&0x3fff; // 40
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0521)&0x3fff; // 41
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F45)&0x3fff; // 42
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D5A)&0x3fff; // 43
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0190)&0x3fff; // 44
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0AA2)&0x3fff; // 45
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x34C6)&0x3fff; // 46
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5D)&0x3fff; // 47
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x01C9)&0x3fff; // 48
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3D50)&0x3fff; // 49
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F48)&0x3fff; // 50
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0516)&0x3fff; // 51
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x39D8)&0x3fff; // 52
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5C)&0x3fff; // 53
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F6F)&0x3fff; // 54
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F8A)&0x3fff; // 55
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F97)&0x3fff; // 56
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F15)&0x3fff; // 57
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 58
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 59
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F86)&0x3fff; // 60
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B5E)&0x3fff; // 61
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x038A)&0x3fff; // 62
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F96)&0x3fff; // 63
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C24)&0x3fff; // 64
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02B1)&0x3fff; // 65
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x159F)&0x3fff; // 66
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x2980)&0x3fff; // 67
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB2)&0x3fff; // 68
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0323)&0x3fff; // 69
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B9B)&0x3fff; // 70
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02E2)&0x3fff; // 71
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BFF)&0x3fff; // 72
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA8)&0x3fff; // 73
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F08)&0x3fff; // 74
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FB3)&0x3fff; // 75
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4C)&0x3fff; // 76
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA9)&0x3fff; // 77
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FA1)&0x3fff; // 78
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AC0)&0x3fff; // 79
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0407)&0x3fff; // 80
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F36)&0x3fff; // 81
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F65)&0x3fff; // 82
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3AD4)&0x3fff; // 83
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x042D)&0x3fff; // 84
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F7C)&0x3fff; // 85
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2057)&0x3fff; // 86
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1F00)&0x3fff; // 87
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x03F0)&0x3fff; // 88
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3B13)&0x3fff; // 89
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F47)&0x3fff; // 90
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F81)&0x3fff; // 91
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F61)&0x3fff; // 92
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x0471)&0x3fff; // 93
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3A79)&0x3fff; // 94
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 95
	 // 96
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F04)&0x3fff; // 97
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9A)&0x3fff; // 98
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F4D)&0x3fff; // 99
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FC0)&0x3fff; // 100
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F51)&0x3fff; // 101
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3903)&0x3fff; // 102
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x05D8)&0x3fff; // 103
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 104
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3C2B)&0x3fff; // 105
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02B4)&0x3fff; // 106
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5E)&0x3fff; // 107
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x2BB2)&0x3fff; // 108
	mem[addr]=~acc; acc=((~acc)>>1)+(((~acc)>>15)&1); addr=(addr+0x1409)&0x3fff; // 109
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1F)&0x3fff; // 110
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBD)&0x3fff; // 111
	 // 112
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x02DB)&0x3fff; // 113
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3BF8)&0x3fff; // 114
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x058B)&0x3fff; // 115
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x396C)&0x3fff; // 116
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F59)&0x3fff; // 117
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F78)&0x3fff; // 118
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F9B)&0x3fff; // 119
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F1A)&0x3fff; // 120
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3FBB)&0x3fff; // 121
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F19)&0x3fff; // 122
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F55)&0x3fff; // 123
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F5F)&0x3fff; // 124
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x3F64)&0x3fff; // 125
	acc=acc+(mem[addr]>>1)+((mem[addr]>>15)&1); addr=(addr+0x34E9)&0x3fff; // 126
	mem[addr]= acc; addr=(addr+0x3FF6)&0x3fff; // 127
}

void (*mv_progs[63])(int16_t, int16_t *, int16_t *) = {
	prog00,
	prog01,
	prog02,
	prog03,
	prog04,
	prog05,
	prog06,
	prog07,
	prog08,
	prog09,
	prog10,
	prog11,
	prog12,
	prog13,
	prog14,
	prog15,
	prog16,
	prog17,
	prog18,
	prog19,
	prog20,
	prog21,
	prog22,
	prog23,
	prog24,
	prog25,
	prog26,
	prog27,
	prog28,
	prog29,
	prog30,
	prog31,
	prog32,
	prog33,
	prog34,
	prog35,
	prog36,
	prog37,
	prog38,
	prog39,
	prog40,
	prog41,
	prog42,
	prog43,
	prog44,
	prog45,
	prog46,
	prog47,
	prog48,
	prog49,
	prog50,
	prog51,
	prog52,
	prog53,
	prog54,
	prog55,
	prog56,
	prog57,
	prog58,
	prog59,
	prog60,
	prog61,
	prog62,
};

