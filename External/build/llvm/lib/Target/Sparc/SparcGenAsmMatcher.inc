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
enum SubtargetFeatureFlag : uint8_t {
  Feature_HasV9 = (1ULL << 0),
  Feature_HasVIS = (1ULL << 1),
  Feature_HasVIS2 = (1ULL << 2),
  Feature_HasVIS3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasV9: return "";
  case Feature_HasVIS: return "";
  case Feature_HasVIS2: return "";
  case Feature_HasVIS3: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, uint64_t Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 2 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
            Mnemonic = "addx";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
            Mnemonic = "subx";
          return;
        }
        break;
      case 6:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
            Mnemonic = "addxcc";
          return;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "eturn", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
            Mnemonic = "rett";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
            Mnemonic = "subxcc";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 2 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
        Mnemonic = "addx";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
        Mnemonic = "subx";
      return;
    }
    break;
  case 6:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
        Mnemonic = "addxcc";
      return;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "eturn", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
        Mnemonic = "rett";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
        Mnemonic = "subxcc";
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_95_8,
  CVT_imm_95_13,
  CVT_imm_95_5,
  CVT_imm_95_1,
  CVT_imm_95_10,
  CVT_imm_95_11,
  CVT_imm_95_12,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_4,
  CVT_imm_95_0,
  CVT_imm_95_9,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_imm_95_15,
  CVT_imm_95_7,
  CVT_regO7,
  CVT_95_addMEMriOperands,
  CVT_95_addMEMrrOperands,
  CVT_regFCC0,
  CVT_regG0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__Imm1_1,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_2__Imm1_0,
  Convert__Imm1_3__Imm1_0,
  Convert__Imm1_4__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_0__imm_95_8,
  Convert__Imm1_1__imm_95_8,
  Convert__Imm1_2__imm_95_8,
  Convert__Imm1_3__imm_95_8,
  Convert__Imm1_0__imm_95_13,
  Convert__Imm1_1__imm_95_13,
  Convert__Imm1_2__imm_95_13,
  Convert__Imm1_3__imm_95_13,
  Convert__Imm1_0__imm_95_5,
  Convert__Imm1_1__imm_95_5,
  Convert__Imm1_2__imm_95_5,
  Convert__Imm1_3__imm_95_5,
  Convert__Imm1_0__imm_95_1,
  Convert__Imm1_1__imm_95_1,
  Convert__Imm1_2__imm_95_1,
  Convert__Imm1_3__imm_95_1,
  Convert__Imm1_0__imm_95_10,
  Convert__Imm1_1__imm_95_10,
  Convert__Imm1_2__imm_95_10,
  Convert__Imm1_3__imm_95_10,
  Convert__Imm1_0__imm_95_11,
  Convert__Imm1_1__imm_95_11,
  Convert__Imm1_2__imm_95_11,
  Convert__Imm1_3__imm_95_11,
  Convert__Imm1_0__imm_95_12,
  Convert__Imm1_1__imm_95_12,
  Convert__Imm1_2__imm_95_12,
  Convert__Imm1_3__imm_95_12,
  Convert__Imm1_0__imm_95_3,
  Convert__Imm1_1__imm_95_3,
  Convert__Imm1_2__imm_95_3,
  Convert__Imm1_3__imm_95_3,
  Convert__Imm1_0__imm_95_2,
  Convert__Imm1_1__imm_95_2,
  Convert__Imm1_2__imm_95_2,
  Convert__Imm1_3__imm_95_2,
  Convert__Imm1_0__imm_95_4,
  Convert__Imm1_1__imm_95_4,
  Convert__Imm1_2__imm_95_4,
  Convert__Imm1_3__imm_95_4,
  Convert__Imm1_0__imm_95_0,
  Convert__Imm1_1__imm_95_0,
  Convert__Imm1_2__imm_95_0,
  Convert__Imm1_3__imm_95_0,
  Convert__Imm1_0__imm_95_9,
  Convert__Imm1_1__imm_95_9,
  Convert__Imm1_2__imm_95_9,
  Convert__Imm1_3__imm_95_9,
  Convert__Imm1_0__imm_95_6,
  Convert__Imm1_1__imm_95_6,
  Convert__Imm1_2__imm_95_6,
  Convert__Imm1_3__imm_95_6,
  Convert__Imm1_0__imm_95_14,
  Convert__Imm1_1__imm_95_14,
  Convert__Imm1_2__imm_95_14,
  Convert__Imm1_3__imm_95_14,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__Reg1_2__Imm1_3,
  Convert__Imm1_0__imm_95_15,
  Convert__Imm1_1__imm_95_15,
  Convert__Imm1_2__imm_95_15,
  Convert__Imm1_3__imm_95_15,
  Convert__Imm1_0__imm_95_7,
  Convert__Imm1_1__imm_95_7,
  Convert__Imm1_2__imm_95_7,
  Convert__Imm1_3__imm_95_7,
  Convert__regO7__MEMri2_0,
  Convert__regO7__MEMrr2_0,
  Convert__Reg1_4__Reg1_1__Reg1_3__Tie0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_1__Reg1_0,
  Convert__Imm1_2__Imm1_0__Reg1_1,
  Convert__Imm1_3__Imm1_0__Reg1_2,
  Convert__Imm1_4__Imm1_0__Reg1_3,
  Convert__Imm1_1__imm_95_0__Reg1_0,
  Convert__Imm1_2__imm_95_0__Reg1_1,
  Convert__Imm1_3__imm_95_0__Reg1_2,
  Convert__Imm1_1__imm_95_9__Reg1_0,
  Convert__Imm1_2__imm_95_9__Reg1_1,
  Convert__Imm1_3__imm_95_9__Reg1_2,
  Convert__Imm1_1__imm_95_6__Reg1_0,
  Convert__Imm1_2__imm_95_6__Reg1_1,
  Convert__Imm1_3__imm_95_6__Reg1_2,
  Convert__Imm1_1__imm_95_11__Reg1_0,
  Convert__Imm1_2__imm_95_11__Reg1_1,
  Convert__Imm1_3__imm_95_11__Reg1_2,
  Convert__Imm1_1__imm_95_4__Reg1_0,
  Convert__Imm1_2__imm_95_4__Reg1_1,
  Convert__Imm1_3__imm_95_4__Reg1_2,
  Convert__Imm1_1__imm_95_13__Reg1_0,
  Convert__Imm1_2__imm_95_13__Reg1_1,
  Convert__Imm1_3__imm_95_13__Reg1_2,
  Convert__Imm1_1__imm_95_2__Reg1_0,
  Convert__Imm1_2__imm_95_2__Reg1_1,
  Convert__Imm1_3__imm_95_2__Reg1_2,
  Convert__Imm1_1__imm_95_8__Reg1_0,
  Convert__Imm1_2__imm_95_8__Reg1_1,
  Convert__Imm1_3__imm_95_8__Reg1_2,
  Convert__Imm1_1__imm_95_1__Reg1_0,
  Convert__Imm1_2__imm_95_1__Reg1_1,
  Convert__Imm1_3__imm_95_1__Reg1_2,
  Convert__Imm1_1__imm_95_15__Reg1_0,
  Convert__Imm1_2__imm_95_15__Reg1_1,
  Convert__Imm1_3__imm_95_15__Reg1_2,
  Convert__Imm1_1__imm_95_7__Reg1_0,
  Convert__Imm1_2__imm_95_7__Reg1_1,
  Convert__Imm1_3__imm_95_7__Reg1_2,
  Convert__Imm1_1__imm_95_10__Reg1_0,
  Convert__Imm1_2__imm_95_10__Reg1_1,
  Convert__Imm1_3__imm_95_10__Reg1_2,
  Convert__Imm1_1__imm_95_5__Reg1_0,
  Convert__Imm1_2__imm_95_5__Reg1_1,
  Convert__Imm1_3__imm_95_5__Reg1_2,
  Convert__Imm1_1__imm_95_12__Reg1_0,
  Convert__Imm1_2__imm_95_12__Reg1_1,
  Convert__Imm1_3__imm_95_12__Reg1_2,
  Convert__Imm1_1__imm_95_3__Reg1_0,
  Convert__Imm1_2__imm_95_3__Reg1_1,
  Convert__Imm1_3__imm_95_3__Reg1_2,
  Convert__Imm1_1__imm_95_14__Reg1_0,
  Convert__Imm1_2__imm_95_14__Reg1_1,
  Convert__Imm1_3__imm_95_14__Reg1_2,
  Convert__regFCC0__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert_NoOperands,
  Convert__Reg1_3__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_0__Tie0,
  Convert__regG0__MEMri2_0,
  Convert__regG0__MEMrr2_0,
  Convert__Reg1_1__MEMri2_0,
  Convert__Reg1_1__MEMrr2_0,
  Convert__Reg1_3__MEMri2_1,
  Convert__Reg1_3__MEMrr2_1,
  Convert__Reg1_4__MEMrr2_1__Imm1_3,
  Convert__Reg1_1__regG0__Reg1_0,
  Convert__Reg1_1__regG0__Imm1_0,
  Convert__Reg1_3__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_1,
  Convert__regG0__regG0__regG0,
  Convert__imm_95_8,
  Convert__MEMri2_0,
  Convert__MEMrr2_0,
  Convert__Reg1_1__Imm1_0,
  Convert__MEMri2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0__Imm1_4,
  Convert__Reg1_3__MEMri2_1__Tie0,
  Convert__Reg1_3__MEMrr2_1__Tie0,
  Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0,
  Convert__Reg1_2__Reg1_4__Imm1_0,
  Convert__Reg1_2__Imm1_4__Imm1_0,
  Convert__regG0__Reg1_0__imm_95_8,
  Convert__regG0__Imm1_0__imm_95_8,
  Convert__regG0__Reg1_1__imm_95_8,
  Convert__regG0__Imm1_1__imm_95_8,
  Convert__Reg1_0__Reg1_2__imm_95_8,
  Convert__Reg1_0__Imm1_2__imm_95_8,
  Convert__Reg1_1__Reg1_3__imm_95_8,
  Convert__Reg1_1__Imm1_3__imm_95_8,
  Convert__regG0__Reg1_0__imm_95_13,
  Convert__regG0__Imm1_0__imm_95_13,
  Convert__regG0__Reg1_1__imm_95_13,
  Convert__regG0__Imm1_1__imm_95_13,
  Convert__Reg1_0__Reg1_2__imm_95_13,
  Convert__Reg1_0__Imm1_2__imm_95_13,
  Convert__Reg1_1__Reg1_3__imm_95_13,
  Convert__Reg1_1__Imm1_3__imm_95_13,
  Convert__regG0__Reg1_0__imm_95_5,
  Convert__regG0__Imm1_0__imm_95_5,
  Convert__regG0__Reg1_1__imm_95_5,
  Convert__regG0__Imm1_1__imm_95_5,
  Convert__Reg1_0__Reg1_2__imm_95_5,
  Convert__Reg1_0__Imm1_2__imm_95_5,
  Convert__Reg1_1__Reg1_3__imm_95_5,
  Convert__Reg1_1__Imm1_3__imm_95_5,
  Convert__regG0__Reg1_0__imm_95_1,
  Convert__regG0__Imm1_0__imm_95_1,
  Convert__regG0__Reg1_1__imm_95_1,
  Convert__regG0__Imm1_1__imm_95_1,
  Convert__Reg1_0__Reg1_2__imm_95_1,
  Convert__Reg1_0__Imm1_2__imm_95_1,
  Convert__Reg1_1__Reg1_3__imm_95_1,
  Convert__Reg1_1__Imm1_3__imm_95_1,
  Convert__regG0__Reg1_0__imm_95_10,
  Convert__regG0__Imm1_0__imm_95_10,
  Convert__regG0__Reg1_1__imm_95_10,
  Convert__regG0__Imm1_1__imm_95_10,
  Convert__Reg1_0__Reg1_2__imm_95_10,
  Convert__Reg1_0__Imm1_2__imm_95_10,
  Convert__Reg1_1__Reg1_3__imm_95_10,
  Convert__Reg1_1__Imm1_3__imm_95_10,
  Convert__regG0__Reg1_0__imm_95_11,
  Convert__regG0__Imm1_0__imm_95_11,
  Convert__regG0__Reg1_1__imm_95_11,
  Convert__regG0__Imm1_1__imm_95_11,
  Convert__Reg1_0__Reg1_2__imm_95_11,
  Convert__Reg1_0__Imm1_2__imm_95_11,
  Convert__Reg1_1__Reg1_3__imm_95_11,
  Convert__Reg1_1__Imm1_3__imm_95_11,
  Convert__regG0__Reg1_0__imm_95_12,
  Convert__regG0__Imm1_0__imm_95_12,
  Convert__regG0__Reg1_1__imm_95_12,
  Convert__regG0__Imm1_1__imm_95_12,
  Convert__Reg1_0__Reg1_2__imm_95_12,
  Convert__Reg1_0__Imm1_2__imm_95_12,
  Convert__Reg1_1__Reg1_3__imm_95_12,
  Convert__Reg1_1__Imm1_3__imm_95_12,
  Convert__regG0__Reg1_0__imm_95_3,
  Convert__regG0__Imm1_0__imm_95_3,
  Convert__regG0__Reg1_1__imm_95_3,
  Convert__regG0__Imm1_1__imm_95_3,
  Convert__Reg1_0__Reg1_2__imm_95_3,
  Convert__Reg1_0__Imm1_2__imm_95_3,
  Convert__Reg1_1__Reg1_3__imm_95_3,
  Convert__Reg1_1__Imm1_3__imm_95_3,
  Convert__regG0__Reg1_0__imm_95_2,
  Convert__regG0__Imm1_0__imm_95_2,
  Convert__regG0__Reg1_1__imm_95_2,
  Convert__regG0__Imm1_1__imm_95_2,
  Convert__Reg1_0__Reg1_2__imm_95_2,
  Convert__Reg1_0__Imm1_2__imm_95_2,
  Convert__Reg1_1__Reg1_3__imm_95_2,
  Convert__Reg1_1__Imm1_3__imm_95_2,
  Convert__regG0__Reg1_0__imm_95_4,
  Convert__regG0__Imm1_0__imm_95_4,
  Convert__regG0__Reg1_1__imm_95_4,
  Convert__regG0__Imm1_1__imm_95_4,
  Convert__Reg1_0__Reg1_2__imm_95_4,
  Convert__Reg1_0__Imm1_2__imm_95_4,
  Convert__Reg1_1__Reg1_3__imm_95_4,
  Convert__Reg1_1__Imm1_3__imm_95_4,
  Convert__regG0__Reg1_0__imm_95_0,
  Convert__regG0__Imm1_0__imm_95_0,
  Convert__regG0__Reg1_1__imm_95_0,
  Convert__regG0__Imm1_1__imm_95_0,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Imm1_2__imm_95_0,
  Convert__Reg1_1__Reg1_3__imm_95_0,
  Convert__Reg1_1__Imm1_3__imm_95_0,
  Convert__regG0__Reg1_0__imm_95_9,
  Convert__regG0__Imm1_0__imm_95_9,
  Convert__regG0__Reg1_1__imm_95_9,
  Convert__regG0__Imm1_1__imm_95_9,
  Convert__Reg1_0__Reg1_2__imm_95_9,
  Convert__Reg1_0__Imm1_2__imm_95_9,
  Convert__Reg1_1__Reg1_3__imm_95_9,
  Convert__Reg1_1__Imm1_3__imm_95_9,
  Convert__regG0__Reg1_0__imm_95_6,
  Convert__regG0__Imm1_0__imm_95_6,
  Convert__regG0__Reg1_1__imm_95_6,
  Convert__regG0__Imm1_1__imm_95_6,
  Convert__Reg1_0__Reg1_2__imm_95_6,
  Convert__Reg1_0__Imm1_2__imm_95_6,
  Convert__Reg1_1__Reg1_3__imm_95_6,
  Convert__Reg1_1__Imm1_3__imm_95_6,
  Convert__regG0__Reg1_0__imm_95_14,
  Convert__regG0__Imm1_0__imm_95_14,
  Convert__regG0__Reg1_1__imm_95_14,
  Convert__regG0__Imm1_1__imm_95_14,
  Convert__Reg1_0__Reg1_2__imm_95_14,
  Convert__Reg1_0__Imm1_2__imm_95_14,
  Convert__Reg1_1__Reg1_3__imm_95_14,
  Convert__Reg1_1__Imm1_3__imm_95_14,
  Convert__regG0__Reg1_0__imm_95_15,
  Convert__regG0__Imm1_0__imm_95_15,
  Convert__regG0__Reg1_1__imm_95_15,
  Convert__regG0__Imm1_1__imm_95_15,
  Convert__Reg1_0__Reg1_2__imm_95_15,
  Convert__Reg1_0__Imm1_2__imm_95_15,
  Convert__Reg1_1__Reg1_3__imm_95_15,
  Convert__Reg1_1__Imm1_3__imm_95_15,
  Convert__regG0__Reg1_0__imm_95_7,
  Convert__regG0__Imm1_0__imm_95_7,
  Convert__regG0__Reg1_1__imm_95_7,
  Convert__regG0__Imm1_1__imm_95_7,
  Convert__Reg1_0__Reg1_2__imm_95_7,
  Convert__Reg1_0__Imm1_2__imm_95_7,
  Convert__Reg1_1__Reg1_3__imm_95_7,
  Convert__Reg1_1__Imm1_3__imm_95_7,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_2__Reg1_0__Reg1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_3__Imm1_0
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_4__Imm1_0
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_8
  { CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_8
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_8
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_8
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_13
  { CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_13
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_13
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_13
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_5
  { CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_5
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_5
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_5
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_1
  { CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_1
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_1
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_10
  { CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_10
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_10
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_10
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_11
  { CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_11
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_11
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_11
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_12
  { CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_12
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_12
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_12
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_3
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_3
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_3
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_3
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_2
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_2
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_4
  { CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_4
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_4
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_4
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_0
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_9
  { CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_9
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_9
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_9
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_6
  { CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_6
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_6
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_6
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_14
  { CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_14
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_14
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_14
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Imm1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_0__imm_95_15
  { CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_15
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_15
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_15
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_7
  { CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_7
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_7
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_7
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regO7__MEMri2_0
  { CVT_regO7, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regO7__MEMrr2_0
  { CVT_regO7, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_4__Reg1_1__Reg1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__Imm1_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__Imm1_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_4__Imm1_0__Reg1_3
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Imm1_1__imm_95_0__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_9__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_9__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_9__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_6__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_6__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_6__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_11__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_11__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_11__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_4__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_4__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_4__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_13__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_13__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_13__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_2__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_2__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_2__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_8__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_8__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_1__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_1__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_1__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_15__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_15__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_15__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_7__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_7__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_7__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_10__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_10__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_10__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_5__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_5__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_5__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_12__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_12__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_12__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_3__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_3__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_3__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_14__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_14__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_14__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__regFCC0__Reg1_0__Reg1_1
  { CVT_regFCC0, 0, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_3__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__MEMri2_0
  { CVT_regG0, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regG0__MEMrr2_0
  { CVT_regG0, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMri2_0
  { CVT_95_Reg, 2, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMrr2_0
  { CVT_95_Reg, 2, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_3__MEMri2_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__regG0__Reg1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Imm1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__regG0__regG0__regG0
  { CVT_regG0, 0, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__imm_95_8
  { CVT_imm_95_8, 0, CVT_Done },
  // Convert__MEMri2_0
  { CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__MEMrr2_0
  { CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__MEMri2_2__Reg1_0
  { CVT_95_addMEMriOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0__Imm1_4
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_3__MEMri2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
};

void SparcAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_11:
      Inst.addOperand(MCOperand::createImm(11));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_regO7:
      Inst.addOperand(MCOperand::createReg(SP::O7));
      break;
    case CVT_95_addMEMriOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMriOperands(Inst, 2);
      break;
    case CVT_95_addMEMrrOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMrrOperands(Inst, 2);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(SP::FCC0));
      break;
    case CVT_regG0:
      Inst.addOperand(MCOperand::createReg(SP::G0));
      break;
    }
  }
}

void SparcAsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_11:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regO7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMEMriOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMEMrrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regG0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
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
  MCK__PCT_fcc0, // '%fcc0'
  MCK__PCT_icc, // '%icc'
  MCK__PCT_psr, // '%psr'
  MCK__PCT_tbr, // '%tbr'
  MCK__PCT_wim, // '%wim'
  MCK__PCT_xcc, // '%xcc'
  MCK__43_, // '+'
  MCK_3, // '3'
  MCK_5, // '5'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_a, // 'a'
  MCK_pn, // 'pn'
  MCK_pt, // 'pt'
  MCK_FCCRegs, // register class 'FCCRegs'
  MCK_ASRRegs, // register class 'ASRRegs'
  MCK_IntRegs, // register class 'IntRegs,I64Regs'
  MCK_FPRegs, // register class 'FPRegs'
  MCK_Reg4, // derived register class
  MCK_DFPRegs, // register class 'DFPRegs'
  MCK_Reg6, // derived register class
  MCK_QFPRegs, // register class 'QFPRegs'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MEMri, // user defined class 'SparcMEMriAsmOperand'
  MCK_MEMrr, // user defined class 'SparcMEMrrAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case 'a':	 // 1 string to match.
      return MCK_a;	 // "a"
    }
    break;
  case 2:	 // 2 strings to match.
    if (Name[0] != 'p')
      break;
    switch (Name[1]) {
    default: break;
    case 'n':	 // 1 string to match.
      return MCK_pn;	 // "pn"
    case 't':	 // 1 string to match.
      return MCK_pt;	 // "pt"
    }
    break;
  case 4:	 // 5 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_icc;	 // "%icc"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2))
        break;
      return MCK__PCT_psr;	 // "%psr"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "br", 2))
        break;
      return MCK__PCT_tbr;	 // "%tbr"
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+2, "im", 2))
        break;
      return MCK__PCT_wim;	 // "%wim"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_xcc;	 // "%xcc"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%fcc0", 5))
      break;
    return MCK__PCT_fcc0;	 // "%fcc0"
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

  case MCK_Reg4:
    return B == MCK_DFPRegs;

  case MCK_Reg6:
    return B == MCK_QFPRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SparcOperand &Operand = (SparcOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMri' class
  if (Kind == MCK_MEMri) {
    if (Operand.isMEMri())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMrr' class
  if (Kind == MCK_MEMrr) {
    if (Operand.isMEMrr())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Sparc::FCC0: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC1: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC2: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC3: OpKind = MCK_FCCRegs; break;
    case Sparc::Y: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR1: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR2: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR3: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR4: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR5: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR6: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR7: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR8: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR9: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR10: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR11: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR12: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR13: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR14: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR15: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR16: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR17: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR18: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR19: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR20: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR21: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR22: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR23: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR24: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR25: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR26: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR27: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR28: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR29: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR30: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR31: OpKind = MCK_ASRRegs; break;
    case Sparc::G0: OpKind = MCK_IntRegs; break;
    case Sparc::G1: OpKind = MCK_IntRegs; break;
    case Sparc::G2: OpKind = MCK_IntRegs; break;
    case Sparc::G3: OpKind = MCK_IntRegs; break;
    case Sparc::G4: OpKind = MCK_IntRegs; break;
    case Sparc::G5: OpKind = MCK_IntRegs; break;
    case Sparc::G6: OpKind = MCK_IntRegs; break;
    case Sparc::G7: OpKind = MCK_IntRegs; break;
    case Sparc::O0: OpKind = MCK_IntRegs; break;
    case Sparc::O1: OpKind = MCK_IntRegs; break;
    case Sparc::O2: OpKind = MCK_IntRegs; break;
    case Sparc::O3: OpKind = MCK_IntRegs; break;
    case Sparc::O4: OpKind = MCK_IntRegs; break;
    case Sparc::O5: OpKind = MCK_IntRegs; break;
    case Sparc::O6: OpKind = MCK_IntRegs; break;
    case Sparc::O7: OpKind = MCK_IntRegs; break;
    case Sparc::L0: OpKind = MCK_IntRegs; break;
    case Sparc::L1: OpKind = MCK_IntRegs; break;
    case Sparc::L2: OpKind = MCK_IntRegs; break;
    case Sparc::L3: OpKind = MCK_IntRegs; break;
    case Sparc::L4: OpKind = MCK_IntRegs; break;
    case Sparc::L5: OpKind = MCK_IntRegs; break;
    case Sparc::L6: OpKind = MCK_IntRegs; break;
    case Sparc::L7: OpKind = MCK_IntRegs; break;
    case Sparc::I0: OpKind = MCK_IntRegs; break;
    case Sparc::I1: OpKind = MCK_IntRegs; break;
    case Sparc::I2: OpKind = MCK_IntRegs; break;
    case Sparc::I3: OpKind = MCK_IntRegs; break;
    case Sparc::I4: OpKind = MCK_IntRegs; break;
    case Sparc::I5: OpKind = MCK_IntRegs; break;
    case Sparc::I6: OpKind = MCK_IntRegs; break;
    case Sparc::I7: OpKind = MCK_IntRegs; break;
    case Sparc::F0: OpKind = MCK_FPRegs; break;
    case Sparc::F1: OpKind = MCK_FPRegs; break;
    case Sparc::F2: OpKind = MCK_FPRegs; break;
    case Sparc::F3: OpKind = MCK_FPRegs; break;
    case Sparc::F4: OpKind = MCK_FPRegs; break;
    case Sparc::F5: OpKind = MCK_FPRegs; break;
    case Sparc::F6: OpKind = MCK_FPRegs; break;
    case Sparc::F7: OpKind = MCK_FPRegs; break;
    case Sparc::F8: OpKind = MCK_FPRegs; break;
    case Sparc::F9: OpKind = MCK_FPRegs; break;
    case Sparc::F10: OpKind = MCK_FPRegs; break;
    case Sparc::F11: OpKind = MCK_FPRegs; break;
    case Sparc::F12: OpKind = MCK_FPRegs; break;
    case Sparc::F13: OpKind = MCK_FPRegs; break;
    case Sparc::F14: OpKind = MCK_FPRegs; break;
    case Sparc::F15: OpKind = MCK_FPRegs; break;
    case Sparc::F16: OpKind = MCK_FPRegs; break;
    case Sparc::F17: OpKind = MCK_FPRegs; break;
    case Sparc::F18: OpKind = MCK_FPRegs; break;
    case Sparc::F19: OpKind = MCK_FPRegs; break;
    case Sparc::F20: OpKind = MCK_FPRegs; break;
    case Sparc::F21: OpKind = MCK_FPRegs; break;
    case Sparc::F22: OpKind = MCK_FPRegs; break;
    case Sparc::F23: OpKind = MCK_FPRegs; break;
    case Sparc::F24: OpKind = MCK_FPRegs; break;
    case Sparc::F25: OpKind = MCK_FPRegs; break;
    case Sparc::F26: OpKind = MCK_FPRegs; break;
    case Sparc::F27: OpKind = MCK_FPRegs; break;
    case Sparc::F28: OpKind = MCK_FPRegs; break;
    case Sparc::F29: OpKind = MCK_FPRegs; break;
    case Sparc::F30: OpKind = MCK_FPRegs; break;
    case Sparc::F31: OpKind = MCK_FPRegs; break;
    case Sparc::D0: OpKind = MCK_Reg4; break;
    case Sparc::D1: OpKind = MCK_Reg4; break;
    case Sparc::D2: OpKind = MCK_Reg4; break;
    case Sparc::D3: OpKind = MCK_Reg4; break;
    case Sparc::D4: OpKind = MCK_Reg4; break;
    case Sparc::D5: OpKind = MCK_Reg4; break;
    case Sparc::D6: OpKind = MCK_Reg4; break;
    case Sparc::D7: OpKind = MCK_Reg4; break;
    case Sparc::D8: OpKind = MCK_Reg4; break;
    case Sparc::D9: OpKind = MCK_Reg4; break;
    case Sparc::D10: OpKind = MCK_Reg4; break;
    case Sparc::D11: OpKind = MCK_Reg4; break;
    case Sparc::D12: OpKind = MCK_Reg4; break;
    case Sparc::D13: OpKind = MCK_Reg4; break;
    case Sparc::D14: OpKind = MCK_Reg4; break;
    case Sparc::D15: OpKind = MCK_Reg4; break;
    case Sparc::D16: OpKind = MCK_DFPRegs; break;
    case Sparc::D17: OpKind = MCK_DFPRegs; break;
    case Sparc::D18: OpKind = MCK_DFPRegs; break;
    case Sparc::D19: OpKind = MCK_DFPRegs; break;
    case Sparc::D20: OpKind = MCK_DFPRegs; break;
    case Sparc::D21: OpKind = MCK_DFPRegs; break;
    case Sparc::D22: OpKind = MCK_DFPRegs; break;
    case Sparc::D23: OpKind = MCK_DFPRegs; break;
    case Sparc::D24: OpKind = MCK_DFPRegs; break;
    case Sparc::D25: OpKind = MCK_DFPRegs; break;
    case Sparc::D26: OpKind = MCK_DFPRegs; break;
    case Sparc::D27: OpKind = MCK_DFPRegs; break;
    case Sparc::D28: OpKind = MCK_DFPRegs; break;
    case Sparc::D29: OpKind = MCK_DFPRegs; break;
    case Sparc::D30: OpKind = MCK_DFPRegs; break;
    case Sparc::D31: OpKind = MCK_DFPRegs; break;
    case Sparc::Q0: OpKind = MCK_Reg6; break;
    case Sparc::Q1: OpKind = MCK_Reg6; break;
    case Sparc::Q2: OpKind = MCK_Reg6; break;
    case Sparc::Q3: OpKind = MCK_Reg6; break;
    case Sparc::Q4: OpKind = MCK_Reg6; break;
    case Sparc::Q5: OpKind = MCK_Reg6; break;
    case Sparc::Q6: OpKind = MCK_Reg6; break;
    case Sparc::Q7: OpKind = MCK_Reg6; break;
    case Sparc::Q8: OpKind = MCK_QFPRegs; break;
    case Sparc::Q9: OpKind = MCK_QFPRegs; break;
    case Sparc::Q10: OpKind = MCK_QFPRegs; break;
    case Sparc::Q11: OpKind = MCK_QFPRegs; break;
    case Sparc::Q12: OpKind = MCK_QFPRegs; break;
    case Sparc::Q13: OpKind = MCK_QFPRegs; break;
    case Sparc::Q14: OpKind = MCK_QFPRegs; break;
    case Sparc::Q15: OpKind = MCK_QFPRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SparcAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Sparc::FeatureV9]))
    Features |= Feature_HasV9;
  if ((FB[Sparc::FeatureVIS]))
    Features |= Feature_HasVIS;
  if ((FB[Sparc::FeatureVIS2]))
    Features |= Feature_HasVIS2;
  if ((FB[Sparc::FeatureVIS3]))
    Features |= Feature_HasVIS3;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\005addcc\004addx\005addxc\006addxcc\007addxccc\talignaddr\nalig"
    "naddrl\003and\005andcc\004andn\006andncc\007array16\007array32\006array"
    "8\001b\002ba\003bcc\003bcs\002be\002bg\003bge\004bgeu\003bgu\002bl\003b"
    "le\004bleu\003blu\005bmask\002bn\003bne\004bneg\003bnz\004bpos\005brgez"
    "\004brgz\005brlez\004brlz\004brnz\003brz\010bshuffle\003bvc\003bvs\002b"
    "z\004call\003cas\004casx\007cmask16\007cmask32\006cmask8\003cmp\006edge"
    "16\007edge16l\010edge16ln\007edge16n\006edge32\007edge32l\010edge32ln\007"
    "edge32n\005edge8\006edge8l\007edge8ln\006edge8n\005fabsd\005fabsq\005fa"
    "bss\005faddd\005faddq\005fadds\nfaligndata\004fand\010fandnot1\tfandnot"
    "1s\010fandnot2\tfandnot2s\005fands\002fb\003fba\003fbe\003fbg\004fbge\003"
    "fbl\004fble\004fblg\003fbn\004fbne\004fbnz\003fbo\003fbu\004fbue\004fbu"
    "g\005fbuge\004fbul\005fbule\003fbz\010fchksm16\005fcmpd\006fcmped\006fc"
    "mpeq\010fcmpeq16\010fcmpeq32\006fcmpes\010fcmpgt16\010fcmpgt32\010fcmpl"
    "e16\010fcmple32\010fcmpne16\010fcmpne32\005fcmpq\005fcmps\005fdivd\005f"
    "divq\005fdivs\006fdmulq\005fdtoi\005fdtoq\005fdtos\005fdtox\007fexpand\006"
    "fhaddd\006fhadds\006fhsubd\006fhsubs\005fitod\005fitoq\005fitos\006flcm"
    "pd\006flcmps\006flushw\007fmean16\005fmovd\006fmovda\007fmovdcc\007fmov"
    "dcs\006fmovde\006fmovdg\007fmovdge\010fmovdgeu\007fmovdgu\006fmovdl\007"
    "fmovdle\010fmovdleu\007fmovdlg\007fmovdlu\006fmovdn\007fmovdne\010fmovd"
    "neg\007fmovdnz\006fmovdo\010fmovdpos\006fmovdu\007fmovdue\007fmovdug\010"
    "fmovduge\007fmovdul\010fmovdule\007fmovdvc\007fmovdvs\006fmovdz\005fmov"
    "q\006fmovqa\007fmovqcc\007fmovqcs\006fmovqe\006fmovqg\007fmovqge\010fmo"
    "vqgeu\007fmovqgu\006fmovql\007fmovqle\010fmovqleu\007fmovqlg\007fmovqlu"
    "\006fmovqn\007fmovqne\010fmovqneg\007fmovqnz\006fmovqo\010fmovqpos\006f"
    "movqu\007fmovque\007fmovqug\010fmovquge\007fmovqul\010fmovqule\007fmovq"
    "vc\007fmovqvs\006fmovqz\tfmovrdgez\010fmovrdgz\tfmovrdlez\010fmovrdlz\010"
    "fmovrdnz\007fmovrdz\tfmovrqgez\010fmovrqgz\tfmovrqlez\010fmovrqlz\010fm"
    "ovrqnz\007fmovrqz\tfmovrsgez\010fmovrsgz\tfmovrslez\010fmovrslz\010fmov"
    "rsnz\007fmovrsz\005fmovs\006fmovsa\007fmovscc\007fmovscs\006fmovse\006f"
    "movsg\007fmovsge\010fmovsgeu\007fmovsgu\006fmovsl\007fmovsle\010fmovsle"
    "u\007fmovslg\007fmovslu\006fmovsn\007fmovsne\010fmovsneg\007fmovsnz\006"
    "fmovso\010fmovspos\006fmovsu\007fmovsue\007fmovsug\010fmovsuge\007fmovs"
    "ul\010fmovsule\007fmovsvc\007fmovsvs\006fmovsz\nfmul8sux16\nfmul8ulx16\010"
    "fmul8x16\nfmul8x16al\nfmul8x16au\005fmuld\013fmuld8sux16\013fmuld8ulx16"
    "\005fmulq\005fmuls\006fnaddd\006fnadds\005fnand\006fnands\005fnegd\005f"
    "negq\005fnegs\007fnhaddd\007fnhadds\004fnor\005fnors\005fnot1\006fnot1s"
    "\005fnot2\006fnot2s\004fone\005fones\003for\007fornot1\010fornot1s\007f"
    "ornot2\010fornot2s\004fors\007fpack16\007fpack32\010fpackfix\007fpadd16"
    "\010fpadd16s\007fpadd32\010fpadd32s\007fpadd64\007fpmerge\007fpsub16\010"
    "fpsub16S\007fpsub32\010fpsub32S\005fqtod\005fqtoi\005fqtos\005fqtox\007"
    "fslas16\007fslas32\006fsll16\006fsll32\006fsmuld\006fsqrtd\006fsqrtq\006"
    "fsqrts\006fsra16\006fsra32\005fsrc1\006fsrc1s\005fsrc2\006fsrc2s\006fsr"
    "l16\006fsrl32\005fstod\005fstoi\005fstoq\005fstox\005fsubd\005fsubq\005"
    "fsubs\005fxnor\006fxnors\004fxor\005fxors\005fxtod\005fxtoq\005fxtos\005"
    "fzero\006fzeros\003jmp\004jmpl\002ld\003lda\003ldd\003ldq\004ldsb\005ld"
    "sba\004ldsh\005ldsha\004ldsw\004ldub\005lduba\004lduh\005lduha\003ldx\005"
    "lzcnt\006membar\003mov\004mova\005movcc\005movcs\007movdtox\004move\004"
    "movg\005movge\006movgeu\005movgu\004movl\005movle\006movleu\005movlg\005"
    "movlu\004movn\005movne\006movneg\005movnz\004movo\006movpos\007movrgez\006"
    "movrgz\007movrlez\006movrlz\006movrnz\005movrz\010movstosw\010movstouw\004"
    "movu\005movue\005movug\006movuge\005movul\006movule\005movvc\005movvs\004"
    "movz\004mulx\003nop\002or\004orcc\003orn\005orncc\005pdist\006pdistn\004"
    "popc\002rd\007restore\003ret\004retl\004rett\004save\004sdiv\006sdivcc\005"
    "sdivx\003set\005sethi\010shutdown\004siam\003sll\004sllx\004smul\006smu"
    "lcc\003sra\004srax\003srl\004srlx\002st\003sta\003stb\004stba\005stbar\003"
    "std\003sth\004stha\003stq\003stx\003sub\005subcc\004subx\006subxcc\004s"
    "wap\005swapa\001t\002ta\006taddcc\010taddcctv\003tcc\003tcs\002te\002tg"
    "\003tge\004tgeu\003tgu\002tl\003tle\004tleu\003tlu\002tn\003tne\004tneg"
    "\003tnz\004tpos\006tsubcc\010tsubcctv\003tvc\003tvs\002tz\004udiv\006ud"
    "ivcc\005udivx\004umul\006umulcc\007umulxhi\005unimp\002wr\005xmulx\007x"
    "mulxhi\004xnor\006xnorcc\003xor\005xorcc";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
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
  { 0 /* add */, Sparc::ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 0 /* add */, Sparc::ADDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 15 /* addxc */, Sparc::ADDXC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 28 /* addxccc */, Sparc::ADDXCCC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 36 /* alignaddr */, Sparc::ALIGNADDR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 46 /* alignaddrl */, Sparc::ALIGNADDRL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 79 /* array16 */, Sparc::ARRAY16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 87 /* array32 */, Sparc::ARRAY32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 95 /* array8 */, Sparc::ARRAY8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 102 /* b */, Sparc::BCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICC, Convert__Imm1_2__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCC, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCA, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCA, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCNT, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCNT, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCANT, Convert__Imm1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCANT, Convert__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BA, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_1__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_2__imm_95_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 111 /* bcs */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 115 /* be */, Sparc::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 115 /* be */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICC, Convert__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCC, Convert__Imm1_1__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCA, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_10, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_10, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICC, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCC, Convert__Imm1_2__imm_95_10, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPICCA, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 118 /* bg */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICC, Convert__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCC, Convert__Imm1_1__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCA, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_11, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_11, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICC, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCC, Convert__Imm1_2__imm_95_11, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPICCA, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 121 /* bge */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 125 /* bgeu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICC, Convert__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_12, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_12, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICC, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_12, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICC, Convert__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCC, Convert__Imm1_1__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICCA, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_3, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_3, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICC, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCC, Convert__Imm1_2__imm_95_3, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPICCA, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bl */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICC, Convert__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCC, Convert__Imm1_1__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICCA, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_2, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_2, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICC, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCC, Convert__Imm1_2__imm_95_2, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPICCA, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 137 /* ble */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICC, Convert__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_4, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_4, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICC, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_4, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 141 /* bleu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* blu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bmask */, Sparc::BMASK, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 156 /* bn */, Sparc::BCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICC, Convert__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCC, Convert__Imm1_1__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICCA, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_0, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_0, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICC, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCC, Convert__Imm1_2__imm_95_0, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPICCA, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 156 /* bn */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 159 /* bne */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICC, Convert__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCC, Convert__Imm1_1__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICCA, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_6, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_6, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICC, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCC, Convert__Imm1_2__imm_95_6, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPICCA, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 163 /* bneg */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bnz */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICC, Convert__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCC, Convert__Imm1_1__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICCA, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_14, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_14, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICC, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCC, Convert__Imm1_2__imm_95_14, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPICCA, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bpos */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 177 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 183 /* brgz */, Sparc::BPGZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 194 /* brlz */, Sparc::BPLZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brnz */, Sparc::BPNZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brz */, Sparc::BPZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 208 /* bshuffle */, Sparc::BSHUFFLE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 217 /* bvc */, Sparc::BCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICC, Convert__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCC, Convert__Imm1_1__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICCA, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_15, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_15, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICC, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCC, Convert__Imm1_2__imm_95_15, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPICCA, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 217 /* bvc */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICC, Convert__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCC, Convert__Imm1_1__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICCA, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_7, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_7, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICC, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCC, Convert__Imm1_2__imm_95_7, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPICCA, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 221 /* bvs */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 225 /* bz */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 228 /* call */, Sparc::CALL, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 228 /* call */, Sparc::JMPLri, Convert__regO7__MEMri2_0, 0, { MCK_MEMri }, },
  { 228 /* call */, Sparc::JMPLrr, Convert__regO7__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 233 /* cas */, Sparc::CASrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, Feature_HasV9, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 237 /* casx */, Sparc::CASXrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 242 /* cmask16 */, Sparc::CMASK16, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 250 /* cmask32 */, Sparc::CMASK32, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 258 /* cmask8 */, Sparc::CMASK8, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 265 /* cmp */, Sparc::CMPrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 265 /* cmp */, Sparc::CMPri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 269 /* edge16 */, Sparc::EDGE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 276 /* edge16l */, Sparc::EDGE16L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 284 /* edge16ln */, Sparc::EDGE16LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 293 /* edge16n */, Sparc::EDGE16N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 301 /* edge32 */, Sparc::EDGE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 308 /* edge32l */, Sparc::EDGE32L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 316 /* edge32ln */, Sparc::EDGE32LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 325 /* edge32n */, Sparc::EDGE32N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 333 /* edge8 */, Sparc::EDGE8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 339 /* edge8l */, Sparc::EDGE8L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 346 /* edge8ln */, Sparc::EDGE8LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 354 /* edge8n */, Sparc::EDGE8N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 361 /* fabsd */, Sparc::FABSD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 367 /* fabsq */, Sparc::FABSQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 373 /* fabss */, Sparc::FABSS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 379 /* faddd */, Sparc::FADDD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 385 /* faddq */, Sparc::FADDQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 391 /* fadds */, Sparc::FADDS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 397 /* faligndata */, Sparc::FALIGNADATA, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 408 /* fand */, Sparc::FAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 413 /* fandnot1 */, Sparc::FANDNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 422 /* fandnot1s */, Sparc::FANDNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 432 /* fandnot2 */, Sparc::FANDNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 441 /* fandnot2s */, Sparc::FANDNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 451 /* fands */, Sparc::FANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 457 /* fb */, Sparc::FBCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 457 /* fb */, Sparc::FBCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 457 /* fb */, Sparc::BPFCC, Convert__Imm1_2__Imm1_0__Reg1_1, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm }, },
  { 457 /* fb */, Sparc::BPFCCA, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 457 /* fb */, Sparc::BPFCCNT, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 457 /* fb */, Sparc::BPFCCANT, Convert__Imm1_4__Imm1_0__Reg1_3, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::FBCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 460 /* fba */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCC, Convert__Imm1_1__imm_95_0__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCC, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 460 /* fba */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 464 /* fbe */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 464 /* fbe */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::FBCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 468 /* fbg */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCC, Convert__Imm1_1__imm_95_6__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCC, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 468 /* fbg */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::FBCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 472 /* fbge */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCC, Convert__Imm1_1__imm_95_11__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCC, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 472 /* fbge */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::FBCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 477 /* fbl */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCC, Convert__Imm1_1__imm_95_4__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCC, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 477 /* fbl */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::FBCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 481 /* fble */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCC, Convert__Imm1_1__imm_95_13__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCC, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 481 /* fble */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::FBCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 486 /* fblg */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCC, Convert__Imm1_1__imm_95_2__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCC, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 486 /* fblg */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::FBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 491 /* fbn */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 491 /* fbn */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 495 /* fbne */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 495 /* fbne */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 500 /* fbnz */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 500 /* fbnz */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::FBCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 505 /* fbo */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCC, Convert__Imm1_1__imm_95_15__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCC, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 505 /* fbo */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::FBCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 509 /* fbu */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCC, Convert__Imm1_1__imm_95_7__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCC, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 509 /* fbu */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::FBCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 513 /* fbue */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCC, Convert__Imm1_1__imm_95_10__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCC, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 513 /* fbue */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::FBCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 518 /* fbug */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCC, Convert__Imm1_1__imm_95_5__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCC, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 518 /* fbug */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::FBCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 523 /* fbuge */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCC, Convert__Imm1_1__imm_95_12__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCC, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 523 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::FBCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 529 /* fbul */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCC, Convert__Imm1_1__imm_95_3__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCC, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 529 /* fbul */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::FBCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 534 /* fbule */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCC, Convert__Imm1_1__imm_95_14__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCC, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 534 /* fbule */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 540 /* fbz */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 540 /* fbz */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fchksm16 */, Sparc::FCHKSM16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 553 /* fcmpd */, Sparc::V9FCMPD, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 553 /* fcmpd */, Sparc::V9FCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 559 /* fcmped */, Sparc::V9FCMPED, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 559 /* fcmped */, Sparc::V9FCMPED, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 566 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 566 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 573 /* fcmpeq16 */, Sparc::FCMPEQ16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 582 /* fcmpeq32 */, Sparc::FCMPEQ32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 591 /* fcmpes */, Sparc::V9FCMPES, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 591 /* fcmpes */, Sparc::V9FCMPES, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 598 /* fcmpgt16 */, Sparc::FCMPGT16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 607 /* fcmpgt32 */, Sparc::FCMPGT32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 616 /* fcmple16 */, Sparc::FCMPLE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 625 /* fcmple32 */, Sparc::FCMPLE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 634 /* fcmpne16 */, Sparc::FCMPNE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 643 /* fcmpne32 */, Sparc::FCMPNE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 652 /* fcmpq */, Sparc::V9FCMPQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 652 /* fcmpq */, Sparc::V9FCMPQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 658 /* fcmps */, Sparc::V9FCMPS, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 658 /* fcmps */, Sparc::V9FCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 664 /* fdivd */, Sparc::FDIVD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 670 /* fdivq */, Sparc::FDIVQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 676 /* fdivs */, Sparc::FDIVS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 682 /* fdmulq */, Sparc::FDMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_QFPRegs }, },
  { 689 /* fdtoi */, Sparc::FDTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 695 /* fdtoq */, Sparc::FDTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 701 /* fdtos */, Sparc::FDTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 707 /* fdtox */, Sparc::FDTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 713 /* fexpand */, Sparc::FEXPAND, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 721 /* fhaddd */, Sparc::FHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 728 /* fhadds */, Sparc::FHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 735 /* fhsubd */, Sparc::FHSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 742 /* fhsubs */, Sparc::FHSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 749 /* fitod */, Sparc::FITOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 755 /* fitoq */, Sparc::FITOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 761 /* fitos */, Sparc::FITOS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 767 /* flcmpd */, Sparc::FLCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 774 /* flcmps */, Sparc::FLCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 781 /* flushw */, Sparc::FLUSHW, Convert_NoOperands, Feature_HasV9, {  }, },
  { 788 /* fmean16 */, Sparc::FMEAN16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 796 /* fmovd */, Sparc::FMOVD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 796 /* fmovd */, Sparc::FMOVD_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_DFPRegs, MCK_DFPRegs }, },
  { 796 /* fmovd */, Sparc::FMOVD_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 796 /* fmovd */, Sparc::FMOVD_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 796 /* fmovd */, Sparc::V9FMOVD_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 802 /* fmovda */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 802 /* fmovda */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 802 /* fmovda */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 809 /* fmovdcc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 809 /* fmovdcc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 817 /* fmovdcs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 817 /* fmovdcs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 825 /* fmovde */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 825 /* fmovde */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 825 /* fmovde */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 832 /* fmovdg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 832 /* fmovdg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 832 /* fmovdg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 839 /* fmovdge */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 839 /* fmovdge */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 839 /* fmovdge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 847 /* fmovdgeu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 847 /* fmovdgeu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 856 /* fmovdgu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 856 /* fmovdgu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 864 /* fmovdl */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 864 /* fmovdl */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 864 /* fmovdl */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 871 /* fmovdle */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 871 /* fmovdle */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 871 /* fmovdle */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 879 /* fmovdleu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 879 /* fmovdleu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 888 /* fmovdlg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 896 /* fmovdlu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 896 /* fmovdlu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 904 /* fmovdn */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 904 /* fmovdn */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 904 /* fmovdn */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 911 /* fmovdne */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 911 /* fmovdne */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 911 /* fmovdne */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 919 /* fmovdneg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 919 /* fmovdneg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 928 /* fmovdnz */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 928 /* fmovdnz */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 928 /* fmovdnz */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovdo */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 943 /* fmovdpos */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 943 /* fmovdpos */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 952 /* fmovdu */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 959 /* fmovdue */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 967 /* fmovdug */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 975 /* fmovduge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 984 /* fmovdul */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 992 /* fmovdule */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1001 /* fmovdvc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1001 /* fmovdvc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1009 /* fmovdvs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1009 /* fmovdvs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1017 /* fmovdz */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1017 /* fmovdz */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1017 /* fmovdz */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1024 /* fmovq */, Sparc::FMOVQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1024 /* fmovq */, Sparc::FMOVQ_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1024 /* fmovq */, Sparc::FMOVQ_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1024 /* fmovq */, Sparc::FMOVQ_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1024 /* fmovq */, Sparc::V9FMOVQ_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1030 /* fmovqa */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1030 /* fmovqa */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1030 /* fmovqa */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1037 /* fmovqcc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1037 /* fmovqcc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1045 /* fmovqcs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1045 /* fmovqcs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1053 /* fmovqe */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1053 /* fmovqe */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1053 /* fmovqe */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1060 /* fmovqg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1060 /* fmovqg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1060 /* fmovqg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1067 /* fmovqge */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1067 /* fmovqge */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1067 /* fmovqge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1075 /* fmovqgeu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1075 /* fmovqgeu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1084 /* fmovqgu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1084 /* fmovqgu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1092 /* fmovql */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1092 /* fmovql */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1092 /* fmovql */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1099 /* fmovqle */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1099 /* fmovqle */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1099 /* fmovqle */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1107 /* fmovqleu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1107 /* fmovqleu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1116 /* fmovqlg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1124 /* fmovqlu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1124 /* fmovqlu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1132 /* fmovqn */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1132 /* fmovqn */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1132 /* fmovqn */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1139 /* fmovqne */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1139 /* fmovqne */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1139 /* fmovqne */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1147 /* fmovqneg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1147 /* fmovqneg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1156 /* fmovqnz */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1156 /* fmovqnz */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1156 /* fmovqnz */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1164 /* fmovqo */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1171 /* fmovqpos */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1171 /* fmovqpos */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1180 /* fmovqu */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1187 /* fmovque */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1195 /* fmovqug */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1203 /* fmovquge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1212 /* fmovqul */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1220 /* fmovqule */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1229 /* fmovqvc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1229 /* fmovqvc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1237 /* fmovqvs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1237 /* fmovqvs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1245 /* fmovqz */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1245 /* fmovqz */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1245 /* fmovqz */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1252 /* fmovrdgez */, Sparc::FMOVRGEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1262 /* fmovrdgz */, Sparc::FMOVRGZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1271 /* fmovrdlez */, Sparc::FMOVRLEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1281 /* fmovrdlz */, Sparc::FMOVRLZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1290 /* fmovrdnz */, Sparc::FMOVRNZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1299 /* fmovrdz */, Sparc::FMOVRZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1307 /* fmovrqgez */, Sparc::FMOVRGEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1317 /* fmovrqgz */, Sparc::FMOVRGZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1326 /* fmovrqlez */, Sparc::FMOVRLEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1336 /* fmovrqlz */, Sparc::FMOVRLZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1345 /* fmovrqnz */, Sparc::FMOVRNZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1354 /* fmovrqz */, Sparc::FMOVRZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1362 /* fmovrsgez */, Sparc::FMOVRGEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1372 /* fmovrsgz */, Sparc::FMOVRGZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1381 /* fmovrslez */, Sparc::FMOVRLEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1391 /* fmovrslz */, Sparc::FMOVRLZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1400 /* fmovrsnz */, Sparc::FMOVRNZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1409 /* fmovrsz */, Sparc::FMOVRZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1417 /* fmovs */, Sparc::FMOVS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1417 /* fmovs */, Sparc::FMOVS_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_FPRegs, MCK_FPRegs }, },
  { 1417 /* fmovs */, Sparc::FMOVS_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1417 /* fmovs */, Sparc::FMOVS_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1417 /* fmovs */, Sparc::V9FMOVS_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1423 /* fmovsa */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1423 /* fmovsa */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1423 /* fmovsa */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1430 /* fmovscc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1430 /* fmovscc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1438 /* fmovscs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1438 /* fmovscs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1446 /* fmovse */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1446 /* fmovse */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1446 /* fmovse */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1453 /* fmovsg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1453 /* fmovsg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1453 /* fmovsg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1460 /* fmovsge */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1460 /* fmovsge */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1460 /* fmovsge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1468 /* fmovsgeu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1468 /* fmovsgeu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1477 /* fmovsgu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1477 /* fmovsgu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1485 /* fmovsl */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1485 /* fmovsl */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1485 /* fmovsl */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1492 /* fmovsle */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1492 /* fmovsle */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1492 /* fmovsle */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1500 /* fmovsleu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1500 /* fmovsleu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1509 /* fmovslg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1517 /* fmovslu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1517 /* fmovslu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1525 /* fmovsn */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1525 /* fmovsn */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1525 /* fmovsn */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1532 /* fmovsne */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1532 /* fmovsne */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1532 /* fmovsne */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1540 /* fmovsneg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1540 /* fmovsneg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1549 /* fmovsnz */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1549 /* fmovsnz */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1549 /* fmovsnz */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1557 /* fmovso */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1564 /* fmovspos */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1564 /* fmovspos */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovsu */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1580 /* fmovsue */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1588 /* fmovsug */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1596 /* fmovsuge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1605 /* fmovsul */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1613 /* fmovsule */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1622 /* fmovsvc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1622 /* fmovsvc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1630 /* fmovsvs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1630 /* fmovsvs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsz */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsz */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsz */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1645 /* fmul8sux16 */, Sparc::FMUL8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1656 /* fmul8ulx16 */, Sparc::FMUL8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1667 /* fmul8x16 */, Sparc::FMUL8X16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1676 /* fmul8x16al */, Sparc::FMUL8X16AL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1687 /* fmul8x16au */, Sparc::FMUL8X16AU, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1698 /* fmuld */, Sparc::FMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1704 /* fmuld8sux16 */, Sparc::FMULD8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1716 /* fmuld8ulx16 */, Sparc::FMULD8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1728 /* fmulq */, Sparc::FMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1734 /* fmuls */, Sparc::FMULS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1740 /* fnaddd */, Sparc::FNADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1747 /* fnadds */, Sparc::FNADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1754 /* fnand */, Sparc::FNAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1760 /* fnands */, Sparc::FNANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1767 /* fnegd */, Sparc::FNEGD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1773 /* fnegq */, Sparc::FNEGQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1779 /* fnegs */, Sparc::FNEGS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1785 /* fnhaddd */, Sparc::FNHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1785 /* fnhaddd */, Sparc::FNMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1793 /* fnhadds */, Sparc::FNHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1793 /* fnhadds */, Sparc::FNMULS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1793 /* fnhadds */, Sparc::FNSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1801 /* fnor */, Sparc::FNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1806 /* fnors */, Sparc::FNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1812 /* fnot1 */, Sparc::FNOT1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1818 /* fnot1s */, Sparc::FNOT1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1825 /* fnot2 */, Sparc::FNOT2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1831 /* fnot2s */, Sparc::FNOT2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1838 /* fone */, Sparc::FONE, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 1843 /* fones */, Sparc::FONES, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 1849 /* for */, Sparc::FOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1853 /* fornot1 */, Sparc::FORNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1861 /* fornot1s */, Sparc::FORNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1870 /* fornot2 */, Sparc::FORNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1878 /* fornot2s */, Sparc::FORNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1887 /* fors */, Sparc::FORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1892 /* fpack16 */, Sparc::FPACK16, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1900 /* fpack32 */, Sparc::FPACK32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1908 /* fpackfix */, Sparc::FPACKFIX, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1917 /* fpadd16 */, Sparc::FPADD16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1925 /* fpadd16s */, Sparc::FPADD16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1934 /* fpadd32 */, Sparc::FPADD32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1942 /* fpadd32s */, Sparc::FPADD32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1951 /* fpadd64 */, Sparc::FPADD64, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1959 /* fpmerge */, Sparc::FPMERGE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1967 /* fpsub16 */, Sparc::FPSUB16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1975 /* fpsub16S */, Sparc::FPSUB16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1984 /* fpsub32 */, Sparc::FPSUB32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1992 /* fpsub32S */, Sparc::FPSUB32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2001 /* fqtod */, Sparc::FQTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2007 /* fqtoi */, Sparc::FQTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2013 /* fqtos */, Sparc::FQTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2019 /* fqtox */, Sparc::FQTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2025 /* fslas16 */, Sparc::FSLAS16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2033 /* fslas32 */, Sparc::FSLAS32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2041 /* fsll16 */, Sparc::FSLL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2048 /* fsll32 */, Sparc::FSLL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2055 /* fsmuld */, Sparc::FSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_DFPRegs }, },
  { 2062 /* fsqrtd */, Sparc::FSQRTD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2069 /* fsqrtq */, Sparc::FSQRTQ, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 2076 /* fsqrts */, Sparc::FSQRTS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2083 /* fsra16 */, Sparc::FSRA16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2090 /* fsra32 */, Sparc::FSRA32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2097 /* fsrc1 */, Sparc::FSRC1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2103 /* fsrc1s */, Sparc::FSRC1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2110 /* fsrc2 */, Sparc::FSRC2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2116 /* fsrc2s */, Sparc::FSRC2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2123 /* fsrl16 */, Sparc::FSRL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2130 /* fsrl32 */, Sparc::FSRL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2137 /* fstod */, Sparc::FSTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2143 /* fstoi */, Sparc::FSTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2149 /* fstoq */, Sparc::FSTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 2155 /* fstox */, Sparc::FSTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2161 /* fsubd */, Sparc::FSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2167 /* fsubq */, Sparc::FSUBQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 2173 /* fsubs */, Sparc::FSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2179 /* fxnor */, Sparc::FXNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2185 /* fxnors */, Sparc::FXNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2192 /* fxor */, Sparc::FXOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2197 /* fxors */, Sparc::FXORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2203 /* fxtod */, Sparc::FXTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2209 /* fxtoq */, Sparc::FXTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 2215 /* fxtos */, Sparc::FXTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 2221 /* fzero */, Sparc::FZERO, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 2227 /* fzeros */, Sparc::FZEROS, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 2234 /* jmp */, Sparc::JMPLri, Convert__regG0__MEMri2_0, 0, { MCK_MEMri }, },
  { 2234 /* jmp */, Sparc::JMPLrr, Convert__regG0__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2238 /* jmpl */, Sparc::JMPLri, Convert__Reg1_1__MEMri2_0, 0, { MCK_MEMri, MCK_IntRegs }, },
  { 2238 /* jmpl */, Sparc::JMPLrr, Convert__Reg1_1__MEMrr2_0, 0, { MCK_MEMrr, MCK_IntRegs }, },
  { 2243 /* ld */, Sparc::LDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2243 /* ld */, Sparc::LDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_FPRegs }, },
  { 2243 /* ld */, Sparc::LDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2243 /* ld */, Sparc::LDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_FPRegs }, },
  { 2246 /* lda */, Sparc::LDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2250 /* ldd */, Sparc::LDDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_DFPRegs }, },
  { 2250 /* ldd */, Sparc::LDDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_DFPRegs }, },
  { 2254 /* ldq */, Sparc::LDQFri, Convert__Reg1_3__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_QFPRegs }, },
  { 2254 /* ldq */, Sparc::LDQFrr, Convert__Reg1_3__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_QFPRegs }, },
  { 2258 /* ldsb */, Sparc::LDSBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2258 /* ldsb */, Sparc::LDSBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2263 /* ldsba */, Sparc::LDSBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2269 /* ldsh */, Sparc::LDSHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2269 /* ldsh */, Sparc::LDSHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2274 /* ldsha */, Sparc::LDSHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2280 /* ldsw */, Sparc::LDSWri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2280 /* ldsw */, Sparc::LDSWrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2285 /* ldub */, Sparc::LDUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2285 /* ldub */, Sparc::LDUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2290 /* lduba */, Sparc::LDUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2296 /* lduh */, Sparc::LDUHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2296 /* lduh */, Sparc::LDUHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2301 /* lduha */, Sparc::LDUHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2307 /* ldx */, Sparc::LDXri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2307 /* ldx */, Sparc::LDXrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2311 /* lzcnt */, Sparc::LZCNT, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs }, },
  { 2317 /* membar */, Sparc::MEMBARi, Convert__Imm1_0, Feature_HasV9, { MCK_Imm }, },
  { 2324 /* mov */, Sparc::ORrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::ORri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVFCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_IntRegs, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVFCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVICCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVICCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVXCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::MOVXCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::V9MOVFCCrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2324 /* mov */, Sparc::V9MOVFCCri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2328 /* mova */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2333 /* movcc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2333 /* movcc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2333 /* movcc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2333 /* movcc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2339 /* movcs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2339 /* movcs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2339 /* movcs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2339 /* movcs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2345 /* movdtox */, Sparc::MOVWTOS, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2345 /* movdtox */, Sparc::MOVXTOD, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2345 /* movdtox */, Sparc::MOVDTOX, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2353 /* move */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2358 /* movg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2363 /* movge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2369 /* movgeu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2369 /* movgeu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2369 /* movgeu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2369 /* movgeu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2376 /* movgu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2376 /* movgu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2376 /* movgu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2376 /* movgu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2382 /* movl */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2387 /* movle */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2393 /* movleu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2393 /* movleu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2393 /* movleu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2393 /* movleu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2400 /* movlg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2400 /* movlg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2406 /* movlu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2406 /* movlu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2406 /* movlu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2406 /* movlu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2412 /* movn */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2417 /* movne */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2423 /* movneg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2423 /* movneg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2423 /* movneg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2423 /* movneg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2430 /* movnz */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2436 /* movo */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2436 /* movo */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2441 /* movpos */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2441 /* movpos */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2441 /* movpos */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2441 /* movpos */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2448 /* movrgez */, Sparc::MOVRGEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2448 /* movrgez */, Sparc::MOVRGEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2456 /* movrgz */, Sparc::MOVRGZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2456 /* movrgz */, Sparc::MOVRGZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2463 /* movrlez */, Sparc::MOVRLEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2463 /* movrlez */, Sparc::MOVRLEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2471 /* movrlz */, Sparc::MOVRLZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2471 /* movrlz */, Sparc::MOVRLZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2478 /* movrnz */, Sparc::MOVRNZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2478 /* movrnz */, Sparc::MOVRNZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2485 /* movrz */, Sparc::MOVRRZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2485 /* movrz */, Sparc::MOVRRZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2491 /* movstosw */, Sparc::MOVSTOSW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2500 /* movstouw */, Sparc::MOVSTOUW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2509 /* movu */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2509 /* movu */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2514 /* movue */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2514 /* movue */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2520 /* movug */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2520 /* movug */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2526 /* movuge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2526 /* movuge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2533 /* movul */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2533 /* movul */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2539 /* movule */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2539 /* movule */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2546 /* movvc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2546 /* movvc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2546 /* movvc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2546 /* movvc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2552 /* movvs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2552 /* movvs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2552 /* movvs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2552 /* movvs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2558 /* movz */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2563 /* mulx */, Sparc::MULXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2563 /* mulx */, Sparc::MULXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2568 /* nop */, Sparc::NOP, Convert_NoOperands, 0, {  }, },
  { 2572 /* or */, Sparc::ORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2572 /* or */, Sparc::ORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2575 /* orcc */, Sparc::ORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2575 /* orcc */, Sparc::ORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2580 /* orn */, Sparc::ORNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2580 /* orn */, Sparc::ORNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2584 /* orncc */, Sparc::ORNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2584 /* orncc */, Sparc::ORNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2590 /* pdist */, Sparc::PDIST, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2596 /* pdistn */, Sparc::PDISTN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2603 /* popc */, Sparc::POPCrr, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2608 /* rd */, Sparc::RDPSR, Convert__Reg1_1, 0, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2608 /* rd */, Sparc::RDTBR, Convert__Reg1_1, 0, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2608 /* rd */, Sparc::RDWIM, Convert__Reg1_1, 0, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2608 /* rd */, Sparc::RDASR, Convert__Reg1_1__Reg1_0, 0, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2611 /* restore */, Sparc::RESTORErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2611 /* restore */, Sparc::RESTORErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2611 /* restore */, Sparc::RESTOREri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2619 /* ret */, Sparc::RET, Convert__imm_95_8, 0, {  }, },
  { 2623 /* retl */, Sparc::RETL, Convert__imm_95_8, 0, {  }, },
  { 2628 /* rett */, Sparc::RETTri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 2628 /* rett */, Sparc::RETTrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2633 /* save */, Sparc::SAVErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2633 /* save */, Sparc::SAVEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2638 /* sdiv */, Sparc::SDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2638 /* sdiv */, Sparc::SDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* sdivcc */, Sparc::SDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* sdivcc */, Sparc::SDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2650 /* sdivx */, Sparc::SDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2650 /* sdivx */, Sparc::SDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2656 /* set */, Sparc::SET, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2660 /* sethi */, Sparc::SETHIi, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2666 /* shutdown */, Sparc::SHUTDOWN, Convert_NoOperands, Feature_HasVIS, {  }, },
  { 2675 /* siam */, Sparc::SIAM, Convert_NoOperands, Feature_HasVIS2, {  }, },
  { 2680 /* sll */, Sparc::SLLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2680 /* sll */, Sparc::SLLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2684 /* sllx */, Sparc::SLLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2684 /* sllx */, Sparc::SLLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2689 /* smul */, Sparc::SMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2689 /* smul */, Sparc::SMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2694 /* smulcc */, Sparc::SMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2694 /* smulcc */, Sparc::SMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2701 /* sra */, Sparc::SRArr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2701 /* sra */, Sparc::SRAri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2705 /* srax */, Sparc::SRAXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2705 /* srax */, Sparc::SRAXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2710 /* srl */, Sparc::SRLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2710 /* srl */, Sparc::SRLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2714 /* srlx */, Sparc::SRLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2714 /* srlx */, Sparc::SRLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2719 /* st */, Sparc::STri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2719 /* st */, Sparc::STrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2719 /* st */, Sparc::STFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2719 /* st */, Sparc::STFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2722 /* sta */, Sparc::STArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2726 /* stb */, Sparc::STBri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2726 /* stb */, Sparc::STBrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2730 /* stba */, Sparc::STBArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2735 /* stbar */, Sparc::STBAR, Convert_NoOperands, 0, {  }, },
  { 2741 /* std */, Sparc::STDFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2741 /* std */, Sparc::STDFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2745 /* sth */, Sparc::STHri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2745 /* sth */, Sparc::STHrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2749 /* stha */, Sparc::STHArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2754 /* stq */, Sparc::STQFri, Convert__MEMri2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2754 /* stq */, Sparc::STQFrr, Convert__MEMrr2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2758 /* stx */, Sparc::STXri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2758 /* stx */, Sparc::STXrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2762 /* sub */, Sparc::SUBrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2762 /* sub */, Sparc::SUBri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2766 /* subcc */, Sparc::SUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2766 /* subcc */, Sparc::SUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2772 /* subx */, Sparc::SUBCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2772 /* subx */, Sparc::SUBCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2777 /* subxcc */, Sparc::SUBErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2777 /* subxcc */, Sparc::SUBEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2784 /* swap */, Sparc::SWAPri, Convert__Reg1_3__MEMri2_1__Tie0, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2784 /* swap */, Sparc::SWAPrr, Convert__Reg1_3__MEMrr2_1__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2789 /* swapa */, Sparc::SWAPArr, Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2795 /* t */, Sparc::TICCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2795 /* t */, Sparc::TICCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2795 /* t */, Sparc::TXCCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2795 /* t */, Sparc::TXCCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2797 /* ta */, Sparc::TA3, Convert_NoOperands, 0, { MCK_3 }, },
  { 2797 /* ta */, Sparc::TA5, Convert_NoOperands, 0, { MCK_5 }, },
  { 2797 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_8, 0, { MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 2797 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2797 /* ta */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2797 /* ta */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2797 /* ta */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2797 /* ta */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2797 /* ta */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2800 /* taddcc */, Sparc::TADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2800 /* taddcc */, Sparc::TADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2807 /* taddcctv */, Sparc::TADDCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2807 /* taddcctv */, Sparc::TADDCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 2816 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2816 /* tcc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2816 /* tcc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2816 /* tcc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2816 /* tcc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2816 /* tcc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2820 /* tcs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2820 /* tcs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2824 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 2824 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2824 /* te */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2824 /* te */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2824 /* te */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2824 /* te */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2824 /* te */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2827 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_10, 0, { MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 2827 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2827 /* tg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2827 /* tg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2827 /* tg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2827 /* tg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2827 /* tg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2830 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_11, 0, { MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 2830 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2830 /* tge */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2830 /* tge */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2830 /* tge */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2830 /* tge */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2830 /* tge */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2834 /* tgeu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2834 /* tgeu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_12, 0, { MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2839 /* tgu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2839 /* tgu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2843 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_3, 0, { MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 2843 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2843 /* tl */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2843 /* tl */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2843 /* tl */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2843 /* tl */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2843 /* tl */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2846 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_2, 0, { MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 2846 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2846 /* tle */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2846 /* tle */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2846 /* tle */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2846 /* tle */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2846 /* tle */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_4, 0, { MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2850 /* tleu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2850 /* tleu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2855 /* tlu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2855 /* tlu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2859 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_0, 0, { MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 2859 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2859 /* tn */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2859 /* tn */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2859 /* tn */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2859 /* tn */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2859 /* tn */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2862 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 2862 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2862 /* tne */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2862 /* tne */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2862 /* tne */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2862 /* tne */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2862 /* tne */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_6, 0, { MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2866 /* tneg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2866 /* tneg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2871 /* tnz */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2871 /* tnz */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_14, 0, { MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2875 /* tpos */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2875 /* tpos */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2880 /* tsubcc */, Sparc::TSUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2880 /* tsubcc */, Sparc::TSUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2887 /* tsubcctv */, Sparc::TSUBCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2887 /* tsubcctv */, Sparc::TSUBCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_15, 0, { MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 2896 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2896 /* tvc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2896 /* tvc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2896 /* tvc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2896 /* tvc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2896 /* tvc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_7, 0, { MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2900 /* tvs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2900 /* tvs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* tz */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 2904 /* tz */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2904 /* tz */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2904 /* tz */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* tz */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* tz */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* tz */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2907 /* udiv */, Sparc::UDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2907 /* udiv */, Sparc::UDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2912 /* udivcc */, Sparc::UDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2912 /* udivcc */, Sparc::UDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2919 /* udivx */, Sparc::UDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2919 /* udivx */, Sparc::UDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2925 /* umul */, Sparc::UMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2925 /* umul */, Sparc::UMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2930 /* umulcc */, Sparc::UMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2930 /* umulcc */, Sparc::UMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2937 /* umulxhi */, Sparc::UMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2945 /* unimp */, Sparc::UNIMP, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 2951 /* wr */, Sparc::WRPSRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_psr }, },
  { 2951 /* wr */, Sparc::WRTBRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_tbr }, },
  { 2951 /* wr */, Sparc::WRWIMrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_wim }, },
  { 2951 /* wr */, Sparc::WRASRrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_ASRRegs }, },
  { 2951 /* wr */, Sparc::WRPSRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_psr }, },
  { 2951 /* wr */, Sparc::WRTBRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_tbr }, },
  { 2951 /* wr */, Sparc::WRWIMri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_wim }, },
  { 2951 /* wr */, Sparc::WRASRri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_ASRRegs }, },
  { 2954 /* xmulx */, Sparc::XMULX, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2960 /* xmulxhi */, Sparc::XMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2968 /* xnor */, Sparc::XNORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2968 /* xnor */, Sparc::XNORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2973 /* xnorcc */, Sparc::XNORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2973 /* xnorcc */, Sparc::XNORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2980 /* xor */, Sparc::XORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2980 /* xor */, Sparc::XORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2984 /* xorcc */, Sparc::XORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2984 /* xorcc */, Sparc::XORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
};

bool SparcAsmParser::
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

unsigned SparcAsmParser::
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
  StringRef Mnemonic = ((SparcOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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
    uint8_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[53] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 228 /* call */, MCK_MEMri, 1 /* 0 */ },
  { 0, 228 /* call */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2234 /* jmp */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2234 /* jmp */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2238 /* jmpl */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2238 /* jmpl */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2243 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2243 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2243 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2243 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2246 /* lda */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2250 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2250 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2254 /* ldq */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2254 /* ldq */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2258 /* ldsb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2258 /* ldsb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2263 /* ldsba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2269 /* ldsh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2269 /* ldsh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2274 /* ldsha */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2280 /* ldsw */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2280 /* ldsw */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2285 /* ldub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2285 /* ldub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2290 /* lduba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2296 /* lduh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2296 /* lduh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2301 /* lduha */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2307 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2307 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2628 /* rett */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2628 /* rett */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2719 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2719 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2719 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2719 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2722 /* sta */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2726 /* stb */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2726 /* stb */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2730 /* stba */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2741 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2741 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2745 /* sth */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2745 /* sth */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2749 /* stha */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2754 /* stq */, MCK_MEMri, 4 /* 2 */ },
  { Feature_HasV9, 2754 /* stq */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2758 /* stx */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2758 /* stx */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2784 /* swap */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2784 /* swap */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2789 /* swapa */, MCK_MEMrr, 2 /* 1 */ },
};

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_MEMri:
    return parseMEMOperand(Operands);
  case MCK_MEMrr:
    return parseMEMOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+53, Mnemonic,
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

