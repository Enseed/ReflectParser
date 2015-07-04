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

namespace XCore {
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
    ADD_2rus	= 23,
    ADD_3r	= 24,
    ADJCALLSTACKDOWN	= 25,
    ADJCALLSTACKUP	= 26,
    ANDNOT_2r	= 27,
    AND_3r	= 28,
    ASHR_l2rus	= 29,
    ASHR_l3r	= 30,
    BAU_1r	= 31,
    BITREV_l2r	= 32,
    BLACP_lu10	= 33,
    BLACP_u10	= 34,
    BLAT_lu6	= 35,
    BLAT_u6	= 36,
    BLA_1r	= 37,
    BLRB_lu10	= 38,
    BLRB_u10	= 39,
    BLRF_lu10	= 40,
    BLRF_u10	= 41,
    BRBF_lru6	= 42,
    BRBF_ru6	= 43,
    BRBT_lru6	= 44,
    BRBT_ru6	= 45,
    BRBU_lu6	= 46,
    BRBU_u6	= 47,
    BRFF_lru6	= 48,
    BRFF_ru6	= 49,
    BRFT_lru6	= 50,
    BRFT_ru6	= 51,
    BRFU_lu6	= 52,
    BRFU_u6	= 53,
    BRU_1r	= 54,
    BR_JT	= 55,
    BR_JT32	= 56,
    BYTEREV_l2r	= 57,
    CHKCT_2r	= 58,
    CHKCT_rus	= 59,
    CLRE_0R	= 60,
    CLRPT_1R	= 61,
    CLRSR_branch_lu6	= 62,
    CLRSR_branch_u6	= 63,
    CLRSR_lu6	= 64,
    CLRSR_u6	= 65,
    CLZ_l2r	= 66,
    CRC8_l4r	= 67,
    CRC_l3r	= 68,
    DCALL_0R	= 69,
    DENTSP_0R	= 70,
    DGETREG_1r	= 71,
    DIVS_l3r	= 72,
    DIVU_l3r	= 73,
    DRESTSP_0R	= 74,
    DRET_0R	= 75,
    ECALLF_1r	= 76,
    ECALLT_1r	= 77,
    EDU_1r	= 78,
    EEF_2r	= 79,
    EET_2r	= 80,
    EEU_1r	= 81,
    EH_RETURN	= 82,
    ENDIN_2r	= 83,
    ENTSP_lu6	= 84,
    ENTSP_u6	= 85,
    EQ_2rus	= 86,
    EQ_3r	= 87,
    EXTDP_lu6	= 88,
    EXTDP_u6	= 89,
    EXTSP_lu6	= 90,
    EXTSP_u6	= 91,
    FRAME_TO_ARGS_OFFSET	= 92,
    FREER_1r	= 93,
    FREET_0R	= 94,
    GETD_l2r	= 95,
    GETED_0R	= 96,
    GETET_0R	= 97,
    GETID_0R	= 98,
    GETKEP_0R	= 99,
    GETKSP_0R	= 100,
    GETN_l2r	= 101,
    GETPS_l2r	= 102,
    GETR_rus	= 103,
    GETSR_lu6	= 104,
    GETSR_u6	= 105,
    GETST_2r	= 106,
    GETTS_2r	= 107,
    INCT_2r	= 108,
    INITCP_2r	= 109,
    INITDP_2r	= 110,
    INITLR_l2r	= 111,
    INITPC_2r	= 112,
    INITSP_2r	= 113,
    INPW_l2rus	= 114,
    INSHR_2r	= 115,
    INT_2r	= 116,
    IN_2r	= 117,
    Int_MemBarrier	= 118,
    KCALL_1r	= 119,
    KCALL_lu6	= 120,
    KCALL_u6	= 121,
    KENTSP_lu6	= 122,
    KENTSP_u6	= 123,
    KRESTSP_lu6	= 124,
    KRESTSP_u6	= 125,
    KRET_0R	= 126,
    LADD_l5r	= 127,
    LD16S_3r	= 128,
    LD8U_3r	= 129,
    LDA16B_l3r	= 130,
    LDA16F_l3r	= 131,
    LDAPB_lu10	= 132,
    LDAPB_u10	= 133,
    LDAPF_lu10	= 134,
    LDAPF_lu10_ba	= 135,
    LDAPF_u10	= 136,
    LDAWB_l2rus	= 137,
    LDAWB_l3r	= 138,
    LDAWCP_lu6	= 139,
    LDAWCP_u6	= 140,
    LDAWDP_lru6	= 141,
    LDAWDP_ru6	= 142,
    LDAWFI	= 143,
    LDAWF_l2rus	= 144,
    LDAWF_l3r	= 145,
    LDAWSP_lru6	= 146,
    LDAWSP_ru6	= 147,
    LDC_lru6	= 148,
    LDC_ru6	= 149,
    LDET_0R	= 150,
    LDIVU_l5r	= 151,
    LDSED_0R	= 152,
    LDSPC_0R	= 153,
    LDSSR_0R	= 154,
    LDWCP_lru6	= 155,
    LDWCP_lu10	= 156,
    LDWCP_ru6	= 157,
    LDWCP_u10	= 158,
    LDWDP_lru6	= 159,
    LDWDP_ru6	= 160,
    LDWFI	= 161,
    LDWSP_lru6	= 162,
    LDWSP_ru6	= 163,
    LDW_2rus	= 164,
    LDW_3r	= 165,
    LMUL_l6r	= 166,
    LSS_3r	= 167,
    LSUB_l5r	= 168,
    LSU_3r	= 169,
    MACCS_l4r	= 170,
    MACCU_l4r	= 171,
    MJOIN_1r	= 172,
    MKMSK_2r	= 173,
    MKMSK_rus	= 174,
    MSYNC_1r	= 175,
    MUL_l3r	= 176,
    NEG	= 177,
    NOT	= 178,
    OR_3r	= 179,
    OUTCT_2r	= 180,
    OUTCT_rus	= 181,
    OUTPW_l2rus	= 182,
    OUTSHR_2r	= 183,
    OUTT_2r	= 184,
    OUT_2r	= 185,
    PEEK_2r	= 186,
    REMS_l3r	= 187,
    REMU_l3r	= 188,
    RETSP_lu6	= 189,
    RETSP_u6	= 190,
    SELECT_CC	= 191,
    SETCLK_l2r	= 192,
    SETCP_1r	= 193,
    SETC_l2r	= 194,
    SETC_lru6	= 195,
    SETC_ru6	= 196,
    SETDP_1r	= 197,
    SETD_2r	= 198,
    SETEV_1r	= 199,
    SETKEP_0R	= 200,
    SETN_l2r	= 201,
    SETPSC_2r	= 202,
    SETPS_l2r	= 203,
    SETPT_2r	= 204,
    SETRDY_l2r	= 205,
    SETSP_1r	= 206,
    SETSR_branch_lu6	= 207,
    SETSR_branch_u6	= 208,
    SETSR_lu6	= 209,
    SETSR_u6	= 210,
    SETTW_l2r	= 211,
    SETV_1r	= 212,
    SEXT_2r	= 213,
    SEXT_rus	= 214,
    SHL_2rus	= 215,
    SHL_3r	= 216,
    SHR_2rus	= 217,
    SHR_3r	= 218,
    SSYNC_0r	= 219,
    ST16_l3r	= 220,
    ST8_l3r	= 221,
    STET_0R	= 222,
    STSED_0R	= 223,
    STSPC_0R	= 224,
    STSSR_0R	= 225,
    STWDP_lru6	= 226,
    STWDP_ru6	= 227,
    STWFI	= 228,
    STWSP_lru6	= 229,
    STWSP_ru6	= 230,
    STW_2rus	= 231,
    STW_l3r	= 232,
    SUB_2rus	= 233,
    SUB_3r	= 234,
    SYNCR_1r	= 235,
    TESTCT_2r	= 236,
    TESTLCL_l2r	= 237,
    TESTWCT_2r	= 238,
    TSETMR_2r	= 239,
    TSETR_3r	= 240,
    TSTART_1R	= 241,
    WAITEF_1R	= 242,
    WAITET_1R	= 243,
    WAITEU_0R	= 244,
    XOR_l3r	= 245,
    ZEXT_2r	= 246,
    ZEXT_rus	= 247,
    INSTRUCTION_LIST_END = 248
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End XCore namespace
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

static const uint16_t ImplicitList1[] = { XCore::SP, 0 };
static const uint16_t ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const uint16_t ImplicitList3[] = { XCore::R11, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
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
  { 23,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADD_2rus
  { 24,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADD_3r
  { 25,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #25 = ADJCALLSTACKDOWN
  { 26,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #26 = ADJCALLSTACKUP
  { 27,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #27 = ANDNOT_2r
  { 28,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #28 = AND_3r
  { 29,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #29 = ASHR_l2rus
  { 30,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #30 = ASHR_l3r
  { 31,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #31 = BAU_1r
  { 32,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #32 = BITREV_l2r
  { 33,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #33 = BLACP_lu10
  { 34,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #34 = BLACP_u10
  { 35,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #35 = BLAT_lu6
  { 36,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #36 = BLAT_u6
  { 37,	1,	0,	2,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo15, -1 ,nullptr },  // Inst #37 = BLA_1r
  { 38,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5, -1 ,nullptr },  // Inst #38 = BLRB_lu10
  { 39,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5, -1 ,nullptr },  // Inst #39 = BLRB_u10
  { 40,	1,	0,	4,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5, -1 ,nullptr },  // Inst #40 = BLRF_lu10
  { 41,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5, -1 ,nullptr },  // Inst #41 = BLRF_u10
  { 42,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #42 = BRBF_lru6
  { 43,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #43 = BRBF_ru6
  { 44,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #44 = BRBT_lru6
  { 45,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #45 = BRBT_ru6
  { 46,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #46 = BRBU_lu6
  { 47,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #47 = BRBU_u6
  { 48,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = BRFF_lru6
  { 49,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = BRFF_ru6
  { 50,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = BRFT_lru6
  { 51,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = BRFT_ru6
  { 52,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #52 = BRFU_lu6
  { 53,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #53 = BRFU_u6
  { 54,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #54 = BRU_1r
  { 55,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #55 = BR_JT
  { 56,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #56 = BR_JT32
  { 57,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #57 = BYTEREV_l2r
  { 58,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #58 = CHKCT_2r
  { 59,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #59 = CHKCT_rus
  { 60,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #60 = CLRE_0R
  { 61,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = CLRPT_1R
  { 62,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #62 = CLRSR_branch_lu6
  { 63,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #63 = CLRSR_branch_u6
  { 64,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #64 = CLRSR_lu6
  { 65,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #65 = CLRSR_u6
  { 66,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #66 = CLZ_l2r
  { 67,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #67 = CRC8_l4r
  { 68,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #68 = CRC_l3r
  { 69,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #69 = DCALL_0R
  { 70,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #70 = DENTSP_0R
  { 71,	1,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #71 = DGETREG_1r
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #72 = DIVS_l3r
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #73 = DIVU_l3r
  { 74,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #74 = DRESTSP_0R
  { 75,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #75 = DRET_0R
  { 76,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #76 = ECALLF_1r
  { 77,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #77 = ECALLT_1r
  { 78,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #78 = EDU_1r
  { 79,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #79 = EEF_2r
  { 80,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #80 = EET_2r
  { 81,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #81 = EEU_1r
  { 82,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #82 = EH_RETURN
  { 83,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #83 = ENDIN_2r
  { 84,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #84 = ENTSP_lu6
  { 85,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #85 = ENTSP_u6
  { 86,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #86 = EQ_2rus
  { 87,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #87 = EQ_3r
  { 88,	1,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #88 = EXTDP_lu6
  { 89,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #89 = EXTDP_u6
  { 90,	1,	0,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #90 = EXTSP_lu6
  { 91,	1,	0,	2,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #91 = EXTSP_u6
  { 92,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #92 = FRAME_TO_ARGS_OFFSET
  { 93,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #93 = FREER_1r
  { 94,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #94 = FREET_0R
  { 95,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #95 = GETD_l2r
  { 96,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #96 = GETED_0R
  { 97,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #97 = GETET_0R
  { 98,	0,	0,	2,	0,	0, 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #98 = GETID_0R
  { 99,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #99 = GETKEP_0R
  { 100,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #100 = GETKSP_0R
  { 101,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #101 = GETN_l2r
  { 102,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #102 = GETPS_l2r
  { 103,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #103 = GETR_rus
  { 104,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #104 = GETSR_lu6
  { 105,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #105 = GETSR_u6
  { 106,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #106 = GETST_2r
  { 107,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #107 = GETTS_2r
  { 108,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #108 = INCT_2r
  { 109,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #109 = INITCP_2r
  { 110,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #110 = INITDP_2r
  { 111,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #111 = INITLR_l2r
  { 112,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #112 = INITPC_2r
  { 113,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #113 = INITSP_2r
  { 114,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #114 = INPW_l2rus
  { 115,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #115 = INSHR_2r
  { 116,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #116 = INT_2r
  { 117,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #117 = IN_2r
  { 118,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #118 = Int_MemBarrier
  { 119,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #119 = KCALL_1r
  { 120,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #120 = KCALL_lu6
  { 121,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #121 = KCALL_u6
  { 122,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #122 = KENTSP_lu6
  { 123,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #123 = KENTSP_u6
  { 124,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #124 = KRESTSP_lu6
  { 125,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #125 = KRESTSP_u6
  { 126,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #126 = KRET_0R
  { 127,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #127 = LADD_l5r
  { 128,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #128 = LD16S_3r
  { 129,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #129 = LD8U_3r
  { 130,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #130 = LDA16B_l3r
  { 131,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #131 = LDA16F_l3r
  { 132,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #132 = LDAPB_lu10
  { 133,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #133 = LDAPB_u10
  { 134,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #134 = LDAPF_lu10
  { 135,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #135 = LDAPF_lu10_ba
  { 136,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #136 = LDAPF_u10
  { 137,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #137 = LDAWB_l2rus
  { 138,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #138 = LDAWB_l3r
  { 139,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #139 = LDAWCP_lu6
  { 140,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #140 = LDAWCP_u6
  { 141,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #141 = LDAWDP_lru6
  { 142,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #142 = LDAWDP_ru6
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #143 = LDAWFI
  { 144,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #144 = LDAWF_l2rus
  { 145,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #145 = LDAWF_l3r
  { 146,	2,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #146 = LDAWSP_lru6
  { 147,	2,	1,	2,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #147 = LDAWSP_ru6
  { 148,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #148 = LDC_lru6
  { 149,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #149 = LDC_ru6
  { 150,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #150 = LDET_0R
  { 151,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #151 = LDIVU_l5r
  { 152,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #152 = LDSED_0R
  { 153,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #153 = LDSPC_0R
  { 154,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #154 = LDSSR_0R
  { 155,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #155 = LDWCP_lru6
  { 156,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #156 = LDWCP_lu10
  { 157,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #157 = LDWCP_ru6
  { 158,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #158 = LDWCP_u10
  { 159,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #159 = LDWDP_lru6
  { 160,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #160 = LDWDP_ru6
  { 161,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #161 = LDWFI
  { 162,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #162 = LDWSP_lru6
  { 163,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #163 = LDWSP_ru6
  { 164,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #164 = LDW_2rus
  { 165,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #165 = LDW_3r
  { 166,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #166 = LMUL_l6r
  { 167,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #167 = LSS_3r
  { 168,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #168 = LSUB_l5r
  { 169,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #169 = LSU_3r
  { 170,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #170 = MACCS_l4r
  { 171,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #171 = MACCU_l4r
  { 172,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #172 = MJOIN_1r
  { 173,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #173 = MKMSK_2r
  { 174,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #174 = MKMSK_rus
  { 175,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #175 = MSYNC_1r
  { 176,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #176 = MUL_l3r
  { 177,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #177 = NEG
  { 178,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #178 = NOT
  { 179,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #179 = OR_3r
  { 180,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #180 = OUTCT_2r
  { 181,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #181 = OUTCT_rus
  { 182,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #182 = OUTPW_l2rus
  { 183,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #183 = OUTSHR_2r
  { 184,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #184 = OUTT_2r
  { 185,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #185 = OUT_2r
  { 186,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #186 = PEEK_2r
  { 187,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #187 = REMS_l3r
  { 188,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #188 = REMU_l3r
  { 189,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #189 = RETSP_lu6
  { 190,	1,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #190 = RETSP_u6
  { 191,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #191 = SELECT_CC
  { 192,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #192 = SETCLK_l2r
  { 193,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #193 = SETCP_1r
  { 194,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #194 = SETC_l2r
  { 195,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #195 = SETC_lru6
  { 196,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #196 = SETC_ru6
  { 197,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #197 = SETDP_1r
  { 198,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #198 = SETD_2r
  { 199,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #199 = SETEV_1r
  { 200,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #200 = SETKEP_0R
  { 201,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #201 = SETN_l2r
  { 202,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #202 = SETPSC_2r
  { 203,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #203 = SETPS_l2r
  { 204,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #204 = SETPT_2r
  { 205,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #205 = SETRDY_l2r
  { 206,	1,	0,	2,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #206 = SETSP_1r
  { 207,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #207 = SETSR_branch_lu6
  { 208,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #208 = SETSR_branch_u6
  { 209,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #209 = SETSR_lu6
  { 210,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #210 = SETSR_u6
  { 211,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #211 = SETTW_l2r
  { 212,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #212 = SETV_1r
  { 213,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #213 = SEXT_2r
  { 214,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #214 = SEXT_rus
  { 215,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #215 = SHL_2rus
  { 216,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #216 = SHL_3r
  { 217,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #217 = SHR_2rus
  { 218,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #218 = SHR_3r
  { 219,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #219 = SSYNC_0r
  { 220,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #220 = ST16_l3r
  { 221,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #221 = ST8_l3r
  { 222,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #222 = STET_0R
  { 223,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #223 = STSED_0R
  { 224,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #224 = STSPC_0R
  { 225,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #225 = STSSR_0R
  { 226,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #226 = STWDP_lru6
  { 227,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #227 = STWDP_ru6
  { 228,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #228 = STWFI
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #229 = STWSP_lru6
  { 230,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #230 = STWSP_ru6
  { 231,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #231 = STW_2rus
  { 232,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #232 = STW_l3r
  { 233,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #233 = SUB_2rus
  { 234,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #234 = SUB_3r
  { 235,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #235 = SYNCR_1r
  { 236,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #236 = TESTCT_2r
  { 237,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #237 = TESTLCL_l2r
  { 238,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #238 = TESTWCT_2r
  { 239,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #239 = TSETMR_2r
  { 240,	3,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #240 = TSETR_3r
  { 241,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #241 = TSTART_1R
  { 242,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #242 = WAITEF_1R
  { 243,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #243 = WAITET_1R
  { 244,	0,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #244 = WAITEU_0R
  { 245,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #245 = XOR_l3r
  { 246,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #246 = ZEXT_2r
  { 247,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #247 = ZEXT_rus
};

extern const char XCoreInstrNameData[] = {
  /* 0 */ 'L', 'D', 'A', 'P', 'B', '_', 'u', '1', '0', 0,
  /* 10 */ 'B', 'L', 'R', 'B', '_', 'u', '1', '0', 0,
  /* 19 */ 'L', 'D', 'A', 'P', 'F', '_', 'u', '1', '0', 0,
  /* 29 */ 'B', 'L', 'R', 'F', '_', 'u', '1', '0', 0,
  /* 38 */ 'B', 'L', 'A', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 48 */ 'L', 'D', 'W', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 58 */ 'L', 'D', 'A', 'P', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 69 */ 'B', 'L', 'R', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 79 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 90 */ 'B', 'L', 'R', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 100 */ 'B', 'L', 'A', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 111 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 122 */ 'B', 'R', '_', 'J', 'T', '3', '2', 0,
  /* 130 */ 'K', 'C', 'A', 'L', 'L', '_', 'u', '6', 0,
  /* 139 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'u', '6', 0,
  /* 149 */ 'E', 'X', 'T', 'D', 'P', '_', 'u', '6', 0,
  /* 158 */ 'R', 'E', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 167 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 177 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 188 */ 'E', 'X', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 197 */ 'C', 'L', 'R', 'S', 'R', '_', 'u', '6', 0,
  /* 206 */ 'G', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 215 */ 'S', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 224 */ 'B', 'L', 'A', 'T', '_', 'u', '6', 0,
  /* 232 */ 'B', 'R', 'B', 'U', '_', 'u', '6', 0,
  /* 240 */ 'B', 'R', 'F', 'U', '_', 'u', '6', 0,
  /* 248 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 264 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 280 */ 'K', 'C', 'A', 'L', 'L', '_', 'l', 'u', '6', 0,
  /* 290 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'l', 'u', '6', 0,
  /* 301 */ 'E', 'X', 'T', 'D', 'P', '_', 'l', 'u', '6', 0,
  /* 311 */ 'R', 'E', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 321 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 332 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 344 */ 'E', 'X', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 354 */ 'C', 'L', 'R', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 364 */ 'G', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 374 */ 'S', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 384 */ 'B', 'L', 'A', 'T', '_', 'l', 'u', '6', 0,
  /* 393 */ 'B', 'R', 'B', 'U', '_', 'l', 'u', '6', 0,
  /* 402 */ 'B', 'R', 'F', 'U', '_', 'l', 'u', '6', 0,
  /* 411 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 428 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 445 */ 'L', 'D', 'C', '_', 'r', 'u', '6', 0,
  /* 453 */ 'S', 'E', 'T', 'C', '_', 'r', 'u', '6', 0,
  /* 462 */ 'B', 'R', 'B', 'F', '_', 'r', 'u', '6', 0,
  /* 471 */ 'B', 'R', 'F', 'F', '_', 'r', 'u', '6', 0,
  /* 480 */ 'L', 'D', 'W', 'C', 'P', '_', 'r', 'u', '6', 0,
  /* 490 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 501 */ 'L', 'D', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 511 */ 'S', 'T', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 521 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 532 */ 'L', 'D', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 542 */ 'S', 'T', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 552 */ 'B', 'R', 'B', 'T', '_', 'r', 'u', '6', 0,
  /* 561 */ 'B', 'R', 'F', 'T', '_', 'r', 'u', '6', 0,
  /* 570 */ 'L', 'D', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 579 */ 'S', 'E', 'T', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 589 */ 'B', 'R', 'B', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 599 */ 'B', 'R', 'F', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 609 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 620 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 632 */ 'L', 'D', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 643 */ 'S', 'T', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 654 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 666 */ 'L', 'D', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 677 */ 'S', 'T', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 688 */ 'B', 'R', 'B', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 698 */ 'B', 'R', 'F', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 708 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 0,
  /* 718 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 730 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 743 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 760 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 773 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 780 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 790 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 803 */ 'N', 'E', 'G', 0,
  /* 807 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 822 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 836 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 850 */ 'L', 'D', 'A', 'W', 'F', 'I', 0,
  /* 857 */ 'L', 'D', 'W', 'F', 'I', 0,
  /* 863 */ 'S', 'T', 'W', 'F', 'I', 0,
  /* 869 */ 'P', 'H', 'I', 0,
  /* 873 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 882 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 891 */ 'K', 'I', 'L', 'L', 0,
  /* 896 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 906 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 922 */ 'E', 'H', '_', 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 932 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 949 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 958 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 975 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 990 */ 'L', 'D', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 999 */ 'S', 'T', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 1008 */ 'L', 'D', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 1017 */ 'S', 'T', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 1026 */ 'G', 'E', 'T', 'E', 'D', '_', '0', 'R', 0,
  /* 1035 */ 'G', 'E', 'T', 'I', 'D', '_', '0', 'R', 0,
  /* 1044 */ 'C', 'L', 'R', 'E', '_', '0', 'R', 0,
  /* 1052 */ 'D', 'C', 'A', 'L', 'L', '_', '0', 'R', 0,
  /* 1061 */ 'G', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1071 */ 'S', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1081 */ 'G', 'E', 'T', 'K', 'S', 'P', '_', '0', 'R', 0,
  /* 1091 */ 'D', 'E', 'N', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1101 */ 'D', 'R', 'E', 'S', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1112 */ 'L', 'D', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1121 */ 'S', 'T', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1130 */ 'L', 'D', 'E', 'T', '_', '0', 'R', 0,
  /* 1138 */ 'F', 'R', 'E', 'E', 'T', '_', '0', 'R', 0,
  /* 1147 */ 'D', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1155 */ 'K', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1163 */ 'G', 'E', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1172 */ 'S', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1180 */ 'W', 'A', 'I', 'T', 'E', 'U', '_', '0', 'R', 0,
  /* 1190 */ 'W', 'A', 'I', 'T', 'E', 'F', '_', '1', 'R', 0,
  /* 1200 */ 'W', 'A', 'I', 'T', 'E', 'T', '_', '1', 'R', 0,
  /* 1210 */ 'C', 'L', 'R', 'P', 'T', '_', '1', 'R', 0,
  /* 1219 */ 'T', 'S', 'T', 'A', 'R', 'T', '_', '1', 'R', 0,
  /* 1229 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1246 */ 'F', 'R', 'A', 'M', 'E', '_', 'T', 'O', '_', 'A', 'R', 'G', 'S', '_', 'O', 'F', 'F', 'S', 'E', 'T', 0,
  /* 1267 */ 'B', 'R', '_', 'J', 'T', 0,
  /* 1273 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1284 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1295 */ 'N', 'O', 'T', 0,
  /* 1299 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1314 */ 'C', 'O', 'P', 'Y', 0,
  /* 1319 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', '_', 'b', 'a', 0,
  /* 1333 */ 'S', 'S', 'Y', 'N', 'C', '_', '0', 'r', 0,
  /* 1342 */ 'B', 'L', 'A', '_', '1', 'r', 0,
  /* 1349 */ 'M', 'S', 'Y', 'N', 'C', '_', '1', 'r', 0,
  /* 1358 */ 'E', 'C', 'A', 'L', 'L', 'F', '_', '1', 'r', 0,
  /* 1368 */ 'D', 'G', 'E', 'T', 'R', 'E', 'G', '_', '1', 'r', 0,
  /* 1379 */ 'K', 'C', 'A', 'L', 'L', '_', '1', 'r', 0,
  /* 1388 */ 'M', 'J', 'O', 'I', 'N', '_', '1', 'r', 0,
  /* 1397 */ 'S', 'E', 'T', 'C', 'P', '_', '1', 'r', 0,
  /* 1406 */ 'S', 'E', 'T', 'D', 'P', '_', '1', 'r', 0,
  /* 1415 */ 'S', 'E', 'T', 'S', 'P', '_', '1', 'r', 0,
  /* 1424 */ 'S', 'Y', 'N', 'C', 'R', '_', '1', 'r', 0,
  /* 1433 */ 'F', 'R', 'E', 'E', 'R', '_', '1', 'r', 0,
  /* 1442 */ 'E', 'C', 'A', 'L', 'L', 'T', '_', '1', 'r', 0,
  /* 1452 */ 'B', 'A', 'U', '_', '1', 'r', 0,
  /* 1459 */ 'E', 'D', 'U', '_', '1', 'r', 0,
  /* 1466 */ 'E', 'E', 'U', '_', '1', 'r', 0,
  /* 1473 */ 'B', 'R', 'U', '_', '1', 'r', 0,
  /* 1480 */ 'S', 'E', 'T', 'E', 'V', '_', '1', 'r', 0,
  /* 1489 */ 'S', 'E', 'T', 'V', '_', '1', 'r', 0,
  /* 1497 */ 'I', 'N', 'I', 'T', 'P', 'C', '_', '2', 'r', 0,
  /* 1507 */ 'S', 'E', 'T', 'P', 'S', 'C', '_', '2', 'r', 0,
  /* 1517 */ 'S', 'E', 'T', 'D', '_', '2', 'r', 0,
  /* 1525 */ 'E', 'E', 'F', '_', '2', 'r', 0,
  /* 1532 */ 'P', 'E', 'E', 'K', '_', '2', 'r', 0,
  /* 1540 */ 'M', 'K', 'M', 'S', 'K', '_', '2', 'r', 0,
  /* 1549 */ 'E', 'N', 'D', 'I', 'N', '_', '2', 'r', 0,
  /* 1558 */ 'I', 'N', 'I', 'T', 'C', 'P', '_', '2', 'r', 0,
  /* 1568 */ 'I', 'N', 'I', 'T', 'D', 'P', '_', '2', 'r', 0,
  /* 1578 */ 'I', 'N', 'I', 'T', 'S', 'P', '_', '2', 'r', 0,
  /* 1588 */ 'I', 'N', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1597 */ 'O', 'U', 'T', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1607 */ 'T', 'S', 'E', 'T', 'M', 'R', '_', '2', 'r', 0,
  /* 1617 */ 'G', 'E', 'T', 'T', 'S', '_', '2', 'r', 0,
  /* 1626 */ 'C', 'H', 'K', 'C', 'T', '_', '2', 'r', 0,
  /* 1635 */ 'I', 'N', 'C', 'T', '_', '2', 'r', 0,
  /* 1643 */ 'T', 'E', 'S', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1653 */ 'O', 'U', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1662 */ 'T', 'E', 'S', 'T', 'W', 'C', 'T', '_', '2', 'r', 0,
  /* 1673 */ 'E', 'E', 'T', '_', '2', 'r', 0,
  /* 1680 */ 'I', 'N', 'T', '_', '2', 'r', 0,
  /* 1687 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', '2', 'r', 0,
  /* 1697 */ 'S', 'E', 'T', 'P', 'T', '_', '2', 'r', 0,
  /* 1706 */ 'G', 'E', 'T', 'S', 'T', '_', '2', 'r', 0,
  /* 1715 */ 'O', 'U', 'T', 'T', '_', '2', 'r', 0,
  /* 1723 */ 'O', 'U', 'T', '_', '2', 'r', 0,
  /* 1730 */ 'S', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1738 */ 'Z', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1746 */ 'S', 'E', 'T', 'C', '_', 'l', '2', 'r', 0,
  /* 1755 */ 'G', 'E', 'T', 'D', '_', 'l', '2', 'r', 0,
  /* 1764 */ 'S', 'E', 'T', 'C', 'L', 'K', '_', 'l', '2', 'r', 0,
  /* 1775 */ 'T', 'E', 'S', 'T', 'L', 'C', 'L', '_', 'l', '2', 'r', 0,
  /* 1787 */ 'G', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1796 */ 'S', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1805 */ 'I', 'N', 'I', 'T', 'L', 'R', '_', 'l', '2', 'r', 0,
  /* 1816 */ 'G', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1826 */ 'S', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1836 */ 'B', 'Y', 'T', 'E', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1848 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1859 */ 'S', 'E', 'T', 'T', 'W', '_', 'l', '2', 'r', 0,
  /* 1869 */ 'S', 'E', 'T', 'R', 'D', 'Y', '_', 'l', '2', 'r', 0,
  /* 1880 */ 'C', 'L', 'Z', '_', 'l', '2', 'r', 0,
  /* 1888 */ 'S', 'U', 'B', '_', '3', 'r', 0,
  /* 1895 */ 'A', 'D', 'D', '_', '3', 'r', 0,
  /* 1902 */ 'A', 'N', 'D', '_', '3', 'r', 0,
  /* 1909 */ 'S', 'H', 'L', '_', '3', 'r', 0,
  /* 1916 */ 'E', 'Q', '_', '3', 'r', 0,
  /* 1922 */ 'S', 'H', 'R', '_', '3', 'r', 0,
  /* 1929 */ 'O', 'R', '_', '3', 'r', 0,
  /* 1935 */ 'T', 'S', 'E', 'T', 'R', '_', '3', 'r', 0,
  /* 1944 */ 'L', 'D', '1', '6', 'S', '_', '3', 'r', 0,
  /* 1953 */ 'L', 'S', 'S', '_', '3', 'r', 0,
  /* 1960 */ 'L', 'D', '8', 'U', '_', '3', 'r', 0,
  /* 1968 */ 'L', 'S', 'U', '_', '3', 'r', 0,
  /* 1975 */ 'L', 'D', 'W', '_', '3', 'r', 0,
  /* 1982 */ 'S', 'T', '1', '6', '_', 'l', '3', 'r', 0,
  /* 1991 */ 'S', 'T', '8', '_', 'l', '3', 'r', 0,
  /* 1999 */ 'L', 'D', 'A', '1', '6', 'B', '_', 'l', '3', 'r', 0,
  /* 2010 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '3', 'r', 0,
  /* 2020 */ 'C', 'R', 'C', '_', 'l', '3', 'r', 0,
  /* 2028 */ 'L', 'D', 'A', '1', '6', 'F', '_', 'l', '3', 'r', 0,
  /* 2039 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '3', 'r', 0,
  /* 2049 */ 'M', 'U', 'L', '_', 'l', '3', 'r', 0,
  /* 2057 */ 'A', 'S', 'H', 'R', '_', 'l', '3', 'r', 0,
  /* 2066 */ 'X', 'O', 'R', '_', 'l', '3', 'r', 0,
  /* 2074 */ 'R', 'E', 'M', 'S', '_', 'l', '3', 'r', 0,
  /* 2083 */ 'D', 'I', 'V', 'S', '_', 'l', '3', 'r', 0,
  /* 2092 */ 'R', 'E', 'M', 'U', '_', 'l', '3', 'r', 0,
  /* 2101 */ 'D', 'I', 'V', 'U', '_', 'l', '3', 'r', 0,
  /* 2110 */ 'S', 'T', 'W', '_', 'l', '3', 'r', 0,
  /* 2118 */ 'C', 'R', 'C', '8', '_', 'l', '4', 'r', 0,
  /* 2127 */ 'M', 'A', 'C', 'C', 'S', '_', 'l', '4', 'r', 0,
  /* 2137 */ 'M', 'A', 'C', 'C', 'U', '_', 'l', '4', 'r', 0,
  /* 2147 */ 'L', 'S', 'U', 'B', '_', 'l', '5', 'r', 0,
  /* 2156 */ 'L', 'A', 'D', 'D', '_', 'l', '5', 'r', 0,
  /* 2165 */ 'L', 'D', 'I', 'V', 'U', '_', 'l', '5', 'r', 0,
  /* 2175 */ 'L', 'M', 'U', 'L', '_', 'l', '6', 'r', 0,
  /* 2184 */ 'I', 'n', 't', '_', 'M', 'e', 'm', 'B', 'a', 'r', 'r', 'i', 'e', 'r', 0,
  /* 2199 */ 'S', 'U', 'B', '_', '2', 'r', 'u', 's', 0,
  /* 2208 */ 'A', 'D', 'D', '_', '2', 'r', 'u', 's', 0,
  /* 2217 */ 'S', 'H', 'L', '_', '2', 'r', 'u', 's', 0,
  /* 2226 */ 'E', 'Q', '_', '2', 'r', 'u', 's', 0,
  /* 2234 */ 'S', 'H', 'R', '_', '2', 'r', 'u', 's', 0,
  /* 2243 */ 'L', 'D', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2252 */ 'S', 'T', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2261 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2273 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2285 */ 'A', 'S', 'H', 'R', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2296 */ 'I', 'N', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2307 */ 'O', 'U', 'T', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2319 */ 'M', 'K', 'M', 'S', 'K', '_', 'r', 'u', 's', 0,
  /* 2329 */ 'G', 'E', 'T', 'R', '_', 'r', 'u', 's', 0,
  /* 2338 */ 'C', 'H', 'K', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2348 */ 'O', 'U', 'T', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2358 */ 'S', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
  /* 2367 */ 'Z', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
};

extern const unsigned XCoreInstrNameIndices[] = {
    869U, 896U, 906U, 882U, 873U, 891U, 807U, 822U, 
    790U, 836U, 1229U, 780U, 760U, 1314U, 773U, 1299U, 
    730U, 949U, 1284U, 743U, 1273U, 718U, 958U, 2208U, 
    1895U, 932U, 975U, 1687U, 1902U, 2285U, 2057U, 1452U, 
    1848U, 100U, 38U, 384U, 224U, 1342U, 69U, 10U, 
    90U, 29U, 589U, 462U, 688U, 552U, 393U, 232U, 
    599U, 471U, 698U, 561U, 402U, 240U, 1473U, 1267U, 
    122U, 1836U, 1626U, 2338U, 1044U, 1210U, 411U, 248U, 
    354U, 197U, 1880U, 2118U, 2020U, 1052U, 1091U, 1368U, 
    2083U, 2101U, 1101U, 1147U, 1358U, 1442U, 1459U, 1525U, 
    1673U, 1466U, 922U, 1549U, 322U, 168U, 2226U, 1916U, 
    301U, 149U, 344U, 188U, 1246U, 1433U, 1138U, 1755U, 
    1026U, 1163U, 1035U, 1061U, 1081U, 1787U, 1816U, 2329U, 
    364U, 206U, 1706U, 1617U, 1635U, 1558U, 1568U, 1805U, 
    1497U, 1578U, 2296U, 1588U, 1680U, 1552U, 2184U, 1379U, 
    280U, 130U, 321U, 167U, 332U, 177U, 1155U, 2156U, 
    1944U, 1960U, 1999U, 2028U, 58U, 0U, 79U, 1319U, 
    19U, 2261U, 2010U, 290U, 139U, 620U, 490U, 850U, 
    2273U, 2039U, 654U, 521U, 570U, 445U, 1130U, 2165U, 
    1008U, 990U, 1112U, 609U, 111U, 480U, 48U, 632U, 
    501U, 857U, 666U, 532U, 2243U, 1975U, 2175U, 1953U, 
    2147U, 1968U, 2127U, 2137U, 1388U, 1540U, 2319U, 1349U, 
    2049U, 803U, 1295U, 1929U, 1653U, 2348U, 2307U, 1597U, 
    1715U, 1723U, 1532U, 2074U, 2092U, 311U, 158U, 708U, 
    1764U, 1397U, 1746U, 579U, 453U, 1406U, 1517U, 1480U, 
    1071U, 1796U, 1507U, 1826U, 1697U, 1869U, 1415U, 428U, 
    264U, 374U, 215U, 1859U, 1489U, 1730U, 2358U, 2217U, 
    1909U, 2234U, 1922U, 1333U, 1982U, 1991U, 1172U, 1017U, 
    999U, 1121U, 643U, 511U, 863U, 677U, 542U, 2252U, 
    2110U, 2199U, 1888U, 1424U, 1643U, 1775U, 1662U, 1607U, 
    1935U, 1219U, 1190U, 1200U, 1180U, 2066U, 1738U, 2367U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 248);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~XCoreGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 248);
}
XCoreGenInstrInfo::~XCoreGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace XCore {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace XCore {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace XCore {
namespace OpTypes { 
enum OperandType {
  InlineJT = 0,
  InlineJT32 = 1,
  MEMii = 2,
  brtarget = 3,
  brtarget_neg = 4,
  f32imm = 5,
  f64imm = 6,
  i16imm = 7,
  i1imm = 8,
  i32imm = 9,
  i64imm = 10,
  i8imm = 11,
  pcrel_imm = 12,
  pcrel_imm_neg = 13,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace XCore
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
