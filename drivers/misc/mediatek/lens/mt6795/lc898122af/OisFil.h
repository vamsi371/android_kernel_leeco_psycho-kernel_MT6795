/*FILTER CALCULATOR VERSION 4.02*/
/*the time and date : 2014/10/30 19:30:40*/
/*FC filename : LC898122_FIL_V0013*/
/*fs,23438Hz*/
/*LSI No.,LC898122*/
/*Comment,*/

/* 8bit */
OISINI__ const unsigned char CsFilRegDat_20M[] = { 
	0x01, 0x11, 	/* 0x0111 */
	 0x00, 			 /*00,0111*/
	0x01, 0x13, 	/* 0x0113 */
	 0x00, 			 /*00,0113*/
	 0x00, 			 /*00,0114*/
	0x01, 0x72, 	/* 0x0172 */
	 0x00, 			 /*00,0172*/
	0x01, 0xE3, 	/* 0x01E3 */
	 0x00, 			 /*00,01E3*/
	 0x00, 			 /*00,01E4*/
} ;

OISINI__ const unsigned char CsFilReg_20M[] = {
	 3, 4, 3, 4, 0xFF 
}; 

/* 32bit */
OISINI__ const unsigned char CsFilRamDat_20M[] = { 
	0x10, 0x00, 	/* 0x1000 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1000,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1001,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1002,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1003,0dB,invert=0*/
	 0x38, 0xA8, 0xA5, 0x40, 	 /*38A8A540,1004,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x38, 0xA8, 0xA5, 0x40, 	 /*38A8A540,1005,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xF5, 0x80, 	 /*3F7FF580,1006,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1007,0dB,invert=0*/
	 0xBF, 0x80, 0x00, 0x00, 	 /*BF800000,1008,0dB,invert=1*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1009,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100A,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100B,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100C,0dB,invert=0*/
	0x10, 0x0E, 	/* 0x100E */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100E,0dB,invert=0*/
	0x10, 0x10, 	/* 0x1010 */
	 0x3D, 0xA2, 0xAD, 0x80, 	 /*3DA2AD80,1010*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1011,Free,fs/1,invert=0*/
	 0x3F, 0x7F, 0xFD, 0x00, 	 /*3F7FFD00,1012,Free,fs/1,invert=0*/
	 0x3F, 0xC8, 0x33, 0x80, 	 /*3FC83380,1013,HBF,50Hz,150Hz,4dB,fs/1,invert=0*/
	 0xBF, 0xC5, 0x89, 0x00, 	 /*BFC58900,1014,HBF,50Hz,150Hz,4dB,fs/1,invert=0*/
	 0x3F, 0x75, 0xE8, 0xC0, 	 /*3F75E8C0,1015,HBF,50Hz,150Hz,4dB,fs/1,invert=0*/
	 0x3F, 0x06, 0xBD, 0x80, 	 /*3F06BD80,1016,LBF,0.2Hz,0.38Hz,0dB,fs/1,invert=0*/
	 0xBF, 0x06, 0xBA, 0x00, 	 /*BF06BA00,1017,LBF,0.2Hz,0.38Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xFC, 0x80, 	 /*3F7FFC80,1018,LBF,0.2Hz,0.38Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1019,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,101C,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101D,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101E,Cutoff,invert=0*/
	0x10, 0x20, 	/* 0x1020 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1020,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1021,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1022,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1023,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1024,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1025,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1026,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1027,Through,0dB,fs/1,invert=0*/
	0x10, 0x30, 	/* 0x1030 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1030,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1031,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1032,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1033,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1034,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1035,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1036,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1037,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1038,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1039,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,103C,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103E,Through,0dB,fs/1,invert=0*/
	0x10, 0x43, 	/* 0x1043 */
	 0x39, 0xD2, 0xBD, 0x40, 	 /*39D2BD40,1043,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x39, 0xD2, 0xBD, 0x40, 	 /*39D2BD40,1044,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xCB, 0x40, 	 /*3F7FCB40,1045,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x38, 0xA8, 0xA5, 0x40, 	 /*38A8A540,1046,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x38, 0xA8, 0xA5, 0x40, 	 /*38A8A540,1047,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xF5, 0x80, 	 /*3F7FF580,1048,LPF,0.6Hz,0dB,fs/1,invert=0*/
	 0x39, 0x0C, 0x87, 0xC0, 	 /*390C87C0,1049,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x39, 0x0C, 0x87, 0xC0, 	 /*390C87C0,104A,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xEE, 0x80, 	 /*3F7FEE80,104B,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x39, 0x8C, 0x83, 0x00, 	 /*398C8300,104C,LPF,2Hz,0dB,fs/1,invert=0*/
	 0x39, 0x8C, 0x83, 0x00, 	 /*398C8300,104D,LPF,2Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xDC, 0xC0, 	 /*3F7FDCC0,104E,LPF,2Hz,0dB,fs/1,invert=0*/
	0x10, 0x53, 	/* 0x1053 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1053,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1054,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1055,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1056,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1057,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1058,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1059,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,105C,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105E,Through,0dB,fs/1,invert=0*/
	0x10, 0x63, 	/* 0x1063 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1063,0dB,invert=0*/
	0x10, 0x66, 	/* 0x1066 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1066,0dB,invert=0*/
	0x10, 0x69, 	/* 0x1069 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1069,0dB,invert=0*/
	0x10, 0x6C, 	/* 0x106C */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,106C,0dB,invert=0*/
	0x10, 0x73, 	/* 0x1073 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1073,Cutoff,invert=0*/
	0x10, 0x76, 	/* 0x1076 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1076,0dB,invert=0*/
	0x10, 0x79, 	/* 0x1079 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1079,0dB,invert=0*/
	0x10, 0x7C, 	/* 0x107C */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,107C,0dB,invert=0*/
	0x10, 0x83, 	/* 0x1083 */
	 0x38, 0xD1, 0xB7, 0x00, 	 /*38D1B700,1083,-80dB,invert=0*/
	0x10, 0x86, 	/* 0x1086 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1086,Cutoff,invert=0*/
	0x10, 0x89, 	/* 0x1089 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1089,Cutoff,invert=0*/
	0x10, 0x8C, 	/* 0x108C */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,108C,Cutoff,invert=0*/
	0x10, 0x93, 	/* 0x1093 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1093,Cutoff,invert=0*/
	0x10, 0x98, 	/* 0x1098 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1098,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1099,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,109A,0dB,invert=0*/
	0x10, 0xA1, 	/* 0x10A1 */
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A1,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A2,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x79, 0x3A, 0x40, 	 /*3F793A40,10A3,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A4,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A5,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x79, 0x3A, 0x40, 	 /*3F793A40,10A6,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10A7,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10A8,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10A9,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10AA,Cutoff,invert=0*/
	 0x3B, 0xDA, 0x25, 0x80, 	 /*3BDA2580,10AB,LPF,50Hz,0dB,fs/1,invert=0*/
	 0x3B, 0xDA, 0x25, 0x80, 	 /*3BDA2580,10AC,LPF,50Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7C, 0x97, 0x80, 	 /*3F7C9780,10AD,LPF,50Hz,0dB,fs/1,invert=0*/
	0x10, 0xB0, 	/* 0x10B0 */
	 0x3E, 0x0D, 0xE2, 0x80, 	 /*3E0DE280,10B0,LPF,1200Hz,0dB,fs/1,invert=0*/
	 0x3E, 0x0D, 0xE2, 0x80, 	 /*3E0DE280,10B1,LPF,1200Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x39, 0x0E, 0xC0, 	 /*3F390EC0,10B2,LPF,1200Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10B3,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B4,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B5,Cutoff,invert=0*/
	 0x3F, 0x35, 0x3C, 0x00, 	 /*3F353C00,10B6,-3dB,invert=0*/
	0x10, 0xB8, 	/* 0x10B8 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10B8,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B9,Cutoff,invert=0*/
	0x10, 0xC0, 	/* 0x10C0 */
	 0x3F, 0xE3, 0x04, 0xC0, 	 /*3FE304C0,10C0,HBF,60Hz,1000Hz,6dB,fs/1,invert=0*/
	 0xBF, 0xDF, 0x65, 0x40, 	 /*BFDF6540,10C1,HBF,60Hz,1000Hz,6dB,fs/1,invert=0*/
	 0x3F, 0x43, 0x7B, 0xC0, 	 /*3F437BC0,10C2,HBF,60Hz,1000Hz,6dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0x7D, 0x40, 	 /*3F7F7D40,10C3,HBF,45Hz,60Hz,0dB,fs/1,invert=0*/
	 0xBF, 0x7C, 0x6D, 0x00, 	 /*BF7C6D00,10C4,HBF,45Hz,60Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7B, 0xEA, 0x40, 	 /*3F7BEA40,10C5,HBF,45Hz,60Hz,0dB,fs/1,invert=0*/
	 0x3D, 0x50, 0x6F, 0x00, 	 /*3D506F00,10C6,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3D, 0x50, 0x6F, 0x00, 	 /*3D506F00,10C7,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x65, 0xF2, 0x40, 	 /*3F65F240,10C8,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3B, 0xAE, 0xD5, 0x00, 	 /*3BAED500,10C9,LPF,1Hz,32dB,fs/1,invert=0*/
	 0x3B, 0xAE, 0xD5, 0x00, 	 /*3BAED500,10CA,LPF,1Hz,32dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xEE, 0x80, 	 /*3F7FEE80,10CB,LPF,1Hz,32dB,fs/1,invert=0*/
	 0x3E, 0x0F, 0xC5, 0xC0, 	 /*3E0FC5C0,10CC,LBF,3.5Hz,25Hz,0dB,fs/1,invert=0*/
	 0xBE, 0x0E, 0xD0, 0x00, 	 /*BE0ED000,10CD,LBF,3.5Hz,25Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xC2, 0x80, 	 /*3F7FC280,10CE,LBF,3.5Hz,25Hz,0dB,fs/1,invert=0*/
	0x10, 0xD0, 	/* 0x10D0 */
	 0x3F, 0xFF, 0x64, 0xC0, 	 /*3FFF64C0,10D0,6dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10D1,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D2,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D3,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D4,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D5,0dB,invert=0*/
	0x10, 0xD7, 	/* 0x10D7 */
	 0x3F, 0x8E, 0xF7, 0xC0, 	 /*3F8EF7C0,10D7,LPF,500Hz,25dB,fs/1,invert=0*/
	 0x3F, 0x8E, 0xF7, 0xC0, 	 /*3F8EF7C0,10D8,LPF,500Hz,25dB,fs/1,invert=0*/
	 0x3F, 0x5F, 0xD7, 0x80, 	 /*3F5FD780,10D9,LPF,500Hz,25dB,fs/1,invert=0*/
	 0x3F, 0x7B, 0x0A, 0x00, 	 /*3F7B0A00,10DA,PKF,1300Hz,-3dB,5,fs/1,invert=0*/
	 0xBF, 0xE0, 0xED, 0xC0, 	 /*BFE0EDC0,10DB,PKF,1300Hz,-3dB,5,fs/1,invert=0*/
	 0x3F, 0xE0, 0xED, 0xC0, 	 /*3FE0EDC0,10DC,PKF,1300Hz,-3dB,5,fs/1,invert=0*/
	 0x3F, 0x62, 0xFD, 0xC0, 	 /*3F62FDC0,10DD,PKF,1300Hz,-3dB,5,fs/1,invert=0*/
	 0xBF, 0x5E, 0x07, 0xC0, 	 /*BF5E07C0,10DE,PKF,1300Hz,-3dB,5,fs/1,invert=0*/
	0x10, 0xE0, 	/* 0x10E0 */
	 0x3F, 0x7C, 0x58, 0x80, 	 /*3F7C5880,10E0,PKF,650Hz,-3dB,4,fs/1,invert=0*/
	 0xBF, 0xEF, 0xD2, 0x00, 	 /*BFEFD200,10E1,PKF,650Hz,-3dB,4,fs/1,invert=0*/
	 0x3F, 0xEF, 0xD2, 0x00, 	 /*3FEFD200,10E2,PKF,650Hz,-3dB,4,fs/1,invert=0*/
	 0x3F, 0x6A, 0xA1, 0x80, 	 /*3F6AA180,10E3,PKF,650Hz,-3dB,4,fs/1,invert=0*/
	 0xBF, 0x66, 0xFA, 0x40, 	 /*BF66FA40,10E4,PKF,650Hz,-3dB,4,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10E5,0dB,invert=0*/
	0x10, 0xE8, 	/* 0x10E8 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10E8,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10E9,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10EA,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10EB,Cutoff,invert=0*/
	0x10, 0xF0, 	/* 0x10F0 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10F0,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F1,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F2,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F3,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F4,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10F5,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F6,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F7,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F8,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F9,Through,0dB,fs/1,invert=0*/
	0x12, 0x00, 	/* 0x1200 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1200,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1201,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1202,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1203,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1204,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1205,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1206,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1207,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1208,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1209,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,120A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120B,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120C,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,120D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120E,Through,0dB,fs/1,invert=0*/
	0x12, 0x0F, 	/* 0x120F */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120F,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1210,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1211,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1212,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1213,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1214,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1215,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1216,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1217,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1218,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1219,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121A,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121B,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121C,Cutoff,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121D,0dB,invert=0*/
	0x12, 0x1E, 	/* 0x120F */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121E,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121F,0dB,invert=0*/
	0x12, 0x35, 	/* 0x1235 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1235,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1236,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1237,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1238,0dB,invert=0*/
} ;

OISINI__ const unsigned char CsFilRam_20M[] = {
	 54, 6, 62, 34, 62, 50, 50, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 14, 54, 30, 10, 62, 26, 34, 26, 18, 42, 62, 62, 10, 18, 0xFF 
}; 


/*FILTER CALCULATOR VERSION 4.02*/
/*the time and date : 2014/8/4 20:41:43*/
/*FC filename : LC898122_FIL_V0006*/
/*fs,23438Hz*/
/*LSI No.,LC898122*/
/*Comment,*/

/* 8bit */
OISINI__ const unsigned char CsFilRegDat_13M[] = { 
	0x01, 0x11, 	/* 0x0111 */
	 0x00, 			 /*00,0111*/
	0x01, 0x13, 	/* 0x0113 */
	 0x00, 			 /*00,0113*/
	 0x00, 			 /*00,0114*/
	0x01, 0x72, 	/* 0x0172 */
	 0x00, 			 /*00,0172*/
	0x01, 0xE3, 	/* 0x01E3 */
	 0x00, 			 /*00,01E3*/
	 0x00, 			 /*00,01E4*/
} ;

OISINI__ const unsigned char CsFilReg_13M[] = {
	 3, 4, 3, 4, 0xFF 
}; 

/* 32bit */
OISINI__ const unsigned char CsFilRamDat_13M[] = { 
	0x10, 0x00, 	/* 0x1000 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1000,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1001,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1002,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1003,0dB,invert=0*/
	 0x38, 0x28, 0xA7, 0x00, 	 /*3828A700,1004,LPF,0.3Hz,0dB,fs/1,invert=0*/
	 0x38, 0x28, 0xA7, 0x00, 	 /*3828A700,1005,LPF,0.3Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xFA, 0xC0, 	 /*3F7FFAC0,1006,LPF,0.3Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1007,0dB,invert=0*/
	 0xBF, 0x80, 0x00, 0x00, 	 /*BF800000,1008,0dB,invert=1*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1009,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100A,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100B,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100C,0dB,invert=0*/
	0x10, 0x0E, 	/* 0x100E */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,100E,0dB,invert=0*/
	0x10, 0x10, 	/* 0x1010 */
	 0x3D, 0xA2, 0xAD, 0x80, 	 /*3DA2AD80,1010*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1011,Free,fs/1,invert=0*/
	 0x3F, 0x7F, 0xFE, 0x00, 	 /*3F7FFE00,1012,Free,fs/1,invert=0*/
	 0x3F, 0xB2, 0x6D, 0xC0, 	 /*3FB26DC0,1013,HBF,50Hz,150Hz,3dB,fs/1,invert=0*/
	 0xBF, 0xB0, 0x0D, 0xC0, 	 /*BFB00DC0,1014,HBF,50Hz,150Hz,3dB,fs/1,invert=0*/
	 0x3F, 0x75, 0xE8, 0xC0, 	 /*3F75E8C0,1015,HBF,50Hz,150Hz,3dB,fs/1,invert=0*/
	 0x3F, 0x1B, 0x27, 0x80, 	 /*3F1B2780,1016,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0*/
	 0xBF, 0x1B, 0x24, 0x00, 	 /*BF1B2400,1017,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xFC, 0x80, 	 /*3F7FFC80,1018,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1019,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,101C,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101D,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,101E,Cutoff,invert=0*/
	0x10, 0x20, 	/* 0x1020 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1020,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1021,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1022,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1023,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1024,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1025,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1026,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1027,Through,0dB,fs/1,invert=0*/
	0x10, 0x30, 	/* 0x1030 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1030,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1031,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1032,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1033,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1034,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1035,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1036,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1037,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1038,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1039,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,103C,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,103E,Through,0dB,fs/1,invert=0*/
	0x10, 0x43, 	/* 0x1043 */
	 0x39, 0xD2, 0xBD, 0x40, 	 /*39D2BD40,1043,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x39, 0xD2, 0xBD, 0x40, 	 /*39D2BD40,1044,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xCB, 0x40, 	 /*3F7FCB40,1045,LPF,3Hz,0dB,fs/1,invert=0*/
	 0x38, 0x8C, 0x8A, 0x40, 	 /*388C8A40,1046,LPF,0.5Hz,0dB,fs/1,invert=0*/
	 0x38, 0x8C, 0x8A, 0x40, 	 /*388C8A40,1047,LPF,0.5Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xF7, 0x40, 	 /*3F7FF740,1048,LPF,0.5Hz,0dB,fs/1,invert=0*/
	 0x39, 0x0C, 0x87, 0xC0, 	 /*390C87C0,1049,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x39, 0x0C, 0x87, 0xC0, 	 /*390C87C0,104A,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xEE, 0x80, 	 /*3F7FEE80,104B,LPF,1Hz,0dB,fs/1,invert=0*/
	 0x39, 0x8C, 0x83, 0x00, 	 /*398C8300,104C,LPF,2Hz,0dB,fs/1,invert=0*/
	 0x39, 0x8C, 0x83, 0x00, 	 /*398C8300,104D,LPF,2Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xDC, 0xC0, 	 /*3F7FDCC0,104E,LPF,2Hz,0dB,fs/1,invert=0*/
	0x10, 0x53, 	/* 0x1053 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1053,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1054,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1055,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1056,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1057,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1058,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1059,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105B,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,105C,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,105E,Through,0dB,fs/1,invert=0*/
	0x10, 0x63, 	/* 0x1063 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1063,0dB,invert=0*/
	0x10, 0x66, 	/* 0x1066 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1066,0dB,invert=0*/
	0x10, 0x69, 	/* 0x1069 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1069,0dB,invert=0*/
	0x10, 0x6C, 	/* 0x106C */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,106C,0dB,invert=0*/
	0x10, 0x73, 	/* 0x1073 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1073,Cutoff,invert=0*/
	0x10, 0x76, 	/* 0x1076 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1076,0dB,invert=0*/
	0x10, 0x79, 	/* 0x1079 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1079,0dB,invert=0*/
	0x10, 0x7C, 	/* 0x107C */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,107C,0dB,invert=0*/
	0x10, 0x83, 	/* 0x1083 */
	 0x38, 0xD1, 0xB7, 0x00, 	 /*38D1B700,1083,-80dB,invert=0*/
	0x10, 0x86, 	/* 0x1086 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1086,Cutoff,invert=0*/
	0x10, 0x89, 	/* 0x1089 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1089,Cutoff,invert=0*/
	0x10, 0x8C, 	/* 0x108C */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,108C,Cutoff,invert=0*/
	0x10, 0x93, 	/* 0x1093 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1093,Cutoff,invert=0*/
	0x10, 0x98, 	/* 0x1098 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1098,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1099,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,109A,0dB,invert=0*/
	0x10, 0xA1, 	/* 0x10A1 */
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A1,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A2,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x79, 0x3A, 0x40, 	 /*3F793A40,10A3,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A4,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x58, 0xB4, 0x40, 	 /*3C58B440,10A5,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x79, 0x3A, 0x40, 	 /*3F793A40,10A6,LPF,100Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10A7,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10A8,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10A9,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10AA,Cutoff,invert=0*/
	 0x3B, 0xDA, 0x25, 0x80, 	 /*3BDA2580,10AB,LPF,50Hz,0dB,fs/1,invert=0*/
	 0x3B, 0xDA, 0x25, 0x80, 	 /*3BDA2580,10AC,LPF,50Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x7C, 0x97, 0x80, 	 /*3F7C9780,10AD,LPF,50Hz,0dB,fs/1,invert=0*/
	0x10, 0xB0, 	/* 0x10B0 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10B0,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B1,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B2,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10B3,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B4,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B5,Cutoff,invert=0*/
	 0x3F, 0x35, 0x3C, 0x00, 	 /*3F353C00,10B6,-3dB,invert=0*/
	0x10, 0xB8, 	/* 0x10B8 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10B8,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10B9,Cutoff,invert=0*/
	0x10, 0xC0, 	/* 0x10C0 */
	 0x3F, 0x94, 0x4E, 0xC0, 	 /*3F944EC0,10C0,HBF,50Hz,700Hz,2dB,fs/1,invert=0*/
	 0xBF, 0x92, 0x55, 0x40, 	 /*BF925540,10C1,HBF,50Hz,700Hz,2dB,fs/1,invert=0*/
	 0x3F, 0x54, 0x14, 0xC0, 	 /*3F5414C0,10C2,HBF,50Hz,700Hz,2dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10C3,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10C4,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10C5,Through,0dB,fs/1,invert=0*/
	 0x3D, 0x50, 0x6F, 0x00, 	 /*3D506F00,10C6,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3D, 0x50, 0x6F, 0x00, 	 /*3D506F00,10C7,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x65, 0xF2, 0x40, 	 /*3F65F240,10C8,LPF,400Hz,0dB,fs/1,invert=0*/
	 0x3C, 0x20, 0x84, 0x00, 	 /*3C208400,10C9,LPF,1.3Hz,35dB,fs/1,invert=0*/
	 0x3C, 0x20, 0x84, 0x00, 	 /*3C208400,10CA,LPF,1.3Hz,35dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0xE9, 0x40, 	 /*3F7FE940,10CB,LPF,1.3Hz,35dB,fs/1,invert=0*/
	 0x3E, 0x1D, 0x21, 0x00, 	 /*3E1D2100,10CC,LBF,10Hz,26Hz,-8dB,fs/1,invert=0*/
	 0xBE, 0x1C, 0x09, 0x80, 	 /*BE1C0980,10CD,LBF,10Hz,26Hz,-8dB,fs/1,invert=0*/
	 0x3F, 0x7F, 0x50, 0x80, 	 /*3F7F5080,10CE,LBF,10Hz,26Hz,-8dB,fs/1,invert=0*/
	0x10, 0xD0, 	/* 0x10D0 */
	 0x3F, 0xFF, 0x64, 0xC0, 	 /*3FFF64C0,10D0,6dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10D1,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D2,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D3,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D4,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10D5,0dB,invert=0*/
	0x10, 0xD7, 	/* 0x10D7 */
	 0x41, 0xFC, 0xFB, 0x80, 	 /*41FCFB80,10D7,Through,30dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10D8,Through,30dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10D9,Through,30dB,fs/1,invert=0*/
	 0x3F, 0x64, 0x91, 0x40, 	 /*3F649140,10DA,PKF,1000Hz,-11dB,3,fs/1,invert=0*/
	 0xBF, 0xD2, 0x1D, 0x40, 	 /*BFD21D40,10DB,PKF,1000Hz,-11dB,3,fs/1,invert=0*/
	 0x3F, 0xD2, 0x1D, 0x40, 	 /*3FD21D40,10DC,PKF,1000Hz,-11dB,3,fs/1,invert=0*/
	 0x3F, 0x4F, 0x09, 0x40, 	 /*3F4F0940,10DD,PKF,1000Hz,-11dB,3,fs/1,invert=0*/
	 0xBF, 0x33, 0x9A, 0x80, 	 /*BF339A80,10DE,PKF,1000Hz,-11dB,3,fs/1,invert=0*/
	0x10, 0xE0, 	/* 0x10E0 */
	 0x3D, 0xD1, 0x78, 0x00, 	 /*3DD17800,10E0,LPF,850Hz,0dB,fs/1,invert=0*/
	 0x3D, 0xD1, 0x78, 0x00, 	 /*3DD17800,10E1,LPF,850Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x4B, 0xA2, 0x00, 	 /*3F4BA200,10E2,LPF,850Hz,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10E3,LPF,850Hz,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10E4,LPF,850Hz,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10E5,0dB,invert=0*/
	0x10, 0xE8, 	/* 0x10E8 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10E8,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10E9,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10EA,Cutoff,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10EB,Cutoff,invert=0*/
	0x10, 0xF0, 	/* 0x10F0 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10F0,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F1,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F2,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F3,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F4,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,10F5,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F6,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F7,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F8,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,10F9,Through,0dB,fs/1,invert=0*/
	0x12, 0x00, 	/* 0x1200 */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1200,Cutoff,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1201,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1202,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1203,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1204,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1205,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1206,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1207,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1208,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1209,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,120A,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120B,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120C,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,120D,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120E,Through,0dB,fs/1,invert=0*/
	0x12, 0x0F, 	/* 0x120F */
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,120F,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1210,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1211,Through,0dB,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1212,Through,0dB,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1213,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1214,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1215,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1216,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1217,0dB,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1218,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,1219,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121A,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121B,Cutoff,fs/1,invert=0*/
	 0x00, 0x00, 0x00, 0x00, 	 /*00000000,121C,Cutoff,fs/1,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121D,0dB,invert=0*/
	0x12, 0x1E, 	/* 0x121E */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121E,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,121F,0dB,invert=0*/
	0x12, 0x35, 	/* 0x1235 */
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1235,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1236,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1237,0dB,invert=0*/
	 0x3F, 0x80, 0x00, 0x00, 	 /*3F800000,1238,0dB,invert=0*/
} ;

OISINI__ const unsigned char CsFilRam_13M[] = {
	 54, 6, 62, 34, 62, 50, 50, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 14, 54, 30, 10, 62, 26, 34, 26, 18, 42, 
	 62, 62, 10, 18, 0xFF 
}; 

