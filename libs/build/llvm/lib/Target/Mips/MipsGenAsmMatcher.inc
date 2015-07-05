/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint32_t {
  Feature_HasMips2 = (1ULL << 5),
  Feature_HasMips3_32 = (1ULL << 10),
  Feature_HasMips3_32r2 = (1ULL << 11),
  Feature_HasMips3 = (1ULL << 6),
  Feature_HasMips4_32 = (1ULL << 12),
  Feature_NotMips4_32 = (1ULL << 30),
  Feature_HasMips4_32r2 = (1ULL << 13),
  Feature_HasMips5_32r2 = (1ULL << 14),
  Feature_HasMips32 = (1ULL << 7),
  Feature_HasMips32r2 = (1ULL << 8),
  Feature_HasMips32r6 = (1ULL << 9),
  Feature_NotMips32r6 = (1ULL << 29),
  Feature_IsGP64bit = (1ULL << 23),
  Feature_IsGP32bit = (1ULL << 22),
  Feature_HasMips64 = (1ULL << 15),
  Feature_HasMips64r2 = (1ULL << 16),
  Feature_HasMips64r6 = (1ULL << 17),
  Feature_NotMips64r6 = (1ULL << 31),
  Feature_HasMicroMips32r6 = (1ULL << 4),
  Feature_InMips16Mode = (1ULL << 20),
  Feature_HasCnMips = (1ULL << 0),
  Feature_HasStdEnc = (1ULL << 18),
  Feature_InMicroMips = (1ULL << 19),
  Feature_NotInMicroMips = (1ULL << 28),
  Feature_IsFP64bit = (1ULL << 21),
  Feature_NotFP64bit = (1ULL << 27),
  Feature_IsSingleFloat = (1ULL << 26),
  Feature_IsNotSingleFloat = (1ULL << 24),
  Feature_IsNotSoftFloat = (1ULL << 25),
  Feature_HasDSP = (1ULL << 1),
  Feature_HasDSPR2 = (1ULL << 2),
  Feature_HasMSA = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasMips2: return "";
  case Feature_HasMips3_32: return "";
  case Feature_HasMips3_32r2: return "";
  case Feature_HasMips3: return "";
  case Feature_HasMips4_32: return "";
  case Feature_NotMips4_32: return "";
  case Feature_HasMips4_32r2: return "";
  case Feature_HasMips5_32r2: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips32r6: return "";
  case Feature_NotMips32r6: return "";
  case Feature_IsGP64bit: return "";
  case Feature_IsGP32bit: return "";
  case Feature_HasMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_HasMips64r6: return "";
  case Feature_NotMips64r6: return "";
  case Feature_HasMicroMips32r6: return "";
  case Feature_InMips16Mode: return "";
  case Feature_HasCnMips: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_IsNotSoftFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasMSA: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addAFGR64AsmRegOperands,
  CVT_95_addFGR64AsmRegOperands,
  CVT_95_addFGR32AsmRegOperands,
  CVT_95_addGPR32AsmRegOperands,
  CVT_95_addImmOperands,
  CVT_95_addMSA128AsmRegOperands,
  CVT_95_Reg,
  CVT_95_addGPRMM16AsmRegOperands,
  CVT_regZERO,
  CVT_95_addGPR64AsmRegOperands,
  CVT_regFCC0,
  CVT_95_addFCCAsmRegOperands,
  CVT_95_addCOP2AsmRegOperands,
  CVT_imm_95_0,
  CVT_95_addMemOperands,
  CVT_95_addCCRAsmRegOperands,
  CVT_95_addMSACtrlAsmRegOperands,
  CVT_95_addCOP0AsmRegOperands,
  CVT_regZERO_64,
  CVT_95_addACC64DSPAsmRegOperands,
  CVT_regRA,
  CVT_95_addMicroMipsMemOperands,
  CVT_95_addCOP3AsmRegOperands,
  CVT_95_addRegListOperands,
  CVT_95_addRegPairOperands,
  CVT_95_addMovePRegPairOperands,
  CVT_95_addGPRMM16AsmRegMovePOperands,
  CVT_95_addHI32DSPAsmRegOperands,
  CVT_95_addLO32DSPAsmRegOperands,
  CVT_95_addHWRegsAsmRegOperands,
  CVT_95_addGPRMM16AsmRegZeroOperands,
  CVT_imm_95_2,
  CVT_imm_95_6,
  CVT_imm_95_4,
  CVT_imm_95_5,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__GPR32AsmReg1_0__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__Imm1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__Imm1_1,
  Convert__Imm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__Imm1_1,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0,
  Convert__JumpTarget1_0,
  Convert__regZERO__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2,
  Convert__FGR64AsmReg1_0__JumpTarget1_1,
  Convert__regFCC0__JumpTarget1_0,
  Convert__FCCAsmReg1_0__JumpTarget1_1,
  Convert__COP2AsmReg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2,
  Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2,
  Convert__Reg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2,
  Convert__MSA128AsmReg1_0__JumpTarget1_1,
  Convert__imm_95_0__imm_95_0,
  Convert_NoOperands,
  Convert__UImm101_0__imm_95_0,
  Convert__UImm101_0__UImm101_1,
  Convert__Mem2_1__Imm1_0,
  Convert__FGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__CCRAsmReg1_1,
  Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3,
  Convert__Reg1_0__Reg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__CCRAsmReg1_1__GPR32AsmReg1_0,
  Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__Tie0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO,
  Convert__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2,
  Convert__FGR64AsmReg1_1__GPR64AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6,
  Convert__regRA__GPR32AsmReg1_0,
  Convert__Reg1_0,
  Convert__regZERO__GPR32AsmReg1_0,
  Convert__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR32AsmReg1_0__Mem2_1,
  Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Mem2_1,
  Convert__AFGR64AsmReg1_0__Mem2_1,
  Convert__FGR64AsmReg1_0__Mem2_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm112_1,
  Convert__COP2AsmReg1_0__Mem2_1,
  Convert__COP3AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR64AsmReg1_0__JumpTarget1_1,
  Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__Imm1_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3,
  Convert__Reg1_0__Imm1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1,
  Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__Mem2_1__Tie0,
  Convert__RegList1_0__Mem2_1,
  Convert__RegList161_0__MemOffsetUimm42_1,
  Convert__RegPair2_0__Mem2_1,
  Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3,
  Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64,
  Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2,
  Convert__FGR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2,
  Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0,
  Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0,
  Convert__regZERO__regZERO__imm_95_0,
  Convert__regZERO__regZERO,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__Tie0__Mem2_1,
  Convert__GPR64AsmReg1_0__Tie0__Mem2_1,
  Convert__imm_95_0,
  Convert__Reg1_0__Tie0,
  Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2,
  Convert__MemOffsetSimm162_0,
  Convert__imm_95_2,
  Convert__imm_95_6,
  Convert__imm_95_4,
  Convert__imm_95_5,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0,
  Convert__UImm101_0,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Imm1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addGPRMM16AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__JumpTarget1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regFCC0__JumpTarget1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCAsmReg1_0__JumpTarget1_1
  { CVT_95_addFCCAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__JumpTarget1_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__JumpTarget1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__JumpTarget1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__UImm101_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__UImm101_0__UImm101_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Mem2_1__Imm1_0
  { CVT_95_addMemOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__CCRAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCCRAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSACtrlAsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CCRAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCCRAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSACtrlAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR64AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__regRA__GPR32AsmReg1_0
  { CVT_regRA, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__regZERO__GPR32AsmReg1_0
  { CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO_64__GPR64AsmReg1_0
  { CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Mem2_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__Mem2_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__Mem2_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm112_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__Mem2_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP3AsmReg1_0__Mem2_1
  { CVT_95_addCOP3AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Imm1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__Mem2_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__RegList1_0__Mem2_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegList161_0__MemOffsetUimm42_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegPair2_0__Mem2_1
  { CVT_95_addRegPairOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_95_addFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2
  { CVT_95_addMovePRegPairOperands, 1, CVT_95_addGPRMM16AsmRegMovePOperands, 2, CVT_95_addGPRMM16AsmRegMovePOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addAFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addHI32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addLO32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__imm_95_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regZERO__regZERO
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegZeroOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MemOffsetSimm162_0
  { CVT_95_addMemOperands, 1, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__imm_95_6
  { CVT_imm_95_6, 0, CVT_Done },
  // Convert__imm_95_4
  { CVT_imm_95_4, 0, CVT_Done },
  // Convert__imm_95_5
  { CVT_imm_95_5, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__UImm101_0
  { CVT_95_addImmOperands, 1, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addAFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addMSA128AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSA128AsmRegOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO));
      break;
    case CVT_95_addGPR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR64AsmRegOperands(Inst, 1);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(Mips::FCC0));
      break;
    case CVT_95_addFCCAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFCCAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP2AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP2AsmRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMemOperands(Inst, 2);
      break;
    case CVT_95_addCCRAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCCRAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSACtrlAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP0AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP0AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO_64));
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addACC64DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::createReg(Mips::RA));
      break;
    case CVT_95_addMicroMipsMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMicroMipsMemOperands(Inst, 2);
      break;
    case CVT_95_addCOP3AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP3AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addRegListOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegListOperands(Inst, 1);
      break;
    case CVT_95_addRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegPairOperands(Inst, 2);
      break;
    case CVT_95_addMovePRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMovePRegPairOperands(Inst, 2);
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegMovePOperands(Inst, 1);
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHI32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addLO32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHWRegsAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegZeroOperands(Inst, 1);
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSA128AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addGPR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFCCAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP2AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCCRAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP0AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMicroMipsMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCOP3AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMovePRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_ZERO, // register class 'ZERO'
  MCK_Reg9, // derived register class
  MCK_Reg8, // derived register class
  MCK_Reg7, // derived register class
  MCK_Reg4, // derived register class
  MCK_CPU16Regs, // register class 'CPU16Regs,GPRMM16'
  MCK_GPRMM16MoveP, // register class 'GPRMM16MoveP'
  MCK_GPRMM16Zero, // register class 'GPRMM16Zero'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_Reg20, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg18, // derived register class
  MCK_Reg16, // derived register class
  MCK_Reg21, // derived register class
  MCK_Reg17, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg14, // derived register class
  MCK_Reg13, // derived register class
  MCK_Reg22, // derived register class
  MCK_GPR64, // register class 'GPR64'
  MCK_Reg24, // derived register class
  MCK_FGR32, // register class 'FGR32,FGRCC'
  MCK_Reg27, // derived register class
  MCK_FGRH32, // register class 'FGRH32'
  MCK_Reg29, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_Reg32, // derived register class
  MCK_Reg30, // derived register class
  MCK_FGR64, // register class 'FGR64'
  MCK_OddSP, // register class 'OddSP'
  MCK_MSA128WEvens, // register class 'MSA128WEvens'
  MCK_Reg35, // derived register class
  MCK_MSA128B, // register class 'MSA128B,MSA128D,MSA128H,MSA128W'
  MCK_HI32, // register class 'HI32'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32, // register class 'LO32'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_HI64, // register class 'HI64'
  MCK_LO64, // register class 'LO64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_COP0, // register class 'COP0'
  MCK_COP2, // register class 'COP2'
  MCK_COP3, // register class 'COP3'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_ACC64, // register class 'ACC64'
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_ACC128, // register class 'ACC128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_MSACtrl, // register class 'MSACtrl'
  MCK_OCTEON_MPL, // register class 'OCTEON_MPL'
  MCK_OCTEON_P, // register class 'OCTEON_P'
  MCK_ACC64DSPAsmReg, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64AsmReg, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsmReg, // user defined class 'CCRAsmOperand'
  MCK_COP0AsmReg, // user defined class 'COP0AsmOperand'
  MCK_COP2AsmReg, // user defined class 'COP2AsmOperand'
  MCK_COP3AsmReg, // user defined class 'COP3AsmOperand'
  MCK_FCCAsmReg, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32AsmReg, // user defined class 'FGR32AsmOperand'
  MCK_FGR64AsmReg, // user defined class 'FGR64AsmOperand'
  MCK_FGRH32AsmReg, // user defined class 'FGRH32AsmOperand'
  MCK_GPR32AsmReg, // user defined class 'GPR32AsmOperand'
  MCK_GPR64AsmReg, // user defined class 'GPR64AsmOperand'
  MCK_GPRMM16AsmReg, // user defined class 'GPRMM16AsmOperand'
  MCK_GPRMM16AsmRegMoveP, // user defined class 'GPRMM16AsmOperandMoveP'
  MCK_GPRMM16AsmRegZero, // user defined class 'GPRMM16AsmOperandZero'
  MCK_HI32DSPAsmReg, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsmReg, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsmReg, // user defined class 'LO32DSPAsmOperand'
  MCK_MSA128AsmReg, // user defined class 'MSA128AsmOperand'
  MCK_MSACtrlAsmReg, // user defined class 'MSACtrlAsmOperand'
  MCK_MicroMipsMem, // user defined class 'MicroMipsMemGPRMM16AsmOperand'
  MCK_MicroMipsMemSP, // user defined class 'MicroMipsMemSPAsmOperand'
  MCK_InvNum, // user defined class 'MipsInvertedImmoperand'
  MCK_JumpTarget, // user defined class 'MipsJumpTargetAsmOperand'
  MCK_MemOffsetSimm11, // user defined class 'MipsMemSimm11AsmOperand'
  MCK_MemOffsetSimm16, // user defined class 'MipsMemSimm16AsmOperand'
  MCK_MemOffsetUimm4, // user defined class 'MipsMemUimm4AsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  MCK_UImm10, // user defined class 'MipsUImm10AsmOperand'
  MCK_MovePRegPair, // user defined class 'MovePRegPairAsmOperand'
  MCK_RegList16, // user defined class 'RegList16AsmOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RegPair, // user defined class 'RegPairAsmOperand'
  MCK_LSAImm, // user defined class 'uimm2LSAAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ZERO:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg7: return true;
    case MCK_Reg4: return true;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg4:
    switch (B) {
    default: return false;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_GPRMM16MoveP:
    return B == MCK_DSPR;

  case MCK_GPRMM16Zero:
    return B == MCK_DSPR;

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_Reg20:
    switch (B) {
    default: return false;
    case MCK_Reg19: return true;
    case MCK_Reg18: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_Reg15: return true;
    case MCK_Reg14: return true;
    case MCK_Reg13: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_Reg14: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg18:
    switch (B) {
    default: return false;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_Reg13: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg16:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg17:
    return B == MCK_GPR64;

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_Reg14: return true;
    case MCK_Reg13: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg14:
    return B == MCK_GPR64;

  case MCK_Reg13:
    return B == MCK_GPR64;

  case MCK_Reg22:
    return B == MCK_GPR64;

  case MCK_Reg24:
    switch (B) {
    default: return false;
    case MCK_FGR32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg27:
    switch (B) {
    default: return false;
    case MCK_FGRH32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg29:
    switch (B) {
    default: return false;
    case MCK_AFGR64: return true;
    case MCK_Reg30: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg32:
    switch (B) {
    default: return false;
    case MCK_Reg30: return true;
    case MCK_FGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg30:
    return B == MCK_OddSP;

  case MCK_MSA128WEvens:
    return B == MCK_MSA128B;

  case MCK_Reg35:
    return B == MCK_MSA128B;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_MemOffsetSimm11:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm16:
    return B == MCK_Mem;

  case MCK_MemOffsetUimm4:
    return B == MCK_Mem;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  MipsOperand &Operand = (MipsOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACC64DSPAsmReg' class
  if (Kind == MCK_ACC64DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64AsmReg' class
  if (Kind == MCK_AFGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsmReg' class
  if (Kind == MCK_CCRAsmReg) {
    if (Operand.isCCRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP0AsmReg' class
  if (Kind == MCK_COP0AsmReg) {
    if (Operand.isCOP0AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP2AsmReg' class
  if (Kind == MCK_COP2AsmReg) {
    if (Operand.isCOP2AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP3AsmReg' class
  if (Kind == MCK_COP3AsmReg) {
    if (Operand.isCOP3AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FCCAsmReg' class
  if (Kind == MCK_FCCAsmReg) {
    if (Operand.isFCCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32AsmReg' class
  if (Kind == MCK_FGR32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64AsmReg' class
  if (Kind == MCK_FGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGRH32AsmReg' class
  if (Kind == MCK_FGRH32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32AsmReg' class
  if (Kind == MCK_GPR32AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64AsmReg' class
  if (Kind == MCK_GPR64AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmReg' class
  if (Kind == MCK_GPRMM16AsmReg) {
    if (Operand.isMM16AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegMoveP' class
  if (Kind == MCK_GPRMM16AsmRegMoveP) {
    if (Operand.isMM16AsmRegMoveP())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegZero' class
  if (Kind == MCK_GPRMM16AsmRegZero) {
    if (Operand.isMM16AsmRegZero())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HI32DSPAsmReg' class
  if (Kind == MCK_HI32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsmReg' class
  if (Kind == MCK_HWRegsAsmReg) {
    if (Operand.isHWRegsAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LO32DSPAsmReg' class
  if (Kind == MCK_LO32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSA128AsmReg' class
  if (Kind == MCK_MSA128AsmReg) {
    if (Operand.isMSA128AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSACtrlAsmReg' class
  if (Kind == MCK_MSACtrlAsmReg) {
    if (Operand.isMSACtrlAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMem' class
  if (Kind == MCK_MicroMipsMem) {
    if (Operand.isMemWithGRPMM16Base())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMemSP' class
  if (Kind == MCK_MicroMipsMemSP) {
    if (Operand.isMemWithUimmWordAlignedOffsetSP<7>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'InvNum' class
  if (Kind == MCK_InvNum) {
    if (Operand.isInvNum())
      return MCTargetAsmParser::Match_Success;
  }

  // 'JumpTarget' class
  if (Kind == MCK_JumpTarget) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm11' class
  if (Kind == MCK_MemOffsetSimm11) {
    if (Operand.isMemWithSimmOffset<11>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm16' class
  if (Kind == MCK_MemOffsetSimm16) {
    if (Operand.isMemWithSimmOffset<16>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetUimm4' class
  if (Kind == MCK_MemOffsetUimm4) {
    if (Operand.isMemWithUimmOffsetSP<6>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  // 'UImm10' class
  if (Kind == MCK_UImm10) {
    if (Operand.isUImm<10>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MovePRegPair' class
  if (Kind == MCK_MovePRegPair) {
    if (Operand.isMovePRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList16' class
  if (Kind == MCK_RegList16) {
    if (Operand.isRegList16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList' class
  if (Kind == MCK_RegList) {
    if (Operand.isRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegPair' class
  if (Kind == MCK_RegPair) {
    if (Operand.isRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LSAImm' class
  if (Kind == MCK_LSAImm) {
    if (Operand.isLSAImm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_Reg9; break;
    case Mips::V1: OpKind = MCK_Reg9; break;
    case Mips::A0: OpKind = MCK_Reg7; break;
    case Mips::A1: OpKind = MCK_Reg7; break;
    case Mips::A2: OpKind = MCK_Reg7; break;
    case Mips::A3: OpKind = MCK_Reg7; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_Reg8; break;
    case Mips::S1: OpKind = MCK_Reg9; break;
    case Mips::S2: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S3: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S4: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_DSPR; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_Reg15; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg20; break;
    case Mips::V1_64: OpKind = MCK_Reg20; break;
    case Mips::A0_64: OpKind = MCK_Reg18; break;
    case Mips::A1_64: OpKind = MCK_Reg18; break;
    case Mips::A2_64: OpKind = MCK_Reg18; break;
    case Mips::A3_64: OpKind = MCK_Reg18; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg19; break;
    case Mips::S1_64: OpKind = MCK_Reg20; break;
    case Mips::S2_64: OpKind = MCK_Reg14; break;
    case Mips::S3_64: OpKind = MCK_Reg14; break;
    case Mips::S4_64: OpKind = MCK_Reg14; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg21; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg22; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_Reg24; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_Reg24; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_Reg24; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_Reg24; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_Reg24; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_Reg24; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_Reg24; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_Reg24; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_Reg24; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_Reg24; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_Reg24; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_Reg24; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_Reg24; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_Reg24; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_Reg24; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_Reg24; break;
    case Mips::F_HI0: OpKind = MCK_FGRH32; break;
    case Mips::F_HI1: OpKind = MCK_Reg27; break;
    case Mips::F_HI2: OpKind = MCK_FGRH32; break;
    case Mips::F_HI3: OpKind = MCK_Reg27; break;
    case Mips::F_HI4: OpKind = MCK_FGRH32; break;
    case Mips::F_HI5: OpKind = MCK_Reg27; break;
    case Mips::F_HI6: OpKind = MCK_FGRH32; break;
    case Mips::F_HI7: OpKind = MCK_Reg27; break;
    case Mips::F_HI8: OpKind = MCK_FGRH32; break;
    case Mips::F_HI9: OpKind = MCK_Reg27; break;
    case Mips::F_HI10: OpKind = MCK_FGRH32; break;
    case Mips::F_HI11: OpKind = MCK_Reg27; break;
    case Mips::F_HI12: OpKind = MCK_FGRH32; break;
    case Mips::F_HI13: OpKind = MCK_Reg27; break;
    case Mips::F_HI14: OpKind = MCK_FGRH32; break;
    case Mips::F_HI15: OpKind = MCK_Reg27; break;
    case Mips::F_HI16: OpKind = MCK_FGRH32; break;
    case Mips::F_HI17: OpKind = MCK_Reg27; break;
    case Mips::F_HI18: OpKind = MCK_FGRH32; break;
    case Mips::F_HI19: OpKind = MCK_Reg27; break;
    case Mips::F_HI20: OpKind = MCK_FGRH32; break;
    case Mips::F_HI21: OpKind = MCK_Reg27; break;
    case Mips::F_HI22: OpKind = MCK_FGRH32; break;
    case Mips::F_HI23: OpKind = MCK_Reg27; break;
    case Mips::F_HI24: OpKind = MCK_FGRH32; break;
    case Mips::F_HI25: OpKind = MCK_Reg27; break;
    case Mips::F_HI26: OpKind = MCK_FGRH32; break;
    case Mips::F_HI27: OpKind = MCK_Reg27; break;
    case Mips::F_HI28: OpKind = MCK_FGRH32; break;
    case Mips::F_HI29: OpKind = MCK_Reg27; break;
    case Mips::F_HI30: OpKind = MCK_FGRH32; break;
    case Mips::F_HI31: OpKind = MCK_Reg27; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_Reg29; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_Reg29; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_Reg29; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_Reg29; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_Reg29; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_Reg29; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_Reg29; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_Reg29; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_Reg32; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_Reg32; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_Reg32; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_Reg32; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_Reg32; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_Reg32; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_Reg32; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_Reg32; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_Reg32; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_Reg32; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_Reg32; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_Reg32; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_Reg32; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_Reg32; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_Reg32; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_Reg32; break;
    case Mips::W0: OpKind = MCK_MSA128WEvens; break;
    case Mips::W1: OpKind = MCK_Reg35; break;
    case Mips::W2: OpKind = MCK_MSA128WEvens; break;
    case Mips::W3: OpKind = MCK_Reg35; break;
    case Mips::W4: OpKind = MCK_MSA128WEvens; break;
    case Mips::W5: OpKind = MCK_Reg35; break;
    case Mips::W6: OpKind = MCK_MSA128WEvens; break;
    case Mips::W7: OpKind = MCK_Reg35; break;
    case Mips::W8: OpKind = MCK_MSA128WEvens; break;
    case Mips::W9: OpKind = MCK_Reg35; break;
    case Mips::W10: OpKind = MCK_MSA128WEvens; break;
    case Mips::W11: OpKind = MCK_Reg35; break;
    case Mips::W12: OpKind = MCK_MSA128WEvens; break;
    case Mips::W13: OpKind = MCK_Reg35; break;
    case Mips::W14: OpKind = MCK_MSA128WEvens; break;
    case Mips::W15: OpKind = MCK_Reg35; break;
    case Mips::W16: OpKind = MCK_MSA128WEvens; break;
    case Mips::W17: OpKind = MCK_Reg35; break;
    case Mips::W18: OpKind = MCK_MSA128WEvens; break;
    case Mips::W19: OpKind = MCK_Reg35; break;
    case Mips::W20: OpKind = MCK_MSA128WEvens; break;
    case Mips::W21: OpKind = MCK_Reg35; break;
    case Mips::W22: OpKind = MCK_MSA128WEvens; break;
    case Mips::W23: OpKind = MCK_Reg35; break;
    case Mips::W24: OpKind = MCK_MSA128WEvens; break;
    case Mips::W25: OpKind = MCK_Reg35; break;
    case Mips::W26: OpKind = MCK_MSA128WEvens; break;
    case Mips::W27: OpKind = MCK_Reg35; break;
    case Mips::W28: OpKind = MCK_MSA128WEvens; break;
    case Mips::W29: OpKind = MCK_Reg35; break;
    case Mips::W30: OpKind = MCK_MSA128WEvens; break;
    case Mips::W31: OpKind = MCK_Reg35; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::COP00: OpKind = MCK_COP0; break;
    case Mips::COP01: OpKind = MCK_COP0; break;
    case Mips::COP02: OpKind = MCK_COP0; break;
    case Mips::COP03: OpKind = MCK_COP0; break;
    case Mips::COP04: OpKind = MCK_COP0; break;
    case Mips::COP05: OpKind = MCK_COP0; break;
    case Mips::COP06: OpKind = MCK_COP0; break;
    case Mips::COP07: OpKind = MCK_COP0; break;
    case Mips::COP08: OpKind = MCK_COP0; break;
    case Mips::COP09: OpKind = MCK_COP0; break;
    case Mips::COP010: OpKind = MCK_COP0; break;
    case Mips::COP011: OpKind = MCK_COP0; break;
    case Mips::COP012: OpKind = MCK_COP0; break;
    case Mips::COP013: OpKind = MCK_COP0; break;
    case Mips::COP014: OpKind = MCK_COP0; break;
    case Mips::COP015: OpKind = MCK_COP0; break;
    case Mips::COP016: OpKind = MCK_COP0; break;
    case Mips::COP017: OpKind = MCK_COP0; break;
    case Mips::COP018: OpKind = MCK_COP0; break;
    case Mips::COP019: OpKind = MCK_COP0; break;
    case Mips::COP020: OpKind = MCK_COP0; break;
    case Mips::COP021: OpKind = MCK_COP0; break;
    case Mips::COP022: OpKind = MCK_COP0; break;
    case Mips::COP023: OpKind = MCK_COP0; break;
    case Mips::COP024: OpKind = MCK_COP0; break;
    case Mips::COP025: OpKind = MCK_COP0; break;
    case Mips::COP026: OpKind = MCK_COP0; break;
    case Mips::COP027: OpKind = MCK_COP0; break;
    case Mips::COP028: OpKind = MCK_COP0; break;
    case Mips::COP029: OpKind = MCK_COP0; break;
    case Mips::COP030: OpKind = MCK_COP0; break;
    case Mips::COP031: OpKind = MCK_COP0; break;
    case Mips::COP20: OpKind = MCK_COP2; break;
    case Mips::COP21: OpKind = MCK_COP2; break;
    case Mips::COP22: OpKind = MCK_COP2; break;
    case Mips::COP23: OpKind = MCK_COP2; break;
    case Mips::COP24: OpKind = MCK_COP2; break;
    case Mips::COP25: OpKind = MCK_COP2; break;
    case Mips::COP26: OpKind = MCK_COP2; break;
    case Mips::COP27: OpKind = MCK_COP2; break;
    case Mips::COP28: OpKind = MCK_COP2; break;
    case Mips::COP29: OpKind = MCK_COP2; break;
    case Mips::COP210: OpKind = MCK_COP2; break;
    case Mips::COP211: OpKind = MCK_COP2; break;
    case Mips::COP212: OpKind = MCK_COP2; break;
    case Mips::COP213: OpKind = MCK_COP2; break;
    case Mips::COP214: OpKind = MCK_COP2; break;
    case Mips::COP215: OpKind = MCK_COP2; break;
    case Mips::COP216: OpKind = MCK_COP2; break;
    case Mips::COP217: OpKind = MCK_COP2; break;
    case Mips::COP218: OpKind = MCK_COP2; break;
    case Mips::COP219: OpKind = MCK_COP2; break;
    case Mips::COP220: OpKind = MCK_COP2; break;
    case Mips::COP221: OpKind = MCK_COP2; break;
    case Mips::COP222: OpKind = MCK_COP2; break;
    case Mips::COP223: OpKind = MCK_COP2; break;
    case Mips::COP224: OpKind = MCK_COP2; break;
    case Mips::COP225: OpKind = MCK_COP2; break;
    case Mips::COP226: OpKind = MCK_COP2; break;
    case Mips::COP227: OpKind = MCK_COP2; break;
    case Mips::COP228: OpKind = MCK_COP2; break;
    case Mips::COP229: OpKind = MCK_COP2; break;
    case Mips::COP230: OpKind = MCK_COP2; break;
    case Mips::COP231: OpKind = MCK_COP2; break;
    case Mips::COP30: OpKind = MCK_COP3; break;
    case Mips::COP31: OpKind = MCK_COP3; break;
    case Mips::COP32: OpKind = MCK_COP3; break;
    case Mips::COP33: OpKind = MCK_COP3; break;
    case Mips::COP34: OpKind = MCK_COP3; break;
    case Mips::COP35: OpKind = MCK_COP3; break;
    case Mips::COP36: OpKind = MCK_COP3; break;
    case Mips::COP37: OpKind = MCK_COP3; break;
    case Mips::COP38: OpKind = MCK_COP3; break;
    case Mips::COP39: OpKind = MCK_COP3; break;
    case Mips::COP310: OpKind = MCK_COP3; break;
    case Mips::COP311: OpKind = MCK_COP3; break;
    case Mips::COP312: OpKind = MCK_COP3; break;
    case Mips::COP313: OpKind = MCK_COP3; break;
    case Mips::COP314: OpKind = MCK_COP3; break;
    case Mips::COP315: OpKind = MCK_COP3; break;
    case Mips::COP316: OpKind = MCK_COP3; break;
    case Mips::COP317: OpKind = MCK_COP3; break;
    case Mips::COP318: OpKind = MCK_COP3; break;
    case Mips::COP319: OpKind = MCK_COP3; break;
    case Mips::COP320: OpKind = MCK_COP3; break;
    case Mips::COP321: OpKind = MCK_COP3; break;
    case Mips::COP322: OpKind = MCK_COP3; break;
    case Mips::COP323: OpKind = MCK_COP3; break;
    case Mips::COP324: OpKind = MCK_COP3; break;
    case Mips::COP325: OpKind = MCK_COP3; break;
    case Mips::COP326: OpKind = MCK_COP3; break;
    case Mips::COP327: OpKind = MCK_COP3; break;
    case Mips::COP328: OpKind = MCK_COP3; break;
    case Mips::COP329: OpKind = MCK_COP3; break;
    case Mips::COP330: OpKind = MCK_COP3; break;
    case Mips::COP331: OpKind = MCK_COP3; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR0: OpKind = MCK_HWRegs; break;
    case Mips::HWR1: OpKind = MCK_HWRegs; break;
    case Mips::HWR2: OpKind = MCK_HWRegs; break;
    case Mips::HWR3: OpKind = MCK_HWRegs; break;
    case Mips::HWR4: OpKind = MCK_HWRegs; break;
    case Mips::HWR5: OpKind = MCK_HWRegs; break;
    case Mips::HWR6: OpKind = MCK_HWRegs; break;
    case Mips::HWR7: OpKind = MCK_HWRegs; break;
    case Mips::HWR8: OpKind = MCK_HWRegs; break;
    case Mips::HWR9: OpKind = MCK_HWRegs; break;
    case Mips::HWR10: OpKind = MCK_HWRegs; break;
    case Mips::HWR11: OpKind = MCK_HWRegs; break;
    case Mips::HWR12: OpKind = MCK_HWRegs; break;
    case Mips::HWR13: OpKind = MCK_HWRegs; break;
    case Mips::HWR14: OpKind = MCK_HWRegs; break;
    case Mips::HWR15: OpKind = MCK_HWRegs; break;
    case Mips::HWR16: OpKind = MCK_HWRegs; break;
    case Mips::HWR17: OpKind = MCK_HWRegs; break;
    case Mips::HWR18: OpKind = MCK_HWRegs; break;
    case Mips::HWR19: OpKind = MCK_HWRegs; break;
    case Mips::HWR20: OpKind = MCK_HWRegs; break;
    case Mips::HWR21: OpKind = MCK_HWRegs; break;
    case Mips::HWR22: OpKind = MCK_HWRegs; break;
    case Mips::HWR23: OpKind = MCK_HWRegs; break;
    case Mips::HWR24: OpKind = MCK_HWRegs; break;
    case Mips::HWR25: OpKind = MCK_HWRegs; break;
    case Mips::HWR26: OpKind = MCK_HWRegs; break;
    case Mips::HWR27: OpKind = MCK_HWRegs; break;
    case Mips::HWR28: OpKind = MCK_HWRegs; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR30: OpKind = MCK_HWRegs; break;
    case Mips::HWR31: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    case Mips::MSAIR: OpKind = MCK_MSACtrl; break;
    case Mips::MSACSR: OpKind = MCK_MSACtrl; break;
    case Mips::MSAAccess: OpKind = MCK_MSACtrl; break;
    case Mips::MSASave: OpKind = MCK_MSACtrl; break;
    case Mips::MSAModify: OpKind = MCK_MSACtrl; break;
    case Mips::MSARequest: OpKind = MCK_MSACtrl; break;
    case Mips::MSAMap: OpKind = MCK_MSACtrl; break;
    case Mips::MSAUnmap: OpKind = MCK_MSACtrl; break;
    case Mips::MPL0: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL1: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL2: OpKind = MCK_OCTEON_MPL; break;
    case Mips::P0: OpKind = MCK_OCTEON_P; break;
    case Mips::P1: OpKind = MCK_OCTEON_P; break;
    case Mips::P2: OpKind = MCK_OCTEON_P; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t MipsAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Mips::FeatureMips2]))
    Features |= Feature_HasMips2;
  if ((FB[Mips::FeatureMips3_32]))
    Features |= Feature_HasMips3_32;
  if ((FB[Mips::FeatureMips3_32r2]))
    Features |= Feature_HasMips3_32r2;
  if ((FB[Mips::FeatureMips3]))
    Features |= Feature_HasMips3;
  if ((FB[Mips::FeatureMips4_32]))
    Features |= Feature_HasMips4_32;
  if ((FB[Mips::FeatureMips4_32]))
    Features |= Feature_NotMips4_32;
  if ((FB[Mips::FeatureMips4_32r2]))
    Features |= Feature_HasMips4_32r2;
  if ((FB[Mips::FeatureMips5_32r2]))
    Features |= Feature_HasMips5_32r2;
  if ((FB[Mips::FeatureMips32]))
    Features |= Feature_HasMips32;
  if ((FB[Mips::FeatureMips32r2]))
    Features |= Feature_HasMips32r2;
  if ((FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMips32r6;
  if ((!FB[Mips::FeatureMips32r6]))
    Features |= Feature_NotMips32r6;
  if ((FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP64bit;
  if ((!FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP32bit;
  if ((FB[Mips::FeatureMips64]))
    Features |= Feature_HasMips64;
  if ((FB[Mips::FeatureMips64r2]))
    Features |= Feature_HasMips64r2;
  if ((FB[Mips::FeatureMips64r6]))
    Features |= Feature_HasMips64r6;
  if ((!FB[Mips::FeatureMips64r6]))
    Features |= Feature_NotMips64r6;
  if ((FB[Mips::FeatureMicroMips]) && (FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMicroMips32r6;
  if ((FB[Mips::FeatureMips16]))
    Features |= Feature_InMips16Mode;
  if ((FB[Mips::FeatureCnMips]))
    Features |= Feature_HasCnMips;
  if ((!FB[Mips::FeatureMips16]))
    Features |= Feature_HasStdEnc;
  if ((FB[Mips::FeatureMicroMips]))
    Features |= Feature_InMicroMips;
  if ((!FB[Mips::FeatureMicroMips]))
    Features |= Feature_NotInMicroMips;
  if ((FB[Mips::FeatureFP64Bit]))
    Features |= Feature_IsFP64bit;
  if ((!FB[Mips::FeatureFP64Bit]))
    Features |= Feature_NotFP64bit;
  if ((FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsSingleFloat;
  if ((!FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsNotSingleFloat;
  if ((!FB[Mips::FeatureSoftFloat]))
    Features |= Feature_IsNotSoftFloat;
  if ((FB[Mips::FeatureDSP]))
    Features |= Feature_HasDSP;
  if ((FB[Mips::FeatureDSPR2]))
    Features |= Feature_HasDSPR2;
  if ((FB[Mips::FeatureMSA]))
    Features |= Feature_HasMSA;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\007add_a.b\007add_a.d\007add_a.h\007add_a.w\004addi\005addiu\007a"
    "ddiupc\taddiur1sp\007addiur2\007addius5\007addiusp\007addq.ph\taddq_s.p"
    "h\010addq_s.w\010addqh.ph\007addqh.w\naddqh_r.ph\taddqh_r.w\010adds_a.b"
    "\010adds_a.d\010adds_a.h\010adds_a.w\010adds_s.b\010adds_s.d\010adds_s."
    "h\010adds_s.w\010adds_u.b\010adds_u.d\010adds_u.h\010adds_u.w\005addsc\004"
    "addu\007addu.ph\007addu.qb\006addu16\taddu_s.ph\taddu_s.qb\010adduh.qb\n"
    "adduh_r.qb\006addv.b\006addv.d\006addv.h\006addv.w\007addvi.b\007addvi."
    "d\007addvi.h\007addvi.w\005addwc\005align\006aluipc\003and\005and.v\005"
    "and16\004andi\006andi.b\006andi16\006append\010asub_s.b\010asub_s.d\010"
    "asub_s.h\010asub_s.w\010asub_u.b\010asub_u.d\010asub_u.h\010asub_u.w\003"
    "aui\005auipc\007ave_s.b\007ave_s.d\007ave_s.h\007ave_s.w\007ave_u.b\007"
    "ave_u.d\007ave_u.h\007ave_u.w\010aver_s.b\010aver_s.d\010aver_s.h\010av"
    "er_s.w\010aver_u.b\010aver_u.d\010aver_u.h\010aver_u.w\001b\003b16\005b"
    "addu\003bal\004balc\006balign\005bbit0\007bbit032\005bbit1\007bbit132\002"
    "bc\006bc1eqz\004bc1f\005bc1fl\006bc1nez\004bc1t\005bc1tl\006bc2eqz\006b"
    "c2nez\006bclr.b\006bclr.d\006bclr.h\006bclr.w\007bclri.b\007bclri.d\007"
    "bclri.h\007bclri.w\003beq\004beqc\004beql\004beqz\006beqz16\007beqzalc\005"
    "beqzc\005beqzl\003bge\004bgec\004bgeu\005bgeuc\004bgez\006bgezal\007bge"
    "zalc\007bgezall\007bgezals\005bgezc\005bgezl\003bgt\004bgtu\004bgtz\007"
    "bgtzalc\005bgtzc\005bgtzl\007binsl.b\007binsl.d\007binsl.h\007binsl.w\010"
    "binsli.b\010binsli.d\010binsli.h\010binsli.w\007binsr.b\007binsr.d\007b"
    "insr.h\007binsr.w\010binsri.b\010binsri.d\010binsri.h\010binsri.w\006bi"
    "trev\007bitswap\003ble\004bleu\004blez\007blezalc\005blezc\005blezl\003"
    "blt\004bltc\004bltu\005bltuc\004bltz\006bltzal\007bltzalc\007bltzall\007"
    "bltzals\005bltzc\005bltzl\006bmnz.v\007bmnzi.b\005bmz.v\006bmzi.b\003bn"
    "e\004bnec\006bneg.b\006bneg.d\006bneg.h\006bneg.w\007bnegi.b\007bnegi.d"
    "\007bnegi.h\007bnegi.w\004bnel\004bnez\006bnez16\007bnezalc\005bnezc\005"
    "bnezl\004bnvc\005bnz.b\005bnz.d\005bnz.h\005bnz.v\005bnz.w\004bovc\010b"
    "posge32\005break\007break16\006bsel.v\007bseli.b\006bset.b\006bset.d\006"
    "bset.h\006bset.w\007bseti.b\007bseti.d\007bseti.h\007bseti.w\005bteqz\005"
    "btnez\004bz.b\004bz.d\004bz.h\004bz.v\004bz.w\006c.eq.d\006c.eq.s\005c."
    "f.d\005c.f.s\006c.le.d\006c.le.s\006c.lt.d\006c.lt.s\007c.nge.d\007c.ng"
    "e.s\007c.ngl.d\007c.ngl.s\010c.ngle.d\010c.ngle.s\007c.ngt.d\007c.ngt.s"
    "\007c.ole.d\007c.ole.s\007c.olt.d\007c.olt.s\007c.seq.d\007c.seq.s\006c"
    ".sf.d\006c.sf.s\007c.ueq.d\007c.ueq.s\007c.ule.d\007c.ule.s\007c.ult.d\007"
    "c.ult.s\006c.un.d\006c.un.s\005cache\010ceil.l.d\010ceil.l.s\010ceil.w."
    "d\010ceil.w.s\005ceq.b\005ceq.d\005ceq.h\005ceq.w\006ceqi.b\006ceqi.d\006"
    "ceqi.h\006ceqi.w\004cfc1\006cfcmsa\004cins\006cins32\007class.d\007clas"
    "s.s\007cle_s.b\007cle_s.d\007cle_s.h\007cle_s.w\007cle_u.b\007cle_u.d\007"
    "cle_u.h\007cle_u.w\010clei_s.b\010clei_s.d\010clei_s.h\010clei_s.w\010c"
    "lei_u.b\010clei_u.d\010clei_u.h\010clei_u.w\003clo\007clt_s.b\007clt_s."
    "d\007clt_s.h\007clt_s.w\007clt_u.b\007clt_u.d\007clt_u.h\007clt_u.w\010"
    "clti_s.b\010clti_s.d\010clti_s.h\010clti_s.w\010clti_u.b\010clti_u.d\010"
    "clti_u.h\010clti_u.w\003clz\003cmp\010cmp.af.d\010cmp.af.s\010cmp.eq.d\t"
    "cmp.eq.ph\010cmp.eq.s\010cmp.le.d\tcmp.le.ph\010cmp.le.s\010cmp.lt.d\tc"
    "mp.lt.ph\010cmp.lt.s\tcmp.saf.d\tcmp.saf.s\tcmp.seq.d\tcmp.seq.s\tcmp.s"
    "le.d\tcmp.sle.s\tcmp.slt.d\tcmp.slt.s\ncmp.sueq.d\ncmp.sueq.s\ncmp.sule"
    ".d\ncmp.sule.s\ncmp.sult.d\ncmp.sult.s\tcmp.sun.d\tcmp.sun.s\tcmp.ueq.d"
    "\tcmp.ueq.s\tcmp.ule.d\tcmp.ule.s\tcmp.ult.d\tcmp.ult.s\010cmp.un.d\010"
    "cmp.un.s\014cmpgdu.eq.qb\014cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb"
    "\013cmpgu.le.qb\013cmpgu.lt.qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt"
    ".qb\010copy_s.b\010copy_s.d\010copy_s.h\010copy_s.w\010copy_u.b\010copy"
    "_u.d\010copy_u.h\010copy_u.w\004ctc1\006ctcmsa\007cvt.d.l\007cvt.d.s\007"
    "cvt.d.w\007cvt.l.d\007cvt.l.s\007cvt.s.d\007cvt.s.l\007cvt.s.w\007cvt.w"
    ".d\007cvt.w.s\004dadd\005daddi\006daddiu\005daddu\004dahi\006dalign\004"
    "dati\004daui\010dbitswap\004dclo\004dclz\004ddiv\005ddivu\005deret\004d"
    "ext\005dextm\005dextu\002di\004dins\005dinsm\005dinsu\003div\005div.d\005"
    "div.s\007div_s.b\007div_s.d\007div_s.h\007div_s.w\007div_u.b\007div_u.d"
    "\007div_u.h\007div_u.w\004divu\003dli\004dlsa\005dmfc0\005dmfc1\005dmfc"
    "2\004dmod\005dmodu\005dmtc0\005dmtc1\005dmtc2\004dmuh\005dmuhu\004dmul\005"
    "dmult\006dmultu\005dmulu\004dneg\005dnegu\010dotp_s.d\010dotp_s.h\010do"
    "tp_s.w\010dotp_u.d\010dotp_u.h\010dotp_u.w\010dpa.w.ph\tdpadd_s.d\tdpad"
    "d_s.h\tdpadd_s.w\tdpadd_u.d\tdpadd_u.h\tdpadd_u.w\013dpaq_s.w.ph\013dpa"
    "q_sa.l.w\014dpaqx_s.w.ph\015dpaqx_sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\tdpax"
    ".w.ph\004dpop\010dps.w.ph\013dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph"
    "\015dpsqx_sa.w.ph\ndpsu.h.qbl\ndpsu.h.qbr\tdpsub_s.d\tdpsub_s.h\tdpsub_"
    "s.w\tdpsub_u.d\tdpsub_u.h\tdpsub_u.w\tdpsx.w.ph\005drotr\007drotr32\006"
    "drotrv\004dsbh\004dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005"
    "dsrav\004dsrl\006dsrl32\005dsrlv\004dsub\005dsubi\005dsubu\003ehb\002ei"
    "\004eret\006eretnc\003ext\004extp\006extpdp\007extpdpv\005extpv\006extr"
    ".w\010extr_r.w\textr_rs.w\010extr_s.h\007extrv.w\textrv_r.w\nextrv_rs.w"
    "\textrv_s.h\004exts\006exts32\006fadd.d\006fadd.w\006fcaf.d\006fcaf.w\006"
    "fceq.d\006fceq.w\010fclass.d\010fclass.w\006fcle.d\006fcle.w\006fclt.d\006"
    "fclt.w\006fcne.d\006fcne.w\006fcor.d\006fcor.w\007fcueq.d\007fcueq.w\007"
    "fcule.d\007fcule.w\007fcult.d\007fcult.w\006fcun.d\006fcun.w\007fcune.d"
    "\007fcune.w\006fdiv.d\006fdiv.w\007fexdo.h\007fexdo.w\007fexp2.d\007fex"
    "p2.w\010fexupl.d\010fexupl.w\010fexupr.d\010fexupr.w\tffint_s.d\tffint_"
    "s.w\tffint_u.d\tffint_u.w\006ffql.d\006ffql.w\006ffqr.d\006ffqr.w\006fi"
    "ll.b\006fill.d\006fill.h\006fill.w\007flog2.d\007flog2.w\tfloor.l.d\tfl"
    "oor.l.s\tfloor.w.d\tfloor.w.s\007fmadd.d\007fmadd.w\006fmax.d\006fmax.w"
    "\010fmax_a.d\010fmax_a.w\006fmin.d\006fmin.w\010fmin_a.d\010fmin_a.w\007"
    "fmsub.d\007fmsub.w\006fmul.d\006fmul.w\006frcp.d\006frcp.w\007frint.d\007"
    "frint.w\010frsqrt.d\010frsqrt.w\006fsaf.d\006fsaf.w\006fseq.d\006fseq.w"
    "\006fsle.d\006fsle.w\006fslt.d\006fslt.w\006fsne.d\006fsne.w\006fsor.d\006"
    "fsor.w\007fsqrt.d\007fsqrt.w\006fsub.d\006fsub.w\007fsueq.d\007fsueq.w\007"
    "fsule.d\007fsule.w\007fsult.d\007fsult.w\006fsun.d\006fsun.w\007fsune.d"
    "\007fsune.w\tftint_s.d\tftint_s.w\tftint_u.d\tftint_u.w\005ftq.h\005ftq"
    ".w\nftrunc_s.d\nftrunc_s.w\nftrunc_u.d\nftrunc_u.w\010hadd_s.d\010hadd_"
    "s.h\010hadd_s.w\010hadd_u.d\010hadd_u.h\010hadd_u.w\010hsub_s.d\010hsub"
    "_s.h\010hsub_s.w\010hsub_u.d\010hsub_u.h\010hsub_u.w\007ilvev.b\007ilve"
    "v.d\007ilvev.h\007ilvev.w\006ilvl.b\006ilvl.d\006ilvl.h\006ilvl.w\007il"
    "vod.b\007ilvod.d\007ilvod.h\007ilvod.w\006ilvr.b\006ilvr.d\006ilvr.h\006"
    "ilvr.w\003ins\010insert.b\010insert.d\010insert.h\010insert.w\004insv\007"
    "insve.b\007insve.d\007insve.h\007insve.w\001j\003jal\004jalr\007jalr.hb"
    "\005jalrc\005jalrs\007jalrs16\004jals\004jalx\005jialc\003jic\002jr\005"
    "jr.hb\004jr16\tjraddiusp\003jrc\002la\002lb\003lbu\005lbu16\004lbux\002"
    "ld\004ld.b\004ld.d\004ld.h\004ld.w\004ldc1\004ldc2\004ldc3\005ldi.b\005"
    "ldi.d\005ldi.h\005ldi.w\003ldl\004ldpc\003ldr\005ldxc1\002lh\003lhu\005"
    "lhu16\003lhx\002li\004li16\002ll\003lld\003lsa\003lui\005luxc1\002lw\004"
    "lw16\004lwc1\004lwc2\004lwc3\003lwl\003lwm\005lwm16\005lwm32\003lwp\004"
    "lwpc\003lwr\003lwu\005lwupc\003lwx\005lwxc1\004lwxs\004madd\006madd.d\006"
    "madd.s\010madd_q.h\010madd_q.w\007maddf.d\007maddf.s\tmaddr_q.h\tmaddr_"
    "q.w\005maddu\007maddv.b\007maddv.d\007maddv.h\007maddv.w\013maq_s.w.phl"
    "\013maq_s.w.phr\014maq_sa.w.phl\014maq_sa.w.phr\005max.d\005max.s\007ma"
    "x_a.b\007max_a.d\007max_a.h\007max_a.w\007max_s.b\007max_s.d\007max_s.h"
    "\007max_s.w\007max_u.b\007max_u.d\007max_u.h\007max_u.w\006maxa.d\006ma"
    "xa.s\010maxi_s.b\010maxi_s.d\010maxi_s.h\010maxi_s.w\010maxi_u.b\010max"
    "i_u.d\010maxi_u.h\010maxi_u.w\004mfc0\004mfc1\004mfc2\005mfhc1\004mfhi\004"
    "mflo\005min.d\005min.s\007min_a.b\007min_a.d\007min_a.h\007min_a.w\007m"
    "in_s.b\007min_s.d\007min_s.h\007min_s.w\007min_u.b\007min_u.d\007min_u."
    "h\007min_u.w\006mina.d\006mina.s\010mini_s.b\010mini_s.d\010mini_s.h\010"
    "mini_s.w\010mini_u.b\010mini_u.d\010mini_u.h\010mini_u.w\003mod\007mod_"
    "s.b\007mod_s.d\007mod_s.h\007mod_s.w\007mod_u.b\007mod_u.d\007mod_u.h\007"
    "mod_u.w\006modsub\004modu\005mov.d\005mov.s\004move\006move.v\005movep\004"
    "movf\006movf.d\006movf.s\004movn\006movn.d\006movn.s\004movt\006movt.d\006"
    "movt.s\004movz\006movz.d\006movz.s\004msub\006msub.d\006msub.s\010msub_"
    "q.h\010msub_q.w\007msubf.d\007msubf.s\tmsubr_q.h\tmsubr_q.w\005msubu\007"
    "msubv.b\007msubv.d\007msubv.h\007msubv.w\004mtc0\004mtc1\004mtc2\005mth"
    "c1\004mthi\006mthlip\004mtlo\004mtm0\004mtm1\004mtm2\004mtp0\004mtp1\004"
    "mtp2\003muh\004muhu\003mul\005mul.d\006mul.ph\005mul.s\007mul_q.h\007mu"
    "l_q.w\010mul_s.ph\015muleq_s.w.phl\015muleq_s.w.phr\016muleu_s.ph.qbl\016"
    "muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs.w\tmulq_s.ph\010mulq_s.w\010mulr_q."
    "h\010mulr_q.w\nmulsa.w.ph\015mulsaq_s.w.ph\004mult\005multu\004mulu\006"
    "mulv.b\006mulv.d\006mulv.h\006mulv.w\003neg\005neg.d\005neg.s\004negu\006"
    "nloc.b\006nloc.d\006nloc.h\006nloc.w\006nlzc.b\006nlzc.d\006nlzc.h\006n"
    "lzc.w\007nmadd.d\007nmadd.s\007nmsub.d\007nmsub.s\003nop\003nor\005nor."
    "v\006nori.b\003not\005not16\002or\004or.v\004or16\003ori\005ori.b\tpack"
    "rl.ph\005pause\007pckev.b\007pckev.d\007pckev.h\007pckev.w\007pckod.b\007"
    "pckod.d\007pckod.h\007pckod.w\006pcnt.b\006pcnt.d\006pcnt.h\006pcnt.w\007"
    "pick.ph\007pick.qb\003pop\014preceq.w.phl\014preceq.w.phr\016precequ.ph"
    ".qbl\017precequ.ph.qbla\016precequ.ph.qbr\017precequ.ph.qbra\015preceu."
    "ph.qbl\016preceu.ph.qbla\015preceu.ph.qbr\016preceu.ph.qbra\013precr.qb"
    ".ph\016precr_sra.ph.w\020precr_sra_r.ph.w\013precrq.ph.w\014precrq.qb.p"
    "h\016precrq_rs.ph.w\017precrqu_s.qb.ph\004pref\007prepend\nraddu.w.qb\005"
    "rddsp\005rdhwr\007repl.ph\007repl.qb\010replv.ph\010replv.qb\006rint.d\006"
    "rint.s\004rotr\005rotrv\tround.l.d\tround.l.s\tround.w.d\tround.w.s\007"
    "sat_s.b\007sat_s.d\007sat_s.h\007sat_s.w\007sat_u.b\007sat_u.d\007sat_u"
    ".h\007sat_u.w\002sb\004sb16\002sc\003scd\002sd\005sdbbp\007sdbbp16\004s"
    "dc1\004sdc2\004sdc3\003sdl\003sdr\005sdxc1\003seb\003seh\005sel.d\005se"
    "l.s\006seleqz\010seleqz.d\010seleqz.s\006selnez\010selnez.d\010selnez.s"
    "\003seq\004seqi\002sh\004sh16\005shf.b\005shf.h\005shf.w\005shilo\006sh"
    "ilov\007shll.ph\007shll.qb\tshll_s.ph\010shll_s.w\010shllv.ph\010shllv."
    "qb\nshllv_s.ph\tshllv_s.w\007shra.ph\007shra.qb\tshra_r.ph\tshra_r.qb\010"
    "shra_r.w\010shrav.ph\010shrav.qb\nshrav_r.ph\nshrav_r.qb\tshrav_r.w\007"
    "shrl.ph\007shrl.qb\010shrlv.ph\010shrlv.qb\005sld.b\005sld.d\005sld.h\005"
    "sld.w\006sldi.b\006sldi.d\006sldi.h\006sldi.w\003sll\005sll.b\005sll.d\005"
    "sll.h\005sll.w\005sll16\006slli.b\006slli.d\006slli.h\006slli.w\004sllv"
    "\003slt\004slti\005sltiu\004sltu\003sne\004snei\007splat.b\007splat.d\007"
    "splat.h\007splat.w\010splati.b\010splati.d\010splati.h\010splati.w\006s"
    "qrt.d\006sqrt.s\003sra\005sra.b\005sra.d\005sra.h\005sra.w\006srai.b\006"
    "srai.d\006srai.h\006srai.w\006srar.b\006srar.d\006srar.h\006srar.w\007s"
    "rari.b\007srari.d\007srari.h\007srari.w\004srav\003srl\005srl.b\005srl."
    "d\005srl.h\005srl.w\005srl16\006srli.b\006srli.d\006srli.h\006srli.w\006"
    "srlr.b\006srlr.d\006srlr.h\006srlr.w\007srlri.b\007srlri.d\007srlri.h\007"
    "srlri.w\004srlv\005ssnop\004st.b\004st.d\004st.h\004st.w\003sub\005sub."
    "d\005sub.s\007subq.ph\tsubq_s.ph\010subq_s.w\010subqh.ph\007subqh.w\nsu"
    "bqh_r.ph\tsubqh_r.w\010subs_s.b\010subs_s.d\010subs_s.h\010subs_s.w\010"
    "subs_u.b\010subs_u.d\010subs_u.h\010subs_u.w\nsubsus_u.b\nsubsus_u.d\ns"
    "ubsus_u.h\nsubsus_u.w\nsubsuu_s.b\nsubsuu_s.d\nsubsuu_s.h\nsubsuu_s.w\004"
    "subu\007subu.ph\007subu.qb\006subu16\tsubu_s.ph\tsubu_s.qb\010subuh.qb\n"
    "subuh_r.qb\006subv.b\006subv.d\006subv.h\006subv.w\007subvi.b\007subvi."
    "d\007subvi.h\007subvi.w\005suxc1\002sw\004sw16\004swc1\004swc2\004swc3\003"
    "swl\003swm\005swm16\005swm32\003swp\003swr\005swxc1\004sync\005synci\ns"
    "ynciobdma\005syncs\005syncw\006syncws\007syscall\003teq\004teqi\003tge\004"
    "tgei\005tgeiu\004tgeu\004tlbp\004tlbr\005tlbwi\005tlbwr\003tlt\004tlti\005"
    "tltiu\004tltu\003tne\004tnei\ttrunc.l.d\ttrunc.l.s\ttrunc.w.d\ttrunc.w."
    "s\004ulhu\003ulw\006v3mulu\004vmm0\005vmulu\006vshf.b\006vshf.d\006vshf"
    ".h\006vshf.w\004wait\005wrdsp\004wsbh\003xor\005xor.v\005xor16\004xori\006"
    "xori.b";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[8];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 41 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 57 /* add_a.b */, Mips::ADD_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 65 /* add_a.d */, Mips::ADD_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 73 /* add_a.h */, Mips::ADD_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 81 /* add_a.w */, Mips::ADD_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 94 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 100 /* addiupc */, Mips::ADDIUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 100 /* addiupc */, Mips::ADDIUPC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 100 /* addiupc */, Mips::ADDIUPC_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 108 /* addiur1sp */, Mips::ADDIUR1SP_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 118 /* addiur2 */, Mips::ADDIUR2_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 126 /* addius5 */, Mips::ADDIUS5_MM, Convert__GPR32AsmReg1_0__Tie0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 134 /* addiusp */, Mips::ADDIUSP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 142 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 150 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 160 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 169 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 178 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 186 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 197 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 207 /* adds_a.b */, Mips::ADDS_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 216 /* adds_a.d */, Mips::ADDS_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 225 /* adds_a.h */, Mips::ADDS_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 234 /* adds_a.w */, Mips::ADDS_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 243 /* adds_s.b */, Mips::ADDS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 252 /* adds_s.d */, Mips::ADDS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 261 /* adds_s.h */, Mips::ADDS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 270 /* adds_s.w */, Mips::ADDS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 279 /* adds_u.b */, Mips::ADDS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 288 /* adds_u.d */, Mips::ADDS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 297 /* adds_u.h */, Mips::ADDS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 306 /* adds_u.w */, Mips::ADDS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 315 /* addsc */, Mips::ADDSC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 321 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 321 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 326 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 334 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 342 /* addu16 */, Mips::ADDU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 349 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 359 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 369 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 378 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 389 /* addv.b */, Mips::ADDV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 396 /* addv.d */, Mips::ADDV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 403 /* addv.h */, Mips::ADDV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 410 /* addv.w */, Mips::ADDV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 417 /* addvi.b */, Mips::ADDVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 425 /* addvi.d */, Mips::ADDVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 433 /* addvi.h */, Mips::ADDVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 441 /* addvi.w */, Mips::ADDVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 449 /* addwc */, Mips::ADDWC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 455 /* align */, Mips::ALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 455 /* align */, Mips::ALIGN_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 461 /* aluipc */, Mips::ALUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 461 /* aluipc */, Mips::ALUIPC_MMR6, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 472 /* and.v */, Mips::AND_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 478 /* and16 */, Mips::AND16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 484 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 489 /* andi.b */, Mips::ANDI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 496 /* andi16 */, Mips::ANDI16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 503 /* append */, Mips::APPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 510 /* asub_s.b */, Mips::ASUB_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 519 /* asub_s.d */, Mips::ASUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 528 /* asub_s.h */, Mips::ASUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 537 /* asub_s.w */, Mips::ASUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 546 /* asub_u.b */, Mips::ASUB_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 555 /* asub_u.d */, Mips::ASUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 564 /* asub_u.h */, Mips::ASUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 573 /* asub_u.w */, Mips::ASUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 582 /* aui */, Mips::AUI, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 582 /* aui */, Mips::AUI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 586 /* auipc */, Mips::AUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 586 /* auipc */, Mips::AUIPC_MMR6, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 592 /* ave_s.b */, Mips::AVE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 600 /* ave_s.d */, Mips::AVE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 608 /* ave_s.h */, Mips::AVE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 616 /* ave_s.w */, Mips::AVE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 624 /* ave_u.b */, Mips::AVE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 632 /* ave_u.d */, Mips::AVE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 640 /* ave_u.h */, Mips::AVE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 648 /* ave_u.w */, Mips::AVE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 656 /* aver_s.b */, Mips::AVER_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 665 /* aver_s.d */, Mips::AVER_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 674 /* aver_s.h */, Mips::AVER_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 683 /* aver_s.w */, Mips::AVER_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 692 /* aver_u.b */, Mips::AVER_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 701 /* aver_u.d */, Mips::AVER_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 710 /* aver_u.h */, Mips::AVER_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 719 /* aver_u.w */, Mips::AVER_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 728 /* b */, Mips::B_MM_Pseudo, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BimmX16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BEQ, Convert__regZERO__regZERO__JumpTarget1_0, Feature_NotInMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::Bimm16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 730 /* b16 */, Mips::B16_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 740 /* bal */, Mips::BAL, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 740 /* bal */, Mips::BGEZAL, Convert__regZERO__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 744 /* balc */, Mips::BALC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 744 /* balc */, Mips::BALC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 749 /* balign */, Mips::BALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 756 /* bbit0 */, Mips::BBIT0, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 762 /* bbit032 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 770 /* bbit1 */, Mips::BBIT1, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 776 /* bbit132 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 784 /* bc */, Mips::BC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 784 /* bc */, Mips::BC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 787 /* bc1eqz */, Mips::BC1EQZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 794 /* bc1f */, Mips::BC1F, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 794 /* bc1f */, Mips::BC1F, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 799 /* bc1fl */, Mips::BC1FL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 799 /* bc1fl */, Mips::BC1FL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 805 /* bc1nez */, Mips::BC1NEZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 812 /* bc1t */, Mips::BC1T, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 812 /* bc1t */, Mips::BC1T, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 817 /* bc1tl */, Mips::BC1TL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 817 /* bc1tl */, Mips::BC1TL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 823 /* bc2eqz */, Mips::BC2EQZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 830 /* bc2nez */, Mips::BC2NEZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 837 /* bclr.b */, Mips::BCLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 844 /* bclr.d */, Mips::BCLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 851 /* bclr.h */, Mips::BCLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 858 /* bclr.w */, Mips::BCLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 865 /* bclri.b */, Mips::BCLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 873 /* bclri.d */, Mips::BCLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 881 /* bclri.h */, Mips::BCLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 889 /* bclri.w */, Mips::BCLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 897 /* beq */, Mips::BEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 897 /* beq */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 897 /* beq */, Mips::BeqImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 901 /* beqc */, Mips::BEQC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 906 /* beql */, Mips::BEQL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BEQ, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 916 /* beqz16 */, Mips::BEQZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 923 /* beqzalc */, Mips::BEQZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 923 /* beqzalc */, Mips::BEQZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 931 /* beqzc */, Mips::BEQZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 931 /* beqzc */, Mips::BEQZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 937 /* beqzl */, Mips::BEQL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 943 /* bge */, Mips::BGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 947 /* bgec */, Mips::BGEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 952 /* bgeu */, Mips::BGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 957 /* bgeuc */, Mips::BGEUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 963 /* bgez */, Mips::BGEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 963 /* bgez */, Mips::BGEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 968 /* bgezal */, Mips::BGEZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 968 /* bgezal */, Mips::BGEZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 975 /* bgezalc */, Mips::BGEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 975 /* bgezalc */, Mips::BGEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 983 /* bgezall */, Mips::BGEZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 991 /* bgezals */, Mips::BGEZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 999 /* bgezc */, Mips::BGEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1005 /* bgezl */, Mips::BGEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1011 /* bgt */, Mips::BGT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1015 /* bgtu */, Mips::BGTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1020 /* bgtz */, Mips::BGTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1020 /* bgtz */, Mips::BGTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1025 /* bgtzalc */, Mips::BGTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1025 /* bgtzalc */, Mips::BGTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1033 /* bgtzc */, Mips::BGTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1039 /* bgtzl */, Mips::BGTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1045 /* binsl.b */, Mips::BINSL_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1053 /* binsl.d */, Mips::BINSL_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1061 /* binsl.h */, Mips::BINSL_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1069 /* binsl.w */, Mips::BINSL_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1077 /* binsli.b */, Mips::BINSLI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1086 /* binsli.d */, Mips::BINSLI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1095 /* binsli.h */, Mips::BINSLI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1104 /* binsli.w */, Mips::BINSLI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1113 /* binsr.b */, Mips::BINSR_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1121 /* binsr.d */, Mips::BINSR_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1129 /* binsr.h */, Mips::BINSR_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1137 /* binsr.w */, Mips::BINSR_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1145 /* binsri.b */, Mips::BINSRI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1154 /* binsri.d */, Mips::BINSRI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1163 /* binsri.h */, Mips::BINSRI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1172 /* binsri.w */, Mips::BINSRI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1181 /* bitrev */, Mips::BITREV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1188 /* bitswap */, Mips::BITSWAP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1188 /* bitswap */, Mips::BITSWAP_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1196 /* ble */, Mips::BLE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1200 /* bleu */, Mips::BLEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1205 /* blez */, Mips::BLEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1205 /* blez */, Mips::BLEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1210 /* blezalc */, Mips::BLEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1210 /* blezalc */, Mips::BLEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1218 /* blezc */, Mips::BLEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1224 /* blezl */, Mips::BLEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1230 /* blt */, Mips::BLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1234 /* bltc */, Mips::BLTC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1239 /* bltu */, Mips::BLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1244 /* bltuc */, Mips::BLTUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1250 /* bltz */, Mips::BLTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1250 /* bltz */, Mips::BLTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1255 /* bltzal */, Mips::BLTZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1255 /* bltzal */, Mips::BLTZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1262 /* bltzalc */, Mips::BLTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1262 /* bltzalc */, Mips::BLTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1270 /* bltzall */, Mips::BLTZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1278 /* bltzals */, Mips::BLTZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1286 /* bltzc */, Mips::BLTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1292 /* bltzl */, Mips::BLTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1298 /* bmnz.v */, Mips::BMNZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1305 /* bmnzi.b */, Mips::BMNZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1313 /* bmz.v */, Mips::BMZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1319 /* bmzi.b */, Mips::BMZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1326 /* bne */, Mips::BNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1326 /* bne */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1326 /* bne */, Mips::BneImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1330 /* bnec */, Mips::BNEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1335 /* bneg.b */, Mips::BNEG_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1342 /* bneg.d */, Mips::BNEG_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1349 /* bneg.h */, Mips::BNEG_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1356 /* bneg.w */, Mips::BNEG_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1363 /* bnegi.b */, Mips::BNEGI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1371 /* bnegi.d */, Mips::BNEGI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1379 /* bnegi.h */, Mips::BNEGI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1387 /* bnegi.w */, Mips::BNEGI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1395 /* bnel */, Mips::BNEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1400 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 1400 /* bnez */, Mips::BNE, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1400 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1405 /* bnez16 */, Mips::BNEZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1412 /* bnezalc */, Mips::BNEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1412 /* bnezalc */, Mips::BNEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1420 /* bnezc */, Mips::BNEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1420 /* bnezc */, Mips::BNEZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1426 /* bnezl */, Mips::BNEL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1432 /* bnvc */, Mips::BNVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1437 /* bnz.b */, Mips::BNZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1443 /* bnz.d */, Mips::BNZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1449 /* bnz.h */, Mips::BNZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1455 /* bnz.v */, Mips::BNZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1461 /* bnz.w */, Mips::BNZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1467 /* bovc */, Mips::BOVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1472 /* bposge32 */, Mips::BPOSGE32, Convert__JumpTarget1_0, Feature_HasDSP, { MCK_JumpTarget }, },
  { 1481 /* break */, Mips::BREAK, Convert__imm_95_0__imm_95_0, 0, {  }, },
  { 1481 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 1481 /* break */, Mips::BREAK, Convert__UImm101_0__imm_95_0, 0, { MCK_UImm10 }, },
  { 1481 /* break */, Mips::BREAK, Convert__UImm101_0__UImm101_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_UImm10, MCK_UImm10 }, },
  { 1481 /* break */, Mips::BREAK_MMR6, Convert__UImm101_0__UImm101_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_UImm10, MCK_UImm10 }, },
  { 1481 /* break */, Mips::BREAK_MM, Convert__UImm101_0__UImm101_1, Feature_InMicroMips, { MCK_UImm10, MCK_UImm10 }, },
  { 1487 /* break16 */, Mips::BREAK16_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 1495 /* bsel.v */, Mips::BSEL_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1502 /* bseli.b */, Mips::BSELI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1510 /* bset.b */, Mips::BSET_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1517 /* bset.d */, Mips::BSET_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1524 /* bset.h */, Mips::BSET_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1531 /* bset.w */, Mips::BSET_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1538 /* bseti.b */, Mips::BSETI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1546 /* bseti.d */, Mips::BSETI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1554 /* bseti.h */, Mips::BSETI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1562 /* bseti.w */, Mips::BSETI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1570 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1570 /* bteqz */, Mips::Bteqz16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1576 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1576 /* btnez */, Mips::Btnez16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1582 /* bz.b */, Mips::BZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1587 /* bz.d */, Mips::BZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1592 /* bz.h */, Mips::BZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1597 /* bz.v */, Mips::BZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1602 /* bz.w */, Mips::BZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1607 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1607 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1614 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1621 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1621 /* c.f.d */, Mips::C_F_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1627 /* c.f.s */, Mips::C_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1633 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1633 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1640 /* c.le.s */, Mips::C_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1647 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1647 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1654 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1661 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1661 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1669 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1677 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1677 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1685 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1693 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1693 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1702 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1711 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1711 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1719 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1727 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1727 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1735 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1743 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1743 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1751 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1759 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1759 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1767 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1775 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1775 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1782 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1789 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1789 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1797 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1805 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1805 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1813 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1821 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1821 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1829 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1837 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1837 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1844 /* c.un.s */, Mips::C_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1851 /* cache */, Mips::CACHE, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 1851 /* cache */, Mips::CACHE_MMR6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_Imm, MCK_Mem }, },
  { 1851 /* cache */, Mips::CACHE_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 1851 /* cache */, Mips::CACHE_MM, Convert__Mem2_1__Imm1_0, Feature_InMicroMips, { MCK_Imm, MCK_Mem }, },
  { 1857 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1866 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1875 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1875 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 1884 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1893 /* ceq.b */, Mips::CEQ_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1899 /* ceq.d */, Mips::CEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1905 /* ceq.h */, Mips::CEQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1911 /* ceq.w */, Mips::CEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1917 /* ceqi.b */, Mips::CEQI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1924 /* ceqi.d */, Mips::CEQI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1931 /* ceqi.h */, Mips::CEQI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1938 /* ceqi.w */, Mips::CEQI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1945 /* cfc1 */, Mips::CFC1, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 1950 /* cfcmsa */, Mips::CFCMSA, Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSACtrlAsmReg }, },
  { 1957 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1957 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1962 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1962 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1969 /* class.d */, Mips::CLASS_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1977 /* class.s */, Mips::CLASS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1985 /* cle_s.b */, Mips::CLE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1993 /* cle_s.d */, Mips::CLE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2001 /* cle_s.h */, Mips::CLE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2009 /* cle_s.w */, Mips::CLE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2017 /* cle_u.b */, Mips::CLE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2025 /* cle_u.d */, Mips::CLE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2033 /* cle_u.h */, Mips::CLE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2041 /* cle_u.w */, Mips::CLE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2049 /* clei_s.b */, Mips::CLEI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2058 /* clei_s.d */, Mips::CLEI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2067 /* clei_s.h */, Mips::CLEI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2076 /* clei_s.w */, Mips::CLEI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2085 /* clei_u.b */, Mips::CLEI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2094 /* clei_u.d */, Mips::CLEI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2103 /* clei_u.h */, Mips::CLEI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2112 /* clei_u.w */, Mips::CLEI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2121 /* clo */, Mips::CLO, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2121 /* clo */, Mips::CLO_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2121 /* clo */, Mips::CLO_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2121 /* clo */, Mips::CLO_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2125 /* clt_s.b */, Mips::CLT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2133 /* clt_s.d */, Mips::CLT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2141 /* clt_s.h */, Mips::CLT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2149 /* clt_s.w */, Mips::CLT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2157 /* clt_u.b */, Mips::CLT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2165 /* clt_u.d */, Mips::CLT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2173 /* clt_u.h */, Mips::CLT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2181 /* clt_u.w */, Mips::CLT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2189 /* clti_s.b */, Mips::CLTI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2198 /* clti_s.d */, Mips::CLTI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2207 /* clti_s.h */, Mips::CLTI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2216 /* clti_s.w */, Mips::CLTI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2225 /* clti_u.b */, Mips::CLTI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2234 /* clti_u.d */, Mips::CLTI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2243 /* clti_u.h */, Mips::CLTI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2252 /* clti_u.w */, Mips::CLTI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2261 /* clz */, Mips::CLZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2261 /* clz */, Mips::CLZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2261 /* clz */, Mips::CLZ_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2261 /* clz */, Mips::CLZ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2265 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2269 /* cmp.af.d */, Mips::CMP_F_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2278 /* cmp.af.s */, Mips::CMP_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2287 /* cmp.eq.d */, Mips::CMP_EQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2296 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2306 /* cmp.eq.s */, Mips::CMP_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2315 /* cmp.le.d */, Mips::CMP_LE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2324 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2334 /* cmp.le.s */, Mips::CMP_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2343 /* cmp.lt.d */, Mips::CMP_LT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2352 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2362 /* cmp.lt.s */, Mips::CMP_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2371 /* cmp.saf.d */, Mips::CMP_SAF_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2381 /* cmp.saf.s */, Mips::CMP_SAF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2391 /* cmp.seq.d */, Mips::CMP_SEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2401 /* cmp.seq.s */, Mips::CMP_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2411 /* cmp.sle.d */, Mips::CMP_SLE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2421 /* cmp.sle.s */, Mips::CMP_SLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2431 /* cmp.slt.d */, Mips::CMP_SLT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2441 /* cmp.slt.s */, Mips::CMP_SLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2451 /* cmp.sueq.d */, Mips::CMP_SUEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2462 /* cmp.sueq.s */, Mips::CMP_SUEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2473 /* cmp.sule.d */, Mips::CMP_SULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2484 /* cmp.sule.s */, Mips::CMP_SULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2495 /* cmp.sult.d */, Mips::CMP_SULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2506 /* cmp.sult.s */, Mips::CMP_SULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2517 /* cmp.sun.d */, Mips::CMP_SUN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2527 /* cmp.sun.s */, Mips::CMP_SUN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2537 /* cmp.ueq.d */, Mips::CMP_UEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2547 /* cmp.ueq.s */, Mips::CMP_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2557 /* cmp.ule.d */, Mips::CMP_ULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2567 /* cmp.ule.s */, Mips::CMP_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2577 /* cmp.ult.d */, Mips::CMP_ULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2587 /* cmp.ult.s */, Mips::CMP_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2597 /* cmp.un.d */, Mips::CMP_UN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2606 /* cmp.un.s */, Mips::CMP_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2615 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2628 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2641 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2654 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2666 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2678 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2690 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2690 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2695 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2706 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2717 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2728 /* copy_s.b */, Mips::COPY_S_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2737 /* copy_s.d */, Mips::COPY_S_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2746 /* copy_s.h */, Mips::COPY_S_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2755 /* copy_s.w */, Mips::COPY_S_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2764 /* copy_u.b */, Mips::COPY_U_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2773 /* copy_u.d */, Mips::COPY_U_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2782 /* copy_u.h */, Mips::COPY_U_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2791 /* copy_u.w */, Mips::COPY_U_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2800 /* ctc1 */, Mips::CTC1, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2805 /* ctcmsa */, Mips::CTCMSA, Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSACtrlAsmReg, MCK_GPR32AsmReg }, },
  { 2812 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2820 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2820 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2828 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2828 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2836 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2844 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2852 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2852 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2860 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2868 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2876 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2876 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2884 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2892 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2892 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2892 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2892 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2897 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2897 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2903 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2903 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2910 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2910 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2910 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2910 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2916 /* dahi */, Mips::DAHI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2921 /* dalign */, Mips::DALIGN, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2928 /* dati */, Mips::DATI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2933 /* daui */, Mips::DAUI, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2938 /* dbitswap */, Mips::DBITSWAP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2947 /* dclo */, Mips::DCLO, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2947 /* dclo */, Mips::DCLO_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2952 /* dclz */, Mips::DCLZ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2952 /* dclz */, Mips::DCLZ_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2957 /* ddiv */, Mips::DSDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2957 /* ddiv */, Mips::DDIV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2962 /* ddivu */, Mips::DUDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2962 /* ddivu */, Mips::DDIVU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2968 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32, {  }, },
  { 2968 /* deret */, Mips::DERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 2974 /* dext */, Mips::DEXT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2979 /* dextm */, Mips::DEXTM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2985 /* dextu */, Mips::DEXTU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2991 /* di */, Mips::DI, Convert__regZERO, Feature_HasMips32r2, {  }, },
  { 2991 /* di */, Mips::DI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg }, },
  { 2991 /* di */, Mips::DI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 2994 /* dins */, Mips::DINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2999 /* dinsm */, Mips::DINSM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3005 /* dinsu */, Mips::DINSU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3011 /* div */, Mips::DIV_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3011 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3011 /* div */, Mips::SDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3011 /* div */, Mips::SDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3011 /* div */, Mips::DIV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3011 /* div */, Mips::DIV_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3015 /* div.d */, Mips::FDIV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 3015 /* div.d */, Mips::FDIV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 3021 /* div.s */, Mips::FDIV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3027 /* div_s.b */, Mips::DIV_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3035 /* div_s.d */, Mips::DIV_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3043 /* div_s.h */, Mips::DIV_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3051 /* div_s.w */, Mips::DIV_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3059 /* div_u.b */, Mips::DIV_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3067 /* div_u.d */, Mips::DIV_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3075 /* div_u.h */, Mips::DIV_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3083 /* div_u.w */, Mips::DIV_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3091 /* divu */, Mips::DIVU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3091 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3091 /* divu */, Mips::UDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3091 /* divu */, Mips::UDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3091 /* divu */, Mips::DIVU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3091 /* divu */, Mips::DIVU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3096 /* dli */, Mips::LoadImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3100 /* dlsa */, Mips::DLSA_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3100 /* dlsa */, Mips::DLSA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_LSAImm }, },
  { 3105 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3105 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 3111 /* dmfc1 */, Mips::DMFC1, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3117 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3117 /* dmfc2 */, Mips::DMFC2_OCTEON, Convert__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3117 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 3123 /* dmod */, Mips::DMOD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3128 /* dmodu */, Mips::DMODU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3134 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3134 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 3140 /* dmtc1 */, Mips::DMTC1, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3146 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3146 /* dmtc2 */, Mips::DMTC2_OCTEON, Convert__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3146 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 3152 /* dmuh */, Mips::DMUH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3157 /* dmuhu */, Mips::DMUHU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3163 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3163 /* dmul */, Mips::DMUL_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3163 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3168 /* dmult */, Mips::DMULT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3174 /* dmultu */, Mips::DMULTu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3181 /* dmulu */, Mips::DMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3187 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMips3, { MCK_GPR64AsmReg }, },
  { 3187 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3192 /* dnegu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3198 /* dotp_s.d */, Mips::DOTP_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3207 /* dotp_s.h */, Mips::DOTP_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3216 /* dotp_s.w */, Mips::DOTP_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3225 /* dotp_u.d */, Mips::DOTP_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3234 /* dotp_u.h */, Mips::DOTP_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3243 /* dotp_u.w */, Mips::DOTP_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3252 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3261 /* dpadd_s.d */, Mips::DPADD_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3271 /* dpadd_s.h */, Mips::DPADD_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3281 /* dpadd_s.w */, Mips::DPADD_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3291 /* dpadd_u.d */, Mips::DPADD_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3301 /* dpadd_u.h */, Mips::DPADD_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3311 /* dpadd_u.w */, Mips::DPADD_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3321 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3333 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3345 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3358 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3372 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3383 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3394 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3404 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 3404 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3409 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3418 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3430 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3442 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3455 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3469 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3480 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3491 /* dpsub_s.d */, Mips::DPSUB_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3501 /* dpsub_s.h */, Mips::DPSUB_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3511 /* dpsub_s.w */, Mips::DPSUB_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3521 /* dpsub_u.d */, Mips::DPSUB_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3531 /* dpsub_u.h */, Mips::DPSUB_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3541 /* dpsub_u.w */, Mips::DPSUB_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3551 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3561 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3561 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3567 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3567 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3575 /* drotrv */, Mips::DROTRV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3582 /* dsbh */, Mips::DSBH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3587 /* dshd */, Mips::DSHD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3592 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3592 /* dsll */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3592 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3597 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3597 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3604 /* dsllv */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3610 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3610 /* dsra */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3610 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3615 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3615 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3622 /* dsrav */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3628 /* dsrl */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3633 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3633 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3640 /* dsrlv */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3646 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3646 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3646 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3646 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3651 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3651 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3657 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3657 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3657 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3657 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3663 /* ehb */, Mips::EHB_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3663 /* ehb */, Mips::EHB, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 3663 /* ehb */, Mips::EHB_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3667 /* ei */, Mips::EI, Convert__regZERO, Feature_HasMips32r2|Feature_NotInMicroMips, {  }, },
  { 3667 /* ei */, Mips::EI_MM, Convert__regZERO, Feature_InMicroMips, {  }, },
  { 3667 /* ei */, Mips::EI_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3667 /* ei */, Mips::EI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 3667 /* ei */, Mips::EI_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3667 /* ei */, Mips::EI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3670 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotInMicroMips, {  }, },
  { 3670 /* eret */, Mips::ERET_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3670 /* eret */, Mips::ERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3675 /* eretnc */, Mips::ERETNC_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3682 /* ext */, Mips::EXT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3682 /* ext */, Mips::EXT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3686 /* extp */, Mips::EXTP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3691 /* extpdp */, Mips::EXTPDP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3698 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3706 /* extpv */, Mips::EXTPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3712 /* extr.w */, Mips::EXTR_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3719 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3728 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3738 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3747 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3755 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3765 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3776 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3786 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3786 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3791 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3791 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3798 /* fadd.d */, Mips::FADD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3805 /* fadd.w */, Mips::FADD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3812 /* fcaf.d */, Mips::FCAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3819 /* fcaf.w */, Mips::FCAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3826 /* fceq.d */, Mips::FCEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3833 /* fceq.w */, Mips::FCEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3840 /* fclass.d */, Mips::FCLASS_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3849 /* fclass.w */, Mips::FCLASS_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3858 /* fcle.d */, Mips::FCLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3865 /* fcle.w */, Mips::FCLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3872 /* fclt.d */, Mips::FCLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3879 /* fclt.w */, Mips::FCLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3886 /* fcne.d */, Mips::FCNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3893 /* fcne.w */, Mips::FCNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3900 /* fcor.d */, Mips::FCOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3907 /* fcor.w */, Mips::FCOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3914 /* fcueq.d */, Mips::FCUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3922 /* fcueq.w */, Mips::FCUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3930 /* fcule.d */, Mips::FCULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3938 /* fcule.w */, Mips::FCULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3946 /* fcult.d */, Mips::FCULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3954 /* fcult.w */, Mips::FCULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3962 /* fcun.d */, Mips::FCUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3969 /* fcun.w */, Mips::FCUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3976 /* fcune.d */, Mips::FCUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3984 /* fcune.w */, Mips::FCUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3992 /* fdiv.d */, Mips::FDIV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3999 /* fdiv.w */, Mips::FDIV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4006 /* fexdo.h */, Mips::FEXDO_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4014 /* fexdo.w */, Mips::FEXDO_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4022 /* fexp2.d */, Mips::FEXP2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4030 /* fexp2.w */, Mips::FEXP2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4038 /* fexupl.d */, Mips::FEXUPL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4047 /* fexupl.w */, Mips::FEXUPL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4056 /* fexupr.d */, Mips::FEXUPR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4065 /* fexupr.w */, Mips::FEXUPR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4074 /* ffint_s.d */, Mips::FFINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4084 /* ffint_s.w */, Mips::FFINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4094 /* ffint_u.d */, Mips::FFINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4104 /* ffint_u.w */, Mips::FFINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4114 /* ffql.d */, Mips::FFQL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4121 /* ffql.w */, Mips::FFQL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4128 /* ffqr.d */, Mips::FFQR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4135 /* ffqr.w */, Mips::FFQR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4142 /* fill.b */, Mips::FILL_B, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4149 /* fill.d */, Mips::FILL_D, Convert__MSA128AsmReg1_0__GPR64AsmReg1_1, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK_GPR64AsmReg }, },
  { 4156 /* fill.h */, Mips::FILL_H, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4163 /* fill.w */, Mips::FILL_W, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4170 /* flog2.d */, Mips::FLOG2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4178 /* flog2.w */, Mips::FLOG2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4186 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4196 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4206 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4206 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 4216 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4226 /* fmadd.d */, Mips::FMADD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4234 /* fmadd.w */, Mips::FMADD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4242 /* fmax.d */, Mips::FMAX_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4249 /* fmax.w */, Mips::FMAX_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4256 /* fmax_a.d */, Mips::FMAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4265 /* fmax_a.w */, Mips::FMAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4274 /* fmin.d */, Mips::FMIN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4281 /* fmin.w */, Mips::FMIN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4288 /* fmin_a.d */, Mips::FMIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4297 /* fmin_a.w */, Mips::FMIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4306 /* fmsub.d */, Mips::FMSUB_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4314 /* fmsub.w */, Mips::FMSUB_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4322 /* fmul.d */, Mips::FMUL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4329 /* fmul.w */, Mips::FMUL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4336 /* frcp.d */, Mips::FRCP_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4343 /* frcp.w */, Mips::FRCP_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4350 /* frint.d */, Mips::FRINT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4358 /* frint.w */, Mips::FRINT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4366 /* frsqrt.d */, Mips::FRSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4375 /* frsqrt.w */, Mips::FRSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4384 /* fsaf.d */, Mips::FSAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4391 /* fsaf.w */, Mips::FSAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4398 /* fseq.d */, Mips::FSEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4405 /* fseq.w */, Mips::FSEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4412 /* fsle.d */, Mips::FSLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4419 /* fsle.w */, Mips::FSLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4426 /* fslt.d */, Mips::FSLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4433 /* fslt.w */, Mips::FSLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4440 /* fsne.d */, Mips::FSNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4447 /* fsne.w */, Mips::FSNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4454 /* fsor.d */, Mips::FSOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4461 /* fsor.w */, Mips::FSOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4468 /* fsqrt.d */, Mips::FSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4476 /* fsqrt.w */, Mips::FSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4484 /* fsub.d */, Mips::FSUB_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4491 /* fsub.w */, Mips::FSUB_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4498 /* fsueq.d */, Mips::FSUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4506 /* fsueq.w */, Mips::FSUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4514 /* fsule.d */, Mips::FSULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4522 /* fsule.w */, Mips::FSULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4530 /* fsult.d */, Mips::FSULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4538 /* fsult.w */, Mips::FSULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4546 /* fsun.d */, Mips::FSUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4553 /* fsun.w */, Mips::FSUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4560 /* fsune.d */, Mips::FSUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4568 /* fsune.w */, Mips::FSUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4576 /* ftint_s.d */, Mips::FTINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4586 /* ftint_s.w */, Mips::FTINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4596 /* ftint_u.d */, Mips::FTINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4606 /* ftint_u.w */, Mips::FTINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4616 /* ftq.h */, Mips::FTQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4622 /* ftq.w */, Mips::FTQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4628 /* ftrunc_s.d */, Mips::FTRUNC_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4639 /* ftrunc_s.w */, Mips::FTRUNC_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4650 /* ftrunc_u.d */, Mips::FTRUNC_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4661 /* ftrunc_u.w */, Mips::FTRUNC_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4672 /* hadd_s.d */, Mips::HADD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4681 /* hadd_s.h */, Mips::HADD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4690 /* hadd_s.w */, Mips::HADD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4699 /* hadd_u.d */, Mips::HADD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4708 /* hadd_u.h */, Mips::HADD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4717 /* hadd_u.w */, Mips::HADD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4726 /* hsub_s.d */, Mips::HSUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4735 /* hsub_s.h */, Mips::HSUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4744 /* hsub_s.w */, Mips::HSUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4753 /* hsub_u.d */, Mips::HSUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4762 /* hsub_u.h */, Mips::HSUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4771 /* hsub_u.w */, Mips::HSUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4780 /* ilvev.b */, Mips::ILVEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4788 /* ilvev.d */, Mips::ILVEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4796 /* ilvev.h */, Mips::ILVEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4804 /* ilvev.w */, Mips::ILVEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4812 /* ilvl.b */, Mips::ILVL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4819 /* ilvl.d */, Mips::ILVL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4826 /* ilvl.h */, Mips::ILVL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4833 /* ilvl.w */, Mips::ILVL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4840 /* ilvod.b */, Mips::ILVOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4848 /* ilvod.d */, Mips::ILVOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4856 /* ilvod.h */, Mips::ILVOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4864 /* ilvod.w */, Mips::ILVOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4872 /* ilvr.b */, Mips::ILVR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4879 /* ilvr.d */, Mips::ILVR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4886 /* ilvr.h */, Mips::ILVR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4893 /* ilvr.w */, Mips::ILVR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4900 /* ins */, Mips::INS, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4900 /* ins */, Mips::INS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4904 /* insert.b */, Mips::INSERT_B, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4913 /* insert.d */, Mips::INSERT_D, Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR64AsmReg }, },
  { 4922 /* insert.h */, Mips::INSERT_H, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4931 /* insert.w */, Mips::INSERT_W, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4940 /* insv */, Mips::INSV, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4945 /* insve.b */, Mips::INSVE_B, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4953 /* insve.d */, Mips::INSVE_D, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4961 /* insve.h */, Mips::INSVE_H, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4969 /* insve.w */, Mips::INSVE_W, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4977 /* j */, Mips::JR, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4977 /* j */, Mips::J_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4977 /* j */, Mips::J, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 4979 /* jal */, Mips::JalOneReg, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4979 /* jal */, Mips::JAL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4979 /* jal */, Mips::JAL, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 4979 /* jal */, Mips::JalTwoReg, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4983 /* jalr */, Mips::JALR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4983 /* jalr */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 4983 /* jalr */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4983 /* jalr */, Mips::JALR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4988 /* jalr.hb */, Mips::JALR_HB, Convert__regRA__GPR32AsmReg1_0, Feature_HasMips32, { MCK_GPR32AsmReg }, },
  { 4988 /* jalr.hb */, Mips::JALR_HB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4996 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5002 /* jalrs */, Mips::JALRS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5008 /* jalrs16 */, Mips::JALRS16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5016 /* jals */, Mips::JALS_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5021 /* jalx */, Mips::JALX, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 5021 /* jalx */, Mips::JALX_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 5026 /* jialc */, Mips::JIALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5026 /* jialc */, Mips::JIALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5032 /* jic */, Mips::JIC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5032 /* jic */, Mips::JIC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5036 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5036 /* jr */, Mips::JR, Convert__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg }, },
  { 5036 /* jr */, Mips::JR_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5036 /* jr */, Mips::JALR, Convert__regZERO__GPR32AsmReg1_0, Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5036 /* jr */, Mips::JALR64, Convert__regZERO_64__GPR64AsmReg1_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 5039 /* jr.hb */, Mips::JR_HB, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 5039 /* jr.hb */, Mips::JR_HB_R6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5045 /* jr16 */, Mips::JR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5050 /* jraddiusp */, Mips::JRADDIUSP, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5060 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5060 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5060 /* jrc */, Mips::JRC16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5064 /* la */, Mips::LoadAddrImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5064 /* la */, Mips::LoadAddrReg32, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5067 /* lb */, Mips::LB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5067 /* lb */, Mips::LB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5070 /* lbu */, Mips::LBu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5070 /* lbu */, Mips::LBu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5074 /* lbu16 */, Mips::LBU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5080 /* lbux */, Mips::LBUX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5085 /* ld */, Mips::LD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5088 /* ld.b */, Mips::LD_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5093 /* ld.d */, Mips::LD_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5098 /* ld.h */, Mips::LD_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5103 /* ld.w */, Mips::LD_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5108 /* ldc1 */, Mips::LDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 5108 /* ldc1 */, Mips::LDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 5113 /* ldc2 */, Mips::LDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5113 /* ldc2 */, Mips::LDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5118 /* ldc3 */, Mips::LDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5123 /* ldi.b */, Mips::LDI_B, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5129 /* ldi.d */, Mips::LDI_D, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5135 /* ldi.h */, Mips::LDI_H, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5141 /* ldi.w */, Mips::LDI_W, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5147 /* ldl */, Mips::LDL, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5151 /* ldpc */, Mips::LDPC, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5156 /* ldr */, Mips::LDR, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5160 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5160 /* ldxc1 */, Mips::LDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5166 /* lh */, Mips::LH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5166 /* lh */, Mips::LH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5169 /* lhu */, Mips::LHu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5169 /* lhu */, Mips::LHu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5173 /* lhu16 */, Mips::LHU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5179 /* lhx */, Mips::LHX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5183 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5183 /* li */, Mips::LoadImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5183 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5186 /* li16 */, Mips::LI16_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 5191 /* ll */, Mips::LL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5191 /* ll */, Mips::LL_R6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5191 /* ll */, Mips::LL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5194 /* lld */, Mips::LLD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5194 /* lld */, Mips::LLD_R6, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5198 /* lsa */, Mips::LSA_MMR6, Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__Imm1_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5198 /* lsa */, Mips::LSA_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5198 /* lsa */, Mips::LSA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_LSAImm }, },
  { 5202 /* lui */, Mips::LUi, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5202 /* lui */, Mips::LUi_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5206 /* luxc1 */, Mips::LUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5206 /* luxc1 */, Mips::LUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5212 /* lw */, Mips::LwRxPcTcpX16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5212 /* lw */, Mips::LWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 5212 /* lw */, Mips::LW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5212 /* lw */, Mips::LW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5212 /* lw */, Mips::LWGP_MM, Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_CPU16Regs, MCK_Imm }, },
  { 5212 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 5212 /* lw */, Mips::LwRxPcTcp16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5215 /* lw16 */, Mips::LW16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5220 /* lwc1 */, Mips::LWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 5225 /* lwc2 */, Mips::LWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5225 /* lwc2 */, Mips::LWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5230 /* lwc3 */, Mips::LWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5235 /* lwl */, Mips::LWL, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5235 /* lwl */, Mips::LWL_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5239 /* lwm */, Mips::LWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5243 /* lwm16 */, Mips::LWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5249 /* lwm32 */, Mips::LWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5255 /* lwp */, Mips::LWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 5259 /* lwpc */, Mips::LWPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5259 /* lwpc */, Mips::LWPC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5264 /* lwr */, Mips::LWR, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5264 /* lwr */, Mips::LWR_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5268 /* lwu */, Mips::LWU_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5268 /* lwu */, Mips::LWu, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5272 /* lwupc */, Mips::LWUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5278 /* lwx */, Mips::LWX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5282 /* lwxc1 */, Mips::LWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5288 /* lwxs */, Mips::LWXS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5293 /* madd */, Mips::MADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5293 /* madd */, Mips::MADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5293 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5298 /* madd.d */, Mips::MADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5298 /* madd.d */, Mips::MADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5305 /* madd.s */, Mips::MADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5312 /* madd_q.h */, Mips::MADD_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5321 /* madd_q.w */, Mips::MADD_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5330 /* maddf.d */, Mips::MADDF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5338 /* maddf.s */, Mips::MADDF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5346 /* maddr_q.h */, Mips::MADDR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5356 /* maddr_q.w */, Mips::MADDR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5366 /* maddu */, Mips::MADDU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5366 /* maddu */, Mips::MADDU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5366 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5372 /* maddv.b */, Mips::MADDV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5380 /* maddv.d */, Mips::MADDV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5388 /* maddv.h */, Mips::MADDV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5396 /* maddv.w */, Mips::MADDV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5404 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5416 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5428 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5441 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5454 /* max.d */, Mips::MAX_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5460 /* max.s */, Mips::MAX_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5466 /* max_a.b */, Mips::MAX_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5474 /* max_a.d */, Mips::MAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5482 /* max_a.h */, Mips::MAX_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5490 /* max_a.w */, Mips::MAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5498 /* max_s.b */, Mips::MAX_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5506 /* max_s.d */, Mips::MAX_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5514 /* max_s.h */, Mips::MAX_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5522 /* max_s.w */, Mips::MAX_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5530 /* max_u.b */, Mips::MAX_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5538 /* max_u.d */, Mips::MAX_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5546 /* max_u.h */, Mips::MAX_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5554 /* max_u.w */, Mips::MAX_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5562 /* maxa.d */, Mips::MAXA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5569 /* maxa.s */, Mips::MAXA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5576 /* maxi_s.b */, Mips::MAXI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5585 /* maxi_s.d */, Mips::MAXI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5594 /* maxi_s.h */, Mips::MAXI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5603 /* maxi_s.w */, Mips::MAXI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5612 /* maxi_u.b */, Mips::MAXI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5621 /* maxi_u.d */, Mips::MAXI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5630 /* maxi_u.h */, Mips::MAXI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5639 /* maxi_u.w */, Mips::MAXI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5648 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 5648 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 5653 /* mfc1 */, Mips::MFC1, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5658 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 5658 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 5663 /* mfhc1 */, Mips::MFHC1_D32, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5663 /* mfhc1 */, Mips::MFHC1_D64, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5669 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5669 /* mfhi */, Mips::MFHI, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5669 /* mfhi */, Mips::MFHI16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5669 /* mfhi */, Mips::MFHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5669 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5674 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5674 /* mflo */, Mips::MFLO, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5674 /* mflo */, Mips::MFLO16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5674 /* mflo */, Mips::MFLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5674 /* mflo */, Mips::MFLO_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5679 /* min.d */, Mips::MIN_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5685 /* min.s */, Mips::MIN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5691 /* min_a.b */, Mips::MIN_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5699 /* min_a.d */, Mips::MIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5707 /* min_a.h */, Mips::MIN_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5715 /* min_a.w */, Mips::MIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5723 /* min_s.b */, Mips::MIN_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5731 /* min_s.d */, Mips::MIN_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5739 /* min_s.h */, Mips::MIN_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5747 /* min_s.w */, Mips::MIN_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5755 /* min_u.b */, Mips::MIN_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5763 /* min_u.d */, Mips::MIN_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5771 /* min_u.h */, Mips::MIN_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5779 /* min_u.w */, Mips::MIN_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5787 /* mina.d */, Mips::MINA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5794 /* mina.s */, Mips::MINA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5801 /* mini_s.b */, Mips::MINI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5810 /* mini_s.d */, Mips::MINI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5819 /* mini_s.h */, Mips::MINI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5828 /* mini_s.w */, Mips::MINI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5837 /* mini_u.b */, Mips::MINI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5846 /* mini_u.d */, Mips::MINI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5855 /* mini_u.h */, Mips::MINI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5864 /* mini_u.w */, Mips::MINI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5873 /* mod */, Mips::MOD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5873 /* mod */, Mips::MOD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5873 /* mod */, Mips::MOD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5877 /* mod_s.b */, Mips::MOD_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5885 /* mod_s.d */, Mips::MOD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5893 /* mod_s.h */, Mips::MOD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5901 /* mod_s.w */, Mips::MOD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5909 /* mod_u.b */, Mips::MOD_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5917 /* mod_u.d */, Mips::MOD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5925 /* mod_u.h */, Mips::MOD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5933 /* mod_u.w */, Mips::MOD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5941 /* modsub */, Mips::MODSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5948 /* modu */, Mips::MODU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5948 /* modu */, Mips::MODU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5948 /* modu */, Mips::MODU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5953 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5953 /* mov.d */, Mips::FMOV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5959 /* mov.s */, Mips::FMOV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5965 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 5965 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 5965 /* move */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5965 /* move */, Mips::MOVE16_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5965 /* move */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 5970 /* move.v */, Mips::MOVE_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5977 /* movep */, Mips::MOVEP_MM, Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2, Feature_InMicroMips, { MCK_MovePRegPair, MCK_GPRMM16AsmRegMoveP, MCK_GPRMM16AsmRegMoveP }, },
  { 5983 /* movf */, Mips::MOVF_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5983 /* movf */, Mips::MOVF_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5988 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 5988 /* movf.d */, Mips::MOVF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 5995 /* movf.s */, Mips::MOVF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6002 /* movn */, Mips::MOVN_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6002 /* movn */, Mips::MOVN_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6007 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6007 /* movn.d */, Mips::MOVN_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6014 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6021 /* movt */, Mips::MOVT_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6021 /* movt */, Mips::MOVT_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6026 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 6026 /* movt.d */, Mips::MOVT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 6033 /* movt.s */, Mips::MOVT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6040 /* movz */, Mips::MOVZ_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6040 /* movz */, Mips::MOVZ_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6045 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6045 /* movz.d */, Mips::MOVZ_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6052 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6059 /* msub */, Mips::MSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6059 /* msub */, Mips::MSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6059 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6064 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6064 /* msub.d */, Mips::MSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6071 /* msub.s */, Mips::MSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6078 /* msub_q.h */, Mips::MSUB_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6087 /* msub_q.w */, Mips::MSUB_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6096 /* msubf.d */, Mips::MSUBF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6104 /* msubf.s */, Mips::MSUBF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6112 /* msubr_q.h */, Mips::MSUBR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6122 /* msubr_q.w */, Mips::MSUBR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6132 /* msubu */, Mips::MSUBU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6132 /* msubu */, Mips::MSUBU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6132 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6138 /* msubv.b */, Mips::MSUBV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6146 /* msubv.d */, Mips::MSUBV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6154 /* msubv.h */, Mips::MSUBV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6162 /* msubv.w */, Mips::MSUBV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6170 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 6170 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 6175 /* mtc1 */, Mips::MTC1, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6180 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 6180 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 6185 /* mthc1 */, Mips::MTHC1_D32, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6185 /* mthc1 */, Mips::MTHC1_D64, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6191 /* mthi */, Mips::MTHI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6191 /* mthi */, Mips::MTHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6191 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6196 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6203 /* mtlo */, Mips::MTLO, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6203 /* mtlo */, Mips::MTLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6203 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6208 /* mtm0 */, Mips::MTM0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6213 /* mtm1 */, Mips::MTM1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6218 /* mtm2 */, Mips::MTM2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6223 /* mtp0 */, Mips::MTP0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6228 /* mtp1 */, Mips::MTP1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6233 /* mtp2 */, Mips::MTP2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6238 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6238 /* muh */, Mips::MUH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6238 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6242 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6242 /* muhu */, Mips::MUHU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6242 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6247 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6251 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6251 /* mul.d */, Mips::FMUL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6257 /* mul.ph */, Mips::MUL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6264 /* mul.s */, Mips::FMUL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6270 /* mul_q.h */, Mips::MUL_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6278 /* mul_q.w */, Mips::MUL_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6286 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6295 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6309 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6323 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6338 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6353 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6364 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6374 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6393 /* mulr_q.h */, Mips::MULR_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6402 /* mulr_q.w */, Mips::MULR_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6411 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6422 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6436 /* mult */, Mips::MULT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6436 /* mult */, Mips::MULT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6436 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6441 /* multu */, Mips::MULTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6441 /* multu */, Mips::MULTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6441 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6447 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6447 /* mulu */, Mips::MULU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6447 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6452 /* mulv.b */, Mips::MULV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6459 /* mulv.d */, Mips::MULV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6466 /* mulv.h */, Mips::MULV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6473 /* mulv.w */, Mips::MULV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6480 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6480 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6484 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6484 /* neg.d */, Mips::FNEG_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6490 /* neg.s */, Mips::FNEG_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6496 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6496 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6501 /* nloc.b */, Mips::NLOC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6508 /* nloc.d */, Mips::NLOC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6515 /* nloc.h */, Mips::NLOC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6522 /* nloc.w */, Mips::NLOC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6529 /* nlzc.b */, Mips::NLZC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6536 /* nlzc.d */, Mips::NLZC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6543 /* nlzc.h */, Mips::NLZC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6550 /* nlzc.w */, Mips::NLZC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6557 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6557 /* nmadd.d */, Mips::NMADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6565 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6573 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6573 /* nmsub.d */, Mips::NMSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6581 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6589 /* nop */, Mips::SLL_MM, Convert__regZERO__regZERO__imm_95_0, Feature_InMicroMips, {  }, },
  { 6589 /* nop */, Mips::MOVE16_MM, Convert__regZERO__regZERO, Feature_InMicroMips, {  }, },
  { 6589 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_95_0, 0, {  }, },
  { 6593 /* nor */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6593 /* nor */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6593 /* nor */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6593 /* nor */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6597 /* nor.v */, Mips::NOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6603 /* nori.b */, Mips::NORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6610 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6610 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6614 /* not16 */, Mips::NOT16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6620 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6620 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6620 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6620 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6623 /* or.v */, Mips::OR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6628 /* or16 */, Mips::OR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6633 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6633 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6633 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6633 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6633 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6633 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6637 /* ori.b */, Mips::ORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6643 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6653 /* pause */, Mips::PAUSE, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r2, {  }, },
  { 6653 /* pause */, Mips::PAUSE_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 6659 /* pckev.b */, Mips::PCKEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6667 /* pckev.d */, Mips::PCKEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6675 /* pckev.h */, Mips::PCKEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6683 /* pckev.w */, Mips::PCKEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6691 /* pckod.b */, Mips::PCKOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6699 /* pckod.d */, Mips::PCKOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6707 /* pckod.h */, Mips::PCKOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6715 /* pckod.w */, Mips::PCKOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6723 /* pcnt.b */, Mips::PCNT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6730 /* pcnt.d */, Mips::PCNT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6737 /* pcnt.h */, Mips::PCNT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6744 /* pcnt.w */, Mips::PCNT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6751 /* pick.ph */, Mips::PICK_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6759 /* pick.qb */, Mips::PICK_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6767 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasCnMips, { MCK_GPR32AsmReg }, },
  { 6767 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6771 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6784 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6797 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6812 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6828 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6843 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6859 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6873 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6888 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6902 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6917 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6929 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6944 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6961 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6973 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6986 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7001 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7017 /* pref */, Mips::PREF, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 7017 /* pref */, Mips::PREF_MMR6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_Imm, MCK_Mem }, },
  { 7017 /* pref */, Mips::PREF_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 7017 /* pref */, Mips::PREF_MM, Convert__Mem2_1__Imm1_0, Feature_InMicroMips, { MCK_Imm, MCK_Mem }, },
  { 7022 /* prepend */, Mips::PREPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7030 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7041 /* rddsp */, Mips::RDDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7047 /* rdhwr */, Mips::RDHWR, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7047 /* rdhwr */, Mips::RDHWR_MM, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7053 /* repl.ph */, Mips::REPL_PH, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7061 /* repl.qb */, Mips::REPL_QB, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7069 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7078 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7087 /* rint.d */, Mips::RINT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7094 /* rint.s */, Mips::RINT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7101 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7101 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7101 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7101 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7106 /* rotrv */, Mips::ROTRV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7106 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7112 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7122 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7132 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 7132 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 7142 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7152 /* sat_s.b */, Mips::SAT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7160 /* sat_s.d */, Mips::SAT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7168 /* sat_s.h */, Mips::SAT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7176 /* sat_s.w */, Mips::SAT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7184 /* sat_u.b */, Mips::SAT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7192 /* sat_u.d */, Mips::SAT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7200 /* sat_u.h */, Mips::SAT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7208 /* sat_u.w */, Mips::SAT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7216 /* sb */, Mips::SB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7216 /* sb */, Mips::SB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7216 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7219 /* sb16 */, Mips::SB16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7224 /* sc */, Mips::SC, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7224 /* sc */, Mips::SC_R6, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7224 /* sc */, Mips::SC_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7227 /* scd */, Mips::SCD, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7227 /* scd */, Mips::SCD_R6, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7231 /* sd */, Mips::SD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7234 /* sdbbp */, Mips::SDBBP, Convert__imm_95_0, Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, {  }, },
  { 7234 /* sdbbp */, Mips::SDBBP_R6, Convert__imm_95_0, Feature_HasMips32r6, {  }, },
  { 7234 /* sdbbp */, Mips::SDBBP, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm }, },
  { 7234 /* sdbbp */, Mips::SDBBP_R6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm }, },
  { 7234 /* sdbbp */, Mips::SDBBP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 7240 /* sdbbp16 */, Mips::SDBBP16_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 7248 /* sdc1 */, Mips::SDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 7248 /* sdc1 */, Mips::SDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 7253 /* sdc2 */, Mips::SDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7253 /* sdc2 */, Mips::SDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 7258 /* sdc3 */, Mips::SDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 7263 /* sdl */, Mips::SDL, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7267 /* sdr */, Mips::SDR, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7271 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7271 /* sdxc1 */, Mips::SDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7277 /* seb */, Mips::SebRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7277 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7277 /* seb */, Mips::SEB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7277 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7281 /* seh */, Mips::SehRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7281 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7281 /* seh */, Mips::SEH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7281 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7285 /* sel.d */, Mips::SEL_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7291 /* sel.s */, Mips::SEL_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7297 /* seleqz */, Mips::SELEQZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7297 /* seleqz */, Mips::SELEQZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7297 /* seleqz */, Mips::SELEQZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7304 /* seleqz.d */, Mips::SELEQZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7313 /* seleqz.s */, Mips::SELEQZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7322 /* selnez */, Mips::SELNEZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7322 /* selnez */, Mips::SELNEZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7322 /* selnez */, Mips::SELNEZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7329 /* selnez.d */, Mips::SELNEZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7338 /* selnez.s */, Mips::SELNEZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7347 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7347 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7351 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7351 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7356 /* sh */, Mips::SH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7356 /* sh */, Mips::SH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7356 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7359 /* sh16 */, Mips::SH16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7364 /* shf.b */, Mips::SHF_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7370 /* shf.h */, Mips::SHF_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7376 /* shf.w */, Mips::SHF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7382 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 7388 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7395 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7403 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7411 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7421 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7430 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7439 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7448 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7459 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7469 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7477 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7485 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7495 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7505 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7514 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7523 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7532 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7543 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7554 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7564 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7572 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7580 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7589 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7598 /* sld.b */, Mips::SLD_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7604 /* sld.d */, Mips::SLD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7610 /* sld.h */, Mips::SLD_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7616 /* sld.w */, Mips::SLD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7622 /* sldi.b */, Mips::SLDI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7629 /* sldi.d */, Mips::SLDI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7636 /* sldi.h */, Mips::SLDI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7643 /* sldi.w */, Mips::SLDI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7650 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7650 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7650 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7650 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7650 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7650 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7654 /* sll.b */, Mips::SLL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7660 /* sll.d */, Mips::SLL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7666 /* sll.h */, Mips::SLL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7672 /* sll.w */, Mips::SLL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7678 /* sll16 */, Mips::SLL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7684 /* slli.b */, Mips::SLLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7691 /* slli.d */, Mips::SLLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7698 /* slli.h */, Mips::SLLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7705 /* slli.w */, Mips::SLLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7712 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7712 /* sllv */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7712 /* sllv */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7717 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7717 /* slt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7717 /* slt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7717 /* slt */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7721 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7721 /* slti */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7721 /* slti */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7721 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7726 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7726 /* sltiu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7726 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7726 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7732 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7732 /* sltu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7732 /* sltu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7732 /* sltu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7737 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7737 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7741 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7741 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7746 /* splat.b */, Mips::SPLAT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7754 /* splat.d */, Mips::SPLAT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7762 /* splat.h */, Mips::SPLAT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7770 /* splat.w */, Mips::SPLAT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7778 /* splati.b */, Mips::SPLATI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7787 /* splati.d */, Mips::SPLATI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7796 /* splati.h */, Mips::SPLATI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7805 /* splati.w */, Mips::SPLATI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7814 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7814 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7821 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7828 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7828 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7828 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7828 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7828 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7828 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7832 /* sra.b */, Mips::SRA_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7838 /* sra.d */, Mips::SRA_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7844 /* sra.h */, Mips::SRA_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7850 /* sra.w */, Mips::SRA_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7856 /* srai.b */, Mips::SRAI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7863 /* srai.d */, Mips::SRAI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7870 /* srai.h */, Mips::SRAI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7877 /* srai.w */, Mips::SRAI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7884 /* srar.b */, Mips::SRAR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7891 /* srar.d */, Mips::SRAR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7898 /* srar.h */, Mips::SRAR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7905 /* srar.w */, Mips::SRAR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7912 /* srari.b */, Mips::SRARI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7920 /* srari.d */, Mips::SRARI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7928 /* srari.h */, Mips::SRARI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7936 /* srari.w */, Mips::SRARI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7944 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7944 /* srav */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7944 /* srav */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7949 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7949 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7949 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7949 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7949 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7949 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7953 /* srl.b */, Mips::SRL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7959 /* srl.d */, Mips::SRL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7965 /* srl.h */, Mips::SRL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7971 /* srl.w */, Mips::SRL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7977 /* srl16 */, Mips::SRL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7983 /* srli.b */, Mips::SRLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7990 /* srli.d */, Mips::SRLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7997 /* srli.h */, Mips::SRLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8004 /* srli.w */, Mips::SRLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8011 /* srlr.b */, Mips::SRLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8018 /* srlr.d */, Mips::SRLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8025 /* srlr.h */, Mips::SRLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8032 /* srlr.w */, Mips::SRLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8039 /* srlri.b */, Mips::SRLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8047 /* srlri.d */, Mips::SRLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8055 /* srlri.h */, Mips::SRLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8063 /* srlri.w */, Mips::SRLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8071 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8071 /* srlv */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8071 /* srlv */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8076 /* ssnop */, Mips::SSNOP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8076 /* ssnop */, Mips::SSNOP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8082 /* st.b */, Mips::ST_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8087 /* st.d */, Mips::ST_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8092 /* st.h */, Mips::ST_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8097 /* st.w */, Mips::ST_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8102 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8102 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8102 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8106 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8106 /* sub.d */, Mips::FSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8112 /* sub.s */, Mips::FSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8118 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8126 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8136 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8145 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8154 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8162 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8173 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8183 /* subs_s.b */, Mips::SUBS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8192 /* subs_s.d */, Mips::SUBS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8201 /* subs_s.h */, Mips::SUBS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8210 /* subs_s.w */, Mips::SUBS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8219 /* subs_u.b */, Mips::SUBS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8228 /* subs_u.d */, Mips::SUBS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8237 /* subs_u.h */, Mips::SUBS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8246 /* subs_u.w */, Mips::SUBS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8255 /* subsus_u.b */, Mips::SUBSUS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8266 /* subsus_u.d */, Mips::SUBSUS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8277 /* subsus_u.h */, Mips::SUBSUS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8288 /* subsus_u.w */, Mips::SUBSUS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8299 /* subsuu_s.b */, Mips::SUBSUU_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8310 /* subsuu_s.d */, Mips::SUBSUU_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8321 /* subsuu_s.h */, Mips::SUBSUU_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8332 /* subsuu_s.w */, Mips::SUBSUU_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8343 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, 0, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8343 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8343 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8343 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8348 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8356 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8364 /* subu16 */, Mips::SUBU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8371 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8381 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8391 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8400 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8411 /* subv.b */, Mips::SUBV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8418 /* subv.d */, Mips::SUBV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8425 /* subv.h */, Mips::SUBV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8432 /* subv.w */, Mips::SUBV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8439 /* subvi.b */, Mips::SUBVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8447 /* subvi.d */, Mips::SUBVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8455 /* subvi.h */, Mips::SUBVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8463 /* subvi.w */, Mips::SUBVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8471 /* suxc1 */, Mips::SUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8471 /* suxc1 */, Mips::SUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8477 /* sw */, Mips::SWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8477 /* sw */, Mips::SW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8477 /* sw */, Mips::SW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8477 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 8477 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 8480 /* sw16 */, Mips::SW16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8485 /* swc1 */, Mips::SWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 8490 /* swc2 */, Mips::SWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8490 /* swc2 */, Mips::SWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 8495 /* swc3 */, Mips::SWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 8500 /* swl */, Mips::SWL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8500 /* swl */, Mips::SWL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8504 /* swm */, Mips::SWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8508 /* swm16 */, Mips::SWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8514 /* swm32 */, Mips::SWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8520 /* swp */, Mips::SWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 8524 /* swr */, Mips::SWR, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8524 /* swr */, Mips::SWR_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8528 /* swxc1 */, Mips::SWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8534 /* sync */, Mips::SYNC, Convert__imm_95_0, Feature_HasMips2, {  }, },
  { 8534 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32, { MCK_Imm }, },
  { 8534 /* sync */, Mips::SYNC_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8539 /* synci */, Mips::SYNCI, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_MemOffsetSimm16 }, },
  { 8545 /* synciobdma */, Mips::SYNC, Convert__imm_95_2, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8556 /* syncs */, Mips::SYNC, Convert__imm_95_6, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8562 /* syncw */, Mips::SYNC, Convert__imm_95_4, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8568 /* syncws */, Mips::SYNC, Convert__imm_95_5, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8575 /* syscall */, Mips::SYSCALL, Convert__imm_95_0, 0, {  }, },
  { 8575 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 8575 /* syscall */, Mips::SYSCALL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8583 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8583 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8583 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8587 /* teqi */, Mips::TEQI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8587 /* teqi */, Mips::TEQI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8592 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8592 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8592 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8596 /* tgei */, Mips::TGEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8596 /* tgei */, Mips::TGEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8601 /* tgeiu */, Mips::TGEIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8601 /* tgeiu */, Mips::TGEIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8607 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8607 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8607 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8612 /* tlbp */, Mips::TLBP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8612 /* tlbp */, Mips::TLBP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8617 /* tlbr */, Mips::TLBR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8617 /* tlbr */, Mips::TLBR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8622 /* tlbwi */, Mips::TLBWI, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8622 /* tlbwi */, Mips::TLBWI_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8628 /* tlbwr */, Mips::TLBWR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8628 /* tlbwr */, Mips::TLBWR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8634 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8634 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8634 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8638 /* tlti */, Mips::TLTI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8638 /* tlti */, Mips::TLTI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8643 /* tltiu */, Mips::TTLTIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8643 /* tltiu */, Mips::TLTIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8649 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8649 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8649 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8654 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8654 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8654 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8658 /* tnei */, Mips::TNEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8658 /* tnei */, Mips::TNEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8663 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8673 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 8683 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 8683 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 8693 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8703 /* ulhu */, Mips::Ulhu, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8708 /* ulw */, Mips::Ulw, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8712 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8712 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8719 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8719 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8724 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8724 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8730 /* vshf.b */, Mips::VSHF_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8737 /* vshf.d */, Mips::VSHF_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8744 /* vshf.h */, Mips::VSHF_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8751 /* vshf.w */, Mips::VSHF_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8758 /* wait */, Mips::WAIT, Convert_NoOperands, Feature_NotInMicroMips, {  }, },
  { 8758 /* wait */, Mips::WAIT_MM, Convert__imm_95_0, Feature_InMicroMips, {  }, },
  { 8758 /* wait */, Mips::WAIT_MM, Convert__UImm101_0, Feature_InMicroMips, { MCK_UImm10 }, },
  { 8763 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8769 /* wsbh */, Mips::WSBH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8769 /* wsbh */, Mips::WSBH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8774 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8774 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8774 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8778 /* xor.v */, Mips::XOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8784 /* xor16 */, Mips::XOR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8790 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8790 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8790 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8790 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8790 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8790 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8795 /* xori.b */, Mips::XORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 9) {
    ErrorInfo = 9;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 8; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[1918] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 0 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 0 /* abs.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 12 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 22 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 32 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 45 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 45 /* add.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 51 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 57 /* add_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 65 /* add_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 73 /* add_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 81 /* add_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 100 /* addiupc */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 108 /* addiur1sp */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 118 /* addiur2 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 126 /* addius5 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 142 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 150 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 160 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 169 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 178 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 186 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 197 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 207 /* adds_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 216 /* adds_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 225 /* adds_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 234 /* adds_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 243 /* adds_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 252 /* adds_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 261 /* adds_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 270 /* adds_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 279 /* adds_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 288 /* adds_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 297 /* adds_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 306 /* adds_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 315 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 326 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 334 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 342 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 349 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 359 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 369 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 378 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 389 /* addv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 396 /* addv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 403 /* addv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 410 /* addv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 417 /* addvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 425 /* addvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 433 /* addvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 441 /* addvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 449 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 472 /* and.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 478 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 489 /* andi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 496 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 503 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 510 /* asub_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 519 /* asub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 528 /* asub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 537 /* asub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 546 /* asub_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 555 /* asub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 564 /* asub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 573 /* asub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 582 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 582 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 586 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 586 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 592 /* ave_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 600 /* ave_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 608 /* ave_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 616 /* ave_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 624 /* ave_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 632 /* ave_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 640 /* ave_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 648 /* ave_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 656 /* aver_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 665 /* aver_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 674 /* aver_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 683 /* aver_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 692 /* aver_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 701 /* aver_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 710 /* aver_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 719 /* aver_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotInMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 730 /* b16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 744 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 744 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR2, 749 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 784 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 784 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 787 /* bc1eqz */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 787 /* bc1eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 794 /* bc1f */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 794 /* bc1f */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 794 /* bc1f */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1fl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1fl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1fl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 805 /* bc1nez */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 805 /* bc1nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 812 /* bc1t */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 812 /* bc1t */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 812 /* bc1t */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1tl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1tl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1tl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 823 /* bc2eqz */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 823 /* bc2eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 830 /* bc2nez */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 830 /* bc2nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 837 /* bclr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 844 /* bclr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 851 /* bclr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 858 /* bclr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 865 /* bclri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 873 /* bclri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 881 /* bclri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 889 /* bclri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 897 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 897 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 897 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 897 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 897 /* beq */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 897 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 901 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 901 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 906 /* beql */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 906 /* beql */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 911 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 916 /* beqz16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 916 /* beqz16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 923 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 923 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 923 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 923 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 931 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 931 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 931 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 931 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 937 /* beqzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 937 /* beqzl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 943 /* bge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 943 /* bge */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 947 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 947 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 952 /* bgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 952 /* bgeu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 957 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 957 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 963 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 963 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 963 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 963 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 968 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 968 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 968 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 968 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 975 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 975 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 975 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 975 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 983 /* bgezall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 983 /* bgezall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 991 /* bgezals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 991 /* bgezals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 999 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 999 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1005 /* bgezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1005 /* bgezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1011 /* bgt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1011 /* bgt */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1015 /* bgtu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1015 /* bgtu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1020 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1020 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1020 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1020 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1025 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1025 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1025 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1025 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1033 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1033 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1045 /* binsl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1053 /* binsl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1061 /* binsl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1069 /* binsl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1077 /* binsli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1086 /* binsli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1095 /* binsli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1104 /* binsli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1113 /* binsr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1121 /* binsr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1129 /* binsr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1137 /* binsr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1145 /* binsri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1154 /* binsri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1163 /* binsri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1172 /* binsri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1181 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1188 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1188 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1196 /* ble */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1196 /* ble */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1200 /* bleu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1200 /* bleu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1205 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1205 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1205 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1205 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1210 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1210 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1210 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1210 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1218 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1218 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1224 /* blezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1224 /* blezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1230 /* blt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1230 /* blt */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1234 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1234 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1239 /* bltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1239 /* bltu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1244 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1244 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1250 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1250 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1250 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1250 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1255 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1255 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1255 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1255 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1262 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1262 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1262 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1262 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1270 /* bltzall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1270 /* bltzall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1278 /* bltzals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1278 /* bltzals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1286 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1286 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1292 /* bltzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1292 /* bltzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1298 /* bmnz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1305 /* bmnzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1313 /* bmz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1319 /* bmzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1326 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1326 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 1326 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1326 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1326 /* bne */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1326 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1330 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1330 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1335 /* bneg.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1342 /* bneg.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1349 /* bneg.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1356 /* bneg.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1363 /* bnegi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1371 /* bnegi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1379 /* bnegi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1387 /* bnegi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1395 /* bnel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1395 /* bnel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 1400 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1400 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1400 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 1400 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1405 /* bnez16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1405 /* bnez16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1412 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1412 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1412 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1412 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1420 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1420 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1420 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1420 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1426 /* bnezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1426 /* bnezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1432 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1432 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1437 /* bnz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1437 /* bnz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1443 /* bnz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1443 /* bnz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1449 /* bnz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1449 /* bnz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1455 /* bnz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1455 /* bnz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1461 /* bnz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1461 /* bnz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1467 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1467 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasDSP, 1472 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 1481 /* break */, MCK_UImm10, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 1481 /* break */, MCK_UImm10, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1481 /* break */, MCK_UImm10, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1481 /* break */, MCK_UImm10, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1495 /* bsel.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1502 /* bseli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1510 /* bset.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1517 /* bset.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1524 /* bset.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1531 /* bset.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1538 /* bseti.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1546 /* bseti.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1554 /* bseti.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1562 /* bseti.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1582 /* bz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1582 /* bz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1587 /* bz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1587 /* bz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1592 /* bz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1592 /* bz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1597 /* bz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1597 /* bz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1602 /* bz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1602 /* bz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1607 /* c.eq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1607 /* c.eq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1614 /* c.eq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1621 /* c.f.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1621 /* c.f.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1627 /* c.f.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1633 /* c.le.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1633 /* c.le.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1640 /* c.le.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1647 /* c.lt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1647 /* c.lt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1654 /* c.lt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1661 /* c.nge.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1661 /* c.nge.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1669 /* c.nge.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1677 /* c.ngl.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1677 /* c.ngl.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1685 /* c.ngl.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1693 /* c.ngle.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1693 /* c.ngle.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1702 /* c.ngle.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1711 /* c.ngt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1711 /* c.ngt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1719 /* c.ngt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1727 /* c.ole.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1727 /* c.ole.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1735 /* c.ole.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1743 /* c.olt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1743 /* c.olt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1751 /* c.olt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1759 /* c.seq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1759 /* c.seq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1767 /* c.seq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1775 /* c.sf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1775 /* c.sf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1782 /* c.sf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1789 /* c.ueq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1789 /* c.ueq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1797 /* c.ueq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1805 /* c.ule.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1805 /* c.ule.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1813 /* c.ule.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1821 /* c.ult.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1821 /* c.ult.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1829 /* c.ult.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1837 /* c.un.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1837 /* c.un.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1844 /* c.un.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 1851 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1851 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1851 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1851 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 1857 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 1866 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 1866 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1875 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1875 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1875 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1875 /* ceil.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 1884 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1893 /* ceq.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1899 /* ceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1905 /* ceq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1911 /* ceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1917 /* ceqi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1924 /* ceqi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1931 /* ceqi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1938 /* ceqi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 1945 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 1945 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1950 /* cfcmsa */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1950 /* cfcmsa */, MCK_MSACtrlAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 1957 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1957 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 1962 /* cins32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1962 /* cins32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 1969 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 1977 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1985 /* cle_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1993 /* cle_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2001 /* cle_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2009 /* cle_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2017 /* cle_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2025 /* cle_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2033 /* cle_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2041 /* cle_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2049 /* clei_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2058 /* clei_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2067 /* clei_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2076 /* clei_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2085 /* clei_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2094 /* clei_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2103 /* clei_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2112 /* clei_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2121 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2121 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2121 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2121 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2125 /* clt_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2133 /* clt_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2141 /* clt_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2149 /* clt_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2157 /* clt_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2165 /* clt_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2173 /* clt_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2181 /* clt_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2189 /* clti_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2198 /* clti_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2207 /* clti_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2216 /* clti_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2225 /* clti_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2234 /* clti_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2243 /* clti_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2252 /* clti_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2261 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2261 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2261 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2261 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2269 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2269 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2278 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2287 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2287 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2296 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2306 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2315 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2315 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2324 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2334 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2343 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2343 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2352 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2362 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2371 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2371 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2381 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2391 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2391 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2401 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2411 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2411 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2421 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2431 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2431 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2441 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2451 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2451 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2462 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2473 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2473 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2484 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2495 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2495 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2506 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2517 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2517 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2527 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2537 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2537 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2547 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2557 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2557 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2567 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2577 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2577 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2587 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2597 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2597 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 2606 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2615 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2628 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2641 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2654 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2666 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2678 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2695 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2706 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2717 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2728 /* copy_s.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2728 /* copy_s.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2737 /* copy_s.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2737 /* copy_s.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2746 /* copy_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2746 /* copy_s.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2755 /* copy_s.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2755 /* copy_s.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2764 /* copy_u.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2764 /* copy_u.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2773 /* copy_u.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2773 /* copy_u.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2782 /* copy_u.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2782 /* copy_u.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2791 /* copy_u.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2791 /* copy_u.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2800 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2800 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2805 /* ctcmsa */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2805 /* ctcmsa */, MCK_MSACtrlAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2812 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2820 /* cvt.d.s */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2820 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2820 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2820 /* cvt.d.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2828 /* cvt.d.w */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2828 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2828 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2828 /* cvt.d.w */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat, 2836 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat, 2844 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat, 2844 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2852 /* cvt.s.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2852 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2852 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2852 /* cvt.s.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2860 /* cvt.s.l */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2860 /* cvt.s.l */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2868 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2876 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2876 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2876 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2876 /* cvt.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2884 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2892 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2892 /* dadd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2892 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2892 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2897 /* daddi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2897 /* daddi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2903 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2903 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2910 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 2910 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2910 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 2910 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2916 /* dahi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2921 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2928 /* dati */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2933 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2938 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2947 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2947 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2952 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2952 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2957 /* ddiv */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2957 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2962 /* ddivu */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2962 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2974 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2979 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2985 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2991 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 2991 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2994 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2999 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3005 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3011 /* div */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 3011 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3011 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3011 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3011 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 3015 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 3015 /* div.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 3021 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3027 /* div_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3035 /* div_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3043 /* div_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3051 /* div_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3059 /* div_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3067 /* div_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3075 /* div_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3083 /* div_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3091 /* divu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 3091 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3091 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3091 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3091 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3096 /* dli */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3100 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 3100 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 3100 /* dlsa */, MCK_LSAImm, 8 /* 3 */ },
  { 0, 3105 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 3105 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3105 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3105 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3111 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3111 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3117 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3117 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3117 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3117 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3117 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3123 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3128 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3134 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 3134 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3134 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3134 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3140 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3140 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3146 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3146 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3146 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3146 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3146 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3152 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3157 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3163 /* dmul */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3163 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3163 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3168 /* dmult */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3174 /* dmultu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3181 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3187 /* dneg */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3187 /* dneg */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3192 /* dnegu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3198 /* dotp_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3207 /* dotp_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3216 /* dotp_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3225 /* dotp_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3234 /* dotp_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3243 /* dotp_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3252 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3252 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3261 /* dpadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3271 /* dpadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3281 /* dpadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3291 /* dpadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3301 /* dpadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3311 /* dpadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 3321 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3321 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3333 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3333 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3345 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3345 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3358 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3358 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3372 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3372 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3383 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3383 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3394 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3394 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasCnMips, 3404 /* dpop */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3404 /* dpop */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 3409 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3409 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3418 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3418 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3430 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3430 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3442 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3442 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3455 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3455 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3469 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3469 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3480 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3480 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3491 /* dpsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3501 /* dpsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3511 /* dpsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3521 /* dpsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3531 /* dpsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3541 /* dpsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3551 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3551 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3561 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3561 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3567 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3567 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3575 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3575 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3582 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3587 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3592 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3592 /* dsll */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3592 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3592 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3597 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3597 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3604 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3604 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3610 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3610 /* dsra */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3610 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3610 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3615 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3615 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3622 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3622 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3628 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3628 /* dsrl */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3628 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3628 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3633 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3633 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3640 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3640 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3646 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3646 /* dsub */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3646 /* dsub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3646 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3646 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3646 /* dsub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3651 /* dsubi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3651 /* dsubi */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3651 /* dsubi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3651 /* dsubi */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3657 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3657 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3657 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3657 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3657 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3657 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3667 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3667 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3667 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3682 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 3682 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 3686 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3686 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3691 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3691 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3698 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3698 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3706 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3706 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3712 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3712 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3719 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3719 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3728 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3728 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3738 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3738 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3747 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3747 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3755 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3755 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3765 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3765 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3776 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3776 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasCnMips, 3786 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3786 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3791 /* exts32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3791 /* exts32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3798 /* fadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3805 /* fadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3812 /* fcaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3819 /* fcaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3826 /* fceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3833 /* fceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3840 /* fclass.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3849 /* fclass.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3858 /* fcle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3865 /* fcle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3872 /* fclt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3879 /* fclt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3886 /* fcne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3893 /* fcne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3900 /* fcor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3907 /* fcor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3914 /* fcueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3922 /* fcueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3930 /* fcule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3938 /* fcule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3946 /* fcult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3954 /* fcult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3962 /* fcun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3969 /* fcun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3976 /* fcune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3984 /* fcune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3992 /* fdiv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3999 /* fdiv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4006 /* fexdo.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4014 /* fexdo.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4022 /* fexp2.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4030 /* fexp2.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4038 /* fexupl.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4047 /* fexupl.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4056 /* fexupr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4065 /* fexupr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4074 /* ffint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4084 /* ffint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4094 /* ffint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4104 /* ffint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4114 /* ffql.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4121 /* ffql.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4128 /* ffqr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4135 /* ffqr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4142 /* fill.b */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4142 /* fill.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4149 /* fill.d */, MCK_GPR64AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 4149 /* fill.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4156 /* fill.h */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4156 /* fill.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4163 /* fill.w */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4163 /* fill.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4170 /* flog2.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4178 /* flog2.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 4186 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 4196 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 4196 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4206 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4206 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4206 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4206 /* floor.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 4216 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4226 /* fmadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4234 /* fmadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4242 /* fmax.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4249 /* fmax.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4256 /* fmax_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4265 /* fmax_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4274 /* fmin.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4281 /* fmin.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4288 /* fmin_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4297 /* fmin_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4306 /* fmsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4314 /* fmsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4322 /* fmul.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4329 /* fmul.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4336 /* frcp.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4343 /* frcp.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4350 /* frint.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4358 /* frint.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4366 /* frsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4375 /* frsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4384 /* fsaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4391 /* fsaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4398 /* fseq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4405 /* fseq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4412 /* fsle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4419 /* fsle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4426 /* fslt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4433 /* fslt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4440 /* fsne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4447 /* fsne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4454 /* fsor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4461 /* fsor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4468 /* fsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4476 /* fsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4484 /* fsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4491 /* fsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4498 /* fsueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4506 /* fsueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4514 /* fsule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4522 /* fsule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4530 /* fsult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4538 /* fsult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4546 /* fsun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4553 /* fsun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4560 /* fsune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4568 /* fsune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4576 /* ftint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4586 /* ftint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4596 /* ftint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4606 /* ftint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4616 /* ftq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4622 /* ftq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4628 /* ftrunc_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4639 /* ftrunc_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4650 /* ftrunc_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4661 /* ftrunc_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4672 /* hadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4681 /* hadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4690 /* hadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4699 /* hadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4708 /* hadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4717 /* hadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4726 /* hsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4735 /* hsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4744 /* hsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4753 /* hsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4762 /* hsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4771 /* hsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4780 /* ilvev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4788 /* ilvev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4796 /* ilvev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4804 /* ilvev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4812 /* ilvl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4819 /* ilvl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4826 /* ilvl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4833 /* ilvl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4840 /* ilvod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4848 /* ilvod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4856 /* ilvod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4864 /* ilvod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4872 /* ilvr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4879 /* ilvr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4886 /* ilvr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4893 /* ilvr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 4900 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4900 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4904 /* insert.b */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4904 /* insert.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4913 /* insert.d */, MCK_GPR64AsmReg, 16 /* 4 */ },
  { Feature_HasMSA|Feature_HasMips64, 4913 /* insert.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4922 /* insert.h */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4922 /* insert.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4931 /* insert.w */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4931 /* insert.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 4940 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4945 /* insve.b */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4953 /* insve.d */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4961 /* insve.h */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4969 /* insve.w */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { 0, 4977 /* j */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4977 /* j */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4979 /* jal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4979 /* jal */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4979 /* jal */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4983 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 4983 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 4983 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4983 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32, 4988 /* jalr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 4988 /* jalr.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5002 /* jalrs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5008 /* jalrs16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5021 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 5021 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5026 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5026 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5026 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5026 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5032 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5032 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5032 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5032 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc, 5036 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5036 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips32r6, 5036 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 5036 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5039 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5039 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5045 /* jr16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5060 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5064 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5064 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5064 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5067 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5067 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5067 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5067 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5070 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5070 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5070 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5070 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5074 /* lbu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5074 /* lbu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasDSP, 5080 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5085 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5085 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5088 /* ld.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5088 /* ld.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5093 /* ld.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5093 /* ld.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5098 /* ld.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5098 /* ld.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5103 /* ld.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5103 /* ld.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5108 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5108 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5108 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5108 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5113 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5113 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5113 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5113 /* ldc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5118 /* ldc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5118 /* ldc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5123 /* ldi.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5129 /* ldi.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5135 /* ldi.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5141 /* ldi.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5147 /* ldl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5147 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5151 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5151 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5156 /* ldr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5156 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5160 /* ldxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5160 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5160 /* ldxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5160 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 5166 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5166 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5166 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5166 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5169 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5169 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5169 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5169 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5173 /* lhu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5173 /* lhu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasDSP, 5179 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { 0, 5183 /* li */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5186 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5191 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5191 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5191 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5191 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5191 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5191 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5194 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5194 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5194 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5194 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5198 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5198 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5198 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5198 /* lsa */, MCK_LSAImm, 8 /* 3 */ },
  { Feature_HasStdEnc, 5202 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5202 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5206 /* luxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5206 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5206 /* luxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5206 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5212 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5212 /* lw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5212 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5212 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5212 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5212 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5212 /* lw */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5215 /* lw16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5215 /* lw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5220 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5220 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5225 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5225 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5225 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5225 /* lwc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5230 /* lwc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5230 /* lwc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5235 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5235 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5235 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5235 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5239 /* lwm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5239 /* lwm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 5243 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips, 5243 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 5249 /* lwm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5249 /* lwm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 5255 /* lwp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5255 /* lwp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5259 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5259 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5259 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5259 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5264 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5264 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5264 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5264 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5268 /* lwu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5268 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5268 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5268 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5272 /* lwupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5272 /* lwupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasDSP, 5278 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5282 /* lwxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5282 /* lwxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5288 /* lwxs */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5293 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5293 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5293 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5293 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5298 /* madd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5298 /* madd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5305 /* madd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 5312 /* madd_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5321 /* madd_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5330 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5338 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5346 /* maddr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5356 /* maddr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5366 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5366 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5366 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5366 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 5372 /* maddv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5380 /* maddv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5388 /* maddv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5396 /* maddv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5404 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5404 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5416 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5416 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5428 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5428 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5441 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5441 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5454 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5460 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5466 /* max_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5474 /* max_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5482 /* max_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5490 /* max_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5498 /* max_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5506 /* max_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5514 /* max_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5522 /* max_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5530 /* max_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5538 /* max_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5546 /* max_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5554 /* max_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5562 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5569 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5576 /* maxi_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5585 /* maxi_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5594 /* maxi_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5603 /* maxi_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5612 /* maxi_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5621 /* maxi_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5630 /* maxi_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5639 /* maxi_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 5648 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 5648 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5648 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5648 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5653 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5653 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5658 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 5658 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5658 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 5658 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5663 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5663 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5663 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5663 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5669 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5669 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5669 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5669 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5669 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5674 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5674 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5674 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5674 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5674 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5679 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5685 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5691 /* min_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5699 /* min_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5707 /* min_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5715 /* min_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5723 /* min_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5731 /* min_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5739 /* min_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5747 /* min_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5755 /* min_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5763 /* min_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5771 /* min_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5779 /* min_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5787 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 5794 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5801 /* mini_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5810 /* mini_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5819 /* mini_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5828 /* mini_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5837 /* mini_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5846 /* mini_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5855 /* mini_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5864 /* mini_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5873 /* mod */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5873 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5873 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5877 /* mod_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5885 /* mod_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5893 /* mod_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5901 /* mod_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5909 /* mod_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5917 /* mod_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5925 /* mod_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5933 /* mod_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5941 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5948 /* modu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5948 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5948 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 5953 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 5953 /* mov.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5959 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 5965 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5965 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit, 5965 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5970 /* move.v */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5977 /* movep */, MCK_GPRMM16AsmRegMoveP, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 5977 /* movep */, MCK_MovePRegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5983 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5983 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5983 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 5983 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5988 /* movf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5988 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5988 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5988 /* movf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5995 /* movf.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5995 /* movf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6002 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6002 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6007 /* movn.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6007 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6007 /* movn.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6007 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6014 /* movn.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6014 /* movn.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6021 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6021 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6021 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 6021 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6026 /* movt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6026 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6026 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6026 /* movt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6033 /* movt.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6033 /* movt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6040 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6040 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6045 /* movz.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6045 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6045 /* movz.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6045 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6052 /* movz.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6052 /* movz.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6059 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6059 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6059 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6059 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6064 /* msub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6064 /* msub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6071 /* msub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 6078 /* msub_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6087 /* msub_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 6096 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 6104 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6112 /* msubr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6122 /* msubr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6132 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6132 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6132 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6132 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 6138 /* msubv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6146 /* msubv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6154 /* msubv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6162 /* msubv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6170 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 6170 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 6170 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 6170 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6175 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6175 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6180 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 6180 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6180 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 6180 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6185 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6185 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6185 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6185 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6191 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6191 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6191 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6191 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6196 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6196 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6203 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6203 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6203 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6203 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 6208 /* mtm0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6213 /* mtm1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6218 /* mtm2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6223 /* mtp0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6228 /* mtp1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6233 /* mtp2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6238 /* muh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6238 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6238 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6242 /* muhu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6242 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6242 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6247 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6247 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6247 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6247 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6247 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6247 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6247 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6251 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6251 /* mul.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6257 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6264 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6270 /* mul_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6278 /* mul_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6286 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6295 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6309 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6323 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6338 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6353 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6364 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6374 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6384 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6393 /* mulr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6402 /* mulr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6411 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 6411 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6422 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6422 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6436 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6436 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6436 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6436 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6441 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6441 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6441 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6441 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6447 /* mulu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6447 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6447 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6452 /* mulv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6459 /* mulv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6466 /* mulv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6473 /* mulv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6480 /* neg */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6484 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6484 /* neg.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6490 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6496 /* negu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6496 /* negu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6501 /* nloc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6508 /* nloc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6515 /* nloc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6522 /* nloc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6529 /* nlzc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6536 /* nlzc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6543 /* nlzc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6550 /* nlzc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6557 /* nmadd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6557 /* nmadd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6565 /* nmadd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6573 /* nmsub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6573 /* nmsub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6581 /* nmsub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6593 /* nor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6593 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 6593 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6593 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6597 /* nor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6603 /* nori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 6610 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6614 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6620 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6620 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6620 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6620 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6620 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6620 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6620 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6620 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6623 /* or.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6628 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6633 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6633 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6633 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6633 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6633 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6633 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6637 /* ori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6643 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6659 /* pckev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6667 /* pckev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6675 /* pckev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6683 /* pckev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6691 /* pckod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6699 /* pckod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6707 /* pckod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6715 /* pckod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6723 /* pcnt.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6730 /* pcnt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6737 /* pcnt.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6744 /* pcnt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6751 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6759 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 6767 /* pop */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6767 /* pop */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6771 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6784 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6797 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6812 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6828 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6843 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6859 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6873 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6888 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6902 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6917 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6929 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6944 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6961 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6973 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6986 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7001 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 7017 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7017 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7017 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7017 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSPR2, 7022 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7030 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7041 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7047 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7047 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_InMicroMips, 7047 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7047 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7053 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7061 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7069 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7078 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7087 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7094 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7101 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7101 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7101 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7101 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7106 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7106 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 7112 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 7122 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 7122 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7132 /* round.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7132 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7132 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7132 /* round.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 7142 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7152 /* sat_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7160 /* sat_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7168 /* sat_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7176 /* sat_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7184 /* sat_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7192 /* sat_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7200 /* sat_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7208 /* sat_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7216 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7216 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7216 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7216 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7219 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7219 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7224 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7224 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7224 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7224 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7224 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7224 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7227 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7227 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7227 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7227 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7231 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7231 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7248 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7248 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7248 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7248 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7253 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7253 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7253 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7253 /* sdc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7258 /* sdc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7258 /* sdc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7263 /* sdl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7263 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7267 /* sdr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7267 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7271 /* sdxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7271 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7271 /* sdxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7271 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7277 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7277 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7277 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7281 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7281 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7281 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7285 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7291 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7297 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7297 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7297 /* seleqz */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7304 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7313 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7322 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7322 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7322 /* selnez */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7329 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 7338 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7347 /* seq */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7347 /* seq */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7351 /* seqi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7351 /* seqi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7356 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7356 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7356 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7356 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7359 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7359 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMSA, 7364 /* shf.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7370 /* shf.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7376 /* shf.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7382 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7388 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7388 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7395 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7403 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7411 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7421 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7430 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7439 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7448 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7459 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7469 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7477 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7485 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7495 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7505 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7514 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7523 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7532 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7543 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7554 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7564 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7572 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7580 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7589 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7598 /* sld.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7598 /* sld.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7604 /* sld.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7604 /* sld.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7610 /* sld.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7610 /* sld.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7616 /* sld.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7616 /* sld.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7622 /* sldi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7629 /* sldi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7636 /* sldi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7643 /* sldi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7650 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7650 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7650 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7650 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7650 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7654 /* sll.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7660 /* sll.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7666 /* sll.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7672 /* sll.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7678 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7684 /* slli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7691 /* slli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7698 /* slli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7705 /* slli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7712 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7712 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7717 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7717 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7717 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7721 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7721 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7726 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7726 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7732 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7732 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7732 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7737 /* sne */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7737 /* sne */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7741 /* snei */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7741 /* snei */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7746 /* splat.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7746 /* splat.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7754 /* splat.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7754 /* splat.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7762 /* splat.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7762 /* splat.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7770 /* splat.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7770 /* splat.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7778 /* splati.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7787 /* splati.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7796 /* splati.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7805 /* splati.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7814 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7814 /* sqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 7821 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7828 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7828 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7828 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7828 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7828 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7832 /* sra.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7838 /* sra.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7844 /* sra.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7850 /* sra.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7856 /* srai.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7863 /* srai.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7870 /* srai.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7877 /* srai.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7884 /* srar.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7891 /* srar.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7898 /* srar.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7905 /* srar.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7912 /* srari.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7920 /* srari.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7928 /* srari.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7936 /* srari.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7944 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7944 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7949 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7949 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7949 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7949 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7949 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7953 /* srl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7959 /* srl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7965 /* srl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7971 /* srl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7977 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7983 /* srli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7990 /* srli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7997 /* srli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8004 /* srli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8011 /* srlr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8018 /* srlr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8025 /* srlr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8032 /* srlr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8039 /* srlri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8047 /* srlri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8055 /* srlri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8063 /* srlri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8071 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8071 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8082 /* st.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8082 /* st.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8087 /* st.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8087 /* st.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8092 /* st.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8092 /* st.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8097 /* st.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8097 /* st.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8102 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8102 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8102 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8102 /* sub */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8102 /* sub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8102 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 8102 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8102 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8102 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8102 /* sub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 8106 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8106 /* sub.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8112 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8118 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8126 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8136 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8145 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8154 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8162 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8173 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8183 /* subs_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8192 /* subs_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8201 /* subs_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8210 /* subs_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8219 /* subs_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8228 /* subs_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8237 /* subs_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8246 /* subs_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8255 /* subsus_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8266 /* subsus_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8277 /* subsus_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8288 /* subsus_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8299 /* subsuu_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8310 /* subsuu_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8321 /* subsuu_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8332 /* subsuu_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8343 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8343 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8343 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8343 /* subu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8343 /* subu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8343 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8343 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8343 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8343 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8343 /* subu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasDSPR2, 8348 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8356 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8364 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8371 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8381 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8391 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8400 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8411 /* subv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8418 /* subv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8425 /* subv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8432 /* subv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8439 /* subvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8447 /* subvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8455 /* subvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8463 /* subvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8471 /* suxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8471 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8471 /* suxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8471 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 8477 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8477 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8477 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8477 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8477 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8477 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8480 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 8480 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8485 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8485 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8490 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8490 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8490 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8490 /* swc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8495 /* swc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8495 /* swc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8500 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8500 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8500 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8500 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8504 /* swm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8504 /* swm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 8508 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips, 8508 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 8514 /* swm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8514 /* swm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 8520 /* swp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8520 /* swp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8524 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8524 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8524 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8524 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8528 /* swxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8528 /* swxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8539 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasMips2, 8583 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8583 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8583 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8587 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8587 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8592 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8592 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8592 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8596 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8596 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8601 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8601 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8607 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8607 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8607 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8634 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8634 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8634 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8638 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8638 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8643 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8643 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8649 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8649 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8649 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8654 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8654 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8654 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8658 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8658 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8663 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8673 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8673 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8683 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8683 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8683 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8683 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 8693 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8703 /* ulhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8703 /* ulhu */, MCK_Mem, 2 /* 1 */ },
  { 0, 8708 /* ulw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8708 /* ulw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasCnMips, 8712 /* v3mulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8712 /* v3mulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8719 /* vmm0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8719 /* vmm0 */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8724 /* vmulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8724 /* vmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8730 /* vshf.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8737 /* vshf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8744 /* vshf.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8751 /* vshf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8758 /* wait */, MCK_UImm10, 1 /* 0 */ },
  { Feature_HasDSP, 8763 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8769 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8769 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8774 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8774 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8774 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8774 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8774 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8774 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8774 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8774 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8778 /* xor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8784 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8790 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8790 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8790 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8790 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8790 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8790 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8795 /* xori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_AFGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_CCRAsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP0AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP2AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP3AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FCCAsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGRH32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegMoveP:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegZero:
    return parseAnyRegister(Operands);
  case MCK_HI32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_HWRegsAsmReg:
    return parseAnyRegister(Operands);
  case MCK_LO32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSA128AsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSACtrlAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MicroMipsMem:
    return parseMemOperand(Operands);
  case MCK_MicroMipsMemSP:
    return parseMemOperand(Operands);
  case MCK_InvNum:
    return parseInvNum(Operands);
  case MCK_JumpTarget:
    return parseJumpTarget(Operands);
  case MCK_MemOffsetSimm11:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm16:
    return parseMemOperand(Operands);
  case MCK_MemOffsetUimm4:
    return parseMemOperand(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  case MCK_UImm10:
    return parseImm(Operands);
  case MCK_MovePRegPair:
    return parseMovePRegPair(Operands);
  case MCK_RegList16:
    return parseRegisterList(Operands);
  case MCK_RegList:
    return parseRegisterList(Operands);
  case MCK_RegPair:
    return parseRegisterPair(Operands);
  case MCK_LSAImm:
    return parseLSAImm(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1918, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

