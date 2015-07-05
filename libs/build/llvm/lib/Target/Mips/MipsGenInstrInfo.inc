/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    FRAME_ALLOC	= 21,
    FAULTING_LOAD_OP	= 22,
    ABSQ_S_PH	= 23,
    ABSQ_S_QB	= 24,
    ABSQ_S_W	= 25,
    ADD	= 26,
    ADDIUPC	= 27,
    ADDIUPC_MM	= 28,
    ADDIUPC_MMR6	= 29,
    ADDIUR1SP_MM	= 30,
    ADDIUR2_MM	= 31,
    ADDIUS5_MM	= 32,
    ADDIUSP_MM	= 33,
    ADDIU_MMR6	= 34,
    ADDQH_PH	= 35,
    ADDQH_R_PH	= 36,
    ADDQH_R_W	= 37,
    ADDQH_W	= 38,
    ADDQ_PH	= 39,
    ADDQ_S_PH	= 40,
    ADDQ_S_W	= 41,
    ADDSC	= 42,
    ADDS_A_B	= 43,
    ADDS_A_D	= 44,
    ADDS_A_H	= 45,
    ADDS_A_W	= 46,
    ADDS_S_B	= 47,
    ADDS_S_D	= 48,
    ADDS_S_H	= 49,
    ADDS_S_W	= 50,
    ADDS_U_B	= 51,
    ADDS_U_D	= 52,
    ADDS_U_H	= 53,
    ADDS_U_W	= 54,
    ADDU16_MM	= 55,
    ADDUH_QB	= 56,
    ADDUH_R_QB	= 57,
    ADDU_MMR6	= 58,
    ADDU_PH	= 59,
    ADDU_QB	= 60,
    ADDU_S_PH	= 61,
    ADDU_S_QB	= 62,
    ADDVI_B	= 63,
    ADDVI_D	= 64,
    ADDVI_H	= 65,
    ADDVI_W	= 66,
    ADDV_B	= 67,
    ADDV_D	= 68,
    ADDV_H	= 69,
    ADDV_W	= 70,
    ADDWC	= 71,
    ADD_A_B	= 72,
    ADD_A_D	= 73,
    ADD_A_H	= 74,
    ADD_A_W	= 75,
    ADD_MM	= 76,
    ADD_MMR6	= 77,
    ADDi	= 78,
    ADDi_MM	= 79,
    ADDiu	= 80,
    ADDiu_MM	= 81,
    ADDu	= 82,
    ADDu_MM	= 83,
    ADJCALLSTACKDOWN	= 84,
    ADJCALLSTACKUP	= 85,
    ALIGN	= 86,
    ALIGN_MMR6	= 87,
    ALUIPC	= 88,
    ALUIPC_MMR6	= 89,
    AND	= 90,
    AND16_MM	= 91,
    AND64	= 92,
    ANDI16_MM	= 93,
    ANDI_B	= 94,
    ANDI_MMR6	= 95,
    AND_MM	= 96,
    AND_MMR6	= 97,
    AND_V	= 98,
    AND_V_D_PSEUDO	= 99,
    AND_V_H_PSEUDO	= 100,
    AND_V_W_PSEUDO	= 101,
    ANDi	= 102,
    ANDi64	= 103,
    ANDi_MM	= 104,
    APPEND	= 105,
    ASUB_S_B	= 106,
    ASUB_S_D	= 107,
    ASUB_S_H	= 108,
    ASUB_S_W	= 109,
    ASUB_U_B	= 110,
    ASUB_U_D	= 111,
    ASUB_U_H	= 112,
    ASUB_U_W	= 113,
    ATOMIC_CMP_SWAP_I16	= 114,
    ATOMIC_CMP_SWAP_I32	= 115,
    ATOMIC_CMP_SWAP_I64	= 116,
    ATOMIC_CMP_SWAP_I8	= 117,
    ATOMIC_LOAD_ADD_I16	= 118,
    ATOMIC_LOAD_ADD_I32	= 119,
    ATOMIC_LOAD_ADD_I64	= 120,
    ATOMIC_LOAD_ADD_I8	= 121,
    ATOMIC_LOAD_AND_I16	= 122,
    ATOMIC_LOAD_AND_I32	= 123,
    ATOMIC_LOAD_AND_I64	= 124,
    ATOMIC_LOAD_AND_I8	= 125,
    ATOMIC_LOAD_NAND_I16	= 126,
    ATOMIC_LOAD_NAND_I32	= 127,
    ATOMIC_LOAD_NAND_I64	= 128,
    ATOMIC_LOAD_NAND_I8	= 129,
    ATOMIC_LOAD_OR_I16	= 130,
    ATOMIC_LOAD_OR_I32	= 131,
    ATOMIC_LOAD_OR_I64	= 132,
    ATOMIC_LOAD_OR_I8	= 133,
    ATOMIC_LOAD_SUB_I16	= 134,
    ATOMIC_LOAD_SUB_I32	= 135,
    ATOMIC_LOAD_SUB_I64	= 136,
    ATOMIC_LOAD_SUB_I8	= 137,
    ATOMIC_LOAD_XOR_I16	= 138,
    ATOMIC_LOAD_XOR_I32	= 139,
    ATOMIC_LOAD_XOR_I64	= 140,
    ATOMIC_LOAD_XOR_I8	= 141,
    ATOMIC_SWAP_I16	= 142,
    ATOMIC_SWAP_I32	= 143,
    ATOMIC_SWAP_I64	= 144,
    ATOMIC_SWAP_I8	= 145,
    AUI	= 146,
    AUIPC	= 147,
    AUIPC_MMR6	= 148,
    AUI_MMR6	= 149,
    AVER_S_B	= 150,
    AVER_S_D	= 151,
    AVER_S_H	= 152,
    AVER_S_W	= 153,
    AVER_U_B	= 154,
    AVER_U_D	= 155,
    AVER_U_H	= 156,
    AVER_U_W	= 157,
    AVE_S_B	= 158,
    AVE_S_D	= 159,
    AVE_S_H	= 160,
    AVE_S_W	= 161,
    AVE_U_B	= 162,
    AVE_U_D	= 163,
    AVE_U_H	= 164,
    AVE_U_W	= 165,
    AddiuRxImmX16	= 166,
    AddiuRxPcImmX16	= 167,
    AddiuRxRxImm16	= 168,
    AddiuRxRxImmX16	= 169,
    AddiuRxRyOffMemX16	= 170,
    AddiuSpImm16	= 171,
    AddiuSpImmX16	= 172,
    AdduRxRyRz16	= 173,
    AndRxRxRy16	= 174,
    B	= 175,
    B16_MM	= 176,
    BADDu	= 177,
    BAL	= 178,
    BALC	= 179,
    BALC_MMR6	= 180,
    BALIGN	= 181,
    BAL_BR	= 182,
    BBIT0	= 183,
    BBIT032	= 184,
    BBIT1	= 185,
    BBIT132	= 186,
    BC	= 187,
    BC1EQZ	= 188,
    BC1F	= 189,
    BC1FL	= 190,
    BC1F_MM	= 191,
    BC1NEZ	= 192,
    BC1T	= 193,
    BC1TL	= 194,
    BC1T_MM	= 195,
    BC2EQZ	= 196,
    BC2NEZ	= 197,
    BCLRI_B	= 198,
    BCLRI_D	= 199,
    BCLRI_H	= 200,
    BCLRI_W	= 201,
    BCLR_B	= 202,
    BCLR_D	= 203,
    BCLR_H	= 204,
    BCLR_W	= 205,
    BC_MMR6	= 206,
    BEQ	= 207,
    BEQ64	= 208,
    BEQC	= 209,
    BEQL	= 210,
    BEQZ16_MM	= 211,
    BEQZALC	= 212,
    BEQZALC_MMR6	= 213,
    BEQZC	= 214,
    BEQZC_MM	= 215,
    BEQ_MM	= 216,
    BGE	= 217,
    BGEC	= 218,
    BGEU	= 219,
    BGEUC	= 220,
    BGEZ	= 221,
    BGEZ64	= 222,
    BGEZAL	= 223,
    BGEZALC	= 224,
    BGEZALC_MMR6	= 225,
    BGEZALL	= 226,
    BGEZALS_MM	= 227,
    BGEZAL_MM	= 228,
    BGEZC	= 229,
    BGEZL	= 230,
    BGEZ_MM	= 231,
    BGT	= 232,
    BGTU	= 233,
    BGTZ	= 234,
    BGTZ64	= 235,
    BGTZALC	= 236,
    BGTZALC_MMR6	= 237,
    BGTZC	= 238,
    BGTZL	= 239,
    BGTZ_MM	= 240,
    BINSLI_B	= 241,
    BINSLI_D	= 242,
    BINSLI_H	= 243,
    BINSLI_W	= 244,
    BINSL_B	= 245,
    BINSL_D	= 246,
    BINSL_H	= 247,
    BINSL_W	= 248,
    BINSRI_B	= 249,
    BINSRI_D	= 250,
    BINSRI_H	= 251,
    BINSRI_W	= 252,
    BINSR_B	= 253,
    BINSR_D	= 254,
    BINSR_H	= 255,
    BINSR_W	= 256,
    BITREV	= 257,
    BITSWAP	= 258,
    BITSWAP_MMR6	= 259,
    BLE	= 260,
    BLEU	= 261,
    BLEZ	= 262,
    BLEZ64	= 263,
    BLEZALC	= 264,
    BLEZALC_MMR6	= 265,
    BLEZC	= 266,
    BLEZL	= 267,
    BLEZ_MM	= 268,
    BLT	= 269,
    BLTC	= 270,
    BLTU	= 271,
    BLTUC	= 272,
    BLTZ	= 273,
    BLTZ64	= 274,
    BLTZAL	= 275,
    BLTZALC	= 276,
    BLTZALC_MMR6	= 277,
    BLTZALL	= 278,
    BLTZALS_MM	= 279,
    BLTZAL_MM	= 280,
    BLTZC	= 281,
    BLTZL	= 282,
    BLTZ_MM	= 283,
    BMNZI_B	= 284,
    BMNZ_V	= 285,
    BMZI_B	= 286,
    BMZ_V	= 287,
    BNE	= 288,
    BNE64	= 289,
    BNEC	= 290,
    BNEGI_B	= 291,
    BNEGI_D	= 292,
    BNEGI_H	= 293,
    BNEGI_W	= 294,
    BNEG_B	= 295,
    BNEG_D	= 296,
    BNEG_H	= 297,
    BNEG_W	= 298,
    BNEL	= 299,
    BNEZ16_MM	= 300,
    BNEZALC	= 301,
    BNEZALC_MMR6	= 302,
    BNEZC	= 303,
    BNEZC_MM	= 304,
    BNE_MM	= 305,
    BNVC	= 306,
    BNZ_B	= 307,
    BNZ_D	= 308,
    BNZ_H	= 309,
    BNZ_V	= 310,
    BNZ_W	= 311,
    BOVC	= 312,
    BPOSGE32	= 313,
    BPOSGE32_PSEUDO	= 314,
    BREAK	= 315,
    BREAK16_MM	= 316,
    BREAK_MM	= 317,
    BREAK_MMR6	= 318,
    BSELI_B	= 319,
    BSEL_D_PSEUDO	= 320,
    BSEL_FD_PSEUDO	= 321,
    BSEL_FW_PSEUDO	= 322,
    BSEL_H_PSEUDO	= 323,
    BSEL_V	= 324,
    BSEL_W_PSEUDO	= 325,
    BSETI_B	= 326,
    BSETI_D	= 327,
    BSETI_H	= 328,
    BSETI_W	= 329,
    BSET_B	= 330,
    BSET_D	= 331,
    BSET_H	= 332,
    BSET_W	= 333,
    BZ_B	= 334,
    BZ_D	= 335,
    BZ_H	= 336,
    BZ_V	= 337,
    BZ_W	= 338,
    B_MM_Pseudo	= 339,
    BeqImm	= 340,
    BeqzRxImm16	= 341,
    BeqzRxImmX16	= 342,
    Bimm16	= 343,
    BimmX16	= 344,
    BneImm	= 345,
    BnezRxImm16	= 346,
    BnezRxImmX16	= 347,
    Break16	= 348,
    Bteqz16	= 349,
    BteqzT8CmpX16	= 350,
    BteqzT8CmpiX16	= 351,
    BteqzT8SltX16	= 352,
    BteqzT8SltiX16	= 353,
    BteqzT8SltiuX16	= 354,
    BteqzT8SltuX16	= 355,
    BteqzX16	= 356,
    Btnez16	= 357,
    BtnezT8CmpX16	= 358,
    BtnezT8CmpiX16	= 359,
    BtnezT8SltX16	= 360,
    BtnezT8SltiX16	= 361,
    BtnezT8SltiuX16	= 362,
    BtnezT8SltuX16	= 363,
    BtnezX16	= 364,
    BuildPairF64	= 365,
    BuildPairF64_64	= 366,
    CACHE	= 367,
    CACHE_MM	= 368,
    CACHE_MMR6	= 369,
    CACHE_R6	= 370,
    CEIL_L_D64	= 371,
    CEIL_L_S	= 372,
    CEIL_W_D32	= 373,
    CEIL_W_D64	= 374,
    CEIL_W_MM	= 375,
    CEIL_W_S	= 376,
    CEIL_W_S_MM	= 377,
    CEQI_B	= 378,
    CEQI_D	= 379,
    CEQI_H	= 380,
    CEQI_W	= 381,
    CEQ_B	= 382,
    CEQ_D	= 383,
    CEQ_H	= 384,
    CEQ_W	= 385,
    CFC1	= 386,
    CFC1_MM	= 387,
    CFCMSA	= 388,
    CINS	= 389,
    CINS32	= 390,
    CLASS_D	= 391,
    CLASS_S	= 392,
    CLEI_S_B	= 393,
    CLEI_S_D	= 394,
    CLEI_S_H	= 395,
    CLEI_S_W	= 396,
    CLEI_U_B	= 397,
    CLEI_U_D	= 398,
    CLEI_U_H	= 399,
    CLEI_U_W	= 400,
    CLE_S_B	= 401,
    CLE_S_D	= 402,
    CLE_S_H	= 403,
    CLE_S_W	= 404,
    CLE_U_B	= 405,
    CLE_U_D	= 406,
    CLE_U_H	= 407,
    CLE_U_W	= 408,
    CLO	= 409,
    CLO_MM	= 410,
    CLO_MMR6	= 411,
    CLO_R6	= 412,
    CLTI_S_B	= 413,
    CLTI_S_D	= 414,
    CLTI_S_H	= 415,
    CLTI_S_W	= 416,
    CLTI_U_B	= 417,
    CLTI_U_D	= 418,
    CLTI_U_H	= 419,
    CLTI_U_W	= 420,
    CLT_S_B	= 421,
    CLT_S_D	= 422,
    CLT_S_H	= 423,
    CLT_S_W	= 424,
    CLT_U_B	= 425,
    CLT_U_D	= 426,
    CLT_U_H	= 427,
    CLT_U_W	= 428,
    CLZ	= 429,
    CLZ_MM	= 430,
    CLZ_MMR6	= 431,
    CLZ_R6	= 432,
    CMPGDU_EQ_QB	= 433,
    CMPGDU_LE_QB	= 434,
    CMPGDU_LT_QB	= 435,
    CMPGU_EQ_QB	= 436,
    CMPGU_LE_QB	= 437,
    CMPGU_LT_QB	= 438,
    CMPU_EQ_QB	= 439,
    CMPU_LE_QB	= 440,
    CMPU_LT_QB	= 441,
    CMP_EQ_D	= 442,
    CMP_EQ_PH	= 443,
    CMP_EQ_S	= 444,
    CMP_F_D	= 445,
    CMP_F_S	= 446,
    CMP_LE_D	= 447,
    CMP_LE_PH	= 448,
    CMP_LE_S	= 449,
    CMP_LT_D	= 450,
    CMP_LT_PH	= 451,
    CMP_LT_S	= 452,
    CMP_SAF_D	= 453,
    CMP_SAF_S	= 454,
    CMP_SEQ_D	= 455,
    CMP_SEQ_S	= 456,
    CMP_SLE_D	= 457,
    CMP_SLE_S	= 458,
    CMP_SLT_D	= 459,
    CMP_SLT_S	= 460,
    CMP_SUEQ_D	= 461,
    CMP_SUEQ_S	= 462,
    CMP_SULE_D	= 463,
    CMP_SULE_S	= 464,
    CMP_SULT_D	= 465,
    CMP_SULT_S	= 466,
    CMP_SUN_D	= 467,
    CMP_SUN_S	= 468,
    CMP_UEQ_D	= 469,
    CMP_UEQ_S	= 470,
    CMP_ULE_D	= 471,
    CMP_ULE_S	= 472,
    CMP_ULT_D	= 473,
    CMP_ULT_S	= 474,
    CMP_UN_D	= 475,
    CMP_UN_S	= 476,
    CONSTPOOL_ENTRY	= 477,
    COPY_FD_PSEUDO	= 478,
    COPY_FW_PSEUDO	= 479,
    COPY_S_B	= 480,
    COPY_S_D	= 481,
    COPY_S_H	= 482,
    COPY_S_W	= 483,
    COPY_U_B	= 484,
    COPY_U_D	= 485,
    COPY_U_H	= 486,
    COPY_U_W	= 487,
    CTC1	= 488,
    CTC1_MM	= 489,
    CTCMSA	= 490,
    CVT_D32_S	= 491,
    CVT_D32_W	= 492,
    CVT_D32_W_MM	= 493,
    CVT_D64_L	= 494,
    CVT_D64_S	= 495,
    CVT_D64_W	= 496,
    CVT_D_S_MM	= 497,
    CVT_L_D64	= 498,
    CVT_L_D64_MM	= 499,
    CVT_L_S	= 500,
    CVT_L_S_MM	= 501,
    CVT_S_D32	= 502,
    CVT_S_D32_MM	= 503,
    CVT_S_D64	= 504,
    CVT_S_L	= 505,
    CVT_S_W	= 506,
    CVT_S_W_MM	= 507,
    CVT_W_D32	= 508,
    CVT_W_D64	= 509,
    CVT_W_MM	= 510,
    CVT_W_S	= 511,
    CVT_W_S_MM	= 512,
    C_EQ_D32	= 513,
    C_EQ_D64	= 514,
    C_EQ_S	= 515,
    C_F_D32	= 516,
    C_F_D64	= 517,
    C_F_S	= 518,
    C_LE_D32	= 519,
    C_LE_D64	= 520,
    C_LE_S	= 521,
    C_LT_D32	= 522,
    C_LT_D64	= 523,
    C_LT_S	= 524,
    C_NGE_D32	= 525,
    C_NGE_D64	= 526,
    C_NGE_S	= 527,
    C_NGLE_D32	= 528,
    C_NGLE_D64	= 529,
    C_NGLE_S	= 530,
    C_NGL_D32	= 531,
    C_NGL_D64	= 532,
    C_NGL_S	= 533,
    C_NGT_D32	= 534,
    C_NGT_D64	= 535,
    C_NGT_S	= 536,
    C_OLE_D32	= 537,
    C_OLE_D64	= 538,
    C_OLE_S	= 539,
    C_OLT_D32	= 540,
    C_OLT_D64	= 541,
    C_OLT_S	= 542,
    C_SEQ_D32	= 543,
    C_SEQ_D64	= 544,
    C_SEQ_S	= 545,
    C_SF_D32	= 546,
    C_SF_D64	= 547,
    C_SF_S	= 548,
    C_UEQ_D32	= 549,
    C_UEQ_D64	= 550,
    C_UEQ_S	= 551,
    C_ULE_D32	= 552,
    C_ULE_D64	= 553,
    C_ULE_S	= 554,
    C_ULT_D32	= 555,
    C_ULT_D64	= 556,
    C_ULT_S	= 557,
    C_UN_D32	= 558,
    C_UN_D64	= 559,
    C_UN_S	= 560,
    CmpRxRy16	= 561,
    CmpiRxImm16	= 562,
    CmpiRxImmX16	= 563,
    Constant32	= 564,
    DADD	= 565,
    DADDi	= 566,
    DADDiu	= 567,
    DADDu	= 568,
    DAHI	= 569,
    DALIGN	= 570,
    DATI	= 571,
    DAUI	= 572,
    DBITSWAP	= 573,
    DCLO	= 574,
    DCLO_R6	= 575,
    DCLZ	= 576,
    DCLZ_R6	= 577,
    DDIV	= 578,
    DDIVU	= 579,
    DERET	= 580,
    DERET_MM	= 581,
    DEXT	= 582,
    DEXTM	= 583,
    DEXTU	= 584,
    DI	= 585,
    DINS	= 586,
    DINSM	= 587,
    DINSU	= 588,
    DIV	= 589,
    DIVU	= 590,
    DIVU_MMR6	= 591,
    DIV_MMR6	= 592,
    DIV_S_B	= 593,
    DIV_S_D	= 594,
    DIV_S_H	= 595,
    DIV_S_W	= 596,
    DIV_U_B	= 597,
    DIV_U_D	= 598,
    DIV_U_H	= 599,
    DIV_U_W	= 600,
    DI_MM	= 601,
    DLSA	= 602,
    DLSA_R6	= 603,
    DMFC0	= 604,
    DMFC1	= 605,
    DMFC2	= 606,
    DMFC2_OCTEON	= 607,
    DMOD	= 608,
    DMODU	= 609,
    DMTC0	= 610,
    DMTC1	= 611,
    DMTC2	= 612,
    DMTC2_OCTEON	= 613,
    DMUH	= 614,
    DMUHU	= 615,
    DMUL	= 616,
    DMULT	= 617,
    DMULTu	= 618,
    DMULU	= 619,
    DMUL_R6	= 620,
    DOTP_S_D	= 621,
    DOTP_S_H	= 622,
    DOTP_S_W	= 623,
    DOTP_U_D	= 624,
    DOTP_U_H	= 625,
    DOTP_U_W	= 626,
    DPADD_S_D	= 627,
    DPADD_S_H	= 628,
    DPADD_S_W	= 629,
    DPADD_U_D	= 630,
    DPADD_U_H	= 631,
    DPADD_U_W	= 632,
    DPAQX_SA_W_PH	= 633,
    DPAQX_S_W_PH	= 634,
    DPAQ_SA_L_W	= 635,
    DPAQ_S_W_PH	= 636,
    DPAU_H_QBL	= 637,
    DPAU_H_QBR	= 638,
    DPAX_W_PH	= 639,
    DPA_W_PH	= 640,
    DPOP	= 641,
    DPSQX_SA_W_PH	= 642,
    DPSQX_S_W_PH	= 643,
    DPSQ_SA_L_W	= 644,
    DPSQ_S_W_PH	= 645,
    DPSUB_S_D	= 646,
    DPSUB_S_H	= 647,
    DPSUB_S_W	= 648,
    DPSUB_U_D	= 649,
    DPSUB_U_H	= 650,
    DPSUB_U_W	= 651,
    DPSU_H_QBL	= 652,
    DPSU_H_QBR	= 653,
    DPSX_W_PH	= 654,
    DPS_W_PH	= 655,
    DROTR	= 656,
    DROTR32	= 657,
    DROTRV	= 658,
    DSBH	= 659,
    DSDIV	= 660,
    DSHD	= 661,
    DSLL	= 662,
    DSLL32	= 663,
    DSLL64_32	= 664,
    DSLLV	= 665,
    DSRA	= 666,
    DSRA32	= 667,
    DSRAV	= 668,
    DSRL	= 669,
    DSRL32	= 670,
    DSRLV	= 671,
    DSUB	= 672,
    DSUBu	= 673,
    DUDIV	= 674,
    DivRxRy16	= 675,
    DivuRxRy16	= 676,
    EHB	= 677,
    EHB_MM	= 678,
    EHB_MMR6	= 679,
    EI	= 680,
    EI_MM	= 681,
    EI_MMR6	= 682,
    ERET	= 683,
    ERETNC_MMR6	= 684,
    ERET_MM	= 685,
    ERET_MMR6	= 686,
    EXT	= 687,
    EXTP	= 688,
    EXTPDP	= 689,
    EXTPDPV	= 690,
    EXTPV	= 691,
    EXTRV_RS_W	= 692,
    EXTRV_R_W	= 693,
    EXTRV_S_H	= 694,
    EXTRV_W	= 695,
    EXTR_RS_W	= 696,
    EXTR_R_W	= 697,
    EXTR_S_H	= 698,
    EXTR_W	= 699,
    EXTS	= 700,
    EXTS32	= 701,
    EXT_MM	= 702,
    ExtractElementF64	= 703,
    ExtractElementF64_64	= 704,
    FABS_D	= 705,
    FABS_D32	= 706,
    FABS_D64	= 707,
    FABS_MM	= 708,
    FABS_S	= 709,
    FABS_S_MM	= 710,
    FABS_W	= 711,
    FADD_D	= 712,
    FADD_D32	= 713,
    FADD_D64	= 714,
    FADD_MM	= 715,
    FADD_S	= 716,
    FADD_S_MM	= 717,
    FADD_W	= 718,
    FCAF_D	= 719,
    FCAF_W	= 720,
    FCEQ_D	= 721,
    FCEQ_W	= 722,
    FCLASS_D	= 723,
    FCLASS_W	= 724,
    FCLE_D	= 725,
    FCLE_W	= 726,
    FCLT_D	= 727,
    FCLT_W	= 728,
    FCMP_D32	= 729,
    FCMP_D32_MM	= 730,
    FCMP_D64	= 731,
    FCMP_S32	= 732,
    FCMP_S32_MM	= 733,
    FCNE_D	= 734,
    FCNE_W	= 735,
    FCOR_D	= 736,
    FCOR_W	= 737,
    FCUEQ_D	= 738,
    FCUEQ_W	= 739,
    FCULE_D	= 740,
    FCULE_W	= 741,
    FCULT_D	= 742,
    FCULT_W	= 743,
    FCUNE_D	= 744,
    FCUNE_W	= 745,
    FCUN_D	= 746,
    FCUN_W	= 747,
    FDIV_D	= 748,
    FDIV_D32	= 749,
    FDIV_D64	= 750,
    FDIV_MM	= 751,
    FDIV_S	= 752,
    FDIV_S_MM	= 753,
    FDIV_W	= 754,
    FEXDO_H	= 755,
    FEXDO_W	= 756,
    FEXP2_D	= 757,
    FEXP2_D_1_PSEUDO	= 758,
    FEXP2_W	= 759,
    FEXP2_W_1_PSEUDO	= 760,
    FEXUPL_D	= 761,
    FEXUPL_W	= 762,
    FEXUPR_D	= 763,
    FEXUPR_W	= 764,
    FFINT_S_D	= 765,
    FFINT_S_W	= 766,
    FFINT_U_D	= 767,
    FFINT_U_W	= 768,
    FFQL_D	= 769,
    FFQL_W	= 770,
    FFQR_D	= 771,
    FFQR_W	= 772,
    FILL_B	= 773,
    FILL_D	= 774,
    FILL_FD_PSEUDO	= 775,
    FILL_FW_PSEUDO	= 776,
    FILL_H	= 777,
    FILL_W	= 778,
    FLOG2_D	= 779,
    FLOG2_W	= 780,
    FLOOR_L_D64	= 781,
    FLOOR_L_S	= 782,
    FLOOR_W_D32	= 783,
    FLOOR_W_D64	= 784,
    FLOOR_W_MM	= 785,
    FLOOR_W_S	= 786,
    FLOOR_W_S_MM	= 787,
    FMADD_D	= 788,
    FMADD_W	= 789,
    FMAX_A_D	= 790,
    FMAX_A_W	= 791,
    FMAX_D	= 792,
    FMAX_W	= 793,
    FMIN_A_D	= 794,
    FMIN_A_W	= 795,
    FMIN_D	= 796,
    FMIN_W	= 797,
    FMOV_D32	= 798,
    FMOV_D32_MM	= 799,
    FMOV_D64	= 800,
    FMOV_S	= 801,
    FMOV_S_MM	= 802,
    FMSUB_D	= 803,
    FMSUB_W	= 804,
    FMUL_D	= 805,
    FMUL_D32	= 806,
    FMUL_D64	= 807,
    FMUL_MM	= 808,
    FMUL_S	= 809,
    FMUL_S_MM	= 810,
    FMUL_W	= 811,
    FNEG_D32	= 812,
    FNEG_D64	= 813,
    FNEG_MM	= 814,
    FNEG_S	= 815,
    FNEG_S_MM	= 816,
    FRCP_D	= 817,
    FRCP_W	= 818,
    FRINT_D	= 819,
    FRINT_W	= 820,
    FRSQRT_D	= 821,
    FRSQRT_W	= 822,
    FSAF_D	= 823,
    FSAF_W	= 824,
    FSEQ_D	= 825,
    FSEQ_W	= 826,
    FSLE_D	= 827,
    FSLE_W	= 828,
    FSLT_D	= 829,
    FSLT_W	= 830,
    FSNE_D	= 831,
    FSNE_W	= 832,
    FSOR_D	= 833,
    FSOR_W	= 834,
    FSQRT_D	= 835,
    FSQRT_D32	= 836,
    FSQRT_D64	= 837,
    FSQRT_MM	= 838,
    FSQRT_S	= 839,
    FSQRT_S_MM	= 840,
    FSQRT_W	= 841,
    FSUB_D	= 842,
    FSUB_D32	= 843,
    FSUB_D64	= 844,
    FSUB_MM	= 845,
    FSUB_S	= 846,
    FSUB_S_MM	= 847,
    FSUB_W	= 848,
    FSUEQ_D	= 849,
    FSUEQ_W	= 850,
    FSULE_D	= 851,
    FSULE_W	= 852,
    FSULT_D	= 853,
    FSULT_W	= 854,
    FSUNE_D	= 855,
    FSUNE_W	= 856,
    FSUN_D	= 857,
    FSUN_W	= 858,
    FTINT_S_D	= 859,
    FTINT_S_W	= 860,
    FTINT_U_D	= 861,
    FTINT_U_W	= 862,
    FTQ_H	= 863,
    FTQ_W	= 864,
    FTRUNC_S_D	= 865,
    FTRUNC_S_W	= 866,
    FTRUNC_U_D	= 867,
    FTRUNC_U_W	= 868,
    GotPrologue16	= 869,
    HADD_S_D	= 870,
    HADD_S_H	= 871,
    HADD_S_W	= 872,
    HADD_U_D	= 873,
    HADD_U_H	= 874,
    HADD_U_W	= 875,
    HSUB_S_D	= 876,
    HSUB_S_H	= 877,
    HSUB_S_W	= 878,
    HSUB_U_D	= 879,
    HSUB_U_H	= 880,
    HSUB_U_W	= 881,
    ILVEV_B	= 882,
    ILVEV_D	= 883,
    ILVEV_H	= 884,
    ILVEV_W	= 885,
    ILVL_B	= 886,
    ILVL_D	= 887,
    ILVL_H	= 888,
    ILVL_W	= 889,
    ILVOD_B	= 890,
    ILVOD_D	= 891,
    ILVOD_H	= 892,
    ILVOD_W	= 893,
    ILVR_B	= 894,
    ILVR_D	= 895,
    ILVR_H	= 896,
    ILVR_W	= 897,
    INS	= 898,
    INSERT_B	= 899,
    INSERT_B_VIDX64_PSEUDO	= 900,
    INSERT_B_VIDX_PSEUDO	= 901,
    INSERT_D	= 902,
    INSERT_D_VIDX64_PSEUDO	= 903,
    INSERT_D_VIDX_PSEUDO	= 904,
    INSERT_FD_PSEUDO	= 905,
    INSERT_FD_VIDX64_PSEUDO	= 906,
    INSERT_FD_VIDX_PSEUDO	= 907,
    INSERT_FW_PSEUDO	= 908,
    INSERT_FW_VIDX64_PSEUDO	= 909,
    INSERT_FW_VIDX_PSEUDO	= 910,
    INSERT_H	= 911,
    INSERT_H_VIDX64_PSEUDO	= 912,
    INSERT_H_VIDX_PSEUDO	= 913,
    INSERT_W	= 914,
    INSERT_W_VIDX64_PSEUDO	= 915,
    INSERT_W_VIDX_PSEUDO	= 916,
    INSV	= 917,
    INSVE_B	= 918,
    INSVE_D	= 919,
    INSVE_H	= 920,
    INSVE_W	= 921,
    INS_MM	= 922,
    J	= 923,
    JAL	= 924,
    JALR	= 925,
    JALR16_MM	= 926,
    JALR64	= 927,
    JALR64Pseudo	= 928,
    JALRPseudo	= 929,
    JALRS16_MM	= 930,
    JALRS_MM	= 931,
    JALR_HB	= 932,
    JALR_MM	= 933,
    JALS_MM	= 934,
    JALX	= 935,
    JALX_MM	= 936,
    JAL_MM	= 937,
    JIALC	= 938,
    JIALC_MMR6	= 939,
    JIC	= 940,
    JIC_MMR6	= 941,
    JR	= 942,
    JR16_MM	= 943,
    JR64	= 944,
    JRADDIUSP	= 945,
    JRC16_MM	= 946,
    JR_HB	= 947,
    JR_HB_R6	= 948,
    JR_MM	= 949,
    J_MM	= 950,
    Jal16	= 951,
    JalB16	= 952,
    JalOneReg	= 953,
    JalTwoReg	= 954,
    JrRa16	= 955,
    JrcRa16	= 956,
    JrcRx16	= 957,
    JumpLinkReg16	= 958,
    LB	= 959,
    LB64	= 960,
    LBU16_MM	= 961,
    LBUX	= 962,
    LB_MM	= 963,
    LBu	= 964,
    LBu64	= 965,
    LBu_MM	= 966,
    LD	= 967,
    LDC1	= 968,
    LDC164	= 969,
    LDC1_MM	= 970,
    LDC2	= 971,
    LDC2_R6	= 972,
    LDC3	= 973,
    LDI_B	= 974,
    LDI_D	= 975,
    LDI_H	= 976,
    LDI_W	= 977,
    LDL	= 978,
    LDPC	= 979,
    LDR	= 980,
    LDXC1	= 981,
    LDXC164	= 982,
    LD_B	= 983,
    LD_D	= 984,
    LD_H	= 985,
    LD_W	= 986,
    LEA_ADDiu	= 987,
    LEA_ADDiu64	= 988,
    LEA_ADDiu_MM	= 989,
    LH	= 990,
    LH64	= 991,
    LHU16_MM	= 992,
    LHX	= 993,
    LH_MM	= 994,
    LHu	= 995,
    LHu64	= 996,
    LHu_MM	= 997,
    LI16_MM	= 998,
    LL	= 999,
    LLD	= 1000,
    LLD_R6	= 1001,
    LL_MM	= 1002,
    LL_R6	= 1003,
    LOAD_ACC128	= 1004,
    LOAD_ACC64	= 1005,
    LOAD_ACC64DSP	= 1006,
    LOAD_CCOND_DSP	= 1007,
    LONG_BRANCH_ADDiu	= 1008,
    LONG_BRANCH_DADDiu	= 1009,
    LONG_BRANCH_LUi	= 1010,
    LSA	= 1011,
    LSA_MMR6	= 1012,
    LSA_R6	= 1013,
    LUXC1	= 1014,
    LUXC164	= 1015,
    LUXC1_MM	= 1016,
    LUi	= 1017,
    LUi64	= 1018,
    LUi_MM	= 1019,
    LW	= 1020,
    LW16_MM	= 1021,
    LW64	= 1022,
    LWC1	= 1023,
    LWC1_MM	= 1024,
    LWC2	= 1025,
    LWC2_R6	= 1026,
    LWC3	= 1027,
    LWGP_MM	= 1028,
    LWL	= 1029,
    LWL64	= 1030,
    LWL_MM	= 1031,
    LWM16_MM	= 1032,
    LWM32_MM	= 1033,
    LWM_MM	= 1034,
    LWPC	= 1035,
    LWPC_MMR6	= 1036,
    LWP_MM	= 1037,
    LWR	= 1038,
    LWR64	= 1039,
    LWR_MM	= 1040,
    LWSP_MM	= 1041,
    LWUPC	= 1042,
    LWU_MM	= 1043,
    LWX	= 1044,
    LWXC1	= 1045,
    LWXC1_MM	= 1046,
    LWXS_MM	= 1047,
    LW_MM	= 1048,
    LWu	= 1049,
    LbRxRyOffMemX16	= 1050,
    LbuRxRyOffMemX16	= 1051,
    LhRxRyOffMemX16	= 1052,
    LhuRxRyOffMemX16	= 1053,
    LiRxImm16	= 1054,
    LiRxImmAlignX16	= 1055,
    LiRxImmX16	= 1056,
    LoadAddrImm32	= 1057,
    LoadAddrReg32	= 1058,
    LoadImm32	= 1059,
    LoadImm64	= 1060,
    LwConstant32	= 1061,
    LwRxPcTcp16	= 1062,
    LwRxPcTcpX16	= 1063,
    LwRxRyOffMemX16	= 1064,
    LwRxSpImmX16	= 1065,
    MADD	= 1066,
    MADDF_D	= 1067,
    MADDF_S	= 1068,
    MADDR_Q_H	= 1069,
    MADDR_Q_W	= 1070,
    MADDU	= 1071,
    MADDU_DSP	= 1072,
    MADDU_MM	= 1073,
    MADDV_B	= 1074,
    MADDV_D	= 1075,
    MADDV_H	= 1076,
    MADDV_W	= 1077,
    MADD_D32	= 1078,
    MADD_D32_MM	= 1079,
    MADD_D64	= 1080,
    MADD_DSP	= 1081,
    MADD_MM	= 1082,
    MADD_Q_H	= 1083,
    MADD_Q_W	= 1084,
    MADD_S	= 1085,
    MADD_S_MM	= 1086,
    MAQ_SA_W_PHL	= 1087,
    MAQ_SA_W_PHR	= 1088,
    MAQ_S_W_PHL	= 1089,
    MAQ_S_W_PHR	= 1090,
    MAXA_D	= 1091,
    MAXA_S	= 1092,
    MAXI_S_B	= 1093,
    MAXI_S_D	= 1094,
    MAXI_S_H	= 1095,
    MAXI_S_W	= 1096,
    MAXI_U_B	= 1097,
    MAXI_U_D	= 1098,
    MAXI_U_H	= 1099,
    MAXI_U_W	= 1100,
    MAX_A_B	= 1101,
    MAX_A_D	= 1102,
    MAX_A_H	= 1103,
    MAX_A_W	= 1104,
    MAX_D	= 1105,
    MAX_S	= 1106,
    MAX_S_B	= 1107,
    MAX_S_D	= 1108,
    MAX_S_H	= 1109,
    MAX_S_W	= 1110,
    MAX_U_B	= 1111,
    MAX_U_D	= 1112,
    MAX_U_H	= 1113,
    MAX_U_W	= 1114,
    MFC0	= 1115,
    MFC1	= 1116,
    MFC1_MM	= 1117,
    MFC2	= 1118,
    MFHC1_D32	= 1119,
    MFHC1_D64	= 1120,
    MFHC1_MM	= 1121,
    MFHI	= 1122,
    MFHI16_MM	= 1123,
    MFHI64	= 1124,
    MFHI_DSP	= 1125,
    MFHI_MM	= 1126,
    MFLO	= 1127,
    MFLO16_MM	= 1128,
    MFLO64	= 1129,
    MFLO_DSP	= 1130,
    MFLO_MM	= 1131,
    MINA_D	= 1132,
    MINA_S	= 1133,
    MINI_S_B	= 1134,
    MINI_S_D	= 1135,
    MINI_S_H	= 1136,
    MINI_S_W	= 1137,
    MINI_U_B	= 1138,
    MINI_U_D	= 1139,
    MINI_U_H	= 1140,
    MINI_U_W	= 1141,
    MIN_A_B	= 1142,
    MIN_A_D	= 1143,
    MIN_A_H	= 1144,
    MIN_A_W	= 1145,
    MIN_D	= 1146,
    MIN_S	= 1147,
    MIN_S_B	= 1148,
    MIN_S_D	= 1149,
    MIN_S_H	= 1150,
    MIN_S_W	= 1151,
    MIN_U_B	= 1152,
    MIN_U_D	= 1153,
    MIN_U_H	= 1154,
    MIN_U_W	= 1155,
    MIPSeh_return32	= 1156,
    MIPSeh_return64	= 1157,
    MOD	= 1158,
    MODSUB	= 1159,
    MODU	= 1160,
    MODU_MMR6	= 1161,
    MOD_MMR6	= 1162,
    MOD_S_B	= 1163,
    MOD_S_D	= 1164,
    MOD_S_H	= 1165,
    MOD_S_W	= 1166,
    MOD_U_B	= 1167,
    MOD_U_D	= 1168,
    MOD_U_H	= 1169,
    MOD_U_W	= 1170,
    MOVE16_MM	= 1171,
    MOVEP_MM	= 1172,
    MOVE_V	= 1173,
    MOVF_D32	= 1174,
    MOVF_D32_MM	= 1175,
    MOVF_D64	= 1176,
    MOVF_I	= 1177,
    MOVF_I64	= 1178,
    MOVF_I_MM	= 1179,
    MOVF_S	= 1180,
    MOVF_S_MM	= 1181,
    MOVN_I64_D64	= 1182,
    MOVN_I64_I	= 1183,
    MOVN_I64_I64	= 1184,
    MOVN_I64_S	= 1185,
    MOVN_I_D32	= 1186,
    MOVN_I_D32_MM	= 1187,
    MOVN_I_D64	= 1188,
    MOVN_I_I	= 1189,
    MOVN_I_I64	= 1190,
    MOVN_I_MM	= 1191,
    MOVN_I_S	= 1192,
    MOVN_I_S_MM	= 1193,
    MOVT_D32	= 1194,
    MOVT_D32_MM	= 1195,
    MOVT_D64	= 1196,
    MOVT_I	= 1197,
    MOVT_I64	= 1198,
    MOVT_I_MM	= 1199,
    MOVT_S	= 1200,
    MOVT_S_MM	= 1201,
    MOVZ_I64_D64	= 1202,
    MOVZ_I64_I	= 1203,
    MOVZ_I64_I64	= 1204,
    MOVZ_I64_S	= 1205,
    MOVZ_I_D32	= 1206,
    MOVZ_I_D32_MM	= 1207,
    MOVZ_I_D64	= 1208,
    MOVZ_I_I	= 1209,
    MOVZ_I_I64	= 1210,
    MOVZ_I_MM	= 1211,
    MOVZ_I_S	= 1212,
    MOVZ_I_S_MM	= 1213,
    MSUB	= 1214,
    MSUBF_D	= 1215,
    MSUBF_S	= 1216,
    MSUBR_Q_H	= 1217,
    MSUBR_Q_W	= 1218,
    MSUBU	= 1219,
    MSUBU_DSP	= 1220,
    MSUBU_MM	= 1221,
    MSUBV_B	= 1222,
    MSUBV_D	= 1223,
    MSUBV_H	= 1224,
    MSUBV_W	= 1225,
    MSUB_D32	= 1226,
    MSUB_D32_MM	= 1227,
    MSUB_D64	= 1228,
    MSUB_DSP	= 1229,
    MSUB_MM	= 1230,
    MSUB_Q_H	= 1231,
    MSUB_Q_W	= 1232,
    MSUB_S	= 1233,
    MSUB_S_MM	= 1234,
    MTC0	= 1235,
    MTC1	= 1236,
    MTC1_MM	= 1237,
    MTC2	= 1238,
    MTHC1_D32	= 1239,
    MTHC1_D64	= 1240,
    MTHC1_MM	= 1241,
    MTHI	= 1242,
    MTHI64	= 1243,
    MTHI_DSP	= 1244,
    MTHI_MM	= 1245,
    MTHLIP	= 1246,
    MTLO	= 1247,
    MTLO64	= 1248,
    MTLO_DSP	= 1249,
    MTLO_MM	= 1250,
    MTM0	= 1251,
    MTM1	= 1252,
    MTM2	= 1253,
    MTP0	= 1254,
    MTP1	= 1255,
    MTP2	= 1256,
    MUH	= 1257,
    MUHU	= 1258,
    MUHU_MMR6	= 1259,
    MUH_MMR6	= 1260,
    MUL	= 1261,
    MULEQ_S_W_PHL	= 1262,
    MULEQ_S_W_PHR	= 1263,
    MULEU_S_PH_QBL	= 1264,
    MULEU_S_PH_QBR	= 1265,
    MULQ_RS_PH	= 1266,
    MULQ_RS_W	= 1267,
    MULQ_S_PH	= 1268,
    MULQ_S_W	= 1269,
    MULR_Q_H	= 1270,
    MULR_Q_W	= 1271,
    MULSAQ_S_W_PH	= 1272,
    MULSA_W_PH	= 1273,
    MULT	= 1274,
    MULTU_DSP	= 1275,
    MULT_DSP	= 1276,
    MULT_MM	= 1277,
    MULTu	= 1278,
    MULTu_MM	= 1279,
    MULU	= 1280,
    MULU_MMR6	= 1281,
    MULV_B	= 1282,
    MULV_D	= 1283,
    MULV_H	= 1284,
    MULV_W	= 1285,
    MUL_MM	= 1286,
    MUL_MMR6	= 1287,
    MUL_PH	= 1288,
    MUL_Q_H	= 1289,
    MUL_Q_W	= 1290,
    MUL_R6	= 1291,
    MUL_S_PH	= 1292,
    Mfhi16	= 1293,
    Mflo16	= 1294,
    Move32R16	= 1295,
    MoveR3216	= 1296,
    MultRxRy16	= 1297,
    MultRxRyRz16	= 1298,
    MultuRxRy16	= 1299,
    MultuRxRyRz16	= 1300,
    NLOC_B	= 1301,
    NLOC_D	= 1302,
    NLOC_H	= 1303,
    NLOC_W	= 1304,
    NLZC_B	= 1305,
    NLZC_D	= 1306,
    NLZC_H	= 1307,
    NLZC_W	= 1308,
    NMADD_D32	= 1309,
    NMADD_D32_MM	= 1310,
    NMADD_D64	= 1311,
    NMADD_S	= 1312,
    NMADD_S_MM	= 1313,
    NMSUB_D32	= 1314,
    NMSUB_D32_MM	= 1315,
    NMSUB_D64	= 1316,
    NMSUB_S	= 1317,
    NMSUB_S_MM	= 1318,
    NOP	= 1319,
    NOR	= 1320,
    NOR64	= 1321,
    NORI_B	= 1322,
    NOR_MM	= 1323,
    NOR_MMR6	= 1324,
    NOR_V	= 1325,
    NOR_V_D_PSEUDO	= 1326,
    NOR_V_H_PSEUDO	= 1327,
    NOR_V_W_PSEUDO	= 1328,
    NOT16_MM	= 1329,
    NegRxRy16	= 1330,
    NotRxRy16	= 1331,
    OR	= 1332,
    OR16_MM	= 1333,
    OR64	= 1334,
    ORI_B	= 1335,
    ORI_MMR6	= 1336,
    OR_MM	= 1337,
    OR_MMR6	= 1338,
    OR_V	= 1339,
    OR_V_D_PSEUDO	= 1340,
    OR_V_H_PSEUDO	= 1341,
    OR_V_W_PSEUDO	= 1342,
    ORi	= 1343,
    ORi64	= 1344,
    ORi_MM	= 1345,
    OrRxRxRy16	= 1346,
    PACKRL_PH	= 1347,
    PAUSE	= 1348,
    PAUSE_MM	= 1349,
    PCKEV_B	= 1350,
    PCKEV_D	= 1351,
    PCKEV_H	= 1352,
    PCKEV_W	= 1353,
    PCKOD_B	= 1354,
    PCKOD_D	= 1355,
    PCKOD_H	= 1356,
    PCKOD_W	= 1357,
    PCNT_B	= 1358,
    PCNT_D	= 1359,
    PCNT_H	= 1360,
    PCNT_W	= 1361,
    PICK_PH	= 1362,
    PICK_QB	= 1363,
    POP	= 1364,
    PRECEQU_PH_QBL	= 1365,
    PRECEQU_PH_QBLA	= 1366,
    PRECEQU_PH_QBR	= 1367,
    PRECEQU_PH_QBRA	= 1368,
    PRECEQ_W_PHL	= 1369,
    PRECEQ_W_PHR	= 1370,
    PRECEU_PH_QBL	= 1371,
    PRECEU_PH_QBLA	= 1372,
    PRECEU_PH_QBR	= 1373,
    PRECEU_PH_QBRA	= 1374,
    PRECRQU_S_QB_PH	= 1375,
    PRECRQ_PH_W	= 1376,
    PRECRQ_QB_PH	= 1377,
    PRECRQ_RS_PH_W	= 1378,
    PRECR_QB_PH	= 1379,
    PRECR_SRA_PH_W	= 1380,
    PRECR_SRA_R_PH_W	= 1381,
    PREF	= 1382,
    PREF_MM	= 1383,
    PREF_MMR6	= 1384,
    PREF_R6	= 1385,
    PREPEND	= 1386,
    PseudoCMPU_EQ_QB	= 1387,
    PseudoCMPU_LE_QB	= 1388,
    PseudoCMPU_LT_QB	= 1389,
    PseudoCMP_EQ_PH	= 1390,
    PseudoCMP_LE_PH	= 1391,
    PseudoCMP_LT_PH	= 1392,
    PseudoCVT_D32_W	= 1393,
    PseudoCVT_D64_L	= 1394,
    PseudoCVT_D64_W	= 1395,
    PseudoCVT_S_L	= 1396,
    PseudoCVT_S_W	= 1397,
    PseudoDMULT	= 1398,
    PseudoDMULTu	= 1399,
    PseudoDSDIV	= 1400,
    PseudoDUDIV	= 1401,
    PseudoIndirectBranch	= 1402,
    PseudoIndirectBranch64	= 1403,
    PseudoMADD	= 1404,
    PseudoMADDU	= 1405,
    PseudoMFHI	= 1406,
    PseudoMFHI64	= 1407,
    PseudoMFLO	= 1408,
    PseudoMFLO64	= 1409,
    PseudoMSUB	= 1410,
    PseudoMSUBU	= 1411,
    PseudoMTLOHI	= 1412,
    PseudoMTLOHI64	= 1413,
    PseudoMTLOHI_DSP	= 1414,
    PseudoMULT	= 1415,
    PseudoMULTu	= 1416,
    PseudoPICK_PH	= 1417,
    PseudoPICK_QB	= 1418,
    PseudoReturn	= 1419,
    PseudoReturn64	= 1420,
    PseudoSDIV	= 1421,
    PseudoSELECTFP_F_D32	= 1422,
    PseudoSELECTFP_F_D64	= 1423,
    PseudoSELECTFP_F_I	= 1424,
    PseudoSELECTFP_F_I64	= 1425,
    PseudoSELECTFP_F_S	= 1426,
    PseudoSELECTFP_T_D32	= 1427,
    PseudoSELECTFP_T_D64	= 1428,
    PseudoSELECTFP_T_I	= 1429,
    PseudoSELECTFP_T_I64	= 1430,
    PseudoSELECTFP_T_S	= 1431,
    PseudoSELECT_D32	= 1432,
    PseudoSELECT_D64	= 1433,
    PseudoSELECT_I	= 1434,
    PseudoSELECT_I64	= 1435,
    PseudoSELECT_S	= 1436,
    PseudoUDIV	= 1437,
    RADDU_W_QB	= 1438,
    RDDSP	= 1439,
    RDHWR	= 1440,
    RDHWR64	= 1441,
    RDHWR_MM	= 1442,
    REPLV_PH	= 1443,
    REPLV_QB	= 1444,
    REPL_PH	= 1445,
    REPL_QB	= 1446,
    RINT_D	= 1447,
    RINT_S	= 1448,
    ROTR	= 1449,
    ROTRV	= 1450,
    ROTRV_MM	= 1451,
    ROTR_MM	= 1452,
    ROUND_L_D64	= 1453,
    ROUND_L_S	= 1454,
    ROUND_W_D32	= 1455,
    ROUND_W_D64	= 1456,
    ROUND_W_MM	= 1457,
    ROUND_W_S	= 1458,
    ROUND_W_S_MM	= 1459,
    Restore16	= 1460,
    RestoreX16	= 1461,
    RetRA	= 1462,
    RetRA16	= 1463,
    SAT_S_B	= 1464,
    SAT_S_D	= 1465,
    SAT_S_H	= 1466,
    SAT_S_W	= 1467,
    SAT_U_B	= 1468,
    SAT_U_D	= 1469,
    SAT_U_H	= 1470,
    SAT_U_W	= 1471,
    SB	= 1472,
    SB16_MM	= 1473,
    SB64	= 1474,
    SB_MM	= 1475,
    SC	= 1476,
    SCD	= 1477,
    SCD_R6	= 1478,
    SC_MM	= 1479,
    SC_R6	= 1480,
    SD	= 1481,
    SDBBP	= 1482,
    SDBBP16_MM	= 1483,
    SDBBP_MM	= 1484,
    SDBBP_R6	= 1485,
    SDC1	= 1486,
    SDC164	= 1487,
    SDC1_MM	= 1488,
    SDC2	= 1489,
    SDC2_R6	= 1490,
    SDC3	= 1491,
    SDIV	= 1492,
    SDIV_MM	= 1493,
    SDL	= 1494,
    SDR	= 1495,
    SDXC1	= 1496,
    SDXC164	= 1497,
    SEB	= 1498,
    SEB64	= 1499,
    SEB_MM	= 1500,
    SEB_MMR6	= 1501,
    SEH	= 1502,
    SEH64	= 1503,
    SEH_MM	= 1504,
    SEH_MMR6	= 1505,
    SELEQZ	= 1506,
    SELEQZ64	= 1507,
    SELEQZ_D	= 1508,
    SELEQZ_MMR6	= 1509,
    SELEQZ_S	= 1510,
    SELNEZ	= 1511,
    SELNEZ64	= 1512,
    SELNEZ_D	= 1513,
    SELNEZ_MMR6	= 1514,
    SELNEZ_S	= 1515,
    SEL_D	= 1516,
    SEL_S	= 1517,
    SEQ	= 1518,
    SEQi	= 1519,
    SH	= 1520,
    SH16_MM	= 1521,
    SH64	= 1522,
    SHF_B	= 1523,
    SHF_H	= 1524,
    SHF_W	= 1525,
    SHILO	= 1526,
    SHILOV	= 1527,
    SHLLV_PH	= 1528,
    SHLLV_QB	= 1529,
    SHLLV_S_PH	= 1530,
    SHLLV_S_W	= 1531,
    SHLL_PH	= 1532,
    SHLL_QB	= 1533,
    SHLL_S_PH	= 1534,
    SHLL_S_W	= 1535,
    SHRAV_PH	= 1536,
    SHRAV_QB	= 1537,
    SHRAV_R_PH	= 1538,
    SHRAV_R_QB	= 1539,
    SHRAV_R_W	= 1540,
    SHRA_PH	= 1541,
    SHRA_QB	= 1542,
    SHRA_R_PH	= 1543,
    SHRA_R_QB	= 1544,
    SHRA_R_W	= 1545,
    SHRLV_PH	= 1546,
    SHRLV_QB	= 1547,
    SHRL_PH	= 1548,
    SHRL_QB	= 1549,
    SH_MM	= 1550,
    SLDI_B	= 1551,
    SLDI_D	= 1552,
    SLDI_H	= 1553,
    SLDI_W	= 1554,
    SLD_B	= 1555,
    SLD_D	= 1556,
    SLD_H	= 1557,
    SLD_W	= 1558,
    SLL	= 1559,
    SLL16_MM	= 1560,
    SLL64_32	= 1561,
    SLL64_64	= 1562,
    SLLI_B	= 1563,
    SLLI_D	= 1564,
    SLLI_H	= 1565,
    SLLI_W	= 1566,
    SLLV	= 1567,
    SLLV_MM	= 1568,
    SLL_B	= 1569,
    SLL_D	= 1570,
    SLL_H	= 1571,
    SLL_MM	= 1572,
    SLL_W	= 1573,
    SLT	= 1574,
    SLT64	= 1575,
    SLT_MM	= 1576,
    SLTi	= 1577,
    SLTi64	= 1578,
    SLTi_MM	= 1579,
    SLTiu	= 1580,
    SLTiu64	= 1581,
    SLTiu_MM	= 1582,
    SLTu	= 1583,
    SLTu64	= 1584,
    SLTu_MM	= 1585,
    SNE	= 1586,
    SNEi	= 1587,
    SNZ_B_PSEUDO	= 1588,
    SNZ_D_PSEUDO	= 1589,
    SNZ_H_PSEUDO	= 1590,
    SNZ_V_PSEUDO	= 1591,
    SNZ_W_PSEUDO	= 1592,
    SPLATI_B	= 1593,
    SPLATI_D	= 1594,
    SPLATI_H	= 1595,
    SPLATI_W	= 1596,
    SPLAT_B	= 1597,
    SPLAT_D	= 1598,
    SPLAT_H	= 1599,
    SPLAT_W	= 1600,
    SRA	= 1601,
    SRAI_B	= 1602,
    SRAI_D	= 1603,
    SRAI_H	= 1604,
    SRAI_W	= 1605,
    SRARI_B	= 1606,
    SRARI_D	= 1607,
    SRARI_H	= 1608,
    SRARI_W	= 1609,
    SRAR_B	= 1610,
    SRAR_D	= 1611,
    SRAR_H	= 1612,
    SRAR_W	= 1613,
    SRAV	= 1614,
    SRAV_MM	= 1615,
    SRA_B	= 1616,
    SRA_D	= 1617,
    SRA_H	= 1618,
    SRA_MM	= 1619,
    SRA_W	= 1620,
    SRL	= 1621,
    SRL16_MM	= 1622,
    SRLI_B	= 1623,
    SRLI_D	= 1624,
    SRLI_H	= 1625,
    SRLI_W	= 1626,
    SRLRI_B	= 1627,
    SRLRI_D	= 1628,
    SRLRI_H	= 1629,
    SRLRI_W	= 1630,
    SRLR_B	= 1631,
    SRLR_D	= 1632,
    SRLR_H	= 1633,
    SRLR_W	= 1634,
    SRLV	= 1635,
    SRLV_MM	= 1636,
    SRL_B	= 1637,
    SRL_D	= 1638,
    SRL_H	= 1639,
    SRL_MM	= 1640,
    SRL_W	= 1641,
    SSNOP	= 1642,
    SSNOP_MM	= 1643,
    STORE_ACC128	= 1644,
    STORE_ACC64	= 1645,
    STORE_ACC64DSP	= 1646,
    STORE_CCOND_DSP	= 1647,
    ST_B	= 1648,
    ST_D	= 1649,
    ST_H	= 1650,
    ST_W	= 1651,
    SUB	= 1652,
    SUBQH_PH	= 1653,
    SUBQH_R_PH	= 1654,
    SUBQH_R_W	= 1655,
    SUBQH_W	= 1656,
    SUBQ_PH	= 1657,
    SUBQ_S_PH	= 1658,
    SUBQ_S_W	= 1659,
    SUBSUS_U_B	= 1660,
    SUBSUS_U_D	= 1661,
    SUBSUS_U_H	= 1662,
    SUBSUS_U_W	= 1663,
    SUBSUU_S_B	= 1664,
    SUBSUU_S_D	= 1665,
    SUBSUU_S_H	= 1666,
    SUBSUU_S_W	= 1667,
    SUBS_S_B	= 1668,
    SUBS_S_D	= 1669,
    SUBS_S_H	= 1670,
    SUBS_S_W	= 1671,
    SUBS_U_B	= 1672,
    SUBS_U_D	= 1673,
    SUBS_U_H	= 1674,
    SUBS_U_W	= 1675,
    SUBU16_MM	= 1676,
    SUBUH_QB	= 1677,
    SUBUH_R_QB	= 1678,
    SUBU_MMR6	= 1679,
    SUBU_PH	= 1680,
    SUBU_QB	= 1681,
    SUBU_S_PH	= 1682,
    SUBU_S_QB	= 1683,
    SUBVI_B	= 1684,
    SUBVI_D	= 1685,
    SUBVI_H	= 1686,
    SUBVI_W	= 1687,
    SUBV_B	= 1688,
    SUBV_D	= 1689,
    SUBV_H	= 1690,
    SUBV_W	= 1691,
    SUB_MM	= 1692,
    SUB_MMR6	= 1693,
    SUBu	= 1694,
    SUBu_MM	= 1695,
    SUXC1	= 1696,
    SUXC164	= 1697,
    SUXC1_MM	= 1698,
    SW	= 1699,
    SW16_MM	= 1700,
    SW64	= 1701,
    SWC1	= 1702,
    SWC1_MM	= 1703,
    SWC2	= 1704,
    SWC2_R6	= 1705,
    SWC3	= 1706,
    SWL	= 1707,
    SWL64	= 1708,
    SWL_MM	= 1709,
    SWM16_MM	= 1710,
    SWM32_MM	= 1711,
    SWM_MM	= 1712,
    SWP_MM	= 1713,
    SWR	= 1714,
    SWR64	= 1715,
    SWR_MM	= 1716,
    SWSP_MM	= 1717,
    SWXC1	= 1718,
    SWXC1_MM	= 1719,
    SW_MM	= 1720,
    SYNC	= 1721,
    SYNCI	= 1722,
    SYNC_MM	= 1723,
    SYSCALL	= 1724,
    SYSCALL_MM	= 1725,
    SZ_B_PSEUDO	= 1726,
    SZ_D_PSEUDO	= 1727,
    SZ_H_PSEUDO	= 1728,
    SZ_V_PSEUDO	= 1729,
    SZ_W_PSEUDO	= 1730,
    Save16	= 1731,
    SaveX16	= 1732,
    SbRxRyOffMemX16	= 1733,
    SebRx16	= 1734,
    SehRx16	= 1735,
    SelBeqZ	= 1736,
    SelBneZ	= 1737,
    SelTBteqZCmp	= 1738,
    SelTBteqZCmpi	= 1739,
    SelTBteqZSlt	= 1740,
    SelTBteqZSlti	= 1741,
    SelTBteqZSltiu	= 1742,
    SelTBteqZSltu	= 1743,
    SelTBtneZCmp	= 1744,
    SelTBtneZCmpi	= 1745,
    SelTBtneZSlt	= 1746,
    SelTBtneZSlti	= 1747,
    SelTBtneZSltiu	= 1748,
    SelTBtneZSltu	= 1749,
    ShRxRyOffMemX16	= 1750,
    SllX16	= 1751,
    SllvRxRy16	= 1752,
    SltCCRxRy16	= 1753,
    SltRxRy16	= 1754,
    SltiCCRxImmX16	= 1755,
    SltiRxImm16	= 1756,
    SltiRxImmX16	= 1757,
    SltiuCCRxImmX16	= 1758,
    SltiuRxImm16	= 1759,
    SltiuRxImmX16	= 1760,
    SltuCCRxRy16	= 1761,
    SltuRxRy16	= 1762,
    SltuRxRyRz16	= 1763,
    SraX16	= 1764,
    SravRxRy16	= 1765,
    SrlX16	= 1766,
    SrlvRxRy16	= 1767,
    SubuRxRyRz16	= 1768,
    SwRxRyOffMemX16	= 1769,
    SwRxSpImmX16	= 1770,
    TAILCALL	= 1771,
    TAILCALL64_R	= 1772,
    TAILCALL_R	= 1773,
    TEQ	= 1774,
    TEQI	= 1775,
    TEQI_MM	= 1776,
    TEQ_MM	= 1777,
    TGE	= 1778,
    TGEI	= 1779,
    TGEIU	= 1780,
    TGEIU_MM	= 1781,
    TGEI_MM	= 1782,
    TGEU	= 1783,
    TGEU_MM	= 1784,
    TGE_MM	= 1785,
    TLBP	= 1786,
    TLBP_MM	= 1787,
    TLBR	= 1788,
    TLBR_MM	= 1789,
    TLBWI	= 1790,
    TLBWI_MM	= 1791,
    TLBWR	= 1792,
    TLBWR_MM	= 1793,
    TLT	= 1794,
    TLTI	= 1795,
    TLTIU_MM	= 1796,
    TLTI_MM	= 1797,
    TLTU	= 1798,
    TLTU_MM	= 1799,
    TLT_MM	= 1800,
    TNE	= 1801,
    TNEI	= 1802,
    TNEI_MM	= 1803,
    TNE_MM	= 1804,
    TRAP	= 1805,
    TRUNC_L_D64	= 1806,
    TRUNC_L_S	= 1807,
    TRUNC_W_D32	= 1808,
    TRUNC_W_D64	= 1809,
    TRUNC_W_MM	= 1810,
    TRUNC_W_S	= 1811,
    TRUNC_W_S_MM	= 1812,
    TTLTIU	= 1813,
    UDIV	= 1814,
    UDIV_MM	= 1815,
    Ulhu	= 1816,
    Ulw	= 1817,
    V3MULU	= 1818,
    VMM0	= 1819,
    VMULU	= 1820,
    VSHF_B	= 1821,
    VSHF_D	= 1822,
    VSHF_H	= 1823,
    VSHF_W	= 1824,
    WAIT	= 1825,
    WAIT_MM	= 1826,
    WRDSP	= 1827,
    WSBH	= 1828,
    WSBH_MM	= 1829,
    XOR	= 1830,
    XOR16_MM	= 1831,
    XOR64	= 1832,
    XORI_B	= 1833,
    XORI_MMR6	= 1834,
    XOR_MM	= 1835,
    XOR_MMR6	= 1836,
    XOR_V	= 1837,
    XOR_V_D_PSEUDO	= 1838,
    XOR_V_H_PSEUDO	= 1839,
    XOR_V_W_PSEUDO	= 1840,
    XORi	= 1841,
    XORi64	= 1842,
    XORi_MM	= 1843,
    XorRxRxRy16	= 1844,
    INSTRUCTION_LIST_END = 1845
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDU	= 1,
    II_ADDIU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_EXT	= 20,
    II_INS	= 21,
    II_DMFC1	= 22,
    II_DMTC1	= 23,
    II_DMUL	= 24,
    II_DMULT	= 25,
    II_DMULTU	= 26,
    II_POP	= 27,
    II_DROTR	= 28,
    II_DROTR32	= 29,
    II_DROTRV	= 30,
    II_DDIV	= 31,
    II_DSLL	= 32,
    II_DSLL32	= 33,
    II_DSLLV	= 34,
    II_DSRA	= 35,
    II_DSRA32	= 36,
    II_DSRAV	= 37,
    II_DSRL	= 38,
    II_DSRL32	= 39,
    II_DSRLV	= 40,
    II_DSUB	= 41,
    II_DSUBU	= 42,
    II_DDIVU	= 43,
    II_ABS	= 44,
    II_ADD_D	= 45,
    II_ADD_S	= 46,
    II_DIV_D	= 47,
    II_DIV_S	= 48,
    II_FLOOR	= 49,
    II_MOV_D	= 50,
    II_MOV_S	= 51,
    II_MUL_D	= 52,
    II_MUL_S	= 53,
    II_NEG	= 54,
    II_SQRT_D	= 55,
    II_SQRT_S	= 56,
    II_SUB_D	= 57,
    II_SUB_S	= 58,
    II_LB	= 59,
    II_LBU	= 60,
    II_LD	= 61,
    II_LDC1	= 62,
    II_LDL	= 63,
    II_LDR	= 64,
    II_LDXC1	= 65,
    II_LH	= 66,
    II_LHU	= 67,
    II_LUXC1	= 68,
    II_LUI	= 69,
    II_LW	= 70,
    II_LWC1	= 71,
    II_LWL	= 72,
    II_LWR	= 73,
    II_LWU	= 74,
    II_LWXC1	= 75,
    II_MADD	= 76,
    II_MADDU	= 77,
    II_MADD_D	= 78,
    II_MADD_S	= 79,
    II_MFC1	= 80,
    II_MFHC1	= 81,
    II_MFHI_MFLO	= 82,
    II_MOVF_D	= 83,
    II_MOVF	= 84,
    II_MOVF_S	= 85,
    II_MOVN_D	= 86,
    II_MOVN	= 87,
    II_MOVN_S	= 88,
    II_MOVT_D	= 89,
    II_MOVT	= 90,
    II_MOVT_S	= 91,
    II_MOVZ_D	= 92,
    II_MOVZ	= 93,
    II_MOVZ_S	= 94,
    II_MSUB	= 95,
    II_MSUBU	= 96,
    II_MSUB_D	= 97,
    II_MSUB_S	= 98,
    II_MTC1	= 99,
    II_MTHC1	= 100,
    II_MTHI_MTLO	= 101,
    II_MUL	= 102,
    II_MULT	= 103,
    II_MULTU	= 104,
    II_NMADD_D	= 105,
    II_NMADD_S	= 106,
    II_NMSUB_D	= 107,
    II_NMSUB_S	= 108,
    II_NOR	= 109,
    II_OR	= 110,
    II_ORI	= 111,
    II_DIV	= 112,
    II_DIVU	= 113,
    II_RDHWR	= 114,
    II_ROTR	= 115,
    II_ROTRV	= 116,
    II_ROUND	= 117,
    II_RESTORE	= 118,
    II_SB	= 119,
    II_SD	= 120,
    II_SDC1	= 121,
    II_SDL	= 122,
    II_SDR	= 123,
    II_SDXC1	= 124,
    II_SEB	= 125,
    II_SEH	= 126,
    II_SEQ_SNE	= 127,
    II_SEQI_SNEI	= 128,
    II_SH	= 129,
    II_SLL	= 130,
    II_SLLV	= 131,
    II_SLT_SLTU	= 132,
    II_SLTI_SLTIU	= 133,
    II_SRA	= 134,
    II_SRAV	= 135,
    II_SRL	= 136,
    II_SRLV	= 137,
    II_SUBU	= 138,
    II_SUXC1	= 139,
    II_SW	= 140,
    II_SWC1	= 141,
    II_SWL	= 142,
    II_SWR	= 143,
    II_SWXC1	= 144,
    II_SAVE	= 145,
    II_TRUNC	= 146,
    II_XOR	= 147,
    II_XORI	= 148,
    SCHED_LIST_END = 149
  };
} // End Sched namespace
} // End Mips namespace
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Descriptors                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo197[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo279[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo280[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo281[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo282[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo283[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo284[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo285[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo286[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo287[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo288[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo289[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo290[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo291[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo292[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo293[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = FRAME_ALLOC
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ABSQ_S_PH
  { 24,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #24 = ABSQ_S_QB
  { 25,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #25 = ABSQ_S_W
  { 26,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #26 = ADD
  { 27,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #27 = ADDIUPC
  { 28,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #28 = ADDIUPC_MM
  { 29,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #29 = ADDIUPC_MMR6
  { 30,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #30 = ADDIUR1SP_MM
  { 31,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #31 = ADDIUR2_MM
  { 32,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #32 = ADDIUS5_MM
  { 33,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #33 = ADDIUSP_MM
  { 34,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #34 = ADDIU_MMR6
  { 35,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #35 = ADDQH_PH
  { 36,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #36 = ADDQH_R_PH
  { 37,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = ADDQH_R_W
  { 38,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = ADDQH_W
  { 39,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #39 = ADDQ_PH
  { 40,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #40 = ADDQ_S_PH
  { 41,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #41 = ADDQ_S_W
  { 42,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #42 = ADDSC
  { 43,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #43 = ADDS_A_B
  { 44,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #44 = ADDS_A_D
  { 45,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #45 = ADDS_A_H
  { 46,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #46 = ADDS_A_W
  { 47,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #47 = ADDS_S_B
  { 48,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #48 = ADDS_S_D
  { 49,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #49 = ADDS_S_H
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #50 = ADDS_S_W
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #51 = ADDS_U_B
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #52 = ADDS_U_D
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #53 = ADDS_U_H
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #54 = ADDS_U_W
  { 55,	3,	1,	2,	1,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #55 = ADDU16_MM
  { 56,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #56 = ADDUH_QB
  { 57,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #57 = ADDUH_R_QB
  { 58,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #58 = ADDU_MMR6
  { 59,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #59 = ADDU_PH
  { 60,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #60 = ADDU_QB
  { 61,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #61 = ADDU_S_PH
  { 62,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #62 = ADDU_S_QB
  { 63,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #63 = ADDVI_B
  { 64,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #64 = ADDVI_D
  { 65,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #65 = ADDVI_H
  { 66,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #66 = ADDVI_W
  { 67,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = ADDV_B
  { 68,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #68 = ADDV_D
  { 69,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #69 = ADDV_H
  { 70,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #70 = ADDV_W
  { 71,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #71 = ADDWC
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #72 = ADD_A_B
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = ADD_A_D
  { 74,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #74 = ADD_A_H
  { 75,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #75 = ADD_A_W
  { 76,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #76 = ADD_MM
  { 77,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #77 = ADD_MMR6
  { 78,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #78 = ADDi
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #79 = ADDi_MM
  { 80,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #80 = ADDiu
  { 81,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #81 = ADDiu_MM
  { 82,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #82 = ADDu
  { 83,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #83 = ADDu_MM
  { 84,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #84 = ADJCALLSTACKDOWN
  { 85,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #85 = ADJCALLSTACKUP
  { 86,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #86 = ALIGN
  { 87,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #87 = ALIGN_MMR6
  { 88,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #88 = ALUIPC
  { 89,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #89 = ALUIPC_MMR6
  { 90,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #90 = AND
  { 91,	3,	1,	2,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #91 = AND16_MM
  { 92,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #92 = AND64
  { 93,	3,	1,	2,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #93 = ANDI16_MM
  { 94,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #94 = ANDI_B
  { 95,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #95 = ANDI_MMR6
  { 96,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #96 = AND_MM
  { 97,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #97 = AND_MMR6
  { 98,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #98 = AND_V
  { 99,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #99 = AND_V_D_PSEUDO
  { 100,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #100 = AND_V_H_PSEUDO
  { 101,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #101 = AND_V_W_PSEUDO
  { 102,	3,	1,	4,	5,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #102 = ANDi
  { 103,	3,	1,	4,	4,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #103 = ANDi64
  { 104,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #104 = ANDi_MM
  { 105,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #105 = APPEND
  { 106,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = ASUB_S_B
  { 107,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #107 = ASUB_S_D
  { 108,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #108 = ASUB_S_H
  { 109,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = ASUB_S_W
  { 110,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #110 = ASUB_U_B
  { 111,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #111 = ASUB_U_D
  { 112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #112 = ASUB_U_H
  { 113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = ASUB_U_W
  { 114,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #114 = ATOMIC_CMP_SWAP_I16
  { 115,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #115 = ATOMIC_CMP_SWAP_I32
  { 116,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #116 = ATOMIC_CMP_SWAP_I64
  { 117,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #117 = ATOMIC_CMP_SWAP_I8
  { 118,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #118 = ATOMIC_LOAD_ADD_I16
  { 119,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #119 = ATOMIC_LOAD_ADD_I32
  { 120,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #120 = ATOMIC_LOAD_ADD_I64
  { 121,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #121 = ATOMIC_LOAD_ADD_I8
  { 122,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #122 = ATOMIC_LOAD_AND_I16
  { 123,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #123 = ATOMIC_LOAD_AND_I32
  { 124,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #124 = ATOMIC_LOAD_AND_I64
  { 125,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #125 = ATOMIC_LOAD_AND_I8
  { 126,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #126 = ATOMIC_LOAD_NAND_I16
  { 127,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #127 = ATOMIC_LOAD_NAND_I32
  { 128,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #128 = ATOMIC_LOAD_NAND_I64
  { 129,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #129 = ATOMIC_LOAD_NAND_I8
  { 130,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #130 = ATOMIC_LOAD_OR_I16
  { 131,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #131 = ATOMIC_LOAD_OR_I32
  { 132,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #132 = ATOMIC_LOAD_OR_I64
  { 133,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #133 = ATOMIC_LOAD_OR_I8
  { 134,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #134 = ATOMIC_LOAD_SUB_I16
  { 135,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #135 = ATOMIC_LOAD_SUB_I32
  { 136,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #136 = ATOMIC_LOAD_SUB_I64
  { 137,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #137 = ATOMIC_LOAD_SUB_I8
  { 138,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #138 = ATOMIC_LOAD_XOR_I16
  { 139,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #139 = ATOMIC_LOAD_XOR_I32
  { 140,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #140 = ATOMIC_LOAD_XOR_I64
  { 141,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #141 = ATOMIC_LOAD_XOR_I8
  { 142,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #142 = ATOMIC_SWAP_I16
  { 143,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #143 = ATOMIC_SWAP_I32
  { 144,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #144 = ATOMIC_SWAP_I64
  { 145,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #145 = ATOMIC_SWAP_I8
  { 146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #146 = AUI
  { 147,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #147 = AUIPC
  { 148,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #148 = AUIPC_MMR6
  { 149,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #149 = AUI_MMR6
  { 150,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #150 = AVER_S_B
  { 151,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #151 = AVER_S_D
  { 152,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #152 = AVER_S_H
  { 153,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #153 = AVER_S_W
  { 154,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #154 = AVER_U_B
  { 155,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #155 = AVER_U_D
  { 156,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #156 = AVER_U_H
  { 157,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #157 = AVER_U_W
  { 158,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #158 = AVE_S_B
  { 159,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #159 = AVE_S_D
  { 160,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #160 = AVE_S_H
  { 161,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #161 = AVE_S_W
  { 162,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #162 = AVE_U_B
  { 163,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #163 = AVE_U_D
  { 164,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #164 = AVE_U_H
  { 165,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #165 = AVE_U_W
  { 166,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #166 = AddiuRxImmX16
  { 167,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #167 = AddiuRxPcImmX16
  { 168,	3,	1,	2,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #168 = AddiuRxRxImm16
  { 169,	3,	1,	4,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #169 = AddiuRxRxImmX16
  { 170,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #170 = AddiuRxRyOffMemX16
  { 171,	1,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #171 = AddiuSpImm16
  { 172,	1,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #172 = AddiuSpImmX16
  { 173,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #173 = AdduRxRyRz16
  { 174,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #174 = AndRxRxRy16
  { 175,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #175 = B
  { 176,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #176 = B16_MM
  { 177,	3,	1,	4,	8,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #177 = BADDu
  { 178,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #178 = BAL
  { 179,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #179 = BALC
  { 180,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #180 = BALC_MMR6
  { 181,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #181 = BALIGN
  { 182,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #182 = BAL_BR
  { 183,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #183 = BBIT0
  { 184,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #184 = BBIT032
  { 185,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #185 = BBIT1
  { 186,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #186 = BBIT132
  { 187,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #187 = BC
  { 188,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #188 = BC1EQZ
  { 189,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #189 = BC1F
  { 190,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #190 = BC1FL
  { 191,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #191 = BC1F_MM
  { 192,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #192 = BC1NEZ
  { 193,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #193 = BC1T
  { 194,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #194 = BC1TL
  { 195,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #195 = BC1T_MM
  { 196,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #196 = BC2EQZ
  { 197,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #197 = BC2NEZ
  { 198,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #198 = BCLRI_B
  { 199,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #199 = BCLRI_D
  { 200,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #200 = BCLRI_H
  { 201,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #201 = BCLRI_W
  { 202,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #202 = BCLR_B
  { 203,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #203 = BCLR_D
  { 204,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #204 = BCLR_H
  { 205,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #205 = BCLR_W
  { 206,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #206 = BC_MMR6
  { 207,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #207 = BEQ
  { 208,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #208 = BEQ64
  { 209,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #209 = BEQC
  { 210,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #210 = BEQL
  { 211,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #211 = BEQZ16_MM
  { 212,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #212 = BEQZALC
  { 213,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #213 = BEQZALC_MMR6
  { 214,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #214 = BEQZC
  { 215,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #215 = BEQZC_MM
  { 216,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #216 = BEQ_MM
  { 217,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #217 = BGE
  { 218,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #218 = BGEC
  { 219,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #219 = BGEU
  { 220,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #220 = BGEUC
  { 221,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #221 = BGEZ
  { 222,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #222 = BGEZ64
  { 223,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #223 = BGEZAL
  { 224,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #224 = BGEZALC
  { 225,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #225 = BGEZALC_MMR6
  { 226,	2,	0,	4,	7,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #226 = BGEZALL
  { 227,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #227 = BGEZALS_MM
  { 228,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #228 = BGEZAL_MM
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #229 = BGEZC
  { 230,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #230 = BGEZL
  { 231,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #231 = BGEZ_MM
  { 232,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #232 = BGT
  { 233,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #233 = BGTU
  { 234,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #234 = BGTZ
  { 235,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #235 = BGTZ64
  { 236,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #236 = BGTZALC
  { 237,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #237 = BGTZALC_MMR6
  { 238,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #238 = BGTZC
  { 239,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #239 = BGTZL
  { 240,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #240 = BGTZ_MM
  { 241,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #241 = BINSLI_B
  { 242,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #242 = BINSLI_D
  { 243,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #243 = BINSLI_H
  { 244,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #244 = BINSLI_W
  { 245,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #245 = BINSL_B
  { 246,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #246 = BINSL_D
  { 247,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #247 = BINSL_H
  { 248,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #248 = BINSL_W
  { 249,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #249 = BINSRI_B
  { 250,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #250 = BINSRI_D
  { 251,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #251 = BINSRI_H
  { 252,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #252 = BINSRI_W
  { 253,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #253 = BINSR_B
  { 254,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #254 = BINSR_D
  { 255,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #255 = BINSR_H
  { 256,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #256 = BINSR_W
  { 257,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #257 = BITREV
  { 258,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #258 = BITSWAP
  { 259,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #259 = BITSWAP_MMR6
  { 260,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #260 = BLE
  { 261,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #261 = BLEU
  { 262,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #262 = BLEZ
  { 263,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #263 = BLEZ64
  { 264,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #264 = BLEZALC
  { 265,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #265 = BLEZALC_MMR6
  { 266,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #266 = BLEZC
  { 267,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #267 = BLEZL
  { 268,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #268 = BLEZ_MM
  { 269,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #269 = BLT
  { 270,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #270 = BLTC
  { 271,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #271 = BLTU
  { 272,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #272 = BLTUC
  { 273,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #273 = BLTZ
  { 274,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #274 = BLTZ64
  { 275,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #275 = BLTZAL
  { 276,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #276 = BLTZALC
  { 277,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #277 = BLTZALC_MMR6
  { 278,	2,	0,	4,	7,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #278 = BLTZALL
  { 279,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #279 = BLTZALS_MM
  { 280,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #280 = BLTZAL_MM
  { 281,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #281 = BLTZC
  { 282,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #282 = BLTZL
  { 283,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #283 = BLTZ_MM
  { 284,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #284 = BMNZI_B
  { 285,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #285 = BMNZ_V
  { 286,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #286 = BMZI_B
  { 287,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #287 = BMZ_V
  { 288,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #288 = BNE
  { 289,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #289 = BNE64
  { 290,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #290 = BNEC
  { 291,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #291 = BNEGI_B
  { 292,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #292 = BNEGI_D
  { 293,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #293 = BNEGI_H
  { 294,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #294 = BNEGI_W
  { 295,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #295 = BNEG_B
  { 296,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #296 = BNEG_D
  { 297,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #297 = BNEG_H
  { 298,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #298 = BNEG_W
  { 299,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #299 = BNEL
  { 300,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #300 = BNEZ16_MM
  { 301,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #301 = BNEZALC
  { 302,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #302 = BNEZALC_MMR6
  { 303,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #303 = BNEZC
  { 304,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #304 = BNEZC_MM
  { 305,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #305 = BNE_MM
  { 306,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #306 = BNVC
  { 307,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #307 = BNZ_B
  { 308,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63, -1 ,nullptr },  // Inst #308 = BNZ_D
  { 309,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64, -1 ,nullptr },  // Inst #309 = BNZ_H
  { 310,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #310 = BNZ_V
  { 311,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #311 = BNZ_W
  { 312,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #312 = BOVC
  { 313,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #313 = BPOSGE32
  { 314,	1,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #314 = BPOSGE32_PSEUDO
  { 315,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #315 = BREAK
  { 316,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #316 = BREAK16_MM
  { 317,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #317 = BREAK_MM
  { 318,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #318 = BREAK_MMR6
  { 319,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #319 = BSELI_B
  { 320,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #320 = BSEL_D_PSEUDO
  { 321,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #321 = BSEL_FD_PSEUDO
  { 322,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #322 = BSEL_FW_PSEUDO
  { 323,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #323 = BSEL_H_PSEUDO
  { 324,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #324 = BSEL_V
  { 325,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #325 = BSEL_W_PSEUDO
  { 326,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #326 = BSETI_B
  { 327,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #327 = BSETI_D
  { 328,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #328 = BSETI_H
  { 329,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #329 = BSETI_W
  { 330,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #330 = BSET_B
  { 331,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #331 = BSET_D
  { 332,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #332 = BSET_H
  { 333,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #333 = BSET_W
  { 334,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #334 = BZ_B
  { 335,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63, -1 ,nullptr },  // Inst #335 = BZ_D
  { 336,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64, -1 ,nullptr },  // Inst #336 = BZ_H
  { 337,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #337 = BZ_V
  { 338,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #338 = BZ_W
  { 339,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #339 = B_MM_Pseudo
  { 340,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #340 = BeqImm
  { 341,	2,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #341 = BeqzRxImm16
  { 342,	2,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #342 = BeqzRxImmX16
  { 343,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #343 = Bimm16
  { 344,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #344 = BimmX16
  { 345,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #345 = BneImm
  { 346,	2,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #346 = BnezRxImm16
  { 347,	2,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #347 = BnezRxImmX16
  { 348,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #348 = Break16
  { 349,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #349 = Bteqz16
  { 350,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #350 = BteqzT8CmpX16
  { 351,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #351 = BteqzT8CmpiX16
  { 352,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #352 = BteqzT8SltX16
  { 353,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #353 = BteqzT8SltiX16
  { 354,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #354 = BteqzT8SltiuX16
  { 355,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #355 = BteqzT8SltuX16
  { 356,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #356 = BteqzX16
  { 357,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #357 = Btnez16
  { 358,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #358 = BtnezT8CmpX16
  { 359,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #359 = BtnezT8CmpiX16
  { 360,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #360 = BtnezT8SltX16
  { 361,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #361 = BtnezT8SltiX16
  { 362,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #362 = BtnezT8SltiuX16
  { 363,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #363 = BtnezT8SltuX16
  { 364,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #364 = BtnezX16
  { 365,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #365 = BuildPairF64
  { 366,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #366 = BuildPairF64_64
  { 367,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #367 = CACHE
  { 368,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #368 = CACHE_MM
  { 369,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #369 = CACHE_MMR6
  { 370,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #370 = CACHE_R6
  { 371,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #371 = CEIL_L_D64
  { 372,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #372 = CEIL_L_S
  { 373,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #373 = CEIL_W_D32
  { 374,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #374 = CEIL_W_D64
  { 375,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #375 = CEIL_W_MM
  { 376,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #376 = CEIL_W_S
  { 377,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #377 = CEIL_W_S_MM
  { 378,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #378 = CEQI_B
  { 379,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #379 = CEQI_D
  { 380,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #380 = CEQI_H
  { 381,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #381 = CEQI_W
  { 382,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #382 = CEQ_B
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #383 = CEQ_D
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #384 = CEQ_H
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #385 = CEQ_W
  { 386,	2,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #386 = CFC1
  { 387,	2,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #387 = CFC1_MM
  { 388,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #388 = CFCMSA
  { 389,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #389 = CINS
  { 390,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #390 = CINS32
  { 391,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #391 = CLASS_D
  { 392,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #392 = CLASS_S
  { 393,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #393 = CLEI_S_B
  { 394,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #394 = CLEI_S_D
  { 395,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #395 = CLEI_S_H
  { 396,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #396 = CLEI_S_W
  { 397,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #397 = CLEI_U_B
  { 398,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #398 = CLEI_U_D
  { 399,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #399 = CLEI_U_H
  { 400,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #400 = CLEI_U_W
  { 401,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #401 = CLE_S_B
  { 402,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #402 = CLE_S_D
  { 403,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #403 = CLE_S_H
  { 404,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #404 = CLE_S_W
  { 405,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #405 = CLE_U_B
  { 406,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #406 = CLE_U_D
  { 407,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #407 = CLE_U_H
  { 408,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #408 = CLE_U_W
  { 409,	2,	1,	4,	11,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #409 = CLO
  { 410,	2,	1,	4,	11,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #410 = CLO_MM
  { 411,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #411 = CLO_MMR6
  { 412,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #412 = CLO_R6
  { 413,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #413 = CLTI_S_B
  { 414,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #414 = CLTI_S_D
  { 415,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #415 = CLTI_S_H
  { 416,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #416 = CLTI_S_W
  { 417,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #417 = CLTI_U_B
  { 418,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #418 = CLTI_U_D
  { 419,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #419 = CLTI_U_H
  { 420,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #420 = CLTI_U_W
  { 421,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #421 = CLT_S_B
  { 422,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #422 = CLT_S_D
  { 423,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #423 = CLT_S_H
  { 424,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #424 = CLT_S_W
  { 425,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #425 = CLT_U_B
  { 426,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #426 = CLT_U_D
  { 427,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #427 = CLT_U_H
  { 428,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #428 = CLT_U_W
  { 429,	2,	1,	4,	12,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #429 = CLZ
  { 430,	2,	1,	4,	12,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #430 = CLZ_MM
  { 431,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #431 = CLZ_MMR6
  { 432,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #432 = CLZ_R6
  { 433,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #433 = CMPGDU_EQ_QB
  { 434,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #434 = CMPGDU_LE_QB
  { 435,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #435 = CMPGDU_LT_QB
  { 436,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #436 = CMPGU_EQ_QB
  { 437,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #437 = CMPGU_LE_QB
  { 438,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #438 = CMPGU_LT_QB
  { 439,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #439 = CMPU_EQ_QB
  { 440,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #440 = CMPU_LE_QB
  { 441,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #441 = CMPU_LT_QB
  { 442,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #442 = CMP_EQ_D
  { 443,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #443 = CMP_EQ_PH
  { 444,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #444 = CMP_EQ_S
  { 445,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #445 = CMP_F_D
  { 446,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #446 = CMP_F_S
  { 447,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #447 = CMP_LE_D
  { 448,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #448 = CMP_LE_PH
  { 449,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #449 = CMP_LE_S
  { 450,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #450 = CMP_LT_D
  { 451,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #451 = CMP_LT_PH
  { 452,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #452 = CMP_LT_S
  { 453,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #453 = CMP_SAF_D
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #454 = CMP_SAF_S
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #455 = CMP_SEQ_D
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #456 = CMP_SEQ_S
  { 457,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #457 = CMP_SLE_D
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #458 = CMP_SLE_S
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #459 = CMP_SLT_D
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #460 = CMP_SLT_S
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #461 = CMP_SUEQ_D
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #462 = CMP_SUEQ_S
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #463 = CMP_SULE_D
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #464 = CMP_SULE_S
  { 465,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #465 = CMP_SULT_D
  { 466,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #466 = CMP_SULT_S
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #467 = CMP_SUN_D
  { 468,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #468 = CMP_SUN_S
  { 469,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #469 = CMP_UEQ_D
  { 470,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #470 = CMP_UEQ_S
  { 471,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #471 = CMP_ULE_D
  { 472,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #472 = CMP_ULE_S
  { 473,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #473 = CMP_ULT_D
  { 474,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #474 = CMP_ULT_S
  { 475,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #475 = CMP_UN_D
  { 476,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #476 = CMP_UN_S
  { 477,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #477 = CONSTPOOL_ENTRY
  { 478,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #478 = COPY_FD_PSEUDO
  { 479,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #479 = COPY_FW_PSEUDO
  { 480,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #480 = COPY_S_B
  { 481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #481 = COPY_S_D
  { 482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #482 = COPY_S_H
  { 483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #483 = COPY_S_W
  { 484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #484 = COPY_U_B
  { 485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #485 = COPY_U_D
  { 486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #486 = COPY_U_H
  { 487,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #487 = COPY_U_W
  { 488,	2,	1,	4,	13,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #488 = CTC1
  { 489,	2,	1,	4,	13,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #489 = CTC1_MM
  { 490,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #490 = CTCMSA
  { 491,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #491 = CVT_D32_S
  { 492,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #492 = CVT_D32_W
  { 493,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #493 = CVT_D32_W_MM
  { 494,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #494 = CVT_D64_L
  { 495,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #495 = CVT_D64_S
  { 496,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #496 = CVT_D64_W
  { 497,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #497 = CVT_D_S_MM
  { 498,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #498 = CVT_L_D64
  { 499,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #499 = CVT_L_D64_MM
  { 500,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #500 = CVT_L_S
  { 501,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #501 = CVT_L_S_MM
  { 502,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #502 = CVT_S_D32
  { 503,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #503 = CVT_S_D32_MM
  { 504,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #504 = CVT_S_D64
  { 505,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #505 = CVT_S_L
  { 506,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #506 = CVT_S_W
  { 507,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #507 = CVT_S_W_MM
  { 508,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #508 = CVT_W_D32
  { 509,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #509 = CVT_W_D64
  { 510,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #510 = CVT_W_MM
  { 511,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #511 = CVT_W_S
  { 512,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #512 = CVT_W_S_MM
  { 513,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #513 = C_EQ_D32
  { 514,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #514 = C_EQ_D64
  { 515,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #515 = C_EQ_S
  { 516,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #516 = C_F_D32
  { 517,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #517 = C_F_D64
  { 518,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #518 = C_F_S
  { 519,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #519 = C_LE_D32
  { 520,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #520 = C_LE_D64
  { 521,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #521 = C_LE_S
  { 522,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #522 = C_LT_D32
  { 523,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #523 = C_LT_D64
  { 524,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #524 = C_LT_S
  { 525,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #525 = C_NGE_D32
  { 526,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #526 = C_NGE_D64
  { 527,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #527 = C_NGE_S
  { 528,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #528 = C_NGLE_D32
  { 529,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #529 = C_NGLE_D64
  { 530,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #530 = C_NGLE_S
  { 531,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #531 = C_NGL_D32
  { 532,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #532 = C_NGL_D64
  { 533,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #533 = C_NGL_S
  { 534,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #534 = C_NGT_D32
  { 535,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #535 = C_NGT_D64
  { 536,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #536 = C_NGT_S
  { 537,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #537 = C_OLE_D32
  { 538,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #538 = C_OLE_D64
  { 539,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #539 = C_OLE_S
  { 540,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #540 = C_OLT_D32
  { 541,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #541 = C_OLT_D64
  { 542,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #542 = C_OLT_S
  { 543,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #543 = C_SEQ_D32
  { 544,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #544 = C_SEQ_D64
  { 545,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #545 = C_SEQ_S
  { 546,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #546 = C_SF_D32
  { 547,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #547 = C_SF_D64
  { 548,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #548 = C_SF_S
  { 549,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #549 = C_UEQ_D32
  { 550,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #550 = C_UEQ_D64
  { 551,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #551 = C_UEQ_S
  { 552,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #552 = C_ULE_D32
  { 553,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #553 = C_ULE_D64
  { 554,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #554 = C_ULE_S
  { 555,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #555 = C_ULT_D32
  { 556,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #556 = C_ULT_D64
  { 557,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #557 = C_ULT_S
  { 558,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #558 = C_UN_D32
  { 559,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #559 = C_UN_D64
  { 560,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #560 = C_UN_S
  { 561,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #561 = CmpRxRy16
  { 562,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #562 = CmpiRxImm16
  { 563,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #563 = CmpiRxImmX16
  { 564,	1,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #564 = Constant32
  { 565,	3,	1,	4,	17,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #565 = DADD
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #566 = DADDi
  { 567,	3,	1,	4,	18,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #567 = DADDiu
  { 568,	3,	1,	4,	19,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #568 = DADDu
  { 569,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #569 = DAHI
  { 570,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #570 = DALIGN
  { 571,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #571 = DATI
  { 572,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #572 = DAUI
  { 573,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #573 = DBITSWAP
  { 574,	2,	1,	4,	11,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #574 = DCLO
  { 575,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #575 = DCLO_R6
  { 576,	2,	1,	4,	12,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #576 = DCLZ
  { 577,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #577 = DCLZ_R6
  { 578,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #578 = DDIV
  { 579,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #579 = DDIVU
  { 580,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #580 = DERET
  { 581,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #581 = DERET_MM
  { 582,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #582 = DEXT
  { 583,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #583 = DEXTM
  { 584,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #584 = DEXTU
  { 585,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #585 = DI
  { 586,	5,	1,	4,	21,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #586 = DINS
  { 587,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #587 = DINSM
  { 588,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #588 = DINSU
  { 589,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #589 = DIV
  { 590,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #590 = DIVU
  { 591,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #591 = DIVU_MMR6
  { 592,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #592 = DIV_MMR6
  { 593,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #593 = DIV_S_B
  { 594,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #594 = DIV_S_D
  { 595,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #595 = DIV_S_H
  { 596,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #596 = DIV_S_W
  { 597,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #597 = DIV_U_B
  { 598,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #598 = DIV_U_D
  { 599,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #599 = DIV_U_H
  { 600,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #600 = DIV_U_W
  { 601,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #601 = DI_MM
  { 602,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #602 = DLSA
  { 603,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #603 = DLSA_R6
  { 604,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #604 = DMFC0
  { 605,	2,	1,	4,	22,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #605 = DMFC1
  { 606,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #606 = DMFC2
  { 607,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #607 = DMFC2_OCTEON
  { 608,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #608 = DMOD
  { 609,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #609 = DMODU
  { 610,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #610 = DMTC0
  { 611,	2,	1,	4,	23,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #611 = DMTC1
  { 612,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #612 = DMTC2
  { 613,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #613 = DMTC2_OCTEON
  { 614,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #614 = DMUH
  { 615,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #615 = DMUHU
  { 616,	3,	1,	4,	24,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo32, -1 ,nullptr },  // Inst #616 = DMUL
  { 617,	2,	0,	4,	25,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #617 = DMULT
  { 618,	2,	0,	4,	26,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #618 = DMULTu
  { 619,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #619 = DMULU
  { 620,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #620 = DMUL_R6
  { 621,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #621 = DOTP_S_D
  { 622,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #622 = DOTP_S_H
  { 623,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #623 = DOTP_S_W
  { 624,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #624 = DOTP_U_D
  { 625,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #625 = DOTP_U_H
  { 626,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #626 = DOTP_U_W
  { 627,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #627 = DPADD_S_D
  { 628,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #628 = DPADD_S_H
  { 629,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #629 = DPADD_S_W
  { 630,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #630 = DPADD_U_D
  { 631,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #631 = DPADD_U_H
  { 632,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #632 = DPADD_U_W
  { 633,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #633 = DPAQX_SA_W_PH
  { 634,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #634 = DPAQX_S_W_PH
  { 635,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #635 = DPAQ_SA_L_W
  { 636,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #636 = DPAQ_S_W_PH
  { 637,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #637 = DPAU_H_QBL
  { 638,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #638 = DPAU_H_QBR
  { 639,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #639 = DPAX_W_PH
  { 640,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #640 = DPA_W_PH
  { 641,	2,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #641 = DPOP
  { 642,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #642 = DPSQX_SA_W_PH
  { 643,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #643 = DPSQX_S_W_PH
  { 644,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #644 = DPSQ_SA_L_W
  { 645,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #645 = DPSQ_S_W_PH
  { 646,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #646 = DPSUB_S_D
  { 647,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #647 = DPSUB_S_H
  { 648,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #648 = DPSUB_S_W
  { 649,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #649 = DPSUB_U_D
  { 650,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #650 = DPSUB_U_H
  { 651,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #651 = DPSUB_U_W
  { 652,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #652 = DPSU_H_QBL
  { 653,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #653 = DPSU_H_QBR
  { 654,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #654 = DPSX_W_PH
  { 655,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #655 = DPS_W_PH
  { 656,	3,	1,	4,	28,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #656 = DROTR
  { 657,	3,	1,	4,	29,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #657 = DROTR32
  { 658,	3,	1,	4,	30,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #658 = DROTRV
  { 659,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #659 = DSBH
  { 660,	2,	0,	4,	31,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #660 = DSDIV
  { 661,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #661 = DSHD
  { 662,	3,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #662 = DSLL
  { 663,	3,	1,	4,	33,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #663 = DSLL32
  { 664,	2,	1,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #664 = DSLL64_32
  { 665,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #665 = DSLLV
  { 666,	3,	1,	4,	35,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #666 = DSRA
  { 667,	3,	1,	4,	36,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #667 = DSRA32
  { 668,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #668 = DSRAV
  { 669,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #669 = DSRL
  { 670,	3,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #670 = DSRL32
  { 671,	3,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #671 = DSRLV
  { 672,	3,	1,	4,	41,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #672 = DSUB
  { 673,	3,	1,	4,	42,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #673 = DSUBu
  { 674,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #674 = DUDIV
  { 675,	2,	0,	2,	6,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #675 = DivRxRy16
  { 676,	2,	0,	2,	6,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #676 = DivuRxRy16
  { 677,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #677 = EHB
  { 678,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #678 = EHB_MM
  { 679,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #679 = EHB_MMR6
  { 680,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #680 = EI
  { 681,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #681 = EI_MM
  { 682,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #682 = EI_MMR6
  { 683,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #683 = ERET
  { 684,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #684 = ERETNC_MMR6
  { 685,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #685 = ERET_MM
  { 686,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #686 = ERET_MMR6
  { 687,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #687 = EXT
  { 688,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo118, -1 ,nullptr },  // Inst #688 = EXTP
  { 689,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo118, -1 ,nullptr },  // Inst #689 = EXTPDP
  { 690,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo119, -1 ,nullptr },  // Inst #690 = EXTPDPV
  { 691,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo119, -1 ,nullptr },  // Inst #691 = EXTPV
  { 692,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #692 = EXTRV_RS_W
  { 693,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #693 = EXTRV_R_W
  { 694,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #694 = EXTRV_S_H
  { 695,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #695 = EXTRV_W
  { 696,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #696 = EXTR_RS_W
  { 697,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #697 = EXTR_R_W
  { 698,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #698 = EXTR_S_H
  { 699,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #699 = EXTR_W
  { 700,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #700 = EXTS
  { 701,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #701 = EXTS32
  { 702,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #702 = EXT_MM
  { 703,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #703 = ExtractElementF64
  { 704,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #704 = ExtractElementF64_64
  { 705,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #705 = FABS_D
  { 706,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #706 = FABS_D32
  { 707,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #707 = FABS_D64
  { 708,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #708 = FABS_MM
  { 709,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #709 = FABS_S
  { 710,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #710 = FABS_S_MM
  { 711,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #711 = FABS_W
  { 712,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #712 = FADD_D
  { 713,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #713 = FADD_D32
  { 714,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #714 = FADD_D64
  { 715,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #715 = FADD_MM
  { 716,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #716 = FADD_S
  { 717,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #717 = FADD_S_MM
  { 718,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #718 = FADD_W
  { 719,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #719 = FCAF_D
  { 720,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #720 = FCAF_W
  { 721,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #721 = FCEQ_D
  { 722,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #722 = FCEQ_W
  { 723,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #723 = FCLASS_D
  { 724,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #724 = FCLASS_W
  { 725,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #725 = FCLE_D
  { 726,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #726 = FCLE_W
  { 727,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #727 = FCLT_D
  { 728,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #728 = FCLT_W
  { 729,	3,	0,	4,	15,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #729 = FCMP_D32
  { 730,	3,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #730 = FCMP_D32_MM
  { 731,	3,	0,	4,	15,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo128, -1 ,nullptr },  // Inst #731 = FCMP_D64
  { 732,	3,	0,	4,	16,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #732 = FCMP_S32
  { 733,	3,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #733 = FCMP_S32_MM
  { 734,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #734 = FCNE_D
  { 735,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #735 = FCNE_W
  { 736,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #736 = FCOR_D
  { 737,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #737 = FCOR_W
  { 738,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #738 = FCUEQ_D
  { 739,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #739 = FCUEQ_W
  { 740,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #740 = FCULE_D
  { 741,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #741 = FCULE_W
  { 742,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #742 = FCULT_D
  { 743,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #743 = FCULT_W
  { 744,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #744 = FCUNE_D
  { 745,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #745 = FCUNE_W
  { 746,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #746 = FCUN_D
  { 747,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #747 = FCUN_W
  { 748,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #748 = FDIV_D
  { 749,	3,	1,	4,	47,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #749 = FDIV_D32
  { 750,	3,	1,	4,	47,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #750 = FDIV_D64
  { 751,	3,	1,	4,	47,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #751 = FDIV_MM
  { 752,	3,	1,	4,	48,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #752 = FDIV_S
  { 753,	3,	1,	4,	48,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #753 = FDIV_S_MM
  { 754,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #754 = FDIV_W
  { 755,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #755 = FEXDO_H
  { 756,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #756 = FEXDO_W
  { 757,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #757 = FEXP2_D
  { 758,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #758 = FEXP2_D_1_PSEUDO
  { 759,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #759 = FEXP2_W
  { 760,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #760 = FEXP2_W_1_PSEUDO
  { 761,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #761 = FEXUPL_D
  { 762,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #762 = FEXUPL_W
  { 763,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #763 = FEXUPR_D
  { 764,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #764 = FEXUPR_W
  { 765,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #765 = FFINT_S_D
  { 766,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #766 = FFINT_S_W
  { 767,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #767 = FFINT_U_D
  { 768,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #768 = FFINT_U_W
  { 769,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #769 = FFQL_D
  { 770,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #770 = FFQL_W
  { 771,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #771 = FFQR_D
  { 772,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #772 = FFQR_W
  { 773,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #773 = FILL_B
  { 774,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #774 = FILL_D
  { 775,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #775 = FILL_FD_PSEUDO
  { 776,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #776 = FILL_FW_PSEUDO
  { 777,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #777 = FILL_H
  { 778,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #778 = FILL_W
  { 779,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #779 = FLOG2_D
  { 780,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #780 = FLOG2_W
  { 781,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #781 = FLOOR_L_D64
  { 782,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #782 = FLOOR_L_S
  { 783,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #783 = FLOOR_W_D32
  { 784,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #784 = FLOOR_W_D64
  { 785,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #785 = FLOOR_W_MM
  { 786,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #786 = FLOOR_W_S
  { 787,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #787 = FLOOR_W_S_MM
  { 788,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #788 = FMADD_D
  { 789,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #789 = FMADD_W
  { 790,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #790 = FMAX_A_D
  { 791,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #791 = FMAX_A_W
  { 792,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #792 = FMAX_D
  { 793,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #793 = FMAX_W
  { 794,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #794 = FMIN_A_D
  { 795,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #795 = FMIN_A_W
  { 796,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #796 = FMIN_D
  { 797,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #797 = FMIN_W
  { 798,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #798 = FMOV_D32
  { 799,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #799 = FMOV_D32_MM
  { 800,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #800 = FMOV_D64
  { 801,	2,	1,	4,	51,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #801 = FMOV_S
  { 802,	2,	1,	4,	51,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #802 = FMOV_S_MM
  { 803,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #803 = FMSUB_D
  { 804,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #804 = FMSUB_W
  { 805,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #805 = FMUL_D
  { 806,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #806 = FMUL_D32
  { 807,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #807 = FMUL_D64
  { 808,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #808 = FMUL_MM
  { 809,	3,	1,	4,	53,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #809 = FMUL_S
  { 810,	3,	1,	4,	53,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #810 = FMUL_S_MM
  { 811,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #811 = FMUL_W
  { 812,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #812 = FNEG_D32
  { 813,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #813 = FNEG_D64
  { 814,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #814 = FNEG_MM
  { 815,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #815 = FNEG_S
  { 816,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #816 = FNEG_S_MM
  { 817,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #817 = FRCP_D
  { 818,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #818 = FRCP_W
  { 819,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #819 = FRINT_D
  { 820,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #820 = FRINT_W
  { 821,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #821 = FRSQRT_D
  { 822,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #822 = FRSQRT_W
  { 823,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #823 = FSAF_D
  { 824,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #824 = FSAF_W
  { 825,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #825 = FSEQ_D
  { 826,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #826 = FSEQ_W
  { 827,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #827 = FSLE_D
  { 828,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #828 = FSLE_W
  { 829,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #829 = FSLT_D
  { 830,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #830 = FSLT_W
  { 831,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #831 = FSNE_D
  { 832,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #832 = FSNE_W
  { 833,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #833 = FSOR_D
  { 834,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #834 = FSOR_W
  { 835,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #835 = FSQRT_D
  { 836,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #836 = FSQRT_D32
  { 837,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #837 = FSQRT_D64
  { 838,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #838 = FSQRT_MM
  { 839,	2,	1,	4,	56,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #839 = FSQRT_S
  { 840,	2,	1,	4,	56,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #840 = FSQRT_S_MM
  { 841,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #841 = FSQRT_W
  { 842,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #842 = FSUB_D
  { 843,	3,	1,	4,	57,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #843 = FSUB_D32
  { 844,	3,	1,	4,	57,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #844 = FSUB_D64
  { 845,	3,	1,	4,	57,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #845 = FSUB_MM
  { 846,	3,	1,	4,	58,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #846 = FSUB_S
  { 847,	3,	1,	4,	58,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #847 = FSUB_S_MM
  { 848,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #848 = FSUB_W
  { 849,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #849 = FSUEQ_D
  { 850,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #850 = FSUEQ_W
  { 851,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #851 = FSULE_D
  { 852,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #852 = FSULE_W
  { 853,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #853 = FSULT_D
  { 854,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #854 = FSULT_W
  { 855,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #855 = FSUNE_D
  { 856,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #856 = FSUNE_W
  { 857,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #857 = FSUN_D
  { 858,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #858 = FSUN_W
  { 859,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #859 = FTINT_S_D
  { 860,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #860 = FTINT_S_W
  { 861,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #861 = FTINT_U_D
  { 862,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #862 = FTINT_U_W
  { 863,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #863 = FTQ_H
  { 864,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #864 = FTQ_W
  { 865,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #865 = FTRUNC_S_D
  { 866,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #866 = FTRUNC_S_W
  { 867,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #867 = FTRUNC_U_D
  { 868,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #868 = FTRUNC_U_W
  { 869,	4,	2,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #869 = GotPrologue16
  { 870,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #870 = HADD_S_D
  { 871,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #871 = HADD_S_H
  { 872,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #872 = HADD_S_W
  { 873,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #873 = HADD_U_D
  { 874,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #874 = HADD_U_H
  { 875,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #875 = HADD_U_W
  { 876,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #876 = HSUB_S_D
  { 877,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #877 = HSUB_S_H
  { 878,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #878 = HSUB_S_W
  { 879,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #879 = HSUB_U_D
  { 880,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #880 = HSUB_U_H
  { 881,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #881 = HSUB_U_W
  { 882,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #882 = ILVEV_B
  { 883,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #883 = ILVEV_D
  { 884,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #884 = ILVEV_H
  { 885,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #885 = ILVEV_W
  { 886,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #886 = ILVL_B
  { 887,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #887 = ILVL_D
  { 888,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #888 = ILVL_H
  { 889,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #889 = ILVL_W
  { 890,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #890 = ILVOD_B
  { 891,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #891 = ILVOD_D
  { 892,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #892 = ILVOD_H
  { 893,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #893 = ILVOD_W
  { 894,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #894 = ILVR_B
  { 895,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #895 = ILVR_D
  { 896,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #896 = ILVR_H
  { 897,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #897 = ILVR_W
  { 898,	5,	1,	4,	21,	0, 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #898 = INS
  { 899,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #899 = INSERT_B
  { 900,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #900 = INSERT_B_VIDX64_PSEUDO
  { 901,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #901 = INSERT_B_VIDX_PSEUDO
  { 902,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #902 = INSERT_D
  { 903,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #903 = INSERT_D_VIDX64_PSEUDO
  { 904,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #904 = INSERT_D_VIDX_PSEUDO
  { 905,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #905 = INSERT_FD_PSEUDO
  { 906,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo149, -1 ,nullptr },  // Inst #906 = INSERT_FD_VIDX64_PSEUDO
  { 907,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #907 = INSERT_FD_VIDX_PSEUDO
  { 908,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #908 = INSERT_FW_PSEUDO
  { 909,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo152, -1 ,nullptr },  // Inst #909 = INSERT_FW_VIDX64_PSEUDO
  { 910,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo153, -1 ,nullptr },  // Inst #910 = INSERT_FW_VIDX_PSEUDO
  { 911,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo154, -1 ,nullptr },  // Inst #911 = INSERT_H
  { 912,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo155, -1 ,nullptr },  // Inst #912 = INSERT_H_VIDX64_PSEUDO
  { 913,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo156, -1 ,nullptr },  // Inst #913 = INSERT_H_VIDX_PSEUDO
  { 914,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo157, -1 ,nullptr },  // Inst #914 = INSERT_W
  { 915,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158, -1 ,nullptr },  // Inst #915 = INSERT_W_VIDX64_PSEUDO
  { 916,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #916 = INSERT_W_VIDX_PSEUDO
  { 917,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #917 = INSV
  { 918,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo161, -1 ,nullptr },  // Inst #918 = INSVE_B
  { 919,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #919 = INSVE_D
  { 920,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo163, -1 ,nullptr },  // Inst #920 = INSVE_H
  { 921,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo164, -1 ,nullptr },  // Inst #921 = INSVE_W
  { 922,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #922 = INS_MM
  { 923,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #923 = J
  { 924,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #924 = JAL
  { 925,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #925 = JALR
  { 926,	1,	0,	2,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #926 = JALR16_MM
  { 927,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo99, -1 ,nullptr },  // Inst #927 = JALR64
  { 928,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo165, -1 ,nullptr },  // Inst #928 = JALR64Pseudo
  { 929,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #929 = JALRPseudo
  { 930,	1,	0,	2,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #930 = JALRS16_MM
  { 931,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #931 = JALRS_MM
  { 932,	2,	1,	4,	0,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #932 = JALR_HB
  { 933,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #933 = JALR_MM
  { 934,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #934 = JALS_MM
  { 935,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #935 = JALX
  { 936,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #936 = JALX_MM
  { 937,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #937 = JAL_MM
  { 938,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15, -1 ,nullptr },  // Inst #938 = JIALC
  { 939,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15, -1 ,nullptr },  // Inst #939 = JIALC_MMR6
  { 940,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15, -1 ,nullptr },  // Inst #940 = JIC
  { 941,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15, -1 ,nullptr },  // Inst #941 = JIC_MMR6
  { 942,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #942 = JR
  { 943,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #943 = JR16_MM
  { 944,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #944 = JR64
  { 945,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #945 = JRADDIUSP
  { 946,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #946 = JRC16_MM
  { 947,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #947 = JR_HB
  { 948,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #948 = JR_HB_R6
  { 949,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #949 = JR_MM
  { 950,	1,	0,	4,	7,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #950 = J_MM
  { 951,	1,	0,	6,	6,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #951 = Jal16
  { 952,	1,	0,	6,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #952 = JalB16
  { 953,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #953 = JalOneReg
  { 954,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #954 = JalTwoReg
  { 955,	0,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #955 = JrRa16
  { 956,	0,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #956 = JrcRa16
  { 957,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #957 = JrcRx16
  { 958,	1,	0,	2,	7,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo166, -1 ,nullptr },  // Inst #958 = JumpLinkReg16
  { 959,	3,	1,	4,	59,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #959 = LB
  { 960,	3,	1,	4,	59,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #960 = LB64
  { 961,	3,	1,	2,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #961 = LBU16_MM
  { 962,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #962 = LBUX
  { 963,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #963 = LB_MM
  { 964,	3,	1,	4,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #964 = LBu
  { 965,	3,	1,	4,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #965 = LBu64
  { 966,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #966 = LBu_MM
  { 967,	3,	1,	4,	61,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #967 = LD
  { 968,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #968 = LDC1
  { 969,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #969 = LDC164
  { 970,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #970 = LDC1_MM
  { 971,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #971 = LDC2
  { 972,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #972 = LDC2_R6
  { 973,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #973 = LDC3
  { 974,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #974 = LDI_B
  { 975,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #975 = LDI_D
  { 976,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #976 = LDI_H
  { 977,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #977 = LDI_W
  { 978,	4,	1,	4,	63,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #978 = LDL
  { 979,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #979 = LDPC
  { 980,	4,	1,	4,	64,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #980 = LDR
  { 981,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #981 = LDXC1
  { 982,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #982 = LDXC164
  { 983,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #983 = LD_B
  { 984,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #984 = LD_D
  { 985,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #985 = LD_H
  { 986,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #986 = LD_W
  { 987,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #987 = LEA_ADDiu
  { 988,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #988 = LEA_ADDiu64
  { 989,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #989 = LEA_ADDiu_MM
  { 990,	3,	1,	4,	66,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #990 = LH
  { 991,	3,	1,	4,	66,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #991 = LH64
  { 992,	3,	1,	2,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #992 = LHU16_MM
  { 993,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #993 = LHX
  { 994,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #994 = LH_MM
  { 995,	3,	1,	4,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #995 = LHu
  { 996,	3,	1,	4,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #996 = LHu64
  { 997,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #997 = LHu_MM
  { 998,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #998 = LI16_MM
  { 999,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #999 = LL
  { 1000,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1000 = LLD
  { 1001,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1001 = LLD_R6
  { 1002,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1002 = LL_MM
  { 1003,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1003 = LL_R6
  { 1004,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1004 = LOAD_ACC128
  { 1005,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1005 = LOAD_ACC64
  { 1006,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1006 = LOAD_ACC64DSP
  { 1007,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1007 = LOAD_CCOND_DSP
  { 1008,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1008 = LONG_BRANCH_ADDiu
  { 1009,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1009 = LONG_BRANCH_DADDiu
  { 1010,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1010 = LONG_BRANCH_LUi
  { 1011,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1011 = LSA
  { 1012,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1012 = LSA_MMR6
  { 1013,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1013 = LSA_R6
  { 1014,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1014 = LUXC1
  { 1015,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1015 = LUXC164
  { 1016,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1016 = LUXC1_MM
  { 1017,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1017 = LUi
  { 1018,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1018 = LUi64
  { 1019,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1019 = LUi_MM
  { 1020,	3,	1,	4,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1020 = LW
  { 1021,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1021 = LW16_MM
  { 1022,	3,	1,	4,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1022 = LW64
  { 1023,	3,	1,	4,	71,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1023 = LWC1
  { 1024,	3,	1,	4,	71,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1024 = LWC1_MM
  { 1025,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1025 = LWC2
  { 1026,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1026 = LWC2_R6
  { 1027,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1027 = LWC3
  { 1028,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1028 = LWGP_MM
  { 1029,	4,	1,	4,	72,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1029 = LWL
  { 1030,	4,	1,	4,	72,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1030 = LWL64
  { 1031,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1031 = LWL_MM
  { 1032,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1032 = LWM16_MM
  { 1033,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1033 = LWM32_MM
  { 1034,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1034 = LWM_MM
  { 1035,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1035 = LWPC
  { 1036,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1036 = LWPC_MMR6
  { 1037,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1037 = LWP_MM
  { 1038,	4,	1,	4,	73,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1038 = LWR
  { 1039,	4,	1,	4,	73,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1039 = LWR64
  { 1040,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1040 = LWR_MM
  { 1041,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1041 = LWSP_MM
  { 1042,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1042 = LWUPC
  { 1043,	3,	1,	4,	74,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1043 = LWU_MM
  { 1044,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1044 = LWX
  { 1045,	3,	1,	4,	75,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1045 = LWXC1
  { 1046,	3,	1,	4,	75,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1046 = LWXC1_MM
  { 1047,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1047 = LWXS_MM
  { 1048,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1048 = LW_MM
  { 1049,	3,	1,	4,	74,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1049 = LWu
  { 1050,	4,	1,	4,	59,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1050 = LbRxRyOffMemX16
  { 1051,	4,	1,	4,	60,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1051 = LbuRxRyOffMemX16
  { 1052,	4,	1,	4,	66,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1052 = LhRxRyOffMemX16
  { 1053,	4,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1053 = LhuRxRyOffMemX16
  { 1054,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1054 = LiRxImm16
  { 1055,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1055 = LiRxImmAlignX16
  { 1056,	2,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1056 = LiRxImmX16
  { 1057,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1057 = LoadAddrImm32
  { 1058,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1058 = LoadAddrReg32
  { 1059,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1059 = LoadImm32
  { 1060,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1060 = LoadImm64
  { 1061,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1061 = LwConstant32
  { 1062,	3,	1,	2,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1062 = LwRxPcTcp16
  { 1063,	3,	1,	4,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1063 = LwRxPcTcpX16
  { 1064,	4,	1,	4,	70,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1064 = LwRxRyOffMemX16
  { 1065,	3,	1,	4,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1065 = LwRxSpImmX16
  { 1066,	2,	0,	4,	76,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1066 = MADD
  { 1067,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1067 = MADDF_D
  { 1068,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1068 = MADDF_S
  { 1069,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1069 = MADDR_Q_H
  { 1070,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1070 = MADDR_Q_W
  { 1071,	2,	0,	4,	77,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1071 = MADDU
  { 1072,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1072 = MADDU_DSP
  { 1073,	2,	0,	4,	77,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1073 = MADDU_MM
  { 1074,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1074 = MADDV_B
  { 1075,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1075 = MADDV_D
  { 1076,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1076 = MADDV_H
  { 1077,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1077 = MADDV_W
  { 1078,	4,	1,	4,	78,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1078 = MADD_D32
  { 1079,	4,	1,	4,	78,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1079 = MADD_D32_MM
  { 1080,	4,	1,	4,	78,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1080 = MADD_D64
  { 1081,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1081 = MADD_DSP
  { 1082,	2,	0,	4,	76,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1082 = MADD_MM
  { 1083,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1083 = MADD_Q_H
  { 1084,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1084 = MADD_Q_W
  { 1085,	4,	1,	4,	79,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1085 = MADD_S
  { 1086,	4,	1,	4,	79,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1086 = MADD_S_MM
  { 1087,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1087 = MAQ_SA_W_PHL
  { 1088,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1088 = MAQ_SA_W_PHR
  { 1089,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1089 = MAQ_S_W_PHL
  { 1090,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1090 = MAQ_S_W_PHR
  { 1091,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1091 = MAXA_D
  { 1092,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1092 = MAXA_S
  { 1093,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1093 = MAXI_S_B
  { 1094,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1094 = MAXI_S_D
  { 1095,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1095 = MAXI_S_H
  { 1096,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1096 = MAXI_S_W
  { 1097,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1097 = MAXI_U_B
  { 1098,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1098 = MAXI_U_D
  { 1099,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1099 = MAXI_U_H
  { 1100,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1100 = MAXI_U_W
  { 1101,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1101 = MAX_A_B
  { 1102,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1102 = MAX_A_D
  { 1103,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1103 = MAX_A_H
  { 1104,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1104 = MAX_A_W
  { 1105,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1105 = MAX_D
  { 1106,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1106 = MAX_S
  { 1107,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1107 = MAX_S_B
  { 1108,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1108 = MAX_S_D
  { 1109,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1109 = MAX_S_H
  { 1110,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1110 = MAX_S_W
  { 1111,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1111 = MAX_U_B
  { 1112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1112 = MAX_U_D
  { 1113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1113 = MAX_U_H
  { 1114,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1114 = MAX_U_W
  { 1115,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1115 = MFC0
  { 1116,	2,	1,	4,	80,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1116 = MFC1
  { 1117,	2,	1,	4,	80,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1117 = MFC1_MM
  { 1118,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1118 = MFC2
  { 1119,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1119 = MFHC1_D32
  { 1120,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1120 = MFHC1_D64
  { 1121,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1121 = MFHC1_MM
  { 1122,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1122 = MFHI
  { 1123,	1,	1,	2,	82,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1123 = MFHI16_MM
  { 1124,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1124 = MFHI64
  { 1125,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1125 = MFHI_DSP
  { 1126,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1126 = MFHI_MM
  { 1127,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1127 = MFLO
  { 1128,	1,	1,	2,	82,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1128 = MFLO16_MM
  { 1129,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1129 = MFLO64
  { 1130,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1130 = MFLO_DSP
  { 1131,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1131 = MFLO_MM
  { 1132,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1132 = MINA_D
  { 1133,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1133 = MINA_S
  { 1134,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1134 = MINI_S_B
  { 1135,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1135 = MINI_S_D
  { 1136,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1136 = MINI_S_H
  { 1137,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1137 = MINI_S_W
  { 1138,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1138 = MINI_U_B
  { 1139,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1139 = MINI_U_D
  { 1140,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1140 = MINI_U_H
  { 1141,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1141 = MINI_U_W
  { 1142,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1142 = MIN_A_B
  { 1143,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1143 = MIN_A_D
  { 1144,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1144 = MIN_A_H
  { 1145,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1145 = MIN_A_W
  { 1146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1146 = MIN_D
  { 1147,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1147 = MIN_S
  { 1148,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1148 = MIN_S_B
  { 1149,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1149 = MIN_S_D
  { 1150,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1150 = MIN_S_H
  { 1151,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1151 = MIN_S_W
  { 1152,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1152 = MIN_U_B
  { 1153,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1153 = MIN_U_D
  { 1154,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1154 = MIN_U_H
  { 1155,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1155 = MIN_U_W
  { 1156,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1156 = MIPSeh_return32
  { 1157,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1157 = MIPSeh_return64
  { 1158,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1158 = MOD
  { 1159,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1159 = MODSUB
  { 1160,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1160 = MODU
  { 1161,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1161 = MODU_MMR6
  { 1162,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1162 = MOD_MMR6
  { 1163,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1163 = MOD_S_B
  { 1164,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1164 = MOD_S_D
  { 1165,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1165 = MOD_S_H
  { 1166,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1166 = MOD_S_W
  { 1167,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1167 = MOD_U_B
  { 1168,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1168 = MOD_U_D
  { 1169,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1169 = MOD_U_H
  { 1170,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1170 = MOD_U_W
  { 1171,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1171 = MOVE16_MM
  { 1172,	4,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo215, -1 ,nullptr },  // Inst #1172 = MOVEP_MM
  { 1173,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1173 = MOVE_V
  { 1174,	4,	1,	4,	83,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1174 = MOVF_D32
  { 1175,	4,	1,	4,	83,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1175 = MOVF_D32_MM
  { 1176,	4,	1,	4,	83,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1176 = MOVF_D64
  { 1177,	4,	1,	4,	84,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1177 = MOVF_I
  { 1178,	4,	1,	4,	84,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1178 = MOVF_I64
  { 1179,	4,	1,	4,	84,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1179 = MOVF_I_MM
  { 1180,	4,	1,	4,	85,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1180 = MOVF_S
  { 1181,	4,	1,	4,	85,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1181 = MOVF_S_MM
  { 1182,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1182 = MOVN_I64_D64
  { 1183,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1183 = MOVN_I64_I
  { 1184,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1184 = MOVN_I64_I64
  { 1185,	4,	1,	4,	88,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1185 = MOVN_I64_S
  { 1186,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1186 = MOVN_I_D32
  { 1187,	4,	1,	4,	86,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1187 = MOVN_I_D32_MM
  { 1188,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1188 = MOVN_I_D64
  { 1189,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1189 = MOVN_I_I
  { 1190,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1190 = MOVN_I_I64
  { 1191,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1191 = MOVN_I_MM
  { 1192,	4,	1,	4,	88,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1192 = MOVN_I_S
  { 1193,	4,	1,	4,	88,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1193 = MOVN_I_S_MM
  { 1194,	4,	1,	4,	89,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1194 = MOVT_D32
  { 1195,	4,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1195 = MOVT_D32_MM
  { 1196,	4,	1,	4,	89,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1196 = MOVT_D64
  { 1197,	4,	1,	4,	90,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1197 = MOVT_I
  { 1198,	4,	1,	4,	90,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1198 = MOVT_I64
  { 1199,	4,	1,	4,	90,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1199 = MOVT_I_MM
  { 1200,	4,	1,	4,	91,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1200 = MOVT_S
  { 1201,	4,	1,	4,	91,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1201 = MOVT_S_MM
  { 1202,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1202 = MOVZ_I64_D64
  { 1203,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1203 = MOVZ_I64_I
  { 1204,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1204 = MOVZ_I64_I64
  { 1205,	4,	1,	4,	94,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1205 = MOVZ_I64_S
  { 1206,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1206 = MOVZ_I_D32
  { 1207,	4,	1,	4,	92,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1207 = MOVZ_I_D32_MM
  { 1208,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1208 = MOVZ_I_D64
  { 1209,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1209 = MOVZ_I_I
  { 1210,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1210 = MOVZ_I_I64
  { 1211,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1211 = MOVZ_I_MM
  { 1212,	4,	1,	4,	94,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1212 = MOVZ_I_S
  { 1213,	4,	1,	4,	94,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1213 = MOVZ_I_S_MM
  { 1214,	2,	0,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1214 = MSUB
  { 1215,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1215 = MSUBF_D
  { 1216,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1216 = MSUBF_S
  { 1217,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1217 = MSUBR_Q_H
  { 1218,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1218 = MSUBR_Q_W
  { 1219,	2,	0,	4,	96,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1219 = MSUBU
  { 1220,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1220 = MSUBU_DSP
  { 1221,	2,	0,	4,	96,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1221 = MSUBU_MM
  { 1222,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1222 = MSUBV_B
  { 1223,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1223 = MSUBV_D
  { 1224,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1224 = MSUBV_H
  { 1225,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1225 = MSUBV_W
  { 1226,	4,	1,	4,	97,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1226 = MSUB_D32
  { 1227,	4,	1,	4,	97,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1227 = MSUB_D32_MM
  { 1228,	4,	1,	4,	97,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1228 = MSUB_D64
  { 1229,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1229 = MSUB_DSP
  { 1230,	2,	0,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1230 = MSUB_MM
  { 1231,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1231 = MSUB_Q_H
  { 1232,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1232 = MSUB_Q_W
  { 1233,	4,	1,	4,	98,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1233 = MSUB_S
  { 1234,	4,	1,	4,	98,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1234 = MSUB_S_MM
  { 1235,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1235 = MTC0
  { 1236,	2,	1,	4,	99,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1236 = MTC1
  { 1237,	2,	1,	4,	99,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1237 = MTC1_MM
  { 1238,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1238 = MTC2
  { 1239,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1239 = MTHC1_D32
  { 1240,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1240 = MTHC1_D64
  { 1241,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1241 = MTHC1_MM
  { 1242,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66, -1 ,nullptr },  // Inst #1242 = MTHI
  { 1243,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo165, -1 ,nullptr },  // Inst #1243 = MTHI64
  { 1244,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1244 = MTHI_DSP
  { 1245,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66, -1 ,nullptr },  // Inst #1245 = MTHI_MM
  { 1246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo237, -1 ,nullptr },  // Inst #1246 = MTHLIP
  { 1247,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66, -1 ,nullptr },  // Inst #1247 = MTLO
  { 1248,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo165, -1 ,nullptr },  // Inst #1248 = MTLO64
  { 1249,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo238, -1 ,nullptr },  // Inst #1249 = MTLO_DSP
  { 1250,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66, -1 ,nullptr },  // Inst #1250 = MTLO_MM
  { 1251,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo165, -1 ,nullptr },  // Inst #1251 = MTM0
  { 1252,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo165, -1 ,nullptr },  // Inst #1252 = MTM1
  { 1253,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo165, -1 ,nullptr },  // Inst #1253 = MTM2
  { 1254,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo165, -1 ,nullptr },  // Inst #1254 = MTP0
  { 1255,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo165, -1 ,nullptr },  // Inst #1255 = MTP1
  { 1256,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo165, -1 ,nullptr },  // Inst #1256 = MTP2
  { 1257,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1257 = MUH
  { 1258,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1258 = MUHU
  { 1259,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1259 = MUHU_MMR6
  { 1260,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1260 = MUH_MMR6
  { 1261,	3,	1,	4,	102,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo14, -1 ,nullptr },  // Inst #1261 = MUL
  { 1262,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo83, -1 ,nullptr },  // Inst #1262 = MULEQ_S_W_PHL
  { 1263,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo83, -1 ,nullptr },  // Inst #1263 = MULEQ_S_W_PHR
  { 1264,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1264 = MULEU_S_PH_QBL
  { 1265,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1265 = MULEU_S_PH_QBR
  { 1266,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1266 = MULQ_RS_PH
  { 1267,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14, -1 ,nullptr },  // Inst #1267 = MULQ_RS_W
  { 1268,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1268 = MULQ_S_PH
  { 1269,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14, -1 ,nullptr },  // Inst #1269 = MULQ_S_W
  { 1270,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1270 = MULR_Q_H
  { 1271,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1271 = MULR_Q_W
  { 1272,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1272 = MULSAQ_S_W_PH
  { 1273,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1273 = MULSA_W_PH
  { 1274,	2,	0,	4,	103,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1274 = MULT
  { 1275,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1275 = MULTU_DSP
  { 1276,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1276 = MULT_DSP
  { 1277,	2,	0,	4,	103,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1277 = MULT_MM
  { 1278,	2,	0,	4,	104,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1278 = MULTu
  { 1279,	2,	0,	4,	104,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1279 = MULTu_MM
  { 1280,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1280 = MULU
  { 1281,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1281 = MULU_MMR6
  { 1282,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1282 = MULV_B
  { 1283,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1283 = MULV_D
  { 1284,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1284 = MULV_H
  { 1285,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1285 = MULV_W
  { 1286,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1286 = MUL_MM
  { 1287,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1287 = MUL_MMR6
  { 1288,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1288 = MUL_PH
  { 1289,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1289 = MUL_Q_H
  { 1290,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1290 = MUL_Q_W
  { 1291,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1291 = MUL_R6
  { 1292,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1292 = MUL_S_PH
  { 1293,	1,	1,	2,	6,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1293 = Mfhi16
  { 1294,	1,	1,	2,	6,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1294 = Mflo16
  { 1295,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1295 = Move32R16
  { 1296,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo241, -1 ,nullptr },  // Inst #1296 = MoveR3216
  { 1297,	2,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1297 = MultRxRy16
  { 1298,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42, -1 ,nullptr },  // Inst #1298 = MultRxRyRz16
  { 1299,	2,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1299 = MultuRxRy16
  { 1300,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42, -1 ,nullptr },  // Inst #1300 = MultuRxRyRz16
  { 1301,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1301 = NLOC_B
  { 1302,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1302 = NLOC_D
  { 1303,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1303 = NLOC_H
  { 1304,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1304 = NLOC_W
  { 1305,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1305 = NLZC_B
  { 1306,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1306 = NLZC_D
  { 1307,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1307 = NLZC_H
  { 1308,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1308 = NLZC_W
  { 1309,	4,	1,	4,	105,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1309 = NMADD_D32
  { 1310,	4,	1,	4,	105,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1310 = NMADD_D32_MM
  { 1311,	4,	1,	4,	105,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1311 = NMADD_D64
  { 1312,	4,	1,	4,	106,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1312 = NMADD_S
  { 1313,	4,	1,	4,	106,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1313 = NMADD_S_MM
  { 1314,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1314 = NMSUB_D32
  { 1315,	4,	1,	4,	107,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1315 = NMSUB_D32_MM
  { 1316,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1316 = NMSUB_D64
  { 1317,	4,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1317 = NMSUB_S
  { 1318,	4,	1,	4,	108,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1318 = NMSUB_S_MM
  { 1319,	0,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1319 = NOP
  { 1320,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1320 = NOR
  { 1321,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1321 = NOR64
  { 1322,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1322 = NORI_B
  { 1323,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1323 = NOR_MM
  { 1324,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1324 = NOR_MMR6
  { 1325,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1325 = NOR_V
  { 1326,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1326 = NOR_V_D_PSEUDO
  { 1327,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1327 = NOR_V_H_PSEUDO
  { 1328,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1328 = NOR_V_W_PSEUDO
  { 1329,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1329 = NOT16_MM
  { 1330,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1330 = NegRxRy16
  { 1331,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1331 = NotRxRy16
  { 1332,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1332 = OR
  { 1333,	3,	1,	2,	110,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1333 = OR16_MM
  { 1334,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1334 = OR64
  { 1335,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1335 = ORI_B
  { 1336,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1336 = ORI_MMR6
  { 1337,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1337 = OR_MM
  { 1338,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1338 = OR_MMR6
  { 1339,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1339 = OR_V
  { 1340,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1340 = OR_V_D_PSEUDO
  { 1341,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1341 = OR_V_H_PSEUDO
  { 1342,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1342 = OR_V_W_PSEUDO
  { 1343,	3,	1,	4,	111,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1343 = ORi
  { 1344,	3,	1,	4,	110,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1344 = ORi64
  { 1345,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1345 = ORi_MM
  { 1346,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1346 = OrRxRxRy16
  { 1347,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1347 = PACKRL_PH
  { 1348,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1348 = PAUSE
  { 1349,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1349 = PAUSE_MM
  { 1350,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1350 = PCKEV_B
  { 1351,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1351 = PCKEV_D
  { 1352,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1352 = PCKEV_H
  { 1353,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1353 = PCKEV_W
  { 1354,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1354 = PCKOD_B
  { 1355,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1355 = PCKOD_D
  { 1356,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1356 = PCKOD_H
  { 1357,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1357 = PCKOD_W
  { 1358,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1358 = PCNT_B
  { 1359,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1359 = PCNT_D
  { 1360,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1360 = PCNT_H
  { 1361,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1361 = PCNT_W
  { 1362,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1362 = PICK_PH
  { 1363,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1363 = PICK_QB
  { 1364,	2,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1364 = POP
  { 1365,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1365 = PRECEQU_PH_QBL
  { 1366,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1366 = PRECEQU_PH_QBLA
  { 1367,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1367 = PRECEQU_PH_QBR
  { 1368,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1368 = PRECEQU_PH_QBRA
  { 1369,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1369 = PRECEQ_W_PHL
  { 1370,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1370 = PRECEQ_W_PHR
  { 1371,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1371 = PRECEU_PH_QBL
  { 1372,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1372 = PRECEU_PH_QBLA
  { 1373,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1373 = PRECEU_PH_QBR
  { 1374,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1374 = PRECEU_PH_QBRA
  { 1375,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo20, -1 ,nullptr },  // Inst #1375 = PRECRQU_S_QB_PH
  { 1376,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1376 = PRECRQ_PH_W
  { 1377,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1377 = PRECRQ_QB_PH
  { 1378,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245, -1 ,nullptr },  // Inst #1378 = PRECRQ_RS_PH_W
  { 1379,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1379 = PRECR_QB_PH
  { 1380,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1380 = PRECR_SRA_PH_W
  { 1381,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1381 = PRECR_SRA_R_PH_W
  { 1382,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #1382 = PREF
  { 1383,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #1383 = PREF_MM
  { 1384,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #1384 = PREF_MMR6
  { 1385,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #1385 = PREF_R6
  { 1386,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1386 = PREPEND
  { 1387,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1387 = PseudoCMPU_EQ_QB
  { 1388,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1388 = PseudoCMPU_LE_QB
  { 1389,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1389 = PseudoCMPU_LT_QB
  { 1390,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1390 = PseudoCMP_EQ_PH
  { 1391,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1391 = PseudoCMP_LE_PH
  { 1392,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1392 = PseudoCMP_LT_PH
  { 1393,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1393 = PseudoCVT_D32_W
  { 1394,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1394 = PseudoCVT_D64_L
  { 1395,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo249, -1 ,nullptr },  // Inst #1395 = PseudoCVT_D64_W
  { 1396,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1396 = PseudoCVT_S_L
  { 1397,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1397 = PseudoCVT_S_W
  { 1398,	3,	1,	4,	25,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1398 = PseudoDMULT
  { 1399,	3,	1,	4,	26,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1399 = PseudoDMULTu
  { 1400,	3,	1,	4,	31,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1400 = PseudoDSDIV
  { 1401,	3,	1,	4,	43,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1401 = PseudoDUDIV
  { 1402,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1402 = PseudoIndirectBranch
  { 1403,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1403 = PseudoIndirectBranch64
  { 1404,	4,	1,	4,	76,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1404 = PseudoMADD
  { 1405,	4,	1,	4,	77,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1405 = PseudoMADDU
  { 1406,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1406 = PseudoMFHI
  { 1407,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1407 = PseudoMFHI64
  { 1408,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1408 = PseudoMFLO
  { 1409,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1409 = PseudoMFLO64
  { 1410,	4,	1,	4,	95,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1410 = PseudoMSUB
  { 1411,	4,	1,	4,	96,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1411 = PseudoMSUBU
  { 1412,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1412 = PseudoMTLOHI
  { 1413,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1413 = PseudoMTLOHI64
  { 1414,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1414 = PseudoMTLOHI_DSP
  { 1415,	3,	1,	4,	103,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1415 = PseudoMULT
  { 1416,	3,	1,	4,	104,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1416 = PseudoMULTu
  { 1417,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1417 = PseudoPICK_PH
  { 1418,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1418 = PseudoPICK_QB
  { 1419,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1419 = PseudoReturn
  { 1420,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1420 = PseudoReturn64
  { 1421,	3,	1,	4,	112,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1421 = PseudoSDIV
  { 1422,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1422 = PseudoSELECTFP_F_D32
  { 1423,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1423 = PseudoSELECTFP_F_D64
  { 1424,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1424 = PseudoSELECTFP_F_I
  { 1425,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1425 = PseudoSELECTFP_F_I64
  { 1426,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1426 = PseudoSELECTFP_F_S
  { 1427,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1427 = PseudoSELECTFP_T_D32
  { 1428,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1428 = PseudoSELECTFP_T_D64
  { 1429,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1429 = PseudoSELECTFP_T_I
  { 1430,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1430 = PseudoSELECTFP_T_I64
  { 1431,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1431 = PseudoSELECTFP_T_S
  { 1432,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1432 = PseudoSELECT_D32
  { 1433,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1433 = PseudoSELECT_D64
  { 1434,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1434 = PseudoSELECT_I
  { 1435,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1435 = PseudoSELECT_I64
  { 1436,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1436 = PseudoSELECT_S
  { 1437,	3,	1,	4,	113,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1437 = PseudoUDIV
  { 1438,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1438 = RADDU_W_QB
  { 1439,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1439 = RDDSP
  { 1440,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1440 = RDHWR
  { 1441,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1441 = RDHWR64
  { 1442,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1442 = RDHWR_MM
  { 1443,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1443 = REPLV_PH
  { 1444,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1444 = REPLV_QB
  { 1445,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1445 = REPL_PH
  { 1446,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1446 = REPL_QB
  { 1447,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1447 = RINT_D
  { 1448,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1448 = RINT_S
  { 1449,	3,	1,	4,	115,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1449 = ROTR
  { 1450,	3,	1,	4,	116,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1450 = ROTRV
  { 1451,	3,	1,	4,	116,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1451 = ROTRV_MM
  { 1452,	3,	1,	4,	115,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1452 = ROTR_MM
  { 1453,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1453 = ROUND_L_D64
  { 1454,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1454 = ROUND_L_S
  { 1455,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1455 = ROUND_W_D32
  { 1456,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1456 = ROUND_W_D64
  { 1457,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1457 = ROUND_W_MM
  { 1458,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1458 = ROUND_W_S
  { 1459,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1459 = ROUND_W_S_MM
  { 1460,	0,	0,	2,	118,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1460 = Restore16
  { 1461,	0,	0,	2,	118,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1461 = RestoreX16
  { 1462,	0,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1462 = RetRA
  { 1463,	0,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1463 = RetRA16
  { 1464,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1464 = SAT_S_B
  { 1465,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1465 = SAT_S_D
  { 1466,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1466 = SAT_S_H
  { 1467,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1467 = SAT_S_W
  { 1468,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1468 = SAT_U_B
  { 1469,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1469 = SAT_U_D
  { 1470,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1470 = SAT_U_H
  { 1471,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1471 = SAT_U_W
  { 1472,	3,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1472 = SB
  { 1473,	3,	0,	2,	119,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1473 = SB16_MM
  { 1474,	3,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1474 = SB64
  { 1475,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1475 = SB_MM
  { 1476,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1476 = SC
  { 1477,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1477 = SCD
  { 1478,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1478 = SCD_R6
  { 1479,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1479 = SC_MM
  { 1480,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1480 = SC_R6
  { 1481,	3,	0,	4,	120,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1481 = SD
  { 1482,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1482 = SDBBP
  { 1483,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1483 = SDBBP16_MM
  { 1484,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1484 = SDBBP_MM
  { 1485,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1485 = SDBBP_R6
  { 1486,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1486 = SDC1
  { 1487,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1487 = SDC164
  { 1488,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1488 = SDC1_MM
  { 1489,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1489 = SDC2
  { 1490,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1490 = SDC2_R6
  { 1491,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1491 = SDC3
  { 1492,	2,	0,	4,	112,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1492 = SDIV
  { 1493,	2,	0,	4,	112,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1493 = SDIV_MM
  { 1494,	3,	0,	4,	122,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1494 = SDL
  { 1495,	3,	0,	4,	123,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1495 = SDR
  { 1496,	3,	0,	4,	124,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1496 = SDXC1
  { 1497,	3,	0,	4,	124,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1497 = SDXC164
  { 1498,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1498 = SEB
  { 1499,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1499 = SEB64
  { 1500,	2,	1,	4,	125,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1500 = SEB_MM
  { 1501,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1501 = SEB_MMR6
  { 1502,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1502 = SEH
  { 1503,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1503 = SEH64
  { 1504,	2,	1,	4,	126,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1504 = SEH_MM
  { 1505,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1505 = SEH_MMR6
  { 1506,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1506 = SELEQZ
  { 1507,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1507 = SELEQZ64
  { 1508,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1508 = SELEQZ_D
  { 1509,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1509 = SELEQZ_MMR6
  { 1510,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1510 = SELEQZ_S
  { 1511,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1511 = SELNEZ
  { 1512,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1512 = SELNEZ64
  { 1513,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1513 = SELNEZ_D
  { 1514,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1514 = SELNEZ_MMR6
  { 1515,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1515 = SELNEZ_S
  { 1516,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo269, -1 ,nullptr },  // Inst #1516 = SEL_D
  { 1517,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo270, -1 ,nullptr },  // Inst #1517 = SEL_S
  { 1518,	3,	1,	4,	127,	0, 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1518 = SEQ
  { 1519,	3,	1,	4,	128,	0, 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1519 = SEQi
  { 1520,	3,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1520 = SH
  { 1521,	3,	0,	2,	129,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1521 = SH16_MM
  { 1522,	3,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1522 = SH64
  { 1523,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1523 = SHF_B
  { 1524,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1524 = SHF_H
  { 1525,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1525 = SHF_W
  { 1526,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1526 = SHILO
  { 1527,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1527 = SHILOV
  { 1528,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1528 = SHLLV_PH
  { 1529,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1529 = SHLLV_QB
  { 1530,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1530 = SHLLV_S_PH
  { 1531,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo14, -1 ,nullptr },  // Inst #1531 = SHLLV_S_W
  { 1532,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1532 = SHLL_PH
  { 1533,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1533 = SHLL_QB
  { 1534,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1534 = SHLL_S_PH
  { 1535,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo19, -1 ,nullptr },  // Inst #1535 = SHLL_S_W
  { 1536,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1536 = SHRAV_PH
  { 1537,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1537 = SHRAV_QB
  { 1538,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1538 = SHRAV_R_PH
  { 1539,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1539 = SHRAV_R_QB
  { 1540,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1540 = SHRAV_R_W
  { 1541,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1541 = SHRA_PH
  { 1542,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1542 = SHRA_QB
  { 1543,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1543 = SHRA_R_PH
  { 1544,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1544 = SHRA_R_QB
  { 1545,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1545 = SHRA_R_W
  { 1546,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1546 = SHRLV_PH
  { 1547,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1547 = SHRLV_QB
  { 1548,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1548 = SHRL_PH
  { 1549,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1549 = SHRL_QB
  { 1550,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1550 = SH_MM
  { 1551,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #1551 = SLDI_B
  { 1552,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #1552 = SLDI_D
  { 1553,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #1553 = SLDI_H
  { 1554,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #1554 = SLDI_W
  { 1555,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1555 = SLD_B
  { 1556,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1556 = SLD_D
  { 1557,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1557 = SLD_H
  { 1558,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1558 = SLD_W
  { 1559,	3,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1559 = SLL
  { 1560,	3,	1,	2,	130,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1560 = SLL16_MM
  { 1561,	2,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1561 = SLL64_32
  { 1562,	2,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1562 = SLL64_64
  { 1563,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1563 = SLLI_B
  { 1564,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1564 = SLLI_D
  { 1565,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1565 = SLLI_H
  { 1566,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1566 = SLLI_W
  { 1567,	3,	1,	4,	131,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1567 = SLLV
  { 1568,	3,	1,	4,	131,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1568 = SLLV_MM
  { 1569,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1569 = SLL_B
  { 1570,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1570 = SLL_D
  { 1571,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1571 = SLL_H
  { 1572,	3,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1572 = SLL_MM
  { 1573,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1573 = SLL_W
  { 1574,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1574 = SLT
  { 1575,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1575 = SLT64
  { 1576,	3,	1,	4,	132,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1576 = SLT_MM
  { 1577,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1577 = SLTi
  { 1578,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1578 = SLTi64
  { 1579,	3,	1,	4,	133,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1579 = SLTi_MM
  { 1580,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1580 = SLTiu
  { 1581,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1581 = SLTiu64
  { 1582,	3,	1,	4,	133,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1582 = SLTiu_MM
  { 1583,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1583 = SLTu
  { 1584,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1584 = SLTu64
  { 1585,	3,	1,	4,	132,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1585 = SLTu_MM
  { 1586,	3,	1,	4,	127,	0, 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1586 = SNE
  { 1587,	3,	1,	4,	128,	0, 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1587 = SNEi
  { 1588,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1588 = SNZ_B_PSEUDO
  { 1589,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1589 = SNZ_D_PSEUDO
  { 1590,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1590 = SNZ_H_PSEUDO
  { 1591,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1591 = SNZ_V_PSEUDO
  { 1592,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1592 = SNZ_W_PSEUDO
  { 1593,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1593 = SPLATI_B
  { 1594,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1594 = SPLATI_D
  { 1595,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1595 = SPLATI_H
  { 1596,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1596 = SPLATI_W
  { 1597,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo284, -1 ,nullptr },  // Inst #1597 = SPLAT_B
  { 1598,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo285, -1 ,nullptr },  // Inst #1598 = SPLAT_D
  { 1599,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo286, -1 ,nullptr },  // Inst #1599 = SPLAT_H
  { 1600,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo287, -1 ,nullptr },  // Inst #1600 = SPLAT_W
  { 1601,	3,	1,	4,	134,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1601 = SRA
  { 1602,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1602 = SRAI_B
  { 1603,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1603 = SRAI_D
  { 1604,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1604 = SRAI_H
  { 1605,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1605 = SRAI_W
  { 1606,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1606 = SRARI_B
  { 1607,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1607 = SRARI_D
  { 1608,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1608 = SRARI_H
  { 1609,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1609 = SRARI_W
  { 1610,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1610 = SRAR_B
  { 1611,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1611 = SRAR_D
  { 1612,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1612 = SRAR_H
  { 1613,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1613 = SRAR_W
  { 1614,	3,	1,	4,	135,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1614 = SRAV
  { 1615,	3,	1,	4,	135,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1615 = SRAV_MM
  { 1616,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1616 = SRA_B
  { 1617,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1617 = SRA_D
  { 1618,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1618 = SRA_H
  { 1619,	3,	1,	4,	134,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1619 = SRA_MM
  { 1620,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1620 = SRA_W
  { 1621,	3,	1,	4,	136,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1621 = SRL
  { 1622,	3,	1,	2,	136,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1622 = SRL16_MM
  { 1623,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1623 = SRLI_B
  { 1624,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1624 = SRLI_D
  { 1625,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1625 = SRLI_H
  { 1626,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1626 = SRLI_W
  { 1627,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1627 = SRLRI_B
  { 1628,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1628 = SRLRI_D
  { 1629,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1629 = SRLRI_H
  { 1630,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1630 = SRLRI_W
  { 1631,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1631 = SRLR_B
  { 1632,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1632 = SRLR_D
  { 1633,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1633 = SRLR_H
  { 1634,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1634 = SRLR_W
  { 1635,	3,	1,	4,	137,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1635 = SRLV
  { 1636,	3,	1,	4,	137,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1636 = SRLV_MM
  { 1637,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1637 = SRL_B
  { 1638,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1638 = SRL_D
  { 1639,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1639 = SRL_H
  { 1640,	3,	1,	4,	136,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1640 = SRL_MM
  { 1641,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1641 = SRL_W
  { 1642,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1642 = SSNOP
  { 1643,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1643 = SSNOP_MM
  { 1644,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1644 = STORE_ACC128
  { 1645,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1645 = STORE_ACC64
  { 1646,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1646 = STORE_ACC64DSP
  { 1647,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1647 = STORE_CCOND_DSP
  { 1648,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1648 = ST_B
  { 1649,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1649 = ST_D
  { 1650,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1650 = ST_H
  { 1651,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1651 = ST_W
  { 1652,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1652 = SUB
  { 1653,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1653 = SUBQH_PH
  { 1654,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1654 = SUBQH_R_PH
  { 1655,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1655 = SUBQH_R_W
  { 1656,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1656 = SUBQH_W
  { 1657,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1657 = SUBQ_PH
  { 1658,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1658 = SUBQ_S_PH
  { 1659,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1659 = SUBQ_S_W
  { 1660,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1660 = SUBSUS_U_B
  { 1661,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1661 = SUBSUS_U_D
  { 1662,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1662 = SUBSUS_U_H
  { 1663,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1663 = SUBSUS_U_W
  { 1664,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1664 = SUBSUU_S_B
  { 1665,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1665 = SUBSUU_S_D
  { 1666,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1666 = SUBSUU_S_H
  { 1667,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1667 = SUBSUU_S_W
  { 1668,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1668 = SUBS_S_B
  { 1669,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1669 = SUBS_S_D
  { 1670,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1670 = SUBS_S_H
  { 1671,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1671 = SUBS_S_W
  { 1672,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1672 = SUBS_U_B
  { 1673,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1673 = SUBS_U_D
  { 1674,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1674 = SUBS_U_H
  { 1675,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1675 = SUBS_U_W
  { 1676,	3,	1,	2,	138,	0, 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1676 = SUBU16_MM
  { 1677,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1677 = SUBUH_QB
  { 1678,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1678 = SUBUH_R_QB
  { 1679,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1679 = SUBU_MMR6
  { 1680,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1680 = SUBU_PH
  { 1681,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1681 = SUBU_QB
  { 1682,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1682 = SUBU_S_PH
  { 1683,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1683 = SUBU_S_QB
  { 1684,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1684 = SUBVI_B
  { 1685,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1685 = SUBVI_D
  { 1686,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1686 = SUBVI_H
  { 1687,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1687 = SUBVI_W
  { 1688,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1688 = SUBV_B
  { 1689,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1689 = SUBV_D
  { 1690,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1690 = SUBV_H
  { 1691,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1691 = SUBV_W
  { 1692,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1692 = SUB_MM
  { 1693,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1693 = SUB_MMR6
  { 1694,	3,	1,	4,	138,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1694 = SUBu
  { 1695,	3,	1,	4,	138,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1695 = SUBu_MM
  { 1696,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1696 = SUXC1
  { 1697,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1697 = SUXC164
  { 1698,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1698 = SUXC1_MM
  { 1699,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1699 = SW
  { 1700,	3,	0,	2,	140,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1700 = SW16_MM
  { 1701,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1701 = SW64
  { 1702,	3,	0,	4,	141,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1702 = SWC1
  { 1703,	3,	0,	4,	141,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1703 = SWC1_MM
  { 1704,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1704 = SWC2
  { 1705,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1705 = SWC2_R6
  { 1706,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1706 = SWC3
  { 1707,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1707 = SWL
  { 1708,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1708 = SWL64
  { 1709,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1709 = SWL_MM
  { 1710,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1710 = SWM16_MM
  { 1711,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1711 = SWM32_MM
  { 1712,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1712 = SWM_MM
  { 1713,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1713 = SWP_MM
  { 1714,	3,	0,	4,	143,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1714 = SWR
  { 1715,	3,	0,	4,	143,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1715 = SWR64
  { 1716,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1716 = SWR_MM
  { 1717,	3,	0,	2,	140,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1717 = SWSP_MM
  { 1718,	3,	0,	4,	144,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1718 = SWXC1
  { 1719,	3,	0,	4,	144,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1719 = SWXC1_MM
  { 1720,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1720 = SW_MM
  { 1721,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1721 = SYNC
  { 1722,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo288, -1 ,nullptr },  // Inst #1722 = SYNCI
  { 1723,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1723 = SYNC_MM
  { 1724,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1724 = SYSCALL
  { 1725,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1725 = SYSCALL_MM
  { 1726,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1726 = SZ_B_PSEUDO
  { 1727,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1727 = SZ_D_PSEUDO
  { 1728,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1728 = SZ_H_PSEUDO
  { 1729,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1729 = SZ_V_PSEUDO
  { 1730,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1730 = SZ_W_PSEUDO
  { 1731,	0,	0,	2,	145,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1731 = Save16
  { 1732,	0,	0,	2,	145,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1732 = SaveX16
  { 1733,	4,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1733 = SbRxRyOffMemX16
  { 1734,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #1734 = SebRx16
  { 1735,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #1735 = SehRx16
  { 1736,	4,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #1736 = SelBeqZ
  { 1737,	4,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #1737 = SelBneZ
  { 1738,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1738 = SelTBteqZCmp
  { 1739,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1739 = SelTBteqZCmpi
  { 1740,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1740 = SelTBteqZSlt
  { 1741,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1741 = SelTBteqZSlti
  { 1742,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1742 = SelTBteqZSltiu
  { 1743,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1743 = SelTBteqZSltu
  { 1744,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1744 = SelTBtneZCmp
  { 1745,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1745 = SelTBtneZCmpi
  { 1746,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1746 = SelTBtneZSlt
  { 1747,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1747 = SelTBtneZSlti
  { 1748,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1748 = SelTBtneZSltiu
  { 1749,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1749 = SelTBtneZSltu
  { 1750,	4,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1750 = ShRxRyOffMemX16
  { 1751,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1751 = SllX16
  { 1752,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1752 = SllvRxRy16
  { 1753,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1753 = SltCCRxRy16
  { 1754,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #1754 = SltRxRy16
  { 1755,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1755 = SltiCCRxImmX16
  { 1756,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1756 = SltiRxImm16
  { 1757,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1757 = SltiRxImmX16
  { 1758,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1758 = SltiuCCRxImmX16
  { 1759,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1759 = SltiuRxImm16
  { 1760,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1760 = SltiuRxImmX16
  { 1761,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1761 = SltuCCRxRy16
  { 1762,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #1762 = SltuRxRy16
  { 1763,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #1763 = SltuRxRyRz16
  { 1764,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1764 = SraX16
  { 1765,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1765 = SravRxRy16
  { 1766,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1766 = SrlX16
  { 1767,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1767 = SrlvRxRy16
  { 1768,	3,	1,	2,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1768 = SubuRxRyRz16
  { 1769,	4,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1769 = SwRxRyOffMemX16
  { 1770,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1770 = SwRxSpImmX16
  { 1771,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #1771 = TAILCALL
  { 1772,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo165, -1 ,nullptr },  // Inst #1772 = TAILCALL64_R
  { 1773,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #1773 = TAILCALL_R
  { 1774,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1774 = TEQ
  { 1775,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1775 = TEQI
  { 1776,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1776 = TEQI_MM
  { 1777,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1777 = TEQ_MM
  { 1778,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1778 = TGE
  { 1779,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1779 = TGEI
  { 1780,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1780 = TGEIU
  { 1781,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1781 = TGEIU_MM
  { 1782,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1782 = TGEI_MM
  { 1783,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1783 = TGEU
  { 1784,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1784 = TGEU_MM
  { 1785,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1785 = TGE_MM
  { 1786,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1786 = TLBP
  { 1787,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1787 = TLBP_MM
  { 1788,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1788 = TLBR
  { 1789,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1789 = TLBR_MM
  { 1790,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1790 = TLBWI
  { 1791,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1791 = TLBWI_MM
  { 1792,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1792 = TLBWR
  { 1793,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1793 = TLBWR_MM
  { 1794,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1794 = TLT
  { 1795,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1795 = TLTI
  { 1796,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1796 = TLTIU_MM
  { 1797,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1797 = TLTI_MM
  { 1798,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1798 = TLTU
  { 1799,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1799 = TLTU_MM
  { 1800,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1800 = TLT_MM
  { 1801,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1801 = TNE
  { 1802,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1802 = TNEI
  { 1803,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1803 = TNEI_MM
  { 1804,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1804 = TNE_MM
  { 1805,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1805 = TRAP
  { 1806,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1806 = TRUNC_L_D64
  { 1807,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1807 = TRUNC_L_S
  { 1808,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1808 = TRUNC_W_D32
  { 1809,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1809 = TRUNC_W_D64
  { 1810,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1810 = TRUNC_W_MM
  { 1811,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1811 = TRUNC_W_S
  { 1812,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1812 = TRUNC_W_S_MM
  { 1813,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1813 = TTLTIU
  { 1814,	2,	0,	4,	113,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1814 = UDIV
  { 1815,	2,	0,	4,	113,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1815 = UDIV_MM
  { 1816,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1816 = Ulhu
  { 1817,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1817 = Ulw
  { 1818,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo32, -1 ,nullptr },  // Inst #1818 = V3MULU
  { 1819,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo32, -1 ,nullptr },  // Inst #1819 = VMM0
  { 1820,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo32, -1 ,nullptr },  // Inst #1820 = VMULU
  { 1821,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1821 = VSHF_B
  { 1822,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1822 = VSHF_D
  { 1823,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1823 = VSHF_H
  { 1824,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1824 = VSHF_W
  { 1825,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1825 = WAIT
  { 1826,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1826 = WAIT_MM
  { 1827,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1827 = WRDSP
  { 1828,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1828 = WSBH
  { 1829,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1829 = WSBH_MM
  { 1830,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1830 = XOR
  { 1831,	3,	1,	2,	147,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1831 = XOR16_MM
  { 1832,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1832 = XOR64
  { 1833,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1833 = XORI_B
  { 1834,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1834 = XORI_MMR6
  { 1835,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1835 = XOR_MM
  { 1836,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1836 = XOR_MMR6
  { 1837,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1837 = XOR_V
  { 1838,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1838 = XOR_V_D_PSEUDO
  { 1839,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1839 = XOR_V_H_PSEUDO
  { 1840,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1840 = XOR_V_W_PSEUDO
  { 1841,	3,	1,	4,	148,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1841 = XORi
  { 1842,	3,	1,	4,	147,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1842 = XORi64
  { 1843,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1843 = XORi_MM
  { 1844,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1844 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'B', 'B', 'I', 'T', '0', 0,
  /* 33 */ 'L', 'D', 'C', '1', 0,
  /* 38 */ 'S', 'D', 'C', '1', 0,
  /* 43 */ 'C', 'F', 'C', '1', 0,
  /* 48 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 54 */ 'C', 'T', 'C', '1', 0,
  /* 59 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 65 */ 'L', 'W', 'C', '1', 0,
  /* 70 */ 'S', 'W', 'C', '1', 0,
  /* 75 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 87 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 99 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 111 */ 'M', 'T', 'M', '1', 0,
  /* 116 */ 'M', 'T', 'P', '1', 0,
  /* 121 */ 'B', 'B', 'I', 'T', '1', 0,
  /* 127 */ 'B', 'B', 'I', 'T', '0', '3', '2', 0,
  /* 135 */ 'B', 'B', 'I', 'T', '1', '3', '2', 0,
  /* 143 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 150 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 160 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 170 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 179 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 189 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 198 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 208 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 218 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 229 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 239 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 249 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 258 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 267 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 276 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 284 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '3', '2', 0,
  /* 305 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 314 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 325 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 336 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 355 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 364 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 373 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 383 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 393 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 402 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 411 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 421 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '3', '2', 0,
  /* 438 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 448 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 458 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 468 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 477 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 487 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 496 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '3', '2', 0,
  /* 517 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 526 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 547 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 559 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 570 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 582 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 592 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 621 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 641 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 662 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 682 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 738 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 757 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 764 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 771 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 779 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 786 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 793 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 802 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 812 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '3', '2', 0,
  /* 826 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 0,
  /* 836 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '3', '2', 0,
  /* 850 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 866 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 879 */ 'L', 'D', 'C', '2', 0,
  /* 884 */ 'S', 'D', 'C', '2', 0,
  /* 889 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 895 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 901 */ 'L', 'W', 'C', '2', 0,
  /* 906 */ 'S', 'W', 'C', '2', 0,
  /* 911 */ 'M', 'T', 'M', '2', 0,
  /* 916 */ 'M', 'T', 'P', '2', 0,
  /* 921 */ 'L', 'D', 'C', '3', 0,
  /* 926 */ 'S', 'D', 'C', '3', 0,
  /* 931 */ 'L', 'W', 'C', '3', 0,
  /* 936 */ 'S', 'W', 'C', '3', 0,
  /* 941 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 948 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 955 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 963 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 971 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 979 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 987 */ 'S', 'E', 'B', '6', '4', 0,
  /* 993 */ 'L', 'B', '6', '4', 0,
  /* 998 */ 'S', 'B', '6', '4', 0,
  /* 1003 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1014 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1026 */ 'A', 'N', 'D', '6', '4', 0,
  /* 1032 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1042 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1052 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1065 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1078 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1087 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1097 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1106 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1116 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1126 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1137 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1147 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1157 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1166 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1175 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1184 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1192 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1213 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1222 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1233 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1244 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1254 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1263 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1275 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1287 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1310 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1320 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1329 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1338 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1348 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1358 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1367 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1376 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1386 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 1403 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1413 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1423 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1433 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1442 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1452 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1461 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 1482 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1491 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1500 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1512 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1524 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1535 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1547 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1557 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1563 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1576 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1594 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1600 */ 'L', 'H', '6', '4', 0,
  /* 1605 */ 'S', 'H', '6', '4', 0,
  /* 1610 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1623 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1638 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1645 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1658 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1671 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1691 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1711 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1732 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1752 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1761 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 1782 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1793 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1804 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1820 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1840 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1860 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1879 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 1896 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1905 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 1926 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1932 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1938 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1951 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1958 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1964 */ 'J', 'R', '6', '4', 0,
  /* 1969 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1976 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1982 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1988 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1996 */ 'L', 'W', 'R', '6', '4', 0,
  /* 2002 */ 'S', 'W', 'R', '6', '4', 0,
  /* 2008 */ 'S', 'L', 'T', '6', '4', 0,
  /* 2014 */ 'L', 'W', '6', '4', 0,
  /* 2019 */ 'S', 'W', '6', '4', 0,
  /* 2024 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 2031 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2038 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2047 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2056 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2063 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2070 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2086 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2107 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2116 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2139 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2146 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2153 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2160 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2166 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 0,
  /* 2176 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2191 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2207 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2213 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2219 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2226 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 2238 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 2246 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2256 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2264 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2271 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2291 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2311 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2332 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2352 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2368 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2388 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2408 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2427 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2437 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2444 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2455 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2463 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2478 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2493 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2508 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2523 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2530 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2537 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2553 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2569 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2585 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2601 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2618 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2635 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2654 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2670 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2686 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2702 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2716 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2729 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2742 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2757 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2773 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2784 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2797 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2810 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2824 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2838 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2854 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2867 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2880 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2888 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2904 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2917 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2931 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2945 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2959 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2973 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2989 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3005 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3020 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3035 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 3044 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3053 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3061 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3068 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3078 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3092 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3099 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3113 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3120 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3128 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3134 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3147 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3157 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3169 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3181 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3194 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3209 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3221 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3233 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 3240 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 3247 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3259 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3267 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3275 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3283 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3295 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3308 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3318 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3328 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3338 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3349 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3359 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3370 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3382 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3393 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3404 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3414 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3425 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3436 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3448 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3459 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3471 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3484 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3497 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3510 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3523 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3537 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3545 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3553 */ 'L', 'S', 'A', '_', 'M', 'M', 'R', '6', 0,
  /* 3562 */ 'S', 'E', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3571 */ 'E', 'H', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3580 */ 'S', 'U', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3589 */ 'B', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3597 */ 'J', 'I', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3606 */ 'B', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3616 */ 'J', 'I', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3627 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3640 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3653 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3666 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3679 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3692 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3705 */ 'E', 'R', 'E', 'T', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3717 */ 'A', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3728 */ 'A', 'L', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3740 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3753 */ 'L', 'W', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3763 */ 'A', 'D', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3772 */ 'A', 'N', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3781 */ 'M', 'O', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3790 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 3801 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 'R', '6', 0,
  /* 3811 */ 'S', 'E', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 3820 */ 'M', 'U', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 3829 */ 'A', 'N', 'D', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 3839 */ 'E', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 3847 */ 'X', 'O', 'R', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 3857 */ 'A', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 3866 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 'R', '6', 0,
  /* 3877 */ 'M', 'U', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 3886 */ 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', 'R', '6', 0,
  /* 3897 */ 'C', 'L', 'O', '_', 'M', 'M', 'R', '6', 0,
  /* 3906 */ 'B', 'I', 'T', 'S', 'W', 'A', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 3919 */ 'N', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 3928 */ 'X', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 3937 */ 'E', 'R', 'E', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 3947 */ 'S', 'U', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 3957 */ 'A', 'D', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 3967 */ 'M', 'O', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 3977 */ 'M', 'U', 'H', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 3987 */ 'A', 'D', 'D', 'I', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 3998 */ 'M', 'U', 'L', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4008 */ 'D', 'I', 'V', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4018 */ 'D', 'I', 'V', '_', 'M', 'M', 'R', '6', 0,
  /* 4027 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4039 */ 'C', 'L', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4048 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4060 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 4068 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 4076 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 4084 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 4092 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 4100 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 4109 */ 'S', 'C', '_', 'R', '6', 0,
  /* 4115 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 4122 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 4129 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 4138 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 4146 */ 'L', 'L', '_', 'R', '6', 0,
  /* 4152 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 4160 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 4168 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 4177 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 4185 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 4197 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 4210 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 4229 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 4248 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 4268 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 4287 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 4302 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 4321 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 4340 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 4358 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4373 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4389 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4404 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4420 */ 'D', 'S', 'R', 'A', 0,
  /* 4425 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 4431 */ 'D', 'L', 'S', 'A', 0,
  /* 4436 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 4443 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 4450 */ 'S', 'E', 'B', 0,
  /* 4454 */ 'E', 'H', 'B', 0,
  /* 4458 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 4464 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 4472 */ 'L', 'B', 0,
  /* 4475 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 4483 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4496 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4508 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4525 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4534 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4543 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 4557 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 4565 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 4573 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 4581 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4594 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4606 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4623 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 4633 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4644 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4655 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 4666 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 4676 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4686 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4696 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4709 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4721 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4738 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4746 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4754 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4763 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4772 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4781 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4790 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4801 */ 'S', 'B', 0,
  /* 4804 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4811 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4822 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4828 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4836 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4844 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4853 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4861 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4868 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4875 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4881 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4889 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4897 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4905 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4912 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4919 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4926 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4933 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4940 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4948 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4956 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4963 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4970 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4979 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4986 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4994 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 5002 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 5010 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 5017 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 5024 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 5033 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 5042 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 5050 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 5058 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 5066 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 5073 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 5081 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 5088 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 5094 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 5100 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 5108 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 5115 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 5121 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 5128 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 5135 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 5142 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 5150 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 5157 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 5166 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 5174 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 5182 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 5190 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 5199 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 5208 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 5217 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 5226 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 5234 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 5243 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 5252 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 5261 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 5269 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 5277 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 5288 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 5296 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 5304 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 5313 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 5321 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 5328 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 5335 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 5344 */ 'S', 'T', '_', 'B', 0,
  /* 5349 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 5358 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 5366 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 5374 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 5382 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 5391 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 5400 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 5409 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 5418 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 5426 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 5435 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 5444 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 5453 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 5464 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 5472 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 5480 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 5488 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 5496 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 5505 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 5513 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 5521 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 5529 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 5537 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 5544 */ 'B', 'Z', '_', 'B', 0,
  /* 5549 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 5555 */ 'B', 'C', 0,
  /* 5558 */ 'B', 'G', 'E', 'C', 0,
  /* 5563 */ 'B', 'N', 'E', 'C', 0,
  /* 5568 */ 'J', 'I', 'C', 0,
  /* 5572 */ 'B', 'A', 'L', 'C', 0,
  /* 5577 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 5583 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5591 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5599 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5607 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 5615 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5623 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5631 */ 'S', 'Y', 'N', 'C', 0,
  /* 5636 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 5648 */ 'L', 'D', 'P', 'C', 0,
  /* 5653 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 5659 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 5666 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 5674 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 5680 */ 'L', 'W', 'P', 'C', 0,
  /* 5685 */ 'B', 'E', 'Q', 'C', 0,
  /* 5690 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 5696 */ 'B', 'L', 'T', 'C', 0,
  /* 5701 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 5707 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 5713 */ 'B', 'N', 'V', 'C', 0,
  /* 5718 */ 'B', 'O', 'V', 'C', 0,
  /* 5723 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 5729 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 5735 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 5741 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 5747 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 5753 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 5759 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 5765 */ 'S', 'C', 'D', 0,
  /* 5769 */ 'D', 'A', 'D', 'D', 0,
  /* 5774 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5785 */ 'D', 'S', 'H', 'D', 0,
  /* 5790 */ 'L', 'L', 'D', 0,
  /* 5794 */ 'A', 'N', 'D', 0,
  /* 5798 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5806 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5813 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5826 */ 'D', 'M', 'O', 'D', 0,
  /* 5831 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 5848 */ 'S', 'D', 0,
  /* 5851 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5859 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5867 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5874 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5880 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5887 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5895 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5904 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5913 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5922 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5929 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5937 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5944 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5951 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5958 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5966 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5972 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5980 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5988 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5995 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 6002 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 6012 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 6020 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 6028 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 6039 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 6049 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 6058 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 6065 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 6072 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 6080 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 6088 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 6096 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 6103 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 6110 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 6120 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 6128 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 6136 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 6143 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 6151 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 6158 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 6165 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 6172 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 6180 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 6187 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 6194 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 6203 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 6210 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 6218 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 6226 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 6234 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 6243 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 6252 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 6260 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 6268 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 6276 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 6282 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 6289 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 6295 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 6304 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 6311 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 6317 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 6325 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 6332 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 6339 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 6346 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 6353 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 6360 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 6370 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 6379 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 6386 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 6393 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 6400 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 6410 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6418 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6426 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6437 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6447 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 6456 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 6463 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 6470 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 6477 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 6484 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 6491 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 6500 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 6507 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 6515 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 6522 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 6529 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 6538 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6547 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6556 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6566 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 6577 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6586 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6596 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 6604 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 6612 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 6620 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 6629 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 6638 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 6647 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 6656 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 6664 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 6673 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 6682 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 6691 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 6700 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 6708 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 6716 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6726 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6736 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 6747 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 6755 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 6763 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6772 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6780 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6787 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6794 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6801 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6811 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6819 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6827 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6838 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6848 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6857 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6864 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6872 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6881 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6889 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6898 */ 'S', 'T', '_', 'D', 0,
  /* 6903 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6912 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6921 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6931 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6942 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6951 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6961 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6969 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6977 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6985 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6994 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 7003 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 7012 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 7021 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 7029 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 7038 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 7047 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 7056 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 7065 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 7076 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 7084 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 7092 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 7102 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 7112 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 7120 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 7128 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 7137 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 7145 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 7153 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 7161 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 7169 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 7176 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 7183 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 7190 */ 'B', 'Z', '_', 'D', 0,
  /* 7195 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 7204 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 7210 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 7219 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 7232 */ 'B', 'G', 'E', 0,
  /* 7236 */ 'T', 'G', 'E', 0,
  /* 7240 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 7246 */ 'B', 'L', 'E', 0,
  /* 7250 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 7257 */ 'B', 'N', 'E', 0,
  /* 7261 */ 'S', 'N', 'E', 0,
  /* 7265 */ 'T', 'N', 'E', 0,
  /* 7269 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 7275 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 7285 */ 'B', 'C', '1', 'F', 0,
  /* 7290 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 7303 */ 'P', 'R', 'E', 'F', 0,
  /* 7308 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7323 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7337 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 7351 */ 'D', 'S', 'B', 'H', 0,
  /* 7356 */ 'W', 'S', 'B', 'H', 0,
  /* 7361 */ 'S', 'E', 'H', 0,
  /* 7365 */ 'L', 'H', 0,
  /* 7368 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 7376 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7389 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7401 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7417 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 7433 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 7442 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 7451 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 7465 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 7473 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 7481 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 7489 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 7499 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 7506 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 7514 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 7522 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 7538 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 7548 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7559 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7570 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 7581 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 7592 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7602 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7611 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7621 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7631 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7641 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7651 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7661 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7671 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 7682 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 7698 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 7706 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 7714 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 7723 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 7732 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 7741 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 7750 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7759 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7770 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7784 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7798 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7807 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7819 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7833 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7845 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7858 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7871 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7881 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7891 */ 'S', 'H', 0,
  /* 7894 */ 'D', 'M', 'U', 'H', 0,
  /* 7899 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7905 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7913 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7921 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7930 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7938 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7945 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7952 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7958 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7966 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7974 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7982 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7989 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7996 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 8003 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 8010 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 8018 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 8025 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 8032 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 8041 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 8048 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 8056 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 8064 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 8072 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 8081 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 8090 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 8098 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 8106 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 8114 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 8121 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 8127 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 8133 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 8141 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 8148 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 8156 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 8162 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 8168 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 8177 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 8186 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 8194 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 8204 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 8214 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 8223 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 8230 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 8237 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 8244 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 8252 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 8259 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8268 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8277 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8287 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 8296 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 8306 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 8314 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 8322 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 8330 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 8339 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 8348 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 8357 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 8366 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 8374 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 8383 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 8392 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 8401 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 8410 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 8419 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 8427 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 8435 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 8446 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 8454 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 8464 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 8472 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 8481 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 8489 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 8496 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 8503 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 8512 */ 'S', 'T', '_', 'H', 0,
  /* 8517 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8526 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8535 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8545 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8554 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8564 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 8572 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 8580 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 8588 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 8597 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 8606 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 8615 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 8624 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 8632 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 8641 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 8650 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 8659 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 8668 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 8679 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 8687 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 8695 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 8703 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 8711 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 8720 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 8728 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 8736 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 8744 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 8752 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 8759 */ 'B', 'Z', '_', 'H', 0,
  /* 8764 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 8770 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 8776 */ 'D', 'I', 0,
  /* 8779 */ 'T', 'G', 'E', 'I', 0,
  /* 8784 */ 'T', 'N', 'E', 'I', 0,
  /* 8789 */ 'D', 'A', 'H', 'I', 0,
  /* 8794 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8805 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8818 */ 'P', 'H', 'I', 0,
  /* 8822 */ 'M', 'T', 'H', 'I', 0,
  /* 8827 */ 'T', 'E', 'Q', 'I', 0,
  /* 8832 */ 'D', 'A', 'T', 'I', 0,
  /* 8837 */ 'T', 'L', 'T', 'I', 0,
  /* 8842 */ 'D', 'A', 'U', 'I', 0,
  /* 8847 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8853 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8864 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8875 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8882 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 8901 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8910 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8919 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 8934 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8941 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 8960 */ 'J', 0,
  /* 8962 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8968 */ 'B', 'A', 'L', 0,
  /* 8972 */ 'J', 'A', 'L', 0,
  /* 8976 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8983 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8990 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9005 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9019 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9034 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9045 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9056 */ 'L', 'D', 'L', 0,
  /* 9060 */ 'S', 'D', 'L', 0,
  /* 9064 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 9073 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 9082 */ 'B', 'N', 'E', 'L', 0,
  /* 9087 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 9093 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9106 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9119 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9131 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9145 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 9154 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 9162 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 9170 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 9178 */ 'K', 'I', 'L', 'L', 0,
  /* 9183 */ 'D', 'S', 'L', 'L', 0,
  /* 9188 */ 'B', 'E', 'Q', 'L', 0,
  /* 9193 */ 'D', 'S', 'R', 'L', 0,
  /* 9198 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 9204 */ 'D', 'M', 'U', 'L', 0,
  /* 9209 */ 'L', 'W', 'L', 0,
  /* 9213 */ 'S', 'W', 'L', 0,
  /* 9217 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 9223 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 9229 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 9235 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 9241 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 9257 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 9271 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 9279 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 9287 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 9295 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 9303 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 9312 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 9321 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 9329 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 9337 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 9345 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 9353 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9362 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9371 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9380 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9389 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9402 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9415 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9427 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9441 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9455 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9467 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9480 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9492 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9504 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 9513 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 9522 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 9534 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 9545 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 9558 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 9569 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 9577 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 9586 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 9595 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 9605 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 9613 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9623 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9633 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9641 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 9652 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9661 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9670 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9679 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9688 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 9698 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 9709 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9717 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9727 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9736 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 9747 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 9756 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9765 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9775 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9785 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9794 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9802 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9810 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9820 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9830 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 9837 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 9844 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 9851 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 9857 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 9863 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9871 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9879 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 9887 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 9898 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 9904 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9913 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9922 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9930 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9938 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 9945 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 9952 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 9961 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 9968 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 9975 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 9984 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 9992 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 10000 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 10008 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 10016 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 10023 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 10029 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 10035 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 10041 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 10049 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 10057 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 10065 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 10073 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 10081 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 10089 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 10098 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 10108 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 10118 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 10128 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 10138 */ 'J', '_', 'M', 'M', 0,
  /* 10143 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 10152 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 10159 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 10169 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 10179 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 10190 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 10197 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 10204 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 10212 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 10219 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 10226 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 10233 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 10240 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 10247 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 10255 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 10263 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 10272 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 10280 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 10289 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 10297 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 10306 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 10319 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 10330 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 10338 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 10346 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 10353 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 10360 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 10367 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 10374 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 10382 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 10388 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 10396 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 10403 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 10410 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 10418 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 10427 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 10436 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 10443 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 10450 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 10458 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10466 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10477 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10488 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 10495 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 10504 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 10512 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10522 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10533 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10543 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10554 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10565 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 10575 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 10585 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10597 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10609 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10619 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10630 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 10640 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10651 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10661 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10671 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10681 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10694 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10707 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10719 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10732 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10743 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 10751 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 10760 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 10768 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 10775 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 10782 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 10790 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 10799 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 10806 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 10815 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 10824 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 10832 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 10841 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 10850 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 10858 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 10865 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 10873 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10881 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10889 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10897 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 10905 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 10913 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 10922 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 10928 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 10934 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 10947 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 10958 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 10969 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 10979 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 10990 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 11001 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 11010 */ 'J', 'A', 'L', 'X', '_', 'M', 'M', 0,
  /* 11018 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 11026 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 11034 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 11041 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 11049 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 11057 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 11065 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 11073 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 11081 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 11089 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 11096 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 11103 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 11111 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 11119 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 11126 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 11134 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 11143 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 11156 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 11165 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 11175 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 11181 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 11187 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 11194 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 11201 */ 'D', 'M', 'F', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 11214 */ 'D', 'M', 'T', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 11227 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 11243 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 11260 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11277 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11294 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11310 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11333 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11357 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11380 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11403 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11427 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11450 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11463 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11475 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11490 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11505 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11522 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11537 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11551 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11566 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11581 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11596 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11609 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11621 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11635 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11650 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11665 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11680 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11693 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11705 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11718 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11730 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11745 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11760 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11777 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11792 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11806 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11821 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11836 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11851 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11864 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11876 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11897 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11919 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11940 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11961 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11983 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12004 */ 'D', 'C', 'L', 'O', 0,
  /* 12009 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 12020 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 12026 */ 'M', 'T', 'L', 'O', 0,
  /* 12031 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 12040 */ 'T', 'R', 'A', 'P', 0,
  /* 12045 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 12054 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 12060 */ 'T', 'L', 'B', 'P', 0,
  /* 12065 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 12072 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 12079 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 12085 */ 'D', 'P', 'O', 'P', 0,
  /* 12090 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 12107 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 12121 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 12136 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 12142 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 12148 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 12157 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 12166 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 12181 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 12197 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12206 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12223 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12232 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 12241 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 12250 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 12259 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 12269 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 12279 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 12289 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 12299 */ 'E', 'X', 'T', 'P', 0,
  /* 12304 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 12319 */ 'B', 'E', 'Q', 0,
  /* 12323 */ 'S', 'E', 'Q', 0,
  /* 12327 */ 'T', 'E', 'Q', 0,
  /* 12331 */ 'T', 'L', 'B', 'R', 0,
  /* 12336 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12351 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12365 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12380 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12391 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12402 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 12409 */ 'L', 'D', 'R', 0,
  /* 12413 */ 'S', 'D', 'R', 0,
  /* 12417 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12430 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12443 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12455 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12469 */ 'J', 'R', 0,
  /* 12472 */ 'J', 'A', 'L', 'R', 0,
  /* 12477 */ 'N', 'O', 'R', 0,
  /* 12481 */ 'X', 'O', 'R', 0,
  /* 12485 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 12491 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 12497 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 12503 */ 'L', 'W', 'R', 0,
  /* 12507 */ 'S', 'W', 'R', 0,
  /* 12511 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 12524 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 12535 */ 'C', 'I', 'N', 'S', 0,
  /* 12540 */ 'D', 'I', 'N', 'S', 0,
  /* 12545 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 12562 */ 'E', 'X', 'T', 'S', 0,
  /* 12567 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 12577 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 12587 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12598 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12609 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 12616 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 12623 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 12630 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 12638 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 12645 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 12653 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 12661 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 12670 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 12678 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 12688 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 12699 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12707 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12717 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 12724 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 12733 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 12743 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 12751 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 12759 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 12766 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 12773 */ 'C', '_', 'F', '_', 'S', 0,
  /* 12779 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 12798 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 12806 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 12813 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 12822 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 12831 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 12837 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 12845 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 12852 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 12862 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 12872 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 12881 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 12891 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 12899 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 12905 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 12915 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 12922 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 12931 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12939 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12949 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12960 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12968 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12978 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 12985 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 12994 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 13001 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 13009 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 13024 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 13032 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 13040 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 13050 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 13061 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 13069 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 13079 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 13086 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 13095 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 13102 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 13110 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 13117 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 13136 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 13143 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 13150 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 13160 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 13170 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 13179 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 13189 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 13197 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 13203 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 13212 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 13221 */ 'B', 'C', '1', 'T', 0,
  /* 13226 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 13232 */ 'B', 'G', 'T', 0,
  /* 13236 */ 'W', 'A', 'I', 'T', 0,
  /* 13241 */ 'B', 'L', 'T', 0,
  /* 13245 */ 'S', 'L', 'T', 0,
  /* 13249 */ 'T', 'L', 'T', 0,
  /* 13253 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 13265 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 13276 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 13287 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 13298 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 13313 */ 'D', 'E', 'X', 'T', 0,
  /* 13318 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 13330 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 13342 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 13348 */ 'B', 'G', 'E', 'U', 0,
  /* 13353 */ 'T', 'G', 'E', 'U', 0,
  /* 13358 */ 'B', 'L', 'E', 'U', 0,
  /* 13363 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 13369 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 13375 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 13382 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 13389 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 13395 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 13401 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 13407 */ 'B', 'G', 'T', 'U', 0,
  /* 13412 */ 'B', 'L', 'T', 'U', 0,
  /* 13417 */ 'T', 'L', 'T', 'U', 0,
  /* 13422 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 13428 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 13434 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 13440 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 13447 */ 'D', 'D', 'I', 'V', 0,
  /* 13452 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 13464 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 13475 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 13487 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 13498 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 13504 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 13510 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 13517 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 13525 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 13531 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 13538 */ 'I', 'N', 'S', 'V', 0,
  /* 13543 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 13549 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 13556 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 13563 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 13569 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 13575 */ 'B', 'Z', '_', 'V', 0,
  /* 13580 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 13586 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 13592 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 13599 */ 'L', 'W', 0,
  /* 13602 */ 'S', 'W', 0,
  /* 13605 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 13621 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 13629 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 13637 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 13653 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 13659 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 13667 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 13676 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 13685 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 13694 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 13701 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 13709 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 13716 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 13723 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 13730 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 13738 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 13744 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 13752 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 13760 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 13767 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 13774 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 13782 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 13790 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 13797 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 13804 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 13812 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 13820 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 13828 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 13835 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 13842 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 13849 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 13856 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 13871 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 13883 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 13900 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 13915 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 13923 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 13931 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 13938 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 13945 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 13953 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 13960 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 13967 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 13976 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 13983 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 13991 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 13999 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 14007 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 14016 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 14025 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 14033 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 14041 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 14049 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 14056 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 14062 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 14071 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 14078 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 14084 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 14092 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 14099 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 14106 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 14118 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 14130 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 14137 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 14144 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 14151 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 14159 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 14166 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 14173 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 14180 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 14188 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 14196 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 14202 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 14211 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 14220 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 14228 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 14238 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 14248 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 14257 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 14264 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 14271 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 14278 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 14285 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 14292 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 14301 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 14308 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 14316 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 14323 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 14330 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 14339 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 14349 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 14359 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 14368 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 14378 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 14388 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 14395 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 14405 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 14415 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 14426 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 14435 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14444 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14453 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14463 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 14474 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 14483 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 14493 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 14501 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 14509 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 14517 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 14526 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 14535 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 14544 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 14553 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 14562 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 14570 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 14579 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 14588 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 14597 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 14606 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 14615 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 14624 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 14633 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 14642 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 14650 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 14658 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 14668 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 14678 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 14692 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 14703 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 14711 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 14721 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 14729 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 14738 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 14746 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 14753 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 14760 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 14767 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 14775 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 14783 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 14790 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 14798 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 14807 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14815 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14824 */ 'S', 'T', '_', 'W', 0,
  /* 14829 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14838 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14847 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14857 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 14868 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14877 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14887 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 14895 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 14903 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 14911 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 14920 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 14929 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 14938 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 14947 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 14955 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 14964 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 14973 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 14982 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 14991 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 15002 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 15010 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 15018 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 15028 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 15038 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 15046 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 15054 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 15063 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 15071 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 15079 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 15087 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 15095 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 15102 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 15109 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 15117 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 15124 */ 'B', 'Z', '_', 'W', 0,
  /* 15129 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 15135 */ 'L', 'H', 'X', 0,
  /* 15139 */ 'J', 'A', 'L', 'X', 0,
  /* 15144 */ 'L', 'B', 'U', 'X', 0,
  /* 15149 */ 'L', 'W', 'X', 0,
  /* 15153 */ 'C', 'O', 'P', 'Y', 0,
  /* 15158 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 15174 */ 'B', 'G', 'E', 'Z', 0,
  /* 15179 */ 'B', 'L', 'E', 'Z', 0,
  /* 15184 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 15191 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 15198 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 15205 */ 'D', 'C', 'L', 'Z', 0,
  /* 15210 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 15217 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 15224 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 15231 */ 'B', 'G', 'T', 'Z', 0,
  /* 15236 */ 'B', 'L', 'T', 'Z', 0,
  /* 15241 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 15249 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 15257 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 15267 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 15277 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 15298 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 15304 */ 'A', 'N', 'D', 'i', 0,
  /* 15309 */ 'S', 'N', 'E', 'i', 0,
  /* 15314 */ 'S', 'E', 'Q', 'i', 0,
  /* 15319 */ 'X', 'O', 'R', 'i', 0,
  /* 15324 */ 'S', 'L', 'T', 'i', 0,
  /* 15329 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 15345 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 15359 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 15373 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 15387 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 15401 */ 'B', 'n', 'e', 'I', 'm', 'm', 0,
  /* 15408 */ 'B', 'e', 'q', 'I', 'm', 'm', 0,
  /* 15415 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 15428 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15441 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15452 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15464 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 15477 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 15490 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 15503 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 15516 */ 'L', 'B', 'u', 0,
  /* 15520 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 15526 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 15532 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 15538 */ 'L', 'H', 'u', 0,
  /* 15542 */ 'S', 'L', 'T', 'u', 0,
  /* 15547 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 15560 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 15572 */ 'L', 'W', 'u', 0,
  /* 15576 */ 'U', 'l', 'h', 'u', 0,
  /* 15581 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15600 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15610 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15628 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 15634 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 15649 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 15664 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 15678 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
  /* 15692 */ 'U', 'l', 'w', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8818U, 11165U, 11227U, 9073U, 9064U, 9178U, 7308U, 7323U, 
    7290U, 7337U, 12545U, 7275U, 7219U, 15153U, 7250U, 13298U, 
    5813U, 12031U, 13287U, 5831U, 13276U, 5636U, 12090U, 7641U, 
    4666U, 14606U, 5770U, 5666U, 9887U, 3740U, 10306U, 9534U, 
    9558U, 10319U, 3987U, 7442U, 7559U, 14349U, 13923U, 7514U, 
    7621U, 14588U, 5690U, 4844U, 5904U, 7921U, 13676U, 5252U, 
    6691U, 8410U, 14633U, 5444U, 7056U, 8659U, 14982U, 9775U, 
    4534U, 4644U, 3957U, 7706U, 4746U, 7661U, 4686U, 5058U, 
    6268U, 8106U, 14041U, 5514U, 7146U, 8729U, 15072U, 5723U, 
    4828U, 5887U, 7905U, 13659U, 9923U, 3763U, 15299U, 11057U, 
    15594U, 11147U, 15527U, 11111U, 11243U, 12304U, 11188U, 3886U, 
    5659U, 3728U, 5794U, 9586U, 1026U, 9613U, 4933U, 3829U, 
    9938U, 3772U, 13543U, 11551U, 11635U, 11806U, 15304U, 2139U, 
    11065U, 5806U, 5157U, 6538U, 8259U, 14435U, 5349U, 6903U, 
    8517U, 14829U, 2368U, 698U, 1820U, 4302U, 2291U, 621U, 
    1691U, 4229U, 2332U, 662U, 1732U, 4268U, 2311U, 641U, 
    1711U, 4248U, 2408U, 738U, 1860U, 4340U, 2271U, 601U, 
    1671U, 4210U, 2388U, 718U, 1840U, 4321U, 2352U, 682U, 
    1804U, 4287U, 8843U, 5653U, 3717U, 3857U, 5234U, 6673U, 
    8383U, 14615U, 5426U, 7038U, 8641U, 14964U, 5182U, 6612U, 
    8322U, 14509U, 5374U, 6977U, 8580U, 14903U, 2810U, 2686U, 
    3194U, 2838U, 2635U, 3134U, 2702U, 3497U, 3436U, 4452U, 
    9570U, 15526U, 8968U, 5572U, 3606U, 11187U, 12402U, 27U, 
    127U, 121U, 135U, 5555U, 15210U, 7285U, 9087U, 9984U, 
    15184U, 13221U, 9198U, 10743U, 15217U, 15191U, 4994U, 6218U, 
    8056U, 13991U, 5128U, 6463U, 8230U, 14264U, 3589U, 12319U, 
    1958U, 5685U, 9188U, 9820U, 5607U, 3666U, 5747U, 9913U, 
    10360U, 7232U, 5558U, 13348U, 5701U, 15174U, 2024U, 8976U, 
    5583U, 3627U, 9162U, 10466U, 10159U, 5729U, 9217U, 11018U, 
    13232U, 13407U, 15231U, 2056U, 5615U, 3679U, 5753U, 9229U, 
    11041U, 4970U, 6194U, 8032U, 13967U, 5100U, 6317U, 8133U, 
    14084U, 5024U, 6234U, 8072U, 14007U, 5142U, 6507U, 8244U, 
    14308U, 13440U, 12046U, 3906U, 7246U, 13358U, 15179U, 2031U, 
    5591U, 3640U, 5735U, 9223U, 11026U, 13241U, 5696U, 13412U, 
    5707U, 15236U, 2063U, 8983U, 5623U, 3692U, 9170U, 10477U, 
    10169U, 5759U, 9235U, 11049U, 5073U, 13592U, 5066U, 13580U, 
    7257U, 1557U, 5563U, 4940U, 6172U, 8010U, 13945U, 4912U, 
    6151U, 7989U, 13849U, 9082U, 9810U, 5599U, 3653U, 5741U, 
    9904U, 9961U, 5713U, 5549U, 7204U, 8764U, 13586U, 15129U, 
    5718U, 592U, 11294U, 8962U, 9641U, 10143U, 3866U, 4948U, 
    11537U, 11475U, 11730U, 11621U, 13556U, 11792U, 5042U, 6252U, 
    8090U, 14025U, 5321U, 6780U, 8489U, 14746U, 5544U, 7190U, 
    8759U, 13575U, 15124U, 15452U, 15408U, 3221U, 2867U, 3233U, 
    2880U, 15401U, 3209U, 2854U, 3120U, 3545U, 2931U, 2478U, 
    2959U, 2508U, 2989U, 3020U, 3044U, 3537U, 2917U, 2463U, 
    2945U, 2493U, 2973U, 3005U, 3035U, 1563U, 2070U, 7240U, 
    9952U, 3790U, 4129U, 1287U, 12872U, 559U, 1524U, 10969U, 
    13170U, 10707U, 4979U, 6203U, 8041U, 13976U, 5115U, 6387U, 
    8156U, 14167U, 43U, 9287U, 4436U, 12535U, 779U, 6530U, 
    13001U, 5190U, 6620U, 8330U, 14517U, 5382U, 6985U, 8588U, 
    14911U, 5174U, 6604U, 8314U, 14501U, 5366U, 6969U, 8572U, 
    14895U, 12005U, 10240U, 3897U, 4161U, 5208U, 6638U, 8348U, 
    14535U, 5400U, 7003U, 8606U, 14929U, 5269U, 6708U, 8427U, 
    14650U, 5472U, 7084U, 8687U, 15010U, 15206U, 11034U, 4039U, 
    4178U, 4581U, 4483U, 4696U, 4594U, 4496U, 4709U, 4612U, 
    4514U, 4727U, 6447U, 7528U, 12985U, 6143U, 12798U, 6049U, 
    7423U, 12724U, 6848U, 7688U, 13086U, 6110U, 12733U, 6400U, 
    12939U, 6002U, 12678U, 6801U, 13040U, 6426U, 12949U, 6028U, 
    12688U, 6827U, 13050U, 6360U, 12905U, 6437U, 12968U, 6039U, 
    12707U, 6838U, 13069U, 6370U, 12922U, 15158U, 11522U, 11777U, 
    5304U, 6763U, 8472U, 14729U, 5496U, 7128U, 8711U, 15054U, 
    54U, 9321U, 4443U, 12567U, 13611U, 10934U, 9247U, 12577U, 
    13643U, 10554U, 1310U, 9545U, 12891U, 10619U, 411U, 9467U, 
    1376U, 9263U, 14684U, 10990U, 582U, 1547U, 11001U, 13189U, 
    10732U, 393U, 1358U, 12978U, 276U, 1184U, 12773U, 249U, 
    1157U, 12717U, 468U, 1433U, 13079U, 208U, 1116U, 12653U, 
    218U, 1126U, 12661U, 336U, 1244U, 12837U, 438U, 1403U, 
    13024U, 229U, 1137U, 12670U, 448U, 1413U, 13032U, 373U, 
    1338U, 12931U, 258U, 1166U, 12759U, 383U, 1348U, 12960U, 
    239U, 1147U, 12699U, 458U, 1423U, 13061U, 355U, 1320U, 
    12915U, 3318U, 3157U, 2784U, 868U, 5769U, 15298U, 15593U, 
    15532U, 8789U, 11194U, 8832U, 8842U, 12045U, 12004U, 4160U, 
    15205U, 4177U, 13447U, 13428U, 13226U, 10751U, 13313U, 11181U, 
    13422U, 8776U, 12540U, 11175U, 13401U, 13448U, 13429U, 4008U, 
    4018U, 5288U, 6747U, 8446U, 14703U, 5480U, 7112U, 8695U, 
    15038U, 10035U, 4431U, 4092U, 0U, 48U, 889U, 11201U, 
    5826U, 13342U, 6U, 59U, 895U, 11214U, 7894U, 13363U, 
    9204U, 13259U, 15553U, 13389U, 4152U, 6664U, 8374U, 14570U, 
    7029U, 8632U, 14955U, 6586U, 8296U, 14483U, 6951U, 8554U, 
    14877U, 7770U, 7845U, 14106U, 7807U, 9034U, 12380U, 7871U, 
    7750U, 12085U, 7784U, 7858U, 14118U, 7833U, 6556U, 8277U, 
    14453U, 6921U, 8535U, 14847U, 9045U, 12391U, 7881U, 7798U, 
    12485U, 771U, 13531U, 7351U, 13458U, 5785U, 9183U, 757U, 
    802U, 13498U, 4420U, 143U, 13434U, 9193U, 764U, 13504U, 
    4806U, 15520U, 13481U, 3404U, 3382U, 4454U, 9844U, 3571U, 
    8781U, 10043U, 3839U, 13227U, 3705U, 10752U, 3937U, 13314U, 
    12299U, 12065U, 13517U, 13525U, 14415U, 14378U, 8454U, 15109U, 
    14405U, 14359U, 8392U, 14316U, 12562U, 786U, 10799U, 1576U, 
    2086U, 6522U, 402U, 1367U, 10450U, 12994U, 10630U, 14388U, 
    5951U, 189U, 1097U, 9922U, 12638U, 10533U, 13723U, 6096U, 
    13828U, 6386U, 14166U, 6529U, 14426U, 5988U, 13760U, 6787U, 
    14753U, 364U, 9455U, 1329U, 793U, 9522U, 6058U, 13790U, 
    6477U, 14278U, 6410U, 14180U, 6012U, 13774U, 6811U, 14767U, 
    6072U, 13804U, 6346U, 14137U, 7169U, 517U, 1482U, 10873U, 
    13136U, 10661U, 15095U, 8148U, 14151U, 5859U, 11260U, 13629U, 
    11277U, 6295U, 14062U, 6491U, 14292U, 6716U, 14658U, 7092U, 
    15018U, 6304U, 14071U, 6500U, 14301U, 5081U, 6282U, 11490U, 
    11745U, 8114U, 14049U, 5851U, 13621U, 1298U, 12881U, 570U, 
    1535U, 10979U, 13179U, 10719U, 5958U, 13730U, 5913U, 13685U, 
    7183U, 15117U, 5895U, 13667U, 6339U, 14130U, 526U, 9492U, 
    1491U, 13143U, 10671U, 5929U, 13701U, 6325U, 346U, 1254U, 
    10204U, 12845U, 10609U, 14092U, 305U, 1213U, 10000U, 12806U, 
    10575U, 6379U, 14159U, 6864U, 14790U, 6889U, 14815U, 6103U, 
    13835U, 6393U, 14173U, 5995U, 13767U, 6794U, 14760U, 6065U, 
    13797U, 6484U, 14285U, 6881U, 477U, 1442U, 10790U, 13102U, 
    10640U, 14807U, 5922U, 170U, 1078U, 9863U, 12623U, 10512U, 
    13694U, 6418U, 14188U, 6020U, 13782U, 6819U, 14775U, 6080U, 
    13812U, 6353U, 14144U, 6726U, 14668U, 7102U, 15028U, 8162U, 
    14196U, 6566U, 14463U, 6931U, 14857U, 3078U, 6577U, 8287U, 
    14474U, 6942U, 8545U, 14868U, 6547U, 8268U, 14444U, 6912U, 
    8526U, 14838U, 5529U, 7161U, 8744U, 15087U, 5108U, 6332U, 
    8141U, 14099U, 4889U, 5980U, 7966U, 13752U, 5150U, 6515U, 
    8252U, 14323U, 12536U, 5335U, 11310U, 11876U, 6872U, 11357U, 
    11919U, 11505U, 11333U, 11897U, 11760U, 11403U, 11961U, 8503U, 
    11380U, 11940U, 14798U, 11427U, 11983U, 13538U, 4897U, 6088U, 
    7974U, 13820U, 10488U, 8960U, 8972U, 12472U, 9717U, 1969U, 
    15428U, 15441U, 9736U, 10495U, 4464U, 10388U, 10458U, 15139U, 
    11010U, 10152U, 5577U, 3616U, 5568U, 3597U, 12469U, 9709U, 
    1964U, 12289U, 9577U, 4458U, 4100U, 10382U, 10138U, 3128U, 
    2264U, 15257U, 15267U, 3061U, 3053U, 3267U, 3099U, 4472U, 
    993U, 9756U, 15144U, 9851U, 15516U, 2207U, 11096U, 5791U, 
    33U, 941U, 9271U, 879U, 4060U, 921U, 4927U, 6166U, 
    8004U, 13939U, 9056U, 5648U, 12409U, 75U, 955U, 4876U, 
    5967U, 7953U, 13739U, 15600U, 2226U, 11143U, 7365U, 1600U, 
    9785U, 15135U, 10023U, 15538U, 2213U, 11119U, 9633U, 9151U, 
    5790U, 4122U, 10184U, 4146U, 4185U, 1003U, 12107U, 12166U, 
    15610U, 15581U, 15329U, 4432U, 3553U, 4093U, 87U, 971U, 
    9353U, 15341U, 2160U, 11089U, 13599U, 9794U, 2014U, 65U, 
    9337U, 901U, 4076U, 931U, 10289U, 9209U, 1926U, 10212U, 
    9670U, 9504U, 10226U, 5680U, 3753U, 10346U, 12503U, 1996U, 
    10436U, 10330U, 5674U, 10858U, 15149U, 99U, 9371U, 10504U, 
    10922U, 15572U, 2537U, 2601U, 2569U, 2618U, 3147U, 2888U, 
    2773U, 836U, 812U, 826U, 2166U, 866U, 3247U, 2904U, 
    2654U, 2716U, 5780U, 6128U, 12751U, 8204U, 14238U, 13336U, 
    12269U, 10815U, 5513U, 7145U, 8728U, 15071U, 199U, 9403U, 
    1107U, 12157U, 9930U, 8177U, 14211U, 12646U, 10544U, 9093U, 
    12417U, 9119U, 12443U, 5880U, 12616U, 5217U, 6647U, 8357U, 
    14544U, 5409U, 7012U, 8615U, 14938U, 4853U, 5914U, 7930U, 
    13686U, 7184U, 13197U, 5296U, 6755U, 8464U, 14721U, 5488U, 
    7120U, 8703U, 15046U, 1U, 49U, 9295U, 890U, 150U, 
    1032U, 9303U, 8800U, 9623U, 1616U, 12197U, 10057U, 12015U, 
    9688U, 1944U, 12232U, 10247U, 5867U, 12609U, 5199U, 6629U, 
    8339U, 14526U, 5391U, 6994U, 8597U, 14920U, 4836U, 5896U, 
    7913U, 13668U, 6340U, 12899U, 5226U, 6656U, 8366U, 14562U, 
    5418U, 7021U, 8624U, 14947U, 850U, 2191U, 5827U, 4804U, 
    13343U, 3967U, 3781U, 5166U, 6596U, 8306U, 14493U, 5358U, 
    6961U, 8564U, 14887U, 9595U, 10280U, 13549U, 267U, 9415U, 
    1175U, 8875U, 1752U, 10098U, 12766U, 10565U, 1052U, 8853U, 
    1645U, 12587U, 314U, 9427U, 1222U, 8901U, 1782U, 10108U, 
    12813U, 10585U, 487U, 9480U, 1452U, 8934U, 1896U, 10118U, 
    13110U, 10651U, 1065U, 8864U, 1658U, 12598U, 325U, 9441U, 
    1233U, 8910U, 1793U, 10128U, 12822U, 10597U, 4817U, 6120U, 
    12743U, 8194U, 14228U, 13324U, 12259U, 10806U, 5505U, 7137U, 
    8720U, 15063U, 180U, 9390U, 1088U, 12148U, 9871U, 8168U, 
    14202U, 12631U, 10523U, 7U, 60U, 9329U, 896U, 160U, 
    1042U, 9312U, 8822U, 1638U, 12223U, 10065U, 12072U, 12026U, 
    1951U, 12241U, 10255U, 17U, 111U, 911U, 22U, 116U, 
    916U, 7895U, 13364U, 3977U, 3820U, 9205U, 9131U, 12455U, 
    8990U, 12336U, 7581U, 14395U, 7631U, 14597U, 8214U, 14248U, 
    7819U, 7759U, 13260U, 12279U, 12250U, 10782U, 15554U, 11134U, 
    13384U, 3998U, 5537U, 7176U, 8752U, 15102U, 10205U, 3877U, 
    7499U, 8186U, 14220U, 4153U, 7602U, 3113U, 3240U, 2427U, 
    2246U, 3338U, 3471U, 3370U, 3523U, 4861U, 5937U, 7938U, 
    13709U, 4868U, 5944U, 7945U, 13716U, 198U, 9402U, 1106U, 
    12645U, 10543U, 179U, 9389U, 1087U, 12630U, 10522U, 12081U, 
    12477U, 1976U, 5010U, 10396U, 3919U, 13563U, 11566U, 11650U, 
    11821U, 9747U, 3308U, 3349U, 12478U, 9728U, 1977U, 5011U, 
    3848U, 10397U, 3920U, 13564U, 11567U, 11651U, 11822U, 15320U, 
    2147U, 11074U, 3448U, 7489U, 7269U, 9975U, 5521U, 7153U, 
    8736U, 15079U, 4881U, 5972U, 7958U, 13744U, 5328U, 6857U, 
    8496U, 14783U, 7457U, 4549U, 12086U, 9019U, 4373U, 12365U, 
    4404U, 9106U, 12430U, 9005U, 4358U, 12351U, 4389U, 7401U, 
    13871U, 7376U, 13900U, 7389U, 13856U, 13883U, 7303U, 9992U, 
    3801U, 4138U, 5798U, 4606U, 4508U, 4721U, 7522U, 7417U, 
    7682U, 13605U, 9241U, 13637U, 9257U, 14678U, 13253U, 15547U, 
    13452U, 13475U, 15277U, 2116U, 5774U, 13330U, 8794U, 1610U, 
    12009U, 1938U, 4811U, 13318U, 8805U, 1623U, 12206U, 13265U, 
    15560U, 7451U, 4543U, 15415U, 2176U, 13464U, 284U, 1192U, 
    8882U, 1761U, 12779U, 496U, 1461U, 8941U, 1905U, 13117U, 
    421U, 1386U, 8919U, 1879U, 13009U, 13487U, 4790U, 12136U, 
    12497U, 1988U, 10427U, 7732U, 4772U, 7473U, 4565U, 6865U, 
    13095U, 12486U, 13532U, 10913U, 10410U, 1275U, 12862U, 547U, 
    1512U, 10958U, 13160U, 10694U, 3068U, 2444U, 4425U, 2256U, 
    5261U, 6700U, 8419U, 14642U, 5464U, 7076U, 8679U, 15002U, 
    4801U, 9569U, 998U, 9857U, 5693U, 5765U, 4115U, 9898U, 
    4109U, 5848U, 12054U, 9698U, 10263U, 4168U, 38U, 948U, 
    9279U, 884U, 4068U, 926U, 13459U, 10881U, 9060U, 12413U, 
    81U, 963U, 4450U, 987U, 9837U, 3562U, 7361U, 1594U, 
    10016U, 3811U, 15224U, 2047U, 7210U, 4048U, 13212U, 15198U, 
    2038U, 7195U, 4027U, 13203U, 6276U, 12831U, 12323U, 15314U, 
    7891U, 9605U, 1605U, 4906U, 7983U, 13843U, 12020U, 13510U, 
    7723U, 4763U, 7671U, 14711U, 7465U, 4557U, 7592U, 14553U, 
    7714U, 4754U, 7570U, 4655U, 14368U, 7368U, 4475U, 7538U, 
    4623U, 14330U, 7741U, 4781U, 7481U, 4573U, 10029U, 4926U, 
    6165U, 8003U, 13938U, 4875U, 5966U, 7952U, 13738U, 9184U, 
    9652U, 803U, 2107U, 4956U, 6180U, 8018U, 13953U, 13499U, 
    10897U, 5088U, 6289U, 8121U, 10190U, 14056U, 13245U, 2008U, 
    10768U, 15324U, 2153U, 11081U, 15628U, 2238U, 11156U, 15542U, 
    2219U, 11126U, 7261U, 15309U, 11450U, 11596U, 11680U, 11705U, 
    11851U, 5033U, 6243U, 8081U, 14016U, 5313U, 6772U, 8481U, 
    14738U, 4421U, 4919U, 6158U, 7996U, 13931U, 4986U, 6210U, 
    8048U, 13983U, 5121U, 6456U, 8223U, 14257U, 13435U, 10865U, 
    4822U, 5874U, 7899U, 9830U, 13653U, 9194U, 9661U, 4963U, 
    6187U, 8025U, 13960U, 5002U, 6226U, 8064U, 13999U, 5135U, 
    6470U, 8237U, 14271U, 13505U, 10905U, 5094U, 6311U, 8127U, 
    10197U, 14078U, 12079U, 10297U, 4197U, 1014U, 12121U, 12181U, 
    5344U, 6898U, 8512U, 14824U, 4807U, 7433U, 7548U, 14339U, 
    13915U, 7506U, 7611U, 14579U, 5453U, 7065U, 8668U, 14991U, 
    5277U, 6736U, 8435U, 14692U, 5243U, 6682U, 8401U, 14624U, 
    5435U, 7047U, 8650U, 14973U, 9765U, 4525U, 4633U, 3947U, 
    7698U, 4738U, 7651U, 4676U, 5050U, 6260U, 8098U, 14033U, 
    5506U, 7138U, 8721U, 15064U, 9864U, 3580U, 15521U, 11103U, 
    93U, 979U, 9362U, 13602U, 9802U, 2019U, 70U, 9345U, 
    906U, 4084U, 936U, 9213U, 1932U, 10219U, 9679U, 9513U, 
    10233U, 10353U, 12507U, 2002U, 10443U, 10338U, 105U, 9380U, 
    10928U, 5631U, 8770U, 9879U, 9154U, 10179U, 11463U, 11609U, 
    11693U, 11718U, 11864U, 3092U, 2455U, 2553U, 3259U, 3275U, 
    15249U, 15241U, 15477U, 15359U, 15503U, 15387U, 15649U, 15678U, 
    15464U, 15345U, 15490U, 15373U, 15634U, 15664U, 2585U, 2523U, 
    3414U, 3283U, 3328U, 2742U, 3169U, 2797U, 2757U, 3181U, 
    2824U, 3295U, 3359U, 3510U, 2437U, 3393U, 2530U, 3425U, 
    3484U, 2670U, 2729U, 9145U, 12511U, 12524U, 12327U, 8827U, 
    10073U, 10367U, 7236U, 8779U, 13369U, 10832U, 10041U, 13353U, 
    10824U, 9945U, 12060U, 10272U, 12331U, 10374U, 8847U, 10089U, 
    12491U, 10418U, 13249U, 8837U, 10841U, 10081U, 13417U, 10850U, 
    10775U, 7265U, 8784U, 10049U, 9968U, 12040U, 1263U, 12852U, 
    535U, 1500U, 10947U, 13150U, 10681U, 13375U, 13482U, 10889U, 
    15576U, 15692U, 13382U, 12U, 13395U, 4905U, 6136U, 7982U, 
    13842U, 13236U, 10760U, 12142U, 7356U, 10008U, 12481U, 9727U, 
    1982U, 5017U, 3847U, 10403U, 3928U, 13569U, 11581U, 11665U, 
    11836U, 15319U, 2146U, 11073U, 3459U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1845);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1845);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget10_mm = 5,
  brtarget21 = 6,
  brtarget26 = 7,
  brtarget7_mm = 8,
  brtarget_mm = 9,
  calloffset16 = 10,
  calltarget = 11,
  calltarget_mm = 12,
  condcode = 13,
  cpinst_operand = 14,
  f32imm = 15,
  f64imm = 16,
  i16imm = 17,
  i1imm = 18,
  i32imm = 19,
  i64imm = 20,
  i8imm = 21,
  imm32 = 22,
  imm64 = 23,
  jmpoffset16 = 24,
  jmptarget = 25,
  jmptarget_mm = 26,
  li_simm7 = 27,
  mem = 28,
  mem16 = 29,
  mem16_ea = 30,
  mem_ea = 31,
  mem_mm_12 = 32,
  mem_mm_4 = 33,
  mem_mm_4_lsl1 = 34,
  mem_mm_4_lsl2 = 35,
  mem_mm_4sp = 36,
  mem_mm_gp_imm7_lsl2 = 37,
  mem_mm_sp_imm5_lsl2 = 38,
  mem_msa = 39,
  mem_simm11 = 40,
  mem_simm16 = 41,
  mem_simm9 = 42,
  movep_regpair = 43,
  pcrel16 = 44,
  reglist = 45,
  reglist16 = 46,
  regpair = 47,
  simm10 = 48,
  simm10_64 = 49,
  simm11 = 50,
  simm12 = 51,
  simm16 = 52,
  simm16_64 = 53,
  simm18_lsl3 = 54,
  simm19_lsl2 = 55,
  simm20 = 56,
  simm23_lsl2 = 57,
  simm3_lsa2 = 58,
  simm4 = 59,
  simm5 = 60,
  simm7 = 61,
  simm9 = 62,
  simm9_addiusp = 63,
  size_ext = 64,
  size_ins = 65,
  uimm10 = 66,
  uimm16 = 67,
  uimm16_64 = 68,
  uimm2 = 69,
  uimm20 = 70,
  uimm3 = 71,
  uimm3_shift = 72,
  uimm4 = 73,
  uimm4_andi = 74,
  uimm4_ptr = 75,
  uimm5 = 76,
  uimm5_64 = 77,
  uimm5_lsl2 = 78,
  uimm6 = 79,
  uimm6_lsl2 = 80,
  uimm6_ptr = 81,
  uimm8 = 82,
  uimmz = 83,
  vsplat_simm10 = 84,
  vsplat_simm5 = 85,
  vsplat_uimm1 = 86,
  vsplat_uimm2 = 87,
  vsplat_uimm3 = 88,
  vsplat_uimm4 = 89,
  vsplat_uimm5 = 90,
  vsplat_uimm6 = 91,
  vsplat_uimm8 = 92,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_mipsr6,
	Arch_micromipsr6,
	Arch_se,
	Arch_micromips
};

// MipsR62MicroMipsR6
int MipsR62MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t MipsR62MicroMipsR6Table[][3] = {
  { Mips::ADDIUPC, Mips::ADDIUPC, Mips::ADDIUPC_MMR6 },
  { Mips::ALIGN, Mips::ALIGN, Mips::ALIGN_MMR6 },
  { Mips::ALUIPC, Mips::ALUIPC, Mips::ALUIPC_MMR6 },
  { Mips::AUI, Mips::AUI, Mips::AUI_MMR6 },
  { Mips::AUIPC, Mips::AUIPC, Mips::AUIPC_MMR6 },
  { Mips::BALC, Mips::BALC, Mips::BALC_MMR6 },
  { Mips::BC, Mips::BC, Mips::BC_MMR6 },
  { Mips::BEQZALC, Mips::BEQZALC, Mips::BEQZALC_MMR6 },
  { Mips::BGEZALC, Mips::BGEZALC, Mips::BGEZALC_MMR6 },
  { Mips::BGTZALC, Mips::BGTZALC, Mips::BGTZALC_MMR6 },
  { Mips::BITSWAP, Mips::BITSWAP, Mips::BITSWAP_MMR6 },
  { Mips::BLEZALC, Mips::BLEZALC, Mips::BLEZALC_MMR6 },
  { Mips::BLTZALC, Mips::BLTZALC, Mips::BLTZALC_MMR6 },
  { Mips::BNEZALC, Mips::BNEZALC, Mips::BNEZALC_MMR6 },
  { Mips::CACHE_R6, Mips::CACHE_R6, Mips::CACHE_MMR6 },
  { Mips::CLO_R6, Mips::CLO_R6, Mips::CLO_MMR6 },
  { Mips::CLZ_R6, Mips::CLZ_R6, Mips::CLZ_MMR6 },
  { Mips::DIV, Mips::DIV, Mips::DIV_MMR6 },
  { Mips::DIVU, Mips::DIVU, Mips::DIVU_MMR6 },
  { Mips::JIALC, Mips::JIALC, Mips::JIALC_MMR6 },
  { Mips::JIC, Mips::JIC, Mips::JIC_MMR6 },
  { Mips::LSA_R6, Mips::LSA_R6, Mips::LSA_MMR6 },
  { Mips::LWPC, Mips::LWPC, Mips::LWPC_MMR6 },
  { Mips::MOD, Mips::MOD, Mips::MOD_MMR6 },
  { Mips::MODU, Mips::MODU, Mips::MODU_MMR6 },
  { Mips::MUH, Mips::MUH, Mips::MUH_MMR6 },
  { Mips::MUHU, Mips::MUHU, Mips::MUHU_MMR6 },
  { Mips::MULU, Mips::MULU, Mips::MULU_MMR6 },
  { Mips::MUL_R6, Mips::MUL_R6, Mips::MUL_MMR6 },
  { Mips::PREF_R6, Mips::PREF_R6, Mips::PREF_MMR6 },
  { Mips::SELEQZ, Mips::SELEQZ, Mips::SELEQZ_MMR6 },
  { Mips::SELNEZ, Mips::SELNEZ, Mips::SELNEZ_MMR6 },
}; // End of MipsR62MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 32;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == MipsR62MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < MipsR62MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_mipsr6)
    return MipsR62MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return MipsR62MicroMipsR6Table[mid][2];
  return -1;}

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JALX, Mips::JALX, Mips::JALX_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, (uint16_t)-1U },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 178;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

// Std2MicroMipsR6
int Std2MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsR6Table[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MMR6 },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDIU_MMR6 },
  { Mips::ADDu, Mips::ADDu, Mips::ADDU_MMR6 },
  { Mips::AND, Mips::AND, Mips::AND_MMR6 },
  { Mips::ANDi, Mips::ANDi, Mips::ANDI_MMR6 },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MMR6 },
  { Mips::EI, Mips::EI, Mips::EI_MMR6 },
  { Mips::NOR, Mips::NOR, Mips::NOR_MMR6 },
  { Mips::OR, Mips::OR, Mips::OR_MMR6 },
  { Mips::ORi, Mips::ORi, Mips::ORI_MMR6 },
  { Mips::SEB, Mips::SEB, Mips::SEB_MMR6 },
  { Mips::SEH, Mips::SEH, Mips::SEH_MMR6 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MMR6 },
  { Mips::XORi, Mips::XORi, Mips::XORI_MMR6 },
}; // End of Std2MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 14;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return Std2MicroMipsR6Table[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

