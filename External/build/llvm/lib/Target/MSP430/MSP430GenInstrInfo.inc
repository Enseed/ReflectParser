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

namespace MSP430 {
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
    ADC16mi	= 23,
    ADC16mm	= 24,
    ADC16mr	= 25,
    ADC16ri	= 26,
    ADC16rm	= 27,
    ADC16rr	= 28,
    ADC8mi	= 29,
    ADC8mm	= 30,
    ADC8mr	= 31,
    ADC8ri	= 32,
    ADC8rm	= 33,
    ADC8rr	= 34,
    ADD16mi	= 35,
    ADD16mm	= 36,
    ADD16mr	= 37,
    ADD16ri	= 38,
    ADD16rm	= 39,
    ADD16rm_POST	= 40,
    ADD16rr	= 41,
    ADD8mi	= 42,
    ADD8mm	= 43,
    ADD8mr	= 44,
    ADD8ri	= 45,
    ADD8rm	= 46,
    ADD8rm_POST	= 47,
    ADD8rr	= 48,
    ADJCALLSTACKDOWN	= 49,
    ADJCALLSTACKUP	= 50,
    AND16mi	= 51,
    AND16mm	= 52,
    AND16mr	= 53,
    AND16ri	= 54,
    AND16rm	= 55,
    AND16rm_POST	= 56,
    AND16rr	= 57,
    AND8mi	= 58,
    AND8mm	= 59,
    AND8mr	= 60,
    AND8ri	= 61,
    AND8rm	= 62,
    AND8rm_POST	= 63,
    AND8rr	= 64,
    BIC16mm	= 65,
    BIC16mr	= 66,
    BIC16rm	= 67,
    BIC16rr	= 68,
    BIC8mm	= 69,
    BIC8mr	= 70,
    BIC8rm	= 71,
    BIC8rr	= 72,
    BIT16mi	= 73,
    BIT16mm	= 74,
    BIT16mr	= 75,
    BIT16ri	= 76,
    BIT16rm	= 77,
    BIT16rr	= 78,
    BIT8mi	= 79,
    BIT8mm	= 80,
    BIT8mr	= 81,
    BIT8ri	= 82,
    BIT8rm	= 83,
    BIT8rr	= 84,
    Bi	= 85,
    Bm	= 86,
    Br	= 87,
    CALLi	= 88,
    CALLm	= 89,
    CALLr	= 90,
    CMP16mi	= 91,
    CMP16mr	= 92,
    CMP16ri	= 93,
    CMP16rm	= 94,
    CMP16rr	= 95,
    CMP8mi	= 96,
    CMP8mr	= 97,
    CMP8ri	= 98,
    CMP8rm	= 99,
    CMP8rr	= 100,
    JCC	= 101,
    JMP	= 102,
    MOV16mi	= 103,
    MOV16mm	= 104,
    MOV16mr	= 105,
    MOV16ri	= 106,
    MOV16rm	= 107,
    MOV16rm_POST	= 108,
    MOV16rr	= 109,
    MOV8mi	= 110,
    MOV8mm	= 111,
    MOV8mr	= 112,
    MOV8ri	= 113,
    MOV8rm	= 114,
    MOV8rm_POST	= 115,
    MOV8rr	= 116,
    MOVZX16rm8	= 117,
    MOVZX16rr8	= 118,
    NOP	= 119,
    OR16mi	= 120,
    OR16mm	= 121,
    OR16mr	= 122,
    OR16ri	= 123,
    OR16rm	= 124,
    OR16rm_POST	= 125,
    OR16rr	= 126,
    OR8mi	= 127,
    OR8mm	= 128,
    OR8mr	= 129,
    OR8ri	= 130,
    OR8rm	= 131,
    OR8rm_POST	= 132,
    OR8rr	= 133,
    POP16r	= 134,
    PUSH16r	= 135,
    RET	= 136,
    RETI	= 137,
    SAR16r1	= 138,
    SAR16r1c	= 139,
    SAR8r1	= 140,
    SAR8r1c	= 141,
    SBC16mi	= 142,
    SBC16mm	= 143,
    SBC16mr	= 144,
    SBC16ri	= 145,
    SBC16rm	= 146,
    SBC16rr	= 147,
    SBC8mi	= 148,
    SBC8mm	= 149,
    SBC8mr	= 150,
    SBC8ri	= 151,
    SBC8rm	= 152,
    SBC8rr	= 153,
    SEXT16r	= 154,
    SHL16r1	= 155,
    SHL8r1	= 156,
    SUB16mi	= 157,
    SUB16mm	= 158,
    SUB16mr	= 159,
    SUB16ri	= 160,
    SUB16rm	= 161,
    SUB16rm_POST	= 162,
    SUB16rr	= 163,
    SUB8mi	= 164,
    SUB8mm	= 165,
    SUB8mr	= 166,
    SUB8ri	= 167,
    SUB8rm	= 168,
    SUB8rm_POST	= 169,
    SUB8rr	= 170,
    SWPB16r	= 171,
    Select16	= 172,
    Select8	= 173,
    Shl16	= 174,
    Shl8	= 175,
    Sra16	= 176,
    Sra8	= 177,
    Srl16	= 178,
    Srl8	= 179,
    XOR16mi	= 180,
    XOR16mm	= 181,
    XOR16mr	= 182,
    XOR16ri	= 183,
    XOR16rm	= 184,
    XOR16rm_POST	= 185,
    XOR16rr	= 186,
    XOR8mi	= 187,
    XOR8mm	= 188,
    XOR8mr	= 189,
    XOR8ri	= 190,
    XOR8rm	= 191,
    XOR8rm_POST	= 192,
    XOR8rr	= 193,
    ZEXT16r	= 194,
    INSTRUCTION_LIST_END = 195
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End MSP430 namespace
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

static const uint16_t ImplicitList1[] = { MSP430::SR, 0 };
static const uint16_t ImplicitList2[] = { MSP430::SP, 0 };
static const uint16_t ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const uint16_t ImplicitList4[] = { MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo23[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo24[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
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
  { 23,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADC16mi
  { 24,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADC16mm
  { 25,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #25 = ADC16mr
  { 26,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #26 = ADC16ri
  { 27,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #27 = ADC16rm
  { 28,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #28 = ADC16rr
  { 29,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #29 = ADC8mi
  { 30,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #30 = ADC8mm
  { 31,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #31 = ADC8mr
  { 32,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #32 = ADC8ri
  { 33,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #33 = ADC8rm
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #34 = ADC8rr
  { 35,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #35 = ADD16mi
  { 36,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #36 = ADD16mm
  { 37,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #37 = ADD16mr
  { 38,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #38 = ADD16ri
  { 39,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #39 = ADD16rm
  { 40,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #40 = ADD16rm_POST
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #41 = ADD16rr
  { 42,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #42 = ADD8mi
  { 43,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #43 = ADD8mm
  { 44,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #44 = ADD8mr
  { 45,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #45 = ADD8ri
  { 46,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #46 = ADD8rm
  { 47,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #47 = ADD8rm_POST
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #48 = ADD8rr
  { 49,	1,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #49 = ADJCALLSTACKDOWN
  { 50,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #50 = ADJCALLSTACKUP
  { 51,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #51 = AND16mi
  { 52,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #52 = AND16mm
  { 53,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #53 = AND16mr
  { 54,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #54 = AND16ri
  { 55,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #55 = AND16rm
  { 56,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #56 = AND16rm_POST
  { 57,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #57 = AND16rr
  { 58,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #58 = AND8mi
  { 59,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #59 = AND8mm
  { 60,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #60 = AND8mr
  { 61,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #61 = AND8ri
  { 62,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #62 = AND8rm
  { 63,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #63 = AND8rm_POST
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #64 = AND8rr
  { 65,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #65 = BIC16mm
  { 66,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #66 = BIC16mr
  { 67,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #67 = BIC16rm
  { 68,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #68 = BIC16rr
  { 69,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #69 = BIC8mm
  { 70,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #70 = BIC8mr
  { 71,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #71 = BIC8rm
  { 72,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #72 = BIC8rr
  { 73,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #73 = BIT16mi
  { 74,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #74 = BIT16mm
  { 75,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #75 = BIT16mr
  { 76,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #76 = BIT16ri
  { 77,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #77 = BIT16rm
  { 78,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #78 = BIT16rr
  { 79,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #79 = BIT8mi
  { 80,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #80 = BIT8mm
  { 81,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #81 = BIT8mr
  { 82,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #82 = BIT8ri
  { 83,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #83 = BIT8rm
  { 84,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #84 = BIT8rr
  { 85,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #85 = Bi
  { 86,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #86 = Bm
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #87 = Br
  { 88,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo2, -1 ,nullptr },  // Inst #88 = CALLi
  { 89,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo30, -1 ,nullptr },  // Inst #89 = CALLm
  { 90,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo31, -1 ,nullptr },  // Inst #90 = CALLr
  { 91,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #91 = CMP16mi
  { 92,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #92 = CMP16mr
  { 93,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #93 = CMP16ri
  { 94,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #94 = CMP16rm
  { 95,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #95 = CMP16rr
  { 96,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #96 = CMP8mi
  { 97,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #97 = CMP8mr
  { 98,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #98 = CMP8ri
  { 99,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #99 = CMP8rm
  { 100,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #100 = CMP8rr
  { 101,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #101 = JCC
  { 102,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #102 = JMP
  { 103,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #103 = MOV16mi
  { 104,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #104 = MOV16mm
  { 105,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #105 = MOV16mr
  { 106,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #106 = MOV16ri
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #107 = MOV16rm
  { 108,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #108 = MOV16rm_POST
  { 109,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #109 = MOV16rr
  { 110,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #110 = MOV8mi
  { 111,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #111 = MOV8mm
  { 112,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #112 = MOV8mr
  { 113,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #113 = MOV8ri
  { 114,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #114 = MOV8rm
  { 115,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #115 = MOV8rm_POST
  { 116,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #116 = MOV8rr
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #117 = MOVZX16rm8
  { 118,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #118 = MOVZX16rr8
  { 119,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #119 = NOP
  { 120,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #120 = OR16mi
  { 121,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #121 = OR16mm
  { 122,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #122 = OR16mr
  { 123,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #123 = OR16ri
  { 124,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #124 = OR16rm
  { 125,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #125 = OR16rm_POST
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #126 = OR16rr
  { 127,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #127 = OR8mi
  { 128,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #128 = OR8mm
  { 129,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #129 = OR8mr
  { 130,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #130 = OR8ri
  { 131,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #131 = OR8rm
  { 132,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #132 = OR8rm_POST
  { 133,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #133 = OR8rr
  { 134,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo31, -1 ,nullptr },  // Inst #134 = POP16r
  { 135,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo31, -1 ,nullptr },  // Inst #135 = PUSH16r
  { 136,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #136 = RET
  { 137,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #137 = RETI
  { 138,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #138 = SAR16r1
  { 139,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #139 = SAR16r1c
  { 140,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #140 = SAR8r1
  { 141,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #141 = SAR8r1c
  { 142,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #142 = SBC16mi
  { 143,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #143 = SBC16mm
  { 144,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #144 = SBC16mr
  { 145,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #145 = SBC16ri
  { 146,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #146 = SBC16rm
  { 147,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #147 = SBC16rr
  { 148,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #148 = SBC8mi
  { 149,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #149 = SBC8mm
  { 150,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #150 = SBC8mr
  { 151,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #151 = SBC8ri
  { 152,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #152 = SBC8rm
  { 153,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #153 = SBC8rr
  { 154,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #154 = SEXT16r
  { 155,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #155 = SHL16r1
  { 156,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #156 = SHL8r1
  { 157,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #157 = SUB16mi
  { 158,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #158 = SUB16mm
  { 159,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #159 = SUB16mr
  { 160,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #160 = SUB16ri
  { 161,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #161 = SUB16rm
  { 162,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #162 = SUB16rm_POST
  { 163,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #163 = SUB16rr
  { 164,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #164 = SUB8mi
  { 165,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #165 = SUB8mm
  { 166,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #166 = SUB8mr
  { 167,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #167 = SUB8ri
  { 168,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #168 = SUB8rm
  { 169,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #169 = SUB8rm_POST
  { 170,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #170 = SUB8rr
  { 171,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #171 = SWPB16r
  { 172,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #172 = Select16
  { 173,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #173 = Select8
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #174 = Shl16
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #175 = Shl8
  { 176,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #176 = Sra16
  { 177,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #177 = Sra8
  { 178,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #178 = Srl16
  { 179,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #179 = Srl8
  { 180,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #180 = XOR16mi
  { 181,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #181 = XOR16mm
  { 182,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #182 = XOR16mr
  { 183,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #183 = XOR16ri
  { 184,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #184 = XOR16rm
  { 185,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #185 = XOR16rm_POST
  { 186,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #186 = XOR16rr
  { 187,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #187 = XOR8mi
  { 188,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #188 = XOR8mm
  { 189,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #189 = XOR8mr
  { 190,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #190 = XOR8ri
  { 191,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #191 = XOR8rm
  { 192,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #192 = XOR8rm_POST
  { 193,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #193 = XOR8rr
  { 194,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #194 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'S', 'r', 'a', '1', '6', 0,
  /* 36 */ 'S', 'h', 'l', '1', '6', 0,
  /* 42 */ 'S', 'r', 'l', '1', '6', 0,
  /* 48 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 57 */ 'S', 'r', 'a', '8', 0,
  /* 62 */ 'S', 'h', 'l', '8', 0,
  /* 67 */ 'S', 'r', 'l', '8', 0,
  /* 72 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 83 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 94 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 102 */ 'J', 'C', 'C', 0,
  /* 106 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 118 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 131 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 148 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 161 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 168 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 178 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 191 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 206 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 220 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 234 */ 'P', 'H', 'I', 0,
  /* 238 */ 'R', 'E', 'T', 'I', 0,
  /* 243 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 252 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 261 */ 'K', 'I', 'L', 'L', 0,
  /* 266 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 276 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 292 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 309 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 318 */ 'J', 'M', 'P', 0,
  /* 322 */ 'N', 'O', 'P', 0,
  /* 326 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 343 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 358 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 375 */ 'R', 'E', 'T', 0,
  /* 379 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 390 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 401 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 416 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 429 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 442 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 455 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 468 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 481 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 493 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 505 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 517 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 529 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 541 */ 'C', 'O', 'P', 'Y', 0,
  /* 546 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 555 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 563 */ 'B', 'i', 0,
  /* 566 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 572 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 580 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 588 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 596 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 604 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 612 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 620 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 628 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 636 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 644 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 651 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 658 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 665 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 672 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 679 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 686 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 693 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 700 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 707 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 715 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 723 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 731 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 739 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 747 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 755 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 763 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 771 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 779 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 786 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 793 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 800 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 807 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 814 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 821 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 828 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 835 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 842 */ 'B', 'm', 0,
  /* 845 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 851 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 859 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 867 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 875 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 883 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 891 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 899 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 907 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 915 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 923 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 930 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 937 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 944 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 951 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 958 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 965 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 972 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 979 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 986 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 994 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 1002 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 1010 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 1018 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 1026 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 1034 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1042 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1050 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1058 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1066 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1073 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1080 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1087 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1094 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1101 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1108 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1115 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1122 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1129 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1136 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1144 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1152 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1159 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1167 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1175 */ 'B', 'r', 0,
  /* 1178 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1184 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1192 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1200 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1208 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1216 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 1224 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 1232 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 1240 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 1248 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 1256 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 1264 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 1271 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 1278 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 1285 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 1292 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 1299 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 1306 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 1313 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 1320 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 1327 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 1334 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 1342 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 1350 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 1358 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 1366 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 1374 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 1382 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 1390 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 1398 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 1406 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 1414 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 1421 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 1428 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 1435 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 1442 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 1449 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 1456 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 1463 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 1470 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 1477 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    234U, 266U, 276U, 252U, 243U, 261U, 191U, 206U, 
    178U, 220U, 358U, 168U, 148U, 541U, 161U, 401U, 
    118U, 309U, 390U, 131U, 379U, 106U, 326U, 588U, 
    867U, 1200U, 723U, 1002U, 1350U, 658U, 937U, 1278U, 
    793U, 1080U, 1428U, 596U, 883U, 1216U, 731U, 1018U, 
    429U, 1366U, 665U, 951U, 1292U, 800U, 1094U, 493U, 
    1442U, 292U, 343U, 604U, 891U, 1224U, 739U, 1026U, 
    442U, 1374U, 672U, 958U, 1299U, 807U, 1101U, 505U, 
    1449U, 875U, 1208U, 1010U, 1358U, 944U, 1285U, 1087U, 
    1435U, 628U, 907U, 1248U, 763U, 1050U, 1398U, 693U, 
    972U, 1320U, 828U, 1122U, 1470U, 563U, 842U, 1175U, 
    566U, 845U, 1178U, 612U, 1232U, 747U, 1034U, 1382U, 
    679U, 1306U, 814U, 1108U, 1456U, 102U, 318U, 636U, 
    915U, 1256U, 771U, 1058U, 468U, 1406U, 700U, 979U, 
    1327U, 835U, 1129U, 529U, 1477U, 72U, 83U, 322U, 
    621U, 900U, 1241U, 756U, 1043U, 456U, 1391U, 687U, 
    966U, 1314U, 822U, 1116U, 518U, 1464U, 1152U, 1144U, 
    375U, 238U, 8U, 546U, 23U, 555U, 580U, 859U, 
    1192U, 715U, 994U, 1342U, 651U, 930U, 1271U, 786U, 
    1073U, 1421U, 1159U, 0U, 16U, 572U, 851U, 1184U, 
    707U, 986U, 416U, 1334U, 644U, 923U, 1264U, 779U, 
    1066U, 481U, 1414U, 1136U, 48U, 94U, 36U, 62U, 
    30U, 57U, 42U, 67U, 620U, 899U, 1240U, 755U, 
    1042U, 455U, 1390U, 686U, 965U, 1313U, 821U, 1115U, 
    517U, 1463U, 1167U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 195);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~MSP430GenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 195);
}
MSP430GenInstrInfo::~MSP430GenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace MSP430
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace MSP430
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes { 
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace MSP430
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
