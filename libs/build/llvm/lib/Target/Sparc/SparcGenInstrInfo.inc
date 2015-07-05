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

namespace SP {
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
    ADDCCri	= 23,
    ADDCCrr	= 24,
    ADDCri	= 25,
    ADDCrr	= 26,
    ADDEri	= 27,
    ADDErr	= 28,
    ADDXC	= 29,
    ADDXCCC	= 30,
    ADDXri	= 31,
    ADDXrr	= 32,
    ADDri	= 33,
    ADDrr	= 34,
    ADJCALLSTACKDOWN	= 35,
    ADJCALLSTACKUP	= 36,
    ALIGNADDR	= 37,
    ALIGNADDRL	= 38,
    ANDCCri	= 39,
    ANDCCrr	= 40,
    ANDNCCri	= 41,
    ANDNCCrr	= 42,
    ANDNri	= 43,
    ANDNrr	= 44,
    ANDXNrr	= 45,
    ANDXri	= 46,
    ANDXrr	= 47,
    ANDri	= 48,
    ANDrr	= 49,
    ARRAY16	= 50,
    ARRAY32	= 51,
    ARRAY8	= 52,
    ATOMIC_LOAD_ADD_32	= 53,
    ATOMIC_LOAD_ADD_64	= 54,
    ATOMIC_LOAD_AND_32	= 55,
    ATOMIC_LOAD_AND_64	= 56,
    ATOMIC_LOAD_MAX_32	= 57,
    ATOMIC_LOAD_MAX_64	= 58,
    ATOMIC_LOAD_MIN_32	= 59,
    ATOMIC_LOAD_MIN_64	= 60,
    ATOMIC_LOAD_NAND_32	= 61,
    ATOMIC_LOAD_NAND_64	= 62,
    ATOMIC_LOAD_OR_32	= 63,
    ATOMIC_LOAD_OR_64	= 64,
    ATOMIC_LOAD_SUB_32	= 65,
    ATOMIC_LOAD_SUB_64	= 66,
    ATOMIC_LOAD_UMAX_32	= 67,
    ATOMIC_LOAD_UMAX_64	= 68,
    ATOMIC_LOAD_UMIN_32	= 69,
    ATOMIC_LOAD_UMIN_64	= 70,
    ATOMIC_LOAD_XOR_32	= 71,
    ATOMIC_LOAD_XOR_64	= 72,
    ATOMIC_SWAP_64	= 73,
    BA	= 74,
    BCOND	= 75,
    BCONDA	= 76,
    BINDri	= 77,
    BINDrr	= 78,
    BMASK	= 79,
    BPFCC	= 80,
    BPFCCA	= 81,
    BPFCCANT	= 82,
    BPFCCNT	= 83,
    BPGEZapn	= 84,
    BPGEZapt	= 85,
    BPGEZnapn	= 86,
    BPGEZnapt	= 87,
    BPGZapn	= 88,
    BPGZapt	= 89,
    BPGZnapn	= 90,
    BPGZnapt	= 91,
    BPICC	= 92,
    BPICCA	= 93,
    BPICCANT	= 94,
    BPICCNT	= 95,
    BPLEZapn	= 96,
    BPLEZapt	= 97,
    BPLEZnapn	= 98,
    BPLEZnapt	= 99,
    BPLZapn	= 100,
    BPLZapt	= 101,
    BPLZnapn	= 102,
    BPLZnapt	= 103,
    BPNZapn	= 104,
    BPNZapt	= 105,
    BPNZnapn	= 106,
    BPNZnapt	= 107,
    BPXCC	= 108,
    BPXCCA	= 109,
    BPXCCANT	= 110,
    BPXCCNT	= 111,
    BPZapn	= 112,
    BPZapt	= 113,
    BPZnapn	= 114,
    BPZnapt	= 115,
    BSHUFFLE	= 116,
    CALL	= 117,
    CALLri	= 118,
    CALLrr	= 119,
    CASXrr	= 120,
    CASrr	= 121,
    CMASK16	= 122,
    CMASK32	= 123,
    CMASK8	= 124,
    CMPri	= 125,
    CMPrr	= 126,
    EDGE16	= 127,
    EDGE16L	= 128,
    EDGE16LN	= 129,
    EDGE16N	= 130,
    EDGE32	= 131,
    EDGE32L	= 132,
    EDGE32LN	= 133,
    EDGE32N	= 134,
    EDGE8	= 135,
    EDGE8L	= 136,
    EDGE8LN	= 137,
    EDGE8N	= 138,
    FABSD	= 139,
    FABSQ	= 140,
    FABSS	= 141,
    FADDD	= 142,
    FADDQ	= 143,
    FADDS	= 144,
    FALIGNADATA	= 145,
    FAND	= 146,
    FANDNOT1	= 147,
    FANDNOT1S	= 148,
    FANDNOT2	= 149,
    FANDNOT2S	= 150,
    FANDS	= 151,
    FBCOND	= 152,
    FBCONDA	= 153,
    FCHKSM16	= 154,
    FCMPD	= 155,
    FCMPEQ16	= 156,
    FCMPEQ32	= 157,
    FCMPGT16	= 158,
    FCMPGT32	= 159,
    FCMPLE16	= 160,
    FCMPLE32	= 161,
    FCMPNE16	= 162,
    FCMPNE32	= 163,
    FCMPQ	= 164,
    FCMPS	= 165,
    FDIVD	= 166,
    FDIVQ	= 167,
    FDIVS	= 168,
    FDMULQ	= 169,
    FDTOI	= 170,
    FDTOQ	= 171,
    FDTOS	= 172,
    FDTOX	= 173,
    FEXPAND	= 174,
    FHADDD	= 175,
    FHADDS	= 176,
    FHSUBD	= 177,
    FHSUBS	= 178,
    FITOD	= 179,
    FITOQ	= 180,
    FITOS	= 181,
    FLCMPD	= 182,
    FLCMPS	= 183,
    FLUSHW	= 184,
    FMEAN16	= 185,
    FMOVD	= 186,
    FMOVD_FCC	= 187,
    FMOVD_ICC	= 188,
    FMOVD_XCC	= 189,
    FMOVQ	= 190,
    FMOVQ_FCC	= 191,
    FMOVQ_ICC	= 192,
    FMOVQ_XCC	= 193,
    FMOVRGEZD	= 194,
    FMOVRGEZQ	= 195,
    FMOVRGEZS	= 196,
    FMOVRGZD	= 197,
    FMOVRGZQ	= 198,
    FMOVRGZS	= 199,
    FMOVRLEZD	= 200,
    FMOVRLEZQ	= 201,
    FMOVRLEZS	= 202,
    FMOVRLZD	= 203,
    FMOVRLZQ	= 204,
    FMOVRLZS	= 205,
    FMOVRNZD	= 206,
    FMOVRNZQ	= 207,
    FMOVRNZS	= 208,
    FMOVRZD	= 209,
    FMOVRZQ	= 210,
    FMOVRZS	= 211,
    FMOVS	= 212,
    FMOVS_FCC	= 213,
    FMOVS_ICC	= 214,
    FMOVS_XCC	= 215,
    FMUL8SUX16	= 216,
    FMUL8ULX16	= 217,
    FMUL8X16	= 218,
    FMUL8X16AL	= 219,
    FMUL8X16AU	= 220,
    FMULD	= 221,
    FMULD8SUX16	= 222,
    FMULD8ULX16	= 223,
    FMULQ	= 224,
    FMULS	= 225,
    FNADDD	= 226,
    FNADDS	= 227,
    FNAND	= 228,
    FNANDS	= 229,
    FNEGD	= 230,
    FNEGQ	= 231,
    FNEGS	= 232,
    FNHADDD	= 233,
    FNHADDS	= 234,
    FNMULD	= 235,
    FNMULS	= 236,
    FNOR	= 237,
    FNORS	= 238,
    FNOT1	= 239,
    FNOT1S	= 240,
    FNOT2	= 241,
    FNOT2S	= 242,
    FNSMULD	= 243,
    FONE	= 244,
    FONES	= 245,
    FOR	= 246,
    FORNOT1	= 247,
    FORNOT1S	= 248,
    FORNOT2	= 249,
    FORNOT2S	= 250,
    FORS	= 251,
    FPACK16	= 252,
    FPACK32	= 253,
    FPACKFIX	= 254,
    FPADD16	= 255,
    FPADD16S	= 256,
    FPADD32	= 257,
    FPADD32S	= 258,
    FPADD64	= 259,
    FPMERGE	= 260,
    FPSUB16	= 261,
    FPSUB16S	= 262,
    FPSUB32	= 263,
    FPSUB32S	= 264,
    FQTOD	= 265,
    FQTOI	= 266,
    FQTOS	= 267,
    FQTOX	= 268,
    FSLAS16	= 269,
    FSLAS32	= 270,
    FSLL16	= 271,
    FSLL32	= 272,
    FSMULD	= 273,
    FSQRTD	= 274,
    FSQRTQ	= 275,
    FSQRTS	= 276,
    FSRA16	= 277,
    FSRA32	= 278,
    FSRC1	= 279,
    FSRC1S	= 280,
    FSRC2	= 281,
    FSRC2S	= 282,
    FSRL16	= 283,
    FSRL32	= 284,
    FSTOD	= 285,
    FSTOI	= 286,
    FSTOQ	= 287,
    FSTOX	= 288,
    FSUBD	= 289,
    FSUBQ	= 290,
    FSUBS	= 291,
    FXNOR	= 292,
    FXNORS	= 293,
    FXOR	= 294,
    FXORS	= 295,
    FXTOD	= 296,
    FXTOQ	= 297,
    FXTOS	= 298,
    FZERO	= 299,
    FZEROS	= 300,
    GETPCX	= 301,
    JMPLri	= 302,
    JMPLrr	= 303,
    LDArr	= 304,
    LDDFri	= 305,
    LDDFrr	= 306,
    LDFri	= 307,
    LDFrr	= 308,
    LDQFri	= 309,
    LDQFrr	= 310,
    LDSBArr	= 311,
    LDSBri	= 312,
    LDSBrr	= 313,
    LDSHArr	= 314,
    LDSHri	= 315,
    LDSHrr	= 316,
    LDSWri	= 317,
    LDSWrr	= 318,
    LDUBArr	= 319,
    LDUBri	= 320,
    LDUBrr	= 321,
    LDUHArr	= 322,
    LDUHri	= 323,
    LDUHrr	= 324,
    LDXri	= 325,
    LDXrr	= 326,
    LDri	= 327,
    LDrr	= 328,
    LEAX_ADDri	= 329,
    LEA_ADDri	= 330,
    LZCNT	= 331,
    MEMBARi	= 332,
    MOVDTOX	= 333,
    MOVFCCri	= 334,
    MOVFCCrr	= 335,
    MOVICCri	= 336,
    MOVICCrr	= 337,
    MOVRGEZri	= 338,
    MOVRGEZrr	= 339,
    MOVRGZri	= 340,
    MOVRGZrr	= 341,
    MOVRLEZri	= 342,
    MOVRLEZrr	= 343,
    MOVRLZri	= 344,
    MOVRLZrr	= 345,
    MOVRNZri	= 346,
    MOVRNZrr	= 347,
    MOVRRZri	= 348,
    MOVRRZrr	= 349,
    MOVSTOSW	= 350,
    MOVSTOUW	= 351,
    MOVWTOS	= 352,
    MOVXCCri	= 353,
    MOVXCCrr	= 354,
    MOVXTOD	= 355,
    MULXri	= 356,
    MULXrr	= 357,
    NOP	= 358,
    ORCCri	= 359,
    ORCCrr	= 360,
    ORNCCri	= 361,
    ORNCCrr	= 362,
    ORNri	= 363,
    ORNrr	= 364,
    ORXNrr	= 365,
    ORXri	= 366,
    ORXrr	= 367,
    ORri	= 368,
    ORrr	= 369,
    PDIST	= 370,
    PDISTN	= 371,
    POPCrr	= 372,
    RDASR	= 373,
    RDPSR	= 374,
    RDTBR	= 375,
    RDWIM	= 376,
    RESTOREri	= 377,
    RESTORErr	= 378,
    RET	= 379,
    RETL	= 380,
    RETTri	= 381,
    RETTrr	= 382,
    SAVEri	= 383,
    SAVErr	= 384,
    SDIVCCri	= 385,
    SDIVCCrr	= 386,
    SDIVXri	= 387,
    SDIVXrr	= 388,
    SDIVri	= 389,
    SDIVrr	= 390,
    SELECT_CC_DFP_FCC	= 391,
    SELECT_CC_DFP_ICC	= 392,
    SELECT_CC_FP_FCC	= 393,
    SELECT_CC_FP_ICC	= 394,
    SELECT_CC_Int_FCC	= 395,
    SELECT_CC_Int_ICC	= 396,
    SELECT_CC_QFP_FCC	= 397,
    SELECT_CC_QFP_ICC	= 398,
    SET	= 399,
    SETHIXi	= 400,
    SETHIi	= 401,
    SHUTDOWN	= 402,
    SIAM	= 403,
    SLLXri	= 404,
    SLLXrr	= 405,
    SLLri	= 406,
    SLLrr	= 407,
    SMULCCri	= 408,
    SMULCCrr	= 409,
    SMULri	= 410,
    SMULrr	= 411,
    SRAXri	= 412,
    SRAXrr	= 413,
    SRAri	= 414,
    SRArr	= 415,
    SRLXri	= 416,
    SRLXrr	= 417,
    SRLri	= 418,
    SRLrr	= 419,
    STArr	= 420,
    STBAR	= 421,
    STBArr	= 422,
    STBri	= 423,
    STBrr	= 424,
    STDFri	= 425,
    STDFrr	= 426,
    STFri	= 427,
    STFrr	= 428,
    STHArr	= 429,
    STHri	= 430,
    STHrr	= 431,
    STQFri	= 432,
    STQFrr	= 433,
    STXri	= 434,
    STXrr	= 435,
    STri	= 436,
    STrr	= 437,
    SUBCCri	= 438,
    SUBCCrr	= 439,
    SUBCri	= 440,
    SUBCrr	= 441,
    SUBEri	= 442,
    SUBErr	= 443,
    SUBXri	= 444,
    SUBXrr	= 445,
    SUBri	= 446,
    SUBrr	= 447,
    SWAPArr	= 448,
    SWAPri	= 449,
    SWAPrr	= 450,
    TA3	= 451,
    TA5	= 452,
    TADDCCTVri	= 453,
    TADDCCTVrr	= 454,
    TADDCCri	= 455,
    TADDCCrr	= 456,
    TICCri	= 457,
    TICCrr	= 458,
    TLS_ADDXrr	= 459,
    TLS_ADDrr	= 460,
    TLS_CALL	= 461,
    TLS_LDXrr	= 462,
    TLS_LDrr	= 463,
    TSUBCCTVri	= 464,
    TSUBCCTVrr	= 465,
    TSUBCCri	= 466,
    TSUBCCrr	= 467,
    TXCCri	= 468,
    TXCCrr	= 469,
    UDIVCCri	= 470,
    UDIVCCrr	= 471,
    UDIVXri	= 472,
    UDIVXrr	= 473,
    UDIVri	= 474,
    UDIVrr	= 475,
    UMULCCri	= 476,
    UMULCCrr	= 477,
    UMULXHI	= 478,
    UMULri	= 479,
    UMULrr	= 480,
    UNIMP	= 481,
    V9FCMPD	= 482,
    V9FCMPED	= 483,
    V9FCMPEQ	= 484,
    V9FCMPES	= 485,
    V9FCMPQ	= 486,
    V9FCMPS	= 487,
    V9FMOVD_FCC	= 488,
    V9FMOVQ_FCC	= 489,
    V9FMOVS_FCC	= 490,
    V9MOVFCCri	= 491,
    V9MOVFCCrr	= 492,
    WRASRri	= 493,
    WRASRrr	= 494,
    WRPSRri	= 495,
    WRPSRrr	= 496,
    WRTBRri	= 497,
    WRTBRrr	= 498,
    WRWIMri	= 499,
    WRWIMrr	= 500,
    XMULX	= 501,
    XMULXHI	= 502,
    XNORCCri	= 503,
    XNORCCrr	= 504,
    XNORXrr	= 505,
    XNORri	= 506,
    XNORrr	= 507,
    XORCCri	= 508,
    XORCCrr	= 509,
    XORXri	= 510,
    XORXrr	= 511,
    XORri	= 512,
    XORrr	= 513,
    INSTRUCTION_LIST_END = 514
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End SP namespace
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

static const uint16_t ImplicitList1[] = { SP::ICC, 0 };
static const uint16_t ImplicitList2[] = { SP::O6, 0 };
static const uint16_t ImplicitList3[] = { SP::FCC0, 0 };
static const uint16_t ImplicitList4[] = { SP::O7, 0 };
static const uint16_t ImplicitList5[] = { SP::PSR, 0 };
static const uint16_t ImplicitList6[] = { SP::TBR, 0 };
static const uint16_t ImplicitList7[] = { SP::WIM, 0 };
static const uint16_t ImplicitList8[] = { SP::Y, SP::ICC, 0 };
static const uint16_t ImplicitList9[] = { SP::Y, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo24[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo25[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo45[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo46[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo87[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 23,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADDCCri
  { 24,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADDCCrr
  { 25,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #25 = ADDCri
  { 26,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #26 = ADDCrr
  { 27,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #27 = ADDEri
  { 28,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #28 = ADDErr
  { 29,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #29 = ADDXC
  { 30,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #30 = ADDXCCC
  { 31,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #31 = ADDXri
  { 32,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #32 = ADDXrr
  { 33,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = ADDri
  { 34,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #34 = ADDrr
  { 35,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #35 = ADJCALLSTACKDOWN
  { 36,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #36 = ADJCALLSTACKUP
  { 37,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = ALIGNADDR
  { 38,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = ALIGNADDRL
  { 39,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #39 = ANDCCri
  { 40,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #40 = ANDCCrr
  { 41,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #41 = ANDNCCri
  { 42,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #42 = ANDNCCrr
  { 43,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #43 = ANDNri
  { 44,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #44 = ANDNrr
  { 45,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #45 = ANDXNrr
  { 46,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = ANDXri
  { 47,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #47 = ANDXrr
  { 48,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #48 = ANDri
  { 49,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #49 = ANDrr
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #50 = ARRAY16
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #51 = ARRAY32
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #52 = ARRAY8
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #53 = ATOMIC_LOAD_ADD_32
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #54 = ATOMIC_LOAD_ADD_64
  { 55,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #55 = ATOMIC_LOAD_AND_32
  { 56,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #56 = ATOMIC_LOAD_AND_64
  { 57,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #57 = ATOMIC_LOAD_MAX_32
  { 58,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #58 = ATOMIC_LOAD_MAX_64
  { 59,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #59 = ATOMIC_LOAD_MIN_32
  { 60,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #60 = ATOMIC_LOAD_MIN_64
  { 61,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #61 = ATOMIC_LOAD_NAND_32
  { 62,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #62 = ATOMIC_LOAD_NAND_64
  { 63,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #63 = ATOMIC_LOAD_OR_32
  { 64,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #64 = ATOMIC_LOAD_OR_64
  { 65,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #65 = ATOMIC_LOAD_SUB_32
  { 66,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #66 = ATOMIC_LOAD_SUB_64
  { 67,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #67 = ATOMIC_LOAD_UMAX_32
  { 68,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #68 = ATOMIC_LOAD_UMAX_64
  { 69,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #69 = ATOMIC_LOAD_UMIN_32
  { 70,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #70 = ATOMIC_LOAD_UMIN_64
  { 71,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #71 = ATOMIC_LOAD_XOR_32
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #72 = ATOMIC_LOAD_XOR_64
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #73 = ATOMIC_SWAP_64
  { 74,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #74 = BA
  { 75,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #75 = BCOND
  { 76,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #76 = BCONDA
  { 77,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #77 = BINDri
  { 78,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #78 = BINDrr
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #79 = BMASK
  { 80,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #80 = BPFCC
  { 81,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #81 = BPFCCA
  { 82,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #82 = BPFCCANT
  { 83,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #83 = BPFCCNT
  { 84,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #84 = BPGEZapn
  { 85,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #85 = BPGEZapt
  { 86,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #86 = BPGEZnapn
  { 87,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #87 = BPGEZnapt
  { 88,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #88 = BPGZapn
  { 89,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #89 = BPGZapt
  { 90,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #90 = BPGZnapn
  { 91,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #91 = BPGZnapt
  { 92,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #92 = BPICC
  { 93,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #93 = BPICCA
  { 94,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #94 = BPICCANT
  { 95,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #95 = BPICCNT
  { 96,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #96 = BPLEZapn
  { 97,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #97 = BPLEZapt
  { 98,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #98 = BPLEZnapn
  { 99,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = BPLEZnapt
  { 100,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #100 = BPLZapn
  { 101,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = BPLZapt
  { 102,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #102 = BPLZnapn
  { 103,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #103 = BPLZnapt
  { 104,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #104 = BPNZapn
  { 105,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #105 = BPNZapt
  { 106,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = BPNZnapn
  { 107,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #107 = BPNZnapt
  { 108,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #108 = BPXCC
  { 109,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #109 = BPXCCA
  { 110,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #110 = BPXCCANT
  { 111,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #111 = BPXCCNT
  { 112,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #112 = BPZapn
  { 113,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #113 = BPZapt
  { 114,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #114 = BPZnapn
  { 115,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #115 = BPZnapt
  { 116,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #116 = BSHUFFLE
  { 117,	1,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #117 = CALL
  { 118,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #118 = CALLri
  { 119,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #119 = CALLrr
  { 120,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #120 = CASXrr
  { 121,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #121 = CASrr
  { 122,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #122 = CMASK16
  { 123,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #123 = CMASK32
  { 124,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #124 = CMASK8
  { 125,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #125 = CMPri
  { 126,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #126 = CMPrr
  { 127,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #127 = EDGE16
  { 128,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #128 = EDGE16L
  { 129,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #129 = EDGE16LN
  { 130,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #130 = EDGE16N
  { 131,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #131 = EDGE32
  { 132,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #132 = EDGE32L
  { 133,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #133 = EDGE32LN
  { 134,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #134 = EDGE32N
  { 135,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #135 = EDGE8
  { 136,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #136 = EDGE8L
  { 137,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #137 = EDGE8LN
  { 138,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #138 = EDGE8N
  { 139,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #139 = FABSD
  { 140,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #140 = FABSQ
  { 141,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #141 = FABSS
  { 142,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #142 = FADDD
  { 143,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #143 = FADDQ
  { 144,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #144 = FADDS
  { 145,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #145 = FALIGNADATA
  { 146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #146 = FAND
  { 147,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #147 = FANDNOT1
  { 148,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #148 = FANDNOT1S
  { 149,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #149 = FANDNOT2
  { 150,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #150 = FANDNOT2S
  { 151,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #151 = FANDS
  { 152,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #152 = FBCOND
  { 153,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #153 = FBCONDA
  { 154,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #154 = FCHKSM16
  { 155,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo28, -1 ,nullptr },  // Inst #155 = FCMPD
  { 156,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #156 = FCMPEQ16
  { 157,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #157 = FCMPEQ32
  { 158,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #158 = FCMPGT16
  { 159,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #159 = FCMPGT32
  { 160,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #160 = FCMPLE16
  { 161,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #161 = FCMPLE32
  { 162,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #162 = FCMPNE16
  { 163,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #163 = FCMPNE32
  { 164,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo29, -1 ,nullptr },  // Inst #164 = FCMPQ
  { 165,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo30, -1 ,nullptr },  // Inst #165 = FCMPS
  { 166,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #166 = FDIVD
  { 167,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #167 = FDIVQ
  { 168,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #168 = FDIVS
  { 169,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #169 = FDMULQ
  { 170,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #170 = FDTOI
  { 171,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #171 = FDTOQ
  { 172,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #172 = FDTOS
  { 173,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #173 = FDTOX
  { 174,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #174 = FEXPAND
  { 175,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #175 = FHADDD
  { 176,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #176 = FHADDS
  { 177,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #177 = FHSUBD
  { 178,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #178 = FHSUBS
  { 179,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #179 = FITOD
  { 180,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #180 = FITOQ
  { 181,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #181 = FITOS
  { 182,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = FLCMPD
  { 183,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #183 = FLCMPS
  { 184,	0,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #184 = FLUSHW
  { 185,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #185 = FMEAN16
  { 186,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #186 = FMOVD
  { 187,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #187 = FMOVD_FCC
  { 188,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #188 = FMOVD_ICC
  { 189,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #189 = FMOVD_XCC
  { 190,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #190 = FMOVQ
  { 191,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #191 = FMOVQ_FCC
  { 192,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #192 = FMOVQ_ICC
  { 193,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #193 = FMOVQ_XCC
  { 194,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #194 = FMOVRGEZD
  { 195,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #195 = FMOVRGEZQ
  { 196,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #196 = FMOVRGEZS
  { 197,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #197 = FMOVRGZD
  { 198,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #198 = FMOVRGZQ
  { 199,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #199 = FMOVRGZS
  { 200,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #200 = FMOVRLEZD
  { 201,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #201 = FMOVRLEZQ
  { 202,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #202 = FMOVRLEZS
  { 203,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #203 = FMOVRLZD
  { 204,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #204 = FMOVRLZQ
  { 205,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #205 = FMOVRLZS
  { 206,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #206 = FMOVRNZD
  { 207,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #207 = FMOVRNZQ
  { 208,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #208 = FMOVRNZS
  { 209,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #209 = FMOVRZD
  { 210,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #210 = FMOVRZQ
  { 211,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #211 = FMOVRZS
  { 212,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #212 = FMOVS
  { 213,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #213 = FMOVS_FCC
  { 214,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #214 = FMOVS_ICC
  { 215,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #215 = FMOVS_XCC
  { 216,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #216 = FMUL8SUX16
  { 217,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #217 = FMUL8ULX16
  { 218,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #218 = FMUL8X16
  { 219,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #219 = FMUL8X16AL
  { 220,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #220 = FMUL8X16AU
  { 221,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #221 = FMULD
  { 222,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #222 = FMULD8SUX16
  { 223,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #223 = FMULD8ULX16
  { 224,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #224 = FMULQ
  { 225,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #225 = FMULS
  { 226,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #226 = FNADDD
  { 227,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #227 = FNADDS
  { 228,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #228 = FNAND
  { 229,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #229 = FNANDS
  { 230,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #230 = FNEGD
  { 231,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #231 = FNEGQ
  { 232,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #232 = FNEGS
  { 233,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #233 = FNHADDD
  { 234,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #234 = FNHADDS
  { 235,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #235 = FNMULD
  { 236,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #236 = FNMULS
  { 237,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #237 = FNOR
  { 238,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #238 = FNORS
  { 239,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #239 = FNOT1
  { 240,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #240 = FNOT1S
  { 241,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #241 = FNOT2
  { 242,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #242 = FNOT2S
  { 243,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #243 = FNSMULD
  { 244,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #244 = FONE
  { 245,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #245 = FONES
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #246 = FOR
  { 247,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #247 = FORNOT1
  { 248,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #248 = FORNOT1S
  { 249,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #249 = FORNOT2
  { 250,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #250 = FORNOT2S
  { 251,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #251 = FORS
  { 252,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #252 = FPACK16
  { 253,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #253 = FPACK32
  { 254,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #254 = FPACKFIX
  { 255,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #255 = FPADD16
  { 256,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #256 = FPADD16S
  { 257,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #257 = FPADD32
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #258 = FPADD32S
  { 259,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #259 = FPADD64
  { 260,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #260 = FPMERGE
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #261 = FPSUB16
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #262 = FPSUB16S
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #263 = FPSUB32
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #264 = FPSUB32S
  { 265,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #265 = FQTOD
  { 266,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #266 = FQTOI
  { 267,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #267 = FQTOS
  { 268,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #268 = FQTOX
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #269 = FSLAS16
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #270 = FSLAS32
  { 271,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #271 = FSLL16
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #272 = FSLL32
  { 273,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #273 = FSMULD
  { 274,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #274 = FSQRTD
  { 275,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #275 = FSQRTQ
  { 276,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #276 = FSQRTS
  { 277,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #277 = FSRA16
  { 278,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #278 = FSRA32
  { 279,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #279 = FSRC1
  { 280,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #280 = FSRC1S
  { 281,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #281 = FSRC2
  { 282,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #282 = FSRC2S
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #283 = FSRL16
  { 284,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #284 = FSRL32
  { 285,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #285 = FSTOD
  { 286,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #286 = FSTOI
  { 287,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #287 = FSTOQ
  { 288,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #288 = FSTOX
  { 289,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #289 = FSUBD
  { 290,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #290 = FSUBQ
  { 291,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #291 = FSUBS
  { 292,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #292 = FXNOR
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #293 = FXNORS
  { 294,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #294 = FXOR
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #295 = FXORS
  { 296,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #296 = FXTOD
  { 297,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #297 = FXTOQ
  { 298,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #298 = FXTOS
  { 299,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #299 = FZERO
  { 300,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #300 = FZEROS
  { 301,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #301 = GETPCX
  { 302,	3,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #302 = JMPLri
  { 303,	3,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #303 = JMPLrr
  { 304,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #304 = LDArr
  { 305,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #305 = LDDFri
  { 306,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #306 = LDDFrr
  { 307,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #307 = LDFri
  { 308,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #308 = LDFrr
  { 309,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #309 = LDQFri
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #310 = LDQFrr
  { 311,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #311 = LDSBArr
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #312 = LDSBri
  { 313,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #313 = LDSBrr
  { 314,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #314 = LDSHArr
  { 315,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #315 = LDSHri
  { 316,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #316 = LDSHrr
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #317 = LDSWri
  { 318,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #318 = LDSWrr
  { 319,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #319 = LDUBArr
  { 320,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #320 = LDUBri
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #321 = LDUBrr
  { 322,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #322 = LDUHArr
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #323 = LDUHri
  { 324,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #324 = LDUHrr
  { 325,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #325 = LDXri
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #326 = LDXrr
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #327 = LDri
  { 328,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #328 = LDrr
  { 329,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #329 = LEAX_ADDri
  { 330,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #330 = LEA_ADDri
  { 331,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #331 = LZCNT
  { 332,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #332 = MEMBARi
  { 333,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #333 = MOVDTOX
  { 334,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #334 = MOVFCCri
  { 335,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #335 = MOVFCCrr
  { 336,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #336 = MOVICCri
  { 337,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #337 = MOVICCrr
  { 338,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #338 = MOVRGEZri
  { 339,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #339 = MOVRGEZrr
  { 340,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #340 = MOVRGZri
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #341 = MOVRGZrr
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #342 = MOVRLEZri
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #343 = MOVRLEZrr
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #344 = MOVRLZri
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #345 = MOVRLZrr
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #346 = MOVRNZri
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #347 = MOVRNZrr
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #348 = MOVRRZri
  { 349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #349 = MOVRRZrr
  { 350,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #350 = MOVSTOSW
  { 351,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #351 = MOVSTOUW
  { 352,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #352 = MOVWTOS
  { 353,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #353 = MOVXCCri
  { 354,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #354 = MOVXCCrr
  { 355,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #355 = MOVXTOD
  { 356,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #356 = MULXri
  { 357,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #357 = MULXrr
  { 358,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #358 = NOP
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #359 = ORCCri
  { 360,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #360 = ORCCrr
  { 361,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #361 = ORNCCri
  { 362,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #362 = ORNCCrr
  { 363,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #363 = ORNri
  { 364,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #364 = ORNrr
  { 365,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #365 = ORXNrr
  { 366,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #366 = ORXri
  { 367,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #367 = ORXrr
  { 368,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #368 = ORri
  { 369,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #369 = ORrr
  { 370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #370 = PDIST
  { 371,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #371 = PDISTN
  { 372,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #372 = POPCrr
  { 373,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #373 = RDASR
  { 374,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList5, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #374 = RDPSR
  { 375,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList6, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #375 = RDTBR
  { 376,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #376 = RDWIM
  { 377,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #377 = RESTOREri
  { 378,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #378 = RESTORErr
  { 379,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #379 = RET
  { 380,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #380 = RETL
  { 381,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #381 = RETTri
  { 382,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #382 = RETTrr
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #383 = SAVEri
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #384 = SAVErr
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #385 = SDIVCCri
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo13, -1 ,nullptr },  // Inst #386 = SDIVCCrr
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #387 = SDIVXri
  { 388,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #388 = SDIVXrr
  { 389,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #389 = SDIVri
  { 390,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #390 = SDIVrr
  { 391,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #391 = SELECT_CC_DFP_FCC
  { 392,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #392 = SELECT_CC_DFP_ICC
  { 393,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #393 = SELECT_CC_FP_FCC
  { 394,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #394 = SELECT_CC_FP_ICC
  { 395,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #395 = SELECT_CC_Int_FCC
  { 396,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #396 = SELECT_CC_Int_ICC
  { 397,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #397 = SELECT_CC_QFP_FCC
  { 398,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #398 = SELECT_CC_QFP_ICC
  { 399,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #399 = SET
  { 400,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #400 = SETHIXi
  { 401,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #401 = SETHIi
  { 402,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #402 = SHUTDOWN
  { 403,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #403 = SIAM
  { 404,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #404 = SLLXri
  { 405,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #405 = SLLXrr
  { 406,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #406 = SLLri
  { 407,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #407 = SLLrr
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #408 = SMULCCri
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo13, -1 ,nullptr },  // Inst #409 = SMULCCrr
  { 410,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #410 = SMULri
  { 411,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #411 = SMULrr
  { 412,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #412 = SRAXri
  { 413,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #413 = SRAXrr
  { 414,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #414 = SRAri
  { 415,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #415 = SRArr
  { 416,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #416 = SRLXri
  { 417,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #417 = SRLXrr
  { 418,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #418 = SRLri
  { 419,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #419 = SRLrr
  { 420,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #420 = STArr
  { 421,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #421 = STBAR
  { 422,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #422 = STBArr
  { 423,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #423 = STBri
  { 424,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #424 = STBrr
  { 425,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #425 = STDFri
  { 426,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #426 = STDFrr
  { 427,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #427 = STFri
  { 428,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #428 = STFrr
  { 429,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #429 = STHArr
  { 430,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #430 = STHri
  { 431,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #431 = STHrr
  { 432,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #432 = STQFri
  { 433,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #433 = STQFrr
  { 434,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #434 = STXri
  { 435,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #435 = STXrr
  { 436,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #436 = STri
  { 437,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #437 = STrr
  { 438,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #438 = SUBCCri
  { 439,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #439 = SUBCCrr
  { 440,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #440 = SUBCri
  { 441,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #441 = SUBCrr
  { 442,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #442 = SUBEri
  { 443,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #443 = SUBErr
  { 444,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #444 = SUBXri
  { 445,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #445 = SUBXrr
  { 446,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #446 = SUBri
  { 447,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #447 = SUBrr
  { 448,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #448 = SWAPArr
  { 449,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #449 = SWAPri
  { 450,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #450 = SWAPrr
  { 451,	0,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #451 = TA3
  { 452,	0,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #452 = TA5
  { 453,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #453 = TADDCCTVri
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #454 = TADDCCTVrr
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #455 = TADDCCri
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #456 = TADDCCrr
  { 457,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #457 = TICCri
  { 458,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #458 = TICCrr
  { 459,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #459 = TLS_ADDXrr
  { 460,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #460 = TLS_ADDrr
  { 461,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #461 = TLS_CALL
  { 462,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #462 = TLS_LDXrr
  { 463,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #463 = TLS_LDrr
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #464 = TSUBCCTVri
  { 465,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #465 = TSUBCCTVrr
  { 466,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #466 = TSUBCCri
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #467 = TSUBCCrr
  { 468,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #468 = TXCCri
  { 469,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #469 = TXCCrr
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #470 = UDIVCCri
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo13, -1 ,nullptr },  // Inst #471 = UDIVCCrr
  { 472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #472 = UDIVXri
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #473 = UDIVXrr
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #474 = UDIVri
  { 475,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #475 = UDIVrr
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #476 = UMULCCri
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo13, -1 ,nullptr },  // Inst #477 = UMULCCrr
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #478 = UMULXHI
  { 479,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #479 = UMULri
  { 480,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #480 = UMULrr
  { 481,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #481 = UNIMP
  { 482,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #482 = V9FCMPD
  { 483,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #483 = V9FCMPED
  { 484,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #484 = V9FCMPEQ
  { 485,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #485 = V9FCMPES
  { 486,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #486 = V9FCMPQ
  { 487,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #487 = V9FCMPS
  { 488,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #488 = V9FMOVD_FCC
  { 489,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #489 = V9FMOVQ_FCC
  { 490,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #490 = V9FMOVS_FCC
  { 491,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #491 = V9MOVFCCri
  { 492,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #492 = V9MOVFCCrr
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #493 = WRASRri
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #494 = WRASRrr
  { 495,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo26, -1 ,nullptr },  // Inst #495 = WRPSRri
  { 496,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo27, -1 ,nullptr },  // Inst #496 = WRPSRrr
  { 497,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo26, -1 ,nullptr },  // Inst #497 = WRTBRri
  { 498,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo27, -1 ,nullptr },  // Inst #498 = WRTBRrr
  { 499,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo26, -1 ,nullptr },  // Inst #499 = WRWIMri
  { 500,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo27, -1 ,nullptr },  // Inst #500 = WRWIMrr
  { 501,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #501 = XMULX
  { 502,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #502 = XMULXHI
  { 503,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #503 = XNORCCri
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #504 = XNORCCrr
  { 505,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #505 = XNORXrr
  { 506,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #506 = XNORri
  { 507,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #507 = XNORrr
  { 508,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #508 = XORCCri
  { 509,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #509 = XORCCrr
  { 510,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #510 = XORXri
  { 511,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #511 = XORXrr
  { 512,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #512 = XORri
  { 513,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #513 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 6 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 15 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 21 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 29 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 36 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 44 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 52 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 59 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 68 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 77 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 85 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 93 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 100 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 107 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 124 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 133 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 141 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', '3', '2', 0,
  /* 160 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', '3', '2', 0,
  /* 179 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', '3', '2', 0,
  /* 199 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', '3', '2', 0,
  /* 218 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 238 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 257 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', '3', '2', 0,
  /* 276 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', '3', '2', 0,
  /* 294 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 314 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 333 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 339 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 348 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 354 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 362 */ 'T', 'A', '3', 0,
  /* 366 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 374 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', '6', '4', 0,
  /* 393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', '6', '4', 0,
  /* 412 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', '6', '4', 0,
  /* 432 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', '6', '4', 0,
  /* 451 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 471 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 490 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', '6', '4', 0,
  /* 524 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', '6', '4', 0,
  /* 542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 562 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 581 */ 'T', 'A', '5', 0,
  /* 585 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 592 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 600 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 608 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 615 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 624 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 633 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 641 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 649 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 656 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 663 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 672 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 680 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 689 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 697 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 706 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 715 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 727 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 738 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 750 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 761 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 769 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 775 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 782 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 789 */ 'B', 'A', 0,
  /* 792 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 799 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 806 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 813 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 821 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 833 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 841 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 847 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 859 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 877 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 895 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 912 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 924 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 936 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 954 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 960 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 970 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 988 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 1006 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 1023 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 1033 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 1043 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 1061 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 1067 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 1077 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 1087 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 1097 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1109 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 1115 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 1121 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 1128 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 1134 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1141 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1149 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 1156 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 1165 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1171 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 1177 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 1184 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1191 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1199 */ 'F', 'A', 'N', 'D', 0,
  /* 1204 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1210 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1218 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1231 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1238 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1244 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1250 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1256 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1262 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1270 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1278 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1285 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1302 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1308 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1315 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1321 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1327 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1337 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1347 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1356 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1365 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1374 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1382 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1395 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1403 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1410 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1419 */ 'F', 'O', 'N', 'E', 0,
  /* 1424 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1434 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1447 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1462 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1476 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1490 */ 'P', 'H', 'I', 0,
  /* 1494 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1502 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1510 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1516 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1522 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1528 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1534 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1542 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1550 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1557 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1568 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1577 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1586 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1595 */ 'K', 'I', 'L', 'L', 0,
  /* 1600 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 1611 */ 'R', 'E', 'T', 'L', 0,
  /* 1616 */ 'S', 'I', 'A', 'M', 0,
  /* 1621 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 1627 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1637 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 1645 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 1653 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 1660 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 1669 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 1678 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 1686 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1702 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 1709 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1726 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 1735 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 1741 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1750 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 1756 */ 'N', 'O', 'P', 0,
  /* 1760 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 1777 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1792 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 1798 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 1804 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 1813 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 1819 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 1826 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 1832 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 1838 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 1844 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 1850 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 1856 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 1864 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 1870 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 1877 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 1883 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 1889 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 1899 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 1909 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 1918 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 1927 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 1936 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 1944 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 1950 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 1956 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 1966 */ 'F', 'O', 'R', 0,
  /* 1970 */ 'F', 'N', 'O', 'R', 0,
  /* 1975 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 1981 */ 'F', 'X', 'O', 'R', 0,
  /* 1986 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 1992 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 1998 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2005 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2015 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2022 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2031 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2040 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2049 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2056 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2066 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2073 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2082 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2091 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2100 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2106 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 2113 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2119 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2126 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2134 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 2141 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 2147 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 2154 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 2160 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 2169 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2175 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2181 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 2188 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 2195 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 2201 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 2207 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 2213 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 2221 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 2227 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 2235 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 2242 */ 'F', 'O', 'R', 'S', 0,
  /* 2247 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 2253 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 2260 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 2266 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2283 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 2289 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 2296 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 2302 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 2308 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 2318 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 2328 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 2337 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 2346 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 2355 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 2363 */ 'R', 'E', 'T', 0,
  /* 2367 */ 'S', 'E', 'T', 0,
  /* 2371 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2380 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2389 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2398 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 2406 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 2414 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 2422 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 2428 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2439 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2450 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2465 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 2471 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 2482 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 2489 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 2498 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 2507 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 2514 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 2523 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 2529 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 2535 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 2543 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 2549 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 2555 */ 'C', 'O', 'P', 'Y', 0,
  /* 2560 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 2567 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 2575 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 2583 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 2589 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 2596 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 2602 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 2609 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 2615 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 2622 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 2631 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 2640 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 2648 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 2659 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 2666 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 2675 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 2684 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 2693 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 2702 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 2710 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 2719 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 2727 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 2736 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 2745 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 2752 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 2761 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 2768 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 2778 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 2789 */ 'L', 'D', 'r', 'i', 0,
  /* 2794 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 2800 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 2807 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 2814 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 2821 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 2831 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 2838 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 2845 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 2851 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 2858 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 2865 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 2872 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 2878 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 2885 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 2891 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 2898 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 2905 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 2911 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 2918 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 2924 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 2931 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 2938 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 2946 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 2953 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 2959 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 2966 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 2972 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 2980 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 2987 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 2993 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 3001 */ 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 3009 */ 'S', 'T', 'r', 'i', 0,
  /* 3014 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 3021 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3028 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3035 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3046 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3057 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 3064 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 3071 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 3078 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 3085 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 3091 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 3098 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 3105 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 3112 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 3119 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 3126 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 3132 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3140 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3148 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 3158 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 3168 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 3177 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 3186 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 3195 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 3204 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3213 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3222 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 3230 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 3238 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 3246 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 3253 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3263 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3273 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3282 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3291 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3300 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3308 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 3316 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 3323 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 3331 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 3337 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 3345 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 3352 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 3360 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 3368 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 3374 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 3380 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 3387 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 3393 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 3400 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 3406 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 3413 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 3422 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 3431 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 3439 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 3450 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 3457 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 3466 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 3475 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 3484 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 3493 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 3501 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 3510 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 3518 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 3527 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 3536 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 3543 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 3552 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 3559 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 3566 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 3576 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 3585 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 3591 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 3598 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 3605 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 3612 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 3622 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 3629 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 3636 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 3642 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 3649 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 3656 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 3663 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 3669 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 3676 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 3682 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 3689 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 3696 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 3702 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 3709 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 3715 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 3722 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 3729 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 3737 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 3744 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 3750 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 3758 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 3765 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 3772 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 3778 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 3786 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 3793 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 3799 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 3807 */ 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 3815 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 3821 */ 'S', 'T', 'r', 'r', 0,
  /* 3826 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 3833 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 3840 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 3847 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 3858 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 3869 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 3876 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 3883 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 3890 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 3901 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 3911 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 3918 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 3925 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 3932 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 3939 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 3947 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 3954 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 3961 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 3967 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 3975 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 3983 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 3993 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 4003 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 4012 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 4021 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 4030 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 4039 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4048 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4057 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 4065 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 4073 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 4081 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 4088 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4098 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4108 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4117 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4126 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4135 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1490U, 1627U, 1686U, 1577U, 1568U, 1595U, 1447U, 1462U, 
    1434U, 1476U, 2266U, 1424U, 1382U, 2555U, 1403U, 2450U, 
    1218U, 1741U, 2439U, 1285U, 2428U, 1097U, 1760U, 2632U, 
    3423U, 2761U, 3552U, 2814U, 3605U, 1109U, 833U, 3078U, 
    3894U, 2772U, 3570U, 1709U, 1777U, 1956U, 1600U, 2640U, 
    3431U, 2693U, 3484U, 2946U, 3737U, 3750U, 3091U, 3911U, 
    2794U, 3585U, 761U, 133U, 782U, 160U, 393U, 199U, 
    432U, 314U, 562U, 238U, 471U, 179U, 412U, 276U, 
    524U, 141U, 374U, 294U, 542U, 218U, 451U, 257U, 
    505U, 490U, 789U, 1232U, 814U, 2800U, 3591U, 1528U, 
    841U, 792U, 2371U, 2398U, 3204U, 4039U, 3253U, 4088U, 
    3222U, 4057U, 3273U, 4108U, 954U, 799U, 2380U, 2406U, 
    3213U, 4048U, 3263U, 4098U, 3230U, 4065U, 3282U, 4117U, 
    3238U, 4073U, 3291U, 4126U, 1061U, 806U, 2389U, 2414U, 
    3246U, 4081U, 3300U, 4135U, 1410U, 1590U, 2898U, 3689U, 
    3954U, 3815U, 641U, 85U, 775U, 2966U, 3772U, 608U, 
    1542U, 1669U, 1645U, 52U, 1534U, 1660U, 1637U, 769U, 
    1550U, 1678U, 1653U, 1302U, 1864U, 2283U, 1128U, 1798U, 
    2113U, 821U, 1199U, 6U, 2005U, 339U, 2056U, 2141U, 
    1231U, 813U, 663U, 1272U, 680U, 107U, 697U, 124U, 
    615U, 59U, 624U, 68U, 1858U, 2229U, 1315U, 1877U, 
    2296U, 1819U, 1510U, 1832U, 2195U, 2529U, 1210U, 1134U, 
    2119U, 1121U, 2106U, 1238U, 1838U, 2201U, 1278U, 2235U, 
    2482U, 672U, 1321U, 849U, 960U, 1067U, 1883U, 914U, 
    1023U, 1077U, 1327U, 1889U, 2308U, 1347U, 1909U, 2328U, 
    1337U, 1899U, 2318U, 1356U, 1918U, 2337U, 1365U, 1927U, 
    2346U, 1374U, 1936U, 2355U, 2302U, 926U, 1033U, 1087U, 
    750U, 727U, 706U, 1557U, 2471U, 1171U, 738U, 715U, 
    1826U, 2175U, 1149U, 2134U, 1204U, 2147U, 1165U, 1813U, 
    2169U, 1141U, 2126U, 1177U, 2181U, 1970U, 2247U, 15U, 
    2015U, 348U, 2066U, 1191U, 1419U, 2154U, 1966U, 21U, 
    2022U, 354U, 2073U, 2242U, 633U, 77U, 2514U, 600U, 
    2091U, 44U, 2040U, 366U, 1395U, 592U, 2082U, 36U, 
    2031U, 1244U, 1516U, 2207U, 2543U, 689U, 116U, 649U, 
    93U, 1184U, 1308U, 1870U, 2289U, 585U, 29U, 0U, 
    1998U, 333U, 2049U, 656U, 100U, 1250U, 1522U, 1844U, 
    2549U, 1115U, 1792U, 2100U, 1975U, 2253U, 1981U, 2260U, 
    1256U, 1850U, 2221U, 1735U, 2188U, 2507U, 2911U, 3702U, 
    3331U, 2838U, 3629U, 2845U, 3636U, 2858U, 3649U, 3308U, 
    2589U, 3380U, 3337U, 2878U, 3669U, 3057U, 3869U, 3323U, 
    2602U, 3393U, 3352U, 2891U, 3682U, 3085U, 3905U, 2789U, 
    3580U, 2778U, 2768U, 2422U, 2567U, 2535U, 2650U, 3441U, 
    2666U, 3457U, 3148U, 3983U, 3168U, 4003U, 3158U, 3993U, 
    3177U, 4012U, 3186U, 4021U, 3195U, 4030U, 2489U, 2498U, 
    2213U, 2752U, 3543U, 1262U, 3112U, 3932U, 1756U, 2712U, 
    3503U, 2702U, 3493U, 2953U, 3744U, 3758U, 3120U, 3941U, 
    2982U, 3788U, 2465U, 1702U, 3559U, 1986U, 1992U, 1950U, 
    1621U, 2821U, 3612U, 2363U, 1611U, 3014U, 3826U, 2831U, 
    3622U, 2727U, 3518U, 3132U, 3967U, 3021U, 3833U, 859U, 
    970U, 895U, 1006U, 936U, 1043U, 877U, 988U, 2367U, 
    2575U, 2560U, 1726U, 1616U, 3098U, 3918U, 2905U, 3696U, 
    2675U, 3466U, 2924U, 3715U, 3064U, 3876U, 2583U, 3368U, 
    3105U, 3925U, 2918U, 3709U, 3374U, 1944U, 3316U, 2596U, 
    3387U, 2851U, 3642U, 2872U, 3663U, 3345U, 2885U, 3676U, 
    2865U, 3656U, 3126U, 3961U, 3009U, 3821U, 2623U, 3414U, 
    2615U, 3406U, 2807U, 3598U, 3071U, 3883U, 2609U, 3400U, 
    3360U, 2959U, 3765U, 362U, 581U, 3046U, 3858U, 2631U, 
    3422U, 2659U, 3450U, 3890U, 3566U, 1586U, 3901U, 3576U, 
    3035U, 3847U, 2622U, 3413U, 2745U, 3536U, 2736U, 3527U, 
    3140U, 3975U, 3028U, 3840U, 2684U, 3475U, 1494U, 2931U, 
    3722U, 1750U, 1270U, 1156U, 1804U, 2160U, 1856U, 2227U, 
    847U, 912U, 924U, 2648U, 3439U, 2993U, 3799U, 3001U, 
    3807U, 2972U, 3778U, 2938U, 3729U, 2523U, 1502U, 2710U, 
    3501U, 3939U, 2980U, 3786U, 2719U, 3510U, 3119U, 3947U, 
    2987U, 3793U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 514);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~SparcGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 514);
}
SparcGenInstrInfo::~SparcGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace SP
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace SP
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes { 
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  TLSSym = 3,
  bprtarget = 4,
  bprtarget16 = 5,
  brtarget = 6,
  calltarget = 7,
  f32imm = 8,
  f64imm = 9,
  getPCX = 10,
  i16imm = 11,
  i1imm = 12,
  i32imm = 13,
  i64imm = 14,
  i8imm = 15,
  simm13Op = 16,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace SP
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
