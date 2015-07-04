/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 13, 2, // Skip to: 532
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 181, 23, // Skip to: 6089
/* 20 */      MCD::OPC_Decode, 225, 3, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 103, 0, // Skip to: 131
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 60
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 49
/* 42 */      MCD::OPC_CheckPredicate, 0, 155, 23, // Skip to: 6089
/* 46 */      MCD::OPC_Decode, 95, 1, // Opcode: BPICCNT
/* 49 */      MCD::OPC_FilterValue, 1, 148, 23, // Skip to: 6089
/* 53 */      MCD::OPC_CheckPredicate, 0, 144, 23, // Skip to: 6089
/* 57 */      MCD::OPC_Decode, 94, 1, // Opcode: BPICCANT
/* 60 */      MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 89
/* 64 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 67 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 78
/* 71 */      MCD::OPC_CheckPredicate, 0, 126, 23, // Skip to: 6089
/* 75 */      MCD::OPC_Decode, 92, 1, // Opcode: BPICC
/* 78 */      MCD::OPC_FilterValue, 1, 119, 23, // Skip to: 6089
/* 82 */      MCD::OPC_CheckPredicate, 0, 115, 23, // Skip to: 6089
/* 86 */      MCD::OPC_Decode, 93, 1, // Opcode: BPICCA
/* 89 */      MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 110
/* 93 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 96 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 103
/* 100 */     MCD::OPC_Decode, 111, 1, // Opcode: BPXCCNT
/* 103 */     MCD::OPC_FilterValue, 1, 94, 23, // Skip to: 6089
/* 107 */     MCD::OPC_Decode, 110, 1, // Opcode: BPXCCANT
/* 110 */     MCD::OPC_FilterValue, 5, 87, 23, // Skip to: 6089
/* 114 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 117 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 124
/* 121 */     MCD::OPC_Decode, 108, 1, // Opcode: BPXCC
/* 124 */     MCD::OPC_FilterValue, 1, 73, 23, // Skip to: 6089
/* 128 */     MCD::OPC_Decode, 109, 1, // Opcode: BPXCCA
/* 131 */     MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 161
/* 135 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 138 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 154
/* 142 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 151
/* 148 */     MCD::OPC_Decode, 74, 0, // Opcode: BA
/* 151 */     MCD::OPC_Decode, 75, 2, // Opcode: BCOND
/* 154 */     MCD::OPC_FilterValue, 1, 43, 23, // Skip to: 6089
/* 158 */     MCD::OPC_Decode, 76, 2, // Opcode: BCONDA
/* 161 */     MCD::OPC_FilterValue, 3, 255, 0, // Skip to: 420
/* 165 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 168 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 189
/* 172 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 175 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 182
/* 179 */     MCD::OPC_Decode, 114, 3, // Opcode: BPZnapn
/* 182 */     MCD::OPC_FilterValue, 1, 15, 23, // Skip to: 6089
/* 186 */     MCD::OPC_Decode, 115, 3, // Opcode: BPZnapt
/* 189 */     MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 210
/* 193 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 196 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 203
/* 200 */     MCD::OPC_Decode, 98, 3, // Opcode: BPLEZnapn
/* 203 */     MCD::OPC_FilterValue, 1, 250, 22, // Skip to: 6089
/* 207 */     MCD::OPC_Decode, 99, 3, // Opcode: BPLEZnapt
/* 210 */     MCD::OPC_FilterValue, 3, 17, 0, // Skip to: 231
/* 214 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 217 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 224
/* 221 */     MCD::OPC_Decode, 102, 3, // Opcode: BPLZnapn
/* 224 */     MCD::OPC_FilterValue, 1, 229, 22, // Skip to: 6089
/* 228 */     MCD::OPC_Decode, 103, 3, // Opcode: BPLZnapt
/* 231 */     MCD::OPC_FilterValue, 5, 17, 0, // Skip to: 252
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 245
/* 242 */     MCD::OPC_Decode, 106, 3, // Opcode: BPNZnapn
/* 245 */     MCD::OPC_FilterValue, 1, 208, 22, // Skip to: 6089
/* 249 */     MCD::OPC_Decode, 107, 3, // Opcode: BPNZnapt
/* 252 */     MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 273
/* 256 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 259 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 266
/* 263 */     MCD::OPC_Decode, 90, 3, // Opcode: BPGZnapn
/* 266 */     MCD::OPC_FilterValue, 1, 187, 22, // Skip to: 6089
/* 270 */     MCD::OPC_Decode, 91, 3, // Opcode: BPGZnapt
/* 273 */     MCD::OPC_FilterValue, 7, 17, 0, // Skip to: 294
/* 277 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 280 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 287
/* 284 */     MCD::OPC_Decode, 86, 3, // Opcode: BPGEZnapn
/* 287 */     MCD::OPC_FilterValue, 1, 166, 22, // Skip to: 6089
/* 291 */     MCD::OPC_Decode, 87, 3, // Opcode: BPGEZnapt
/* 294 */     MCD::OPC_FilterValue, 17, 17, 0, // Skip to: 315
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 308
/* 305 */     MCD::OPC_Decode, 112, 3, // Opcode: BPZapn
/* 308 */     MCD::OPC_FilterValue, 1, 145, 22, // Skip to: 6089
/* 312 */     MCD::OPC_Decode, 113, 3, // Opcode: BPZapt
/* 315 */     MCD::OPC_FilterValue, 18, 17, 0, // Skip to: 336
/* 319 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 322 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 329
/* 326 */     MCD::OPC_Decode, 96, 3, // Opcode: BPLEZapn
/* 329 */     MCD::OPC_FilterValue, 1, 124, 22, // Skip to: 6089
/* 333 */     MCD::OPC_Decode, 97, 3, // Opcode: BPLEZapt
/* 336 */     MCD::OPC_FilterValue, 19, 17, 0, // Skip to: 357
/* 340 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 343 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 350
/* 347 */     MCD::OPC_Decode, 100, 3, // Opcode: BPLZapn
/* 350 */     MCD::OPC_FilterValue, 1, 103, 22, // Skip to: 6089
/* 354 */     MCD::OPC_Decode, 101, 3, // Opcode: BPLZapt
/* 357 */     MCD::OPC_FilterValue, 21, 17, 0, // Skip to: 378
/* 361 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 364 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 371
/* 368 */     MCD::OPC_Decode, 104, 3, // Opcode: BPNZapn
/* 371 */     MCD::OPC_FilterValue, 1, 82, 22, // Skip to: 6089
/* 375 */     MCD::OPC_Decode, 105, 3, // Opcode: BPNZapt
/* 378 */     MCD::OPC_FilterValue, 22, 17, 0, // Skip to: 399
/* 382 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 385 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 392
/* 389 */     MCD::OPC_Decode, 88, 3, // Opcode: BPGZapn
/* 392 */     MCD::OPC_FilterValue, 1, 61, 22, // Skip to: 6089
/* 396 */     MCD::OPC_Decode, 89, 3, // Opcode: BPGZapt
/* 399 */     MCD::OPC_FilterValue, 23, 54, 22, // Skip to: 6089
/* 403 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 406 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 413
/* 410 */     MCD::OPC_Decode, 84, 3, // Opcode: BPGEZapn
/* 413 */     MCD::OPC_FilterValue, 1, 40, 22, // Skip to: 6089
/* 417 */     MCD::OPC_Decode, 85, 3, // Opcode: BPGEZapt
/* 420 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 444
/* 424 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 440
/* 430 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 440
/* 436 */     MCD::OPC_Decode, 230, 2, 4, // Opcode: NOP
/* 440 */     MCD::OPC_Decode, 145, 3, 5, // Opcode: SETHIi
/* 444 */     MCD::OPC_FilterValue, 5, 61, 0, // Skip to: 509
/* 448 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 451 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 480
/* 455 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 458 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 469
/* 462 */     MCD::OPC_CheckPredicate, 0, 247, 21, // Skip to: 6089
/* 466 */     MCD::OPC_Decode, 83, 6, // Opcode: BPFCCNT
/* 469 */     MCD::OPC_FilterValue, 1, 240, 21, // Skip to: 6089
/* 473 */     MCD::OPC_CheckPredicate, 0, 236, 21, // Skip to: 6089
/* 477 */     MCD::OPC_Decode, 82, 6, // Opcode: BPFCCANT
/* 480 */     MCD::OPC_FilterValue, 1, 229, 21, // Skip to: 6089
/* 484 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 487 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 498
/* 491 */     MCD::OPC_CheckPredicate, 0, 218, 21, // Skip to: 6089
/* 495 */     MCD::OPC_Decode, 80, 6, // Opcode: BPFCC
/* 498 */     MCD::OPC_FilterValue, 1, 211, 21, // Skip to: 6089
/* 502 */     MCD::OPC_CheckPredicate, 0, 207, 21, // Skip to: 6089
/* 506 */     MCD::OPC_Decode, 81, 6, // Opcode: BPFCCA
/* 509 */     MCD::OPC_FilterValue, 6, 200, 21, // Skip to: 6089
/* 513 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 152, 1, 2, // Opcode: FBCOND
/* 524 */     MCD::OPC_FilterValue, 1, 185, 21, // Skip to: 6089
/* 528 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: FBCONDA
/* 532 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 539
/* 536 */     MCD::OPC_Decode, 117, 7, // Opcode: CALL
/* 539 */     MCD::OPC_FilterValue, 2, 235, 18, // Skip to: 5386
/* 543 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 546 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 573
/* 550 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 553 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 566
/* 557 */     MCD::OPC_CheckField, 5, 8, 0, 150, 21, // Skip to: 6089
/* 563 */     MCD::OPC_Decode, 34, 8, // Opcode: ADDrr
/* 566 */     MCD::OPC_FilterValue, 1, 143, 21, // Skip to: 6089
/* 570 */     MCD::OPC_Decode, 33, 9, // Opcode: ADDri
/* 573 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 600
/* 577 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 580 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 593
/* 584 */     MCD::OPC_CheckField, 5, 8, 0, 123, 21, // Skip to: 6089
/* 590 */     MCD::OPC_Decode, 49, 8, // Opcode: ANDrr
/* 593 */     MCD::OPC_FilterValue, 1, 116, 21, // Skip to: 6089
/* 597 */     MCD::OPC_Decode, 48, 9, // Opcode: ANDri
/* 600 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 629
/* 604 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 607 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 621
/* 611 */     MCD::OPC_CheckField, 5, 8, 0, 96, 21, // Skip to: 6089
/* 617 */     MCD::OPC_Decode, 241, 2, 8, // Opcode: ORrr
/* 621 */     MCD::OPC_FilterValue, 1, 88, 21, // Skip to: 6089
/* 625 */     MCD::OPC_Decode, 240, 2, 9, // Opcode: ORri
/* 629 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 658
/* 633 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 636 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 650
/* 640 */     MCD::OPC_CheckField, 5, 8, 0, 67, 21, // Skip to: 6089
/* 646 */     MCD::OPC_Decode, 129, 4, 8, // Opcode: XORrr
/* 650 */     MCD::OPC_FilterValue, 1, 59, 21, // Skip to: 6089
/* 654 */     MCD::OPC_Decode, 128, 4, 9, // Opcode: XORri
/* 658 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 687
/* 662 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 665 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 679
/* 669 */     MCD::OPC_CheckField, 5, 8, 0, 38, 21, // Skip to: 6089
/* 675 */     MCD::OPC_Decode, 191, 3, 8, // Opcode: SUBrr
/* 679 */     MCD::OPC_FilterValue, 1, 30, 21, // Skip to: 6089
/* 683 */     MCD::OPC_Decode, 190, 3, 9, // Opcode: SUBri
/* 687 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 714
/* 691 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 694 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 707
/* 698 */     MCD::OPC_CheckField, 5, 8, 0, 9, 21, // Skip to: 6089
/* 704 */     MCD::OPC_Decode, 44, 8, // Opcode: ANDNrr
/* 707 */     MCD::OPC_FilterValue, 1, 2, 21, // Skip to: 6089
/* 711 */     MCD::OPC_Decode, 43, 9, // Opcode: ANDNri
/* 714 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 743
/* 718 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 721 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 735
/* 725 */     MCD::OPC_CheckField, 5, 8, 0, 238, 20, // Skip to: 6089
/* 731 */     MCD::OPC_Decode, 236, 2, 8, // Opcode: ORNrr
/* 735 */     MCD::OPC_FilterValue, 1, 230, 20, // Skip to: 6089
/* 739 */     MCD::OPC_Decode, 235, 2, 9, // Opcode: ORNri
/* 743 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 772
/* 747 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 750 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 764
/* 754 */     MCD::OPC_CheckField, 5, 8, 0, 209, 20, // Skip to: 6089
/* 760 */     MCD::OPC_Decode, 251, 3, 8, // Opcode: XNORrr
/* 764 */     MCD::OPC_FilterValue, 1, 201, 20, // Skip to: 6089
/* 768 */     MCD::OPC_Decode, 250, 3, 9, // Opcode: XNORri
/* 772 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 799
/* 776 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 779 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 792
/* 783 */     MCD::OPC_CheckField, 5, 8, 0, 180, 20, // Skip to: 6089
/* 789 */     MCD::OPC_Decode, 26, 8, // Opcode: ADDCrr
/* 792 */     MCD::OPC_FilterValue, 1, 173, 20, // Skip to: 6089
/* 796 */     MCD::OPC_Decode, 25, 9, // Opcode: ADDCri
/* 799 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 828
/* 803 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 806 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 820
/* 810 */     MCD::OPC_CheckField, 5, 8, 0, 153, 20, // Skip to: 6089
/* 816 */     MCD::OPC_Decode, 229, 2, 10, // Opcode: MULXrr
/* 820 */     MCD::OPC_FilterValue, 1, 145, 20, // Skip to: 6089
/* 824 */     MCD::OPC_Decode, 228, 2, 11, // Opcode: MULXri
/* 828 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 857
/* 832 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 835 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 849
/* 839 */     MCD::OPC_CheckField, 5, 8, 0, 124, 20, // Skip to: 6089
/* 845 */     MCD::OPC_Decode, 224, 3, 8, // Opcode: UMULrr
/* 849 */     MCD::OPC_FilterValue, 1, 116, 20, // Skip to: 6089
/* 853 */     MCD::OPC_Decode, 223, 3, 9, // Opcode: UMULri
/* 857 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 886
/* 861 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 864 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 878
/* 868 */     MCD::OPC_CheckField, 5, 8, 0, 95, 20, // Skip to: 6089
/* 874 */     MCD::OPC_Decode, 155, 3, 8, // Opcode: SMULrr
/* 878 */     MCD::OPC_FilterValue, 1, 87, 20, // Skip to: 6089
/* 882 */     MCD::OPC_Decode, 154, 3, 9, // Opcode: SMULri
/* 886 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 915
/* 890 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 893 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 907
/* 897 */     MCD::OPC_CheckField, 5, 8, 0, 66, 20, // Skip to: 6089
/* 903 */     MCD::OPC_Decode, 185, 3, 8, // Opcode: SUBCrr
/* 907 */     MCD::OPC_FilterValue, 1, 58, 20, // Skip to: 6089
/* 911 */     MCD::OPC_Decode, 184, 3, 9, // Opcode: SUBCri
/* 915 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 944
/* 919 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 922 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 5, 8, 0, 37, 20, // Skip to: 6089
/* 932 */     MCD::OPC_Decode, 217, 3, 10, // Opcode: UDIVXrr
/* 936 */     MCD::OPC_FilterValue, 1, 29, 20, // Skip to: 6089
/* 940 */     MCD::OPC_Decode, 216, 3, 11, // Opcode: UDIVXri
/* 944 */     MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 973
/* 948 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 951 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 965
/* 955 */     MCD::OPC_CheckField, 5, 8, 0, 8, 20, // Skip to: 6089
/* 961 */     MCD::OPC_Decode, 219, 3, 8, // Opcode: UDIVrr
/* 965 */     MCD::OPC_FilterValue, 1, 0, 20, // Skip to: 6089
/* 969 */     MCD::OPC_Decode, 218, 3, 9, // Opcode: UDIVri
/* 973 */     MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1002
/* 977 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 980 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 5, 8, 0, 235, 19, // Skip to: 6089
/* 990 */     MCD::OPC_Decode, 134, 3, 8, // Opcode: SDIVrr
/* 994 */     MCD::OPC_FilterValue, 1, 227, 19, // Skip to: 6089
/* 998 */     MCD::OPC_Decode, 133, 3, 9, // Opcode: SDIVri
/* 1002 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1029
/* 1006 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1009 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1022
/* 1013 */    MCD::OPC_CheckField, 5, 8, 0, 206, 19, // Skip to: 6089
/* 1019 */    MCD::OPC_Decode, 24, 8, // Opcode: ADDCCrr
/* 1022 */    MCD::OPC_FilterValue, 1, 199, 19, // Skip to: 6089
/* 1026 */    MCD::OPC_Decode, 23, 9, // Opcode: ADDCCri
/* 1029 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1056
/* 1033 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1036 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1049
/* 1040 */    MCD::OPC_CheckField, 5, 8, 0, 179, 19, // Skip to: 6089
/* 1046 */    MCD::OPC_Decode, 40, 8, // Opcode: ANDCCrr
/* 1049 */    MCD::OPC_FilterValue, 1, 172, 19, // Skip to: 6089
/* 1053 */    MCD::OPC_Decode, 39, 9, // Opcode: ANDCCri
/* 1056 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1085
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1077
/* 1067 */    MCD::OPC_CheckField, 5, 8, 0, 152, 19, // Skip to: 6089
/* 1073 */    MCD::OPC_Decode, 232, 2, 8, // Opcode: ORCCrr
/* 1077 */    MCD::OPC_FilterValue, 1, 144, 19, // Skip to: 6089
/* 1081 */    MCD::OPC_Decode, 231, 2, 9, // Opcode: ORCCri
/* 1085 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1114
/* 1089 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1092 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1106
/* 1096 */    MCD::OPC_CheckField, 5, 8, 0, 123, 19, // Skip to: 6089
/* 1102 */    MCD::OPC_Decode, 253, 3, 8, // Opcode: XORCCrr
/* 1106 */    MCD::OPC_FilterValue, 1, 115, 19, // Skip to: 6089
/* 1110 */    MCD::OPC_Decode, 252, 3, 9, // Opcode: XORCCri
/* 1114 */    MCD::OPC_FilterValue, 20, 44, 0, // Skip to: 1162
/* 1118 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1121 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 1145
/* 1125 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1128 */    MCD::OPC_FilterValue, 0, 93, 19, // Skip to: 6089
/* 1132 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1141
/* 1138 */    MCD::OPC_Decode, 126, 12, // Opcode: CMPrr
/* 1141 */    MCD::OPC_Decode, 183, 3, 8, // Opcode: SUBCCrr
/* 1145 */    MCD::OPC_FilterValue, 1, 76, 19, // Skip to: 6089
/* 1149 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1158
/* 1155 */    MCD::OPC_Decode, 125, 13, // Opcode: CMPri
/* 1158 */    MCD::OPC_Decode, 182, 3, 9, // Opcode: SUBCCri
/* 1162 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1189
/* 1166 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1169 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1182
/* 1173 */    MCD::OPC_CheckField, 5, 8, 0, 46, 19, // Skip to: 6089
/* 1179 */    MCD::OPC_Decode, 42, 8, // Opcode: ANDNCCrr
/* 1182 */    MCD::OPC_FilterValue, 1, 39, 19, // Skip to: 6089
/* 1186 */    MCD::OPC_Decode, 41, 9, // Opcode: ANDNCCri
/* 1189 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1218
/* 1193 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1196 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1210
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 19, 19, // Skip to: 6089
/* 1206 */    MCD::OPC_Decode, 234, 2, 8, // Opcode: ORNCCrr
/* 1210 */    MCD::OPC_FilterValue, 1, 11, 19, // Skip to: 6089
/* 1214 */    MCD::OPC_Decode, 233, 2, 9, // Opcode: ORNCCri
/* 1218 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1247
/* 1222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1225 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1239
/* 1229 */    MCD::OPC_CheckField, 5, 8, 0, 246, 18, // Skip to: 6089
/* 1235 */    MCD::OPC_Decode, 248, 3, 8, // Opcode: XNORCCrr
/* 1239 */    MCD::OPC_FilterValue, 1, 238, 18, // Skip to: 6089
/* 1243 */    MCD::OPC_Decode, 247, 3, 9, // Opcode: XNORCCri
/* 1247 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1274
/* 1251 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1254 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1267
/* 1258 */    MCD::OPC_CheckField, 5, 8, 0, 217, 18, // Skip to: 6089
/* 1264 */    MCD::OPC_Decode, 28, 8, // Opcode: ADDErr
/* 1267 */    MCD::OPC_FilterValue, 1, 210, 18, // Skip to: 6089
/* 1271 */    MCD::OPC_Decode, 27, 9, // Opcode: ADDEri
/* 1274 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1303
/* 1278 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1281 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1295
/* 1285 */    MCD::OPC_CheckField, 5, 8, 0, 190, 18, // Skip to: 6089
/* 1291 */    MCD::OPC_Decode, 221, 3, 8, // Opcode: UMULCCrr
/* 1295 */    MCD::OPC_FilterValue, 1, 182, 18, // Skip to: 6089
/* 1299 */    MCD::OPC_Decode, 220, 3, 9, // Opcode: UMULCCri
/* 1303 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1332
/* 1307 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1310 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1324
/* 1314 */    MCD::OPC_CheckField, 5, 8, 0, 161, 18, // Skip to: 6089
/* 1320 */    MCD::OPC_Decode, 153, 3, 8, // Opcode: SMULCCrr
/* 1324 */    MCD::OPC_FilterValue, 1, 153, 18, // Skip to: 6089
/* 1328 */    MCD::OPC_Decode, 152, 3, 9, // Opcode: SMULCCri
/* 1332 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1361
/* 1336 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1339 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1353
/* 1343 */    MCD::OPC_CheckField, 5, 8, 0, 132, 18, // Skip to: 6089
/* 1349 */    MCD::OPC_Decode, 187, 3, 8, // Opcode: SUBErr
/* 1353 */    MCD::OPC_FilterValue, 1, 124, 18, // Skip to: 6089
/* 1357 */    MCD::OPC_Decode, 186, 3, 9, // Opcode: SUBEri
/* 1361 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1390
/* 1365 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1382
/* 1372 */    MCD::OPC_CheckField, 5, 8, 0, 103, 18, // Skip to: 6089
/* 1378 */    MCD::OPC_Decode, 215, 3, 8, // Opcode: UDIVCCrr
/* 1382 */    MCD::OPC_FilterValue, 1, 95, 18, // Skip to: 6089
/* 1386 */    MCD::OPC_Decode, 214, 3, 9, // Opcode: UDIVCCri
/* 1390 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1419
/* 1394 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1397 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1411
/* 1401 */    MCD::OPC_CheckField, 5, 8, 0, 74, 18, // Skip to: 6089
/* 1407 */    MCD::OPC_Decode, 130, 3, 8, // Opcode: SDIVCCrr
/* 1411 */    MCD::OPC_FilterValue, 1, 66, 18, // Skip to: 6089
/* 1415 */    MCD::OPC_Decode, 129, 3, 9, // Opcode: SDIVCCri
/* 1419 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1448
/* 1423 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1426 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1440
/* 1430 */    MCD::OPC_CheckField, 5, 8, 0, 45, 18, // Skip to: 6089
/* 1436 */    MCD::OPC_Decode, 200, 3, 8, // Opcode: TADDCCrr
/* 1440 */    MCD::OPC_FilterValue, 1, 37, 18, // Skip to: 6089
/* 1444 */    MCD::OPC_Decode, 199, 3, 9, // Opcode: TADDCCri
/* 1448 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1477
/* 1452 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1455 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1469
/* 1459 */    MCD::OPC_CheckField, 5, 8, 0, 16, 18, // Skip to: 6089
/* 1465 */    MCD::OPC_Decode, 211, 3, 8, // Opcode: TSUBCCrr
/* 1469 */    MCD::OPC_FilterValue, 1, 8, 18, // Skip to: 6089
/* 1473 */    MCD::OPC_Decode, 210, 3, 9, // Opcode: TSUBCCri
/* 1477 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1506
/* 1481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1484 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1498
/* 1488 */    MCD::OPC_CheckField, 5, 8, 0, 243, 17, // Skip to: 6089
/* 1494 */    MCD::OPC_Decode, 198, 3, 8, // Opcode: TADDCCTVrr
/* 1498 */    MCD::OPC_FilterValue, 1, 235, 17, // Skip to: 6089
/* 1502 */    MCD::OPC_Decode, 197, 3, 9, // Opcode: TADDCCTVri
/* 1506 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1535
/* 1510 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1513 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1527
/* 1517 */    MCD::OPC_CheckField, 5, 8, 0, 214, 17, // Skip to: 6089
/* 1523 */    MCD::OPC_Decode, 209, 3, 8, // Opcode: TSUBCCTVrr
/* 1527 */    MCD::OPC_FilterValue, 1, 206, 17, // Skip to: 6089
/* 1531 */    MCD::OPC_Decode, 208, 3, 9, // Opcode: TSUBCCTVri
/* 1535 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1589
/* 1539 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1542 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1571
/* 1546 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1549 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1563
/* 1553 */    MCD::OPC_CheckField, 5, 7, 0, 178, 17, // Skip to: 6089
/* 1559 */    MCD::OPC_Decode, 151, 3, 8, // Opcode: SLLrr
/* 1563 */    MCD::OPC_FilterValue, 1, 170, 17, // Skip to: 6089
/* 1567 */    MCD::OPC_Decode, 149, 3, 14, // Opcode: SLLXrr
/* 1571 */    MCD::OPC_FilterValue, 1, 162, 17, // Skip to: 6089
/* 1575 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1585
/* 1581 */    MCD::OPC_Decode, 148, 3, 15, // Opcode: SLLXri
/* 1585 */    MCD::OPC_Decode, 150, 3, 9, // Opcode: SLLri
/* 1589 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1643
/* 1593 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1596 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1625
/* 1600 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1603 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1617
/* 1607 */    MCD::OPC_CheckField, 5, 7, 0, 124, 17, // Skip to: 6089
/* 1613 */    MCD::OPC_Decode, 163, 3, 8, // Opcode: SRLrr
/* 1617 */    MCD::OPC_FilterValue, 1, 116, 17, // Skip to: 6089
/* 1621 */    MCD::OPC_Decode, 161, 3, 14, // Opcode: SRLXrr
/* 1625 */    MCD::OPC_FilterValue, 1, 108, 17, // Skip to: 6089
/* 1629 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1639
/* 1635 */    MCD::OPC_Decode, 160, 3, 15, // Opcode: SRLXri
/* 1639 */    MCD::OPC_Decode, 162, 3, 9, // Opcode: SRLri
/* 1643 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1697
/* 1647 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1650 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1679
/* 1654 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1657 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1671
/* 1661 */    MCD::OPC_CheckField, 5, 7, 0, 70, 17, // Skip to: 6089
/* 1667 */    MCD::OPC_Decode, 159, 3, 8, // Opcode: SRArr
/* 1671 */    MCD::OPC_FilterValue, 1, 62, 17, // Skip to: 6089
/* 1675 */    MCD::OPC_Decode, 157, 3, 14, // Opcode: SRAXrr
/* 1679 */    MCD::OPC_FilterValue, 1, 54, 17, // Skip to: 6089
/* 1683 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1693
/* 1689 */    MCD::OPC_Decode, 156, 3, 15, // Opcode: SRAXri
/* 1693 */    MCD::OPC_Decode, 158, 3, 9, // Opcode: SRAri
/* 1697 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1759
/* 1701 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1704 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1735
/* 1708 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1711 */    MCD::OPC_FilterValue, 0, 22, 17, // Skip to: 6089
/* 1715 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1731
/* 1721 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1731
/* 1727 */    MCD::OPC_Decode, 165, 3, 4, // Opcode: STBAR
/* 1731 */    MCD::OPC_Decode, 245, 2, 16, // Opcode: RDASR
/* 1735 */    MCD::OPC_FilterValue, 1, 254, 16, // Skip to: 6089
/* 1739 */    MCD::OPC_CheckPredicate, 0, 250, 16, // Skip to: 6089
/* 1743 */    MCD::OPC_CheckField, 25, 5, 0, 244, 16, // Skip to: 6089
/* 1749 */    MCD::OPC_CheckField, 14, 5, 15, 238, 16, // Skip to: 6089
/* 1755 */    MCD::OPC_Decode, 204, 2, 17, // Opcode: MEMBARi
/* 1759 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1773
/* 1763 */    MCD::OPC_CheckField, 0, 19, 0, 224, 16, // Skip to: 6089
/* 1769 */    MCD::OPC_Decode, 246, 2, 18, // Opcode: RDPSR
/* 1773 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 1787
/* 1777 */    MCD::OPC_CheckField, 0, 19, 0, 210, 16, // Skip to: 6089
/* 1783 */    MCD::OPC_Decode, 248, 2, 18, // Opcode: RDWIM
/* 1787 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1816
/* 1791 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1794 */    MCD::OPC_FilterValue, 0, 195, 16, // Skip to: 6089
/* 1798 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1812
/* 1802 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1812
/* 1808 */    MCD::OPC_Decode, 184, 1, 4, // Opcode: FLUSHW
/* 1812 */    MCD::OPC_Decode, 247, 2, 18, // Opcode: RDTBR
/* 1816 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 1943
/* 1820 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1823 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1883
/* 1827 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1830 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1856
/* 1834 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1848
/* 1838 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1848
/* 1844 */    MCD::OPC_Decode, 207, 2, 19, // Opcode: MOVFCCrr
/* 1848 */    MCD::OPC_CheckPredicate, 0, 141, 16, // Skip to: 6089
/* 1852 */    MCD::OPC_Decode, 236, 3, 20, // Opcode: V9MOVFCCrr
/* 1856 */    MCD::OPC_FilterValue, 1, 133, 16, // Skip to: 6089
/* 1860 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1863 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1875
/* 1867 */    MCD::OPC_CheckPredicate, 0, 122, 16, // Skip to: 6089
/* 1871 */    MCD::OPC_Decode, 209, 2, 19, // Opcode: MOVICCrr
/* 1875 */    MCD::OPC_FilterValue, 2, 114, 16, // Skip to: 6089
/* 1879 */    MCD::OPC_Decode, 226, 2, 19, // Opcode: MOVXCCrr
/* 1883 */    MCD::OPC_FilterValue, 1, 106, 16, // Skip to: 6089
/* 1887 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1890 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1916
/* 1894 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1908
/* 1898 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1908
/* 1904 */    MCD::OPC_Decode, 206, 2, 21, // Opcode: MOVFCCri
/* 1908 */    MCD::OPC_CheckPredicate, 0, 81, 16, // Skip to: 6089
/* 1912 */    MCD::OPC_Decode, 235, 3, 22, // Opcode: V9MOVFCCri
/* 1916 */    MCD::OPC_FilterValue, 1, 73, 16, // Skip to: 6089
/* 1920 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1923 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1935
/* 1927 */    MCD::OPC_CheckPredicate, 0, 62, 16, // Skip to: 6089
/* 1931 */    MCD::OPC_Decode, 208, 2, 21, // Opcode: MOVICCri
/* 1935 */    MCD::OPC_FilterValue, 2, 54, 16, // Skip to: 6089
/* 1939 */    MCD::OPC_Decode, 225, 2, 21, // Opcode: MOVXCCri
/* 1943 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 1972
/* 1947 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1950 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1964
/* 1954 */    MCD::OPC_CheckField, 5, 8, 0, 33, 16, // Skip to: 6089
/* 1960 */    MCD::OPC_Decode, 132, 3, 10, // Opcode: SDIVXrr
/* 1964 */    MCD::OPC_FilterValue, 1, 25, 16, // Skip to: 6089
/* 1968 */    MCD::OPC_Decode, 131, 3, 11, // Opcode: SDIVXri
/* 1972 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 1990
/* 1976 */    MCD::OPC_CheckPredicate, 0, 13, 16, // Skip to: 6089
/* 1980 */    MCD::OPC_CheckField, 5, 14, 0, 7, 16, // Skip to: 6089
/* 1986 */    MCD::OPC_Decode, 244, 2, 4, // Opcode: POPCrr
/* 1990 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2129
/* 1994 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 1997 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2011
/* 2001 */    MCD::OPC_CheckField, 5, 5, 0, 242, 15, // Skip to: 6089
/* 2007 */    MCD::OPC_Decode, 221, 2, 14, // Opcode: MOVRRZrr
/* 2011 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2025
/* 2015 */    MCD::OPC_CheckField, 5, 5, 0, 228, 15, // Skip to: 6089
/* 2021 */    MCD::OPC_Decode, 215, 2, 14, // Opcode: MOVRLEZrr
/* 2025 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2039
/* 2029 */    MCD::OPC_CheckField, 5, 5, 0, 214, 15, // Skip to: 6089
/* 2035 */    MCD::OPC_Decode, 217, 2, 14, // Opcode: MOVRLZrr
/* 2039 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2053
/* 2043 */    MCD::OPC_CheckField, 5, 5, 0, 200, 15, // Skip to: 6089
/* 2049 */    MCD::OPC_Decode, 219, 2, 14, // Opcode: MOVRNZrr
/* 2053 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2067
/* 2057 */    MCD::OPC_CheckField, 5, 5, 0, 186, 15, // Skip to: 6089
/* 2063 */    MCD::OPC_Decode, 213, 2, 14, // Opcode: MOVRGZrr
/* 2067 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2081
/* 2071 */    MCD::OPC_CheckField, 5, 5, 0, 172, 15, // Skip to: 6089
/* 2077 */    MCD::OPC_Decode, 211, 2, 14, // Opcode: MOVRGEZrr
/* 2081 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2089
/* 2085 */    MCD::OPC_Decode, 220, 2, 23, // Opcode: MOVRRZri
/* 2089 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2097
/* 2093 */    MCD::OPC_Decode, 214, 2, 23, // Opcode: MOVRLEZri
/* 2097 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2105
/* 2101 */    MCD::OPC_Decode, 216, 2, 23, // Opcode: MOVRLZri
/* 2105 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2113
/* 2109 */    MCD::OPC_Decode, 218, 2, 23, // Opcode: MOVRNZri
/* 2113 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2121
/* 2117 */    MCD::OPC_Decode, 212, 2, 23, // Opcode: MOVRGZri
/* 2121 */    MCD::OPC_FilterValue, 15, 124, 15, // Skip to: 6089
/* 2125 */    MCD::OPC_Decode, 210, 2, 23, // Opcode: MOVRGEZri
/* 2129 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2158
/* 2133 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2136 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2150
/* 2140 */    MCD::OPC_CheckField, 5, 8, 0, 103, 15, // Skip to: 6089
/* 2146 */    MCD::OPC_Decode, 238, 3, 24, // Opcode: WRASRrr
/* 2150 */    MCD::OPC_FilterValue, 1, 95, 15, // Skip to: 6089
/* 2154 */    MCD::OPC_Decode, 237, 3, 25, // Opcode: WRASRri
/* 2158 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2199
/* 2162 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2165 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2185
/* 2169 */    MCD::OPC_CheckField, 25, 5, 0, 74, 15, // Skip to: 6089
/* 2175 */    MCD::OPC_CheckField, 5, 8, 0, 68, 15, // Skip to: 6089
/* 2181 */    MCD::OPC_Decode, 240, 3, 12, // Opcode: WRPSRrr
/* 2185 */    MCD::OPC_FilterValue, 1, 60, 15, // Skip to: 6089
/* 2189 */    MCD::OPC_CheckField, 25, 5, 0, 54, 15, // Skip to: 6089
/* 2195 */    MCD::OPC_Decode, 239, 3, 13, // Opcode: WRPSRri
/* 2199 */    MCD::OPC_FilterValue, 50, 37, 0, // Skip to: 2240
/* 2203 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2206 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2226
/* 2210 */    MCD::OPC_CheckField, 25, 5, 0, 33, 15, // Skip to: 6089
/* 2216 */    MCD::OPC_CheckField, 5, 8, 0, 27, 15, // Skip to: 6089
/* 2222 */    MCD::OPC_Decode, 244, 3, 12, // Opcode: WRWIMrr
/* 2226 */    MCD::OPC_FilterValue, 1, 19, 15, // Skip to: 6089
/* 2230 */    MCD::OPC_CheckField, 25, 5, 0, 13, 15, // Skip to: 6089
/* 2236 */    MCD::OPC_Decode, 243, 3, 13, // Opcode: WRWIMri
/* 2240 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2281
/* 2244 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2247 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2267
/* 2251 */    MCD::OPC_CheckField, 25, 5, 0, 248, 14, // Skip to: 6089
/* 2257 */    MCD::OPC_CheckField, 5, 8, 0, 242, 14, // Skip to: 6089
/* 2263 */    MCD::OPC_Decode, 242, 3, 12, // Opcode: WRTBRrr
/* 2267 */    MCD::OPC_FilterValue, 1, 234, 14, // Skip to: 6089
/* 2271 */    MCD::OPC_CheckField, 25, 5, 0, 228, 14, // Skip to: 6089
/* 2277 */    MCD::OPC_Decode, 241, 3, 13, // Opcode: WRTBRri
/* 2281 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 2994
/* 2285 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2288 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2302
/* 2292 */    MCD::OPC_CheckField, 14, 5, 0, 207, 14, // Skip to: 6089
/* 2298 */    MCD::OPC_Decode, 212, 1, 26, // Opcode: FMOVS
/* 2302 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2320
/* 2306 */    MCD::OPC_CheckPredicate, 0, 195, 14, // Skip to: 6089
/* 2310 */    MCD::OPC_CheckField, 14, 5, 0, 189, 14, // Skip to: 6089
/* 2316 */    MCD::OPC_Decode, 186, 1, 27, // Opcode: FMOVD
/* 2320 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2338
/* 2324 */    MCD::OPC_CheckPredicate, 0, 177, 14, // Skip to: 6089
/* 2328 */    MCD::OPC_CheckField, 14, 5, 0, 171, 14, // Skip to: 6089
/* 2334 */    MCD::OPC_Decode, 190, 1, 28, // Opcode: FMOVQ
/* 2338 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2352
/* 2342 */    MCD::OPC_CheckField, 14, 5, 0, 157, 14, // Skip to: 6089
/* 2348 */    MCD::OPC_Decode, 232, 1, 26, // Opcode: FNEGS
/* 2352 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2370
/* 2356 */    MCD::OPC_CheckPredicate, 0, 145, 14, // Skip to: 6089
/* 2360 */    MCD::OPC_CheckField, 14, 5, 0, 139, 14, // Skip to: 6089
/* 2366 */    MCD::OPC_Decode, 230, 1, 27, // Opcode: FNEGD
/* 2370 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2388
/* 2374 */    MCD::OPC_CheckPredicate, 0, 127, 14, // Skip to: 6089
/* 2378 */    MCD::OPC_CheckField, 14, 5, 0, 121, 14, // Skip to: 6089
/* 2384 */    MCD::OPC_Decode, 231, 1, 28, // Opcode: FNEGQ
/* 2388 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2402
/* 2392 */    MCD::OPC_CheckField, 14, 5, 0, 107, 14, // Skip to: 6089
/* 2398 */    MCD::OPC_Decode, 141, 1, 26, // Opcode: FABSS
/* 2402 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2420
/* 2406 */    MCD::OPC_CheckPredicate, 0, 95, 14, // Skip to: 6089
/* 2410 */    MCD::OPC_CheckField, 14, 5, 0, 89, 14, // Skip to: 6089
/* 2416 */    MCD::OPC_Decode, 139, 1, 27, // Opcode: FABSD
/* 2420 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2438
/* 2424 */    MCD::OPC_CheckPredicate, 0, 77, 14, // Skip to: 6089
/* 2428 */    MCD::OPC_CheckField, 14, 5, 0, 71, 14, // Skip to: 6089
/* 2434 */    MCD::OPC_Decode, 140, 1, 28, // Opcode: FABSQ
/* 2438 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2452
/* 2442 */    MCD::OPC_CheckField, 14, 5, 0, 57, 14, // Skip to: 6089
/* 2448 */    MCD::OPC_Decode, 148, 2, 26, // Opcode: FSQRTS
/* 2452 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2466
/* 2456 */    MCD::OPC_CheckField, 14, 5, 0, 43, 14, // Skip to: 6089
/* 2462 */    MCD::OPC_Decode, 146, 2, 27, // Opcode: FSQRTD
/* 2466 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2480
/* 2470 */    MCD::OPC_CheckField, 14, 5, 0, 29, 14, // Skip to: 6089
/* 2476 */    MCD::OPC_Decode, 147, 2, 28, // Opcode: FSQRTQ
/* 2480 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2488
/* 2484 */    MCD::OPC_Decode, 144, 1, 29, // Opcode: FADDS
/* 2488 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2496
/* 2492 */    MCD::OPC_Decode, 142, 1, 30, // Opcode: FADDD
/* 2496 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2504
/* 2500 */    MCD::OPC_Decode, 143, 1, 31, // Opcode: FADDQ
/* 2504 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2512
/* 2508 */    MCD::OPC_Decode, 163, 2, 29, // Opcode: FSUBS
/* 2512 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2520
/* 2516 */    MCD::OPC_Decode, 161, 2, 30, // Opcode: FSUBD
/* 2520 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2528
/* 2524 */    MCD::OPC_Decode, 162, 2, 31, // Opcode: FSUBQ
/* 2528 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2536
/* 2532 */    MCD::OPC_Decode, 225, 1, 29, // Opcode: FMULS
/* 2536 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2544
/* 2540 */    MCD::OPC_Decode, 221, 1, 30, // Opcode: FMULD
/* 2544 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2552
/* 2548 */    MCD::OPC_Decode, 224, 1, 31, // Opcode: FMULQ
/* 2552 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2560
/* 2556 */    MCD::OPC_Decode, 168, 1, 29, // Opcode: FDIVS
/* 2560 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2568
/* 2564 */    MCD::OPC_Decode, 166, 1, 30, // Opcode: FDIVD
/* 2568 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2576
/* 2572 */    MCD::OPC_Decode, 167, 1, 31, // Opcode: FDIVQ
/* 2576 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2588
/* 2580 */    MCD::OPC_CheckPredicate, 1, 177, 13, // Skip to: 6089
/* 2584 */    MCD::OPC_Decode, 227, 1, 30, // Opcode: FNADDS
/* 2588 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2600
/* 2592 */    MCD::OPC_CheckPredicate, 1, 165, 13, // Skip to: 6089
/* 2596 */    MCD::OPC_Decode, 226, 1, 30, // Opcode: FNADDD
/* 2600 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2612
/* 2604 */    MCD::OPC_CheckPredicate, 1, 153, 13, // Skip to: 6089
/* 2608 */    MCD::OPC_Decode, 236, 1, 30, // Opcode: FNMULS
/* 2612 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2624
/* 2616 */    MCD::OPC_CheckPredicate, 1, 141, 13, // Skip to: 6089
/* 2620 */    MCD::OPC_Decode, 235, 1, 30, // Opcode: FNMULD
/* 2624 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2636
/* 2628 */    MCD::OPC_CheckPredicate, 1, 129, 13, // Skip to: 6089
/* 2632 */    MCD::OPC_Decode, 176, 1, 30, // Opcode: FHADDS
/* 2636 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2648
/* 2640 */    MCD::OPC_CheckPredicate, 1, 117, 13, // Skip to: 6089
/* 2644 */    MCD::OPC_Decode, 175, 1, 30, // Opcode: FHADDD
/* 2648 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2660
/* 2652 */    MCD::OPC_CheckPredicate, 1, 105, 13, // Skip to: 6089
/* 2656 */    MCD::OPC_Decode, 178, 1, 30, // Opcode: FHSUBS
/* 2660 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2672
/* 2664 */    MCD::OPC_CheckPredicate, 1, 93, 13, // Skip to: 6089
/* 2668 */    MCD::OPC_Decode, 177, 1, 30, // Opcode: FHSUBD
/* 2672 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2680
/* 2676 */    MCD::OPC_Decode, 145, 2, 32, // Opcode: FSMULD
/* 2680 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 169, 1, 33, // Opcode: FDMULQ
/* 2688 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2700
/* 2692 */    MCD::OPC_CheckPredicate, 1, 65, 13, // Skip to: 6089
/* 2696 */    MCD::OPC_Decode, 234, 1, 30, // Opcode: FNHADDS
/* 2700 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2712
/* 2704 */    MCD::OPC_CheckPredicate, 1, 53, 13, // Skip to: 6089
/* 2708 */    MCD::OPC_Decode, 233, 1, 30, // Opcode: FNHADDD
/* 2712 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2724
/* 2716 */    MCD::OPC_CheckPredicate, 1, 41, 13, // Skip to: 6089
/* 2720 */    MCD::OPC_Decode, 243, 1, 30, // Opcode: FNSMULD
/* 2724 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2739
/* 2729 */    MCD::OPC_CheckField, 14, 5, 0, 26, 13, // Skip to: 6089
/* 2735 */    MCD::OPC_Decode, 160, 2, 34, // Opcode: FSTOX
/* 2739 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2754
/* 2744 */    MCD::OPC_CheckField, 14, 5, 0, 11, 13, // Skip to: 6089
/* 2750 */    MCD::OPC_Decode, 173, 1, 27, // Opcode: FDTOX
/* 2754 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2769
/* 2759 */    MCD::OPC_CheckField, 14, 5, 0, 252, 12, // Skip to: 6089
/* 2765 */    MCD::OPC_Decode, 140, 2, 35, // Opcode: FQTOX
/* 2769 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2784
/* 2774 */    MCD::OPC_CheckField, 14, 5, 0, 237, 12, // Skip to: 6089
/* 2780 */    MCD::OPC_Decode, 170, 2, 36, // Opcode: FXTOS
/* 2784 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2799
/* 2789 */    MCD::OPC_CheckField, 14, 5, 0, 222, 12, // Skip to: 6089
/* 2795 */    MCD::OPC_Decode, 168, 2, 27, // Opcode: FXTOD
/* 2799 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2814
/* 2804 */    MCD::OPC_CheckField, 14, 5, 0, 207, 12, // Skip to: 6089
/* 2810 */    MCD::OPC_Decode, 169, 2, 37, // Opcode: FXTOQ
/* 2814 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2829
/* 2819 */    MCD::OPC_CheckField, 14, 5, 0, 192, 12, // Skip to: 6089
/* 2825 */    MCD::OPC_Decode, 181, 1, 26, // Opcode: FITOS
/* 2829 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2844
/* 2834 */    MCD::OPC_CheckField, 14, 5, 0, 177, 12, // Skip to: 6089
/* 2840 */    MCD::OPC_Decode, 172, 1, 36, // Opcode: FDTOS
/* 2844 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2859
/* 2849 */    MCD::OPC_CheckField, 14, 5, 0, 162, 12, // Skip to: 6089
/* 2855 */    MCD::OPC_Decode, 139, 2, 38, // Opcode: FQTOS
/* 2859 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2874
/* 2864 */    MCD::OPC_CheckField, 14, 5, 0, 147, 12, // Skip to: 6089
/* 2870 */    MCD::OPC_Decode, 179, 1, 34, // Opcode: FITOD
/* 2874 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 2889
/* 2879 */    MCD::OPC_CheckField, 14, 5, 0, 132, 12, // Skip to: 6089
/* 2885 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FSTOD
/* 2889 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 2904
/* 2894 */    MCD::OPC_CheckField, 14, 5, 0, 117, 12, // Skip to: 6089
/* 2900 */    MCD::OPC_Decode, 137, 2, 35, // Opcode: FQTOD
/* 2904 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 2919
/* 2909 */    MCD::OPC_CheckField, 14, 5, 0, 102, 12, // Skip to: 6089
/* 2915 */    MCD::OPC_Decode, 180, 1, 39, // Opcode: FITOQ
/* 2919 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 2934
/* 2924 */    MCD::OPC_CheckField, 14, 5, 0, 87, 12, // Skip to: 6089
/* 2930 */    MCD::OPC_Decode, 159, 2, 39, // Opcode: FSTOQ
/* 2934 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 2949
/* 2939 */    MCD::OPC_CheckField, 14, 5, 0, 72, 12, // Skip to: 6089
/* 2945 */    MCD::OPC_Decode, 171, 1, 37, // Opcode: FDTOQ
/* 2949 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 2964
/* 2954 */    MCD::OPC_CheckField, 14, 5, 0, 57, 12, // Skip to: 6089
/* 2960 */    MCD::OPC_Decode, 158, 2, 26, // Opcode: FSTOI
/* 2964 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 2979
/* 2969 */    MCD::OPC_CheckField, 14, 5, 0, 42, 12, // Skip to: 6089
/* 2975 */    MCD::OPC_Decode, 170, 1, 36, // Opcode: FDTOI
/* 2979 */    MCD::OPC_FilterValue, 211, 1, 33, 12, // Skip to: 6089
/* 2984 */    MCD::OPC_CheckField, 14, 5, 0, 27, 12, // Skip to: 6089
/* 2990 */    MCD::OPC_Decode, 138, 2, 38, // Opcode: FQTOI
/* 2994 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3580
/* 2998 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3001 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3080
/* 3005 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3008 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3041
/* 3012 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3015 */    MCD::OPC_FilterValue, 0, 254, 11, // Skip to: 6089
/* 3019 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3033
/* 3023 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3033
/* 3029 */    MCD::OPC_Decode, 213, 1, 40, // Opcode: FMOVS_FCC
/* 3033 */    MCD::OPC_CheckPredicate, 0, 236, 11, // Skip to: 6089
/* 3037 */    MCD::OPC_Decode, 234, 3, 41, // Opcode: V9FMOVS_FCC
/* 3041 */    MCD::OPC_FilterValue, 1, 228, 11, // Skip to: 6089
/* 3045 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3048 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3066
/* 3052 */    MCD::OPC_CheckPredicate, 0, 217, 11, // Skip to: 6089
/* 3056 */    MCD::OPC_CheckField, 18, 1, 0, 211, 11, // Skip to: 6089
/* 3062 */    MCD::OPC_Decode, 214, 1, 40, // Opcode: FMOVS_ICC
/* 3066 */    MCD::OPC_FilterValue, 2, 203, 11, // Skip to: 6089
/* 3070 */    MCD::OPC_CheckField, 18, 1, 0, 197, 11, // Skip to: 6089
/* 3076 */    MCD::OPC_Decode, 215, 1, 40, // Opcode: FMOVS_XCC
/* 3080 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3159
/* 3084 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3087 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3120
/* 3091 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3094 */    MCD::OPC_FilterValue, 0, 175, 11, // Skip to: 6089
/* 3098 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3112
/* 3102 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3112
/* 3108 */    MCD::OPC_Decode, 187, 1, 42, // Opcode: FMOVD_FCC
/* 3112 */    MCD::OPC_CheckPredicate, 0, 157, 11, // Skip to: 6089
/* 3116 */    MCD::OPC_Decode, 232, 3, 43, // Opcode: V9FMOVD_FCC
/* 3120 */    MCD::OPC_FilterValue, 1, 149, 11, // Skip to: 6089
/* 3124 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3127 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3145
/* 3131 */    MCD::OPC_CheckPredicate, 0, 138, 11, // Skip to: 6089
/* 3135 */    MCD::OPC_CheckField, 18, 1, 0, 132, 11, // Skip to: 6089
/* 3141 */    MCD::OPC_Decode, 188, 1, 42, // Opcode: FMOVD_ICC
/* 3145 */    MCD::OPC_FilterValue, 2, 124, 11, // Skip to: 6089
/* 3149 */    MCD::OPC_CheckField, 18, 1, 0, 118, 11, // Skip to: 6089
/* 3155 */    MCD::OPC_Decode, 189, 1, 42, // Opcode: FMOVD_XCC
/* 3159 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3238
/* 3163 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3166 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3199
/* 3170 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3173 */    MCD::OPC_FilterValue, 0, 96, 11, // Skip to: 6089
/* 3177 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3191
/* 3181 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3191
/* 3187 */    MCD::OPC_Decode, 191, 1, 44, // Opcode: FMOVQ_FCC
/* 3191 */    MCD::OPC_CheckPredicate, 0, 78, 11, // Skip to: 6089
/* 3195 */    MCD::OPC_Decode, 233, 3, 45, // Opcode: V9FMOVQ_FCC
/* 3199 */    MCD::OPC_FilterValue, 1, 70, 11, // Skip to: 6089
/* 3203 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3206 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3224
/* 3210 */    MCD::OPC_CheckPredicate, 0, 59, 11, // Skip to: 6089
/* 3214 */    MCD::OPC_CheckField, 18, 1, 0, 53, 11, // Skip to: 6089
/* 3220 */    MCD::OPC_Decode, 192, 1, 44, // Opcode: FMOVQ_ICC
/* 3224 */    MCD::OPC_FilterValue, 2, 45, 11, // Skip to: 6089
/* 3228 */    MCD::OPC_CheckField, 18, 1, 0, 39, 11, // Skip to: 6089
/* 3234 */    MCD::OPC_Decode, 193, 1, 44, // Opcode: FMOVQ_XCC
/* 3238 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3269
/* 3242 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3245 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3257
/* 3249 */    MCD::OPC_CheckPredicate, 0, 20, 11, // Skip to: 6089
/* 3253 */    MCD::OPC_Decode, 202, 1, 46, // Opcode: FMOVRLEZS
/* 3257 */    MCD::OPC_FilterValue, 3, 12, 11, // Skip to: 6089
/* 3261 */    MCD::OPC_CheckPredicate, 0, 8, 11, // Skip to: 6089
/* 3265 */    MCD::OPC_Decode, 199, 1, 46, // Opcode: FMOVRGZS
/* 3269 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3300
/* 3273 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3276 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3288
/* 3280 */    MCD::OPC_CheckPredicate, 0, 245, 10, // Skip to: 6089
/* 3284 */    MCD::OPC_Decode, 200, 1, 46, // Opcode: FMOVRLEZD
/* 3288 */    MCD::OPC_FilterValue, 3, 237, 10, // Skip to: 6089
/* 3292 */    MCD::OPC_CheckPredicate, 0, 233, 10, // Skip to: 6089
/* 3296 */    MCD::OPC_Decode, 197, 1, 46, // Opcode: FMOVRGZD
/* 3300 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3331
/* 3304 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3307 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3319
/* 3311 */    MCD::OPC_CheckPredicate, 0, 214, 10, // Skip to: 6089
/* 3315 */    MCD::OPC_Decode, 201, 1, 46, // Opcode: FMOVRLEZQ
/* 3319 */    MCD::OPC_FilterValue, 3, 206, 10, // Skip to: 6089
/* 3323 */    MCD::OPC_CheckPredicate, 0, 202, 10, // Skip to: 6089
/* 3327 */    MCD::OPC_Decode, 198, 1, 46, // Opcode: FMOVRGZQ
/* 3331 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3345
/* 3335 */    MCD::OPC_CheckField, 11, 3, 1, 188, 10, // Skip to: 6089
/* 3341 */    MCD::OPC_Decode, 231, 3, 47, // Opcode: V9FCMPS
/* 3345 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3359
/* 3349 */    MCD::OPC_CheckField, 11, 3, 1, 174, 10, // Skip to: 6089
/* 3355 */    MCD::OPC_Decode, 226, 3, 48, // Opcode: V9FCMPD
/* 3359 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3373
/* 3363 */    MCD::OPC_CheckField, 11, 3, 1, 160, 10, // Skip to: 6089
/* 3369 */    MCD::OPC_Decode, 230, 3, 49, // Opcode: V9FCMPQ
/* 3373 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3387
/* 3377 */    MCD::OPC_CheckField, 11, 3, 1, 146, 10, // Skip to: 6089
/* 3383 */    MCD::OPC_Decode, 229, 3, 47, // Opcode: V9FCMPES
/* 3387 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3401
/* 3391 */    MCD::OPC_CheckField, 11, 3, 1, 132, 10, // Skip to: 6089
/* 3397 */    MCD::OPC_Decode, 227, 3, 48, // Opcode: V9FCMPED
/* 3401 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3415
/* 3405 */    MCD::OPC_CheckField, 11, 3, 1, 118, 10, // Skip to: 6089
/* 3411 */    MCD::OPC_Decode, 228, 3, 49, // Opcode: V9FCMPEQ
/* 3415 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3470
/* 3419 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3422 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3434
/* 3426 */    MCD::OPC_CheckPredicate, 0, 99, 10, // Skip to: 6089
/* 3430 */    MCD::OPC_Decode, 211, 1, 46, // Opcode: FMOVRZS
/* 3434 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3446
/* 3438 */    MCD::OPC_CheckPredicate, 0, 87, 10, // Skip to: 6089
/* 3442 */    MCD::OPC_Decode, 205, 1, 46, // Opcode: FMOVRLZS
/* 3446 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3458
/* 3450 */    MCD::OPC_CheckPredicate, 0, 75, 10, // Skip to: 6089
/* 3454 */    MCD::OPC_Decode, 208, 1, 46, // Opcode: FMOVRNZS
/* 3458 */    MCD::OPC_FilterValue, 3, 67, 10, // Skip to: 6089
/* 3462 */    MCD::OPC_CheckPredicate, 0, 63, 10, // Skip to: 6089
/* 3466 */    MCD::OPC_Decode, 196, 1, 46, // Opcode: FMOVRGEZS
/* 3470 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3525
/* 3474 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3477 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3489
/* 3481 */    MCD::OPC_CheckPredicate, 0, 44, 10, // Skip to: 6089
/* 3485 */    MCD::OPC_Decode, 209, 1, 46, // Opcode: FMOVRZD
/* 3489 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3501
/* 3493 */    MCD::OPC_CheckPredicate, 0, 32, 10, // Skip to: 6089
/* 3497 */    MCD::OPC_Decode, 203, 1, 46, // Opcode: FMOVRLZD
/* 3501 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3513
/* 3505 */    MCD::OPC_CheckPredicate, 0, 20, 10, // Skip to: 6089
/* 3509 */    MCD::OPC_Decode, 206, 1, 46, // Opcode: FMOVRNZD
/* 3513 */    MCD::OPC_FilterValue, 3, 12, 10, // Skip to: 6089
/* 3517 */    MCD::OPC_CheckPredicate, 0, 8, 10, // Skip to: 6089
/* 3521 */    MCD::OPC_Decode, 194, 1, 46, // Opcode: FMOVRGEZD
/* 3525 */    MCD::OPC_FilterValue, 39, 0, 10, // Skip to: 6089
/* 3529 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3532 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3544
/* 3536 */    MCD::OPC_CheckPredicate, 0, 245, 9, // Skip to: 6089
/* 3540 */    MCD::OPC_Decode, 210, 1, 46, // Opcode: FMOVRZQ
/* 3544 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3556
/* 3548 */    MCD::OPC_CheckPredicate, 0, 233, 9, // Skip to: 6089
/* 3552 */    MCD::OPC_Decode, 204, 1, 46, // Opcode: FMOVRLZQ
/* 3556 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3568
/* 3560 */    MCD::OPC_CheckPredicate, 0, 221, 9, // Skip to: 6089
/* 3564 */    MCD::OPC_Decode, 207, 1, 46, // Opcode: FMOVRNZQ
/* 3568 */    MCD::OPC_FilterValue, 3, 213, 9, // Skip to: 6089
/* 3572 */    MCD::OPC_CheckPredicate, 0, 209, 9, // Skip to: 6089
/* 3576 */    MCD::OPC_Decode, 195, 1, 46, // Opcode: FMOVRGEZQ
/* 3580 */    MCD::OPC_FilterValue, 54, 19, 6, // Skip to: 5139
/* 3584 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3587 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3599
/* 3591 */    MCD::OPC_CheckPredicate, 2, 190, 9, // Skip to: 6089
/* 3595 */    MCD::OPC_Decode, 135, 1, 10, // Opcode: EDGE8
/* 3599 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3611
/* 3603 */    MCD::OPC_CheckPredicate, 3, 178, 9, // Skip to: 6089
/* 3607 */    MCD::OPC_Decode, 138, 1, 10, // Opcode: EDGE8N
/* 3611 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3623
/* 3615 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6089
/* 3619 */    MCD::OPC_Decode, 136, 1, 10, // Opcode: EDGE8L
/* 3623 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3635
/* 3627 */    MCD::OPC_CheckPredicate, 3, 154, 9, // Skip to: 6089
/* 3631 */    MCD::OPC_Decode, 137, 1, 10, // Opcode: EDGE8LN
/* 3635 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3646
/* 3639 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6089
/* 3643 */    MCD::OPC_Decode, 127, 10, // Opcode: EDGE16
/* 3646 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3658
/* 3650 */    MCD::OPC_CheckPredicate, 3, 131, 9, // Skip to: 6089
/* 3654 */    MCD::OPC_Decode, 130, 1, 10, // Opcode: EDGE16N
/* 3658 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3670
/* 3662 */    MCD::OPC_CheckPredicate, 2, 119, 9, // Skip to: 6089
/* 3666 */    MCD::OPC_Decode, 128, 1, 10, // Opcode: EDGE16L
/* 3670 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3682
/* 3674 */    MCD::OPC_CheckPredicate, 3, 107, 9, // Skip to: 6089
/* 3678 */    MCD::OPC_Decode, 129, 1, 10, // Opcode: EDGE16LN
/* 3682 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3694
/* 3686 */    MCD::OPC_CheckPredicate, 2, 95, 9, // Skip to: 6089
/* 3690 */    MCD::OPC_Decode, 131, 1, 10, // Opcode: EDGE32
/* 3694 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3706
/* 3698 */    MCD::OPC_CheckPredicate, 3, 83, 9, // Skip to: 6089
/* 3702 */    MCD::OPC_Decode, 134, 1, 10, // Opcode: EDGE32N
/* 3706 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3718
/* 3710 */    MCD::OPC_CheckPredicate, 2, 71, 9, // Skip to: 6089
/* 3714 */    MCD::OPC_Decode, 132, 1, 10, // Opcode: EDGE32L
/* 3718 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3730
/* 3722 */    MCD::OPC_CheckPredicate, 3, 59, 9, // Skip to: 6089
/* 3726 */    MCD::OPC_Decode, 133, 1, 10, // Opcode: EDGE32LN
/* 3730 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3741
/* 3734 */    MCD::OPC_CheckPredicate, 2, 47, 9, // Skip to: 6089
/* 3738 */    MCD::OPC_Decode, 52, 10, // Opcode: ARRAY8
/* 3741 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3752
/* 3745 */    MCD::OPC_CheckPredicate, 1, 36, 9, // Skip to: 6089
/* 3749 */    MCD::OPC_Decode, 29, 10, // Opcode: ADDXC
/* 3752 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3763
/* 3756 */    MCD::OPC_CheckPredicate, 2, 25, 9, // Skip to: 6089
/* 3760 */    MCD::OPC_Decode, 50, 10, // Opcode: ARRAY16
/* 3763 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3774
/* 3767 */    MCD::OPC_CheckPredicate, 1, 14, 9, // Skip to: 6089
/* 3771 */    MCD::OPC_Decode, 30, 10, // Opcode: ADDXCCC
/* 3774 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3785
/* 3778 */    MCD::OPC_CheckPredicate, 2, 3, 9, // Skip to: 6089
/* 3782 */    MCD::OPC_Decode, 51, 10, // Opcode: ARRAY32
/* 3785 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3797
/* 3789 */    MCD::OPC_CheckPredicate, 1, 248, 8, // Skip to: 6089
/* 3793 */    MCD::OPC_Decode, 222, 3, 10, // Opcode: UMULXHI
/* 3797 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3815
/* 3801 */    MCD::OPC_CheckPredicate, 1, 236, 8, // Skip to: 6089
/* 3805 */    MCD::OPC_CheckField, 14, 5, 0, 230, 8, // Skip to: 6089
/* 3811 */    MCD::OPC_Decode, 203, 2, 50, // Opcode: LZCNT
/* 3815 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3826
/* 3819 */    MCD::OPC_CheckPredicate, 2, 218, 8, // Skip to: 6089
/* 3823 */    MCD::OPC_Decode, 37, 10, // Opcode: ALIGNADDR
/* 3826 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 3837
/* 3830 */    MCD::OPC_CheckPredicate, 3, 207, 8, // Skip to: 6089
/* 3834 */    MCD::OPC_Decode, 79, 10, // Opcode: BMASK
/* 3837 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3848
/* 3841 */    MCD::OPC_CheckPredicate, 2, 196, 8, // Skip to: 6089
/* 3845 */    MCD::OPC_Decode, 38, 10, // Opcode: ALIGNADDRL
/* 3848 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 3871
/* 3852 */    MCD::OPC_CheckPredicate, 1, 185, 8, // Skip to: 6089
/* 3856 */    MCD::OPC_CheckField, 25, 5, 0, 179, 8, // Skip to: 6089
/* 3862 */    MCD::OPC_CheckField, 14, 5, 0, 173, 8, // Skip to: 6089
/* 3868 */    MCD::OPC_Decode, 124, 51, // Opcode: CMASK8
/* 3871 */    MCD::OPC_FilterValue, 28, 7, 0, // Skip to: 3882
/* 3875 */    MCD::OPC_CheckPredicate, 3, 162, 8, // Skip to: 6089
/* 3879 */    MCD::OPC_Decode, 116, 30, // Opcode: BSHUFFLE
/* 3882 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 3905
/* 3886 */    MCD::OPC_CheckPredicate, 1, 151, 8, // Skip to: 6089
/* 3890 */    MCD::OPC_CheckField, 25, 5, 0, 145, 8, // Skip to: 6089
/* 3896 */    MCD::OPC_CheckField, 14, 5, 0, 139, 8, // Skip to: 6089
/* 3902 */    MCD::OPC_Decode, 122, 51, // Opcode: CMASK16
/* 3905 */    MCD::OPC_FilterValue, 31, 19, 0, // Skip to: 3928
/* 3909 */    MCD::OPC_CheckPredicate, 1, 128, 8, // Skip to: 6089
/* 3913 */    MCD::OPC_CheckField, 25, 5, 0, 122, 8, // Skip to: 6089
/* 3919 */    MCD::OPC_CheckField, 14, 5, 0, 116, 8, // Skip to: 6089
/* 3925 */    MCD::OPC_Decode, 123, 51, // Opcode: CMASK32
/* 3928 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3940
/* 3932 */    MCD::OPC_CheckPredicate, 2, 105, 8, // Skip to: 6089
/* 3936 */    MCD::OPC_Decode, 160, 1, 52, // Opcode: FCMPLE16
/* 3940 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 3952
/* 3944 */    MCD::OPC_CheckPredicate, 1, 93, 8, // Skip to: 6089
/* 3948 */    MCD::OPC_Decode, 143, 2, 30, // Opcode: FSLL16
/* 3952 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 3964
/* 3956 */    MCD::OPC_CheckPredicate, 2, 81, 8, // Skip to: 6089
/* 3960 */    MCD::OPC_Decode, 162, 1, 52, // Opcode: FCMPNE16
/* 3964 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 3976
/* 3968 */    MCD::OPC_CheckPredicate, 1, 69, 8, // Skip to: 6089
/* 3972 */    MCD::OPC_Decode, 155, 2, 30, // Opcode: FSRL16
/* 3976 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 3988
/* 3980 */    MCD::OPC_CheckPredicate, 2, 57, 8, // Skip to: 6089
/* 3984 */    MCD::OPC_Decode, 161, 1, 52, // Opcode: FCMPLE32
/* 3988 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4000
/* 3992 */    MCD::OPC_CheckPredicate, 1, 45, 8, // Skip to: 6089
/* 3996 */    MCD::OPC_Decode, 144, 2, 30, // Opcode: FSLL32
/* 4000 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4012
/* 4004 */    MCD::OPC_CheckPredicate, 2, 33, 8, // Skip to: 6089
/* 4008 */    MCD::OPC_Decode, 163, 1, 52, // Opcode: FCMPNE32
/* 4012 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4024
/* 4016 */    MCD::OPC_CheckPredicate, 1, 21, 8, // Skip to: 6089
/* 4020 */    MCD::OPC_Decode, 156, 2, 30, // Opcode: FSRL32
/* 4024 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4036
/* 4028 */    MCD::OPC_CheckPredicate, 2, 9, 8, // Skip to: 6089
/* 4032 */    MCD::OPC_Decode, 158, 1, 52, // Opcode: FCMPGT16
/* 4036 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4048
/* 4040 */    MCD::OPC_CheckPredicate, 1, 253, 7, // Skip to: 6089
/* 4044 */    MCD::OPC_Decode, 141, 2, 30, // Opcode: FSLAS16
/* 4048 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4060
/* 4052 */    MCD::OPC_CheckPredicate, 2, 241, 7, // Skip to: 6089
/* 4056 */    MCD::OPC_Decode, 156, 1, 52, // Opcode: FCMPEQ16
/* 4060 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4072
/* 4064 */    MCD::OPC_CheckPredicate, 1, 229, 7, // Skip to: 6089
/* 4068 */    MCD::OPC_Decode, 149, 2, 30, // Opcode: FSRA16
/* 4072 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4084
/* 4076 */    MCD::OPC_CheckPredicate, 2, 217, 7, // Skip to: 6089
/* 4080 */    MCD::OPC_Decode, 159, 1, 52, // Opcode: FCMPGT32
/* 4084 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4096
/* 4088 */    MCD::OPC_CheckPredicate, 1, 205, 7, // Skip to: 6089
/* 4092 */    MCD::OPC_Decode, 142, 2, 30, // Opcode: FSLAS32
/* 4096 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4108
/* 4100 */    MCD::OPC_CheckPredicate, 2, 193, 7, // Skip to: 6089
/* 4104 */    MCD::OPC_Decode, 157, 1, 52, // Opcode: FCMPEQ32
/* 4108 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4120
/* 4112 */    MCD::OPC_CheckPredicate, 1, 181, 7, // Skip to: 6089
/* 4116 */    MCD::OPC_Decode, 150, 2, 30, // Opcode: FSRA32
/* 4120 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4132
/* 4124 */    MCD::OPC_CheckPredicate, 2, 169, 7, // Skip to: 6089
/* 4128 */    MCD::OPC_Decode, 218, 1, 30, // Opcode: FMUL8X16
/* 4132 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4144
/* 4136 */    MCD::OPC_CheckPredicate, 2, 157, 7, // Skip to: 6089
/* 4140 */    MCD::OPC_Decode, 220, 1, 30, // Opcode: FMUL8X16AU
/* 4144 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4156
/* 4148 */    MCD::OPC_CheckPredicate, 2, 145, 7, // Skip to: 6089
/* 4152 */    MCD::OPC_Decode, 219, 1, 30, // Opcode: FMUL8X16AL
/* 4156 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4168
/* 4160 */    MCD::OPC_CheckPredicate, 2, 133, 7, // Skip to: 6089
/* 4164 */    MCD::OPC_Decode, 216, 1, 30, // Opcode: FMUL8SUX16
/* 4168 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4180
/* 4172 */    MCD::OPC_CheckPredicate, 2, 121, 7, // Skip to: 6089
/* 4176 */    MCD::OPC_Decode, 217, 1, 30, // Opcode: FMUL8ULX16
/* 4180 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4192
/* 4184 */    MCD::OPC_CheckPredicate, 2, 109, 7, // Skip to: 6089
/* 4188 */    MCD::OPC_Decode, 222, 1, 30, // Opcode: FMULD8SUX16
/* 4192 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4204
/* 4196 */    MCD::OPC_CheckPredicate, 2, 97, 7, // Skip to: 6089
/* 4200 */    MCD::OPC_Decode, 223, 1, 30, // Opcode: FMULD8ULX16
/* 4204 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4216
/* 4208 */    MCD::OPC_CheckPredicate, 2, 85, 7, // Skip to: 6089
/* 4212 */    MCD::OPC_Decode, 253, 1, 30, // Opcode: FPACK32
/* 4216 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4234
/* 4220 */    MCD::OPC_CheckPredicate, 2, 73, 7, // Skip to: 6089
/* 4224 */    MCD::OPC_CheckField, 14, 5, 0, 67, 7, // Skip to: 6089
/* 4230 */    MCD::OPC_Decode, 252, 1, 27, // Opcode: FPACK16
/* 4234 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4252
/* 4238 */    MCD::OPC_CheckPredicate, 2, 55, 7, // Skip to: 6089
/* 4242 */    MCD::OPC_CheckField, 14, 5, 0, 49, 7, // Skip to: 6089
/* 4248 */    MCD::OPC_Decode, 254, 1, 27, // Opcode: FPACKFIX
/* 4252 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4264
/* 4256 */    MCD::OPC_CheckPredicate, 2, 37, 7, // Skip to: 6089
/* 4260 */    MCD::OPC_Decode, 242, 2, 30, // Opcode: PDIST
/* 4264 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4276
/* 4268 */    MCD::OPC_CheckPredicate, 1, 25, 7, // Skip to: 6089
/* 4272 */    MCD::OPC_Decode, 243, 2, 30, // Opcode: PDISTN
/* 4276 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4288
/* 4280 */    MCD::OPC_CheckPredicate, 1, 13, 7, // Skip to: 6089
/* 4284 */    MCD::OPC_Decode, 185, 1, 30, // Opcode: FMEAN16
/* 4288 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4300
/* 4292 */    MCD::OPC_CheckPredicate, 1, 1, 7, // Skip to: 6089
/* 4296 */    MCD::OPC_Decode, 131, 2, 30, // Opcode: FPADD64
/* 4300 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4312
/* 4304 */    MCD::OPC_CheckPredicate, 1, 245, 6, // Skip to: 6089
/* 4308 */    MCD::OPC_Decode, 154, 1, 30, // Opcode: FCHKSM16
/* 4312 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4324
/* 4316 */    MCD::OPC_CheckPredicate, 2, 233, 6, // Skip to: 6089
/* 4320 */    MCD::OPC_Decode, 145, 1, 30, // Opcode: FALIGNADATA
/* 4324 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4336
/* 4328 */    MCD::OPC_CheckPredicate, 2, 221, 6, // Skip to: 6089
/* 4332 */    MCD::OPC_Decode, 132, 2, 30, // Opcode: FPMERGE
/* 4336 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4354
/* 4340 */    MCD::OPC_CheckPredicate, 2, 209, 6, // Skip to: 6089
/* 4344 */    MCD::OPC_CheckField, 14, 5, 0, 203, 6, // Skip to: 6089
/* 4350 */    MCD::OPC_Decode, 174, 1, 27, // Opcode: FEXPAND
/* 4354 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4366
/* 4358 */    MCD::OPC_CheckPredicate, 2, 191, 6, // Skip to: 6089
/* 4362 */    MCD::OPC_Decode, 255, 1, 30, // Opcode: FPADD16
/* 4366 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4378
/* 4370 */    MCD::OPC_CheckPredicate, 2, 179, 6, // Skip to: 6089
/* 4374 */    MCD::OPC_Decode, 128, 2, 30, // Opcode: FPADD16S
/* 4378 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4390
/* 4382 */    MCD::OPC_CheckPredicate, 2, 167, 6, // Skip to: 6089
/* 4386 */    MCD::OPC_Decode, 129, 2, 30, // Opcode: FPADD32
/* 4390 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4402
/* 4394 */    MCD::OPC_CheckPredicate, 2, 155, 6, // Skip to: 6089
/* 4398 */    MCD::OPC_Decode, 130, 2, 30, // Opcode: FPADD32S
/* 4402 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4414
/* 4406 */    MCD::OPC_CheckPredicate, 2, 143, 6, // Skip to: 6089
/* 4410 */    MCD::OPC_Decode, 133, 2, 30, // Opcode: FPSUB16
/* 4414 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4426
/* 4418 */    MCD::OPC_CheckPredicate, 2, 131, 6, // Skip to: 6089
/* 4422 */    MCD::OPC_Decode, 134, 2, 30, // Opcode: FPSUB16S
/* 4426 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4438
/* 4430 */    MCD::OPC_CheckPredicate, 2, 119, 6, // Skip to: 6089
/* 4434 */    MCD::OPC_Decode, 135, 2, 30, // Opcode: FPSUB32
/* 4438 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4450
/* 4442 */    MCD::OPC_CheckPredicate, 2, 107, 6, // Skip to: 6089
/* 4446 */    MCD::OPC_Decode, 136, 2, 30, // Opcode: FPSUB32S
/* 4450 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4474
/* 4454 */    MCD::OPC_CheckPredicate, 2, 95, 6, // Skip to: 6089
/* 4458 */    MCD::OPC_CheckField, 14, 5, 0, 89, 6, // Skip to: 6089
/* 4464 */    MCD::OPC_CheckField, 0, 5, 0, 83, 6, // Skip to: 6089
/* 4470 */    MCD::OPC_Decode, 171, 2, 53, // Opcode: FZERO
/* 4474 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4498
/* 4478 */    MCD::OPC_CheckPredicate, 2, 71, 6, // Skip to: 6089
/* 4482 */    MCD::OPC_CheckField, 14, 5, 0, 65, 6, // Skip to: 6089
/* 4488 */    MCD::OPC_CheckField, 0, 5, 0, 59, 6, // Skip to: 6089
/* 4494 */    MCD::OPC_Decode, 172, 2, 54, // Opcode: FZEROS
/* 4498 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4510
/* 4502 */    MCD::OPC_CheckPredicate, 2, 47, 6, // Skip to: 6089
/* 4506 */    MCD::OPC_Decode, 237, 1, 30, // Opcode: FNOR
/* 4510 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4522
/* 4514 */    MCD::OPC_CheckPredicate, 2, 35, 6, // Skip to: 6089
/* 4518 */    MCD::OPC_Decode, 238, 1, 29, // Opcode: FNORS
/* 4522 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4534
/* 4526 */    MCD::OPC_CheckPredicate, 2, 23, 6, // Skip to: 6089
/* 4530 */    MCD::OPC_Decode, 149, 1, 30, // Opcode: FANDNOT2
/* 4534 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4546
/* 4538 */    MCD::OPC_CheckPredicate, 2, 11, 6, // Skip to: 6089
/* 4542 */    MCD::OPC_Decode, 150, 1, 29, // Opcode: FANDNOT2S
/* 4546 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4564
/* 4550 */    MCD::OPC_CheckPredicate, 2, 255, 5, // Skip to: 6089
/* 4554 */    MCD::OPC_CheckField, 14, 5, 0, 249, 5, // Skip to: 6089
/* 4560 */    MCD::OPC_Decode, 241, 1, 27, // Opcode: FNOT2
/* 4564 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4582
/* 4568 */    MCD::OPC_CheckPredicate, 2, 237, 5, // Skip to: 6089
/* 4572 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6089
/* 4578 */    MCD::OPC_Decode, 242, 1, 26, // Opcode: FNOT2S
/* 4582 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4594
/* 4586 */    MCD::OPC_CheckPredicate, 2, 219, 5, // Skip to: 6089
/* 4590 */    MCD::OPC_Decode, 147, 1, 30, // Opcode: FANDNOT1
/* 4594 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4606
/* 4598 */    MCD::OPC_CheckPredicate, 2, 207, 5, // Skip to: 6089
/* 4602 */    MCD::OPC_Decode, 148, 1, 29, // Opcode: FANDNOT1S
/* 4606 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4624
/* 4610 */    MCD::OPC_CheckPredicate, 2, 195, 5, // Skip to: 6089
/* 4614 */    MCD::OPC_CheckField, 0, 5, 0, 189, 5, // Skip to: 6089
/* 4620 */    MCD::OPC_Decode, 239, 1, 55, // Opcode: FNOT1
/* 4624 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4642
/* 4628 */    MCD::OPC_CheckPredicate, 2, 177, 5, // Skip to: 6089
/* 4632 */    MCD::OPC_CheckField, 0, 5, 0, 171, 5, // Skip to: 6089
/* 4638 */    MCD::OPC_Decode, 240, 1, 56, // Opcode: FNOT1S
/* 4642 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4654
/* 4646 */    MCD::OPC_CheckPredicate, 2, 159, 5, // Skip to: 6089
/* 4650 */    MCD::OPC_Decode, 166, 2, 30, // Opcode: FXOR
/* 4654 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4666
/* 4658 */    MCD::OPC_CheckPredicate, 2, 147, 5, // Skip to: 6089
/* 4662 */    MCD::OPC_Decode, 167, 2, 29, // Opcode: FXORS
/* 4666 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4678
/* 4670 */    MCD::OPC_CheckPredicate, 2, 135, 5, // Skip to: 6089
/* 4674 */    MCD::OPC_Decode, 228, 1, 30, // Opcode: FNAND
/* 4678 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4690
/* 4682 */    MCD::OPC_CheckPredicate, 2, 123, 5, // Skip to: 6089
/* 4686 */    MCD::OPC_Decode, 229, 1, 29, // Opcode: FNANDS
/* 4690 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4702
/* 4694 */    MCD::OPC_CheckPredicate, 2, 111, 5, // Skip to: 6089
/* 4698 */    MCD::OPC_Decode, 146, 1, 30, // Opcode: FAND
/* 4702 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4714
/* 4706 */    MCD::OPC_CheckPredicate, 2, 99, 5, // Skip to: 6089
/* 4710 */    MCD::OPC_Decode, 151, 1, 29, // Opcode: FANDS
/* 4714 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4726
/* 4718 */    MCD::OPC_CheckPredicate, 2, 87, 5, // Skip to: 6089
/* 4722 */    MCD::OPC_Decode, 164, 2, 30, // Opcode: FXNOR
/* 4726 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4738
/* 4730 */    MCD::OPC_CheckPredicate, 2, 75, 5, // Skip to: 6089
/* 4734 */    MCD::OPC_Decode, 165, 2, 29, // Opcode: FXNORS
/* 4738 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4756
/* 4742 */    MCD::OPC_CheckPredicate, 2, 63, 5, // Skip to: 6089
/* 4746 */    MCD::OPC_CheckField, 0, 5, 0, 57, 5, // Skip to: 6089
/* 4752 */    MCD::OPC_Decode, 151, 2, 55, // Opcode: FSRC1
/* 4756 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4774
/* 4760 */    MCD::OPC_CheckPredicate, 2, 45, 5, // Skip to: 6089
/* 4764 */    MCD::OPC_CheckField, 0, 5, 0, 39, 5, // Skip to: 6089
/* 4770 */    MCD::OPC_Decode, 152, 2, 56, // Opcode: FSRC1S
/* 4774 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4786
/* 4778 */    MCD::OPC_CheckPredicate, 2, 27, 5, // Skip to: 6089
/* 4782 */    MCD::OPC_Decode, 249, 1, 30, // Opcode: FORNOT2
/* 4786 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4798
/* 4790 */    MCD::OPC_CheckPredicate, 2, 15, 5, // Skip to: 6089
/* 4794 */    MCD::OPC_Decode, 250, 1, 29, // Opcode: FORNOT2S
/* 4798 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4816
/* 4802 */    MCD::OPC_CheckPredicate, 2, 3, 5, // Skip to: 6089
/* 4806 */    MCD::OPC_CheckField, 14, 5, 0, 253, 4, // Skip to: 6089
/* 4812 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: FSRC2
/* 4816 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4834
/* 4820 */    MCD::OPC_CheckPredicate, 2, 241, 4, // Skip to: 6089
/* 4824 */    MCD::OPC_CheckField, 14, 5, 0, 235, 4, // Skip to: 6089
/* 4830 */    MCD::OPC_Decode, 154, 2, 26, // Opcode: FSRC2S
/* 4834 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4846
/* 4838 */    MCD::OPC_CheckPredicate, 2, 223, 4, // Skip to: 6089
/* 4842 */    MCD::OPC_Decode, 247, 1, 30, // Opcode: FORNOT1
/* 4846 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4858
/* 4850 */    MCD::OPC_CheckPredicate, 2, 211, 4, // Skip to: 6089
/* 4854 */    MCD::OPC_Decode, 248, 1, 29, // Opcode: FORNOT1S
/* 4858 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 4870
/* 4862 */    MCD::OPC_CheckPredicate, 2, 199, 4, // Skip to: 6089
/* 4866 */    MCD::OPC_Decode, 246, 1, 30, // Opcode: FOR
/* 4870 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 4882
/* 4874 */    MCD::OPC_CheckPredicate, 2, 187, 4, // Skip to: 6089
/* 4878 */    MCD::OPC_Decode, 251, 1, 29, // Opcode: FORS
/* 4882 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 4906
/* 4886 */    MCD::OPC_CheckPredicate, 2, 175, 4, // Skip to: 6089
/* 4890 */    MCD::OPC_CheckField, 14, 5, 0, 169, 4, // Skip to: 6089
/* 4896 */    MCD::OPC_CheckField, 0, 5, 0, 163, 4, // Skip to: 6089
/* 4902 */    MCD::OPC_Decode, 244, 1, 53, // Opcode: FONE
/* 4906 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 4930
/* 4910 */    MCD::OPC_CheckPredicate, 2, 151, 4, // Skip to: 6089
/* 4914 */    MCD::OPC_CheckField, 14, 5, 0, 145, 4, // Skip to: 6089
/* 4920 */    MCD::OPC_CheckField, 0, 5, 0, 139, 4, // Skip to: 6089
/* 4926 */    MCD::OPC_Decode, 245, 1, 54, // Opcode: FONES
/* 4930 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 4961
/* 4935 */    MCD::OPC_CheckPredicate, 2, 126, 4, // Skip to: 6089
/* 4939 */    MCD::OPC_CheckField, 25, 5, 0, 120, 4, // Skip to: 6089
/* 4945 */    MCD::OPC_CheckField, 14, 5, 0, 114, 4, // Skip to: 6089
/* 4951 */    MCD::OPC_CheckField, 0, 5, 0, 108, 4, // Skip to: 6089
/* 4957 */    MCD::OPC_Decode, 146, 3, 4, // Opcode: SHUTDOWN
/* 4961 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 4992
/* 4966 */    MCD::OPC_CheckPredicate, 3, 95, 4, // Skip to: 6089
/* 4970 */    MCD::OPC_CheckField, 25, 5, 0, 89, 4, // Skip to: 6089
/* 4976 */    MCD::OPC_CheckField, 14, 5, 0, 83, 4, // Skip to: 6089
/* 4982 */    MCD::OPC_CheckField, 0, 5, 0, 77, 4, // Skip to: 6089
/* 4988 */    MCD::OPC_Decode, 147, 3, 4, // Opcode: SIAM
/* 4992 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5011
/* 4997 */    MCD::OPC_CheckPredicate, 1, 64, 4, // Skip to: 6089
/* 5001 */    MCD::OPC_CheckField, 14, 5, 0, 58, 4, // Skip to: 6089
/* 5007 */    MCD::OPC_Decode, 205, 2, 57, // Opcode: MOVDTOX
/* 5011 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5030
/* 5016 */    MCD::OPC_CheckPredicate, 1, 45, 4, // Skip to: 6089
/* 5020 */    MCD::OPC_CheckField, 14, 5, 0, 39, 4, // Skip to: 6089
/* 5026 */    MCD::OPC_Decode, 223, 2, 57, // Opcode: MOVSTOUW
/* 5030 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5049
/* 5035 */    MCD::OPC_CheckPredicate, 1, 26, 4, // Skip to: 6089
/* 5039 */    MCD::OPC_CheckField, 14, 5, 0, 20, 4, // Skip to: 6089
/* 5045 */    MCD::OPC_Decode, 222, 2, 57, // Opcode: MOVSTOSW
/* 5049 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5062
/* 5054 */    MCD::OPC_CheckPredicate, 1, 7, 4, // Skip to: 6089
/* 5058 */    MCD::OPC_Decode, 245, 3, 10, // Opcode: XMULX
/* 5062 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5075
/* 5067 */    MCD::OPC_CheckPredicate, 1, 250, 3, // Skip to: 6089
/* 5071 */    MCD::OPC_Decode, 246, 3, 10, // Opcode: XMULXHI
/* 5075 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5094
/* 5080 */    MCD::OPC_CheckPredicate, 1, 237, 3, // Skip to: 6089
/* 5084 */    MCD::OPC_CheckField, 14, 5, 0, 231, 3, // Skip to: 6089
/* 5090 */    MCD::OPC_Decode, 227, 2, 58, // Opcode: MOVXTOD
/* 5094 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5113
/* 5099 */    MCD::OPC_CheckPredicate, 1, 218, 3, // Skip to: 6089
/* 5103 */    MCD::OPC_CheckField, 14, 5, 0, 212, 3, // Skip to: 6089
/* 5109 */    MCD::OPC_Decode, 224, 2, 58, // Opcode: MOVWTOS
/* 5113 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5126
/* 5118 */    MCD::OPC_CheckPredicate, 1, 199, 3, // Skip to: 6089
/* 5122 */    MCD::OPC_Decode, 183, 1, 48, // Opcode: FLCMPS
/* 5126 */    MCD::OPC_FilterValue, 210, 2, 190, 3, // Skip to: 6089
/* 5131 */    MCD::OPC_CheckPredicate, 1, 186, 3, // Skip to: 6089
/* 5135 */    MCD::OPC_Decode, 182, 1, 48, // Opcode: FLCMPD
/* 5139 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5168
/* 5143 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5146 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5160
/* 5150 */    MCD::OPC_CheckField, 5, 8, 0, 165, 3, // Skip to: 6089
/* 5156 */    MCD::OPC_Decode, 175, 2, 59, // Opcode: JMPLrr
/* 5160 */    MCD::OPC_FilterValue, 1, 157, 3, // Skip to: 6089
/* 5164 */    MCD::OPC_Decode, 174, 2, 59, // Opcode: JMPLri
/* 5168 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5209
/* 5172 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5175 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5195
/* 5179 */    MCD::OPC_CheckField, 25, 5, 0, 136, 3, // Skip to: 6089
/* 5185 */    MCD::OPC_CheckField, 5, 8, 0, 130, 3, // Skip to: 6089
/* 5191 */    MCD::OPC_Decode, 254, 2, 60, // Opcode: RETTrr
/* 5195 */    MCD::OPC_FilterValue, 1, 122, 3, // Skip to: 6089
/* 5199 */    MCD::OPC_CheckField, 25, 5, 0, 116, 3, // Skip to: 6089
/* 5205 */    MCD::OPC_Decode, 253, 2, 60, // Opcode: RETTri
/* 5209 */    MCD::OPC_FilterValue, 58, 115, 0, // Skip to: 5328
/* 5213 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5216 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5236
/* 5220 */    MCD::OPC_CheckField, 29, 1, 0, 95, 3, // Skip to: 6089
/* 5226 */    MCD::OPC_CheckField, 5, 3, 0, 89, 3, // Skip to: 6089
/* 5232 */    MCD::OPC_Decode, 202, 3, 61, // Opcode: TICCrr
/* 5236 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5256
/* 5240 */    MCD::OPC_CheckField, 29, 1, 0, 75, 3, // Skip to: 6089
/* 5246 */    MCD::OPC_CheckField, 5, 3, 0, 69, 3, // Skip to: 6089
/* 5252 */    MCD::OPC_Decode, 213, 3, 61, // Opcode: TXCCrr
/* 5256 */    MCD::OPC_FilterValue, 32, 54, 0, // Skip to: 5314
/* 5260 */    MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 5263 */    MCD::OPC_FilterValue, 0, 54, 3, // Skip to: 6089
/* 5267 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5270 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5290
/* 5274 */    MCD::OPC_CheckField, 25, 4, 0, 30, 0, // Skip to: 5310
/* 5280 */    MCD::OPC_CheckField, 14, 5, 1, 24, 0, // Skip to: 5310
/* 5286 */    MCD::OPC_Decode, 195, 3, 4, // Opcode: TA3
/* 5290 */    MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 5310
/* 5294 */    MCD::OPC_CheckField, 25, 4, 8, 10, 0, // Skip to: 5310
/* 5300 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 5310
/* 5306 */    MCD::OPC_Decode, 196, 3, 4, // Opcode: TA5
/* 5310 */    MCD::OPC_Decode, 201, 3, 62, // Opcode: TICCri
/* 5314 */    MCD::OPC_FilterValue, 48, 3, 3, // Skip to: 6089
/* 5318 */    MCD::OPC_CheckField, 29, 1, 0, 253, 2, // Skip to: 6089
/* 5324 */    MCD::OPC_Decode, 212, 3, 62, // Opcode: TXCCri
/* 5328 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5357
/* 5332 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5335 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5349
/* 5339 */    MCD::OPC_CheckField, 5, 8, 0, 232, 2, // Skip to: 6089
/* 5345 */    MCD::OPC_Decode, 128, 3, 8, // Opcode: SAVErr
/* 5349 */    MCD::OPC_FilterValue, 1, 224, 2, // Skip to: 6089
/* 5353 */    MCD::OPC_Decode, 255, 2, 9, // Opcode: SAVEri
/* 5357 */    MCD::OPC_FilterValue, 61, 216, 2, // Skip to: 6089
/* 5361 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5364 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5378
/* 5368 */    MCD::OPC_CheckField, 5, 8, 0, 203, 2, // Skip to: 6089
/* 5374 */    MCD::OPC_Decode, 250, 2, 8, // Opcode: RESTORErr
/* 5378 */    MCD::OPC_FilterValue, 1, 195, 2, // Skip to: 6089
/* 5382 */    MCD::OPC_Decode, 249, 2, 9, // Opcode: RESTOREri
/* 5386 */    MCD::OPC_FilterValue, 3, 187, 2, // Skip to: 6089
/* 5390 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5393 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5422
/* 5397 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5400 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5414
/* 5404 */    MCD::OPC_CheckField, 5, 8, 0, 167, 2, // Skip to: 6089
/* 5410 */    MCD::OPC_Decode, 200, 2, 63, // Opcode: LDrr
/* 5414 */    MCD::OPC_FilterValue, 1, 159, 2, // Skip to: 6089
/* 5418 */    MCD::OPC_Decode, 199, 2, 63, // Opcode: LDri
/* 5422 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5451
/* 5426 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5429 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5443
/* 5433 */    MCD::OPC_CheckField, 5, 8, 0, 138, 2, // Skip to: 6089
/* 5439 */    MCD::OPC_Decode, 193, 2, 63, // Opcode: LDUBrr
/* 5443 */    MCD::OPC_FilterValue, 1, 130, 2, // Skip to: 6089
/* 5447 */    MCD::OPC_Decode, 192, 2, 63, // Opcode: LDUBri
/* 5451 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5480
/* 5455 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5458 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5472
/* 5462 */    MCD::OPC_CheckField, 5, 8, 0, 109, 2, // Skip to: 6089
/* 5468 */    MCD::OPC_Decode, 196, 2, 63, // Opcode: LDUHrr
/* 5472 */    MCD::OPC_FilterValue, 1, 101, 2, // Skip to: 6089
/* 5476 */    MCD::OPC_Decode, 195, 2, 63, // Opcode: LDUHri
/* 5480 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5509
/* 5484 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5487 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5501
/* 5491 */    MCD::OPC_CheckField, 5, 8, 0, 80, 2, // Skip to: 6089
/* 5497 */    MCD::OPC_Decode, 181, 3, 64, // Opcode: STrr
/* 5501 */    MCD::OPC_FilterValue, 1, 72, 2, // Skip to: 6089
/* 5505 */    MCD::OPC_Decode, 180, 3, 64, // Opcode: STri
/* 5509 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5538
/* 5513 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5516 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5530
/* 5520 */    MCD::OPC_CheckField, 5, 8, 0, 51, 2, // Skip to: 6089
/* 5526 */    MCD::OPC_Decode, 168, 3, 64, // Opcode: STBrr
/* 5530 */    MCD::OPC_FilterValue, 1, 43, 2, // Skip to: 6089
/* 5534 */    MCD::OPC_Decode, 167, 3, 64, // Opcode: STBri
/* 5538 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5567
/* 5542 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5545 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5559
/* 5549 */    MCD::OPC_CheckField, 5, 8, 0, 22, 2, // Skip to: 6089
/* 5555 */    MCD::OPC_Decode, 175, 3, 64, // Opcode: STHrr
/* 5559 */    MCD::OPC_FilterValue, 1, 14, 2, // Skip to: 6089
/* 5563 */    MCD::OPC_Decode, 174, 3, 64, // Opcode: STHri
/* 5567 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5596
/* 5571 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5574 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5588
/* 5578 */    MCD::OPC_CheckField, 5, 8, 0, 249, 1, // Skip to: 6089
/* 5584 */    MCD::OPC_Decode, 190, 2, 63, // Opcode: LDSWrr
/* 5588 */    MCD::OPC_FilterValue, 1, 241, 1, // Skip to: 6089
/* 5592 */    MCD::OPC_Decode, 189, 2, 63, // Opcode: LDSWri
/* 5596 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5625
/* 5600 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5603 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5617
/* 5607 */    MCD::OPC_CheckField, 5, 8, 0, 220, 1, // Skip to: 6089
/* 5613 */    MCD::OPC_Decode, 185, 2, 63, // Opcode: LDSBrr
/* 5617 */    MCD::OPC_FilterValue, 1, 212, 1, // Skip to: 6089
/* 5621 */    MCD::OPC_Decode, 184, 2, 63, // Opcode: LDSBri
/* 5625 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5654
/* 5629 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5632 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5646
/* 5636 */    MCD::OPC_CheckField, 5, 8, 0, 191, 1, // Skip to: 6089
/* 5642 */    MCD::OPC_Decode, 188, 2, 63, // Opcode: LDSHrr
/* 5646 */    MCD::OPC_FilterValue, 1, 183, 1, // Skip to: 6089
/* 5650 */    MCD::OPC_Decode, 187, 2, 63, // Opcode: LDSHri
/* 5654 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5683
/* 5658 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5661 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5675
/* 5665 */    MCD::OPC_CheckField, 5, 8, 0, 162, 1, // Skip to: 6089
/* 5671 */    MCD::OPC_Decode, 198, 2, 63, // Opcode: LDXrr
/* 5675 */    MCD::OPC_FilterValue, 1, 154, 1, // Skip to: 6089
/* 5679 */    MCD::OPC_Decode, 197, 2, 63, // Opcode: LDXri
/* 5683 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 5712
/* 5687 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5690 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5704
/* 5694 */    MCD::OPC_CheckField, 5, 8, 0, 133, 1, // Skip to: 6089
/* 5700 */    MCD::OPC_Decode, 179, 3, 64, // Opcode: STXrr
/* 5704 */    MCD::OPC_FilterValue, 1, 125, 1, // Skip to: 6089
/* 5708 */    MCD::OPC_Decode, 178, 3, 64, // Opcode: STXri
/* 5712 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 5741
/* 5716 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5719 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5733
/* 5723 */    MCD::OPC_CheckField, 5, 8, 0, 104, 1, // Skip to: 6089
/* 5729 */    MCD::OPC_Decode, 194, 3, 65, // Opcode: SWAPrr
/* 5733 */    MCD::OPC_FilterValue, 1, 96, 1, // Skip to: 6089
/* 5737 */    MCD::OPC_Decode, 193, 3, 65, // Opcode: SWAPri
/* 5741 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5755
/* 5745 */    MCD::OPC_CheckField, 13, 1, 0, 82, 1, // Skip to: 6089
/* 5751 */    MCD::OPC_Decode, 176, 2, 63, // Opcode: LDArr
/* 5755 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 5769
/* 5759 */    MCD::OPC_CheckField, 13, 1, 0, 68, 1, // Skip to: 6089
/* 5765 */    MCD::OPC_Decode, 191, 2, 63, // Opcode: LDUBArr
/* 5769 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5783
/* 5773 */    MCD::OPC_CheckField, 13, 1, 0, 54, 1, // Skip to: 6089
/* 5779 */    MCD::OPC_Decode, 194, 2, 63, // Opcode: LDUHArr
/* 5783 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5797
/* 5787 */    MCD::OPC_CheckField, 13, 1, 0, 40, 1, // Skip to: 6089
/* 5793 */    MCD::OPC_Decode, 164, 3, 64, // Opcode: STArr
/* 5797 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5811
/* 5801 */    MCD::OPC_CheckField, 13, 1, 0, 26, 1, // Skip to: 6089
/* 5807 */    MCD::OPC_Decode, 166, 3, 64, // Opcode: STBArr
/* 5811 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5825
/* 5815 */    MCD::OPC_CheckField, 13, 1, 0, 12, 1, // Skip to: 6089
/* 5821 */    MCD::OPC_Decode, 173, 3, 64, // Opcode: STHArr
/* 5825 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 5839
/* 5829 */    MCD::OPC_CheckField, 13, 1, 0, 254, 0, // Skip to: 6089
/* 5835 */    MCD::OPC_Decode, 183, 2, 63, // Opcode: LDSBArr
/* 5839 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5853
/* 5843 */    MCD::OPC_CheckField, 13, 1, 0, 240, 0, // Skip to: 6089
/* 5849 */    MCD::OPC_Decode, 186, 2, 63, // Opcode: LDSHArr
/* 5853 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 5867
/* 5857 */    MCD::OPC_CheckField, 13, 1, 0, 226, 0, // Skip to: 6089
/* 5863 */    MCD::OPC_Decode, 192, 3, 65, // Opcode: SWAPArr
/* 5867 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 5896
/* 5871 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5874 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5888
/* 5878 */    MCD::OPC_CheckField, 5, 8, 0, 205, 0, // Skip to: 6089
/* 5884 */    MCD::OPC_Decode, 180, 2, 66, // Opcode: LDFrr
/* 5888 */    MCD::OPC_FilterValue, 1, 197, 0, // Skip to: 6089
/* 5892 */    MCD::OPC_Decode, 179, 2, 66, // Opcode: LDFri
/* 5896 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 5933
/* 5900 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5903 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 5921
/* 5907 */    MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 6089
/* 5911 */    MCD::OPC_CheckField, 5, 8, 0, 172, 0, // Skip to: 6089
/* 5917 */    MCD::OPC_Decode, 182, 2, 67, // Opcode: LDQFrr
/* 5921 */    MCD::OPC_FilterValue, 1, 164, 0, // Skip to: 6089
/* 5925 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 6089
/* 5929 */    MCD::OPC_Decode, 181, 2, 67, // Opcode: LDQFri
/* 5933 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 5962
/* 5937 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5940 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5954
/* 5944 */    MCD::OPC_CheckField, 5, 8, 0, 139, 0, // Skip to: 6089
/* 5950 */    MCD::OPC_Decode, 178, 2, 68, // Opcode: LDDFrr
/* 5954 */    MCD::OPC_FilterValue, 1, 131, 0, // Skip to: 6089
/* 5958 */    MCD::OPC_Decode, 177, 2, 68, // Opcode: LDDFri
/* 5962 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 5991
/* 5966 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5969 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5983
/* 5973 */    MCD::OPC_CheckField, 5, 8, 0, 110, 0, // Skip to: 6089
/* 5979 */    MCD::OPC_Decode, 172, 3, 69, // Opcode: STFrr
/* 5983 */    MCD::OPC_FilterValue, 1, 102, 0, // Skip to: 6089
/* 5987 */    MCD::OPC_Decode, 171, 3, 69, // Opcode: STFri
/* 5991 */    MCD::OPC_FilterValue, 38, 33, 0, // Skip to: 6028
/* 5995 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5998 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6016
/* 6002 */    MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 6089
/* 6006 */    MCD::OPC_CheckField, 5, 8, 0, 77, 0, // Skip to: 6089
/* 6012 */    MCD::OPC_Decode, 177, 3, 70, // Opcode: STQFrr
/* 6016 */    MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 6089
/* 6020 */    MCD::OPC_CheckPredicate, 0, 65, 0, // Skip to: 6089
/* 6024 */    MCD::OPC_Decode, 176, 3, 70, // Opcode: STQFri
/* 6028 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6057
/* 6032 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6035 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6049
/* 6039 */    MCD::OPC_CheckField, 5, 8, 0, 44, 0, // Skip to: 6089
/* 6045 */    MCD::OPC_Decode, 170, 3, 71, // Opcode: STDFrr
/* 6049 */    MCD::OPC_FilterValue, 1, 36, 0, // Skip to: 6089
/* 6053 */    MCD::OPC_Decode, 169, 3, 71, // Opcode: STDFri
/* 6057 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 6075
/* 6061 */    MCD::OPC_CheckPredicate, 0, 24, 0, // Skip to: 6089
/* 6065 */    MCD::OPC_CheckField, 5, 9, 128, 1, 17, 0, // Skip to: 6089
/* 6072 */    MCD::OPC_Decode, 121, 72, // Opcode: CASrr
/* 6075 */    MCD::OPC_FilterValue, 62, 10, 0, // Skip to: 6089
/* 6079 */    MCD::OPC_CheckField, 5, 9, 128, 1, 3, 0, // Skip to: 6089
/* 6086 */    MCD::OPC_Decode, 120, 73, // Opcode: CASXrr
/* 6089 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 63:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
