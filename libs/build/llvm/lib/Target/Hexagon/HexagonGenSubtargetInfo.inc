/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace Hexagon {
enum : uint64_t {
  ArchV4 = 0,
  ArchV5 = 1
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "v4", "Hexagon V4", { Hexagon::ArchV4 }, { } },
  { "v5", "Hexagon V5", { Hexagon::ArchV5 }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", { Hexagon::ArchV4 }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV4, Hexagon::ArchV5 }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
}

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 S_2op_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 2 S_2op_tc_1_SLOT23
  { 1, 2, 3, 0, 0 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 4 ALU64_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 5 ALU64_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 2, 3, 0, 0 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 3, 4, 0, 0 }, // 9 CR_tc_3x_SLOT3
  { 1, 1, 2, 0, 0 }, // 10 ALU64_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 11 M_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 12 S_3op_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 13 S_3op_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 14 S_3op_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 15 EXTENDER_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 16 S_3op_tc_3_SLOT23
  { 1, 2, 3, 0, 0 }, // 17 PSEUDO
  { 1, 1, 2, 0, 0 }, // 18 CR_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 19 S_2op_tc_2early_SLOT23
  { 1, 2, 3, 0, 0 }, // 20 ALU32_3op_tc_2early_SLOT0123
  { 1, 2, 3, 0, 0 }, // 21 ALU32_2op_tc_2early_SLOT0123
  { 1, 3, 4, 0, 0 }, // 22 CR_tc_2_SLOT3
  { 1, 4, 5, 0, 0 }, // 23 J_tc_2early_SLOT2
  { 1, 1, 2, 0, 0 }, // 24 J_tc_2early_SLOT23
  { 1, 5, 6, 0, 0 }, // 25 LD_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 26 DUPLEX
  { 1, 7, 8, 0, 0 }, // 27 J_tc_2early_SLOT0123
  { 1, 1, 2, 0, 0 }, // 28 S_2op_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 29 ALU64_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 30 M_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 31 M_tc_3_SLOT23
  { 1, 8, 10, 0, 0 }, // 32 PSEUDOM
  { 1, 3, 4, 0, 0 }, // 33 CR_tc_2early_SLOT3
  { 1, 6, 7, 0, 0 }, // 34 NCJ_tc_3or4stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 35 COMPOUND
  { 1, 5, 6, 0, 0 }, // 36 V2LDST_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 37 LD_tc_ld_SLOT0
  { 1, 6, 7, 0, 0 }, // 38 V4LDST_tc_st_SLOT0
  { 1, 5, 6, 0, 0 }, // 39 V4LDST_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 40 LD_tc_3or4stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 41 M_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 42 S_3op_tc_3x_SLOT23
  { 1, 6, 7, 0, 0 }, // 43 ST_tc_ld_SLOT0
  { 1, 5, 6, 0, 0 }, // 44 V2LDST_tc_st_SLOT01
  { 1, 5, 6, 0, 0 }, // 45 ST_tc_st_SLOT01
  { 1, 6, 7, 0, 0 }, // 46 V2LDST_tc_st_SLOT0
  { 1, 6, 7, 0, 0 }, // 47 ST_tc_st_SLOT0
  { 1, 5, 6, 0, 0 }, // 48 V4LDST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 49 PREFIX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 }
};
#undef DBGFIELD
static inline void InitHexagonMCSubtargetInfo(MCSubtargetInfo *II, const Triple &TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV4] && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < V5) HexagonArchVersion = V5;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 2), makeArrayRef(HexagonSubTypeKV, 2), 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

