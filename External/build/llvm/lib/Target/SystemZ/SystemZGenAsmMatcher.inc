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
enum SubtargetFeatureFlag : uint16_t {
  Feature_FeatureDistinctOps = (1ULL << 0),
  Feature_FeatureLoadStoreOnCond = (1ULL << 5),
  Feature_FeatureHighWord = (1ULL << 3),
  Feature_FeatureFPExtension = (1ULL << 1),
  Feature_FeaturePopulationCount = (1ULL << 7),
  Feature_FeatureFastSerialization = (1ULL << 2),
  Feature_FeatureInterlockedAccess1 = (1ULL << 4),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 6),
  Feature_FeatureTransactionalExecution = (1ULL << 9),
  Feature_FeatureProcessorAssist = (1ULL << 8),
  Feature_FeatureVector = (1ULL << 10),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeaturePopulationCount: return "population-count";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureProcessorAssist: return "processor-assist";
  case Feature_FeatureVector: return "vector";
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
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__GR321_0,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0,
  Convert_NoOperands,
  Convert__GRH321_0__U16Imm1_1,
  Convert__GR321_0__U16Imm1_1,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR641_0__VR641_1,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addAccessRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    return B == MCK_VR64Bit;

  case MCK_VF128Bit:
    return B == MCK_VR128Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDLAddr64Disp12Len8' class
  if (Kind == MCK_BDLAddr64Disp12Len8) {
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDVAddr64Disp12' class
  if (Kind == MCK_BDVAddr64Disp12) {
    if (Operand.isBDVAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRH32' class
  if (Kind == MCK_GRH32) {
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRX32' class
  if (Kind == MCK_GRX32) {
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel16' class
  if (Kind == MCK_PCRel16) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel32' class
  if (Kind == MCK_PCRel32) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRelTLS16' class
  if (Kind == MCK_PCRelTLS16) {
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRelTLS32' class
  if (Kind == MCK_PCRelTLS32) {
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U12Imm' class
  if (Kind == MCK_U12Imm) {
    if (Operand.isU12Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U1Imm' class
  if (Kind == MCK_U1Imm) {
    if (Operand.isU1Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U2Imm' class
  if (Kind == MCK_U2Imm) {
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U3Imm' class
  if (Kind == MCK_U3Imm) {
    if (Operand.isU3Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VF128' class
  if (Kind == MCK_VF128) {
    if (Operand.isVF128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VR128' class
  if (Kind == MCK_VR128) {
    if (Operand.isVR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VR32' class
  if (Kind == MCK_VR32) {
    if (Operand.isVR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VR64' class
  if (Kind == MCK_VR64) {
    if (Operand.isVR64())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[SystemZ::FeatureDistinctOps]))
    Features |= Feature_FeatureDistinctOps;
  if ((FB[SystemZ::FeatureLoadStoreOnCond]))
    Features |= Feature_FeatureLoadStoreOnCond;
  if ((FB[SystemZ::FeatureHighWord]))
    Features |= Feature_FeatureHighWord;
  if ((FB[SystemZ::FeatureFPExtension]))
    Features |= Feature_FeatureFPExtension;
  if ((FB[SystemZ::FeaturePopulationCount]))
    Features |= Feature_FeaturePopulationCount;
  if ((FB[SystemZ::FeatureFastSerialization]))
    Features |= Feature_FeatureFastSerialization;
  if ((FB[SystemZ::FeatureInterlockedAccess1]))
    Features |= Feature_FeatureInterlockedAccess1;
  if ((FB[SystemZ::FeatureMiscellaneousExtensions]))
    Features |= Feature_FeatureMiscellaneousExtensions;
  if ((FB[SystemZ::FeatureTransactionalExecution]))
    Features |= Feature_FeatureTransactionalExecution;
  if ((FB[SystemZ::FeatureProcessorAssist]))
    Features |= Feature_FeatureProcessorAssist;
  if ((FB[SystemZ::FeatureVector]))
    Features |= Feature_FeatureVector;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\003"
    "aih\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005alg"
    "fi\005algfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly"
    "\002ar\003ark\003asi\004axbr\002ay\004basr\003bcr\003ber\004bher\003bhr"
    "\004bler\004blhr\003blr\004bner\005bnher\004bnhr\005bnler\005bnlhr\004b"
    "nlr\004bnor\003bor\002br\004bras\005brasl\003brc\004brcl\004brct\005brc"
    "tg\001c\003cdb\004cdbr\005cdfbr\005cdgbr\006cdlfbr\006cdlgbr\003ceb\004"
    "cebr\005cefbr\005cegbr\006celfbr\006celgbr\005cfdbr\005cfebr\003cfi\005"
    "cfxbr\002cg\005cgdbr\005cgebr\003cgf\004cgfi\004cgfr\005cgfrl\003cgh\004"
    "cghi\005cghrl\005cghsi\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006"
    "cgijle\006cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007"
    "cgijnlh\003cgr\004cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006"
    "cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004"
    "cgrl\005cgxbr\002ch\003chf\005chhsi\003chi\004chrl\004chsi\003chy\003ci"
    "h\003cij\004cije\004cijh\005cijhe\004cijl\005cijle\005cijlh\005cijne\005"
    "cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh\002cl\003clc\006clfdbr\006"
    "clfebr\006clfhsi\004clfi\006clfxbr\003clg\006clgdbr\006clgebr\004clgf\005"
    "clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgij\006clgije\006clgi"
    "jh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\004clgr\005clgrj\006clgrje\006"
    "clgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh"
    "\010clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\006clgxbr\004c"
    "lhf\006clhhsi\005clhrl\003cli\004clih\004clij\005clije\005clijh\006clij"
    "he\005clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijn"
    "l\007clijnle\007clijnlh\004cliy\003clr\004clrj\005clrje\005clrjh\006clr"
    "jhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clrj"
    "nl\007clrjnle\007clrjnlh\004clrl\004clst\003cly\005cpsdr\002cr\003crj\004"
    "crje\004crjh\005crjhe\004crjl\005crjle\005crjlh\005crjne\005crjnh\006cr"
    "jnhe\005crjnl\006crjnle\006crjnlh\003crl\002cs\003csg\003csy\004cxbr\005"
    "cxfbr\005cxgbr\006cxlfbr\006cxlgbr\002cy\003ddb\004ddbr\003deb\004debr\002"
    "dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005dsgfr\004dsgr\004dxbr\003ear"
    "\004etnd\005fidbr\006fidbra\005fiebr\006fiebra\005fixbr\006fixbra\005fl"
    "ogr\002ic\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm"
    "\001j\002je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\004jgne\004"
    "jgnh\005jgnhe\004jgnl\005jgnle\005jgnlh\004jgno\003jgo\002jh\003jhe\002"
    "jl\003jle\003jlh\003jne\003jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002"
    "jo\001l\002la\003laa\004laag\004laal\005laalg\003lan\004lang\003lao\004"
    "laog\004larl\003lax\004laxg\003lay\002lb\003lbh\003lbr\004lcbb\005lcdbr"
    "\005lcebr\005lcgfr\004lcgr\003lcr\005lcxbr\002ld\003lde\004ldeb\005ldeb"
    "r\004ldgr\003ldr\005ldxbr\006ldxbra\003ldy\002le\005ledbr\006ledbra\003"
    "ler\005lexbr\006lexbra\003ley\003lfh\002lg\003lgb\004lgbr\004lgdr\003lg"
    "f\004lgfi\004lgfr\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003lgr\004lg"
    "rl\002lh\003lhh\003lhi\003lhr\004lhrl\003lhy\003llc\004llch\004llcr\004"
    "llgc\005llgcr\004llgf\005llgfr\006llgfrl\004llgh\005llghr\006llghrl\003"
    "llh\004llhh\004llhr\005llhrl\005llihf\005llihh\005llihl\005llilf\005lli"
    "lh\005llill\003lmg\005lndbr\005lnebr\005lngfr\004lngr\003lnr\005lnxbr\003"
    "loc\004loce\004locg\005locge\005locgh\006locghe\005locgl\006locgle\006l"
    "ocglh\006locgne\006locgnh\007locgnhe\006locgnl\007locgnle\007locgnlh\006"
    "locgno\005locgo\005locgr\006locgre\006locgrh\007locgrhe\006locgrl\007lo"
    "cgrle\007locgrlh\007locgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrn"
    "le\010locgrnlh\007locgrno\006locgro\004loch\005loche\004locl\005locle\005"
    "loclh\005locne\005locnh\006locnhe\005locnl\006locnle\006locnlh\005locno"
    "\004loco\004locr\005locre\005locrh\006locrhe\005locrl\006locrle\006locr"
    "lh\006locrne\006locrnh\007locrnhe\006locrnl\007locrnle\007locrnlh\006lo"
    "crno\005locro\005lpdbr\005lpebr\005lpgfr\004lpgr\003lpr\005lpxbr\002lr\003"
    "lrl\003lrv\004lrvg\005lrvgr\004lrvr\002lt\005ltdbr\005ltebr\003ltg\004l"
    "tgf\005ltgfr\004ltgr\003ltr\005ltxbr\004lxdb\005lxdbr\004lxeb\005lxebr\003"
    "lxr\002ly\004lzdr\004lzer\004lzxr\004madb\005madbr\004maeb\005maebr\003"
    "mdb\004mdbr\004mdeb\005mdebr\004meeb\005meebr\004mghi\002mh\003mhi\003m"
    "hy\003mlg\004mlgr\002ms\004msdb\005msdbr\004mseb\005msebr\004msfi\003ms"
    "g\004msgf\005msgfi\005msgfr\004msgr\003msr\003msy\003mvc\005mvghi\005mv"
    "hhi\004mvhi\003mvi\004mviy\004mvst\004mxbr\004mxdb\005mxdbr\001n\002nc\002"
    "ng\003ngr\004ngrk\002ni\004nihf\004nihh\004nihl\004nilf\004nilh\004nill"
    "\003niy\002nr\003nrk\005ntstg\002ny\001o\002oc\002og\003ogr\004ogrk\002"
    "oi\004oihf\004oihh\004oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002"
    "oy\003pfd\005pfdrl\006popcnt\003ppa\005risbg\006risbgn\006risbhg\006ris"
    "blg\003rll\004rllg\005rnsbg\005rosbg\005rxsbg\001s\003sdb\004sdbr\003se"
    "b\004sebr\002sg\003sgf\004sgfr\003sgr\004sgrk\002sh\003shy\002sl\003slb"
    "\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005slgfi\005slgfr\004s"
    "lgr\005slgrk\003sll\004sllg\004sllk\003slr\004slrk\003sly\004sqdb\005sq"
    "dbr\004sqeb\005sqebr\005sqxbr\002sr\003sra\004srag\004srak\003srk\003sr"
    "l\004srlg\004srlk\004srst\002st\003stc\004stch\004stcy\003std\004stdy\003"
    "ste\004stey\004stfh\003stg\005stgrl\003sth\004sthh\005sthrl\004sthy\004"
    "stmg\004stoc\005stoce\005stocg\006stocge\006stocgh\007stocghe\006stocgl"
    "\007stocgle\007stocglh\007stocgne\007stocgnh\010stocgnhe\007stocgnl\010"
    "stocgnle\010stocgnlh\007stocgno\006stocgo\005stoch\006stoche\005stocl\006"
    "stocle\006stoclh\006stocne\006stocnh\007stocnhe\006stocnl\007stocnle\007"
    "stocnlh\006stocno\005stoco\004strl\004strv\005strvg\003sty\004sxbr\002s"
    "y\006tabort\006tbegin\007tbeginc\004tend\002tm\004tmhh\004tmhl\004tmlh\004"
    "tmll\003tmy\003vab\005vaccb\006vacccq\005vaccf\005vaccg\005vacch\005vac"
    "cq\004vacq\003vaf\003vag\003vah\003vaq\005vavgb\005vavgf\005vavgg\005va"
    "vgh\006vavglb\006vavglf\006vavglg\006vavglh\005vcdgb\006vcdlgb\005vceqb"
    "\006vceqbs\005vceqf\006vceqfs\005vceqg\006vceqgs\005vceqh\006vceqhs\005"
    "vcgdb\004vchb\005vchbs\004vchf\005vchfs\004vchg\005vchgs\004vchh\005vch"
    "hs\005vchlb\006vchlbs\005vchlf\006vchlfs\005vchlg\006vchlgs\005vchlh\006"
    "vchlhs\005vcksm\006vclgdb\005vclzb\005vclzf\005vclzg\005vclzh\005vctzb\005"
    "vctzf\005vctzg\005vctzh\004vecb\004vecf\004vecg\004vech\005veclb\005vec"
    "lf\005veclg\005veclh\006verimb\006verimf\006verimg\006verimh\006verllb\006"
    "verllf\006verllg\006verllh\007verllvb\007verllvf\007verllvg\007verllvh\005"
    "veslb\005veslf\005veslg\005veslh\006veslvb\006veslvf\006veslvg\006veslv"
    "h\006vesrab\006vesraf\006vesrag\006vesrah\007vesravb\007vesravf\007vesr"
    "avg\007vesravh\006vesrlb\006vesrlf\006vesrlg\006vesrlh\007vesrlvb\007ve"
    "srlvf\007vesrlvg\007vesrlvh\005vfadb\005vfaeb\006vfaebs\005vfaef\006vfa"
    "efs\005vfaeh\006vfaehs\006vfaezb\007vfaezbs\006vfaezf\007vfaezfs\006vfa"
    "ezh\007vfaezhs\006vfcedb\007vfcedbs\006vfchdb\007vfchdbs\007vfchedb\010"
    "vfchedbs\005vfddb\005vfeeb\006vfeebs\005vfeef\006vfeefs\005vfeeh\006vfe"
    "ehs\006vfeezb\007vfeezbs\006vfeezf\007vfeezfs\006vfeezh\007vfeezhs\006v"
    "feneb\007vfenebs\006vfenef\007vfenefs\006vfeneh\007vfenehs\007vfenezb\010"
    "vfenezbs\007vfenezf\010vfenezfs\007vfenezh\010vfenezhs\005vfidb\006vflc"
    "db\006vflndb\006vflpdb\006vfmadb\005vfmdb\006vfmsdb\005vfsdb\006vfsqdb\007"
    "vftcidb\004vgbm\004vgef\004vgeg\006vgfmab\006vgfmaf\006vgfmag\006vgfmah"
    "\005vgfmb\005vgfmf\005vgfmg\005vgfmh\004vgmb\004vgmf\004vgmg\004vgmh\006"
    "vistrb\007vistrbs\006vistrf\007vistrfs\006vistrh\007vistrhs\002vl\004vl"
    "bb\004vlcb\004vlcf\004vlcg\004vlch\005vldeb\004vleb\005vledb\004vlef\004"
    "vleg\004vleh\005vleib\005vleif\005vleig\005vleih\005vlgvb\005vlgvf\005v"
    "lgvg\005vlgvh\003vll\006vllezb\006vllezf\006vllezg\006vllezh\003vlm\004"
    "vlpb\004vlpf\004vlpg\004vlph\003vlr\006vlrepb\006vlrepf\006vlrepg\006vl"
    "reph\005vlvgb\005vlvgf\005vlvgg\005vlvgh\005vlvgp\005vmaeb\005vmaef\005"
    "vmaeh\005vmahb\005vmahf\005vmahh\005vmalb\006vmaleb\006vmalef\006vmaleh"
    "\005vmalf\006vmalhb\006vmalhf\006vmalhh\006vmalhw\006vmalob\006vmalof\006"
    "vmaloh\005vmaob\005vmaof\005vmaoh\004vmeb\004vmef\004vmeh\004vmhb\004vm"
    "hf\004vmhh\004vmlb\005vmleb\005vmlef\005vmleh\004vmlf\005vmlhb\005vmlhf"
    "\005vmlhh\005vmlhw\005vmlob\005vmlof\005vmloh\004vmnb\004vmnf\004vmng\004"
    "vmnh\005vmnlb\005vmnlf\005vmnlg\005vmnlh\004vmob\004vmof\004vmoh\005vmr"
    "hb\005vmrhf\005vmrhg\005vmrhh\005vmrlb\005vmrlf\005vmrlg\005vmrlh\004vm"
    "xb\004vmxf\004vmxg\004vmxh\005vmxlb\005vmxlf\005vmxlg\005vmxlh\002vn\003"
    "vnc\003vno\002vo\004vone\004vpdi\005vperm\004vpkf\004vpkg\004vpkh\006vp"
    "klsf\007vpklsfs\006vpklsg\007vpklsgs\006vpklsh\007vpklshs\005vpksf\006v"
    "pksfs\005vpksg\006vpksgs\005vpksh\006vpkshs\006vpopct\005vrepb\005vrepf"
    "\005vrepg\005vreph\006vrepib\006vrepif\006vrepig\006vrepih\003vsb\007vs"
    "bcbiq\005vsbiq\006vscbib\006vscbif\006vscbig\006vscbih\006vscbiq\005vsc"
    "ef\005vsceg\005vsegb\005vsegf\005vsegh\004vsel\003vsf\003vsg\003vsh\003"
    "vsl\004vslb\005vsldb\003vsq\004vsra\005vsrab\004vsrl\005vsrlb\003vst\005"
    "vsteb\005vstef\005vsteg\005vsteh\004vstl\004vstm\006vstrcb\007vstrcbs\006"
    "vstrcf\007vstrcfs\006vstrch\007vstrchs\007vstrczb\010vstrczbs\007vstrcz"
    "f\010vstrczfs\007vstrczh\010vstrczhs\005vsumb\006vsumgf\006vsumgh\005vs"
    "umh\006vsumqf\006vsumqg\003vtm\005vuphb\005vuphf\005vuphh\005vuplb\005v"
    "uplf\006vuplhb\006vuplhf\006vuplhh\006vuplhw\006vupllb\006vupllf\006vup"
    "llh\002vx\005vzero\005wcdgb\006wcdlgb\005wcgdb\006wclgdb\005wfadb\005wf"
    "cdb\006wfcedb\007wfcedbs\006wfchdb\007wfchdbs\007wfchedb\010wfchedbs\005"
    "wfddb\005wfidb\005wfkdb\006wflcdb\006wflndb\006wflpdb\006wfmadb\005wfmd"
    "b\006wfmsdb\005wfsdb\006wfsqdb\007wftcidb\005wldeb\005wledb\001x\002xc\002"
    "xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint16_t RequiredFeatures;
    uint8_t Classes[5];
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 86 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 89 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 93 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 98 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 104 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 109 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 114 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 118 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 129 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 135 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 143 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 148 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 154 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 161 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 165 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 170 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 174 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 177 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 181 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 190 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 193 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 198 /* bcr */, SystemZ::AsmBCR, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 202 /* ber */, SystemZ::AsmEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 206 /* bher */, SystemZ::AsmHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 211 /* bhr */, SystemZ::AsmHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 215 /* bler */, SystemZ::AsmLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 220 /* blhr */, SystemZ::AsmLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 225 /* blr */, SystemZ::AsmLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 229 /* bner */, SystemZ::AsmNEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 234 /* bnher */, SystemZ::AsmNHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 240 /* bnhr */, SystemZ::AsmNHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 245 /* bnler */, SystemZ::AsmNLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 251 /* bnlhr */, SystemZ::AsmNLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 257 /* bnlr */, SystemZ::AsmNLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 262 /* bnor */, SystemZ::AsmNOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 267 /* bor */, SystemZ::AsmOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 271 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 274 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 279 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 285 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 289 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 294 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 299 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 305 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 307 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 311 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 316 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 322 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 328 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 335 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 342 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 346 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 351 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 357 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 363 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 370 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 377 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 383 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 389 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 393 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 399 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 402 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 408 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 414 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 418 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 423 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 428 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 434 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 438 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 443 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 449 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 455 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 460 /* cgije */, SystemZ::AsmJECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 466 /* cgijh */, SystemZ::AsmJHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 472 /* cgijhe */, SystemZ::AsmJHECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 479 /* cgijl */, SystemZ::AsmJLCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 485 /* cgijle */, SystemZ::AsmJLECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 492 /* cgijlh */, SystemZ::AsmJLHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 499 /* cgijne */, SystemZ::AsmJLHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 506 /* cgijnh */, SystemZ::AsmJLEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 513 /* cgijnhe */, SystemZ::AsmJLAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 521 /* cgijnl */, SystemZ::AsmJHEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 528 /* cgijnle */, SystemZ::AsmJHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 536 /* cgijnlh */, SystemZ::AsmJEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 544 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 548 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 553 /* cgrje */, SystemZ::AsmJECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 559 /* cgrjh */, SystemZ::AsmJHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 565 /* cgrjhe */, SystemZ::AsmJHECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 572 /* cgrjl */, SystemZ::AsmJLCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 578 /* cgrjle */, SystemZ::AsmJLECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 585 /* cgrjlh */, SystemZ::AsmJLHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 592 /* cgrjne */, SystemZ::AsmJLHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 599 /* cgrjnh */, SystemZ::AsmJLEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 606 /* cgrjnhe */, SystemZ::AsmJLAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 614 /* cgrjnl */, SystemZ::AsmJHEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 621 /* cgrjnle */, SystemZ::AsmJHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 629 /* cgrjnlh */, SystemZ::AsmJEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 637 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 642 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 648 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 651 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 655 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 661 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 665 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 670 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 675 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 679 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 683 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 687 /* cije */, SystemZ::AsmJECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 692 /* cijh */, SystemZ::AsmJHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 697 /* cijhe */, SystemZ::AsmJHECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 703 /* cijl */, SystemZ::AsmJLCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 708 /* cijle */, SystemZ::AsmJLECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 714 /* cijlh */, SystemZ::AsmJLHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 720 /* cijne */, SystemZ::AsmJLHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 726 /* cijnh */, SystemZ::AsmJLEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 732 /* cijnhe */, SystemZ::AsmJLAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 739 /* cijnl */, SystemZ::AsmJHEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 745 /* cijnle */, SystemZ::AsmJHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 752 /* cijnlh */, SystemZ::AsmJEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 759 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 762 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 766 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 773 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 780 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 787 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 792 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 799 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 803 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 810 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 817 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 822 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 828 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 834 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 841 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 848 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 855 /* clgij */, SystemZ::AsmCLGIJ, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 861 /* clgije */, SystemZ::AsmJECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 868 /* clgijh */, SystemZ::AsmJHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 875 /* clgijhe */, SystemZ::AsmJHECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 883 /* clgijl */, SystemZ::AsmJLCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 890 /* clgijle */, SystemZ::AsmJLECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 898 /* clgijlh */, SystemZ::AsmJLHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 906 /* clgijne */, SystemZ::AsmJLHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 914 /* clgijnh */, SystemZ::AsmJLEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 922 /* clgijnhe */, SystemZ::AsmJLAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 931 /* clgijnl */, SystemZ::AsmJHEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 939 /* clgijnle */, SystemZ::AsmJHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 948 /* clgijnlh */, SystemZ::AsmJEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 957 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 962 /* clgrj */, SystemZ::AsmCLGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 968 /* clgrje */, SystemZ::AsmJECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 975 /* clgrjh */, SystemZ::AsmJHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 982 /* clgrjhe */, SystemZ::AsmJHECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 990 /* clgrjl */, SystemZ::AsmJLCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 997 /* clgrjle */, SystemZ::AsmJLECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1005 /* clgrjlh */, SystemZ::AsmJLHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1013 /* clgrjne */, SystemZ::AsmJLHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1021 /* clgrjnh */, SystemZ::AsmJLEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1029 /* clgrjnhe */, SystemZ::AsmJLAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1038 /* clgrjnl */, SystemZ::AsmJHEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1046 /* clgrjnle */, SystemZ::AsmJHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1055 /* clgrjnlh */, SystemZ::AsmJEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1064 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1070 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1077 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1082 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1089 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1095 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 1099 /* clih */, SystemZ::CLIH, Convert__GR321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GR32, MCK_U32Imm }, },
  { 1104 /* clij */, SystemZ::AsmCLIJ, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1109 /* clije */, SystemZ::AsmJECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1115 /* clijh */, SystemZ::AsmJHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1121 /* clijhe */, SystemZ::AsmJHECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1128 /* clijl */, SystemZ::AsmJLCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1134 /* clijle */, SystemZ::AsmJLECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1141 /* clijlh */, SystemZ::AsmJLHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1148 /* clijne */, SystemZ::AsmJLHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1155 /* clijnh */, SystemZ::AsmJLEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1162 /* clijnhe */, SystemZ::AsmJLAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1170 /* clijnl */, SystemZ::AsmJHEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1177 /* clijnle */, SystemZ::AsmJHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1185 /* clijnlh */, SystemZ::AsmJEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1193 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 1198 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1202 /* clrj */, SystemZ::AsmCLRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1207 /* clrje */, SystemZ::AsmJECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1213 /* clrjh */, SystemZ::AsmJHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1219 /* clrjhe */, SystemZ::AsmJHECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1226 /* clrjl */, SystemZ::AsmJLCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1232 /* clrjle */, SystemZ::AsmJLECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1239 /* clrjlh */, SystemZ::AsmJLHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1246 /* clrjne */, SystemZ::AsmJLHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1253 /* clrjnh */, SystemZ::AsmJLEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1260 /* clrjnhe */, SystemZ::AsmJLAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1268 /* clrjnl */, SystemZ::AsmJHEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1275 /* clrjnle */, SystemZ::AsmJHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1283 /* clrjnlh */, SystemZ::AsmJEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1291 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1296 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1301 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1305 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 1311 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1314 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1318 /* crje */, SystemZ::AsmJECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1323 /* crjh */, SystemZ::AsmJHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1328 /* crjhe */, SystemZ::AsmJHECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1334 /* crjl */, SystemZ::AsmJLCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1339 /* crjle */, SystemZ::AsmJLECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1345 /* crjlh */, SystemZ::AsmJLHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1351 /* crjne */, SystemZ::AsmJLHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1357 /* crjnh */, SystemZ::AsmJLEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1363 /* crjnhe */, SystemZ::AsmJLAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1370 /* crjnl */, SystemZ::AsmJHEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1376 /* crjnle */, SystemZ::AsmJHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1383 /* crjnlh */, SystemZ::AsmJEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1390 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1394 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 1397 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1401 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1405 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1410 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 1416 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 1422 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 1429 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 1436 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1439 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1443 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1448 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1452 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1457 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1460 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1464 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1469 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1473 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1477 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1482 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1488 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1493 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1498 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, },
  { 1502 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 1507 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 1513 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1520 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 1526 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1533 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 1539 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1546 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1552 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1555 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1559 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 1564 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1569 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1574 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1579 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1584 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1589 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 1593 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1595 /* je */, SystemZ::AsmEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1598 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1601 /* jge */, SystemZ::AsmEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1605 /* jgh */, SystemZ::AsmHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1609 /* jghe */, SystemZ::AsmHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1614 /* jgl */, SystemZ::AsmLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1618 /* jgle */, SystemZ::AsmLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1623 /* jglh */, SystemZ::AsmLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1628 /* jgne */, SystemZ::AsmNEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1633 /* jgnh */, SystemZ::AsmNHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1638 /* jgnhe */, SystemZ::AsmNHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1644 /* jgnl */, SystemZ::AsmNLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1649 /* jgnle */, SystemZ::AsmNLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1655 /* jgnlh */, SystemZ::AsmNLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1661 /* jgno */, SystemZ::AsmNOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1666 /* jgo */, SystemZ::AsmOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1670 /* jh */, SystemZ::AsmHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1673 /* jhe */, SystemZ::AsmHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1677 /* jl */, SystemZ::AsmLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1680 /* jle */, SystemZ::AsmLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1684 /* jlh */, SystemZ::AsmLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1688 /* jne */, SystemZ::AsmNEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1692 /* jnh */, SystemZ::AsmNHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1696 /* jnhe */, SystemZ::AsmNHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1701 /* jnl */, SystemZ::AsmNLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1705 /* jnle */, SystemZ::AsmNLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1710 /* jnlh */, SystemZ::AsmNLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1715 /* jno */, SystemZ::AsmNOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1719 /* jo */, SystemZ::AsmOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1722 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1724 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1727 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1731 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1736 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1741 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1747 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1751 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1756 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1760 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1765 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1770 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1774 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1779 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1783 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1786 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1790 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1794 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 1799 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1805 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1811 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1817 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1822 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1826 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1832 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1835 /* lde */, SystemZ::LDE32, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1839 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1844 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 1850 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 1855 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1859 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1865 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1872 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 1876 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1879 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 1885 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1892 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1896 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1902 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1909 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 1913 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1917 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1920 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1924 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1929 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 1934 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1938 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 1943 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1948 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1954 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1958 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1963 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1968 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1974 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1978 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1983 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1986 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1990 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1994 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1998 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2003 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2007 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2011 /* llch */, SystemZ::LLCH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2016 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2021 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2026 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2032 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2037 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2043 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2050 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2055 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2061 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2068 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2072 /* llhh */, SystemZ::LLHH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2077 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2082 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2088 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2094 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2100 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2106 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2112 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2118 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2124 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2128 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2134 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2140 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2146 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2151 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2155 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2161 /* loc */, SystemZ::AsmLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2165 /* loce */, SystemZ::AsmELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2170 /* locg */, SystemZ::AsmLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2175 /* locge */, SystemZ::AsmELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2181 /* locgh */, SystemZ::AsmHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2187 /* locghe */, SystemZ::AsmHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2194 /* locgl */, SystemZ::AsmLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2200 /* locgle */, SystemZ::AsmLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2207 /* locglh */, SystemZ::AsmLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2214 /* locgne */, SystemZ::AsmNELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2221 /* locgnh */, SystemZ::AsmNHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2228 /* locgnhe */, SystemZ::AsmNHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2236 /* locgnl */, SystemZ::AsmNLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2243 /* locgnle */, SystemZ::AsmNLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2251 /* locgnlh */, SystemZ::AsmNLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2259 /* locgno */, SystemZ::AsmNOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2266 /* locgo */, SystemZ::AsmOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2272 /* locgr */, SystemZ::AsmLOCGR, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2278 /* locgre */, SystemZ::AsmELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2285 /* locgrh */, SystemZ::AsmHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2292 /* locgrhe */, SystemZ::AsmHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2300 /* locgrl */, SystemZ::AsmLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2307 /* locgrle */, SystemZ::AsmLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2315 /* locgrlh */, SystemZ::AsmLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2323 /* locgrne */, SystemZ::AsmNELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2331 /* locgrnh */, SystemZ::AsmNHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2339 /* locgrnhe */, SystemZ::AsmNHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2348 /* locgrnl */, SystemZ::AsmNLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2356 /* locgrnle */, SystemZ::AsmNLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2365 /* locgrnlh */, SystemZ::AsmNLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2374 /* locgrno */, SystemZ::AsmNOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2382 /* locgro */, SystemZ::AsmOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2389 /* loch */, SystemZ::AsmHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2394 /* loche */, SystemZ::AsmHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2400 /* locl */, SystemZ::AsmLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2405 /* locle */, SystemZ::AsmLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2411 /* loclh */, SystemZ::AsmLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2417 /* locne */, SystemZ::AsmNELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2423 /* locnh */, SystemZ::AsmNHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2429 /* locnhe */, SystemZ::AsmNHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2436 /* locnl */, SystemZ::AsmNLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2442 /* locnle */, SystemZ::AsmNLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2449 /* locnlh */, SystemZ::AsmNLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2456 /* locno */, SystemZ::AsmNOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2462 /* loco */, SystemZ::AsmOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2467 /* locr */, SystemZ::AsmLOCR, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2472 /* locre */, SystemZ::AsmELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2478 /* locrh */, SystemZ::AsmHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2484 /* locrhe */, SystemZ::AsmHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2491 /* locrl */, SystemZ::AsmLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2497 /* locrle */, SystemZ::AsmLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2504 /* locrlh */, SystemZ::AsmLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2511 /* locrne */, SystemZ::AsmNELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2518 /* locrnh */, SystemZ::AsmNHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2525 /* locrnhe */, SystemZ::AsmNHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2533 /* locrnl */, SystemZ::AsmNLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2540 /* locrnle */, SystemZ::AsmNLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2548 /* locrnlh */, SystemZ::AsmNLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2556 /* locrno */, SystemZ::AsmNOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2563 /* locro */, SystemZ::AsmOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2569 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2575 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2581 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2587 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2592 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2596 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2602 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2605 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2609 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2613 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2618 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2624 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2629 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2632 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2638 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2644 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2648 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2653 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2659 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2664 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2668 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2674 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2679 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2685 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2690 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 2696 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2700 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2703 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 2708 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 2713 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 2718 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2723 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2729 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2734 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2740 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2744 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2749 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2754 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 2760 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2765 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2771 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 2776 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2779 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 2783 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2787 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2791 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2796 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2799 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2804 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2810 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2815 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2821 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 2826 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2830 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2835 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 2841 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2847 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2852 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2856 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2860 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2864 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2870 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2876 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2881 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2885 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2890 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2895 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2900 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2905 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2911 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2913 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2916 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2919 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2923 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2928 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2931 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 2936 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2941 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2946 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 2951 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2956 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2961 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2965 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2968 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2972 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2978 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2981 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2983 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2986 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2989 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2993 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2998 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3001 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 3006 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3011 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3016 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3021 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3026 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3031 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3035 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3038 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3042 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3045 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 3049 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 3055 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 3062 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 3066 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3072 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3079 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3086 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3093 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3097 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3102 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3108 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3114 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3120 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3122 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3126 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3131 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3135 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3140 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3143 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3147 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3152 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3156 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3161 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3164 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3168 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3171 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3175 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3180 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3186 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3191 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3196 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3200 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3205 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 3211 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3217 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3222 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3228 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3232 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3237 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3242 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3246 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3251 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3255 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3260 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3266 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3271 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3277 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3283 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3286 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3290 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3295 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3300 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3304 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3308 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3313 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3318 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3323 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3326 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3330 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3335 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3340 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3344 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 3349 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3353 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 3358 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3363 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3367 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3373 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3377 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3382 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3388 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3393 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3398 /* stoc */, SystemZ::AsmSTOC, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3403 /* stoce */, SystemZ::AsmESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3409 /* stocg */, SystemZ::AsmSTOCG, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3415 /* stocge */, SystemZ::AsmESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3422 /* stocgh */, SystemZ::AsmHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3429 /* stocghe */, SystemZ::AsmHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3437 /* stocgl */, SystemZ::AsmLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3444 /* stocgle */, SystemZ::AsmLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3452 /* stocglh */, SystemZ::AsmLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3460 /* stocgne */, SystemZ::AsmNESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3468 /* stocgnh */, SystemZ::AsmNHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3476 /* stocgnhe */, SystemZ::AsmNHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3485 /* stocgnl */, SystemZ::AsmNLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3493 /* stocgnle */, SystemZ::AsmNLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3502 /* stocgnlh */, SystemZ::AsmNLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3511 /* stocgno */, SystemZ::AsmNOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3519 /* stocgo */, SystemZ::AsmOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3526 /* stoch */, SystemZ::AsmHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3532 /* stoche */, SystemZ::AsmHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3539 /* stocl */, SystemZ::AsmLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3545 /* stocle */, SystemZ::AsmLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3552 /* stoclh */, SystemZ::AsmLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3559 /* stocne */, SystemZ::AsmNESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3566 /* stocnh */, SystemZ::AsmNHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3573 /* stocnhe */, SystemZ::AsmNHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3581 /* stocnl */, SystemZ::AsmNLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3588 /* stocnle */, SystemZ::AsmNLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3596 /* stocnlh */, SystemZ::AsmNLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3604 /* stocno */, SystemZ::AsmNOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3611 /* stoco */, SystemZ::AsmOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3617 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3622 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3627 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3633 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3637 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3642 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3645 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 3652 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 3659 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 3667 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 3672 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3675 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3680 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3685 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3690 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3695 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3699 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3703 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3709 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3716 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3722 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3728 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3734 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3740 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3745 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3749 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3753 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3757 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3761 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3767 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3773 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3779 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3785 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3792 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3799 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3806 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3813 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 3819 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 3826 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3832 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3839 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3845 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3852 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3858 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3865 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3871 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3878 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 3884 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3889 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3895 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3900 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3906 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3911 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3917 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3922 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3928 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3934 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3941 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3947 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3954 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3960 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3967 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3973 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3980 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 3986 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 3993 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 3999 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4005 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4011 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4017 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4023 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4029 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4035 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4041 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4046 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4051 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4056 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4061 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4067 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4073 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4079 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4085 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 4092 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 4099 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 4106 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 4113 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4120 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4127 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4134 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4141 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4149 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4157 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4165 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4173 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4179 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4185 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4191 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4197 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4204 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4211 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4218 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4225 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4232 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4239 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4246 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4253 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4261 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4269 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4277 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4285 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4292 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4299 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4306 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4313 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4321 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4329 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4337 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4345 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4351 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4351 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4357 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4357 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4364 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4364 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4370 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4370 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4377 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4377 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4383 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4383 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4390 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4390 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4397 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4397 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4405 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4405 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4412 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4412 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4420 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4420 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4427 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4427 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 4435 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4442 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4450 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4457 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4465 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4473 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4482 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4488 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4494 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4501 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4507 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4514 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4520 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4527 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4534 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4542 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4549 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4557 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4564 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4572 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4579 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4587 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4594 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4602 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4609 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4617 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4625 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4634 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4642 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4651 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4659 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4668 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 4674 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4681 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4688 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4695 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4702 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4708 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4715 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4721 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4728 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 4736 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 4741 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 4746 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 4751 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4758 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4765 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4772 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4779 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4785 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4791 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4797 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 4803 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 4808 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 4813 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 4818 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 4823 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4830 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4838 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4845 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4853 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4860 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4868 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 4871 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4876 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4881 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4886 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4891 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4896 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 4902 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4907 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 4913 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 4918 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 4923 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 4928 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 4934 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 4940 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 4946 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 4952 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4958 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4964 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4970 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 4976 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4980 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 4987 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 4994 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5001 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5008 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 5012 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5017 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5022 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5027 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5032 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5036 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5043 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5050 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5057 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5064 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5070 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5076 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 5082 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5088 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 5094 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5100 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5106 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5112 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5118 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5124 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5130 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5136 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5143 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5150 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5157 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5163 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5170 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5177 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5184 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5191 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5198 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5205 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5212 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5218 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5224 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5230 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5235 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5240 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5245 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5250 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5255 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5260 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5265 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5271 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5277 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5283 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5288 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5294 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5300 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5306 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5312 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5318 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5324 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5330 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5335 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5340 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5345 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5350 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5356 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5362 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5368 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5374 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5379 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5384 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5389 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5395 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5401 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5407 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5413 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5419 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5425 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5431 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5437 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5442 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5447 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5452 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5457 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5463 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5469 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5475 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5481 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5484 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5488 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5492 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5495 /* vone */, SystemZ::VONE, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 5500 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5505 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5511 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5516 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5521 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5526 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5533 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5541 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5548 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5556 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5563 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5571 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5577 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5584 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5590 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5597 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5603 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5610 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5617 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 5623 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 5629 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 5635 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 5641 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 5648 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 5655 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 5662 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 5669 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5673 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5681 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5687 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5694 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5701 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5708 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5715 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5722 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 5728 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 5734 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5740 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5746 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5752 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5757 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5761 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5765 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5769 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5773 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5778 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 5784 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5788 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5793 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5799 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5804 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5810 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5814 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 5820 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 5826 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 5832 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 5838 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 5843 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 5848 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5848 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5855 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5855 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5863 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5863 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5870 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5870 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5878 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5878 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5885 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5885 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5893 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5893 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5901 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5901 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5910 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5910 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5918 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5918 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5927 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5927 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5935 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5935 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 5944 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5950 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5957 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5964 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5970 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5977 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5984 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5988 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 5994 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6000 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6006 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6012 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6018 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6025 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6032 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6039 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6046 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6053 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6060 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6067 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6070 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 6076 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6082 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6089 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6095 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6102 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6108 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6114 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6121 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6129 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6136 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6144 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6152 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6161 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6167 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6173 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6179 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6186 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6193 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6200 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6207 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6213 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6220 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 6226 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 6233 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 6241 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, Feature_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 6247 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 6253 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6255 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 6258 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6261 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6265 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 6270 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 6273 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 6278 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 6283 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 6287 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6290 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 6294 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
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

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

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
    for (unsigned i = 0; i != 5; ++i) {
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
    uint16_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[1588] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 82 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 86 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 86 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 93 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 93 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 104 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 109 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 118 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 129 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 129 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 135 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 143 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 148 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 154 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 161 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 165 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 170 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 170 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 174 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 177 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 181 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 185 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 190 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 190 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 193 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 193 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 198 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 202 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 206 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 211 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 215 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 220 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 225 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 229 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 234 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 240 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 245 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 251 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 257 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 262 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 267 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 271 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 279 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 279 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 285 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 289 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 294 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 294 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 299 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 299 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 307 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 307 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 311 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 316 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 316 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 322 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 322 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 342 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 342 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 346 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 351 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 351 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 357 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 357 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 383 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 383 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 389 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 393 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 393 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 399 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 399 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 402 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 402 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 408 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 408 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 414 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 414 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 418 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 423 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 423 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 438 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 449 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 460 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 460 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 466 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 466 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 472 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 472 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 479 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 479 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 485 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 485 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 492 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 492 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 499 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 499 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 506 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 506 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 513 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 513 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 521 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 521 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 528 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 528 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 536 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 536 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 544 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 553 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 553 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 559 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 559 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 565 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 565 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 572 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 572 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 578 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 578 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 585 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 585 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 592 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 592 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 599 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 599 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 606 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 606 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 614 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 614 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 621 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 621 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 629 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 629 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 637 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 637 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 642 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 642 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 648 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 648 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 655 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 661 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 670 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 675 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 675 /* chy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 679 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 687 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 687 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 692 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 692 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 697 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 697 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 703 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 703 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 708 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 708 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 714 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 714 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 720 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 720 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 726 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 726 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 732 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 732 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 739 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 739 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 745 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 745 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 752 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 752 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 759 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 759 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 762 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 762 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 780 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 787 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 799 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 799 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 817 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 817 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 822 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 828 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 828 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 841 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 841 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 848 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 861 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 861 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 868 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 868 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 875 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 875 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 883 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 883 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 890 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 890 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 898 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 898 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 906 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 906 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 914 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 914 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 922 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 922 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 931 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 931 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 939 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 939 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 948 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 948 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 957 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 968 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 968 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 975 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 975 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 982 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 982 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 990 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 990 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 997 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 997 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1005 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1005 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1013 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1013 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1021 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1021 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1029 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1029 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1038 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1038 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1046 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1046 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1055 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1055 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1064 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1064 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1082 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1095 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1099 /* clih */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1109 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1109 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1115 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1115 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1121 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1121 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1128 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1128 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1134 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1134 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1141 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1141 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1148 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1148 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1155 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1155 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1162 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1162 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1170 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1170 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1177 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1177 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1185 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1185 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1193 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1198 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1207 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1207 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1213 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1213 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1219 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1219 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1226 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1226 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1232 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1232 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1239 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1239 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1246 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1246 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1253 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1253 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1260 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1260 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1268 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1268 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1275 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1275 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1283 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1283 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1291 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1291 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1296 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1301 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1301 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1305 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1311 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1318 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1318 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1323 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1323 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1328 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1328 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1334 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1334 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1339 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1339 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1345 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1345 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1351 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1351 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1357 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1357 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1363 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1363 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1370 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1370 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1376 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1376 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1383 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1383 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1390 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1390 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1394 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1394 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1397 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1397 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1401 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1401 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1405 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1410 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1410 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1416 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1416 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 1436 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1436 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1439 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1439 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1443 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1448 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1448 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1452 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1457 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1457 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 1460 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1460 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1469 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1469 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1477 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1477 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1488 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1488 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1493 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1498 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 1498 /* ear */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 1502 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 1507 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1513 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 1520 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1526 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 1533 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1539 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1546 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1546 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1552 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1552 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 1555 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1555 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1559 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1564 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1569 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1574 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 1579 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1584 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 1589 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 1593 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1595 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1598 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1601 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1605 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1609 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1614 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1618 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1623 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1628 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1633 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1638 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1644 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1649 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1655 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1661 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1666 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1670 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1673 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1677 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1680 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1684 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1688 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1692 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1696 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1701 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1705 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1710 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1715 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1719 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1722 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1722 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 1724 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1724 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 1727 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1727 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1741 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1741 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1747 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1747 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1756 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1756 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1760 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1760 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1765 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1765 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureInterlockedAccess1, 1770 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1770 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1774 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1774 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1779 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1779 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 1783 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1783 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1786 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1786 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1790 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 1794 /* lcbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 1794 /* lcbb */, MCK_GR32, 1 /* 0 */ },
  { 0, 1799 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1805 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1811 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1811 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1817 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1822 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1826 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1832 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1832 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 1835 /* lde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1835 /* lde */, MCK_FP32, 1 /* 0 */ },
  { 0, 1839 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1839 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1844 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1844 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1850 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1850 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1855 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1859 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1865 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1872 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1872 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1876 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1876 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 1879 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 1879 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1885 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1885 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 1892 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1896 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1902 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1909 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1909 /* ley */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1913 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1913 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1917 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1917 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1920 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1920 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 1924 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1929 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1929 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1934 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1934 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1938 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1943 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1943 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1948 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1948 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1954 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1954 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1958 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1963 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1968 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1968 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1974 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1978 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1978 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1983 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1983 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1986 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1986 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1990 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1994 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1998 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1998 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2003 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2003 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2007 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2007 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2011 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2011 /* llch */, MCK_GR32, 1 /* 0 */ },
  { 0, 2016 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2021 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2021 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 2026 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2032 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2032 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2037 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2037 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2043 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2043 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2050 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2050 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2055 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2061 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2061 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2068 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2068 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2072 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2072 /* llhh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2077 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2082 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2082 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2088 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2094 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2100 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2106 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2112 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2118 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 2124 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2124 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2128 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2134 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2140 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2140 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2146 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2151 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2155 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2165 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2165 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2170 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2170 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2175 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2175 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2181 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2181 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2187 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2187 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2194 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2194 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2200 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2200 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2207 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2207 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2214 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2214 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2221 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2221 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2228 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2228 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2236 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2236 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2243 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2243 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2251 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2251 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2259 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2259 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2266 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2266 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2272 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2278 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2285 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2292 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2300 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2307 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2315 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2323 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2331 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2339 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2348 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2356 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2365 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2374 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2382 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2389 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2389 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2394 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2394 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2400 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2400 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2405 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2405 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2411 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2411 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2417 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2417 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2423 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2423 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2429 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2429 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2436 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2436 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2442 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2442 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2449 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2449 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2456 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2456 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2462 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2462 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2467 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2472 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2478 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2484 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2491 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2497 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2504 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2511 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2518 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2525 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2533 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2540 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2548 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2556 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2563 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2569 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2575 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2581 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2581 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2587 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2592 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2596 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2602 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2605 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2605 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2609 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2609 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 2613 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2613 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2618 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2624 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2629 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2629 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 2632 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2638 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2644 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2644 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2648 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2648 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2653 /* ltgfr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2659 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2664 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2668 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2674 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2674 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2679 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2679 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2685 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2685 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2690 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2690 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2696 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2700 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2700 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 2703 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2708 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 2713 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2718 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2718 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2723 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2729 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2729 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2734 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2740 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2740 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2744 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2749 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2749 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2754 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2754 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2760 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2760 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2765 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2771 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2776 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2776 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2779 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2783 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2783 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2787 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2787 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2791 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2791 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2796 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2796 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 2799 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2799 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2804 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2810 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2810 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2815 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2821 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2826 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2826 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2830 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2830 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2835 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2841 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2841 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2847 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2852 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2856 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2856 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2860 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2860 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2864 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2870 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2876 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2881 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2885 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2890 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2895 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2900 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2900 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2905 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2905 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2911 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2911 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 2913 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2913 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2916 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2916 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 2919 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2923 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2928 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2931 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2936 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2941 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2946 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 2951 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2956 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 2961 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2965 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2968 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 2972 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 2972 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2978 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2978 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 2981 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2981 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 2983 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2983 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2986 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2986 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 2989 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2993 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2998 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3001 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3006 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3011 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3016 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3021 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3026 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 3031 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3035 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3038 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3042 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3042 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3045 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3049 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeaturePopulationCount, 3055 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 3062 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3066 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3072 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 3079 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3079 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3086 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3086 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 3093 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3093 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3097 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3097 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3102 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3108 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3114 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3120 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3120 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 3122 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3122 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3126 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3131 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3131 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3135 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3140 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3140 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3143 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3143 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3147 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3147 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3152 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3156 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3161 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3161 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3164 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3164 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3168 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3168 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3171 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3171 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3175 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3175 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3180 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3186 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3191 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 3196 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3196 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3200 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3200 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3205 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3211 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3211 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3217 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3222 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3228 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3228 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3232 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3232 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3237 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3237 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3242 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3246 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3251 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3251 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3255 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3255 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3260 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3266 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3266 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3271 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3277 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3283 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3286 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3286 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 3290 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3290 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3295 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3295 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3300 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3304 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3304 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3308 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3308 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3313 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3313 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3318 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3323 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3323 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 3326 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3326 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3330 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3330 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3335 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3335 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3340 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3340 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 3344 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3344 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 3349 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3349 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 3353 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3353 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3358 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3358 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3363 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3363 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3367 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3367 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3373 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3373 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3377 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3377 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3382 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3382 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3388 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3388 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3393 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3393 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3398 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3398 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3403 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3403 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3409 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3409 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3415 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3415 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3422 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3422 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3429 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3429 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3437 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3437 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3444 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3444 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3452 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3452 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3460 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3460 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3468 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3468 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3476 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3476 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3485 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3485 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3493 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3493 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3502 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3502 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3511 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3511 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3519 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3519 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3526 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3526 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3532 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3532 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3539 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3539 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3545 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3545 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3552 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3552 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3559 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3559 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3566 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3566 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3573 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3573 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3581 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3581 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3588 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3588 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3596 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3596 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3604 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3604 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3611 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3611 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { 0, 3617 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3617 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3622 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3622 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 3627 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3627 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3633 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3633 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 3637 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3642 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3642 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3645 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3652 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3659 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3672 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3675 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3680 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3685 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3690 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3695 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureVector, 3699 /* vab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3703 /* vaccb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3709 /* vacccq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 3716 /* vaccf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3722 /* vaccg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3728 /* vacch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3734 /* vaccq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3740 /* vacq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 3745 /* vaf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3749 /* vag */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3753 /* vah */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3757 /* vaq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3761 /* vavgb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3767 /* vavgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3773 /* vavgg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3779 /* vavgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3785 /* vavglb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3792 /* vavglf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3799 /* vavglg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3806 /* vavglh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3813 /* vcdgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3819 /* vcdlgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3826 /* vceqb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3832 /* vceqbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3839 /* vceqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3845 /* vceqfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3852 /* vceqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3858 /* vceqgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3865 /* vceqh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3871 /* vceqhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3878 /* vcgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3884 /* vchb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3889 /* vchbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3895 /* vchf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3900 /* vchfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3906 /* vchg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3911 /* vchgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3917 /* vchh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3922 /* vchhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3928 /* vchlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3934 /* vchlbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3941 /* vchlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3947 /* vchlfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3954 /* vchlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3960 /* vchlgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3967 /* vchlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3973 /* vchlhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3980 /* vcksm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 3986 /* vclgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3993 /* vclzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3999 /* vclzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4005 /* vclzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4011 /* vclzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4017 /* vctzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4023 /* vctzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4029 /* vctzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4035 /* vctzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4041 /* vecb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4046 /* vecf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4051 /* vecg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4056 /* vech */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4061 /* veclb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4067 /* veclf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4073 /* veclg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4079 /* veclh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4085 /* verimb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4092 /* verimf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4099 /* verimg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4106 /* verimh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4113 /* verllb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4113 /* verllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4120 /* verllf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4120 /* verllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4127 /* verllg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4127 /* verllg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4134 /* verllh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4134 /* verllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4141 /* verllvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4149 /* verllvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4157 /* verllvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4165 /* verllvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4173 /* veslb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4173 /* veslb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4179 /* veslf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4179 /* veslf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4185 /* veslg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4185 /* veslg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4191 /* veslh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4191 /* veslh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4197 /* veslvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4204 /* veslvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4211 /* veslvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4218 /* veslvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4225 /* vesrab */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4225 /* vesrab */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4232 /* vesraf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4232 /* vesraf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4239 /* vesrag */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4239 /* vesrag */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4246 /* vesrah */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4246 /* vesrah */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4253 /* vesravb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4261 /* vesravf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4269 /* vesravg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4277 /* vesravh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4285 /* vesrlb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4285 /* vesrlb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4292 /* vesrlf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4292 /* vesrlf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4299 /* vesrlg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4299 /* vesrlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4306 /* vesrlh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4306 /* vesrlh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4313 /* vesrlvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4321 /* vesrlvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4329 /* vesrlvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4337 /* vesrlvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4345 /* vfadb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4351 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4351 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4357 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4357 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4364 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4364 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4370 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4370 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4377 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4377 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4383 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4383 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4390 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4390 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4397 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4397 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4405 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4405 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4412 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4412 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4420 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4420 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4427 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4427 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4435 /* vfcedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4442 /* vfcedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4450 /* vfchdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4457 /* vfchdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4465 /* vfchedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4473 /* vfchedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4482 /* vfddb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4488 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4494 /* vfeebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4501 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4507 /* vfeefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4514 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4520 /* vfeehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4527 /* vfeezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4534 /* vfeezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4542 /* vfeezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4549 /* vfeezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4557 /* vfeezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4564 /* vfeezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4572 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4579 /* vfenebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4587 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4594 /* vfenefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4602 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4609 /* vfenehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4617 /* vfenezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4625 /* vfenezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4634 /* vfenezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4642 /* vfenezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4651 /* vfenezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4659 /* vfenezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4668 /* vfidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4674 /* vflcdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4681 /* vflndb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4688 /* vflpdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4695 /* vfmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4702 /* vfmdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4708 /* vfmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4715 /* vfsdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4721 /* vfsqdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4728 /* vftcidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4736 /* vgbm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4741 /* vgef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4741 /* vgef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4746 /* vgeg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4746 /* vgeg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4751 /* vgfmab */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4758 /* vgfmaf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4765 /* vgfmag */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4772 /* vgfmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 4779 /* vgfmb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4785 /* vgfmf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4791 /* vgfmg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4797 /* vgfmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 4803 /* vgmb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4808 /* vgmf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4813 /* vgmg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4818 /* vgmh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4823 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4830 /* vistrbs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4838 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4845 /* vistrfs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4853 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4860 /* vistrhs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4868 /* vl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4868 /* vl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4871 /* vlbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4871 /* vlbb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4876 /* vlcb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4881 /* vlcf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4886 /* vlcg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4891 /* vlch */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4896 /* vldeb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4902 /* vleb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4902 /* vleb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4907 /* vledb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4913 /* vlef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4913 /* vlef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4918 /* vleg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4918 /* vleg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4923 /* vleh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4923 /* vleh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4928 /* vleib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4934 /* vleif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4940 /* vleig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4946 /* vleih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4952 /* vlgvb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4952 /* vlgvb */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 4952 /* vlgvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 4958 /* vlgvf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4958 /* vlgvf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 4958 /* vlgvf */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 4964 /* vlgvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4964 /* vlgvg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 4964 /* vlgvg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 4970 /* vlgvh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4970 /* vlgvh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 4970 /* vlgvh */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 4976 /* vll */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 4976 /* vll */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 4976 /* vll */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4980 /* vllezb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4980 /* vllezb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4987 /* vllezf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4987 /* vllezf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 4994 /* vllezg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4994 /* vllezg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5001 /* vllezh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5001 /* vllezh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5008 /* vlm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5008 /* vlm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5012 /* vlpb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5017 /* vlpf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5022 /* vlpg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5027 /* vlph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5032 /* vlr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5036 /* vlrepb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5036 /* vlrepb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5043 /* vlrepf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5043 /* vlrepf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5050 /* vlrepg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5050 /* vlrepg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5057 /* vlreph */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5057 /* vlreph */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5064 /* vlvgb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5064 /* vlvgb */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 5064 /* vlvgb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5070 /* vlvgf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5070 /* vlvgf */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 5070 /* vlvgf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5076 /* vlvgg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5076 /* vlvgg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 5076 /* vlvgg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5082 /* vlvgh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5082 /* vlvgh */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 5082 /* vlvgh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5088 /* vlvgp */, MCK_GR64, 6 /* 1, 2 */ },
  { Feature_FeatureVector, 5088 /* vlvgp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5094 /* vmaeb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5100 /* vmaef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5106 /* vmaeh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5112 /* vmahb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5118 /* vmahf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5124 /* vmahh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5130 /* vmalb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5136 /* vmaleb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5143 /* vmalef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5150 /* vmaleh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5157 /* vmalf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5163 /* vmalhb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5170 /* vmalhf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5177 /* vmalhh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5184 /* vmalhw */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5191 /* vmalob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5198 /* vmalof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5205 /* vmaloh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5212 /* vmaob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5218 /* vmaof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5224 /* vmaoh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5230 /* vmeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5235 /* vmef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5240 /* vmeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5245 /* vmhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5250 /* vmhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5255 /* vmhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5260 /* vmlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5265 /* vmleb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5271 /* vmlef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5277 /* vmleh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5283 /* vmlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5288 /* vmlhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5294 /* vmlhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5300 /* vmlhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5306 /* vmlhw */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5312 /* vmlob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5318 /* vmlof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5324 /* vmloh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5330 /* vmnb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5335 /* vmnf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5340 /* vmng */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5345 /* vmnh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5350 /* vmnlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5356 /* vmnlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5362 /* vmnlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5368 /* vmnlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5374 /* vmob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5379 /* vmof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5384 /* vmoh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5389 /* vmrhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5395 /* vmrhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5401 /* vmrhg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5407 /* vmrhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5413 /* vmrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5419 /* vmrlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5425 /* vmrlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5431 /* vmrlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5437 /* vmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5442 /* vmxf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5447 /* vmxg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5452 /* vmxh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5457 /* vmxlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5463 /* vmxlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5469 /* vmxlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5475 /* vmxlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5481 /* vn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5484 /* vnc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5488 /* vno */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5492 /* vo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5495 /* vone */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5500 /* vpdi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5505 /* vperm */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5511 /* vpkf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5516 /* vpkg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5521 /* vpkh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5526 /* vpklsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5533 /* vpklsfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5541 /* vpklsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5548 /* vpklsgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5556 /* vpklsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5563 /* vpklshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5571 /* vpksf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5577 /* vpksfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5584 /* vpksg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5590 /* vpksgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5597 /* vpksh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5603 /* vpkshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5610 /* vpopct */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5617 /* vrepb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5623 /* vrepf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5629 /* vrepg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5635 /* vreph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5641 /* vrepib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5648 /* vrepif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5655 /* vrepig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5662 /* vrepih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5669 /* vsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5673 /* vsbcbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5681 /* vsbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5687 /* vscbib */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5694 /* vscbif */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5701 /* vscbig */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5708 /* vscbih */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5715 /* vscbiq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5722 /* vscef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5722 /* vscef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5728 /* vsceg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5728 /* vsceg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5734 /* vsegb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5740 /* vsegf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5746 /* vsegh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5752 /* vsel */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5757 /* vsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5761 /* vsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5765 /* vsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5769 /* vsl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5773 /* vslb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5778 /* vsldb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5784 /* vsq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5788 /* vsra */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5793 /* vsrab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5799 /* vsrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5804 /* vsrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5810 /* vst */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5810 /* vst */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5814 /* vsteb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5814 /* vsteb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5820 /* vstef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5820 /* vstef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5826 /* vsteg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5826 /* vsteg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5832 /* vsteh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 5832 /* vsteh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5838 /* vstl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5838 /* vstl */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 5838 /* vstl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 5843 /* vstm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 5843 /* vstm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5848 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5848 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5855 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5855 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5863 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5863 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5870 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5870 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5878 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5878 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5885 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5885 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5893 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5893 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5901 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5901 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5910 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5910 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5918 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5918 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5927 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5927 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5935 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5935 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5944 /* vsumb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5950 /* vsumgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5957 /* vsumgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5964 /* vsumh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5970 /* vsumqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5977 /* vsumqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5984 /* vtm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5988 /* vuphb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 5994 /* vuphf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6000 /* vuphh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6006 /* vuplb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6012 /* vuplf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6018 /* vuplhb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6025 /* vuplhf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6032 /* vuplhh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6039 /* vuplhw */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6046 /* vupllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6053 /* vupllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6060 /* vupllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6067 /* vx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6070 /* vzero */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 6076 /* wcdgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6082 /* wcdlgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6089 /* wcgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6095 /* wclgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6102 /* wfadb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6108 /* wfcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6114 /* wfcedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6121 /* wfcedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6129 /* wfchdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6136 /* wfchdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6144 /* wfchedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6152 /* wfchedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6161 /* wfddb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6167 /* wfidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6173 /* wfkdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6179 /* wflcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6186 /* wflndb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6193 /* wflpdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6200 /* wfmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 6207 /* wfmdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6213 /* wfmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 6220 /* wfsdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6226 /* wfsqdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6233 /* wftcidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6241 /* wldeb */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVector, 6241 /* wldeb */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 6247 /* wledb */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVector, 6247 /* wledb */, MCK_VR64, 2 /* 1 */ },
  { 0, 6253 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6253 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 6255 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 6255 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 6258 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6258 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6261 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6265 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6270 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6273 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6278 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 6283 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 6287 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6290 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 6294 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6294 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1588, Mnemonic,
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

