/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Hexagon Disassembler                                                    *|
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

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 3 */       MCD::OPC_FilterValue, 1, 121, 3, // Skip to: 896
/* 7 */       MCD::OPC_ExtractField, 24, 4,  // Inst{27-24} ...
/* 10 */      MCD::OPC_FilterValue, 0, 95, 0, // Skip to: 109
/* 14 */      MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 17 */      MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 40
/* 21 */      MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 24 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 32
/* 28 */      MCD::OPC_Decode, 146, 4, 0, // Opcode: J4_cmpeqi_tp0_jump_nt
/* 32 */      MCD::OPC_FilterValue, 1, 170, 78, // Skip to: 20174
/* 36 */      MCD::OPC_Decode, 147, 4, 0, // Opcode: J4_cmpeqi_tp0_jump_t
/* 40 */      MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 63
/* 44 */      MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 47 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 140, 4, 0, // Opcode: J4_cmpeqi_fp0_jump_nt
/* 55 */      MCD::OPC_FilterValue, 1, 147, 78, // Skip to: 20174
/* 59 */      MCD::OPC_Decode, 141, 4, 0, // Opcode: J4_cmpeqi_fp0_jump_t
/* 63 */      MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 86
/* 67 */      MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 70 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 78
/* 74 */      MCD::OPC_Decode, 182, 4, 0, // Opcode: J4_cmpgti_tp0_jump_nt
/* 78 */      MCD::OPC_FilterValue, 1, 124, 78, // Skip to: 20174
/* 82 */      MCD::OPC_Decode, 183, 4, 0, // Opcode: J4_cmpgti_tp0_jump_t
/* 86 */      MCD::OPC_FilterValue, 3, 116, 78, // Skip to: 20174
/* 90 */      MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 93 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 176, 4, 0, // Opcode: J4_cmpgti_fp0_jump_nt
/* 101 */     MCD::OPC_FilterValue, 1, 101, 78, // Skip to: 20174
/* 105 */     MCD::OPC_Decode, 177, 4, 0, // Opcode: J4_cmpgti_fp0_jump_t
/* 109 */     MCD::OPC_FilterValue, 1, 201, 0, // Skip to: 314
/* 113 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 116 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 139
/* 120 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 218, 4, 0, // Opcode: J4_cmpgtui_tp0_jump_nt
/* 131 */     MCD::OPC_FilterValue, 1, 71, 78, // Skip to: 20174
/* 135 */     MCD::OPC_Decode, 219, 4, 0, // Opcode: J4_cmpgtui_tp0_jump_t
/* 139 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 162
/* 143 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 146 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 212, 4, 0, // Opcode: J4_cmpgtui_fp0_jump_nt
/* 154 */     MCD::OPC_FilterValue, 1, 48, 78, // Skip to: 20174
/* 158 */     MCD::OPC_Decode, 213, 4, 0, // Opcode: J4_cmpgtui_fp0_jump_t
/* 162 */     MCD::OPC_FilterValue, 2, 72, 0, // Skip to: 238
/* 166 */     MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 169 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 192
/* 173 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 176 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 158, 4, 1, // Opcode: J4_cmpeqn1_tp0_jump_nt
/* 184 */     MCD::OPC_FilterValue, 1, 18, 78, // Skip to: 20174
/* 188 */     MCD::OPC_Decode, 159, 4, 1, // Opcode: J4_cmpeqn1_tp0_jump_t
/* 192 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 215
/* 196 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 199 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 207
/* 203 */     MCD::OPC_Decode, 194, 4, 1, // Opcode: J4_cmpgtn1_tp0_jump_nt
/* 207 */     MCD::OPC_FilterValue, 1, 251, 77, // Skip to: 20174
/* 211 */     MCD::OPC_Decode, 195, 4, 1, // Opcode: J4_cmpgtn1_tp0_jump_t
/* 215 */     MCD::OPC_FilterValue, 3, 243, 77, // Skip to: 20174
/* 219 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 222 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 241, 4, 1, // Opcode: J4_tstbit0_tp0_jump_nt
/* 230 */     MCD::OPC_FilterValue, 1, 228, 77, // Skip to: 20174
/* 234 */     MCD::OPC_Decode, 242, 4, 1, // Opcode: J4_tstbit0_tp0_jump_t
/* 238 */     MCD::OPC_FilterValue, 3, 220, 77, // Skip to: 20174
/* 242 */     MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 245 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 268
/* 249 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 252 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 260
/* 256 */     MCD::OPC_Decode, 152, 4, 1, // Opcode: J4_cmpeqn1_fp0_jump_nt
/* 260 */     MCD::OPC_FilterValue, 1, 198, 77, // Skip to: 20174
/* 264 */     MCD::OPC_Decode, 153, 4, 1, // Opcode: J4_cmpeqn1_fp0_jump_t
/* 268 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 291
/* 272 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 275 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 188, 4, 1, // Opcode: J4_cmpgtn1_fp0_jump_nt
/* 283 */     MCD::OPC_FilterValue, 1, 175, 77, // Skip to: 20174
/* 287 */     MCD::OPC_Decode, 189, 4, 1, // Opcode: J4_cmpgtn1_fp0_jump_t
/* 291 */     MCD::OPC_FilterValue, 3, 167, 77, // Skip to: 20174
/* 295 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 298 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 235, 4, 1, // Opcode: J4_tstbit0_fp0_jump_nt
/* 306 */     MCD::OPC_FilterValue, 1, 152, 77, // Skip to: 20174
/* 310 */     MCD::OPC_Decode, 236, 4, 1, // Opcode: J4_tstbit0_fp0_jump_t
/* 314 */     MCD::OPC_FilterValue, 2, 95, 0, // Skip to: 413
/* 318 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 321 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 344
/* 325 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 328 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 336
/* 332 */     MCD::OPC_Decode, 148, 4, 0, // Opcode: J4_cmpeqi_tp1_jump_nt
/* 336 */     MCD::OPC_FilterValue, 1, 122, 77, // Skip to: 20174
/* 340 */     MCD::OPC_Decode, 149, 4, 0, // Opcode: J4_cmpeqi_tp1_jump_t
/* 344 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 367
/* 348 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 351 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 359
/* 355 */     MCD::OPC_Decode, 142, 4, 0, // Opcode: J4_cmpeqi_fp1_jump_nt
/* 359 */     MCD::OPC_FilterValue, 1, 99, 77, // Skip to: 20174
/* 363 */     MCD::OPC_Decode, 143, 4, 0, // Opcode: J4_cmpeqi_fp1_jump_t
/* 367 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 390
/* 371 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 374 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 184, 4, 0, // Opcode: J4_cmpgti_tp1_jump_nt
/* 382 */     MCD::OPC_FilterValue, 1, 76, 77, // Skip to: 20174
/* 386 */     MCD::OPC_Decode, 185, 4, 0, // Opcode: J4_cmpgti_tp1_jump_t
/* 390 */     MCD::OPC_FilterValue, 3, 68, 77, // Skip to: 20174
/* 394 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 397 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 405
/* 401 */     MCD::OPC_Decode, 178, 4, 0, // Opcode: J4_cmpgti_fp1_jump_nt
/* 405 */     MCD::OPC_FilterValue, 1, 53, 77, // Skip to: 20174
/* 409 */     MCD::OPC_Decode, 179, 4, 0, // Opcode: J4_cmpgti_fp1_jump_t
/* 413 */     MCD::OPC_FilterValue, 3, 201, 0, // Skip to: 618
/* 417 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 420 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 443
/* 424 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 427 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 435
/* 431 */     MCD::OPC_Decode, 220, 4, 0, // Opcode: J4_cmpgtui_tp1_jump_nt
/* 435 */     MCD::OPC_FilterValue, 1, 23, 77, // Skip to: 20174
/* 439 */     MCD::OPC_Decode, 221, 4, 0, // Opcode: J4_cmpgtui_tp1_jump_t
/* 443 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 466
/* 447 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 450 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 214, 4, 0, // Opcode: J4_cmpgtui_fp1_jump_nt
/* 458 */     MCD::OPC_FilterValue, 1, 0, 77, // Skip to: 20174
/* 462 */     MCD::OPC_Decode, 215, 4, 0, // Opcode: J4_cmpgtui_fp1_jump_t
/* 466 */     MCD::OPC_FilterValue, 2, 72, 0, // Skip to: 542
/* 470 */     MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 473 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 496
/* 477 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 480 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 488
/* 484 */     MCD::OPC_Decode, 160, 4, 1, // Opcode: J4_cmpeqn1_tp1_jump_nt
/* 488 */     MCD::OPC_FilterValue, 1, 226, 76, // Skip to: 20174
/* 492 */     MCD::OPC_Decode, 161, 4, 1, // Opcode: J4_cmpeqn1_tp1_jump_t
/* 496 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 519
/* 500 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 503 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 511
/* 507 */     MCD::OPC_Decode, 196, 4, 1, // Opcode: J4_cmpgtn1_tp1_jump_nt
/* 511 */     MCD::OPC_FilterValue, 1, 203, 76, // Skip to: 20174
/* 515 */     MCD::OPC_Decode, 197, 4, 1, // Opcode: J4_cmpgtn1_tp1_jump_t
/* 519 */     MCD::OPC_FilterValue, 3, 195, 76, // Skip to: 20174
/* 523 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 526 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 534
/* 530 */     MCD::OPC_Decode, 243, 4, 1, // Opcode: J4_tstbit0_tp1_jump_nt
/* 534 */     MCD::OPC_FilterValue, 1, 180, 76, // Skip to: 20174
/* 538 */     MCD::OPC_Decode, 244, 4, 1, // Opcode: J4_tstbit0_tp1_jump_t
/* 542 */     MCD::OPC_FilterValue, 3, 172, 76, // Skip to: 20174
/* 546 */     MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 549 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 572
/* 553 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 556 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 154, 4, 1, // Opcode: J4_cmpeqn1_fp1_jump_nt
/* 564 */     MCD::OPC_FilterValue, 1, 150, 76, // Skip to: 20174
/* 568 */     MCD::OPC_Decode, 155, 4, 1, // Opcode: J4_cmpeqn1_fp1_jump_t
/* 572 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 595
/* 576 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 579 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 587
/* 583 */     MCD::OPC_Decode, 190, 4, 1, // Opcode: J4_cmpgtn1_fp1_jump_nt
/* 587 */     MCD::OPC_FilterValue, 1, 127, 76, // Skip to: 20174
/* 591 */     MCD::OPC_Decode, 191, 4, 1, // Opcode: J4_cmpgtn1_fp1_jump_t
/* 595 */     MCD::OPC_FilterValue, 3, 119, 76, // Skip to: 20174
/* 599 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 602 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 237, 4, 1, // Opcode: J4_tstbit0_fp1_jump_nt
/* 610 */     MCD::OPC_FilterValue, 1, 104, 76, // Skip to: 20174
/* 614 */     MCD::OPC_Decode, 238, 4, 1, // Opcode: J4_tstbit0_fp1_jump_t
/* 618 */     MCD::OPC_FilterValue, 4, 159, 0, // Skip to: 781
/* 622 */     MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 625 */     MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 664
/* 629 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 632 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 134, 4, 2, // Opcode: J4_cmpeq_tp0_jump_nt
/* 640 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 648
/* 644 */     MCD::OPC_Decode, 128, 4, 2, // Opcode: J4_cmpeq_fp0_jump_nt
/* 648 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 656
/* 652 */     MCD::OPC_Decode, 170, 4, 2, // Opcode: J4_cmpgt_tp0_jump_nt
/* 656 */     MCD::OPC_FilterValue, 3, 58, 76, // Skip to: 20174
/* 660 */     MCD::OPC_Decode, 164, 4, 2, // Opcode: J4_cmpgt_fp0_jump_nt
/* 664 */     MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 703
/* 668 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 671 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 136, 4, 2, // Opcode: J4_cmpeq_tp1_jump_nt
/* 679 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 687
/* 683 */     MCD::OPC_Decode, 130, 4, 2, // Opcode: J4_cmpeq_fp1_jump_nt
/* 687 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 695
/* 691 */     MCD::OPC_Decode, 172, 4, 2, // Opcode: J4_cmpgt_tp1_jump_nt
/* 695 */     MCD::OPC_FilterValue, 3, 19, 76, // Skip to: 20174
/* 699 */     MCD::OPC_Decode, 166, 4, 2, // Opcode: J4_cmpgt_fp1_jump_nt
/* 703 */     MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 742
/* 707 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 710 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 718
/* 714 */     MCD::OPC_Decode, 135, 4, 2, // Opcode: J4_cmpeq_tp0_jump_t
/* 718 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 726
/* 722 */     MCD::OPC_Decode, 129, 4, 2, // Opcode: J4_cmpeq_fp0_jump_t
/* 726 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 734
/* 730 */     MCD::OPC_Decode, 171, 4, 2, // Opcode: J4_cmpgt_tp0_jump_t
/* 734 */     MCD::OPC_FilterValue, 3, 236, 75, // Skip to: 20174
/* 738 */     MCD::OPC_Decode, 165, 4, 2, // Opcode: J4_cmpgt_fp0_jump_t
/* 742 */     MCD::OPC_FilterValue, 3, 228, 75, // Skip to: 20174
/* 746 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 749 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 757
/* 753 */     MCD::OPC_Decode, 137, 4, 2, // Opcode: J4_cmpeq_tp1_jump_t
/* 757 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 765
/* 761 */     MCD::OPC_Decode, 131, 4, 2, // Opcode: J4_cmpeq_fp1_jump_t
/* 765 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 773
/* 769 */     MCD::OPC_Decode, 173, 4, 2, // Opcode: J4_cmpgt_tp1_jump_t
/* 773 */     MCD::OPC_FilterValue, 3, 197, 75, // Skip to: 20174
/* 777 */     MCD::OPC_Decode, 167, 4, 2, // Opcode: J4_cmpgt_fp1_jump_t
/* 781 */     MCD::OPC_FilterValue, 5, 95, 0, // Skip to: 880
/* 785 */     MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 788 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 811
/* 792 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 795 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 803
/* 799 */     MCD::OPC_Decode, 206, 4, 2, // Opcode: J4_cmpgtu_tp0_jump_nt
/* 803 */     MCD::OPC_FilterValue, 1, 167, 75, // Skip to: 20174
/* 807 */     MCD::OPC_Decode, 200, 4, 2, // Opcode: J4_cmpgtu_fp0_jump_nt
/* 811 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 834
/* 815 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 818 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 826
/* 822 */     MCD::OPC_Decode, 208, 4, 2, // Opcode: J4_cmpgtu_tp1_jump_nt
/* 826 */     MCD::OPC_FilterValue, 1, 144, 75, // Skip to: 20174
/* 830 */     MCD::OPC_Decode, 202, 4, 2, // Opcode: J4_cmpgtu_fp1_jump_nt
/* 834 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 857
/* 838 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 841 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 849
/* 845 */     MCD::OPC_Decode, 207, 4, 2, // Opcode: J4_cmpgtu_tp0_jump_t
/* 849 */     MCD::OPC_FilterValue, 1, 121, 75, // Skip to: 20174
/* 853 */     MCD::OPC_Decode, 201, 4, 2, // Opcode: J4_cmpgtu_fp0_jump_t
/* 857 */     MCD::OPC_FilterValue, 3, 113, 75, // Skip to: 20174
/* 861 */     MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 864 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 872
/* 868 */     MCD::OPC_Decode, 209, 4, 2, // Opcode: J4_cmpgtu_tp1_jump_t
/* 872 */     MCD::OPC_FilterValue, 1, 98, 75, // Skip to: 20174
/* 876 */     MCD::OPC_Decode, 203, 4, 2, // Opcode: J4_cmpgtu_fp1_jump_t
/* 880 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 888
/* 884 */     MCD::OPC_Decode, 231, 4, 3, // Opcode: J4_jumpseti
/* 888 */     MCD::OPC_FilterValue, 7, 82, 75, // Skip to: 20174
/* 892 */     MCD::OPC_Decode, 232, 4, 4, // Opcode: J4_jumpsetr
/* 896 */     MCD::OPC_FilterValue, 2, 117, 2, // Skip to: 1529
/* 900 */     MCD::OPC_ExtractField, 22, 5,  // Inst{26-22} ...
/* 903 */     MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 938
/* 907 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 910 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 924
/* 914 */     MCD::OPC_CheckField, 27, 1, 0, 54, 75, // Skip to: 20174
/* 920 */     MCD::OPC_Decode, 132, 4, 5, // Opcode: J4_cmpeq_t_jumpnv_nt
/* 924 */     MCD::OPC_FilterValue, 1, 46, 75, // Skip to: 20174
/* 928 */     MCD::OPC_CheckField, 27, 1, 0, 40, 75, // Skip to: 20174
/* 934 */     MCD::OPC_Decode, 133, 4, 5, // Opcode: J4_cmpeq_t_jumpnv_t
/* 938 */     MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 973
/* 942 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 945 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 959
/* 949 */     MCD::OPC_CheckField, 27, 1, 0, 19, 75, // Skip to: 20174
/* 955 */     MCD::OPC_Decode, 254, 3, 5, // Opcode: J4_cmpeq_f_jumpnv_nt
/* 959 */     MCD::OPC_FilterValue, 1, 11, 75, // Skip to: 20174
/* 963 */     MCD::OPC_CheckField, 27, 1, 0, 5, 75, // Skip to: 20174
/* 969 */     MCD::OPC_Decode, 255, 3, 5, // Opcode: J4_cmpeq_f_jumpnv_t
/* 973 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 1008
/* 977 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 980 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 27, 1, 0, 240, 74, // Skip to: 20174
/* 990 */     MCD::OPC_Decode, 168, 4, 5, // Opcode: J4_cmpgt_t_jumpnv_nt
/* 994 */     MCD::OPC_FilterValue, 1, 232, 74, // Skip to: 20174
/* 998 */     MCD::OPC_CheckField, 27, 1, 0, 226, 74, // Skip to: 20174
/* 1004 */    MCD::OPC_Decode, 169, 4, 5, // Opcode: J4_cmpgt_t_jumpnv_t
/* 1008 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 1043
/* 1012 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1029
/* 1019 */    MCD::OPC_CheckField, 27, 1, 0, 205, 74, // Skip to: 20174
/* 1025 */    MCD::OPC_Decode, 162, 4, 5, // Opcode: J4_cmpgt_f_jumpnv_nt
/* 1029 */    MCD::OPC_FilterValue, 1, 197, 74, // Skip to: 20174
/* 1033 */    MCD::OPC_CheckField, 27, 1, 0, 191, 74, // Skip to: 20174
/* 1039 */    MCD::OPC_Decode, 163, 4, 5, // Opcode: J4_cmpgt_f_jumpnv_t
/* 1043 */    MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 1078
/* 1047 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1064
/* 1054 */    MCD::OPC_CheckField, 27, 1, 0, 170, 74, // Skip to: 20174
/* 1060 */    MCD::OPC_Decode, 204, 4, 5, // Opcode: J4_cmpgtu_t_jumpnv_nt
/* 1064 */    MCD::OPC_FilterValue, 1, 162, 74, // Skip to: 20174
/* 1068 */    MCD::OPC_CheckField, 27, 1, 0, 156, 74, // Skip to: 20174
/* 1074 */    MCD::OPC_Decode, 205, 4, 5, // Opcode: J4_cmpgtu_t_jumpnv_t
/* 1078 */    MCD::OPC_FilterValue, 5, 31, 0, // Skip to: 1113
/* 1082 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1085 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1099
/* 1089 */    MCD::OPC_CheckField, 27, 1, 0, 135, 74, // Skip to: 20174
/* 1095 */    MCD::OPC_Decode, 198, 4, 5, // Opcode: J4_cmpgtu_f_jumpnv_nt
/* 1099 */    MCD::OPC_FilterValue, 1, 127, 74, // Skip to: 20174
/* 1103 */    MCD::OPC_CheckField, 27, 1, 0, 121, 74, // Skip to: 20174
/* 1109 */    MCD::OPC_Decode, 199, 4, 5, // Opcode: J4_cmpgtu_f_jumpnv_t
/* 1113 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 1148
/* 1117 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1120 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1134
/* 1124 */    MCD::OPC_CheckField, 27, 1, 0, 100, 74, // Skip to: 20174
/* 1130 */    MCD::OPC_Decode, 224, 4, 6, // Opcode: J4_cmplt_t_jumpnv_nt
/* 1134 */    MCD::OPC_FilterValue, 1, 92, 74, // Skip to: 20174
/* 1138 */    MCD::OPC_CheckField, 27, 1, 0, 86, 74, // Skip to: 20174
/* 1144 */    MCD::OPC_Decode, 225, 4, 6, // Opcode: J4_cmplt_t_jumpnv_t
/* 1148 */    MCD::OPC_FilterValue, 7, 31, 0, // Skip to: 1183
/* 1152 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1155 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1169
/* 1159 */    MCD::OPC_CheckField, 27, 1, 0, 65, 74, // Skip to: 20174
/* 1165 */    MCD::OPC_Decode, 222, 4, 6, // Opcode: J4_cmplt_f_jumpnv_nt
/* 1169 */    MCD::OPC_FilterValue, 1, 57, 74, // Skip to: 20174
/* 1173 */    MCD::OPC_CheckField, 27, 1, 0, 51, 74, // Skip to: 20174
/* 1179 */    MCD::OPC_Decode, 223, 4, 6, // Opcode: J4_cmplt_f_jumpnv_t
/* 1183 */    MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 1218
/* 1187 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1190 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1204
/* 1194 */    MCD::OPC_CheckField, 27, 1, 0, 30, 74, // Skip to: 20174
/* 1200 */    MCD::OPC_Decode, 228, 4, 6, // Opcode: J4_cmpltu_t_jumpnv_nt
/* 1204 */    MCD::OPC_FilterValue, 1, 22, 74, // Skip to: 20174
/* 1208 */    MCD::OPC_CheckField, 27, 1, 0, 16, 74, // Skip to: 20174
/* 1214 */    MCD::OPC_Decode, 229, 4, 6, // Opcode: J4_cmpltu_t_jumpnv_t
/* 1218 */    MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 1253
/* 1222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1225 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1239
/* 1229 */    MCD::OPC_CheckField, 27, 1, 0, 251, 73, // Skip to: 20174
/* 1235 */    MCD::OPC_Decode, 226, 4, 6, // Opcode: J4_cmpltu_f_jumpnv_nt
/* 1239 */    MCD::OPC_FilterValue, 1, 243, 73, // Skip to: 20174
/* 1243 */    MCD::OPC_CheckField, 27, 1, 0, 237, 73, // Skip to: 20174
/* 1249 */    MCD::OPC_Decode, 227, 4, 6, // Opcode: J4_cmpltu_f_jumpnv_t
/* 1253 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 1276
/* 1257 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1260 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1268
/* 1264 */    MCD::OPC_Decode, 144, 4, 7, // Opcode: J4_cmpeqi_t_jumpnv_nt
/* 1268 */    MCD::OPC_FilterValue, 1, 214, 73, // Skip to: 20174
/* 1272 */    MCD::OPC_Decode, 145, 4, 7, // Opcode: J4_cmpeqi_t_jumpnv_t
/* 1276 */    MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 1299
/* 1280 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1283 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1291
/* 1287 */    MCD::OPC_Decode, 138, 4, 7, // Opcode: J4_cmpeqi_f_jumpnv_nt
/* 1291 */    MCD::OPC_FilterValue, 1, 191, 73, // Skip to: 20174
/* 1295 */    MCD::OPC_Decode, 139, 4, 7, // Opcode: J4_cmpeqi_f_jumpnv_t
/* 1299 */    MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 1322
/* 1303 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1306 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1314
/* 1310 */    MCD::OPC_Decode, 180, 4, 7, // Opcode: J4_cmpgti_t_jumpnv_nt
/* 1314 */    MCD::OPC_FilterValue, 1, 168, 73, // Skip to: 20174
/* 1318 */    MCD::OPC_Decode, 181, 4, 7, // Opcode: J4_cmpgti_t_jumpnv_t
/* 1322 */    MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 1345
/* 1326 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1329 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1337
/* 1333 */    MCD::OPC_Decode, 174, 4, 7, // Opcode: J4_cmpgti_f_jumpnv_nt
/* 1337 */    MCD::OPC_FilterValue, 1, 145, 73, // Skip to: 20174
/* 1341 */    MCD::OPC_Decode, 175, 4, 7, // Opcode: J4_cmpgti_f_jumpnv_t
/* 1345 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 1368
/* 1349 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1352 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1360
/* 1356 */    MCD::OPC_Decode, 216, 4, 7, // Opcode: J4_cmpgtui_t_jumpnv_nt
/* 1360 */    MCD::OPC_FilterValue, 1, 122, 73, // Skip to: 20174
/* 1364 */    MCD::OPC_Decode, 217, 4, 7, // Opcode: J4_cmpgtui_t_jumpnv_t
/* 1368 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 1391
/* 1372 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1375 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1383
/* 1379 */    MCD::OPC_Decode, 210, 4, 7, // Opcode: J4_cmpgtui_f_jumpnv_nt
/* 1383 */    MCD::OPC_FilterValue, 1, 99, 73, // Skip to: 20174
/* 1387 */    MCD::OPC_Decode, 211, 4, 7, // Opcode: J4_cmpgtui_f_jumpnv_t
/* 1391 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 1414
/* 1395 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1398 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1406
/* 1402 */    MCD::OPC_Decode, 239, 4, 8, // Opcode: J4_tstbit0_t_jumpnv_nt
/* 1406 */    MCD::OPC_FilterValue, 1, 76, 73, // Skip to: 20174
/* 1410 */    MCD::OPC_Decode, 240, 4, 8, // Opcode: J4_tstbit0_t_jumpnv_t
/* 1414 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 1437
/* 1418 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1421 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1429
/* 1425 */    MCD::OPC_Decode, 233, 4, 8, // Opcode: J4_tstbit0_f_jumpnv_nt
/* 1429 */    MCD::OPC_FilterValue, 1, 53, 73, // Skip to: 20174
/* 1433 */    MCD::OPC_Decode, 234, 4, 8, // Opcode: J4_tstbit0_f_jumpnv_t
/* 1437 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 1460
/* 1441 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1444 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1452
/* 1448 */    MCD::OPC_Decode, 156, 4, 8, // Opcode: J4_cmpeqn1_t_jumpnv_nt
/* 1452 */    MCD::OPC_FilterValue, 1, 30, 73, // Skip to: 20174
/* 1456 */    MCD::OPC_Decode, 157, 4, 8, // Opcode: J4_cmpeqn1_t_jumpnv_t
/* 1460 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 1483
/* 1464 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1467 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1475
/* 1471 */    MCD::OPC_Decode, 150, 4, 8, // Opcode: J4_cmpeqn1_f_jumpnv_nt
/* 1475 */    MCD::OPC_FilterValue, 1, 7, 73, // Skip to: 20174
/* 1479 */    MCD::OPC_Decode, 151, 4, 8, // Opcode: J4_cmpeqn1_f_jumpnv_t
/* 1483 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 1506
/* 1487 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1498
/* 1494 */    MCD::OPC_Decode, 192, 4, 8, // Opcode: J4_cmpgtn1_t_jumpnv_nt
/* 1498 */    MCD::OPC_FilterValue, 1, 240, 72, // Skip to: 20174
/* 1502 */    MCD::OPC_Decode, 193, 4, 8, // Opcode: J4_cmpgtn1_t_jumpnv_t
/* 1506 */    MCD::OPC_FilterValue, 27, 232, 72, // Skip to: 20174
/* 1510 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1513 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1521
/* 1517 */    MCD::OPC_Decode, 186, 4, 8, // Opcode: J4_cmpgtn1_f_jumpnv_nt
/* 1521 */    MCD::OPC_FilterValue, 1, 217, 72, // Skip to: 20174
/* 1525 */    MCD::OPC_Decode, 187, 4, 8, // Opcode: J4_cmpgtn1_f_jumpnv_t
/* 1529 */    MCD::OPC_FilterValue, 3, 198, 4, // Skip to: 2755
/* 1533 */    MCD::OPC_ExtractField, 25, 3,  // Inst{27-25} ...
/* 1536 */    MCD::OPC_FilterValue, 0, 99, 0, // Skip to: 1639
/* 1540 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 1543 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1551
/* 1547 */    MCD::OPC_Decode, 199, 6, 9, // Opcode: L4_ploadrbt_rr
/* 1551 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1559
/* 1555 */    MCD::OPC_Decode, 231, 6, 9, // Opcode: L4_ploadrubt_rr
/* 1559 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1567
/* 1563 */    MCD::OPC_Decode, 215, 6, 9, // Opcode: L4_ploadrht_rr
/* 1567 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1575
/* 1571 */    MCD::OPC_Decode, 239, 6, 9, // Opcode: L4_ploadruht_rr
/* 1575 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1583
/* 1579 */    MCD::OPC_Decode, 223, 6, 9, // Opcode: L4_ploadrit_rr
/* 1583 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1591
/* 1587 */    MCD::OPC_Decode, 207, 6, 10, // Opcode: L4_ploadrdt_rr
/* 1591 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1599
/* 1595 */    MCD::OPC_Decode, 195, 6, 9, // Opcode: L4_ploadrbf_rr
/* 1599 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1607
/* 1603 */    MCD::OPC_Decode, 227, 6, 9, // Opcode: L4_ploadrubf_rr
/* 1607 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1615
/* 1611 */    MCD::OPC_Decode, 211, 6, 9, // Opcode: L4_ploadrhf_rr
/* 1615 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1623
/* 1619 */    MCD::OPC_Decode, 235, 6, 9, // Opcode: L4_ploadruhf_rr
/* 1623 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1631
/* 1627 */    MCD::OPC_Decode, 219, 6, 9, // Opcode: L4_ploadrif_rr
/* 1631 */    MCD::OPC_FilterValue, 14, 107, 72, // Skip to: 20174
/* 1635 */    MCD::OPC_Decode, 203, 6, 10, // Opcode: L4_ploadrdf_rr
/* 1639 */    MCD::OPC_FilterValue, 1, 99, 0, // Skip to: 1742
/* 1643 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 1646 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1654
/* 1650 */    MCD::OPC_Decode, 201, 6, 9, // Opcode: L4_ploadrbtnew_rr
/* 1654 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1662
/* 1658 */    MCD::OPC_Decode, 233, 6, 9, // Opcode: L4_ploadrubtnew_rr
/* 1662 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1670
/* 1666 */    MCD::OPC_Decode, 217, 6, 9, // Opcode: L4_ploadrhtnew_rr
/* 1670 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1678
/* 1674 */    MCD::OPC_Decode, 241, 6, 9, // Opcode: L4_ploadruhtnew_rr
/* 1678 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1686
/* 1682 */    MCD::OPC_Decode, 225, 6, 9, // Opcode: L4_ploadritnew_rr
/* 1686 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1694
/* 1690 */    MCD::OPC_Decode, 209, 6, 10, // Opcode: L4_ploadrdtnew_rr
/* 1694 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1702
/* 1698 */    MCD::OPC_Decode, 197, 6, 9, // Opcode: L4_ploadrbfnew_rr
/* 1702 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1710
/* 1706 */    MCD::OPC_Decode, 229, 6, 9, // Opcode: L4_ploadrubfnew_rr
/* 1710 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1718
/* 1714 */    MCD::OPC_Decode, 213, 6, 9, // Opcode: L4_ploadrhfnew_rr
/* 1718 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1726
/* 1722 */    MCD::OPC_Decode, 237, 6, 9, // Opcode: L4_ploadruhfnew_rr
/* 1726 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1734
/* 1730 */    MCD::OPC_Decode, 221, 6, 9, // Opcode: L4_ploadrifnew_rr
/* 1734 */    MCD::OPC_FilterValue, 14, 4, 72, // Skip to: 20174
/* 1738 */    MCD::OPC_Decode, 205, 6, 10, // Opcode: L4_ploadrdfnew_rr
/* 1742 */    MCD::OPC_FilterValue, 2, 145, 0, // Skip to: 1891
/* 1746 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 1749 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1757
/* 1753 */    MCD::OPC_Decode, 156, 12, 11, // Opcode: S4_pstorerbt_rr
/* 1757 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1765
/* 1761 */    MCD::OPC_Decode, 196, 12, 11, // Opcode: S4_pstorerht_rr
/* 1765 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1773
/* 1769 */    MCD::OPC_Decode, 176, 12, 11, // Opcode: S4_pstorerft_rr
/* 1773 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1781
/* 1777 */    MCD::OPC_Decode, 216, 12, 11, // Opcode: S4_pstorerit_rr
/* 1781 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 1812
/* 1785 */    MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 1788 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1796
/* 1792 */    MCD::OPC_Decode, 151, 12, 12, // Opcode: S4_pstorerbnewt_rr
/* 1796 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1804
/* 1800 */    MCD::OPC_Decode, 191, 12, 12, // Opcode: S4_pstorerhnewt_rr
/* 1804 */    MCD::OPC_FilterValue, 2, 190, 71, // Skip to: 20174
/* 1808 */    MCD::OPC_Decode, 211, 12, 12, // Opcode: S4_pstorerinewt_rr
/* 1812 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1820
/* 1816 */    MCD::OPC_Decode, 166, 12, 13, // Opcode: S4_pstorerdt_rr
/* 1820 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1828
/* 1824 */    MCD::OPC_Decode, 141, 12, 11, // Opcode: S4_pstorerbf_rr
/* 1828 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1836
/* 1832 */    MCD::OPC_Decode, 181, 12, 11, // Opcode: S4_pstorerhf_rr
/* 1836 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1844
/* 1840 */    MCD::OPC_Decode, 171, 12, 11, // Opcode: S4_pstorerff_rr
/* 1844 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1852
/* 1848 */    MCD::OPC_Decode, 201, 12, 11, // Opcode: S4_pstorerif_rr
/* 1852 */    MCD::OPC_FilterValue, 13, 27, 0, // Skip to: 1883
/* 1856 */    MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 1859 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1867
/* 1863 */    MCD::OPC_Decode, 146, 12, 12, // Opcode: S4_pstorerbnewf_rr
/* 1867 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1875
/* 1871 */    MCD::OPC_Decode, 186, 12, 12, // Opcode: S4_pstorerhnewf_rr
/* 1875 */    MCD::OPC_FilterValue, 2, 119, 71, // Skip to: 20174
/* 1879 */    MCD::OPC_Decode, 206, 12, 12, // Opcode: S4_pstorerinewf_rr
/* 1883 */    MCD::OPC_FilterValue, 14, 111, 71, // Skip to: 20174
/* 1887 */    MCD::OPC_Decode, 161, 12, 13, // Opcode: S4_pstorerdf_rr
/* 1891 */    MCD::OPC_FilterValue, 3, 145, 0, // Skip to: 2040
/* 1895 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 1898 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1906
/* 1902 */    MCD::OPC_Decode, 159, 12, 11, // Opcode: S4_pstorerbtnew_rr
/* 1906 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1914
/* 1910 */    MCD::OPC_Decode, 199, 12, 11, // Opcode: S4_pstorerhtnew_rr
/* 1914 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1922
/* 1918 */    MCD::OPC_Decode, 179, 12, 11, // Opcode: S4_pstorerftnew_rr
/* 1922 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1930
/* 1926 */    MCD::OPC_Decode, 219, 12, 11, // Opcode: S4_pstoreritnew_rr
/* 1930 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 1961
/* 1934 */    MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 1937 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1945
/* 1941 */    MCD::OPC_Decode, 154, 12, 12, // Opcode: S4_pstorerbnewtnew_rr
/* 1945 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1953
/* 1949 */    MCD::OPC_Decode, 194, 12, 12, // Opcode: S4_pstorerhnewtnew_rr
/* 1953 */    MCD::OPC_FilterValue, 2, 41, 71, // Skip to: 20174
/* 1957 */    MCD::OPC_Decode, 214, 12, 12, // Opcode: S4_pstorerinewtnew_rr
/* 1961 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1969
/* 1965 */    MCD::OPC_Decode, 169, 12, 13, // Opcode: S4_pstorerdtnew_rr
/* 1969 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1977
/* 1973 */    MCD::OPC_Decode, 144, 12, 11, // Opcode: S4_pstorerbfnew_rr
/* 1977 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1985
/* 1981 */    MCD::OPC_Decode, 184, 12, 11, // Opcode: S4_pstorerhfnew_rr
/* 1985 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1993
/* 1989 */    MCD::OPC_Decode, 174, 12, 11, // Opcode: S4_pstorerffnew_rr
/* 1993 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2001
/* 1997 */    MCD::OPC_Decode, 204, 12, 11, // Opcode: S4_pstorerifnew_rr
/* 2001 */    MCD::OPC_FilterValue, 13, 27, 0, // Skip to: 2032
/* 2005 */    MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 2008 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2016
/* 2012 */    MCD::OPC_Decode, 149, 12, 12, // Opcode: S4_pstorerbnewfnew_rr
/* 2016 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2024
/* 2020 */    MCD::OPC_Decode, 189, 12, 12, // Opcode: S4_pstorerhnewfnew_rr
/* 2024 */    MCD::OPC_FilterValue, 2, 226, 70, // Skip to: 20174
/* 2028 */    MCD::OPC_Decode, 209, 12, 12, // Opcode: S4_pstorerinewfnew_rr
/* 2032 */    MCD::OPC_FilterValue, 14, 218, 70, // Skip to: 20174
/* 2036 */    MCD::OPC_Decode, 164, 12, 13, // Opcode: S4_pstorerdfnew_rr
/* 2040 */    MCD::OPC_FilterValue, 4, 99, 0, // Skip to: 2143
/* 2044 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 2047 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2055
/* 2051 */    MCD::OPC_Decode, 224, 12, 14, // Opcode: S4_storeirbt_io
/* 2055 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2063
/* 2059 */    MCD::OPC_Decode, 229, 12, 15, // Opcode: S4_storeirht_io
/* 2063 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2071
/* 2067 */    MCD::OPC_Decode, 234, 12, 16, // Opcode: S4_storeirit_io
/* 2071 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2079
/* 2075 */    MCD::OPC_Decode, 222, 12, 14, // Opcode: S4_storeirbf_io
/* 2079 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2087
/* 2083 */    MCD::OPC_Decode, 227, 12, 15, // Opcode: S4_storeirhf_io
/* 2087 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2095
/* 2091 */    MCD::OPC_Decode, 232, 12, 16, // Opcode: S4_storeirif_io
/* 2095 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2103
/* 2099 */    MCD::OPC_Decode, 225, 12, 14, // Opcode: S4_storeirbtnew_io
/* 2103 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2111
/* 2107 */    MCD::OPC_Decode, 230, 12, 15, // Opcode: S4_storeirhtnew_io
/* 2111 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2119
/* 2115 */    MCD::OPC_Decode, 235, 12, 16, // Opcode: S4_storeiritnew_io
/* 2119 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2127
/* 2123 */    MCD::OPC_Decode, 223, 12, 14, // Opcode: S4_storeirbfnew_io
/* 2127 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2135
/* 2131 */    MCD::OPC_Decode, 228, 12, 15, // Opcode: S4_storeirhfnew_io
/* 2135 */    MCD::OPC_FilterValue, 14, 115, 70, // Skip to: 20174
/* 2139 */    MCD::OPC_Decode, 233, 12, 16, // Opcode: S4_storeirifnew_io
/* 2143 */    MCD::OPC_FilterValue, 5, 122, 0, // Skip to: 2269
/* 2147 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 2150 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2158
/* 2154 */    MCD::OPC_Decode, 169, 6, 17, // Opcode: L4_loadrb_rr
/* 2158 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2166
/* 2162 */    MCD::OPC_Decode, 185, 6, 17, // Opcode: L4_loadrub_rr
/* 2166 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2174
/* 2170 */    MCD::OPC_Decode, 177, 6, 17, // Opcode: L4_loadrh_rr
/* 2174 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2182
/* 2178 */    MCD::OPC_Decode, 189, 6, 17, // Opcode: L4_loadruh_rr
/* 2182 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2190
/* 2186 */    MCD::OPC_Decode, 181, 6, 17, // Opcode: L4_loadri_rr
/* 2190 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2198
/* 2194 */    MCD::OPC_Decode, 173, 6, 18, // Opcode: L4_loadrd_rr
/* 2198 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2206
/* 2202 */    MCD::OPC_Decode, 237, 12, 19, // Opcode: S4_storerb_rr
/* 2206 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2214
/* 2210 */    MCD::OPC_Decode, 249, 12, 19, // Opcode: S4_storerh_rr
/* 2214 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2222
/* 2218 */    MCD::OPC_Decode, 246, 12, 19, // Opcode: S4_storerf_rr
/* 2222 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2230
/* 2226 */    MCD::OPC_Decode, 255, 12, 19, // Opcode: S4_storeri_rr
/* 2230 */    MCD::OPC_FilterValue, 13, 27, 0, // Skip to: 2261
/* 2234 */    MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 2237 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2245
/* 2241 */    MCD::OPC_Decode, 240, 12, 20, // Opcode: S4_storerbnew_rr
/* 2245 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2253
/* 2249 */    MCD::OPC_Decode, 252, 12, 20, // Opcode: S4_storerhnew_rr
/* 2253 */    MCD::OPC_FilterValue, 2, 253, 69, // Skip to: 20174
/* 2257 */    MCD::OPC_Decode, 130, 13, 20, // Opcode: S4_storerinew_rr
/* 2261 */    MCD::OPC_FilterValue, 14, 245, 69, // Skip to: 20174
/* 2265 */    MCD::OPC_Decode, 243, 12, 21, // Opcode: S4_storerd_rr
/* 2269 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 2300
/* 2273 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2276 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2284
/* 2280 */    MCD::OPC_Decode, 221, 12, 22, // Opcode: S4_storeirb_io
/* 2284 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2292
/* 2288 */    MCD::OPC_Decode, 226, 12, 23, // Opcode: S4_storeirh_io
/* 2292 */    MCD::OPC_FilterValue, 2, 214, 69, // Skip to: 20174
/* 2296 */    MCD::OPC_Decode, 231, 12, 24, // Opcode: S4_storeiri_io
/* 2300 */    MCD::OPC_FilterValue, 7, 206, 69, // Skip to: 20174
/* 2304 */    MCD::OPC_ExtractField, 5, 2,  // Inst{6-5} ...
/* 2307 */    MCD::OPC_FilterValue, 0, 108, 0, // Skip to: 2419
/* 2311 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2314 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2349
/* 2318 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2321 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2335
/* 2325 */    MCD::OPC_CheckField, 13, 1, 0, 179, 69, // Skip to: 20174
/* 2331 */    MCD::OPC_Decode, 136, 6, 25, // Opcode: L4_add_memopb_io
/* 2335 */    MCD::OPC_FilterValue, 1, 171, 69, // Skip to: 20174
/* 2339 */    MCD::OPC_CheckField, 13, 1, 0, 165, 69, // Skip to: 20174
/* 2345 */    MCD::OPC_Decode, 142, 6, 26, // Opcode: L4_iadd_memopb_io
/* 2349 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 2384
/* 2353 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2356 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2370
/* 2360 */    MCD::OPC_CheckField, 13, 1, 0, 144, 69, // Skip to: 20174
/* 2366 */    MCD::OPC_Decode, 137, 6, 27, // Opcode: L4_add_memoph_io
/* 2370 */    MCD::OPC_FilterValue, 1, 136, 69, // Skip to: 20174
/* 2374 */    MCD::OPC_CheckField, 13, 1, 0, 130, 69, // Skip to: 20174
/* 2380 */    MCD::OPC_Decode, 143, 6, 28, // Opcode: L4_iadd_memoph_io
/* 2384 */    MCD::OPC_FilterValue, 2, 122, 69, // Skip to: 20174
/* 2388 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2391 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2405
/* 2395 */    MCD::OPC_CheckField, 13, 1, 0, 109, 69, // Skip to: 20174
/* 2401 */    MCD::OPC_Decode, 138, 6, 29, // Opcode: L4_add_memopw_io
/* 2405 */    MCD::OPC_FilterValue, 1, 101, 69, // Skip to: 20174
/* 2409 */    MCD::OPC_CheckField, 13, 1, 0, 95, 69, // Skip to: 20174
/* 2415 */    MCD::OPC_Decode, 144, 6, 30, // Opcode: L4_iadd_memopw_io
/* 2419 */    MCD::OPC_FilterValue, 1, 108, 0, // Skip to: 2531
/* 2423 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2426 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2461
/* 2430 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2433 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2447
/* 2437 */    MCD::OPC_CheckField, 13, 1, 0, 67, 69, // Skip to: 20174
/* 2443 */    MCD::OPC_Decode, 249, 6, 25, // Opcode: L4_sub_memopb_io
/* 2447 */    MCD::OPC_FilterValue, 1, 59, 69, // Skip to: 20174
/* 2451 */    MCD::OPC_CheckField, 13, 1, 0, 53, 69, // Skip to: 20174
/* 2457 */    MCD::OPC_Decode, 151, 6, 26, // Opcode: L4_isub_memopb_io
/* 2461 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 2496
/* 2465 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2468 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2482
/* 2472 */    MCD::OPC_CheckField, 13, 1, 0, 32, 69, // Skip to: 20174
/* 2478 */    MCD::OPC_Decode, 250, 6, 27, // Opcode: L4_sub_memoph_io
/* 2482 */    MCD::OPC_FilterValue, 1, 24, 69, // Skip to: 20174
/* 2486 */    MCD::OPC_CheckField, 13, 1, 0, 18, 69, // Skip to: 20174
/* 2492 */    MCD::OPC_Decode, 152, 6, 28, // Opcode: L4_isub_memoph_io
/* 2496 */    MCD::OPC_FilterValue, 2, 10, 69, // Skip to: 20174
/* 2500 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2503 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2517
/* 2507 */    MCD::OPC_CheckField, 13, 1, 0, 253, 68, // Skip to: 20174
/* 2513 */    MCD::OPC_Decode, 251, 6, 29, // Opcode: L4_sub_memopw_io
/* 2517 */    MCD::OPC_FilterValue, 1, 245, 68, // Skip to: 20174
/* 2521 */    MCD::OPC_CheckField, 13, 1, 0, 239, 68, // Skip to: 20174
/* 2527 */    MCD::OPC_Decode, 153, 6, 30, // Opcode: L4_isub_memopw_io
/* 2531 */    MCD::OPC_FilterValue, 2, 108, 0, // Skip to: 2643
/* 2535 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2538 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2573
/* 2542 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2545 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2559
/* 2549 */    MCD::OPC_CheckField, 13, 1, 0, 211, 68, // Skip to: 20174
/* 2555 */    MCD::OPC_Decode, 139, 6, 25, // Opcode: L4_and_memopb_io
/* 2559 */    MCD::OPC_FilterValue, 1, 203, 68, // Skip to: 20174
/* 2563 */    MCD::OPC_CheckField, 13, 1, 0, 197, 68, // Skip to: 20174
/* 2569 */    MCD::OPC_Decode, 145, 6, 26, // Opcode: L4_iand_memopb_io
/* 2573 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 2608
/* 2577 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2580 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2594
/* 2584 */    MCD::OPC_CheckField, 13, 1, 0, 176, 68, // Skip to: 20174
/* 2590 */    MCD::OPC_Decode, 140, 6, 27, // Opcode: L4_and_memoph_io
/* 2594 */    MCD::OPC_FilterValue, 1, 168, 68, // Skip to: 20174
/* 2598 */    MCD::OPC_CheckField, 13, 1, 0, 162, 68, // Skip to: 20174
/* 2604 */    MCD::OPC_Decode, 146, 6, 28, // Opcode: L4_iand_memoph_io
/* 2608 */    MCD::OPC_FilterValue, 2, 154, 68, // Skip to: 20174
/* 2612 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2615 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2629
/* 2619 */    MCD::OPC_CheckField, 13, 1, 0, 141, 68, // Skip to: 20174
/* 2625 */    MCD::OPC_Decode, 141, 6, 29, // Opcode: L4_and_memopw_io
/* 2629 */    MCD::OPC_FilterValue, 1, 133, 68, // Skip to: 20174
/* 2633 */    MCD::OPC_CheckField, 13, 1, 0, 127, 68, // Skip to: 20174
/* 2639 */    MCD::OPC_Decode, 147, 6, 30, // Opcode: L4_iand_memopw_io
/* 2643 */    MCD::OPC_FilterValue, 3, 119, 68, // Skip to: 20174
/* 2647 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2650 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2685
/* 2654 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2657 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2671
/* 2661 */    MCD::OPC_CheckField, 13, 1, 0, 99, 68, // Skip to: 20174
/* 2667 */    MCD::OPC_Decode, 191, 6, 25, // Opcode: L4_or_memopb_io
/* 2671 */    MCD::OPC_FilterValue, 1, 91, 68, // Skip to: 20174
/* 2675 */    MCD::OPC_CheckField, 13, 1, 0, 85, 68, // Skip to: 20174
/* 2681 */    MCD::OPC_Decode, 148, 6, 26, // Opcode: L4_ior_memopb_io
/* 2685 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 2720
/* 2689 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2692 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2706
/* 2696 */    MCD::OPC_CheckField, 13, 1, 0, 64, 68, // Skip to: 20174
/* 2702 */    MCD::OPC_Decode, 192, 6, 27, // Opcode: L4_or_memoph_io
/* 2706 */    MCD::OPC_FilterValue, 1, 56, 68, // Skip to: 20174
/* 2710 */    MCD::OPC_CheckField, 13, 1, 0, 50, 68, // Skip to: 20174
/* 2716 */    MCD::OPC_Decode, 149, 6, 28, // Opcode: L4_ior_memoph_io
/* 2720 */    MCD::OPC_FilterValue, 2, 42, 68, // Skip to: 20174
/* 2724 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 2727 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2741
/* 2731 */    MCD::OPC_CheckField, 13, 1, 0, 29, 68, // Skip to: 20174
/* 2737 */    MCD::OPC_Decode, 193, 6, 29, // Opcode: L4_or_memopw_io
/* 2741 */    MCD::OPC_FilterValue, 1, 21, 68, // Skip to: 20174
/* 2745 */    MCD::OPC_CheckField, 13, 1, 0, 15, 68, // Skip to: 20174
/* 2751 */    MCD::OPC_Decode, 150, 6, 30, // Opcode: L4_ior_memopw_io
/* 2755 */    MCD::OPC_FilterValue, 4, 214, 3, // Skip to: 3741
/* 2759 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 2762 */    MCD::OPC_FilterValue, 0, 50, 0, // Skip to: 2816
/* 2766 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 2769 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 2808
/* 2773 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 2776 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2784
/* 2780 */    MCD::OPC_Decode, 214, 10, 31, // Opcode: S2_pstorerbt_io
/* 2784 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2792
/* 2788 */    MCD::OPC_Decode, 158, 12, 31, // Opcode: S4_pstorerbtnew_io
/* 2792 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2800
/* 2796 */    MCD::OPC_Decode, 205, 10, 31, // Opcode: S2_pstorerbf_io
/* 2800 */    MCD::OPC_FilterValue, 3, 218, 67, // Skip to: 20174
/* 2804 */    MCD::OPC_Decode, 143, 12, 31, // Opcode: S4_pstorerbfnew_io
/* 2808 */    MCD::OPC_FilterValue, 1, 210, 67, // Skip to: 20174
/* 2812 */    MCD::OPC_Decode, 139, 11, 32, // Opcode: S2_storerbabs
/* 2816 */    MCD::OPC_FilterValue, 2, 50, 0, // Skip to: 2870
/* 2820 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 2823 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 2862
/* 2827 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 2830 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2838
/* 2834 */    MCD::OPC_Decode, 238, 10, 33, // Opcode: S2_pstorerht_io
/* 2838 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2846
/* 2842 */    MCD::OPC_Decode, 198, 12, 33, // Opcode: S4_pstorerhtnew_io
/* 2846 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2854
/* 2850 */    MCD::OPC_Decode, 229, 10, 33, // Opcode: S2_pstorerhf_io
/* 2854 */    MCD::OPC_FilterValue, 3, 164, 67, // Skip to: 20174
/* 2858 */    MCD::OPC_Decode, 183, 12, 33, // Opcode: S4_pstorerhfnew_io
/* 2862 */    MCD::OPC_FilterValue, 1, 156, 67, // Skip to: 20174
/* 2866 */    MCD::OPC_Decode, 177, 11, 34, // Opcode: S2_storerhabs
/* 2870 */    MCD::OPC_FilterValue, 3, 50, 0, // Skip to: 2924
/* 2874 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 2877 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 2916
/* 2881 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 2884 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2892
/* 2888 */    MCD::OPC_Decode, 226, 10, 33, // Opcode: S2_pstorerft_io
/* 2892 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2900
/* 2896 */    MCD::OPC_Decode, 178, 12, 33, // Opcode: S4_pstorerftnew_io
/* 2900 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2908
/* 2904 */    MCD::OPC_Decode, 223, 10, 33, // Opcode: S2_pstorerff_io
/* 2908 */    MCD::OPC_FilterValue, 3, 110, 67, // Skip to: 20174
/* 2912 */    MCD::OPC_Decode, 173, 12, 33, // Opcode: S4_pstorerffnew_io
/* 2916 */    MCD::OPC_FilterValue, 1, 102, 67, // Skip to: 20174
/* 2920 */    MCD::OPC_Decode, 167, 11, 34, // Opcode: S2_storerfabs
/* 2924 */    MCD::OPC_FilterValue, 4, 50, 0, // Skip to: 2978
/* 2928 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 2931 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 2970
/* 2935 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 2938 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2946
/* 2942 */    MCD::OPC_Decode, 250, 10, 35, // Opcode: S2_pstorerit_io
/* 2946 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2954
/* 2950 */    MCD::OPC_Decode, 218, 12, 35, // Opcode: S4_pstoreritnew_io
/* 2954 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2962
/* 2958 */    MCD::OPC_Decode, 241, 10, 35, // Opcode: S2_pstorerif_io
/* 2962 */    MCD::OPC_FilterValue, 3, 56, 67, // Skip to: 20174
/* 2966 */    MCD::OPC_Decode, 203, 12, 35, // Opcode: S4_pstorerifnew_io
/* 2970 */    MCD::OPC_FilterValue, 1, 48, 67, // Skip to: 20174
/* 2974 */    MCD::OPC_Decode, 195, 11, 36, // Opcode: S2_storeriabs
/* 2978 */    MCD::OPC_FilterValue, 5, 237, 0, // Skip to: 3219
/* 2982 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2985 */    MCD::OPC_FilterValue, 0, 74, 0, // Skip to: 3063
/* 2989 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 2992 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3055
/* 2996 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 2999 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3013
/* 3003 */    MCD::OPC_CheckField, 2, 1, 0, 13, 67, // Skip to: 20174
/* 3009 */    MCD::OPC_Decode, 211, 10, 37, // Opcode: S2_pstorerbnewt_io
/* 3013 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3027
/* 3017 */    MCD::OPC_CheckField, 2, 1, 0, 255, 66, // Skip to: 20174
/* 3023 */    MCD::OPC_Decode, 153, 12, 37, // Opcode: S4_pstorerbnewtnew_io
/* 3027 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3041
/* 3031 */    MCD::OPC_CheckField, 2, 1, 0, 241, 66, // Skip to: 20174
/* 3037 */    MCD::OPC_Decode, 208, 10, 37, // Opcode: S2_pstorerbnewf_io
/* 3041 */    MCD::OPC_FilterValue, 3, 233, 66, // Skip to: 20174
/* 3045 */    MCD::OPC_CheckField, 2, 1, 0, 227, 66, // Skip to: 20174
/* 3051 */    MCD::OPC_Decode, 148, 12, 37, // Opcode: S4_pstorerbnewfnew_io
/* 3055 */    MCD::OPC_FilterValue, 1, 219, 66, // Skip to: 20174
/* 3059 */    MCD::OPC_Decode, 147, 11, 38, // Opcode: S2_storerbnewabs
/* 3063 */    MCD::OPC_FilterValue, 1, 74, 0, // Skip to: 3141
/* 3067 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3070 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3133
/* 3074 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3077 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3091
/* 3081 */    MCD::OPC_CheckField, 2, 1, 0, 191, 66, // Skip to: 20174
/* 3087 */    MCD::OPC_Decode, 235, 10, 39, // Opcode: S2_pstorerhnewt_io
/* 3091 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3105
/* 3095 */    MCD::OPC_CheckField, 2, 1, 0, 177, 66, // Skip to: 20174
/* 3101 */    MCD::OPC_Decode, 193, 12, 39, // Opcode: S4_pstorerhnewtnew_io
/* 3105 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3119
/* 3109 */    MCD::OPC_CheckField, 2, 1, 0, 163, 66, // Skip to: 20174
/* 3115 */    MCD::OPC_Decode, 232, 10, 39, // Opcode: S2_pstorerhnewf_io
/* 3119 */    MCD::OPC_FilterValue, 3, 155, 66, // Skip to: 20174
/* 3123 */    MCD::OPC_CheckField, 2, 1, 0, 149, 66, // Skip to: 20174
/* 3129 */    MCD::OPC_Decode, 188, 12, 39, // Opcode: S4_pstorerhnewfnew_io
/* 3133 */    MCD::OPC_FilterValue, 1, 141, 66, // Skip to: 20174
/* 3137 */    MCD::OPC_Decode, 185, 11, 40, // Opcode: S2_storerhnewabs
/* 3141 */    MCD::OPC_FilterValue, 2, 133, 66, // Skip to: 20174
/* 3145 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3148 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3211
/* 3152 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3155 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3169
/* 3159 */    MCD::OPC_CheckField, 2, 1, 0, 113, 66, // Skip to: 20174
/* 3165 */    MCD::OPC_Decode, 247, 10, 41, // Opcode: S2_pstorerinewt_io
/* 3169 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3183
/* 3173 */    MCD::OPC_CheckField, 2, 1, 0, 99, 66, // Skip to: 20174
/* 3179 */    MCD::OPC_Decode, 213, 12, 41, // Opcode: S4_pstorerinewtnew_io
/* 3183 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3197
/* 3187 */    MCD::OPC_CheckField, 2, 1, 0, 85, 66, // Skip to: 20174
/* 3193 */    MCD::OPC_Decode, 244, 10, 41, // Opcode: S2_pstorerinewf_io
/* 3197 */    MCD::OPC_FilterValue, 3, 77, 66, // Skip to: 20174
/* 3201 */    MCD::OPC_CheckField, 2, 1, 0, 71, 66, // Skip to: 20174
/* 3207 */    MCD::OPC_Decode, 208, 12, 41, // Opcode: S4_pstorerinewfnew_io
/* 3211 */    MCD::OPC_FilterValue, 1, 63, 66, // Skip to: 20174
/* 3215 */    MCD::OPC_Decode, 203, 11, 42, // Opcode: S2_storerinewabs
/* 3219 */    MCD::OPC_FilterValue, 6, 50, 0, // Skip to: 3273
/* 3223 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3226 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 3265
/* 3230 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3233 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3241
/* 3237 */    MCD::OPC_Decode, 220, 10, 43, // Opcode: S2_pstorerdt_io
/* 3241 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3249
/* 3245 */    MCD::OPC_Decode, 168, 12, 43, // Opcode: S4_pstorerdtnew_io
/* 3249 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3257
/* 3253 */    MCD::OPC_Decode, 217, 10, 43, // Opcode: S2_pstorerdf_io
/* 3257 */    MCD::OPC_FilterValue, 3, 17, 66, // Skip to: 20174
/* 3261 */    MCD::OPC_Decode, 163, 12, 43, // Opcode: S4_pstorerdfnew_io
/* 3265 */    MCD::OPC_FilterValue, 1, 9, 66, // Skip to: 20174
/* 3269 */    MCD::OPC_Decode, 157, 11, 44, // Opcode: S2_storerdabs
/* 3273 */    MCD::OPC_FilterValue, 8, 74, 0, // Skip to: 3351
/* 3277 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3280 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3343
/* 3284 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3287 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3301
/* 3291 */    MCD::OPC_CheckField, 13, 1, 0, 237, 65, // Skip to: 20174
/* 3297 */    MCD::OPC_Decode, 220, 5, 45, // Opcode: L2_ploadrbt_io
/* 3301 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3315
/* 3305 */    MCD::OPC_CheckField, 13, 1, 0, 223, 65, // Skip to: 20174
/* 3311 */    MCD::OPC_Decode, 222, 5, 45, // Opcode: L2_ploadrbtnew_io
/* 3315 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3329
/* 3319 */    MCD::OPC_CheckField, 13, 1, 0, 209, 65, // Skip to: 20174
/* 3325 */    MCD::OPC_Decode, 216, 5, 45, // Opcode: L2_ploadrbf_io
/* 3329 */    MCD::OPC_FilterValue, 3, 201, 65, // Skip to: 20174
/* 3333 */    MCD::OPC_CheckField, 13, 1, 0, 195, 65, // Skip to: 20174
/* 3339 */    MCD::OPC_Decode, 218, 5, 45, // Opcode: L2_ploadrbfnew_io
/* 3343 */    MCD::OPC_FilterValue, 1, 187, 65, // Skip to: 20174
/* 3347 */    MCD::OPC_Decode, 167, 6, 46, // Opcode: L4_loadrb_abs
/* 3351 */    MCD::OPC_FilterValue, 9, 74, 0, // Skip to: 3429
/* 3355 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3358 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3421
/* 3362 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3365 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3379
/* 3369 */    MCD::OPC_CheckField, 13, 1, 0, 159, 65, // Skip to: 20174
/* 3375 */    MCD::OPC_Decode, 252, 5, 45, // Opcode: L2_ploadrubt_io
/* 3379 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3393
/* 3383 */    MCD::OPC_CheckField, 13, 1, 0, 145, 65, // Skip to: 20174
/* 3389 */    MCD::OPC_Decode, 254, 5, 45, // Opcode: L2_ploadrubtnew_io
/* 3393 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3407
/* 3397 */    MCD::OPC_CheckField, 13, 1, 0, 131, 65, // Skip to: 20174
/* 3403 */    MCD::OPC_Decode, 248, 5, 45, // Opcode: L2_ploadrubf_io
/* 3407 */    MCD::OPC_FilterValue, 3, 123, 65, // Skip to: 20174
/* 3411 */    MCD::OPC_CheckField, 13, 1, 0, 117, 65, // Skip to: 20174
/* 3417 */    MCD::OPC_Decode, 250, 5, 45, // Opcode: L2_ploadrubfnew_io
/* 3421 */    MCD::OPC_FilterValue, 1, 109, 65, // Skip to: 20174
/* 3425 */    MCD::OPC_Decode, 183, 6, 46, // Opcode: L4_loadrub_abs
/* 3429 */    MCD::OPC_FilterValue, 10, 74, 0, // Skip to: 3507
/* 3433 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3436 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3499
/* 3440 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3443 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3457
/* 3447 */    MCD::OPC_CheckField, 13, 1, 0, 81, 65, // Skip to: 20174
/* 3453 */    MCD::OPC_Decode, 236, 5, 47, // Opcode: L2_ploadrht_io
/* 3457 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3471
/* 3461 */    MCD::OPC_CheckField, 13, 1, 0, 67, 65, // Skip to: 20174
/* 3467 */    MCD::OPC_Decode, 238, 5, 47, // Opcode: L2_ploadrhtnew_io
/* 3471 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3485
/* 3475 */    MCD::OPC_CheckField, 13, 1, 0, 53, 65, // Skip to: 20174
/* 3481 */    MCD::OPC_Decode, 232, 5, 47, // Opcode: L2_ploadrhf_io
/* 3485 */    MCD::OPC_FilterValue, 3, 45, 65, // Skip to: 20174
/* 3489 */    MCD::OPC_CheckField, 13, 1, 0, 39, 65, // Skip to: 20174
/* 3495 */    MCD::OPC_Decode, 234, 5, 47, // Opcode: L2_ploadrhfnew_io
/* 3499 */    MCD::OPC_FilterValue, 1, 31, 65, // Skip to: 20174
/* 3503 */    MCD::OPC_Decode, 175, 6, 48, // Opcode: L4_loadrh_abs
/* 3507 */    MCD::OPC_FilterValue, 11, 74, 0, // Skip to: 3585
/* 3511 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3514 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3577
/* 3518 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3521 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3535
/* 3525 */    MCD::OPC_CheckField, 13, 1, 0, 3, 65, // Skip to: 20174
/* 3531 */    MCD::OPC_Decode, 132, 6, 47, // Opcode: L2_ploadruht_io
/* 3535 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3549
/* 3539 */    MCD::OPC_CheckField, 13, 1, 0, 245, 64, // Skip to: 20174
/* 3545 */    MCD::OPC_Decode, 134, 6, 47, // Opcode: L2_ploadruhtnew_io
/* 3549 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3563
/* 3553 */    MCD::OPC_CheckField, 13, 1, 0, 231, 64, // Skip to: 20174
/* 3559 */    MCD::OPC_Decode, 128, 6, 47, // Opcode: L2_ploadruhf_io
/* 3563 */    MCD::OPC_FilterValue, 3, 223, 64, // Skip to: 20174
/* 3567 */    MCD::OPC_CheckField, 13, 1, 0, 217, 64, // Skip to: 20174
/* 3573 */    MCD::OPC_Decode, 130, 6, 47, // Opcode: L2_ploadruhfnew_io
/* 3577 */    MCD::OPC_FilterValue, 1, 209, 64, // Skip to: 20174
/* 3581 */    MCD::OPC_Decode, 187, 6, 48, // Opcode: L4_loadruh_abs
/* 3585 */    MCD::OPC_FilterValue, 12, 74, 0, // Skip to: 3663
/* 3589 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3592 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3655
/* 3596 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3599 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3613
/* 3603 */    MCD::OPC_CheckField, 13, 1, 0, 181, 64, // Skip to: 20174
/* 3609 */    MCD::OPC_Decode, 244, 5, 49, // Opcode: L2_ploadrit_io
/* 3613 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3627
/* 3617 */    MCD::OPC_CheckField, 13, 1, 0, 167, 64, // Skip to: 20174
/* 3623 */    MCD::OPC_Decode, 246, 5, 49, // Opcode: L2_ploadritnew_io
/* 3627 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3641
/* 3631 */    MCD::OPC_CheckField, 13, 1, 0, 153, 64, // Skip to: 20174
/* 3637 */    MCD::OPC_Decode, 240, 5, 49, // Opcode: L2_ploadrif_io
/* 3641 */    MCD::OPC_FilterValue, 3, 145, 64, // Skip to: 20174
/* 3645 */    MCD::OPC_CheckField, 13, 1, 0, 139, 64, // Skip to: 20174
/* 3651 */    MCD::OPC_Decode, 242, 5, 49, // Opcode: L2_ploadrifnew_io
/* 3655 */    MCD::OPC_FilterValue, 1, 131, 64, // Skip to: 20174
/* 3659 */    MCD::OPC_Decode, 179, 6, 50, // Opcode: L4_loadri_abs
/* 3663 */    MCD::OPC_FilterValue, 14, 123, 64, // Skip to: 20174
/* 3667 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 3670 */    MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 3733
/* 3674 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3677 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3691
/* 3681 */    MCD::OPC_CheckField, 13, 1, 0, 103, 64, // Skip to: 20174
/* 3687 */    MCD::OPC_Decode, 228, 5, 51, // Opcode: L2_ploadrdt_io
/* 3691 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3705
/* 3695 */    MCD::OPC_CheckField, 13, 1, 0, 89, 64, // Skip to: 20174
/* 3701 */    MCD::OPC_Decode, 230, 5, 51, // Opcode: L2_ploadrdtnew_io
/* 3705 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3719
/* 3709 */    MCD::OPC_CheckField, 13, 1, 0, 75, 64, // Skip to: 20174
/* 3715 */    MCD::OPC_Decode, 224, 5, 51, // Opcode: L2_ploadrdf_io
/* 3719 */    MCD::OPC_FilterValue, 3, 67, 64, // Skip to: 20174
/* 3723 */    MCD::OPC_CheckField, 13, 1, 0, 61, 64, // Skip to: 20174
/* 3729 */    MCD::OPC_Decode, 226, 5, 51, // Opcode: L2_ploadrdfnew_io
/* 3733 */    MCD::OPC_FilterValue, 1, 53, 64, // Skip to: 20174
/* 3737 */    MCD::OPC_Decode, 171, 6, 52, // Opcode: L4_loadrd_abs
/* 3741 */    MCD::OPC_FilterValue, 5, 40, 1, // Skip to: 4041
/* 3745 */    MCD::OPC_ExtractField, 25, 3,  // Inst{27-25} ...
/* 3748 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 3785
/* 3752 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 3755 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3769
/* 3759 */    MCD::OPC_CheckField, 8, 2, 0, 25, 64, // Skip to: 20174
/* 3765 */    MCD::OPC_Decode, 200, 3, 53, // Opcode: J2_callr
/* 3769 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 3777
/* 3773 */    MCD::OPC_Decode, 202, 3, 54, // Opcode: J2_callrt
/* 3777 */    MCD::OPC_FilterValue, 9, 9, 64, // Skip to: 20174
/* 3781 */    MCD::OPC_Decode, 201, 3, 54, // Opcode: J2_callrf
/* 3785 */    MCD::OPC_FilterValue, 1, 81, 0, // Skip to: 3870
/* 3789 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 3792 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 3800
/* 3796 */    MCD::OPC_Decode, 222, 3, 53, // Opcode: J2_jumpr
/* 3800 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 3808
/* 3804 */    MCD::OPC_Decode, 230, 4, 53, // Opcode: J4_hintjumpr
/* 3808 */    MCD::OPC_FilterValue, 10, 27, 0, // Skip to: 3839
/* 3812 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3815 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3823
/* 3819 */    MCD::OPC_Decode, 232, 3, 54, // Opcode: J2_jumprt
/* 3823 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3831
/* 3827 */    MCD::OPC_Decode, 233, 3, 54, // Opcode: J2_jumprtnew
/* 3831 */    MCD::OPC_FilterValue, 3, 211, 63, // Skip to: 20174
/* 3835 */    MCD::OPC_Decode, 234, 3, 54, // Opcode: J2_jumprtnewpt
/* 3839 */    MCD::OPC_FilterValue, 11, 203, 63, // Skip to: 20174
/* 3843 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3846 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3854
/* 3850 */    MCD::OPC_Decode, 223, 3, 54, // Opcode: J2_jumprf
/* 3854 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3862
/* 3858 */    MCD::OPC_Decode, 224, 3, 54, // Opcode: J2_jumprfnew
/* 3862 */    MCD::OPC_FilterValue, 3, 180, 63, // Skip to: 20174
/* 3866 */    MCD::OPC_Decode, 225, 3, 54, // Opcode: J2_jumprfnewpt
/* 3870 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 204, 3, 55, // Opcode: J2_jump
/* 3878 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3892
/* 3882 */    MCD::OPC_CheckField, 0, 1, 0, 158, 63, // Skip to: 20174
/* 3888 */    MCD::OPC_Decode, 198, 3, 55, // Opcode: J2_call
/* 3892 */    MCD::OPC_FilterValue, 6, 150, 63, // Skip to: 20174
/* 3896 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 3899 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 3964
/* 3903 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 3906 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 3935
/* 3910 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 3913 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3927
/* 3917 */    MCD::OPC_CheckField, 12, 1, 0, 123, 63, // Skip to: 20174
/* 3923 */    MCD::OPC_Decode, 237, 3, 56, // Opcode: J2_jumpt
/* 3927 */    MCD::OPC_FilterValue, 1, 115, 63, // Skip to: 20174
/* 3931 */    MCD::OPC_Decode, 203, 3, 56, // Opcode: J2_callt
/* 3935 */    MCD::OPC_FilterValue, 1, 107, 63, // Skip to: 20174
/* 3939 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 3942 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3956
/* 3946 */    MCD::OPC_CheckField, 12, 1, 0, 94, 63, // Skip to: 20174
/* 3952 */    MCD::OPC_Decode, 219, 3, 56, // Opcode: J2_jumpf
/* 3956 */    MCD::OPC_FilterValue, 1, 86, 63, // Skip to: 20174
/* 3960 */    MCD::OPC_Decode, 199, 3, 56, // Opcode: J2_callf
/* 3964 */    MCD::OPC_FilterValue, 1, 78, 63, // Skip to: 20174
/* 3968 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 3971 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4006
/* 3975 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 3978 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3992
/* 3982 */    MCD::OPC_CheckField, 24, 1, 0, 58, 63, // Skip to: 20174
/* 3988 */    MCD::OPC_Decode, 238, 3, 56, // Opcode: J2_jumptnew
/* 3992 */    MCD::OPC_FilterValue, 1, 50, 63, // Skip to: 20174
/* 3996 */    MCD::OPC_CheckField, 24, 1, 0, 44, 63, // Skip to: 20174
/* 4002 */    MCD::OPC_Decode, 220, 3, 56, // Opcode: J2_jumpfnew
/* 4006 */    MCD::OPC_FilterValue, 1, 36, 63, // Skip to: 20174
/* 4010 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4013 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4027
/* 4017 */    MCD::OPC_CheckField, 24, 1, 0, 23, 63, // Skip to: 20174
/* 4023 */    MCD::OPC_Decode, 239, 3, 56, // Opcode: J2_jumptnewpt
/* 4027 */    MCD::OPC_FilterValue, 1, 15, 63, // Skip to: 20174
/* 4031 */    MCD::OPC_CheckField, 24, 1, 0, 9, 63, // Skip to: 20174
/* 4037 */    MCD::OPC_Decode, 221, 3, 56, // Opcode: J2_jumpfnewpt
/* 4041 */    MCD::OPC_FilterValue, 6, 81, 2, // Skip to: 4638
/* 4045 */    MCD::OPC_ExtractField, 22, 6,  // Inst{27-22} ...
/* 4048 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4071
/* 4052 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4055 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4063
/* 4059 */    MCD::OPC_Decode, 242, 3, 57, // Opcode: J2_loop0r
/* 4063 */    MCD::OPC_FilterValue, 1, 235, 62, // Skip to: 20174
/* 4067 */    MCD::OPC_Decode, 246, 3, 57, // Opcode: J2_loop1r
/* 4071 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4085
/* 4075 */    MCD::OPC_CheckField, 21, 1, 1, 221, 62, // Skip to: 20174
/* 4081 */    MCD::OPC_Decode, 249, 3, 57, // Opcode: J2_ploop1sr
/* 4085 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 4108
/* 4089 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4092 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4100
/* 4096 */    MCD::OPC_Decode, 251, 3, 57, // Opcode: J2_ploop2sr
/* 4100 */    MCD::OPC_FilterValue, 1, 198, 62, // Skip to: 20174
/* 4104 */    MCD::OPC_Decode, 253, 3, 57, // Opcode: J2_ploop3sr
/* 4108 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4131
/* 4112 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 4115 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4123
/* 4119 */    MCD::OPC_Decode, 235, 3, 58, // Opcode: J2_jumprz
/* 4123 */    MCD::OPC_FilterValue, 1, 175, 62, // Skip to: 20174
/* 4127 */    MCD::OPC_Decode, 236, 3, 58, // Opcode: J2_jumprzpt
/* 4131 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 4154
/* 4135 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 4138 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4146
/* 4142 */    MCD::OPC_Decode, 226, 3, 58, // Opcode: J2_jumprgtez
/* 4146 */    MCD::OPC_FilterValue, 1, 152, 62, // Skip to: 20174
/* 4150 */    MCD::OPC_Decode, 227, 3, 58, // Opcode: J2_jumprgtezpt
/* 4154 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 4177
/* 4158 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 4161 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4169
/* 4165 */    MCD::OPC_Decode, 230, 3, 58, // Opcode: J2_jumprnz
/* 4169 */    MCD::OPC_FilterValue, 1, 129, 62, // Skip to: 20174
/* 4173 */    MCD::OPC_Decode, 231, 3, 58, // Opcode: J2_jumprnzpt
/* 4177 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 4200
/* 4181 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 4184 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4192
/* 4188 */    MCD::OPC_Decode, 228, 3, 58, // Opcode: J2_jumprltez
/* 4192 */    MCD::OPC_FilterValue, 1, 106, 62, // Skip to: 20174
/* 4196 */    MCD::OPC_Decode, 229, 3, 58, // Opcode: J2_jumprltezpt
/* 4200 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 4214
/* 4204 */    MCD::OPC_CheckField, 21, 1, 1, 92, 62, // Skip to: 20174
/* 4210 */    MCD::OPC_Decode, 144, 1, 59, // Opcode: A2_tfrrcr
/* 4214 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 4228
/* 4218 */    MCD::OPC_CheckField, 21, 1, 0, 78, 62, // Skip to: 20174
/* 4224 */    MCD::OPC_Decode, 219, 13, 53, // Opcode: Y4_trace
/* 4228 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 4242
/* 4232 */    MCD::OPC_CheckField, 21, 1, 1, 64, 62, // Skip to: 20174
/* 4238 */    MCD::OPC_Decode, 151, 2, 60, // Opcode: A4_tfrpcp
/* 4242 */    MCD::OPC_FilterValue, 32, 10, 0, // Skip to: 4256
/* 4246 */    MCD::OPC_CheckField, 21, 1, 0, 50, 62, // Skip to: 20174
/* 4252 */    MCD::OPC_Decode, 150, 2, 61, // Opcode: A4_tfrcpp
/* 4256 */    MCD::OPC_FilterValue, 36, 19, 0, // Skip to: 4279
/* 4260 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4263 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4271
/* 4267 */    MCD::OPC_Decode, 240, 3, 62, // Opcode: J2_loop0i
/* 4271 */    MCD::OPC_FilterValue, 1, 27, 62, // Skip to: 20174
/* 4275 */    MCD::OPC_Decode, 244, 3, 62, // Opcode: J2_loop1i
/* 4279 */    MCD::OPC_FilterValue, 38, 10, 0, // Skip to: 4293
/* 4283 */    MCD::OPC_CheckField, 21, 1, 1, 13, 62, // Skip to: 20174
/* 4289 */    MCD::OPC_Decode, 248, 3, 62, // Opcode: J2_ploop1si
/* 4293 */    MCD::OPC_FilterValue, 39, 19, 0, // Skip to: 4316
/* 4297 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4300 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4308
/* 4304 */    MCD::OPC_Decode, 250, 3, 62, // Opcode: J2_ploop2si
/* 4308 */    MCD::OPC_FilterValue, 1, 246, 61, // Skip to: 20174
/* 4312 */    MCD::OPC_Decode, 252, 3, 62, // Opcode: J2_ploop3si
/* 4316 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 4330
/* 4320 */    MCD::OPC_CheckField, 21, 1, 0, 232, 61, // Skip to: 20174
/* 4326 */    MCD::OPC_Decode, 133, 1, 63, // Opcode: A2_tfrcrr
/* 4330 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 4344
/* 4334 */    MCD::OPC_CheckField, 16, 6, 9, 218, 61, // Skip to: 20174
/* 4340 */    MCD::OPC_Decode, 218, 2, 64, // Opcode: C4_addipc
/* 4344 */    MCD::OPC_FilterValue, 44, 101, 0, // Skip to: 4449
/* 4348 */    MCD::OPC_ExtractField, 20, 2,  // Inst{21-20} ...
/* 4351 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4386
/* 4355 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4358 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4366
/* 4362 */    MCD::OPC_Decode, 179, 2, 65, // Opcode: C2_and
/* 4366 */    MCD::OPC_FilterValue, 1, 188, 61, // Skip to: 20174
/* 4370 */    MCD::OPC_CheckField, 7, 1, 1, 182, 61, // Skip to: 20174
/* 4376 */    MCD::OPC_CheckField, 4, 1, 1, 176, 61, // Skip to: 20174
/* 4382 */    MCD::OPC_Decode, 229, 2, 66, // Opcode: C4_fastcorner9
/* 4386 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4421
/* 4390 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4393 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4401
/* 4397 */    MCD::OPC_Decode, 219, 2, 67, // Opcode: C4_and_and
/* 4401 */    MCD::OPC_FilterValue, 1, 153, 61, // Skip to: 20174
/* 4405 */    MCD::OPC_CheckField, 7, 1, 1, 147, 61, // Skip to: 20174
/* 4411 */    MCD::OPC_CheckField, 4, 1, 1, 141, 61, // Skip to: 20174
/* 4417 */    MCD::OPC_Decode, 230, 2, 66, // Opcode: C4_fastcorner9_not
/* 4421 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4435
/* 4425 */    MCD::OPC_CheckField, 13, 1, 0, 127, 61, // Skip to: 20174
/* 4431 */    MCD::OPC_Decode, 210, 2, 65, // Opcode: C2_or
/* 4435 */    MCD::OPC_FilterValue, 3, 119, 61, // Skip to: 20174
/* 4439 */    MCD::OPC_CheckField, 13, 1, 0, 113, 61, // Skip to: 20174
/* 4445 */    MCD::OPC_Decode, 221, 2, 67, // Opcode: C4_and_or
/* 4449 */    MCD::OPC_FilterValue, 45, 59, 0, // Skip to: 4512
/* 4453 */    MCD::OPC_ExtractField, 20, 2,  // Inst{21-20} ...
/* 4456 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4470
/* 4460 */    MCD::OPC_CheckField, 13, 1, 0, 92, 61, // Skip to: 20174
/* 4466 */    MCD::OPC_Decode, 217, 2, 66, // Opcode: C2_xor
/* 4470 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4484
/* 4474 */    MCD::OPC_CheckField, 13, 1, 0, 78, 61, // Skip to: 20174
/* 4480 */    MCD::OPC_Decode, 234, 2, 67, // Opcode: C4_or_and
/* 4484 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4498
/* 4488 */    MCD::OPC_CheckField, 13, 1, 0, 64, 61, // Skip to: 20174
/* 4494 */    MCD::OPC_Decode, 180, 2, 65, // Opcode: C2_andn
/* 4498 */    MCD::OPC_FilterValue, 3, 56, 61, // Skip to: 20174
/* 4502 */    MCD::OPC_CheckField, 13, 1, 0, 50, 61, // Skip to: 20174
/* 4508 */    MCD::OPC_Decode, 236, 2, 67, // Opcode: C4_or_or
/* 4512 */    MCD::OPC_FilterValue, 46, 59, 0, // Skip to: 4575
/* 4516 */    MCD::OPC_ExtractField, 20, 2,  // Inst{21-20} ...
/* 4519 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4533
/* 4523 */    MCD::OPC_CheckField, 13, 1, 0, 29, 61, // Skip to: 20174
/* 4529 */    MCD::OPC_Decode, 181, 2, 68, // Opcode: C2_any8
/* 4533 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4547
/* 4537 */    MCD::OPC_CheckField, 13, 1, 0, 15, 61, // Skip to: 20174
/* 4543 */    MCD::OPC_Decode, 220, 2, 67, // Opcode: C4_and_andn
/* 4547 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4561
/* 4551 */    MCD::OPC_CheckField, 13, 1, 0, 1, 61, // Skip to: 20174
/* 4557 */    MCD::OPC_Decode, 178, 2, 68, // Opcode: C2_all8
/* 4561 */    MCD::OPC_FilterValue, 3, 249, 60, // Skip to: 20174
/* 4565 */    MCD::OPC_CheckField, 13, 1, 0, 243, 60, // Skip to: 20174
/* 4571 */    MCD::OPC_Decode, 222, 2, 67, // Opcode: C4_and_orn
/* 4575 */    MCD::OPC_FilterValue, 47, 235, 60, // Skip to: 20174
/* 4579 */    MCD::OPC_ExtractField, 20, 2,  // Inst{21-20} ...
/* 4582 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4596
/* 4586 */    MCD::OPC_CheckField, 13, 1, 0, 222, 60, // Skip to: 20174
/* 4592 */    MCD::OPC_Decode, 209, 2, 68, // Opcode: C2_not
/* 4596 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4610
/* 4600 */    MCD::OPC_CheckField, 13, 1, 0, 208, 60, // Skip to: 20174
/* 4606 */    MCD::OPC_Decode, 235, 2, 67, // Opcode: C4_or_andn
/* 4610 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4624
/* 4614 */    MCD::OPC_CheckField, 13, 1, 0, 194, 60, // Skip to: 20174
/* 4620 */    MCD::OPC_Decode, 211, 2, 65, // Opcode: C2_orn
/* 4624 */    MCD::OPC_FilterValue, 3, 186, 60, // Skip to: 20174
/* 4628 */    MCD::OPC_CheckField, 13, 1, 0, 180, 60, // Skip to: 20174
/* 4634 */    MCD::OPC_Decode, 237, 2, 67, // Opcode: C4_or_orn
/* 4638 */    MCD::OPC_FilterValue, 7, 63, 3, // Skip to: 5473
/* 4642 */    MCD::OPC_ExtractField, 25, 3,  // Inst{27-25} ...
/* 4645 */    MCD::OPC_FilterValue, 0, 121, 1, // Skip to: 5026
/* 4649 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4652 */    MCD::OPC_FilterValue, 0, 173, 0, // Skip to: 4829
/* 4656 */    MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 4659 */    MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 4712
/* 4663 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4666 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4673
/* 4670 */    MCD::OPC_Decode, 49, 69, // Opcode: A2_aslh
/* 4673 */    MCD::OPC_FilterValue, 1, 137, 60, // Skip to: 20174
/* 4677 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4680 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4688
/* 4684 */    MCD::OPC_Decode, 247, 1, 70, // Opcode: A4_paslht
/* 4688 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4696
/* 4692 */    MCD::OPC_Decode, 248, 1, 70, // Opcode: A4_paslhtnew
/* 4696 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4704
/* 4700 */    MCD::OPC_Decode, 245, 1, 70, // Opcode: A4_paslhf
/* 4704 */    MCD::OPC_FilterValue, 3, 106, 60, // Skip to: 20174
/* 4708 */    MCD::OPC_Decode, 246, 1, 70, // Opcode: A4_paslhfnew
/* 4712 */    MCD::OPC_FilterValue, 2, 59, 0, // Skip to: 4775
/* 4716 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4719 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4733
/* 4723 */    MCD::OPC_CheckField, 13, 1, 1, 85, 60, // Skip to: 20174
/* 4729 */    MCD::OPC_Decode, 135, 2, 70, // Opcode: A4_pzxtbt
/* 4733 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4747
/* 4737 */    MCD::OPC_CheckField, 13, 1, 1, 71, 60, // Skip to: 20174
/* 4743 */    MCD::OPC_Decode, 136, 2, 70, // Opcode: A4_pzxtbtnew
/* 4747 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4761
/* 4751 */    MCD::OPC_CheckField, 13, 1, 1, 57, 60, // Skip to: 20174
/* 4757 */    MCD::OPC_Decode, 133, 2, 70, // Opcode: A4_pzxtbf
/* 4761 */    MCD::OPC_FilterValue, 3, 49, 60, // Skip to: 20174
/* 4765 */    MCD::OPC_CheckField, 13, 1, 1, 43, 60, // Skip to: 20174
/* 4771 */    MCD::OPC_Decode, 134, 2, 70, // Opcode: A4_pzxtbfnew
/* 4775 */    MCD::OPC_FilterValue, 3, 35, 60, // Skip to: 20174
/* 4779 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4790
/* 4786 */    MCD::OPC_Decode, 212, 1, 69, // Opcode: A2_zxth
/* 4790 */    MCD::OPC_FilterValue, 1, 20, 60, // Skip to: 20174
/* 4794 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4797 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4805
/* 4801 */    MCD::OPC_Decode, 139, 2, 70, // Opcode: A4_pzxtht
/* 4805 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4813
/* 4809 */    MCD::OPC_Decode, 140, 2, 70, // Opcode: A4_pzxthtnew
/* 4813 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4821
/* 4817 */    MCD::OPC_Decode, 137, 2, 70, // Opcode: A4_pzxthf
/* 4821 */    MCD::OPC_FilterValue, 3, 245, 59, // Skip to: 20174
/* 4825 */    MCD::OPC_Decode, 138, 2, 70, // Opcode: A4_pzxthfnew
/* 4829 */    MCD::OPC_FilterValue, 1, 237, 59, // Skip to: 20174
/* 4833 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 4836 */    MCD::OPC_FilterValue, 0, 178, 0, // Skip to: 5018
/* 4840 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 4843 */    MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 4896
/* 4847 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4850 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4857
/* 4854 */    MCD::OPC_Decode, 50, 69, // Opcode: A2_asrh
/* 4857 */    MCD::OPC_FilterValue, 1, 209, 59, // Skip to: 20174
/* 4861 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4864 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4872
/* 4868 */    MCD::OPC_Decode, 251, 1, 70, // Opcode: A4_pasrht
/* 4872 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4880
/* 4876 */    MCD::OPC_Decode, 252, 1, 70, // Opcode: A4_pasrhtnew
/* 4880 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4888
/* 4884 */    MCD::OPC_Decode, 249, 1, 70, // Opcode: A4_pasrhf
/* 4888 */    MCD::OPC_FilterValue, 3, 178, 59, // Skip to: 20174
/* 4892 */    MCD::OPC_Decode, 250, 1, 70, // Opcode: A4_pasrhfnew
/* 4896 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4910
/* 4900 */    MCD::OPC_CheckField, 13, 1, 0, 164, 59, // Skip to: 20174
/* 4906 */    MCD::OPC_Decode, 132, 1, 69, // Opcode: A2_tfr
/* 4910 */    MCD::OPC_FilterValue, 2, 50, 0, // Skip to: 4964
/* 4914 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4917 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4925
/* 4921 */    MCD::OPC_Decode, 129, 1, 69, // Opcode: A2_sxtb
/* 4925 */    MCD::OPC_FilterValue, 1, 141, 59, // Skip to: 20174
/* 4929 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4932 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4940
/* 4936 */    MCD::OPC_Decode, 255, 1, 70, // Opcode: A4_psxtbt
/* 4940 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4948
/* 4944 */    MCD::OPC_Decode, 128, 2, 70, // Opcode: A4_psxtbtnew
/* 4948 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4956
/* 4952 */    MCD::OPC_Decode, 253, 1, 70, // Opcode: A4_psxtbf
/* 4956 */    MCD::OPC_FilterValue, 3, 110, 59, // Skip to: 20174
/* 4960 */    MCD::OPC_Decode, 254, 1, 70, // Opcode: A4_psxtbfnew
/* 4964 */    MCD::OPC_FilterValue, 3, 102, 59, // Skip to: 20174
/* 4968 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4971 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4979
/* 4975 */    MCD::OPC_Decode, 130, 1, 69, // Opcode: A2_sxth
/* 4979 */    MCD::OPC_FilterValue, 1, 87, 59, // Skip to: 20174
/* 4983 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4986 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4994
/* 4990 */    MCD::OPC_Decode, 131, 2, 70, // Opcode: A4_psxtht
/* 4994 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5002
/* 4998 */    MCD::OPC_Decode, 132, 2, 70, // Opcode: A4_psxthtnew
/* 5002 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5010
/* 5006 */    MCD::OPC_Decode, 129, 2, 70, // Opcode: A4_psxthf
/* 5010 */    MCD::OPC_FilterValue, 3, 56, 59, // Skip to: 20174
/* 5014 */    MCD::OPC_Decode, 130, 2, 70, // Opcode: A4_psxthfnew
/* 5018 */    MCD::OPC_FilterValue, 1, 48, 59, // Skip to: 20174
/* 5022 */    MCD::OPC_Decode, 137, 1, 71, // Opcode: A2_tfril
/* 5026 */    MCD::OPC_FilterValue, 1, 86, 0, // Skip to: 5116
/* 5030 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 5033 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5047
/* 5037 */    MCD::OPC_CheckField, 21, 1, 1, 27, 59, // Skip to: 20174
/* 5043 */    MCD::OPC_Decode, 136, 1, 71, // Opcode: A2_tfrih
/* 5047 */    MCD::OPC_FilterValue, 1, 19, 59, // Skip to: 20174
/* 5051 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5054 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5077
/* 5058 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 5061 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5069
/* 5065 */    MCD::OPC_Decode, 207, 2, 72, // Opcode: C2_muxir
/* 5069 */    MCD::OPC_FilterValue, 1, 253, 58, // Skip to: 20174
/* 5073 */    MCD::OPC_Decode, 208, 2, 73, // Opcode: C2_muxri
/* 5077 */    MCD::OPC_FilterValue, 1, 245, 58, // Skip to: 20174
/* 5081 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 5084 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5092
/* 5088 */    MCD::OPC_Decode, 235, 1, 74, // Opcode: A4_combineri
/* 5092 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5100
/* 5096 */    MCD::OPC_Decode, 234, 1, 75, // Opcode: A4_combineir
/* 5100 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5108
/* 5104 */    MCD::OPC_Decode, 142, 2, 76, // Opcode: A4_rcmpeqi
/* 5108 */    MCD::OPC_FilterValue, 3, 214, 58, // Skip to: 20174
/* 5112 */    MCD::OPC_Decode, 144, 2, 76, // Opcode: A4_rcmpneqi
/* 5116 */    MCD::OPC_FilterValue, 2, 173, 0, // Skip to: 5293
/* 5120 */    MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 5123 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 5164
/* 5127 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5130 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 5147
/* 5134 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 5144
/* 5140 */    MCD::OPC_Decode, 146, 1, 77, // Opcode: A2_tfrt
/* 5144 */    MCD::OPC_Decode, 77, 72, // Opcode: A2_paddit
/* 5147 */    MCD::OPC_FilterValue, 1, 175, 58, // Skip to: 20174
/* 5151 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 5161
/* 5157 */    MCD::OPC_Decode, 147, 1, 77, // Opcode: A2_tfrtnew
/* 5161 */    MCD::OPC_Decode, 78, 72, // Opcode: A2_padditnew
/* 5164 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 5205
/* 5168 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5171 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 5188
/* 5175 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 5185
/* 5181 */    MCD::OPC_Decode, 134, 1, 77, // Opcode: A2_tfrf
/* 5185 */    MCD::OPC_Decode, 75, 72, // Opcode: A2_paddif
/* 5188 */    MCD::OPC_FilterValue, 1, 134, 58, // Skip to: 20174
/* 5192 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 5202
/* 5198 */    MCD::OPC_Decode, 135, 1, 77, // Opcode: A2_tfrfnew
/* 5202 */    MCD::OPC_Decode, 76, 72, // Opcode: A2_paddifnew
/* 5205 */    MCD::OPC_FilterValue, 2, 49, 0, // Skip to: 5258
/* 5209 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 5212 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5235
/* 5216 */    MCD::OPC_ExtractField, 22, 1,  // Inst{22} ...
/* 5219 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5227
/* 5223 */    MCD::OPC_Decode, 194, 2, 78, // Opcode: C2_cmpeqi
/* 5227 */    MCD::OPC_FilterValue, 1, 95, 58, // Skip to: 20174
/* 5231 */    MCD::OPC_Decode, 199, 2, 78, // Opcode: C2_cmpgti
/* 5235 */    MCD::OPC_FilterValue, 4, 87, 58, // Skip to: 20174
/* 5239 */    MCD::OPC_ExtractField, 22, 1,  // Inst{22} ...
/* 5242 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5250
/* 5246 */    MCD::OPC_Decode, 228, 2, 78, // Opcode: C4_cmpneqi
/* 5250 */    MCD::OPC_FilterValue, 1, 72, 58, // Skip to: 20174
/* 5254 */    MCD::OPC_Decode, 224, 2, 78, // Opcode: C4_cmpltei
/* 5258 */    MCD::OPC_FilterValue, 3, 64, 58, // Skip to: 20174
/* 5262 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 5265 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5279
/* 5269 */    MCD::OPC_CheckField, 21, 2, 0, 51, 58, // Skip to: 20174
/* 5275 */    MCD::OPC_Decode, 202, 2, 79, // Opcode: C2_cmpgtui
/* 5279 */    MCD::OPC_FilterValue, 4, 43, 58, // Skip to: 20174
/* 5283 */    MCD::OPC_CheckField, 21, 2, 0, 37, 58, // Skip to: 20174
/* 5289 */    MCD::OPC_Decode, 226, 2, 79, // Opcode: C4_cmplteui
/* 5293 */    MCD::OPC_FilterValue, 3, 41, 0, // Skip to: 5338
/* 5297 */    MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 5300 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 5324
/* 5304 */    MCD::OPC_CheckField, 21, 1, 0, 11, 0, // Skip to: 5321
/* 5310 */    MCD::OPC_CheckField, 5, 9, 255, 1, 4, 0, // Skip to: 5321
/* 5317 */    MCD::OPC_Decode, 211, 1, 69, // Opcode: A2_zxtb
/* 5321 */    MCD::OPC_Decode, 47, 80, // Opcode: A2_andir
/* 5324 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 5331
/* 5328 */    MCD::OPC_Decode, 117, 81, // Opcode: A2_subri
/* 5331 */    MCD::OPC_FilterValue, 2, 247, 57, // Skip to: 20174
/* 5335 */    MCD::OPC_Decode, 71, 80, // Opcode: A2_orir
/* 5338 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5352
/* 5342 */    MCD::OPC_CheckField, 24, 1, 0, 234, 57, // Skip to: 20174
/* 5348 */    MCD::OPC_Decode, 145, 1, 82, // Opcode: A2_tfrsi
/* 5352 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 5360
/* 5356 */    MCD::OPC_Decode, 206, 2, 83, // Opcode: C2_muxii
/* 5360 */    MCD::OPC_FilterValue, 6, 18, 0, // Skip to: 5382
/* 5364 */    MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 5367 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5374
/* 5371 */    MCD::OPC_Decode, 55, 84, // Opcode: A2_combineii
/* 5374 */    MCD::OPC_FilterValue, 1, 204, 57, // Skip to: 20174
/* 5378 */    MCD::OPC_Decode, 233, 1, 85, // Opcode: A4_combineii
/* 5382 */    MCD::OPC_FilterValue, 7, 196, 57, // Skip to: 20174
/* 5386 */    MCD::OPC_ExtractField, 24, 1,  // Inst{24} ...
/* 5389 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 5466
/* 5393 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5396 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 5431
/* 5400 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 5403 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5417
/* 5407 */    MCD::OPC_CheckField, 20, 1, 0, 169, 57, // Skip to: 20174
/* 5413 */    MCD::OPC_Decode, 190, 2, 86, // Opcode: C2_cmoveit
/* 5417 */    MCD::OPC_FilterValue, 1, 161, 57, // Skip to: 20174
/* 5421 */    MCD::OPC_CheckField, 20, 1, 0, 155, 57, // Skip to: 20174
/* 5427 */    MCD::OPC_Decode, 189, 2, 86, // Opcode: C2_cmoveif
/* 5431 */    MCD::OPC_FilterValue, 1, 147, 57, // Skip to: 20174
/* 5435 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 5438 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5452
/* 5442 */    MCD::OPC_CheckField, 20, 1, 0, 134, 57, // Skip to: 20174
/* 5448 */    MCD::OPC_Decode, 192, 2, 86, // Opcode: C2_cmovenewit
/* 5452 */    MCD::OPC_FilterValue, 1, 126, 57, // Skip to: 20174
/* 5456 */    MCD::OPC_CheckField, 20, 1, 0, 120, 57, // Skip to: 20174
/* 5462 */    MCD::OPC_Decode, 191, 2, 86, // Opcode: C2_cmovenewif
/* 5466 */    MCD::OPC_FilterValue, 1, 112, 57, // Skip to: 20174
/* 5470 */    MCD::OPC_Decode, 67, 87, // Opcode: A2_nop
/* 5473 */    MCD::OPC_FilterValue, 8, 111, 7, // Skip to: 7380
/* 5477 */    MCD::OPC_ExtractField, 24, 4,  // Inst{27-24} ...
/* 5480 */    MCD::OPC_FilterValue, 0, 70, 1, // Skip to: 5810
/* 5484 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 5487 */    MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 5540
/* 5491 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5494 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5502
/* 5498 */    MCD::OPC_Decode, 232, 9, 88, // Opcode: S2_asr_i_p
/* 5502 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5516
/* 5506 */    MCD::OPC_CheckField, 12, 2, 0, 70, 57, // Skip to: 20174
/* 5512 */    MCD::OPC_Decode, 147, 13, 89, // Opcode: S5_vasrhrnd
/* 5516 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5524
/* 5520 */    MCD::OPC_Decode, 248, 9, 90, // Opcode: S2_asr_i_vw
/* 5524 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5532
/* 5528 */    MCD::OPC_Decode, 247, 9, 89, // Opcode: S2_asr_i_vh
/* 5532 */    MCD::OPC_FilterValue, 7, 46, 57, // Skip to: 20174
/* 5536 */    MCD::OPC_Decode, 138, 3, 91, // Opcode: F2_conv_df2d
/* 5540 */    MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 5579
/* 5544 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5547 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5555
/* 5551 */    MCD::OPC_Decode, 176, 10, 88, // Opcode: S2_lsr_i_p
/* 5555 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5563
/* 5559 */    MCD::OPC_Decode, 189, 10, 90, // Opcode: S2_lsr_i_vw
/* 5563 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5571
/* 5567 */    MCD::OPC_Decode, 188, 10, 89, // Opcode: S2_lsr_i_vh
/* 5571 */    MCD::OPC_FilterValue, 7, 7, 57, // Skip to: 20174
/* 5575 */    MCD::OPC_Decode, 141, 3, 91, // Opcode: F2_conv_df2ud
/* 5579 */    MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 5618
/* 5583 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5586 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5594
/* 5590 */    MCD::OPC_Decode, 203, 9, 88, // Opcode: S2_asl_i_p
/* 5594 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5602
/* 5598 */    MCD::OPC_Decode, 217, 9, 90, // Opcode: S2_asl_i_vw
/* 5602 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5610
/* 5606 */    MCD::OPC_Decode, 216, 9, 89, // Opcode: S2_asl_i_vh
/* 5610 */    MCD::OPC_FilterValue, 7, 224, 56, // Skip to: 20174
/* 5614 */    MCD::OPC_Decode, 156, 3, 91, // Opcode: F2_conv_ud2df
/* 5618 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 5632
/* 5622 */    MCD::OPC_CheckField, 21, 3, 7, 210, 56, // Skip to: 20174
/* 5628 */    MCD::OPC_Decode, 136, 3, 91, // Opcode: F2_conv_d2df
/* 5632 */    MCD::OPC_FilterValue, 4, 34, 0, // Skip to: 5670
/* 5636 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5639 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5647
/* 5643 */    MCD::OPC_Decode, 230, 11, 91, // Opcode: S2_vsathub_nopack
/* 5647 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5655
/* 5651 */    MCD::OPC_Decode, 148, 1, 91, // Opcode: A2_vabsh
/* 5655 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 5662
/* 5659 */    MCD::OPC_Decode, 69, 91, // Opcode: A2_notp
/* 5662 */    MCD::OPC_FilterValue, 3, 172, 56, // Skip to: 20174
/* 5666 */    MCD::OPC_Decode, 152, 10, 91, // Opcode: S2_deinterleave
/* 5670 */    MCD::OPC_FilterValue, 5, 34, 0, // Skip to: 5708
/* 5674 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5677 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5685
/* 5681 */    MCD::OPC_Decode, 234, 11, 91, // Opcode: S2_vsatwuh_nopack
/* 5685 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5693
/* 5689 */    MCD::OPC_Decode, 149, 1, 91, // Opcode: A2_vabshsat
/* 5693 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 5700
/* 5697 */    MCD::OPC_Decode, 65, 91, // Opcode: A2_negp
/* 5700 */    MCD::OPC_FilterValue, 3, 134, 56, // Skip to: 20174
/* 5704 */    MCD::OPC_Decode, 161, 10, 91, // Opcode: S2_interleave
/* 5708 */    MCD::OPC_FilterValue, 6, 44, 0, // Skip to: 5756
/* 5712 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5715 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5723
/* 5719 */    MCD::OPC_Decode, 232, 11, 91, // Opcode: S2_vsatwh_nopack
/* 5723 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5731
/* 5727 */    MCD::OPC_Decode, 150, 1, 91, // Opcode: A2_vabsw
/* 5731 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 5738
/* 5735 */    MCD::OPC_Decode, 24, 91, // Opcode: A2_absp
/* 5738 */    MCD::OPC_FilterValue, 3, 96, 56, // Skip to: 20174
/* 5742 */    MCD::OPC_CheckField, 21, 1, 1, 4, 0, // Skip to: 5752
/* 5748 */    MCD::OPC_Decode, 139, 3, 91, // Opcode: F2_conv_df2d_chop
/* 5752 */    MCD::OPC_Decode, 137, 10, 91, // Opcode: S2_brevp
/* 5756 */    MCD::OPC_FilterValue, 7, 78, 56, // Skip to: 20174
/* 5760 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5763 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5771
/* 5767 */    MCD::OPC_Decode, 228, 11, 91, // Opcode: S2_vsathb_nopack
/* 5771 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5779
/* 5775 */    MCD::OPC_Decode, 151, 1, 91, // Opcode: A2_vabswsat
/* 5779 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5787
/* 5783 */    MCD::OPC_Decode, 179, 1, 91, // Opcode: A2_vconj
/* 5787 */    MCD::OPC_FilterValue, 3, 47, 56, // Skip to: 20174
/* 5791 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5794 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5802
/* 5798 */    MCD::OPC_Decode, 237, 9, 88, // Opcode: S2_asr_i_p_rnd
/* 5802 */    MCD::OPC_FilterValue, 1, 32, 56, // Skip to: 20174
/* 5806 */    MCD::OPC_Decode, 142, 3, 91, // Opcode: F2_conv_df2ud_chop
/* 5810 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5818
/* 5814 */    MCD::OPC_Decode, 155, 10, 92, // Opcode: S2_extractup
/* 5818 */    MCD::OPC_FilterValue, 2, 157, 0, // Skip to: 5979
/* 5822 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 5825 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5848
/* 5829 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5832 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5840
/* 5836 */    MCD::OPC_Decode, 235, 9, 93, // Opcode: S2_asr_i_p_nac
/* 5840 */    MCD::OPC_FilterValue, 1, 250, 55, // Skip to: 20174
/* 5844 */    MCD::OPC_Decode, 234, 9, 93, // Opcode: S2_asr_i_p_and
/* 5848 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 5879
/* 5852 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5855 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5863
/* 5859 */    MCD::OPC_Decode, 179, 10, 93, // Opcode: S2_lsr_i_p_nac
/* 5863 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5871
/* 5867 */    MCD::OPC_Decode, 178, 10, 93, // Opcode: S2_lsr_i_p_and
/* 5871 */    MCD::OPC_FilterValue, 2, 219, 55, // Skip to: 20174
/* 5875 */    MCD::OPC_Decode, 181, 10, 93, // Opcode: S2_lsr_i_p_xacc
/* 5879 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 5910
/* 5883 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5886 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5894
/* 5890 */    MCD::OPC_Decode, 206, 9, 93, // Opcode: S2_asl_i_p_nac
/* 5894 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5902
/* 5898 */    MCD::OPC_Decode, 205, 9, 93, // Opcode: S2_asl_i_p_and
/* 5902 */    MCD::OPC_FilterValue, 2, 188, 55, // Skip to: 20174
/* 5906 */    MCD::OPC_Decode, 208, 9, 93, // Opcode: S2_asl_i_p_xacc
/* 5910 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 5933
/* 5914 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5917 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5925
/* 5921 */    MCD::OPC_Decode, 233, 9, 93, // Opcode: S2_asr_i_p_acc
/* 5925 */    MCD::OPC_FilterValue, 1, 165, 55, // Skip to: 20174
/* 5929 */    MCD::OPC_Decode, 236, 9, 93, // Opcode: S2_asr_i_p_or
/* 5933 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 5956
/* 5937 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5940 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5948
/* 5944 */    MCD::OPC_Decode, 177, 10, 93, // Opcode: S2_lsr_i_p_acc
/* 5948 */    MCD::OPC_FilterValue, 1, 142, 55, // Skip to: 20174
/* 5952 */    MCD::OPC_Decode, 180, 10, 93, // Opcode: S2_lsr_i_p_or
/* 5956 */    MCD::OPC_FilterValue, 6, 134, 55, // Skip to: 20174
/* 5960 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 5963 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5971
/* 5967 */    MCD::OPC_Decode, 204, 9, 93, // Opcode: S2_asl_i_p_acc
/* 5971 */    MCD::OPC_FilterValue, 1, 119, 55, // Skip to: 20174
/* 5975 */    MCD::OPC_Decode, 207, 9, 93, // Opcode: S2_asl_i_p_or
/* 5979 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 5987
/* 5983 */    MCD::OPC_Decode, 159, 10, 94, // Opcode: S2_insertp
/* 5987 */    MCD::OPC_FilterValue, 4, 153, 0, // Skip to: 6144
/* 5991 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 5994 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 6025
/* 5998 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6001 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6009
/* 6005 */    MCD::OPC_Decode, 239, 11, 95, // Opcode: S2_vsxtbh
/* 6009 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6017
/* 6013 */    MCD::OPC_Decode, 131, 1, 95, // Opcode: A2_sxtw
/* 6017 */    MCD::OPC_FilterValue, 4, 73, 55, // Skip to: 20174
/* 6021 */    MCD::OPC_Decode, 149, 3, 95, // Opcode: F2_conv_sf2df
/* 6025 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6039
/* 6029 */    MCD::OPC_CheckField, 21, 3, 4, 59, 55, // Skip to: 20174
/* 6035 */    MCD::OPC_Decode, 158, 3, 95, // Opcode: F2_conv_uw2df
/* 6039 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 6070
/* 6043 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6046 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6054
/* 6050 */    MCD::OPC_Decode, 245, 11, 95, // Opcode: S2_vzxtbh
/* 6054 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6062
/* 6058 */    MCD::OPC_Decode, 236, 11, 95, // Opcode: S2_vsplatrh
/* 6062 */    MCD::OPC_FilterValue, 4, 28, 55, // Skip to: 20174
/* 6066 */    MCD::OPC_Decode, 160, 3, 95, // Opcode: F2_conv_w2df
/* 6070 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 6084
/* 6074 */    MCD::OPC_CheckField, 21, 3, 4, 14, 55, // Skip to: 20174
/* 6080 */    MCD::OPC_Decode, 150, 3, 95, // Opcode: F2_conv_sf2ud
/* 6084 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 6107
/* 6088 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6091 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6099
/* 6095 */    MCD::OPC_Decode, 240, 11, 95, // Opcode: S2_vsxthw
/* 6099 */    MCD::OPC_FilterValue, 4, 247, 54, // Skip to: 20174
/* 6103 */    MCD::OPC_Decode, 147, 3, 95, // Opcode: F2_conv_sf2d
/* 6107 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6121
/* 6111 */    MCD::OPC_CheckField, 21, 3, 4, 233, 54, // Skip to: 20174
/* 6117 */    MCD::OPC_Decode, 151, 3, 95, // Opcode: F2_conv_sf2ud_chop
/* 6121 */    MCD::OPC_FilterValue, 6, 225, 54, // Skip to: 20174
/* 6125 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6128 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6136
/* 6132 */    MCD::OPC_Decode, 246, 11, 95, // Opcode: S2_vzxthw
/* 6136 */    MCD::OPC_FilterValue, 4, 210, 54, // Skip to: 20174
/* 6140 */    MCD::OPC_Decode, 148, 3, 95, // Opcode: F2_conv_sf2d_chop
/* 6144 */    MCD::OPC_FilterValue, 5, 69, 0, // Skip to: 6217
/* 6148 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6151 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6165
/* 6155 */    MCD::OPC_CheckField, 13, 1, 0, 189, 54, // Skip to: 20174
/* 6161 */    MCD::OPC_Decode, 218, 11, 96, // Opcode: S2_tstbit_i
/* 6165 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6179
/* 6169 */    MCD::OPC_CheckField, 13, 1, 0, 175, 54, // Skip to: 20174
/* 6175 */    MCD::OPC_Decode, 132, 12, 96, // Opcode: S4_ntstbit_i
/* 6179 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6187
/* 6183 */    MCD::OPC_Decode, 214, 2, 97, // Opcode: C2_tfrrp
/* 6187 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6195
/* 6191 */    MCD::OPC_Decode, 183, 2, 98, // Opcode: C2_bitsclri
/* 6195 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 6203
/* 6199 */    MCD::OPC_Decode, 232, 2, 98, // Opcode: C4_nbitsclri
/* 6203 */    MCD::OPC_FilterValue, 7, 143, 54, // Skip to: 20174
/* 6207 */    MCD::OPC_CheckField, 13, 1, 0, 137, 54, // Skip to: 20174
/* 6213 */    MCD::OPC_Decode, 170, 3, 96, // Opcode: F2_sfclass
/* 6217 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 6225
/* 6221 */    MCD::OPC_Decode, 204, 2, 99, // Opcode: C2_mask
/* 6225 */    MCD::OPC_FilterValue, 7, 35, 0, // Skip to: 6264
/* 6229 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 6232 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6240
/* 6236 */    MCD::OPC_Decode, 208, 11, 100, // Opcode: S2_tableidxb
/* 6240 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6248
/* 6244 */    MCD::OPC_Decode, 212, 11, 100, // Opcode: S2_tableidxh
/* 6248 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6256
/* 6252 */    MCD::OPC_Decode, 214, 11, 100, // Opcode: S2_tableidxw
/* 6256 */    MCD::OPC_FilterValue, 3, 90, 54, // Skip to: 20174
/* 6260 */    MCD::OPC_Decode, 210, 11, 100, // Opcode: S2_tableidxd
/* 6264 */    MCD::OPC_FilterValue, 8, 55, 1, // Skip to: 6579
/* 6268 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6271 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6318
/* 6275 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6278 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6286
/* 6282 */    MCD::OPC_Decode, 229, 11, 101, // Opcode: S2_vsathub
/* 6286 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6294
/* 6290 */    MCD::OPC_Decode, 140, 3, 101, // Opcode: F2_conv_df2sf
/* 6294 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6302
/* 6298 */    MCD::OPC_Decode, 231, 11, 101, // Opcode: S2_vsatwh
/* 6302 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6310
/* 6306 */    MCD::OPC_Decode, 233, 11, 101, // Opcode: S2_vsatwuh
/* 6310 */    MCD::OPC_FilterValue, 6, 36, 54, // Skip to: 20174
/* 6314 */    MCD::OPC_Decode, 227, 11, 101, // Opcode: S2_vsathb
/* 6318 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6332
/* 6322 */    MCD::OPC_CheckField, 5, 3, 1, 22, 54, // Skip to: 20174
/* 6328 */    MCD::OPC_Decode, 157, 3, 101, // Opcode: F2_conv_ud2sf
/* 6332 */    MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 6371
/* 6336 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6339 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6347
/* 6343 */    MCD::OPC_Decode, 145, 10, 101, // Opcode: S2_clbp
/* 6347 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6355
/* 6351 */    MCD::OPC_Decode, 137, 3, 101, // Opcode: F2_conv_d2sf
/* 6355 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6363
/* 6359 */    MCD::OPC_Decode, 140, 10, 101, // Opcode: S2_cl0p
/* 6363 */    MCD::OPC_FilterValue, 4, 239, 53, // Skip to: 20174
/* 6367 */    MCD::OPC_Decode, 142, 10, 101, // Opcode: S2_cl1p
/* 6371 */    MCD::OPC_FilterValue, 3, 63, 0, // Skip to: 6438
/* 6375 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6378 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6386
/* 6382 */    MCD::OPC_Decode, 254, 11, 101, // Opcode: S4_clbpnorm
/* 6386 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6394
/* 6390 */    MCD::OPC_Decode, 143, 3, 101, // Opcode: F2_conv_df2uw
/* 6394 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6402
/* 6398 */    MCD::OPC_Decode, 253, 11, 102, // Opcode: S4_clbpaddi
/* 6402 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 6410
/* 6406 */    MCD::OPC_Decode, 146, 13, 101, // Opcode: S5_popcountp
/* 6410 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6424
/* 6414 */    MCD::OPC_CheckField, 12, 2, 0, 186, 53, // Skip to: 20174
/* 6420 */    MCD::OPC_Decode, 143, 13, 103, // Opcode: S5_asrhub_rnd_sat
/* 6424 */    MCD::OPC_FilterValue, 5, 178, 53, // Skip to: 20174
/* 6428 */    MCD::OPC_CheckField, 12, 2, 0, 172, 53, // Skip to: 20174
/* 6434 */    MCD::OPC_Decode, 145, 13, 103, // Opcode: S5_asrhub_sat
/* 6438 */    MCD::OPC_FilterValue, 4, 43, 0, // Skip to: 6485
/* 6442 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6445 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6453
/* 6449 */    MCD::OPC_Decode, 243, 11, 101, // Opcode: S2_vtrunohb
/* 6453 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6461
/* 6457 */    MCD::OPC_Decode, 145, 3, 101, // Opcode: F2_conv_df2w
/* 6461 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6469
/* 6465 */    MCD::OPC_Decode, 241, 11, 101, // Opcode: S2_vtrunehb
/* 6469 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6477
/* 6473 */    MCD::OPC_Decode, 225, 11, 101, // Opcode: S2_vrndpackwh
/* 6477 */    MCD::OPC_FilterValue, 6, 125, 53, // Skip to: 20174
/* 6481 */    MCD::OPC_Decode, 226, 11, 101, // Opcode: S2_vrndpackwhs
/* 6485 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6499
/* 6489 */    MCD::OPC_CheckField, 5, 3, 1, 111, 53, // Skip to: 20174
/* 6495 */    MCD::OPC_Decode, 144, 3, 101, // Opcode: F2_conv_df2uw_chop
/* 6499 */    MCD::OPC_FilterValue, 6, 45, 0, // Skip to: 6548
/* 6503 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6506 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 6513
/* 6510 */    MCD::OPC_Decode, 98, 101, // Opcode: A2_sat
/* 6513 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 6520
/* 6517 */    MCD::OPC_Decode, 97, 101, // Opcode: A2_roundsat
/* 6520 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6534
/* 6524 */    MCD::OPC_CheckField, 13, 1, 0, 76, 53, // Skip to: 20174
/* 6530 */    MCD::OPC_Decode, 246, 9, 104, // Opcode: S2_asr_i_svw_trun
/* 6534 */    MCD::OPC_FilterValue, 4, 68, 53, // Skip to: 20174
/* 6538 */    MCD::OPC_CheckField, 13, 1, 0, 62, 53, // Skip to: 20174
/* 6544 */    MCD::OPC_Decode, 217, 1, 105, // Opcode: A4_bitspliti
/* 6548 */    MCD::OPC_FilterValue, 7, 54, 53, // Skip to: 20174
/* 6552 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6555 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6563
/* 6559 */    MCD::OPC_Decode, 146, 3, 101, // Opcode: F2_conv_df2w_chop
/* 6563 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6571
/* 6567 */    MCD::OPC_Decode, 149, 10, 101, // Opcode: S2_ct0p
/* 6571 */    MCD::OPC_FilterValue, 4, 31, 53, // Skip to: 20174
/* 6575 */    MCD::OPC_Decode, 151, 10, 101, // Opcode: S2_ct1p
/* 6579 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 6608
/* 6583 */    MCD::OPC_ExtractField, 22, 1,  // Inst{22} ...
/* 6586 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6600
/* 6590 */    MCD::OPC_CheckField, 21, 1, 0, 10, 53, // Skip to: 20174
/* 6596 */    MCD::OPC_Decode, 215, 2, 106, // Opcode: C2_vitpack
/* 6600 */    MCD::OPC_FilterValue, 1, 2, 53, // Skip to: 20174
/* 6604 */    MCD::OPC_Decode, 213, 2, 107, // Opcode: C2_tfrpr
/* 6608 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6616
/* 6612 */    MCD::OPC_Decode, 129, 12, 92, // Opcode: S4_extractp
/* 6616 */    MCD::OPC_FilterValue, 11, 105, 0, // Skip to: 6725
/* 6620 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6623 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6637
/* 6627 */    MCD::OPC_CheckField, 5, 3, 0, 229, 52, // Skip to: 20174
/* 6633 */    MCD::OPC_Decode, 159, 3, 69, // Opcode: F2_conv_uw2sf
/* 6637 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6651
/* 6641 */    MCD::OPC_CheckField, 5, 3, 0, 215, 52, // Skip to: 20174
/* 6647 */    MCD::OPC_Decode, 161, 3, 69, // Opcode: F2_conv_w2sf
/* 6651 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6674
/* 6655 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6658 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6666
/* 6662 */    MCD::OPC_Decode, 152, 3, 69, // Opcode: F2_conv_sf2uw
/* 6666 */    MCD::OPC_FilterValue, 1, 192, 52, // Skip to: 20174
/* 6670 */    MCD::OPC_Decode, 153, 3, 69, // Opcode: F2_conv_sf2uw_chop
/* 6674 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 6697
/* 6678 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6681 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6689
/* 6685 */    MCD::OPC_Decode, 154, 3, 69, // Opcode: F2_conv_sf2w
/* 6689 */    MCD::OPC_FilterValue, 1, 169, 52, // Skip to: 20174
/* 6693 */    MCD::OPC_Decode, 155, 3, 69, // Opcode: F2_conv_sf2w_chop
/* 6697 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6711
/* 6701 */    MCD::OPC_CheckField, 5, 3, 0, 155, 52, // Skip to: 20174
/* 6707 */    MCD::OPC_Decode, 177, 3, 69, // Opcode: F2_sffixupr
/* 6711 */    MCD::OPC_FilterValue, 7, 147, 52, // Skip to: 20174
/* 6715 */    MCD::OPC_CheckField, 7, 1, 0, 141, 52, // Skip to: 20174
/* 6721 */    MCD::OPC_Decode, 185, 3, 108, // Opcode: F2_sfinvsqrta
/* 6725 */    MCD::OPC_FilterValue, 12, 95, 1, // Skip to: 7080
/* 6729 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 6732 */    MCD::OPC_FilterValue, 0, 75, 0, // Skip to: 6811
/* 6736 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6739 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6753
/* 6743 */    MCD::OPC_CheckField, 13, 1, 0, 113, 52, // Skip to: 20174
/* 6749 */    MCD::OPC_Decode, 239, 9, 109, // Opcode: S2_asr_i_r
/* 6753 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6761
/* 6757 */    MCD::OPC_Decode, 252, 11, 110, // Opcode: S4_clbaddi
/* 6761 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6775
/* 6765 */    MCD::OPC_CheckField, 13, 1, 0, 91, 52, // Skip to: 20174
/* 6771 */    MCD::OPC_Decode, 244, 9, 109, // Opcode: S2_asr_i_r_rnd
/* 6775 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6783
/* 6779 */    MCD::OPC_Decode, 206, 11, 69, // Opcode: S2_svsathb
/* 6783 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 6797
/* 6787 */    MCD::OPC_CheckField, 13, 1, 0, 69, 52, // Skip to: 20174
/* 6793 */    MCD::OPC_Decode, 253, 10, 109, // Opcode: S2_setbit_i
/* 6797 */    MCD::OPC_FilterValue, 7, 61, 52, // Skip to: 20174
/* 6801 */    MCD::OPC_CheckField, 13, 1, 0, 55, 52, // Skip to: 20174
/* 6807 */    MCD::OPC_Decode, 236, 1, 109, // Opcode: A4_cround_ri
/* 6811 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 6846
/* 6815 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6818 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6832
/* 6822 */    MCD::OPC_CheckField, 13, 1, 0, 34, 52, // Skip to: 20174
/* 6828 */    MCD::OPC_Decode, 182, 10, 109, // Opcode: S2_lsr_i_r
/* 6832 */    MCD::OPC_FilterValue, 6, 26, 52, // Skip to: 20174
/* 6836 */    MCD::OPC_CheckField, 13, 1, 0, 20, 52, // Skip to: 20174
/* 6842 */    MCD::OPC_Decode, 146, 10, 109, // Opcode: S2_clrbit_i
/* 6846 */    MCD::OPC_FilterValue, 2, 53, 0, // Skip to: 6903
/* 6850 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6853 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6867
/* 6857 */    MCD::OPC_CheckField, 13, 1, 0, 255, 51, // Skip to: 20174
/* 6863 */    MCD::OPC_Decode, 209, 9, 109, // Opcode: S2_asl_i_r
/* 6867 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6881
/* 6871 */    MCD::OPC_CheckField, 13, 1, 0, 241, 51, // Skip to: 20174
/* 6877 */    MCD::OPC_Decode, 214, 9, 109, // Opcode: S2_asl_i_r_sat
/* 6881 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6889
/* 6885 */    MCD::OPC_Decode, 207, 11, 69, // Opcode: S2_svsathub
/* 6889 */    MCD::OPC_FilterValue, 6, 225, 51, // Skip to: 20174
/* 6893 */    MCD::OPC_CheckField, 13, 1, 0, 219, 51, // Skip to: 20174
/* 6899 */    MCD::OPC_Decode, 216, 11, 109, // Opcode: S2_togglebit_i
/* 6903 */    MCD::OPC_FilterValue, 4, 47, 0, // Skip to: 6954
/* 6907 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6910 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6918
/* 6914 */    MCD::OPC_Decode, 143, 10, 69, // Opcode: S2_clb
/* 6918 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6926
/* 6922 */    MCD::OPC_Decode, 148, 10, 69, // Opcode: S2_ct0
/* 6926 */    MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 6933
/* 6930 */    MCD::OPC_Decode, 23, 69, // Opcode: A2_abs
/* 6933 */    MCD::OPC_FilterValue, 6, 3, 0, // Skip to: 6940
/* 6937 */    MCD::OPC_Decode, 100, 69, // Opcode: A2_sath
/* 6940 */    MCD::OPC_FilterValue, 7, 174, 51, // Skip to: 20174
/* 6944 */    MCD::OPC_CheckField, 13, 1, 0, 168, 51, // Skip to: 20174
/* 6950 */    MCD::OPC_Decode, 145, 2, 109, // Opcode: A4_round_ri
/* 6954 */    MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 6991
/* 6958 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6961 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6969
/* 6965 */    MCD::OPC_Decode, 139, 10, 69, // Opcode: S2_cl0
/* 6969 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6977
/* 6973 */    MCD::OPC_Decode, 150, 10, 69, // Opcode: S2_ct1
/* 6977 */    MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 6984
/* 6981 */    MCD::OPC_Decode, 25, 69, // Opcode: A2_abssat
/* 6984 */    MCD::OPC_FilterValue, 6, 130, 51, // Skip to: 20174
/* 6988 */    MCD::OPC_Decode, 102, 69, // Opcode: A2_satuh
/* 6991 */    MCD::OPC_FilterValue, 6, 47, 0, // Skip to: 7042
/* 6995 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6998 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7006
/* 7002 */    MCD::OPC_Decode, 141, 10, 69, // Opcode: S2_cl1
/* 7006 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7014
/* 7010 */    MCD::OPC_Decode, 136, 10, 69, // Opcode: S2_brev
/* 7014 */    MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 7021
/* 7018 */    MCD::OPC_Decode, 66, 69, // Opcode: A2_negsat
/* 7021 */    MCD::OPC_FilterValue, 6, 3, 0, // Skip to: 7028
/* 7025 */    MCD::OPC_Decode, 101, 69, // Opcode: A2_satub
/* 7028 */    MCD::OPC_FilterValue, 7, 86, 51, // Skip to: 20174
/* 7032 */    MCD::OPC_CheckField, 13, 1, 0, 80, 51, // Skip to: 20174
/* 7038 */    MCD::OPC_Decode, 146, 2, 109, // Opcode: A4_round_ri_sat
/* 7042 */    MCD::OPC_FilterValue, 7, 72, 51, // Skip to: 20174
/* 7046 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 7049 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7057
/* 7053 */    MCD::OPC_Decode, 144, 10, 69, // Opcode: S2_clbnorm
/* 7057 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7065
/* 7061 */    MCD::OPC_Decode, 235, 11, 69, // Opcode: S2_vsplatrb
/* 7065 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7073
/* 7069 */    MCD::OPC_Decode, 128, 1, 69, // Opcode: A2_swiz
/* 7073 */    MCD::OPC_FilterValue, 6, 41, 51, // Skip to: 20174
/* 7077 */    MCD::OPC_Decode, 99, 69, // Opcode: A2_satb
/* 7080 */    MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 7115
/* 7084 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 7087 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7101
/* 7091 */    MCD::OPC_CheckField, 13, 1, 0, 21, 51, // Skip to: 20174
/* 7097 */    MCD::OPC_Decode, 153, 10, 111, // Opcode: S2_extractu
/* 7101 */    MCD::OPC_FilterValue, 1, 13, 51, // Skip to: 20174
/* 7105 */    MCD::OPC_CheckField, 13, 1, 0, 7, 51, // Skip to: 20174
/* 7111 */    MCD::OPC_Decode, 255, 11, 111, // Opcode: S4_extract
/* 7115 */    MCD::OPC_FilterValue, 14, 241, 0, // Skip to: 7360
/* 7119 */    MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 7122 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7157
/* 7126 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7129 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7143
/* 7133 */    MCD::OPC_CheckField, 13, 1, 0, 235, 50, // Skip to: 20174
/* 7139 */    MCD::OPC_Decode, 242, 9, 112, // Opcode: S2_asr_i_r_nac
/* 7143 */    MCD::OPC_FilterValue, 1, 227, 50, // Skip to: 20174
/* 7147 */    MCD::OPC_CheckField, 13, 1, 0, 221, 50, // Skip to: 20174
/* 7153 */    MCD::OPC_Decode, 241, 9, 112, // Opcode: S2_asr_i_r_and
/* 7157 */    MCD::OPC_FilterValue, 1, 45, 0, // Skip to: 7206
/* 7161 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7164 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7178
/* 7168 */    MCD::OPC_CheckField, 13, 1, 0, 200, 50, // Skip to: 20174
/* 7174 */    MCD::OPC_Decode, 185, 10, 112, // Opcode: S2_lsr_i_r_nac
/* 7178 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7192
/* 7182 */    MCD::OPC_CheckField, 13, 1, 0, 186, 50, // Skip to: 20174
/* 7188 */    MCD::OPC_Decode, 184, 10, 112, // Opcode: S2_lsr_i_r_and
/* 7192 */    MCD::OPC_FilterValue, 2, 178, 50, // Skip to: 20174
/* 7196 */    MCD::OPC_CheckField, 13, 1, 0, 172, 50, // Skip to: 20174
/* 7202 */    MCD::OPC_Decode, 187, 10, 112, // Opcode: S2_lsr_i_r_xacc
/* 7206 */    MCD::OPC_FilterValue, 2, 45, 0, // Skip to: 7255
/* 7210 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7213 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7227
/* 7217 */    MCD::OPC_CheckField, 13, 1, 0, 151, 50, // Skip to: 20174
/* 7223 */    MCD::OPC_Decode, 212, 9, 112, // Opcode: S2_asl_i_r_nac
/* 7227 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7241
/* 7231 */    MCD::OPC_CheckField, 13, 1, 0, 137, 50, // Skip to: 20174
/* 7237 */    MCD::OPC_Decode, 211, 9, 112, // Opcode: S2_asl_i_r_and
/* 7241 */    MCD::OPC_FilterValue, 2, 129, 50, // Skip to: 20174
/* 7245 */    MCD::OPC_CheckField, 13, 1, 0, 123, 50, // Skip to: 20174
/* 7251 */    MCD::OPC_Decode, 215, 9, 112, // Opcode: S2_asl_i_r_xacc
/* 7255 */    MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 7290
/* 7259 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7262 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7276
/* 7266 */    MCD::OPC_CheckField, 13, 1, 0, 102, 50, // Skip to: 20174
/* 7272 */    MCD::OPC_Decode, 240, 9, 112, // Opcode: S2_asr_i_r_acc
/* 7276 */    MCD::OPC_FilterValue, 1, 94, 50, // Skip to: 20174
/* 7280 */    MCD::OPC_CheckField, 13, 1, 0, 88, 50, // Skip to: 20174
/* 7286 */    MCD::OPC_Decode, 243, 9, 112, // Opcode: S2_asr_i_r_or
/* 7290 */    MCD::OPC_FilterValue, 5, 31, 0, // Skip to: 7325
/* 7294 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7297 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7311
/* 7301 */    MCD::OPC_CheckField, 13, 1, 0, 67, 50, // Skip to: 20174
/* 7307 */    MCD::OPC_Decode, 183, 10, 112, // Opcode: S2_lsr_i_r_acc
/* 7311 */    MCD::OPC_FilterValue, 1, 59, 50, // Skip to: 20174
/* 7315 */    MCD::OPC_CheckField, 13, 1, 0, 53, 50, // Skip to: 20174
/* 7321 */    MCD::OPC_Decode, 186, 10, 112, // Opcode: S2_lsr_i_r_or
/* 7325 */    MCD::OPC_FilterValue, 6, 45, 50, // Skip to: 20174
/* 7329 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 7332 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7346
/* 7336 */    MCD::OPC_CheckField, 13, 1, 0, 32, 50, // Skip to: 20174
/* 7342 */    MCD::OPC_Decode, 210, 9, 112, // Opcode: S2_asl_i_r_acc
/* 7346 */    MCD::OPC_FilterValue, 1, 24, 50, // Skip to: 20174
/* 7350 */    MCD::OPC_CheckField, 13, 1, 0, 18, 50, // Skip to: 20174
/* 7356 */    MCD::OPC_Decode, 213, 9, 112, // Opcode: S2_asl_i_r_or
/* 7360 */    MCD::OPC_FilterValue, 15, 10, 50, // Skip to: 20174
/* 7364 */    MCD::OPC_CheckField, 23, 1, 0, 4, 50, // Skip to: 20174
/* 7370 */    MCD::OPC_CheckField, 13, 1, 0, 254, 49, // Skip to: 20174
/* 7376 */    MCD::OPC_Decode, 157, 10, 113, // Opcode: S2_insert
/* 7380 */    MCD::OPC_FilterValue, 9, 144, 9, // Skip to: 9832
/* 7384 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 7387 */    MCD::OPC_FilterValue, 0, 225, 0, // Skip to: 7616
/* 7391 */    MCD::OPC_ExtractField, 25, 3,  // Inst{27-25} ...
/* 7394 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 7420
/* 7398 */    MCD::OPC_CheckField, 16, 5, 30, 226, 49, // Skip to: 20174
/* 7404 */    MCD::OPC_CheckField, 13, 1, 0, 220, 49, // Skip to: 20174
/* 7410 */    MCD::OPC_CheckField, 0, 5, 30, 214, 49, // Skip to: 20174
/* 7416 */    MCD::OPC_Decode, 252, 4, 87, // Opcode: L2_deallocframe
/* 7420 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 7455
/* 7424 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 7427 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7441
/* 7431 */    MCD::OPC_CheckField, 5, 1, 0, 193, 49, // Skip to: 20174
/* 7437 */    MCD::OPC_Decode, 215, 5, 69, // Opcode: L2_loadw_locked
/* 7441 */    MCD::OPC_FilterValue, 1, 185, 49, // Skip to: 20174
/* 7445 */    MCD::OPC_CheckField, 5, 1, 0, 179, 49, // Skip to: 20174
/* 7451 */    MCD::OPC_Decode, 166, 6, 95, // Opcode: L4_loadd_locked
/* 7455 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7469
/* 7459 */    MCD::OPC_CheckField, 13, 1, 0, 165, 49, // Skip to: 20174
/* 7465 */    MCD::OPC_Decode, 218, 13, 114, // Opcode: Y2_dcfetchbo
/* 7469 */    MCD::OPC_FilterValue, 3, 157, 49, // Skip to: 20174
/* 7473 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 7476 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7496
/* 7480 */    MCD::OPC_CheckField, 16, 5, 30, 144, 49, // Skip to: 20174
/* 7486 */    MCD::OPC_CheckField, 0, 5, 30, 138, 49, // Skip to: 20174
/* 7492 */    MCD::OPC_Decode, 242, 6, 87, // Opcode: L4_return
/* 7496 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7516
/* 7500 */    MCD::OPC_CheckField, 16, 5, 30, 124, 49, // Skip to: 20174
/* 7506 */    MCD::OPC_CheckField, 0, 5, 30, 118, 49, // Skip to: 20174
/* 7512 */    MCD::OPC_Decode, 247, 6, 115, // Opcode: L4_return_tnew_pnt
/* 7516 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 7536
/* 7520 */    MCD::OPC_CheckField, 16, 5, 30, 104, 49, // Skip to: 20174
/* 7526 */    MCD::OPC_CheckField, 0, 5, 30, 98, 49, // Skip to: 20174
/* 7532 */    MCD::OPC_Decode, 246, 6, 115, // Opcode: L4_return_t
/* 7536 */    MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 7556
/* 7540 */    MCD::OPC_CheckField, 16, 5, 30, 84, 49, // Skip to: 20174
/* 7546 */    MCD::OPC_CheckField, 0, 5, 30, 78, 49, // Skip to: 20174
/* 7552 */    MCD::OPC_Decode, 248, 6, 115, // Opcode: L4_return_tnew_pt
/* 7556 */    MCD::OPC_FilterValue, 10, 16, 0, // Skip to: 7576
/* 7560 */    MCD::OPC_CheckField, 16, 5, 30, 64, 49, // Skip to: 20174
/* 7566 */    MCD::OPC_CheckField, 0, 5, 30, 58, 49, // Skip to: 20174
/* 7572 */    MCD::OPC_Decode, 244, 6, 115, // Opcode: L4_return_fnew_pnt
/* 7576 */    MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 7596
/* 7580 */    MCD::OPC_CheckField, 16, 5, 30, 44, 49, // Skip to: 20174
/* 7586 */    MCD::OPC_CheckField, 0, 5, 30, 38, 49, // Skip to: 20174
/* 7592 */    MCD::OPC_Decode, 243, 6, 115, // Opcode: L4_return_f
/* 7596 */    MCD::OPC_FilterValue, 14, 30, 49, // Skip to: 20174
/* 7600 */    MCD::OPC_CheckField, 16, 5, 30, 24, 49, // Skip to: 20174
/* 7606 */    MCD::OPC_CheckField, 0, 5, 30, 18, 49, // Skip to: 20174
/* 7612 */    MCD::OPC_Decode, 245, 6, 115, // Opcode: L4_return_fnew_pt
/* 7616 */    MCD::OPC_FilterValue, 1, 131, 0, // Skip to: 7751
/* 7620 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 7623 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7631
/* 7627 */    MCD::OPC_Decode, 137, 5, 116, // Opcode: L2_loadbsw2_io
/* 7631 */    MCD::OPC_FilterValue, 1, 251, 48, // Skip to: 20174
/* 7635 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 7638 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 7679
/* 7642 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 7645 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7659
/* 7649 */    MCD::OPC_CheckField, 12, 1, 0, 231, 48, // Skip to: 20174
/* 7655 */    MCD::OPC_Decode, 139, 5, 117, // Opcode: L2_loadbsw2_pci
/* 7659 */    MCD::OPC_FilterValue, 1, 223, 48, // Skip to: 20174
/* 7663 */    MCD::OPC_CheckField, 12, 1, 0, 217, 48, // Skip to: 20174
/* 7669 */    MCD::OPC_CheckField, 7, 1, 0, 211, 48, // Skip to: 20174
/* 7675 */    MCD::OPC_Decode, 140, 5, 118, // Opcode: L2_loadbsw2_pcr
/* 7679 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7702
/* 7683 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 7686 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7694
/* 7690 */    MCD::OPC_Decode, 141, 5, 119, // Opcode: L2_loadbsw2_pi
/* 7694 */    MCD::OPC_FilterValue, 1, 188, 48, // Skip to: 20174
/* 7698 */    MCD::OPC_Decode, 158, 6, 120, // Opcode: L4_loadbsw2_ap
/* 7702 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 7731
/* 7706 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 7709 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7723
/* 7713 */    MCD::OPC_CheckField, 7, 1, 0, 167, 48, // Skip to: 20174
/* 7719 */    MCD::OPC_Decode, 142, 5, 118, // Opcode: L2_loadbsw2_pr
/* 7723 */    MCD::OPC_FilterValue, 1, 159, 48, // Skip to: 20174
/* 7727 */    MCD::OPC_Decode, 159, 6, 121, // Opcode: L4_loadbsw2_ur
/* 7731 */    MCD::OPC_FilterValue, 3, 151, 48, // Skip to: 20174
/* 7735 */    MCD::OPC_CheckField, 12, 1, 0, 145, 48, // Skip to: 20174
/* 7741 */    MCD::OPC_CheckField, 7, 1, 0, 139, 48, // Skip to: 20174
/* 7747 */    MCD::OPC_Decode, 138, 5, 118, // Opcode: L2_loadbsw2_pbr
/* 7751 */    MCD::OPC_FilterValue, 2, 132, 0, // Skip to: 7887
/* 7755 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 7758 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7766
/* 7762 */    MCD::OPC_Decode, 131, 5, 122, // Opcode: L2_loadalignh_io
/* 7766 */    MCD::OPC_FilterValue, 1, 116, 48, // Skip to: 20174
/* 7770 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 7773 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 7814
/* 7777 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 7780 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7794
/* 7784 */    MCD::OPC_CheckField, 12, 1, 0, 96, 48, // Skip to: 20174
/* 7790 */    MCD::OPC_Decode, 133, 5, 123, // Opcode: L2_loadalignh_pci
/* 7794 */    MCD::OPC_FilterValue, 1, 88, 48, // Skip to: 20174
/* 7798 */    MCD::OPC_CheckField, 12, 1, 0, 82, 48, // Skip to: 20174
/* 7804 */    MCD::OPC_CheckField, 7, 1, 0, 76, 48, // Skip to: 20174
/* 7810 */    MCD::OPC_Decode, 134, 5, 124, // Opcode: L2_loadalignh_pcr
/* 7814 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7837
/* 7818 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 7821 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7829
/* 7825 */    MCD::OPC_Decode, 135, 5, 125, // Opcode: L2_loadalignh_pi
/* 7829 */    MCD::OPC_FilterValue, 1, 53, 48, // Skip to: 20174
/* 7833 */    MCD::OPC_Decode, 156, 6, 126, // Opcode: L4_loadalignh_ap
/* 7837 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 7866
/* 7841 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 7844 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7858
/* 7848 */    MCD::OPC_CheckField, 7, 1, 0, 32, 48, // Skip to: 20174
/* 7854 */    MCD::OPC_Decode, 136, 5, 124, // Opcode: L2_loadalignh_pr
/* 7858 */    MCD::OPC_FilterValue, 1, 24, 48, // Skip to: 20174
/* 7862 */    MCD::OPC_Decode, 157, 6, 127, // Opcode: L4_loadalignh_ur
/* 7866 */    MCD::OPC_FilterValue, 3, 16, 48, // Skip to: 20174
/* 7870 */    MCD::OPC_CheckField, 12, 1, 0, 10, 48, // Skip to: 20174
/* 7876 */    MCD::OPC_CheckField, 7, 1, 0, 4, 48, // Skip to: 20174
/* 7882 */    MCD::OPC_Decode, 132, 5, 128, 1, // Opcode: L2_loadalignh_pbr
/* 7887 */    MCD::OPC_FilterValue, 3, 131, 0, // Skip to: 8022
/* 7891 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 7894 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7902
/* 7898 */    MCD::OPC_Decode, 149, 5, 116, // Opcode: L2_loadbzw2_io
/* 7902 */    MCD::OPC_FilterValue, 1, 236, 47, // Skip to: 20174
/* 7906 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 7909 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 7950
/* 7913 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 7916 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7930
/* 7920 */    MCD::OPC_CheckField, 12, 1, 0, 216, 47, // Skip to: 20174
/* 7926 */    MCD::OPC_Decode, 151, 5, 117, // Opcode: L2_loadbzw2_pci
/* 7930 */    MCD::OPC_FilterValue, 1, 208, 47, // Skip to: 20174
/* 7934 */    MCD::OPC_CheckField, 12, 1, 0, 202, 47, // Skip to: 20174
/* 7940 */    MCD::OPC_CheckField, 7, 1, 0, 196, 47, // Skip to: 20174
/* 7946 */    MCD::OPC_Decode, 152, 5, 118, // Opcode: L2_loadbzw2_pcr
/* 7950 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7973
/* 7954 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 7957 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7965
/* 7961 */    MCD::OPC_Decode, 153, 5, 119, // Opcode: L2_loadbzw2_pi
/* 7965 */    MCD::OPC_FilterValue, 1, 173, 47, // Skip to: 20174
/* 7969 */    MCD::OPC_Decode, 162, 6, 120, // Opcode: L4_loadbzw2_ap
/* 7973 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 8002
/* 7977 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 7980 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7994
/* 7984 */    MCD::OPC_CheckField, 7, 1, 0, 152, 47, // Skip to: 20174
/* 7990 */    MCD::OPC_Decode, 154, 5, 118, // Opcode: L2_loadbzw2_pr
/* 7994 */    MCD::OPC_FilterValue, 1, 144, 47, // Skip to: 20174
/* 7998 */    MCD::OPC_Decode, 163, 6, 121, // Opcode: L4_loadbzw2_ur
/* 8002 */    MCD::OPC_FilterValue, 3, 136, 47, // Skip to: 20174
/* 8006 */    MCD::OPC_CheckField, 12, 1, 0, 130, 47, // Skip to: 20174
/* 8012 */    MCD::OPC_CheckField, 7, 1, 0, 124, 47, // Skip to: 20174
/* 8018 */    MCD::OPC_Decode, 150, 5, 118, // Opcode: L2_loadbzw2_pbr
/* 8022 */    MCD::OPC_FilterValue, 4, 135, 0, // Skip to: 8161
/* 8026 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8029 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8038
/* 8033 */    MCD::OPC_Decode, 253, 4, 129, 1, // Opcode: L2_loadalignb_io
/* 8038 */    MCD::OPC_FilterValue, 1, 100, 47, // Skip to: 20174
/* 8042 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8045 */    MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 8087
/* 8049 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8052 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8067
/* 8056 */    MCD::OPC_CheckField, 12, 1, 0, 80, 47, // Skip to: 20174
/* 8062 */    MCD::OPC_Decode, 255, 4, 130, 1, // Opcode: L2_loadalignb_pci
/* 8067 */    MCD::OPC_FilterValue, 1, 71, 47, // Skip to: 20174
/* 8071 */    MCD::OPC_CheckField, 12, 1, 0, 65, 47, // Skip to: 20174
/* 8077 */    MCD::OPC_CheckField, 7, 1, 0, 59, 47, // Skip to: 20174
/* 8083 */    MCD::OPC_Decode, 128, 5, 124, // Opcode: L2_loadalignb_pcr
/* 8087 */    MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 8111
/* 8091 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8094 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8103
/* 8098 */    MCD::OPC_Decode, 129, 5, 131, 1, // Opcode: L2_loadalignb_pi
/* 8103 */    MCD::OPC_FilterValue, 1, 35, 47, // Skip to: 20174
/* 8107 */    MCD::OPC_Decode, 154, 6, 126, // Opcode: L4_loadalignb_ap
/* 8111 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 8140
/* 8115 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 8118 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8132
/* 8122 */    MCD::OPC_CheckField, 7, 1, 0, 14, 47, // Skip to: 20174
/* 8128 */    MCD::OPC_Decode, 130, 5, 124, // Opcode: L2_loadalignb_pr
/* 8132 */    MCD::OPC_FilterValue, 1, 6, 47, // Skip to: 20174
/* 8136 */    MCD::OPC_Decode, 155, 6, 127, // Opcode: L4_loadalignb_ur
/* 8140 */    MCD::OPC_FilterValue, 3, 254, 46, // Skip to: 20174
/* 8144 */    MCD::OPC_CheckField, 12, 1, 0, 248, 46, // Skip to: 20174
/* 8150 */    MCD::OPC_CheckField, 7, 1, 0, 242, 46, // Skip to: 20174
/* 8156 */    MCD::OPC_Decode, 254, 4, 128, 1, // Opcode: L2_loadalignb_pbr
/* 8161 */    MCD::OPC_FilterValue, 5, 137, 0, // Skip to: 8302
/* 8165 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8168 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8177
/* 8172 */    MCD::OPC_Decode, 155, 5, 132, 1, // Opcode: L2_loadbzw4_io
/* 8177 */    MCD::OPC_FilterValue, 1, 217, 46, // Skip to: 20174
/* 8181 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8184 */    MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 8227
/* 8188 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8191 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8206
/* 8195 */    MCD::OPC_CheckField, 12, 1, 0, 197, 46, // Skip to: 20174
/* 8201 */    MCD::OPC_Decode, 157, 5, 133, 1, // Opcode: L2_loadbzw4_pci
/* 8206 */    MCD::OPC_FilterValue, 1, 188, 46, // Skip to: 20174
/* 8210 */    MCD::OPC_CheckField, 12, 1, 0, 182, 46, // Skip to: 20174
/* 8216 */    MCD::OPC_CheckField, 7, 1, 0, 176, 46, // Skip to: 20174
/* 8222 */    MCD::OPC_Decode, 158, 5, 128, 1, // Opcode: L2_loadbzw4_pcr
/* 8227 */    MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 8251
/* 8231 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8234 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8243
/* 8238 */    MCD::OPC_Decode, 159, 5, 134, 1, // Opcode: L2_loadbzw4_pi
/* 8243 */    MCD::OPC_FilterValue, 1, 151, 46, // Skip to: 20174
/* 8247 */    MCD::OPC_Decode, 164, 6, 126, // Opcode: L4_loadbzw4_ap
/* 8251 */    MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 8281
/* 8255 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 8258 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8273
/* 8262 */    MCD::OPC_CheckField, 7, 1, 0, 130, 46, // Skip to: 20174
/* 8268 */    MCD::OPC_Decode, 160, 5, 128, 1, // Opcode: L2_loadbzw4_pr
/* 8273 */    MCD::OPC_FilterValue, 1, 121, 46, // Skip to: 20174
/* 8277 */    MCD::OPC_Decode, 165, 6, 127, // Opcode: L4_loadbzw4_ur
/* 8281 */    MCD::OPC_FilterValue, 3, 113, 46, // Skip to: 20174
/* 8285 */    MCD::OPC_CheckField, 12, 1, 0, 107, 46, // Skip to: 20174
/* 8291 */    MCD::OPC_CheckField, 7, 1, 0, 101, 46, // Skip to: 20174
/* 8297 */    MCD::OPC_Decode, 156, 5, 128, 1, // Opcode: L2_loadbzw4_pbr
/* 8302 */    MCD::OPC_FilterValue, 7, 137, 0, // Skip to: 8443
/* 8306 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8309 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8318
/* 8313 */    MCD::OPC_Decode, 143, 5, 132, 1, // Opcode: L2_loadbsw4_io
/* 8318 */    MCD::OPC_FilterValue, 1, 76, 46, // Skip to: 20174
/* 8322 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8325 */    MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 8368
/* 8329 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8332 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8347
/* 8336 */    MCD::OPC_CheckField, 12, 1, 0, 56, 46, // Skip to: 20174
/* 8342 */    MCD::OPC_Decode, 145, 5, 133, 1, // Opcode: L2_loadbsw4_pci
/* 8347 */    MCD::OPC_FilterValue, 1, 47, 46, // Skip to: 20174
/* 8351 */    MCD::OPC_CheckField, 12, 1, 0, 41, 46, // Skip to: 20174
/* 8357 */    MCD::OPC_CheckField, 7, 1, 0, 35, 46, // Skip to: 20174
/* 8363 */    MCD::OPC_Decode, 146, 5, 128, 1, // Opcode: L2_loadbsw4_pcr
/* 8368 */    MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 8392
/* 8372 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8375 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8384
/* 8379 */    MCD::OPC_Decode, 147, 5, 134, 1, // Opcode: L2_loadbsw4_pi
/* 8384 */    MCD::OPC_FilterValue, 1, 10, 46, // Skip to: 20174
/* 8388 */    MCD::OPC_Decode, 160, 6, 126, // Opcode: L4_loadbsw4_ap
/* 8392 */    MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 8422
/* 8396 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 8399 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8414
/* 8403 */    MCD::OPC_CheckField, 7, 1, 0, 245, 45, // Skip to: 20174
/* 8409 */    MCD::OPC_Decode, 148, 5, 128, 1, // Opcode: L2_loadbsw4_pr
/* 8414 */    MCD::OPC_FilterValue, 1, 236, 45, // Skip to: 20174
/* 8418 */    MCD::OPC_Decode, 161, 6, 127, // Opcode: L4_loadbsw4_ur
/* 8422 */    MCD::OPC_FilterValue, 3, 228, 45, // Skip to: 20174
/* 8426 */    MCD::OPC_CheckField, 12, 1, 0, 222, 45, // Skip to: 20174
/* 8432 */    MCD::OPC_CheckField, 7, 1, 0, 216, 45, // Skip to: 20174
/* 8438 */    MCD::OPC_Decode, 144, 5, 128, 1, // Opcode: L2_loadbsw4_pbr
/* 8443 */    MCD::OPC_FilterValue, 8, 228, 0, // Skip to: 8675
/* 8447 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8450 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8459
/* 8454 */    MCD::OPC_Decode, 161, 5, 135, 1, // Opcode: L2_loadrb_io
/* 8459 */    MCD::OPC_FilterValue, 1, 191, 45, // Skip to: 20174
/* 8463 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8466 */    MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 8508
/* 8470 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8473 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8488
/* 8477 */    MCD::OPC_CheckField, 12, 1, 0, 171, 45, // Skip to: 20174
/* 8483 */    MCD::OPC_Decode, 164, 5, 136, 1, // Opcode: L2_loadrb_pci
/* 8488 */    MCD::OPC_FilterValue, 1, 162, 45, // Skip to: 20174
/* 8492 */    MCD::OPC_CheckField, 12, 1, 0, 156, 45, // Skip to: 20174
/* 8498 */    MCD::OPC_CheckField, 7, 1, 0, 150, 45, // Skip to: 20174
/* 8504 */    MCD::OPC_Decode, 166, 5, 118, // Opcode: L2_loadrb_pcr
/* 8508 */    MCD::OPC_FilterValue, 1, 70, 0, // Skip to: 8582
/* 8512 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8515 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8524
/* 8519 */    MCD::OPC_Decode, 167, 5, 137, 1, // Opcode: L2_loadrb_pi
/* 8524 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8532
/* 8528 */    MCD::OPC_Decode, 168, 6, 120, // Opcode: L4_loadrb_ap
/* 8532 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 8557
/* 8536 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 8539 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8548
/* 8543 */    MCD::OPC_Decode, 221, 5, 138, 1, // Opcode: L2_ploadrbt_pi
/* 8548 */    MCD::OPC_FilterValue, 1, 102, 45, // Skip to: 20174
/* 8552 */    MCD::OPC_Decode, 217, 5, 138, 1, // Opcode: L2_ploadrbf_pi
/* 8557 */    MCD::OPC_FilterValue, 3, 93, 45, // Skip to: 20174
/* 8561 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 8564 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8573
/* 8568 */    MCD::OPC_Decode, 223, 5, 138, 1, // Opcode: L2_ploadrbtnew_pi
/* 8573 */    MCD::OPC_FilterValue, 1, 77, 45, // Skip to: 20174
/* 8577 */    MCD::OPC_Decode, 219, 5, 138, 1, // Opcode: L2_ploadrbfnew_pi
/* 8582 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 8611
/* 8586 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 8589 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8603
/* 8593 */    MCD::OPC_CheckField, 7, 1, 0, 55, 45, // Skip to: 20174
/* 8599 */    MCD::OPC_Decode, 168, 5, 118, // Opcode: L2_loadrb_pr
/* 8603 */    MCD::OPC_FilterValue, 1, 47, 45, // Skip to: 20174
/* 8607 */    MCD::OPC_Decode, 170, 6, 121, // Opcode: L4_loadrb_ur
/* 8611 */    MCD::OPC_FilterValue, 3, 39, 45, // Skip to: 20174
/* 8615 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 8618 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8632
/* 8622 */    MCD::OPC_CheckField, 12, 1, 0, 26, 45, // Skip to: 20174
/* 8628 */    MCD::OPC_Decode, 162, 5, 118, // Opcode: L2_loadrb_pbr
/* 8632 */    MCD::OPC_FilterValue, 1, 18, 45, // Skip to: 20174
/* 8636 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 8639 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 8648
/* 8643 */    MCD::OPC_Decode, 198, 6, 139, 1, // Opcode: L4_ploadrbt_abs
/* 8648 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 8657
/* 8652 */    MCD::OPC_Decode, 194, 6, 139, 1, // Opcode: L4_ploadrbf_abs
/* 8657 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 8666
/* 8661 */    MCD::OPC_Decode, 200, 6, 139, 1, // Opcode: L4_ploadrbtnew_abs
/* 8666 */    MCD::OPC_FilterValue, 7, 240, 44, // Skip to: 20174
/* 8670 */    MCD::OPC_Decode, 196, 6, 139, 1, // Opcode: L4_ploadrbfnew_abs
/* 8675 */    MCD::OPC_FilterValue, 9, 228, 0, // Skip to: 8907
/* 8679 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8682 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8691
/* 8686 */    MCD::OPC_Decode, 197, 5, 135, 1, // Opcode: L2_loadrub_io
/* 8691 */    MCD::OPC_FilterValue, 1, 215, 44, // Skip to: 20174
/* 8695 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8698 */    MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 8740
/* 8702 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8705 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8720
/* 8709 */    MCD::OPC_CheckField, 12, 1, 0, 195, 44, // Skip to: 20174
/* 8715 */    MCD::OPC_Decode, 200, 5, 136, 1, // Opcode: L2_loadrub_pci
/* 8720 */    MCD::OPC_FilterValue, 1, 186, 44, // Skip to: 20174
/* 8724 */    MCD::OPC_CheckField, 12, 1, 0, 180, 44, // Skip to: 20174
/* 8730 */    MCD::OPC_CheckField, 7, 1, 0, 174, 44, // Skip to: 20174
/* 8736 */    MCD::OPC_Decode, 202, 5, 118, // Opcode: L2_loadrub_pcr
/* 8740 */    MCD::OPC_FilterValue, 1, 70, 0, // Skip to: 8814
/* 8744 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8747 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8756
/* 8751 */    MCD::OPC_Decode, 203, 5, 137, 1, // Opcode: L2_loadrub_pi
/* 8756 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8764
/* 8760 */    MCD::OPC_Decode, 184, 6, 120, // Opcode: L4_loadrub_ap
/* 8764 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 8789
/* 8768 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 8771 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8780
/* 8775 */    MCD::OPC_Decode, 253, 5, 138, 1, // Opcode: L2_ploadrubt_pi
/* 8780 */    MCD::OPC_FilterValue, 1, 126, 44, // Skip to: 20174
/* 8784 */    MCD::OPC_Decode, 249, 5, 138, 1, // Opcode: L2_ploadrubf_pi
/* 8789 */    MCD::OPC_FilterValue, 3, 117, 44, // Skip to: 20174
/* 8793 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 8796 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8805
/* 8800 */    MCD::OPC_Decode, 255, 5, 138, 1, // Opcode: L2_ploadrubtnew_pi
/* 8805 */    MCD::OPC_FilterValue, 1, 101, 44, // Skip to: 20174
/* 8809 */    MCD::OPC_Decode, 251, 5, 138, 1, // Opcode: L2_ploadrubfnew_pi
/* 8814 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 8843
/* 8818 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 8821 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8835
/* 8825 */    MCD::OPC_CheckField, 7, 1, 0, 79, 44, // Skip to: 20174
/* 8831 */    MCD::OPC_Decode, 204, 5, 118, // Opcode: L2_loadrub_pr
/* 8835 */    MCD::OPC_FilterValue, 1, 71, 44, // Skip to: 20174
/* 8839 */    MCD::OPC_Decode, 186, 6, 121, // Opcode: L4_loadrub_ur
/* 8843 */    MCD::OPC_FilterValue, 3, 63, 44, // Skip to: 20174
/* 8847 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 8850 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8864
/* 8854 */    MCD::OPC_CheckField, 12, 1, 0, 50, 44, // Skip to: 20174
/* 8860 */    MCD::OPC_Decode, 198, 5, 118, // Opcode: L2_loadrub_pbr
/* 8864 */    MCD::OPC_FilterValue, 1, 42, 44, // Skip to: 20174
/* 8868 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 8871 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 8880
/* 8875 */    MCD::OPC_Decode, 230, 6, 139, 1, // Opcode: L4_ploadrubt_abs
/* 8880 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 8889
/* 8884 */    MCD::OPC_Decode, 226, 6, 139, 1, // Opcode: L4_ploadrubf_abs
/* 8889 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 8898
/* 8893 */    MCD::OPC_Decode, 232, 6, 139, 1, // Opcode: L4_ploadrubtnew_abs
/* 8898 */    MCD::OPC_FilterValue, 7, 8, 44, // Skip to: 20174
/* 8902 */    MCD::OPC_Decode, 228, 6, 139, 1, // Opcode: L4_ploadrubfnew_abs
/* 8907 */    MCD::OPC_FilterValue, 10, 225, 0, // Skip to: 9136
/* 8911 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 8914 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8922
/* 8918 */    MCD::OPC_Decode, 179, 5, 116, // Opcode: L2_loadrh_io
/* 8922 */    MCD::OPC_FilterValue, 1, 240, 43, // Skip to: 20174
/* 8926 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 8929 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 8970
/* 8933 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 8936 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8950
/* 8940 */    MCD::OPC_CheckField, 12, 1, 0, 220, 43, // Skip to: 20174
/* 8946 */    MCD::OPC_Decode, 182, 5, 117, // Opcode: L2_loadrh_pci
/* 8950 */    MCD::OPC_FilterValue, 1, 212, 43, // Skip to: 20174
/* 8954 */    MCD::OPC_CheckField, 12, 1, 0, 206, 43, // Skip to: 20174
/* 8960 */    MCD::OPC_CheckField, 7, 1, 0, 200, 43, // Skip to: 20174
/* 8966 */    MCD::OPC_Decode, 184, 5, 118, // Opcode: L2_loadrh_pcr
/* 8970 */    MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 9043
/* 8974 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 8977 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8985
/* 8981 */    MCD::OPC_Decode, 185, 5, 119, // Opcode: L2_loadrh_pi
/* 8985 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8993
/* 8989 */    MCD::OPC_Decode, 176, 6, 120, // Opcode: L4_loadrh_ap
/* 8993 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 9018
/* 8997 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9000 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9009
/* 9004 */    MCD::OPC_Decode, 237, 5, 140, 1, // Opcode: L2_ploadrht_pi
/* 9009 */    MCD::OPC_FilterValue, 1, 153, 43, // Skip to: 20174
/* 9013 */    MCD::OPC_Decode, 233, 5, 140, 1, // Opcode: L2_ploadrhf_pi
/* 9018 */    MCD::OPC_FilterValue, 3, 144, 43, // Skip to: 20174
/* 9022 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9025 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9034
/* 9029 */    MCD::OPC_Decode, 239, 5, 140, 1, // Opcode: L2_ploadrhtnew_pi
/* 9034 */    MCD::OPC_FilterValue, 1, 128, 43, // Skip to: 20174
/* 9038 */    MCD::OPC_Decode, 235, 5, 140, 1, // Opcode: L2_ploadrhfnew_pi
/* 9043 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 9072
/* 9047 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 9050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9064
/* 9054 */    MCD::OPC_CheckField, 7, 1, 0, 106, 43, // Skip to: 20174
/* 9060 */    MCD::OPC_Decode, 186, 5, 118, // Opcode: L2_loadrh_pr
/* 9064 */    MCD::OPC_FilterValue, 1, 98, 43, // Skip to: 20174
/* 9068 */    MCD::OPC_Decode, 178, 6, 121, // Opcode: L4_loadrh_ur
/* 9072 */    MCD::OPC_FilterValue, 3, 90, 43, // Skip to: 20174
/* 9076 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 9079 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9093
/* 9083 */    MCD::OPC_CheckField, 12, 1, 0, 77, 43, // Skip to: 20174
/* 9089 */    MCD::OPC_Decode, 180, 5, 118, // Opcode: L2_loadrh_pbr
/* 9093 */    MCD::OPC_FilterValue, 1, 69, 43, // Skip to: 20174
/* 9097 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 9100 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9109
/* 9104 */    MCD::OPC_Decode, 214, 6, 139, 1, // Opcode: L4_ploadrht_abs
/* 9109 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 9118
/* 9113 */    MCD::OPC_Decode, 210, 6, 139, 1, // Opcode: L4_ploadrhf_abs
/* 9118 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 9127
/* 9122 */    MCD::OPC_Decode, 216, 6, 139, 1, // Opcode: L4_ploadrhtnew_abs
/* 9127 */    MCD::OPC_FilterValue, 7, 35, 43, // Skip to: 20174
/* 9131 */    MCD::OPC_Decode, 212, 6, 139, 1, // Opcode: L4_ploadrhfnew_abs
/* 9136 */    MCD::OPC_FilterValue, 11, 225, 0, // Skip to: 9365
/* 9140 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 9143 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9151
/* 9147 */    MCD::OPC_Decode, 206, 5, 116, // Opcode: L2_loadruh_io
/* 9151 */    MCD::OPC_FilterValue, 1, 11, 43, // Skip to: 20174
/* 9155 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 9158 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 9199
/* 9162 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 9165 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9179
/* 9169 */    MCD::OPC_CheckField, 12, 1, 0, 247, 42, // Skip to: 20174
/* 9175 */    MCD::OPC_Decode, 209, 5, 117, // Opcode: L2_loadruh_pci
/* 9179 */    MCD::OPC_FilterValue, 1, 239, 42, // Skip to: 20174
/* 9183 */    MCD::OPC_CheckField, 12, 1, 0, 233, 42, // Skip to: 20174
/* 9189 */    MCD::OPC_CheckField, 7, 1, 0, 227, 42, // Skip to: 20174
/* 9195 */    MCD::OPC_Decode, 211, 5, 118, // Opcode: L2_loadruh_pcr
/* 9199 */    MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 9272
/* 9203 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 9206 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9214
/* 9210 */    MCD::OPC_Decode, 212, 5, 119, // Opcode: L2_loadruh_pi
/* 9214 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 9222
/* 9218 */    MCD::OPC_Decode, 188, 6, 120, // Opcode: L4_loadruh_ap
/* 9222 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 9247
/* 9226 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9229 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9238
/* 9233 */    MCD::OPC_Decode, 133, 6, 140, 1, // Opcode: L2_ploadruht_pi
/* 9238 */    MCD::OPC_FilterValue, 1, 180, 42, // Skip to: 20174
/* 9242 */    MCD::OPC_Decode, 129, 6, 140, 1, // Opcode: L2_ploadruhf_pi
/* 9247 */    MCD::OPC_FilterValue, 3, 171, 42, // Skip to: 20174
/* 9251 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9254 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9263
/* 9258 */    MCD::OPC_Decode, 135, 6, 140, 1, // Opcode: L2_ploadruhtnew_pi
/* 9263 */    MCD::OPC_FilterValue, 1, 155, 42, // Skip to: 20174
/* 9267 */    MCD::OPC_Decode, 131, 6, 140, 1, // Opcode: L2_ploadruhfnew_pi
/* 9272 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 9301
/* 9276 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 9279 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9293
/* 9283 */    MCD::OPC_CheckField, 7, 1, 0, 133, 42, // Skip to: 20174
/* 9289 */    MCD::OPC_Decode, 213, 5, 118, // Opcode: L2_loadruh_pr
/* 9293 */    MCD::OPC_FilterValue, 1, 125, 42, // Skip to: 20174
/* 9297 */    MCD::OPC_Decode, 190, 6, 121, // Opcode: L4_loadruh_ur
/* 9301 */    MCD::OPC_FilterValue, 3, 117, 42, // Skip to: 20174
/* 9305 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 9308 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9322
/* 9312 */    MCD::OPC_CheckField, 12, 1, 0, 104, 42, // Skip to: 20174
/* 9318 */    MCD::OPC_Decode, 207, 5, 118, // Opcode: L2_loadruh_pbr
/* 9322 */    MCD::OPC_FilterValue, 1, 96, 42, // Skip to: 20174
/* 9326 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 9329 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9338
/* 9333 */    MCD::OPC_Decode, 238, 6, 139, 1, // Opcode: L4_ploadruht_abs
/* 9338 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 9347
/* 9342 */    MCD::OPC_Decode, 234, 6, 139, 1, // Opcode: L4_ploadruhf_abs
/* 9347 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 9356
/* 9351 */    MCD::OPC_Decode, 240, 6, 139, 1, // Opcode: L4_ploadruhtnew_abs
/* 9356 */    MCD::OPC_FilterValue, 7, 62, 42, // Skip to: 20174
/* 9360 */    MCD::OPC_Decode, 236, 6, 139, 1, // Opcode: L4_ploadruhfnew_abs
/* 9365 */    MCD::OPC_FilterValue, 12, 228, 0, // Skip to: 9597
/* 9369 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 9372 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9381
/* 9376 */    MCD::OPC_Decode, 188, 5, 141, 1, // Opcode: L2_loadri_io
/* 9381 */    MCD::OPC_FilterValue, 1, 37, 42, // Skip to: 20174
/* 9385 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 9388 */    MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 9430
/* 9392 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 9395 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9410
/* 9399 */    MCD::OPC_CheckField, 12, 1, 0, 17, 42, // Skip to: 20174
/* 9405 */    MCD::OPC_Decode, 191, 5, 142, 1, // Opcode: L2_loadri_pci
/* 9410 */    MCD::OPC_FilterValue, 1, 8, 42, // Skip to: 20174
/* 9414 */    MCD::OPC_CheckField, 12, 1, 0, 2, 42, // Skip to: 20174
/* 9420 */    MCD::OPC_CheckField, 7, 1, 0, 252, 41, // Skip to: 20174
/* 9426 */    MCD::OPC_Decode, 193, 5, 118, // Opcode: L2_loadri_pcr
/* 9430 */    MCD::OPC_FilterValue, 1, 70, 0, // Skip to: 9504
/* 9434 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 9437 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9446
/* 9441 */    MCD::OPC_Decode, 194, 5, 143, 1, // Opcode: L2_loadri_pi
/* 9446 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 9454
/* 9450 */    MCD::OPC_Decode, 180, 6, 120, // Opcode: L4_loadri_ap
/* 9454 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 9479
/* 9458 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9461 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9470
/* 9465 */    MCD::OPC_Decode, 245, 5, 144, 1, // Opcode: L2_ploadrit_pi
/* 9470 */    MCD::OPC_FilterValue, 1, 204, 41, // Skip to: 20174
/* 9474 */    MCD::OPC_Decode, 241, 5, 144, 1, // Opcode: L2_ploadrif_pi
/* 9479 */    MCD::OPC_FilterValue, 3, 195, 41, // Skip to: 20174
/* 9483 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9486 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9495
/* 9490 */    MCD::OPC_Decode, 247, 5, 144, 1, // Opcode: L2_ploadritnew_pi
/* 9495 */    MCD::OPC_FilterValue, 1, 179, 41, // Skip to: 20174
/* 9499 */    MCD::OPC_Decode, 243, 5, 144, 1, // Opcode: L2_ploadrifnew_pi
/* 9504 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 9533
/* 9508 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 9511 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9525
/* 9515 */    MCD::OPC_CheckField, 7, 1, 0, 157, 41, // Skip to: 20174
/* 9521 */    MCD::OPC_Decode, 195, 5, 118, // Opcode: L2_loadri_pr
/* 9525 */    MCD::OPC_FilterValue, 1, 149, 41, // Skip to: 20174
/* 9529 */    MCD::OPC_Decode, 182, 6, 121, // Opcode: L4_loadri_ur
/* 9533 */    MCD::OPC_FilterValue, 3, 141, 41, // Skip to: 20174
/* 9537 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 9540 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9554
/* 9544 */    MCD::OPC_CheckField, 12, 1, 0, 128, 41, // Skip to: 20174
/* 9550 */    MCD::OPC_Decode, 189, 5, 118, // Opcode: L2_loadri_pbr
/* 9554 */    MCD::OPC_FilterValue, 1, 120, 41, // Skip to: 20174
/* 9558 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 9561 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9570
/* 9565 */    MCD::OPC_Decode, 222, 6, 139, 1, // Opcode: L4_ploadrit_abs
/* 9570 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 9579
/* 9574 */    MCD::OPC_Decode, 218, 6, 139, 1, // Opcode: L4_ploadrif_abs
/* 9579 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 9588
/* 9583 */    MCD::OPC_Decode, 224, 6, 139, 1, // Opcode: L4_ploadritnew_abs
/* 9588 */    MCD::OPC_FilterValue, 7, 86, 41, // Skip to: 20174
/* 9592 */    MCD::OPC_Decode, 220, 6, 139, 1, // Opcode: L4_ploadrifnew_abs
/* 9597 */    MCD::OPC_FilterValue, 14, 77, 41, // Skip to: 20174
/* 9601 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 9604 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9613
/* 9608 */    MCD::OPC_Decode, 170, 5, 145, 1, // Opcode: L2_loadrd_io
/* 9613 */    MCD::OPC_FilterValue, 1, 61, 41, // Skip to: 20174
/* 9617 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 9620 */    MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 9663
/* 9624 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 9627 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9642
/* 9631 */    MCD::OPC_CheckField, 12, 1, 0, 41, 41, // Skip to: 20174
/* 9637 */    MCD::OPC_Decode, 173, 5, 146, 1, // Opcode: L2_loadrd_pci
/* 9642 */    MCD::OPC_FilterValue, 1, 32, 41, // Skip to: 20174
/* 9646 */    MCD::OPC_CheckField, 12, 1, 0, 26, 41, // Skip to: 20174
/* 9652 */    MCD::OPC_CheckField, 7, 1, 0, 20, 41, // Skip to: 20174
/* 9658 */    MCD::OPC_Decode, 175, 5, 128, 1, // Opcode: L2_loadrd_pcr
/* 9663 */    MCD::OPC_FilterValue, 1, 70, 0, // Skip to: 9737
/* 9667 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 9670 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9679
/* 9674 */    MCD::OPC_Decode, 176, 5, 147, 1, // Opcode: L2_loadrd_pi
/* 9679 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 9687
/* 9683 */    MCD::OPC_Decode, 172, 6, 126, // Opcode: L4_loadrd_ap
/* 9687 */    MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 9712
/* 9691 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9694 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9703
/* 9698 */    MCD::OPC_Decode, 229, 5, 148, 1, // Opcode: L2_ploadrdt_pi
/* 9703 */    MCD::OPC_FilterValue, 1, 227, 40, // Skip to: 20174
/* 9707 */    MCD::OPC_Decode, 225, 5, 148, 1, // Opcode: L2_ploadrdf_pi
/* 9712 */    MCD::OPC_FilterValue, 3, 218, 40, // Skip to: 20174
/* 9716 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 9719 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9728
/* 9723 */    MCD::OPC_Decode, 231, 5, 148, 1, // Opcode: L2_ploadrdtnew_pi
/* 9728 */    MCD::OPC_FilterValue, 1, 202, 40, // Skip to: 20174
/* 9732 */    MCD::OPC_Decode, 227, 5, 148, 1, // Opcode: L2_ploadrdfnew_pi
/* 9737 */    MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 9767
/* 9741 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 9744 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9759
/* 9748 */    MCD::OPC_CheckField, 7, 1, 0, 180, 40, // Skip to: 20174
/* 9754 */    MCD::OPC_Decode, 177, 5, 128, 1, // Opcode: L2_loadrd_pr
/* 9759 */    MCD::OPC_FilterValue, 1, 171, 40, // Skip to: 20174
/* 9763 */    MCD::OPC_Decode, 174, 6, 127, // Opcode: L4_loadrd_ur
/* 9767 */    MCD::OPC_FilterValue, 3, 163, 40, // Skip to: 20174
/* 9771 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 9774 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9789
/* 9778 */    MCD::OPC_CheckField, 12, 1, 0, 150, 40, // Skip to: 20174
/* 9784 */    MCD::OPC_Decode, 171, 5, 128, 1, // Opcode: L2_loadrd_pbr
/* 9789 */    MCD::OPC_FilterValue, 1, 141, 40, // Skip to: 20174
/* 9793 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 9796 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9805
/* 9800 */    MCD::OPC_Decode, 206, 6, 149, 1, // Opcode: L4_ploadrdt_abs
/* 9805 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 9814
/* 9809 */    MCD::OPC_Decode, 202, 6, 149, 1, // Opcode: L4_ploadrdf_abs
/* 9814 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 9823
/* 9818 */    MCD::OPC_Decode, 208, 6, 149, 1, // Opcode: L4_ploadrdtnew_abs
/* 9823 */    MCD::OPC_FilterValue, 7, 107, 40, // Skip to: 20174
/* 9827 */    MCD::OPC_Decode, 204, 6, 149, 1, // Opcode: L4_ploadrdfnew_abs
/* 9832 */    MCD::OPC_FilterValue, 10, 57, 8, // Skip to: 11941
/* 9836 */    MCD::OPC_ExtractField, 21, 4,  // Inst{24-21} ...
/* 9839 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9853
/* 9843 */    MCD::OPC_CheckField, 25, 3, 4, 85, 40, // Skip to: 20174
/* 9849 */    MCD::OPC_Decode, 217, 13, 87, // Opcode: Y2_barrier
/* 9853 */    MCD::OPC_FilterValue, 4, 23, 0, // Skip to: 9880
/* 9857 */    MCD::OPC_CheckField, 25, 3, 0, 71, 40, // Skip to: 20174
/* 9863 */    MCD::OPC_CheckField, 16, 5, 29, 65, 40, // Skip to: 20174
/* 9869 */    MCD::OPC_CheckField, 11, 3, 0, 59, 40, // Skip to: 20174
/* 9875 */    MCD::OPC_Decode, 202, 9, 150, 1, // Opcode: S2_allocframe
/* 9880 */    MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 9895
/* 9884 */    MCD::OPC_CheckField, 25, 3, 0, 44, 40, // Skip to: 20174
/* 9890 */    MCD::OPC_Decode, 205, 11, 151, 1, // Opcode: S2_storew_locked
/* 9895 */    MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 9910
/* 9899 */    MCD::OPC_CheckField, 25, 3, 0, 29, 40, // Skip to: 20174
/* 9905 */    MCD::OPC_Decode, 220, 12, 152, 1, // Opcode: S4_stored_locked
/* 9910 */    MCD::OPC_FilterValue, 8, 249, 0, // Skip to: 10163
/* 9914 */    MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 9917 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9926
/* 9921 */    MCD::OPC_Decode, 131, 11, 153, 1, // Opcode: S2_storerb_io
/* 9926 */    MCD::OPC_FilterValue, 1, 4, 40, // Skip to: 20174
/* 9930 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 9933 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 9970
/* 9937 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 9940 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9955
/* 9944 */    MCD::OPC_CheckField, 7, 1, 0, 240, 39, // Skip to: 20174
/* 9950 */    MCD::OPC_Decode, 134, 11, 154, 1, // Opcode: S2_storerb_pci
/* 9955 */    MCD::OPC_FilterValue, 1, 231, 39, // Skip to: 20174
/* 9959 */    MCD::OPC_CheckField, 7, 1, 0, 225, 39, // Skip to: 20174
/* 9965 */    MCD::OPC_Decode, 136, 11, 155, 1, // Opcode: S2_storerb_pcr
/* 9970 */    MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 10065
/* 9974 */    MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 9977 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 10024
/* 9981 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 9984 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9999
/* 9988 */    MCD::OPC_CheckField, 1, 1, 0, 196, 39, // Skip to: 20174
/* 9994 */    MCD::OPC_Decode, 137, 11, 156, 1, // Opcode: S2_storerb_pi
/* 9999 */    MCD::OPC_FilterValue, 1, 187, 39, // Skip to: 20174
/* 10003 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10006 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10015
/* 10010 */   MCD::OPC_Decode, 215, 10, 157, 1, // Opcode: S2_pstorerbt_pi
/* 10015 */   MCD::OPC_FilterValue, 1, 171, 39, // Skip to: 20174
/* 10019 */   MCD::OPC_Decode, 206, 10, 157, 1, // Opcode: S2_pstorerbf_pi
/* 10024 */   MCD::OPC_FilterValue, 1, 162, 39, // Skip to: 20174
/* 10028 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10031 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10040
/* 10035 */   MCD::OPC_Decode, 236, 12, 158, 1, // Opcode: S4_storerb_ap
/* 10040 */   MCD::OPC_FilterValue, 1, 146, 39, // Skip to: 20174
/* 10044 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10047 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10056
/* 10051 */   MCD::OPC_Decode, 216, 10, 157, 1, // Opcode: S2_pstorerbtnew_pi
/* 10056 */   MCD::OPC_FilterValue, 1, 130, 39, // Skip to: 20174
/* 10060 */   MCD::OPC_Decode, 207, 10, 157, 1, // Opcode: S2_pstorerbfnew_pi
/* 10065 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 10090
/* 10069 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10072 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10081
/* 10076 */   MCD::OPC_Decode, 138, 11, 155, 1, // Opcode: S2_storerb_pr
/* 10081 */   MCD::OPC_FilterValue, 1, 105, 39, // Skip to: 20174
/* 10085 */   MCD::OPC_Decode, 238, 12, 159, 1, // Opcode: S4_storerb_ur
/* 10090 */   MCD::OPC_FilterValue, 3, 96, 39, // Skip to: 20174
/* 10094 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10097 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10106
/* 10101 */   MCD::OPC_Decode, 132, 11, 155, 1, // Opcode: S2_storerb_pbr
/* 10106 */   MCD::OPC_FilterValue, 1, 80, 39, // Skip to: 20174
/* 10110 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10113 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 10138
/* 10117 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10120 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10129
/* 10124 */   MCD::OPC_Decode, 155, 12, 160, 1, // Opcode: S4_pstorerbt_abs
/* 10129 */   MCD::OPC_FilterValue, 1, 57, 39, // Skip to: 20174
/* 10133 */   MCD::OPC_Decode, 157, 12, 160, 1, // Opcode: S4_pstorerbtnew_abs
/* 10138 */   MCD::OPC_FilterValue, 1, 48, 39, // Skip to: 20174
/* 10142 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10145 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10154
/* 10149 */   MCD::OPC_Decode, 140, 12, 160, 1, // Opcode: S4_pstorerbf_abs
/* 10154 */   MCD::OPC_FilterValue, 1, 32, 39, // Skip to: 20174
/* 10158 */   MCD::OPC_Decode, 142, 12, 160, 1, // Opcode: S4_pstorerbfnew_abs
/* 10163 */   MCD::OPC_FilterValue, 10, 249, 0, // Skip to: 10416
/* 10167 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 10170 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10179
/* 10174 */   MCD::OPC_Decode, 169, 11, 161, 1, // Opcode: S2_storerh_io
/* 10179 */   MCD::OPC_FilterValue, 1, 7, 39, // Skip to: 20174
/* 10183 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 10186 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10223
/* 10190 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 10193 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10208
/* 10197 */   MCD::OPC_CheckField, 7, 1, 0, 243, 38, // Skip to: 20174
/* 10203 */   MCD::OPC_Decode, 172, 11, 162, 1, // Opcode: S2_storerh_pci
/* 10208 */   MCD::OPC_FilterValue, 1, 234, 38, // Skip to: 20174
/* 10212 */   MCD::OPC_CheckField, 7, 1, 0, 228, 38, // Skip to: 20174
/* 10218 */   MCD::OPC_Decode, 174, 11, 155, 1, // Opcode: S2_storerh_pcr
/* 10223 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 10318
/* 10227 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10230 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 10277
/* 10234 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10237 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10252
/* 10241 */   MCD::OPC_CheckField, 1, 1, 0, 199, 38, // Skip to: 20174
/* 10247 */   MCD::OPC_Decode, 175, 11, 163, 1, // Opcode: S2_storerh_pi
/* 10252 */   MCD::OPC_FilterValue, 1, 190, 38, // Skip to: 20174
/* 10256 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10259 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10268
/* 10263 */   MCD::OPC_Decode, 239, 10, 164, 1, // Opcode: S2_pstorerht_pi
/* 10268 */   MCD::OPC_FilterValue, 1, 174, 38, // Skip to: 20174
/* 10272 */   MCD::OPC_Decode, 230, 10, 164, 1, // Opcode: S2_pstorerhf_pi
/* 10277 */   MCD::OPC_FilterValue, 1, 165, 38, // Skip to: 20174
/* 10281 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10284 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10293
/* 10288 */   MCD::OPC_Decode, 248, 12, 158, 1, // Opcode: S4_storerh_ap
/* 10293 */   MCD::OPC_FilterValue, 1, 149, 38, // Skip to: 20174
/* 10297 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10300 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10309
/* 10304 */   MCD::OPC_Decode, 240, 10, 164, 1, // Opcode: S2_pstorerhtnew_pi
/* 10309 */   MCD::OPC_FilterValue, 1, 133, 38, // Skip to: 20174
/* 10313 */   MCD::OPC_Decode, 231, 10, 164, 1, // Opcode: S2_pstorerhfnew_pi
/* 10318 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 10343
/* 10322 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10325 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10334
/* 10329 */   MCD::OPC_Decode, 176, 11, 155, 1, // Opcode: S2_storerh_pr
/* 10334 */   MCD::OPC_FilterValue, 1, 108, 38, // Skip to: 20174
/* 10338 */   MCD::OPC_Decode, 250, 12, 159, 1, // Opcode: S4_storerh_ur
/* 10343 */   MCD::OPC_FilterValue, 3, 99, 38, // Skip to: 20174
/* 10347 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10350 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10359
/* 10354 */   MCD::OPC_Decode, 170, 11, 155, 1, // Opcode: S2_storerh_pbr
/* 10359 */   MCD::OPC_FilterValue, 1, 83, 38, // Skip to: 20174
/* 10363 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10366 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 10391
/* 10370 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10373 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10382
/* 10377 */   MCD::OPC_Decode, 195, 12, 160, 1, // Opcode: S4_pstorerht_abs
/* 10382 */   MCD::OPC_FilterValue, 1, 60, 38, // Skip to: 20174
/* 10386 */   MCD::OPC_Decode, 197, 12, 160, 1, // Opcode: S4_pstorerhtnew_abs
/* 10391 */   MCD::OPC_FilterValue, 1, 51, 38, // Skip to: 20174
/* 10395 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10398 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10407
/* 10402 */   MCD::OPC_Decode, 180, 12, 160, 1, // Opcode: S4_pstorerhf_abs
/* 10407 */   MCD::OPC_FilterValue, 1, 35, 38, // Skip to: 20174
/* 10411 */   MCD::OPC_Decode, 182, 12, 160, 1, // Opcode: S4_pstorerhfnew_abs
/* 10416 */   MCD::OPC_FilterValue, 11, 249, 0, // Skip to: 10669
/* 10420 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 10423 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10432
/* 10427 */   MCD::OPC_Decode, 159, 11, 161, 1, // Opcode: S2_storerf_io
/* 10432 */   MCD::OPC_FilterValue, 1, 10, 38, // Skip to: 20174
/* 10436 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 10439 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10476
/* 10443 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 10446 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10461
/* 10450 */   MCD::OPC_CheckField, 7, 1, 0, 246, 37, // Skip to: 20174
/* 10456 */   MCD::OPC_Decode, 162, 11, 162, 1, // Opcode: S2_storerf_pci
/* 10461 */   MCD::OPC_FilterValue, 1, 237, 37, // Skip to: 20174
/* 10465 */   MCD::OPC_CheckField, 7, 1, 0, 231, 37, // Skip to: 20174
/* 10471 */   MCD::OPC_Decode, 164, 11, 155, 1, // Opcode: S2_storerf_pcr
/* 10476 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 10571
/* 10480 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10483 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 10530
/* 10487 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10490 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10505
/* 10494 */   MCD::OPC_CheckField, 1, 1, 0, 202, 37, // Skip to: 20174
/* 10500 */   MCD::OPC_Decode, 165, 11, 163, 1, // Opcode: S2_storerf_pi
/* 10505 */   MCD::OPC_FilterValue, 1, 193, 37, // Skip to: 20174
/* 10509 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10512 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10521
/* 10516 */   MCD::OPC_Decode, 227, 10, 164, 1, // Opcode: S2_pstorerft_pi
/* 10521 */   MCD::OPC_FilterValue, 1, 177, 37, // Skip to: 20174
/* 10525 */   MCD::OPC_Decode, 224, 10, 164, 1, // Opcode: S2_pstorerff_pi
/* 10530 */   MCD::OPC_FilterValue, 1, 168, 37, // Skip to: 20174
/* 10534 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10537 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10546
/* 10541 */   MCD::OPC_Decode, 245, 12, 158, 1, // Opcode: S4_storerf_ap
/* 10546 */   MCD::OPC_FilterValue, 1, 152, 37, // Skip to: 20174
/* 10550 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10553 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10562
/* 10557 */   MCD::OPC_Decode, 228, 10, 164, 1, // Opcode: S2_pstorerftnew_pi
/* 10562 */   MCD::OPC_FilterValue, 1, 136, 37, // Skip to: 20174
/* 10566 */   MCD::OPC_Decode, 225, 10, 164, 1, // Opcode: S2_pstorerffnew_pi
/* 10571 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 10596
/* 10575 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10578 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10587
/* 10582 */   MCD::OPC_Decode, 166, 11, 155, 1, // Opcode: S2_storerf_pr
/* 10587 */   MCD::OPC_FilterValue, 1, 111, 37, // Skip to: 20174
/* 10591 */   MCD::OPC_Decode, 247, 12, 159, 1, // Opcode: S4_storerf_ur
/* 10596 */   MCD::OPC_FilterValue, 3, 102, 37, // Skip to: 20174
/* 10600 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10603 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10612
/* 10607 */   MCD::OPC_Decode, 160, 11, 155, 1, // Opcode: S2_storerf_pbr
/* 10612 */   MCD::OPC_FilterValue, 1, 86, 37, // Skip to: 20174
/* 10616 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10619 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 10644
/* 10623 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10626 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10635
/* 10630 */   MCD::OPC_Decode, 175, 12, 160, 1, // Opcode: S4_pstorerft_abs
/* 10635 */   MCD::OPC_FilterValue, 1, 63, 37, // Skip to: 20174
/* 10639 */   MCD::OPC_Decode, 177, 12, 160, 1, // Opcode: S4_pstorerftnew_abs
/* 10644 */   MCD::OPC_FilterValue, 1, 54, 37, // Skip to: 20174
/* 10648 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10651 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10660
/* 10655 */   MCD::OPC_Decode, 170, 12, 160, 1, // Opcode: S4_pstorerff_abs
/* 10660 */   MCD::OPC_FilterValue, 1, 38, 37, // Skip to: 20174
/* 10664 */   MCD::OPC_Decode, 172, 12, 160, 1, // Opcode: S4_pstorerffnew_abs
/* 10669 */   MCD::OPC_FilterValue, 12, 249, 0, // Skip to: 10922
/* 10673 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 10676 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10685
/* 10680 */   MCD::OPC_Decode, 187, 11, 165, 1, // Opcode: S2_storeri_io
/* 10685 */   MCD::OPC_FilterValue, 1, 13, 37, // Skip to: 20174
/* 10689 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 10692 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10729
/* 10696 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 10699 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10714
/* 10703 */   MCD::OPC_CheckField, 7, 1, 0, 249, 36, // Skip to: 20174
/* 10709 */   MCD::OPC_Decode, 190, 11, 166, 1, // Opcode: S2_storeri_pci
/* 10714 */   MCD::OPC_FilterValue, 1, 240, 36, // Skip to: 20174
/* 10718 */   MCD::OPC_CheckField, 7, 1, 0, 234, 36, // Skip to: 20174
/* 10724 */   MCD::OPC_Decode, 192, 11, 155, 1, // Opcode: S2_storeri_pcr
/* 10729 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 10824
/* 10733 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10736 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 10783
/* 10740 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10743 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10758
/* 10747 */   MCD::OPC_CheckField, 1, 1, 0, 205, 36, // Skip to: 20174
/* 10753 */   MCD::OPC_Decode, 193, 11, 167, 1, // Opcode: S2_storeri_pi
/* 10758 */   MCD::OPC_FilterValue, 1, 196, 36, // Skip to: 20174
/* 10762 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10765 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10774
/* 10769 */   MCD::OPC_Decode, 251, 10, 168, 1, // Opcode: S2_pstorerit_pi
/* 10774 */   MCD::OPC_FilterValue, 1, 180, 36, // Skip to: 20174
/* 10778 */   MCD::OPC_Decode, 242, 10, 168, 1, // Opcode: S2_pstorerif_pi
/* 10783 */   MCD::OPC_FilterValue, 1, 171, 36, // Skip to: 20174
/* 10787 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10790 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10799
/* 10794 */   MCD::OPC_Decode, 254, 12, 158, 1, // Opcode: S4_storeri_ap
/* 10799 */   MCD::OPC_FilterValue, 1, 155, 36, // Skip to: 20174
/* 10803 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10806 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10815
/* 10810 */   MCD::OPC_Decode, 252, 10, 168, 1, // Opcode: S2_pstoreritnew_pi
/* 10815 */   MCD::OPC_FilterValue, 1, 139, 36, // Skip to: 20174
/* 10819 */   MCD::OPC_Decode, 243, 10, 168, 1, // Opcode: S2_pstorerifnew_pi
/* 10824 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 10849
/* 10828 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10831 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10840
/* 10835 */   MCD::OPC_Decode, 194, 11, 155, 1, // Opcode: S2_storeri_pr
/* 10840 */   MCD::OPC_FilterValue, 1, 114, 36, // Skip to: 20174
/* 10844 */   MCD::OPC_Decode, 128, 13, 159, 1, // Opcode: S4_storeri_ur
/* 10849 */   MCD::OPC_FilterValue, 3, 105, 36, // Skip to: 20174
/* 10853 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10856 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10865
/* 10860 */   MCD::OPC_Decode, 188, 11, 155, 1, // Opcode: S2_storeri_pbr
/* 10865 */   MCD::OPC_FilterValue, 1, 89, 36, // Skip to: 20174
/* 10869 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10872 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 10897
/* 10876 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10879 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10888
/* 10883 */   MCD::OPC_Decode, 215, 12, 160, 1, // Opcode: S4_pstorerit_abs
/* 10888 */   MCD::OPC_FilterValue, 1, 66, 36, // Skip to: 20174
/* 10892 */   MCD::OPC_Decode, 217, 12, 160, 1, // Opcode: S4_pstoreritnew_abs
/* 10897 */   MCD::OPC_FilterValue, 1, 57, 36, // Skip to: 20174
/* 10901 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 10904 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10913
/* 10908 */   MCD::OPC_Decode, 200, 12, 160, 1, // Opcode: S4_pstorerif_abs
/* 10913 */   MCD::OPC_FilterValue, 1, 41, 36, // Skip to: 20174
/* 10917 */   MCD::OPC_Decode, 202, 12, 160, 1, // Opcode: S4_pstorerifnew_abs
/* 10922 */   MCD::OPC_FilterValue, 13, 250, 2, // Skip to: 11688
/* 10926 */   MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 10929 */   MCD::OPC_FilterValue, 0, 249, 0, // Skip to: 11182
/* 10933 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 10936 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10945
/* 10940 */   MCD::OPC_Decode, 141, 11, 169, 1, // Opcode: S2_storerbnew_io
/* 10945 */   MCD::OPC_FilterValue, 1, 9, 36, // Skip to: 20174
/* 10949 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 10952 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10989
/* 10956 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 10959 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10974
/* 10963 */   MCD::OPC_CheckField, 7, 1, 0, 245, 35, // Skip to: 20174
/* 10969 */   MCD::OPC_Decode, 143, 11, 170, 1, // Opcode: S2_storerbnew_pci
/* 10974 */   MCD::OPC_FilterValue, 1, 236, 35, // Skip to: 20174
/* 10978 */   MCD::OPC_CheckField, 7, 1, 0, 230, 35, // Skip to: 20174
/* 10984 */   MCD::OPC_Decode, 144, 11, 171, 1, // Opcode: S2_storerbnew_pcr
/* 10989 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 11084
/* 10993 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 10996 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 11043
/* 11000 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11003 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11018
/* 11007 */   MCD::OPC_CheckField, 1, 1, 0, 201, 35, // Skip to: 20174
/* 11013 */   MCD::OPC_Decode, 145, 11, 172, 1, // Opcode: S2_storerbnew_pi
/* 11018 */   MCD::OPC_FilterValue, 1, 192, 35, // Skip to: 20174
/* 11022 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11025 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11034
/* 11029 */   MCD::OPC_Decode, 212, 10, 173, 1, // Opcode: S2_pstorerbnewt_pi
/* 11034 */   MCD::OPC_FilterValue, 1, 176, 35, // Skip to: 20174
/* 11038 */   MCD::OPC_Decode, 209, 10, 173, 1, // Opcode: S2_pstorerbnewf_pi
/* 11043 */   MCD::OPC_FilterValue, 1, 167, 35, // Skip to: 20174
/* 11047 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11050 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11059
/* 11054 */   MCD::OPC_Decode, 239, 12, 174, 1, // Opcode: S4_storerbnew_ap
/* 11059 */   MCD::OPC_FilterValue, 1, 151, 35, // Skip to: 20174
/* 11063 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11066 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11075
/* 11070 */   MCD::OPC_Decode, 213, 10, 173, 1, // Opcode: S2_pstorerbnewtnew_pi
/* 11075 */   MCD::OPC_FilterValue, 1, 135, 35, // Skip to: 20174
/* 11079 */   MCD::OPC_Decode, 210, 10, 173, 1, // Opcode: S2_pstorerbnewfnew_pi
/* 11084 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 11109
/* 11088 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11091 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11100
/* 11095 */   MCD::OPC_Decode, 146, 11, 171, 1, // Opcode: S2_storerbnew_pr
/* 11100 */   MCD::OPC_FilterValue, 1, 110, 35, // Skip to: 20174
/* 11104 */   MCD::OPC_Decode, 241, 12, 175, 1, // Opcode: S4_storerbnew_ur
/* 11109 */   MCD::OPC_FilterValue, 3, 101, 35, // Skip to: 20174
/* 11113 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11116 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11125
/* 11120 */   MCD::OPC_Decode, 142, 11, 171, 1, // Opcode: S2_storerbnew_pbr
/* 11125 */   MCD::OPC_FilterValue, 1, 85, 35, // Skip to: 20174
/* 11129 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11132 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11157
/* 11136 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11139 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11148
/* 11143 */   MCD::OPC_Decode, 150, 12, 176, 1, // Opcode: S4_pstorerbnewt_abs
/* 11148 */   MCD::OPC_FilterValue, 1, 62, 35, // Skip to: 20174
/* 11152 */   MCD::OPC_Decode, 152, 12, 176, 1, // Opcode: S4_pstorerbnewtnew_abs
/* 11157 */   MCD::OPC_FilterValue, 1, 53, 35, // Skip to: 20174
/* 11161 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11164 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11173
/* 11168 */   MCD::OPC_Decode, 145, 12, 176, 1, // Opcode: S4_pstorerbnewf_abs
/* 11173 */   MCD::OPC_FilterValue, 1, 37, 35, // Skip to: 20174
/* 11177 */   MCD::OPC_Decode, 147, 12, 176, 1, // Opcode: S4_pstorerbnewfnew_abs
/* 11182 */   MCD::OPC_FilterValue, 1, 249, 0, // Skip to: 11435
/* 11186 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 11189 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11198
/* 11193 */   MCD::OPC_Decode, 179, 11, 177, 1, // Opcode: S2_storerhnew_io
/* 11198 */   MCD::OPC_FilterValue, 1, 12, 35, // Skip to: 20174
/* 11202 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 11205 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11242
/* 11209 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 11212 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11227
/* 11216 */   MCD::OPC_CheckField, 7, 1, 0, 248, 34, // Skip to: 20174
/* 11222 */   MCD::OPC_Decode, 181, 11, 178, 1, // Opcode: S2_storerhnew_pci
/* 11227 */   MCD::OPC_FilterValue, 1, 239, 34, // Skip to: 20174
/* 11231 */   MCD::OPC_CheckField, 7, 1, 0, 233, 34, // Skip to: 20174
/* 11237 */   MCD::OPC_Decode, 182, 11, 171, 1, // Opcode: S2_storerhnew_pcr
/* 11242 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 11337
/* 11246 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11249 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 11296
/* 11253 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11256 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11271
/* 11260 */   MCD::OPC_CheckField, 1, 1, 0, 204, 34, // Skip to: 20174
/* 11266 */   MCD::OPC_Decode, 183, 11, 179, 1, // Opcode: S2_storerhnew_pi
/* 11271 */   MCD::OPC_FilterValue, 1, 195, 34, // Skip to: 20174
/* 11275 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11278 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11287
/* 11282 */   MCD::OPC_Decode, 236, 10, 180, 1, // Opcode: S2_pstorerhnewt_pi
/* 11287 */   MCD::OPC_FilterValue, 1, 179, 34, // Skip to: 20174
/* 11291 */   MCD::OPC_Decode, 233, 10, 180, 1, // Opcode: S2_pstorerhnewf_pi
/* 11296 */   MCD::OPC_FilterValue, 1, 170, 34, // Skip to: 20174
/* 11300 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11303 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11312
/* 11307 */   MCD::OPC_Decode, 251, 12, 174, 1, // Opcode: S4_storerhnew_ap
/* 11312 */   MCD::OPC_FilterValue, 1, 154, 34, // Skip to: 20174
/* 11316 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11319 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11328
/* 11323 */   MCD::OPC_Decode, 237, 10, 180, 1, // Opcode: S2_pstorerhnewtnew_pi
/* 11328 */   MCD::OPC_FilterValue, 1, 138, 34, // Skip to: 20174
/* 11332 */   MCD::OPC_Decode, 234, 10, 180, 1, // Opcode: S2_pstorerhnewfnew_pi
/* 11337 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 11362
/* 11341 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11344 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11353
/* 11348 */   MCD::OPC_Decode, 184, 11, 171, 1, // Opcode: S2_storerhnew_pr
/* 11353 */   MCD::OPC_FilterValue, 1, 113, 34, // Skip to: 20174
/* 11357 */   MCD::OPC_Decode, 253, 12, 175, 1, // Opcode: S4_storerhnew_ur
/* 11362 */   MCD::OPC_FilterValue, 3, 104, 34, // Skip to: 20174
/* 11366 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11369 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11378
/* 11373 */   MCD::OPC_Decode, 180, 11, 171, 1, // Opcode: S2_storerhnew_pbr
/* 11378 */   MCD::OPC_FilterValue, 1, 88, 34, // Skip to: 20174
/* 11382 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11385 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11410
/* 11389 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11392 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11401
/* 11396 */   MCD::OPC_Decode, 190, 12, 176, 1, // Opcode: S4_pstorerhnewt_abs
/* 11401 */   MCD::OPC_FilterValue, 1, 65, 34, // Skip to: 20174
/* 11405 */   MCD::OPC_Decode, 192, 12, 176, 1, // Opcode: S4_pstorerhnewtnew_abs
/* 11410 */   MCD::OPC_FilterValue, 1, 56, 34, // Skip to: 20174
/* 11414 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11417 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11426
/* 11421 */   MCD::OPC_Decode, 185, 12, 176, 1, // Opcode: S4_pstorerhnewf_abs
/* 11426 */   MCD::OPC_FilterValue, 1, 40, 34, // Skip to: 20174
/* 11430 */   MCD::OPC_Decode, 187, 12, 176, 1, // Opcode: S4_pstorerhnewfnew_abs
/* 11435 */   MCD::OPC_FilterValue, 2, 31, 34, // Skip to: 20174
/* 11439 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 11442 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11451
/* 11446 */   MCD::OPC_Decode, 197, 11, 181, 1, // Opcode: S2_storerinew_io
/* 11451 */   MCD::OPC_FilterValue, 1, 15, 34, // Skip to: 20174
/* 11455 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 11458 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11495
/* 11462 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 11465 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11480
/* 11469 */   MCD::OPC_CheckField, 7, 1, 0, 251, 33, // Skip to: 20174
/* 11475 */   MCD::OPC_Decode, 199, 11, 182, 1, // Opcode: S2_storerinew_pci
/* 11480 */   MCD::OPC_FilterValue, 1, 242, 33, // Skip to: 20174
/* 11484 */   MCD::OPC_CheckField, 7, 1, 0, 236, 33, // Skip to: 20174
/* 11490 */   MCD::OPC_Decode, 200, 11, 171, 1, // Opcode: S2_storerinew_pcr
/* 11495 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 11590
/* 11499 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11502 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 11549
/* 11506 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11509 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11524
/* 11513 */   MCD::OPC_CheckField, 1, 1, 0, 207, 33, // Skip to: 20174
/* 11519 */   MCD::OPC_Decode, 201, 11, 183, 1, // Opcode: S2_storerinew_pi
/* 11524 */   MCD::OPC_FilterValue, 1, 198, 33, // Skip to: 20174
/* 11528 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11531 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11540
/* 11535 */   MCD::OPC_Decode, 248, 10, 184, 1, // Opcode: S2_pstorerinewt_pi
/* 11540 */   MCD::OPC_FilterValue, 1, 182, 33, // Skip to: 20174
/* 11544 */   MCD::OPC_Decode, 245, 10, 184, 1, // Opcode: S2_pstorerinewf_pi
/* 11549 */   MCD::OPC_FilterValue, 1, 173, 33, // Skip to: 20174
/* 11553 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11556 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11565
/* 11560 */   MCD::OPC_Decode, 129, 13, 174, 1, // Opcode: S4_storerinew_ap
/* 11565 */   MCD::OPC_FilterValue, 1, 157, 33, // Skip to: 20174
/* 11569 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11572 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11581
/* 11576 */   MCD::OPC_Decode, 249, 10, 184, 1, // Opcode: S2_pstorerinewtnew_pi
/* 11581 */   MCD::OPC_FilterValue, 1, 141, 33, // Skip to: 20174
/* 11585 */   MCD::OPC_Decode, 246, 10, 184, 1, // Opcode: S2_pstorerinewfnew_pi
/* 11590 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 11615
/* 11594 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11597 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11606
/* 11601 */   MCD::OPC_Decode, 202, 11, 171, 1, // Opcode: S2_storerinew_pr
/* 11606 */   MCD::OPC_FilterValue, 1, 116, 33, // Skip to: 20174
/* 11610 */   MCD::OPC_Decode, 131, 13, 175, 1, // Opcode: S4_storerinew_ur
/* 11615 */   MCD::OPC_FilterValue, 3, 107, 33, // Skip to: 20174
/* 11619 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11622 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11631
/* 11626 */   MCD::OPC_Decode, 198, 11, 171, 1, // Opcode: S2_storerinew_pbr
/* 11631 */   MCD::OPC_FilterValue, 1, 91, 33, // Skip to: 20174
/* 11635 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11638 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11663
/* 11642 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11645 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11654
/* 11649 */   MCD::OPC_Decode, 210, 12, 176, 1, // Opcode: S4_pstorerinewt_abs
/* 11654 */   MCD::OPC_FilterValue, 1, 68, 33, // Skip to: 20174
/* 11658 */   MCD::OPC_Decode, 212, 12, 176, 1, // Opcode: S4_pstorerinewtnew_abs
/* 11663 */   MCD::OPC_FilterValue, 1, 59, 33, // Skip to: 20174
/* 11667 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11670 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11679
/* 11674 */   MCD::OPC_Decode, 205, 12, 176, 1, // Opcode: S4_pstorerinewf_abs
/* 11679 */   MCD::OPC_FilterValue, 1, 43, 33, // Skip to: 20174
/* 11683 */   MCD::OPC_Decode, 207, 12, 176, 1, // Opcode: S4_pstorerinewfnew_abs
/* 11688 */   MCD::OPC_FilterValue, 14, 34, 33, // Skip to: 20174
/* 11692 */   MCD::OPC_ExtractField, 27, 1,  // Inst{27} ...
/* 11695 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11704
/* 11699 */   MCD::OPC_Decode, 149, 11, 185, 1, // Opcode: S2_storerd_io
/* 11704 */   MCD::OPC_FilterValue, 1, 18, 33, // Skip to: 20174
/* 11708 */   MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 11711 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11748
/* 11715 */   MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 11718 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11733
/* 11722 */   MCD::OPC_CheckField, 7, 1, 0, 254, 32, // Skip to: 20174
/* 11728 */   MCD::OPC_Decode, 152, 11, 186, 1, // Opcode: S2_storerd_pci
/* 11733 */   MCD::OPC_FilterValue, 1, 245, 32, // Skip to: 20174
/* 11737 */   MCD::OPC_CheckField, 7, 1, 0, 239, 32, // Skip to: 20174
/* 11743 */   MCD::OPC_Decode, 154, 11, 187, 1, // Opcode: S2_storerd_pcr
/* 11748 */   MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 11843
/* 11752 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11755 */   MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 11802
/* 11759 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11762 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11777
/* 11766 */   MCD::OPC_CheckField, 1, 1, 0, 210, 32, // Skip to: 20174
/* 11772 */   MCD::OPC_Decode, 155, 11, 188, 1, // Opcode: S2_storerd_pi
/* 11777 */   MCD::OPC_FilterValue, 1, 201, 32, // Skip to: 20174
/* 11781 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11784 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11793
/* 11788 */   MCD::OPC_Decode, 221, 10, 189, 1, // Opcode: S2_pstorerdt_pi
/* 11793 */   MCD::OPC_FilterValue, 1, 185, 32, // Skip to: 20174
/* 11797 */   MCD::OPC_Decode, 218, 10, 189, 1, // Opcode: S2_pstorerdf_pi
/* 11802 */   MCD::OPC_FilterValue, 1, 176, 32, // Skip to: 20174
/* 11806 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11809 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11818
/* 11813 */   MCD::OPC_Decode, 242, 12, 190, 1, // Opcode: S4_storerd_ap
/* 11818 */   MCD::OPC_FilterValue, 1, 160, 32, // Skip to: 20174
/* 11822 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11825 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11834
/* 11829 */   MCD::OPC_Decode, 222, 10, 189, 1, // Opcode: S2_pstorerdtnew_pi
/* 11834 */   MCD::OPC_FilterValue, 1, 144, 32, // Skip to: 20174
/* 11838 */   MCD::OPC_Decode, 219, 10, 189, 1, // Opcode: S2_pstorerdfnew_pi
/* 11843 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 11868
/* 11847 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11850 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11859
/* 11854 */   MCD::OPC_Decode, 156, 11, 187, 1, // Opcode: S2_storerd_pr
/* 11859 */   MCD::OPC_FilterValue, 1, 119, 32, // Skip to: 20174
/* 11863 */   MCD::OPC_Decode, 244, 12, 191, 1, // Opcode: S4_storerd_ur
/* 11868 */   MCD::OPC_FilterValue, 3, 110, 32, // Skip to: 20174
/* 11872 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 11875 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11884
/* 11879 */   MCD::OPC_Decode, 150, 11, 187, 1, // Opcode: S2_storerd_pbr
/* 11884 */   MCD::OPC_FilterValue, 1, 94, 32, // Skip to: 20174
/* 11888 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11891 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11916
/* 11895 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11898 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11907
/* 11902 */   MCD::OPC_Decode, 165, 12, 192, 1, // Opcode: S4_pstorerdt_abs
/* 11907 */   MCD::OPC_FilterValue, 1, 71, 32, // Skip to: 20174
/* 11911 */   MCD::OPC_Decode, 167, 12, 192, 1, // Opcode: S4_pstorerdtnew_abs
/* 11916 */   MCD::OPC_FilterValue, 1, 62, 32, // Skip to: 20174
/* 11920 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 11923 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11932
/* 11927 */   MCD::OPC_Decode, 160, 12, 192, 1, // Opcode: S4_pstorerdf_abs
/* 11932 */   MCD::OPC_FilterValue, 1, 46, 32, // Skip to: 20174
/* 11936 */   MCD::OPC_Decode, 162, 12, 192, 1, // Opcode: S4_pstorerdfnew_abs
/* 11941 */   MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 11949
/* 11945 */   MCD::OPC_Decode, 39, 193, 1, // Opcode: A2_addi
/* 11949 */   MCD::OPC_FilterValue, 12, 166, 5, // Skip to: 13399
/* 11953 */   MCD::OPC_ExtractField, 24, 4,  // Inst{27-24} ...
/* 11956 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11981
/* 11960 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 11963 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11972
/* 11967 */   MCD::OPC_Decode, 220, 11, 194, 1, // Opcode: S2_valignib
/* 11972 */   MCD::OPC_FilterValue, 1, 6, 32, // Skip to: 20174
/* 11976 */   MCD::OPC_Decode, 237, 11, 195, 1, // Opcode: S2_vspliceib
/* 11981 */   MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 12175
/* 11985 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 11988 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 12031
/* 11992 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 11995 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12004
/* 11999 */   MCD::OPC_Decode, 156, 10, 196, 1, // Opcode: S2_extractup_rp
/* 12004 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12013
/* 12008 */   MCD::OPC_Decode, 139, 13, 196, 1, // Opcode: S4_vxaddsubw
/* 12013 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12022
/* 12017 */   MCD::OPC_Decode, 130, 11, 197, 1, // Opcode: S2_shuffoh
/* 12022 */   MCD::OPC_FilterValue, 3, 212, 31, // Skip to: 20174
/* 12026 */   MCD::OPC_Decode, 138, 13, 196, 1, // Opcode: S4_vxaddsubhr
/* 12031 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 12046
/* 12035 */   MCD::OPC_CheckField, 22, 2, 1, 197, 31, // Skip to: 20174
/* 12041 */   MCD::OPC_Decode, 172, 2, 198, 1, // Opcode: A5_vaddhubs
/* 12046 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 12089
/* 12050 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12053 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12062
/* 12057 */   MCD::OPC_Decode, 255, 10, 196, 1, // Opcode: S2_shuffeb
/* 12062 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12071
/* 12066 */   MCD::OPC_Decode, 142, 13, 196, 1, // Opcode: S4_vxsubaddw
/* 12071 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12080
/* 12075 */   MCD::OPC_Decode, 242, 11, 196, 1, // Opcode: S2_vtrunewh
/* 12080 */   MCD::OPC_FilterValue, 3, 154, 31, // Skip to: 20174
/* 12084 */   MCD::OPC_Decode, 141, 13, 196, 1, // Opcode: S4_vxsubaddhr
/* 12089 */   MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 12132
/* 12093 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12096 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12105
/* 12100 */   MCD::OPC_Decode, 129, 11, 197, 1, // Opcode: S2_shuffob
/* 12105 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12114
/* 12109 */   MCD::OPC_Decode, 137, 13, 196, 1, // Opcode: S4_vxaddsubh
/* 12114 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12123
/* 12118 */   MCD::OPC_Decode, 244, 11, 196, 1, // Opcode: S2_vtrunowh
/* 12123 */   MCD::OPC_FilterValue, 3, 111, 31, // Skip to: 20174
/* 12127 */   MCD::OPC_Decode, 130, 12, 196, 1, // Opcode: S4_extractp_rp
/* 12132 */   MCD::OPC_FilterValue, 6, 102, 31, // Skip to: 20174
/* 12136 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12139 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12148
/* 12143 */   MCD::OPC_Decode, 128, 11, 196, 1, // Opcode: S2_shuffeh
/* 12148 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12157
/* 12152 */   MCD::OPC_Decode, 140, 13, 196, 1, // Opcode: S4_vxsubaddh
/* 12157 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12166
/* 12161 */   MCD::OPC_Decode, 162, 10, 196, 1, // Opcode: S2_lfsp
/* 12166 */   MCD::OPC_FilterValue, 3, 68, 31, // Skip to: 20174
/* 12170 */   MCD::OPC_Decode, 138, 10, 196, 1, // Opcode: S2_cabacdecbin
/* 12175 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 12218
/* 12179 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 12182 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12191
/* 12186 */   MCD::OPC_Decode, 221, 11, 199, 1, // Opcode: S2_valignrb
/* 12191 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 12200
/* 12195 */   MCD::OPC_Decode, 238, 11, 200, 1, // Opcode: S2_vsplicerb
/* 12200 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 12209
/* 12204 */   MCD::OPC_Decode, 213, 1, 201, 1, // Opcode: A4_addp_c
/* 12209 */   MCD::OPC_FilterValue, 7, 25, 31, // Skip to: 20174
/* 12213 */   MCD::OPC_Decode, 149, 2, 201, 1, // Opcode: A4_subp_c
/* 12218 */   MCD::OPC_FilterValue, 3, 166, 0, // Skip to: 12388
/* 12222 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 12225 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 12268
/* 12229 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12232 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12241
/* 12236 */   MCD::OPC_Decode, 135, 10, 202, 1, // Opcode: S2_asr_r_vw
/* 12241 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12250
/* 12245 */   MCD::OPC_Decode, 134, 10, 202, 1, // Opcode: S2_asr_r_vh
/* 12250 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12259
/* 12254 */   MCD::OPC_Decode, 249, 9, 202, 1, // Opcode: S2_asr_r_p
/* 12259 */   MCD::OPC_FilterValue, 3, 231, 30, // Skip to: 20174
/* 12263 */   MCD::OPC_Decode, 223, 11, 202, 1, // Opcode: S2_vcrotate
/* 12268 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 12311
/* 12272 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12275 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12284
/* 12279 */   MCD::OPC_Decode, 202, 10, 202, 1, // Opcode: S2_lsr_r_vw
/* 12284 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12293
/* 12288 */   MCD::OPC_Decode, 201, 10, 202, 1, // Opcode: S2_lsr_r_vh
/* 12293 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12302
/* 12297 */   MCD::OPC_Decode, 190, 10, 202, 1, // Opcode: S2_lsr_r_p
/* 12302 */   MCD::OPC_FilterValue, 3, 188, 30, // Skip to: 20174
/* 12306 */   MCD::OPC_Decode, 222, 11, 202, 1, // Opcode: S2_vcnegh
/* 12311 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 12345
/* 12315 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12318 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12327
/* 12322 */   MCD::OPC_Decode, 231, 9, 202, 1, // Opcode: S2_asl_r_vw
/* 12327 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12336
/* 12331 */   MCD::OPC_Decode, 230, 9, 202, 1, // Opcode: S2_asl_r_vh
/* 12336 */   MCD::OPC_FilterValue, 2, 154, 30, // Skip to: 20174
/* 12340 */   MCD::OPC_Decode, 218, 9, 202, 1, // Opcode: S2_asl_r_p
/* 12345 */   MCD::OPC_FilterValue, 3, 145, 30, // Skip to: 20174
/* 12349 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12352 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12361
/* 12356 */   MCD::OPC_Decode, 175, 10, 202, 1, // Opcode: S2_lsl_r_vw
/* 12361 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12370
/* 12365 */   MCD::OPC_Decode, 174, 10, 202, 1, // Opcode: S2_lsl_r_vh
/* 12370 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12379
/* 12374 */   MCD::OPC_Decode, 163, 10, 202, 1, // Opcode: S2_lsl_r_p
/* 12379 */   MCD::OPC_FilterValue, 3, 111, 30, // Skip to: 20174
/* 12383 */   MCD::OPC_Decode, 135, 13, 203, 1, // Opcode: S4_vrcrotate
/* 12388 */   MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 12409
/* 12392 */   MCD::OPC_CheckField, 21, 3, 0, 96, 30, // Skip to: 20174
/* 12398 */   MCD::OPC_CheckField, 13, 1, 0, 90, 30, // Skip to: 20174
/* 12404 */   MCD::OPC_Decode, 201, 9, 204, 1, // Opcode: S2_addasl_rrri
/* 12409 */   MCD::OPC_FilterValue, 5, 48, 0, // Skip to: 12461
/* 12413 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 12416 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12425
/* 12420 */   MCD::OPC_Decode, 133, 10, 205, 1, // Opcode: S2_asr_r_svw_trun
/* 12425 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 12434
/* 12429 */   MCD::OPC_Decode, 155, 9, 205, 1, // Opcode: M4_cmpyi_wh
/* 12434 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 12443
/* 12438 */   MCD::OPC_Decode, 156, 9, 205, 1, // Opcode: M4_cmpyi_whc
/* 12443 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 12452
/* 12447 */   MCD::OPC_Decode, 157, 9, 205, 1, // Opcode: M4_cmpyr_wh
/* 12452 */   MCD::OPC_FilterValue, 7, 38, 30, // Skip to: 20174
/* 12456 */   MCD::OPC_Decode, 158, 9, 205, 1, // Opcode: M4_cmpyr_whc
/* 12461 */   MCD::OPC_FilterValue, 6, 148, 0, // Skip to: 12613
/* 12465 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 12468 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 12511
/* 12472 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12475 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12484
/* 12479 */   MCD::OPC_Decode, 132, 10, 206, 1, // Opcode: S2_asr_r_r_sat
/* 12484 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12493
/* 12488 */   MCD::OPC_Decode, 255, 9, 206, 1, // Opcode: S2_asr_r_r
/* 12493 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12502
/* 12497 */   MCD::OPC_Decode, 254, 10, 206, 1, // Opcode: S2_setbit_r
/* 12502 */   MCD::OPC_FilterValue, 3, 244, 29, // Skip to: 20174
/* 12506 */   MCD::OPC_Decode, 237, 1, 206, 1, // Opcode: A4_cround_rr
/* 12511 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12536
/* 12515 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12518 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12527
/* 12522 */   MCD::OPC_Decode, 196, 10, 206, 1, // Opcode: S2_lsr_r_r
/* 12527 */   MCD::OPC_FilterValue, 2, 219, 29, // Skip to: 20174
/* 12531 */   MCD::OPC_Decode, 147, 10, 206, 1, // Opcode: S2_clrbit_r
/* 12536 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 12579
/* 12540 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12543 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12552
/* 12547 */   MCD::OPC_Decode, 229, 9, 206, 1, // Opcode: S2_asl_r_r_sat
/* 12552 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12561
/* 12556 */   MCD::OPC_Decode, 224, 9, 206, 1, // Opcode: S2_asl_r_r
/* 12561 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12570
/* 12565 */   MCD::OPC_Decode, 217, 11, 206, 1, // Opcode: S2_togglebit_r
/* 12570 */   MCD::OPC_FilterValue, 3, 176, 29, // Skip to: 20174
/* 12574 */   MCD::OPC_Decode, 147, 2, 206, 1, // Opcode: A4_round_rr
/* 12579 */   MCD::OPC_FilterValue, 3, 167, 29, // Skip to: 20174
/* 12583 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 12586 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12595
/* 12590 */   MCD::OPC_Decode, 169, 10, 206, 1, // Opcode: S2_lsl_r_r
/* 12595 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12604
/* 12599 */   MCD::OPC_Decode, 131, 12, 207, 1, // Opcode: S4_lsli
/* 12604 */   MCD::OPC_FilterValue, 3, 142, 29, // Skip to: 20174
/* 12608 */   MCD::OPC_Decode, 148, 2, 206, 1, // Opcode: A4_round_rr_sat
/* 12613 */   MCD::OPC_FilterValue, 7, 161, 0, // Skip to: 12778
/* 12617 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 12620 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12629
/* 12624 */   MCD::OPC_Decode, 219, 11, 151, 1, // Opcode: S2_tstbit_r
/* 12629 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12638
/* 12633 */   MCD::OPC_Decode, 133, 12, 151, 1, // Opcode: S4_ntstbit_r
/* 12638 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12647
/* 12642 */   MCD::OPC_Decode, 184, 2, 151, 1, // Opcode: C2_bitsset
/* 12647 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 12656
/* 12651 */   MCD::OPC_Decode, 233, 2, 151, 1, // Opcode: C4_nbitsset
/* 12656 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 12665
/* 12660 */   MCD::OPC_Decode, 182, 2, 151, 1, // Opcode: C2_bitsclr
/* 12665 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 12674
/* 12669 */   MCD::OPC_Decode, 231, 2, 151, 1, // Opcode: C4_nbitsclr
/* 12674 */   MCD::OPC_FilterValue, 6, 57, 0, // Skip to: 12735
/* 12678 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 12681 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12690
/* 12685 */   MCD::OPC_Decode, 223, 1, 151, 1, // Opcode: A4_cmpbgt
/* 12690 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 12699
/* 12694 */   MCD::OPC_Decode, 227, 1, 151, 1, // Opcode: A4_cmpheq
/* 12699 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 12708
/* 12703 */   MCD::OPC_Decode, 229, 1, 151, 1, // Opcode: A4_cmphgt
/* 12708 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 12717
/* 12712 */   MCD::OPC_Decode, 231, 1, 151, 1, // Opcode: A4_cmphgtu
/* 12717 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 12726
/* 12721 */   MCD::OPC_Decode, 221, 1, 151, 1, // Opcode: A4_cmpbeq
/* 12726 */   MCD::OPC_FilterValue, 7, 20, 29, // Skip to: 20174
/* 12730 */   MCD::OPC_Decode, 225, 1, 151, 1, // Opcode: A4_cmpbgtu
/* 12735 */   MCD::OPC_FilterValue, 7, 11, 29, // Skip to: 20174
/* 12739 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 12742 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12751
/* 12746 */   MCD::OPC_Decode, 172, 3, 151, 1, // Opcode: F2_sfcmpge
/* 12751 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12760
/* 12755 */   MCD::OPC_Decode, 174, 3, 151, 1, // Opcode: F2_sfcmpuo
/* 12760 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 12769
/* 12764 */   MCD::OPC_Decode, 171, 3, 151, 1, // Opcode: F2_sfcmpeq
/* 12769 */   MCD::OPC_FilterValue, 4, 233, 28, // Skip to: 20174
/* 12773 */   MCD::OPC_Decode, 173, 3, 151, 1, // Opcode: F2_sfcmpgt
/* 12778 */   MCD::OPC_FilterValue, 8, 11, 0, // Skip to: 12793
/* 12782 */   MCD::OPC_CheckField, 23, 1, 0, 218, 28, // Skip to: 20174
/* 12788 */   MCD::OPC_Decode, 158, 10, 208, 1, // Opcode: S2_insert_rp
/* 12793 */   MCD::OPC_FilterValue, 9, 33, 0, // Skip to: 12830
/* 12797 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 12800 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12815
/* 12804 */   MCD::OPC_CheckField, 22, 2, 0, 196, 28, // Skip to: 20174
/* 12810 */   MCD::OPC_Decode, 154, 10, 209, 1, // Opcode: S2_extractu_rp
/* 12815 */   MCD::OPC_FilterValue, 1, 187, 28, // Skip to: 20174
/* 12819 */   MCD::OPC_CheckField, 22, 2, 0, 181, 28, // Skip to: 20174
/* 12825 */   MCD::OPC_Decode, 128, 12, 209, 1, // Opcode: S4_extract_rp
/* 12830 */   MCD::OPC_FilterValue, 10, 33, 0, // Skip to: 12867
/* 12834 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 12837 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12846
/* 12841 */   MCD::OPC_Decode, 160, 10, 210, 1, // Opcode: S2_insertp_rp
/* 12846 */   MCD::OPC_FilterValue, 1, 156, 28, // Skip to: 20174
/* 12850 */   MCD::OPC_CheckField, 22, 1, 0, 150, 28, // Skip to: 20174
/* 12856 */   MCD::OPC_CheckField, 5, 3, 0, 144, 28, // Skip to: 20174
/* 12862 */   MCD::OPC_Decode, 185, 9, 210, 1, // Opcode: M4_xor_xacc
/* 12867 */   MCD::OPC_FilterValue, 11, 93, 1, // Skip to: 13220
/* 12871 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 12874 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 12917
/* 12878 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 12881 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12890
/* 12885 */   MCD::OPC_Decode, 253, 9, 211, 1, // Opcode: S2_asr_r_p_or
/* 12890 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12899
/* 12894 */   MCD::OPC_Decode, 194, 10, 211, 1, // Opcode: S2_lsr_r_p_or
/* 12899 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12908
/* 12903 */   MCD::OPC_Decode, 222, 9, 211, 1, // Opcode: S2_asl_r_p_or
/* 12908 */   MCD::OPC_FilterValue, 3, 94, 28, // Skip to: 20174
/* 12912 */   MCD::OPC_Decode, 167, 10, 211, 1, // Opcode: S2_lsl_r_p_or
/* 12917 */   MCD::OPC_FilterValue, 1, 118, 0, // Skip to: 13039
/* 12921 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 12924 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12949
/* 12928 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 12931 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12940
/* 12935 */   MCD::OPC_Decode, 164, 2, 212, 1, // Opcode: A4_vrmaxh
/* 12940 */   MCD::OPC_FilterValue, 1, 62, 28, // Skip to: 20174
/* 12944 */   MCD::OPC_Decode, 165, 2, 212, 1, // Opcode: A4_vrmaxuh
/* 12949 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 12974
/* 12953 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 12956 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12965
/* 12960 */   MCD::OPC_Decode, 167, 2, 212, 1, // Opcode: A4_vrmaxw
/* 12965 */   MCD::OPC_FilterValue, 1, 37, 28, // Skip to: 20174
/* 12969 */   MCD::OPC_Decode, 166, 2, 212, 1, // Opcode: A4_vrmaxuw
/* 12974 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 12999
/* 12978 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 12981 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12990
/* 12985 */   MCD::OPC_Decode, 168, 2, 212, 1, // Opcode: A4_vrminh
/* 12990 */   MCD::OPC_FilterValue, 1, 12, 28, // Skip to: 20174
/* 12994 */   MCD::OPC_Decode, 169, 2, 212, 1, // Opcode: A4_vrminuh
/* 12999 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 13024
/* 13003 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13006 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13015
/* 13010 */   MCD::OPC_Decode, 171, 2, 212, 1, // Opcode: A4_vrminw
/* 13015 */   MCD::OPC_FilterValue, 1, 243, 27, // Skip to: 20174
/* 13019 */   MCD::OPC_Decode, 170, 2, 212, 1, // Opcode: A4_vrminuw
/* 13024 */   MCD::OPC_FilterValue, 7, 234, 27, // Skip to: 20174
/* 13028 */   MCD::OPC_CheckField, 13, 1, 1, 228, 27, // Skip to: 20174
/* 13034 */   MCD::OPC_Decode, 224, 11, 211, 1, // Opcode: S2_vrcnegh
/* 13039 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 13082
/* 13043 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 13046 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13055
/* 13050 */   MCD::OPC_Decode, 251, 9, 211, 1, // Opcode: S2_asr_r_p_and
/* 13055 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13064
/* 13059 */   MCD::OPC_Decode, 192, 10, 211, 1, // Opcode: S2_lsr_r_p_and
/* 13064 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13073
/* 13068 */   MCD::OPC_Decode, 220, 9, 211, 1, // Opcode: S2_asl_r_p_and
/* 13073 */   MCD::OPC_FilterValue, 3, 185, 27, // Skip to: 20174
/* 13077 */   MCD::OPC_Decode, 165, 10, 211, 1, // Opcode: S2_lsl_r_p_and
/* 13082 */   MCD::OPC_FilterValue, 3, 39, 0, // Skip to: 13125
/* 13086 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 13089 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13098
/* 13093 */   MCD::OPC_Decode, 254, 9, 211, 1, // Opcode: S2_asr_r_p_xor
/* 13098 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13107
/* 13102 */   MCD::OPC_Decode, 195, 10, 211, 1, // Opcode: S2_lsr_r_p_xor
/* 13107 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13116
/* 13111 */   MCD::OPC_Decode, 223, 9, 211, 1, // Opcode: S2_asl_r_p_xor
/* 13116 */   MCD::OPC_FilterValue, 3, 142, 27, // Skip to: 20174
/* 13120 */   MCD::OPC_Decode, 168, 10, 211, 1, // Opcode: S2_lsl_r_p_xor
/* 13125 */   MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 13168
/* 13129 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 13132 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13141
/* 13136 */   MCD::OPC_Decode, 252, 9, 211, 1, // Opcode: S2_asr_r_p_nac
/* 13141 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13150
/* 13145 */   MCD::OPC_Decode, 193, 10, 211, 1, // Opcode: S2_lsr_r_p_nac
/* 13150 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13159
/* 13154 */   MCD::OPC_Decode, 221, 9, 211, 1, // Opcode: S2_asl_r_p_nac
/* 13159 */   MCD::OPC_FilterValue, 3, 99, 27, // Skip to: 20174
/* 13163 */   MCD::OPC_Decode, 166, 10, 211, 1, // Opcode: S2_lsl_r_p_nac
/* 13168 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 13177
/* 13172 */   MCD::OPC_Decode, 136, 13, 213, 1, // Opcode: S4_vrcrotate_acc
/* 13177 */   MCD::OPC_FilterValue, 6, 81, 27, // Skip to: 20174
/* 13181 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 13184 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13193
/* 13188 */   MCD::OPC_Decode, 250, 9, 211, 1, // Opcode: S2_asr_r_p_acc
/* 13193 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13202
/* 13197 */   MCD::OPC_Decode, 191, 10, 211, 1, // Opcode: S2_lsr_r_p_acc
/* 13202 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13211
/* 13206 */   MCD::OPC_Decode, 219, 9, 211, 1, // Opcode: S2_asl_r_p_acc
/* 13211 */   MCD::OPC_FilterValue, 3, 47, 27, // Skip to: 20174
/* 13215 */   MCD::OPC_Decode, 164, 10, 211, 1, // Opcode: S2_lsl_r_p_acc
/* 13220 */   MCD::OPC_FilterValue, 12, 38, 27, // Skip to: 20174
/* 13224 */   MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 13227 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 13270
/* 13231 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 13234 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13243
/* 13238 */   MCD::OPC_Decode, 131, 10, 214, 1, // Opcode: S2_asr_r_r_or
/* 13243 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13252
/* 13247 */   MCD::OPC_Decode, 129, 10, 214, 1, // Opcode: S2_asr_r_r_and
/* 13252 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13261
/* 13256 */   MCD::OPC_Decode, 130, 10, 214, 1, // Opcode: S2_asr_r_r_nac
/* 13261 */   MCD::OPC_FilterValue, 3, 253, 26, // Skip to: 20174
/* 13265 */   MCD::OPC_Decode, 128, 10, 214, 1, // Opcode: S2_asr_r_r_acc
/* 13270 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 13313
/* 13274 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 13277 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13286
/* 13281 */   MCD::OPC_Decode, 200, 10, 214, 1, // Opcode: S2_lsr_r_r_or
/* 13286 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13295
/* 13290 */   MCD::OPC_Decode, 198, 10, 214, 1, // Opcode: S2_lsr_r_r_and
/* 13295 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13304
/* 13299 */   MCD::OPC_Decode, 199, 10, 214, 1, // Opcode: S2_lsr_r_r_nac
/* 13304 */   MCD::OPC_FilterValue, 3, 210, 26, // Skip to: 20174
/* 13308 */   MCD::OPC_Decode, 197, 10, 214, 1, // Opcode: S2_lsr_r_r_acc
/* 13313 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 13356
/* 13317 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 13320 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13329
/* 13324 */   MCD::OPC_Decode, 228, 9, 214, 1, // Opcode: S2_asl_r_r_or
/* 13329 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13338
/* 13333 */   MCD::OPC_Decode, 226, 9, 214, 1, // Opcode: S2_asl_r_r_and
/* 13338 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13347
/* 13342 */   MCD::OPC_Decode, 227, 9, 214, 1, // Opcode: S2_asl_r_r_nac
/* 13347 */   MCD::OPC_FilterValue, 3, 167, 26, // Skip to: 20174
/* 13351 */   MCD::OPC_Decode, 225, 9, 214, 1, // Opcode: S2_asl_r_r_acc
/* 13356 */   MCD::OPC_FilterValue, 3, 158, 26, // Skip to: 20174
/* 13360 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 13363 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13372
/* 13367 */   MCD::OPC_Decode, 173, 10, 214, 1, // Opcode: S2_lsl_r_r_or
/* 13372 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13381
/* 13376 */   MCD::OPC_Decode, 171, 10, 214, 1, // Opcode: S2_lsl_r_r_and
/* 13381 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13390
/* 13385 */   MCD::OPC_Decode, 172, 10, 214, 1, // Opcode: S2_lsl_r_r_nac
/* 13390 */   MCD::OPC_FilterValue, 3, 124, 26, // Skip to: 20174
/* 13394 */   MCD::OPC_Decode, 170, 10, 214, 1, // Opcode: S2_lsl_r_r_acc
/* 13399 */   MCD::OPC_FilterValue, 13, 222, 6, // Skip to: 15161
/* 13403 */   MCD::OPC_ExtractField, 24, 4,  // Inst{27-24} ...
/* 13406 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13415
/* 13410 */   MCD::OPC_Decode, 204, 10, 198, 1, // Opcode: S2_parityp
/* 13415 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13424
/* 13419 */   MCD::OPC_Decode, 216, 2, 215, 1, // Opcode: C2_vmux
/* 13424 */   MCD::OPC_FilterValue, 2, 71, 1, // Skip to: 13755
/* 13428 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 13431 */   MCD::OPC_FilterValue, 0, 53, 0, // Skip to: 13488
/* 13435 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 13438 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 13463
/* 13442 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13445 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13454
/* 13449 */   MCD::OPC_Decode, 176, 1, 216, 1, // Opcode: A2_vcmpweq
/* 13454 */   MCD::OPC_FilterValue, 1, 60, 26, // Skip to: 20174
/* 13458 */   MCD::OPC_Decode, 153, 2, 216, 1, // Opcode: A4_vcmpbeq_any
/* 13463 */   MCD::OPC_FilterValue, 1, 51, 26, // Skip to: 20174
/* 13467 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 13470 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13479
/* 13474 */   MCD::OPC_Decode, 195, 2, 216, 1, // Opcode: C2_cmpeqp
/* 13479 */   MCD::OPC_FilterValue, 3, 35, 26, // Skip to: 20174
/* 13483 */   MCD::OPC_Decode, 163, 3, 216, 1, // Opcode: F2_dfcmpeq
/* 13488 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 13525
/* 13492 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 13495 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13510
/* 13499 */   MCD::OPC_CheckField, 13, 1, 0, 13, 26, // Skip to: 20174
/* 13505 */   MCD::OPC_Decode, 177, 1, 216, 1, // Opcode: A2_vcmpwgt
/* 13510 */   MCD::OPC_FilterValue, 1, 4, 26, // Skip to: 20174
/* 13514 */   MCD::OPC_CheckField, 21, 2, 3, 254, 25, // Skip to: 20174
/* 13520 */   MCD::OPC_Decode, 165, 3, 216, 1, // Opcode: F2_dfcmpgt
/* 13525 */   MCD::OPC_FilterValue, 2, 53, 0, // Skip to: 13582
/* 13529 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 13532 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 13557
/* 13536 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13539 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13548
/* 13543 */   MCD::OPC_Decode, 178, 1, 216, 1, // Opcode: A2_vcmpwgtu
/* 13548 */   MCD::OPC_FilterValue, 1, 222, 25, // Skip to: 20174
/* 13552 */   MCD::OPC_Decode, 155, 2, 216, 1, // Opcode: A4_vcmpbgt
/* 13557 */   MCD::OPC_FilterValue, 1, 213, 25, // Skip to: 20174
/* 13561 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 13564 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13573
/* 13568 */   MCD::OPC_Decode, 200, 2, 216, 1, // Opcode: C2_cmpgtp
/* 13573 */   MCD::OPC_FilterValue, 3, 197, 25, // Skip to: 20174
/* 13577 */   MCD::OPC_Decode, 164, 3, 216, 1, // Opcode: F2_dfcmpge
/* 13582 */   MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 13629
/* 13586 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 13589 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 13614
/* 13593 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13596 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13605
/* 13600 */   MCD::OPC_Decode, 173, 1, 216, 1, // Opcode: A2_vcmpheq
/* 13605 */   MCD::OPC_FilterValue, 1, 165, 25, // Skip to: 20174
/* 13609 */   MCD::OPC_Decode, 152, 2, 217, 1, // Opcode: A4_tlbmatch
/* 13614 */   MCD::OPC_FilterValue, 1, 156, 25, // Skip to: 20174
/* 13618 */   MCD::OPC_CheckField, 21, 2, 3, 150, 25, // Skip to: 20174
/* 13624 */   MCD::OPC_Decode, 166, 3, 216, 1, // Opcode: F2_dfcmpuo
/* 13629 */   MCD::OPC_FilterValue, 4, 43, 0, // Skip to: 13676
/* 13633 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 13636 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 13661
/* 13640 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13643 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13652
/* 13647 */   MCD::OPC_Decode, 174, 1, 216, 1, // Opcode: A2_vcmphgt
/* 13652 */   MCD::OPC_FilterValue, 1, 118, 25, // Skip to: 20174
/* 13656 */   MCD::OPC_Decode, 220, 1, 216, 1, // Opcode: A4_boundscheck_lo
/* 13661 */   MCD::OPC_FilterValue, 1, 109, 25, // Skip to: 20174
/* 13665 */   MCD::OPC_CheckField, 21, 2, 0, 103, 25, // Skip to: 20174
/* 13671 */   MCD::OPC_Decode, 203, 2, 216, 1, // Opcode: C2_cmpgtup
/* 13676 */   MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 13713
/* 13680 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 13683 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13698
/* 13687 */   MCD::OPC_CheckField, 23, 1, 0, 81, 25, // Skip to: 20174
/* 13693 */   MCD::OPC_Decode, 175, 1, 216, 1, // Opcode: A2_vcmphgtu
/* 13698 */   MCD::OPC_FilterValue, 1, 72, 25, // Skip to: 20174
/* 13702 */   MCD::OPC_CheckField, 23, 1, 0, 66, 25, // Skip to: 20174
/* 13708 */   MCD::OPC_Decode, 219, 1, 216, 1, // Opcode: A4_boundscheck_hi
/* 13713 */   MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 13734
/* 13717 */   MCD::OPC_CheckField, 23, 1, 0, 51, 25, // Skip to: 20174
/* 13723 */   MCD::OPC_CheckField, 13, 1, 0, 45, 25, // Skip to: 20174
/* 13729 */   MCD::OPC_Decode, 171, 1, 216, 1, // Opcode: A2_vcmpbeq
/* 13734 */   MCD::OPC_FilterValue, 7, 36, 25, // Skip to: 20174
/* 13738 */   MCD::OPC_CheckField, 23, 1, 0, 30, 25, // Skip to: 20174
/* 13744 */   MCD::OPC_CheckField, 13, 1, 0, 24, 25, // Skip to: 20174
/* 13750 */   MCD::OPC_Decode, 172, 1, 216, 1, // Opcode: A2_vcmpbgtu
/* 13755 */   MCD::OPC_FilterValue, 3, 67, 2, // Skip to: 14338
/* 13759 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 13762 */   MCD::OPC_FilterValue, 0, 74, 0, // Skip to: 13840
/* 13766 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 13769 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13778
/* 13773 */   MCD::OPC_Decode, 154, 1, 196, 1, // Opcode: A2_vaddub
/* 13778 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13787
/* 13782 */   MCD::OPC_Decode, 204, 1, 197, 1, // Opcode: A2_vsubub
/* 13787 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13796
/* 13791 */   MCD::OPC_Decode, 162, 1, 196, 1, // Opcode: A2_vavgub
/* 13796 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 13805
/* 13800 */   MCD::OPC_Decode, 168, 1, 196, 1, // Opcode: A2_vavgw
/* 13805 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 13814
/* 13809 */   MCD::OPC_Decode, 192, 1, 197, 1, // Opcode: A2_vnavgh
/* 13814 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 13823
/* 13818 */   MCD::OPC_Decode, 188, 1, 197, 1, // Opcode: A2_vminub
/* 13823 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 13832
/* 13827 */   MCD::OPC_Decode, 182, 1, 197, 1, // Opcode: A2_vmaxub
/* 13832 */   MCD::OPC_FilterValue, 7, 194, 24, // Skip to: 20174
/* 13836 */   MCD::OPC_Decode, 48, 196, 1, // Opcode: A2_andp
/* 13840 */   MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 13919
/* 13844 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 13847 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13856
/* 13851 */   MCD::OPC_Decode, 155, 1, 196, 1, // Opcode: A2_vaddubs
/* 13856 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13865
/* 13860 */   MCD::OPC_Decode, 205, 1, 197, 1, // Opcode: A2_vsububs
/* 13865 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13874
/* 13869 */   MCD::OPC_Decode, 163, 1, 196, 1, // Opcode: A2_vavgubr
/* 13874 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 13883
/* 13878 */   MCD::OPC_Decode, 170, 1, 196, 1, // Opcode: A2_vavgwr
/* 13883 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 13892
/* 13887 */   MCD::OPC_Decode, 194, 1, 197, 1, // Opcode: A2_vnavghr
/* 13892 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 13901
/* 13896 */   MCD::OPC_Decode, 187, 1, 197, 1, // Opcode: A2_vminh
/* 13901 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 13910
/* 13905 */   MCD::OPC_Decode, 181, 1, 197, 1, // Opcode: A2_vmaxh
/* 13910 */   MCD::OPC_FilterValue, 7, 116, 24, // Skip to: 20174
/* 13914 */   MCD::OPC_Decode, 215, 1, 197, 1, // Opcode: A4_andnp
/* 13919 */   MCD::OPC_FilterValue, 2, 74, 0, // Skip to: 13997
/* 13923 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 13926 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 13935
/* 13930 */   MCD::OPC_Decode, 152, 1, 196, 1, // Opcode: A2_vaddh
/* 13935 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 13944
/* 13939 */   MCD::OPC_Decode, 202, 1, 197, 1, // Opcode: A2_vsubh
/* 13944 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 13953
/* 13948 */   MCD::OPC_Decode, 159, 1, 196, 1, // Opcode: A2_vavgh
/* 13953 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 13962
/* 13957 */   MCD::OPC_Decode, 169, 1, 196, 1, // Opcode: A2_vavgwcr
/* 13962 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 13971
/* 13966 */   MCD::OPC_Decode, 193, 1, 197, 1, // Opcode: A2_vnavghcr
/* 13971 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 13980
/* 13975 */   MCD::OPC_Decode, 189, 1, 197, 1, // Opcode: A2_vminuh
/* 13980 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 13989
/* 13984 */   MCD::OPC_Decode, 183, 1, 197, 1, // Opcode: A2_vmaxuh
/* 13989 */   MCD::OPC_FilterValue, 7, 37, 24, // Skip to: 20174
/* 13993 */   MCD::OPC_Decode, 72, 196, 1, // Opcode: A2_orp
/* 13997 */   MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 14076
/* 14001 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14004 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14013
/* 14008 */   MCD::OPC_Decode, 153, 1, 196, 1, // Opcode: A2_vaddhs
/* 14013 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14022
/* 14017 */   MCD::OPC_Decode, 203, 1, 197, 1, // Opcode: A2_vsubhs
/* 14022 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 14031
/* 14026 */   MCD::OPC_Decode, 161, 1, 196, 1, // Opcode: A2_vavghr
/* 14031 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 14040
/* 14035 */   MCD::OPC_Decode, 166, 1, 196, 1, // Opcode: A2_vavguw
/* 14040 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 14049
/* 14044 */   MCD::OPC_Decode, 195, 1, 197, 1, // Opcode: A2_vnavgw
/* 14049 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 14058
/* 14053 */   MCD::OPC_Decode, 191, 1, 197, 1, // Opcode: A2_vminw
/* 14058 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 14067
/* 14062 */   MCD::OPC_Decode, 185, 1, 197, 1, // Opcode: A2_vmaxw
/* 14067 */   MCD::OPC_FilterValue, 7, 215, 23, // Skip to: 20174
/* 14071 */   MCD::OPC_Decode, 244, 1, 197, 1, // Opcode: A4_ornp
/* 14076 */   MCD::OPC_FilterValue, 4, 74, 0, // Skip to: 14154
/* 14080 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14083 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14092
/* 14087 */   MCD::OPC_Decode, 156, 1, 196, 1, // Opcode: A2_vadduhs
/* 14092 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14101
/* 14096 */   MCD::OPC_Decode, 206, 1, 197, 1, // Opcode: A2_vsubuhs
/* 14101 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 14110
/* 14105 */   MCD::OPC_Decode, 160, 1, 196, 1, // Opcode: A2_vavghcr
/* 14110 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 14119
/* 14114 */   MCD::OPC_Decode, 167, 1, 196, 1, // Opcode: A2_vavguwr
/* 14119 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 14128
/* 14123 */   MCD::OPC_Decode, 197, 1, 197, 1, // Opcode: A2_vnavgwr
/* 14128 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 14137
/* 14132 */   MCD::OPC_Decode, 190, 1, 197, 1, // Opcode: A2_vminuw
/* 14137 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 14145
/* 14141 */   MCD::OPC_Decode, 58, 196, 1, // Opcode: A2_maxp
/* 14145 */   MCD::OPC_FilterValue, 7, 137, 23, // Skip to: 20174
/* 14149 */   MCD::OPC_Decode, 210, 1, 196, 1, // Opcode: A2_xorp
/* 14154 */   MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 14213
/* 14158 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14161 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14170
/* 14165 */   MCD::OPC_Decode, 157, 1, 196, 1, // Opcode: A2_vaddw
/* 14170 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14179
/* 14174 */   MCD::OPC_Decode, 207, 1, 197, 1, // Opcode: A2_vsubw
/* 14179 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 14188
/* 14183 */   MCD::OPC_Decode, 164, 1, 196, 1, // Opcode: A2_vavguh
/* 14188 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 14196
/* 14192 */   MCD::OPC_Decode, 41, 196, 1, // Opcode: A2_addpsat
/* 14196 */   MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 14205
/* 14200 */   MCD::OPC_Decode, 184, 1, 197, 1, // Opcode: A2_vmaxuw
/* 14205 */   MCD::OPC_FilterValue, 6, 77, 23, // Skip to: 20174
/* 14209 */   MCD::OPC_Decode, 60, 196, 1, // Opcode: A2_maxup
/* 14213 */   MCD::OPC_FilterValue, 6, 64, 0, // Skip to: 14281
/* 14217 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14220 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14229
/* 14224 */   MCD::OPC_Decode, 158, 1, 196, 1, // Opcode: A2_vaddws
/* 14229 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14238
/* 14233 */   MCD::OPC_Decode, 208, 1, 197, 1, // Opcode: A2_vsubws
/* 14238 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 14247
/* 14242 */   MCD::OPC_Decode, 165, 1, 196, 1, // Opcode: A2_vavguhr
/* 14247 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 14255
/* 14251 */   MCD::OPC_Decode, 45, 196, 1, // Opcode: A2_addspl
/* 14255 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 14264
/* 14259 */   MCD::OPC_Decode, 196, 1, 197, 1, // Opcode: A2_vnavgwcr
/* 14264 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 14272
/* 14268 */   MCD::OPC_Decode, 62, 197, 1, // Opcode: A2_minp
/* 14272 */   MCD::OPC_FilterValue, 6, 10, 23, // Skip to: 20174
/* 14276 */   MCD::OPC_Decode, 180, 1, 197, 1, // Opcode: A2_vmaxb
/* 14281 */   MCD::OPC_FilterValue, 7, 1, 23, // Skip to: 20174
/* 14285 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14288 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14296
/* 14292 */   MCD::OPC_Decode, 40, 196, 1, // Opcode: A2_addp
/* 14296 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 14304
/* 14300 */   MCD::OPC_Decode, 116, 197, 1, // Opcode: A2_subp
/* 14304 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 14312
/* 14308 */   MCD::OPC_Decode, 44, 196, 1, // Opcode: A2_addsph
/* 14312 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 14320
/* 14316 */   MCD::OPC_Decode, 64, 197, 1, // Opcode: A2_minup
/* 14320 */   MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 14329
/* 14324 */   MCD::OPC_Decode, 186, 1, 197, 1, // Opcode: A2_vminb
/* 14329 */   MCD::OPC_FilterValue, 7, 209, 22, // Skip to: 20174
/* 14333 */   MCD::OPC_Decode, 242, 1, 206, 1, // Opcode: A4_modwrapu
/* 14338 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 14363
/* 14342 */   MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 14345 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14354
/* 14349 */   MCD::OPC_Decode, 222, 13, 218, 1, // Opcode: dep_S2_packhl
/* 14354 */   MCD::OPC_FilterValue, 1, 184, 22, // Skip to: 20174
/* 14358 */   MCD::OPC_Decode, 216, 1, 218, 1, // Opcode: A4_bitsplit
/* 14363 */   MCD::OPC_FilterValue, 5, 47, 1, // Skip to: 14670
/* 14367 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 14370 */   MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 14409
/* 14374 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 14377 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14385
/* 14381 */   MCD::OPC_Decode, 36, 219, 1, // Opcode: A2_addh_l16_ll
/* 14385 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 14393
/* 14389 */   MCD::OPC_Decode, 35, 219, 1, // Opcode: A2_addh_l16_hl
/* 14393 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 14401
/* 14397 */   MCD::OPC_Decode, 38, 219, 1, // Opcode: A2_addh_l16_sat_ll
/* 14401 */   MCD::OPC_FilterValue, 6, 137, 22, // Skip to: 20174
/* 14405 */   MCD::OPC_Decode, 37, 219, 1, // Opcode: A2_addh_l16_sat_hl
/* 14409 */   MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 14448
/* 14413 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 14416 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14424
/* 14420 */   MCD::OPC_Decode, 113, 219, 1, // Opcode: A2_subh_l16_ll
/* 14424 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 14432
/* 14428 */   MCD::OPC_Decode, 112, 219, 1, // Opcode: A2_subh_l16_hl
/* 14432 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 14440
/* 14436 */   MCD::OPC_Decode, 115, 219, 1, // Opcode: A2_subh_l16_sat_ll
/* 14440 */   MCD::OPC_FilterValue, 6, 98, 22, // Skip to: 20174
/* 14444 */   MCD::OPC_Decode, 114, 219, 1, // Opcode: A2_subh_l16_sat_hl
/* 14448 */   MCD::OPC_FilterValue, 2, 67, 0, // Skip to: 14519
/* 14452 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 14455 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14463
/* 14459 */   MCD::OPC_Decode, 30, 219, 1, // Opcode: A2_addh_h16_ll
/* 14463 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 14471
/* 14467 */   MCD::OPC_Decode, 29, 219, 1, // Opcode: A2_addh_h16_lh
/* 14471 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 14479
/* 14475 */   MCD::OPC_Decode, 28, 219, 1, // Opcode: A2_addh_h16_hl
/* 14479 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 14487
/* 14483 */   MCD::OPC_Decode, 27, 219, 1, // Opcode: A2_addh_h16_hh
/* 14487 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 14495
/* 14491 */   MCD::OPC_Decode, 34, 219, 1, // Opcode: A2_addh_h16_sat_ll
/* 14495 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 14503
/* 14499 */   MCD::OPC_Decode, 33, 219, 1, // Opcode: A2_addh_h16_sat_lh
/* 14503 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 14511
/* 14507 */   MCD::OPC_Decode, 32, 219, 1, // Opcode: A2_addh_h16_sat_hl
/* 14511 */   MCD::OPC_FilterValue, 7, 27, 22, // Skip to: 20174
/* 14515 */   MCD::OPC_Decode, 31, 219, 1, // Opcode: A2_addh_h16_sat_hh
/* 14519 */   MCD::OPC_FilterValue, 3, 67, 0, // Skip to: 14590
/* 14523 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 14526 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14534
/* 14530 */   MCD::OPC_Decode, 107, 219, 1, // Opcode: A2_subh_h16_ll
/* 14534 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 14542
/* 14538 */   MCD::OPC_Decode, 106, 219, 1, // Opcode: A2_subh_h16_lh
/* 14542 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 14550
/* 14546 */   MCD::OPC_Decode, 105, 219, 1, // Opcode: A2_subh_h16_hl
/* 14550 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 14558
/* 14554 */   MCD::OPC_Decode, 104, 219, 1, // Opcode: A2_subh_h16_hh
/* 14558 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 14566
/* 14562 */   MCD::OPC_Decode, 111, 219, 1, // Opcode: A2_subh_h16_sat_ll
/* 14566 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 14574
/* 14570 */   MCD::OPC_Decode, 110, 219, 1, // Opcode: A2_subh_h16_sat_lh
/* 14574 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 14582
/* 14578 */   MCD::OPC_Decode, 109, 219, 1, // Opcode: A2_subh_h16_sat_hl
/* 14582 */   MCD::OPC_FilterValue, 7, 212, 21, // Skip to: 20174
/* 14586 */   MCD::OPC_Decode, 108, 219, 1, // Opcode: A2_subh_h16_sat_hh
/* 14590 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 14615
/* 14594 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 14597 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14606
/* 14601 */   MCD::OPC_Decode, 220, 13, 206, 1, // Opcode: dep_A2_addsat
/* 14606 */   MCD::OPC_FilterValue, 1, 188, 21, // Skip to: 20174
/* 14610 */   MCD::OPC_Decode, 221, 13, 219, 1, // Opcode: dep_A2_subsat
/* 14615 */   MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 14638
/* 14619 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 14622 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14630
/* 14626 */   MCD::OPC_Decode, 61, 219, 1, // Opcode: A2_min
/* 14630 */   MCD::OPC_FilterValue, 1, 164, 21, // Skip to: 20174
/* 14634 */   MCD::OPC_Decode, 63, 219, 1, // Opcode: A2_minu
/* 14638 */   MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 14661
/* 14642 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 14645 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 14653
/* 14649 */   MCD::OPC_Decode, 57, 206, 1, // Opcode: A2_max
/* 14653 */   MCD::OPC_FilterValue, 1, 141, 21, // Skip to: 20174
/* 14657 */   MCD::OPC_Decode, 59, 206, 1, // Opcode: A2_maxu
/* 14661 */   MCD::OPC_FilterValue, 7, 133, 21, // Skip to: 20174
/* 14665 */   MCD::OPC_Decode, 139, 12, 206, 1, // Opcode: S4_parity
/* 14670 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 14695
/* 14674 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 14677 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14686
/* 14681 */   MCD::OPC_Decode, 184, 3, 220, 1, // Opcode: F2_sfimm_p
/* 14686 */   MCD::OPC_FilterValue, 1, 108, 21, // Skip to: 20174
/* 14690 */   MCD::OPC_Decode, 183, 3, 220, 1, // Opcode: F2_sfimm_n
/* 14695 */   MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 14710
/* 14699 */   MCD::OPC_CheckField, 23, 1, 0, 93, 21, // Skip to: 20174
/* 14705 */   MCD::OPC_Decode, 163, 9, 221, 1, // Opcode: M4_mpyrr_addi
/* 14710 */   MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 14719
/* 14714 */   MCD::OPC_Decode, 160, 9, 222, 1, // Opcode: M4_mpyri_addi
/* 14719 */   MCD::OPC_FilterValue, 9, 21, 0, // Skip to: 14744
/* 14723 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 14726 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14735
/* 14730 */   MCD::OPC_Decode, 168, 3, 223, 1, // Opcode: F2_dfimm_p
/* 14735 */   MCD::OPC_FilterValue, 1, 59, 21, // Skip to: 20174
/* 14739 */   MCD::OPC_Decode, 167, 3, 223, 1, // Opcode: F2_dfimm_n
/* 14744 */   MCD::OPC_FilterValue, 10, 30, 0, // Skip to: 14778
/* 14748 */   MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 14751 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14760
/* 14755 */   MCD::OPC_Decode, 134, 12, 224, 1, // Opcode: S4_or_andi
/* 14760 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14769
/* 14764 */   MCD::OPC_Decode, 135, 12, 225, 1, // Opcode: S4_or_andix
/* 14769 */   MCD::OPC_FilterValue, 2, 25, 21, // Skip to: 20174
/* 14773 */   MCD::OPC_Decode, 136, 12, 224, 1, // Opcode: S4_or_ori
/* 14778 */   MCD::OPC_FilterValue, 11, 21, 0, // Skip to: 14803
/* 14782 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 14785 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14794
/* 14789 */   MCD::OPC_Decode, 247, 11, 226, 1, // Opcode: S4_addaddi
/* 14794 */   MCD::OPC_FilterValue, 1, 0, 21, // Skip to: 20174
/* 14798 */   MCD::OPC_Decode, 132, 13, 227, 1, // Opcode: S4_subaddi
/* 14803 */   MCD::OPC_FilterValue, 12, 140, 0, // Skip to: 14947
/* 14807 */   MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 14810 */   MCD::OPC_FilterValue, 0, 36, 0, // Skip to: 14850
/* 14814 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 14817 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14826
/* 14821 */   MCD::OPC_Decode, 154, 2, 228, 1, // Opcode: A4_vcmpbeqi
/* 14826 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14835
/* 14830 */   MCD::OPC_Decode, 156, 2, 228, 1, // Opcode: A4_vcmpbgti
/* 14835 */   MCD::OPC_FilterValue, 2, 215, 20, // Skip to: 20174
/* 14839 */   MCD::OPC_CheckField, 12, 1, 0, 209, 20, // Skip to: 20174
/* 14845 */   MCD::OPC_Decode, 157, 2, 229, 1, // Opcode: A4_vcmpbgtui
/* 14850 */   MCD::OPC_FilterValue, 1, 36, 0, // Skip to: 14890
/* 14854 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 14857 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14866
/* 14861 */   MCD::OPC_Decode, 158, 2, 228, 1, // Opcode: A4_vcmpheqi
/* 14866 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14875
/* 14870 */   MCD::OPC_Decode, 159, 2, 228, 1, // Opcode: A4_vcmphgti
/* 14875 */   MCD::OPC_FilterValue, 2, 175, 20, // Skip to: 20174
/* 14879 */   MCD::OPC_CheckField, 12, 1, 0, 169, 20, // Skip to: 20174
/* 14885 */   MCD::OPC_Decode, 160, 2, 229, 1, // Opcode: A4_vcmphgtui
/* 14890 */   MCD::OPC_FilterValue, 2, 160, 20, // Skip to: 20174
/* 14894 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 14897 */   MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 14923
/* 14901 */   MCD::OPC_CheckField, 23, 1, 1, 11, 0, // Skip to: 14918
/* 14907 */   MCD::OPC_CheckField, 10, 3, 0, 5, 0, // Skip to: 14918
/* 14913 */   MCD::OPC_Decode, 162, 3, 230, 1, // Opcode: F2_dfclass
/* 14918 */   MCD::OPC_Decode, 161, 2, 228, 1, // Opcode: A4_vcmpweqi
/* 14923 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 14932
/* 14927 */   MCD::OPC_Decode, 162, 2, 228, 1, // Opcode: A4_vcmpwgti
/* 14932 */   MCD::OPC_FilterValue, 2, 118, 20, // Skip to: 20174
/* 14936 */   MCD::OPC_CheckField, 12, 1, 0, 112, 20, // Skip to: 20174
/* 14942 */   MCD::OPC_Decode, 163, 2, 229, 1, // Opcode: A4_vcmpwgtui
/* 14947 */   MCD::OPC_FilterValue, 13, 78, 0, // Skip to: 15029
/* 14951 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 14954 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 14979
/* 14958 */   MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 14961 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14970
/* 14965 */   MCD::OPC_Decode, 222, 1, 231, 1, // Opcode: A4_cmpbeqi
/* 14970 */   MCD::OPC_FilterValue, 1, 80, 20, // Skip to: 20174
/* 14974 */   MCD::OPC_Decode, 228, 1, 232, 1, // Opcode: A4_cmpheqi
/* 14979 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 15004
/* 14983 */   MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 14986 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 14995
/* 14990 */   MCD::OPC_Decode, 224, 1, 231, 1, // Opcode: A4_cmpbgti
/* 14995 */   MCD::OPC_FilterValue, 1, 55, 20, // Skip to: 20174
/* 14999 */   MCD::OPC_Decode, 230, 1, 232, 1, // Opcode: A4_cmphgti
/* 15004 */   MCD::OPC_FilterValue, 2, 46, 20, // Skip to: 20174
/* 15008 */   MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 15011 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15020
/* 15015 */   MCD::OPC_Decode, 226, 1, 231, 1, // Opcode: A4_cmpbgtui
/* 15020 */   MCD::OPC_FilterValue, 1, 30, 20, // Skip to: 20174
/* 15024 */   MCD::OPC_Decode, 232, 1, 231, 1, // Opcode: A4_cmphgtui
/* 15029 */   MCD::OPC_FilterValue, 14, 103, 0, // Skip to: 15136
/* 15033 */   MCD::OPC_ExtractField, 1, 2,  // Inst{2-1} ...
/* 15036 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 15061
/* 15040 */   MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 15043 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15052
/* 15047 */   MCD::OPC_Decode, 250, 11, 233, 1, // Opcode: S4_andi_asl_ri
/* 15052 */   MCD::OPC_FilterValue, 1, 254, 19, // Skip to: 20174
/* 15056 */   MCD::OPC_Decode, 251, 11, 233, 1, // Opcode: S4_andi_lsr_ri
/* 15061 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 15086
/* 15065 */   MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 15068 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15077
/* 15072 */   MCD::OPC_Decode, 137, 12, 233, 1, // Opcode: S4_ori_asl_ri
/* 15077 */   MCD::OPC_FilterValue, 1, 229, 19, // Skip to: 20174
/* 15081 */   MCD::OPC_Decode, 138, 12, 233, 1, // Opcode: S4_ori_lsr_ri
/* 15086 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 15111
/* 15090 */   MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 15093 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15102
/* 15097 */   MCD::OPC_Decode, 248, 11, 233, 1, // Opcode: S4_addi_asl_ri
/* 15102 */   MCD::OPC_FilterValue, 1, 204, 19, // Skip to: 20174
/* 15106 */   MCD::OPC_Decode, 249, 11, 233, 1, // Opcode: S4_addi_lsr_ri
/* 15111 */   MCD::OPC_FilterValue, 3, 195, 19, // Skip to: 20174
/* 15115 */   MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 15118 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15127
/* 15122 */   MCD::OPC_Decode, 133, 13, 233, 1, // Opcode: S4_subi_asl_ri
/* 15127 */   MCD::OPC_FilterValue, 1, 179, 19, // Skip to: 20174
/* 15131 */   MCD::OPC_Decode, 134, 13, 233, 1, // Opcode: S4_subi_lsr_ri
/* 15136 */   MCD::OPC_FilterValue, 15, 170, 19, // Skip to: 20174
/* 15140 */   MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 15143 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15152
/* 15147 */   MCD::OPC_Decode, 162, 9, 234, 1, // Opcode: M4_mpyri_addr_u2
/* 15152 */   MCD::OPC_FilterValue, 1, 154, 19, // Skip to: 20174
/* 15156 */   MCD::OPC_Decode, 161, 9, 235, 1, // Opcode: M4_mpyri_addr
/* 15161 */   MCD::OPC_FilterValue, 14, 206, 16, // Skip to: 19467
/* 15165 */   MCD::OPC_ExtractField, 23, 5,  // Inst{27-23} ...
/* 15168 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 15183
/* 15172 */   MCD::OPC_CheckField, 13, 1, 0, 132, 19, // Skip to: 20174
/* 15178 */   MCD::OPC_Decode, 171, 8, 236, 1, // Opcode: M2_mpysip
/* 15183 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 15198
/* 15187 */   MCD::OPC_CheckField, 13, 1, 0, 117, 19, // Skip to: 20174
/* 15193 */   MCD::OPC_Decode, 170, 8, 236, 1, // Opcode: M2_mpysin
/* 15198 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 15213
/* 15202 */   MCD::OPC_CheckField, 13, 1, 0, 102, 19, // Skip to: 20174
/* 15208 */   MCD::OPC_Decode, 165, 7, 237, 1, // Opcode: M2_macsip
/* 15213 */   MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 15228
/* 15217 */   MCD::OPC_CheckField, 13, 1, 0, 87, 19, // Skip to: 20174
/* 15223 */   MCD::OPC_Decode, 164, 7, 237, 1, // Opcode: M2_macsin
/* 15228 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 15243
/* 15232 */   MCD::OPC_CheckField, 13, 1, 0, 72, 19, // Skip to: 20174
/* 15238 */   MCD::OPC_Decode, 131, 7, 238, 1, // Opcode: M2_accii
/* 15243 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 15258
/* 15247 */   MCD::OPC_CheckField, 13, 1, 0, 57, 19, // Skip to: 20174
/* 15253 */   MCD::OPC_Decode, 225, 8, 238, 1, // Opcode: M2_naccii
/* 15258 */   MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 15273
/* 15262 */   MCD::OPC_CheckField, 21, 2, 0, 42, 19, // Skip to: 20174
/* 15268 */   MCD::OPC_Decode, 164, 9, 239, 1, // Opcode: M4_mpyrr_addr
/* 15273 */   MCD::OPC_FilterValue, 8, 139, 0, // Skip to: 15416
/* 15277 */   MCD::OPC_ExtractField, 5, 2,  // Inst{6-5} ...
/* 15280 */   MCD::OPC_FilterValue, 0, 30, 0, // Skip to: 15314
/* 15284 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15287 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15296
/* 15291 */   MCD::OPC_Decode, 151, 8, 218, 1, // Opcode: M2_mpyd_ll_s0
/* 15296 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15305
/* 15300 */   MCD::OPC_Decode, 167, 8, 218, 1, // Opcode: M2_mpyd_rnd_ll_s0
/* 15305 */   MCD::OPC_FilterValue, 2, 1, 19, // Skip to: 20174
/* 15309 */   MCD::OPC_Decode, 213, 8, 218, 1, // Opcode: M2_mpyud_ll_s0
/* 15314 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 15348
/* 15318 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15321 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15330
/* 15325 */   MCD::OPC_Decode, 149, 8, 218, 1, // Opcode: M2_mpyd_lh_s0
/* 15330 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15339
/* 15334 */   MCD::OPC_Decode, 165, 8, 218, 1, // Opcode: M2_mpyd_rnd_lh_s0
/* 15339 */   MCD::OPC_FilterValue, 2, 223, 18, // Skip to: 20174
/* 15343 */   MCD::OPC_Decode, 211, 8, 218, 1, // Opcode: M2_mpyud_lh_s0
/* 15348 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 15382
/* 15352 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15355 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15364
/* 15359 */   MCD::OPC_Decode, 147, 8, 218, 1, // Opcode: M2_mpyd_hl_s0
/* 15364 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15373
/* 15368 */   MCD::OPC_Decode, 163, 8, 218, 1, // Opcode: M2_mpyd_rnd_hl_s0
/* 15373 */   MCD::OPC_FilterValue, 2, 189, 18, // Skip to: 20174
/* 15377 */   MCD::OPC_Decode, 209, 8, 218, 1, // Opcode: M2_mpyud_hl_s0
/* 15382 */   MCD::OPC_FilterValue, 3, 180, 18, // Skip to: 20174
/* 15386 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15389 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15398
/* 15393 */   MCD::OPC_Decode, 145, 8, 218, 1, // Opcode: M2_mpyd_hh_s0
/* 15398 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15407
/* 15402 */   MCD::OPC_Decode, 161, 8, 218, 1, // Opcode: M2_mpyd_rnd_hh_s0
/* 15407 */   MCD::OPC_FilterValue, 2, 155, 18, // Skip to: 20174
/* 15411 */   MCD::OPC_Decode, 207, 8, 218, 1, // Opcode: M2_mpyud_hh_s0
/* 15416 */   MCD::OPC_FilterValue, 9, 139, 0, // Skip to: 15559
/* 15420 */   MCD::OPC_ExtractField, 5, 2,  // Inst{6-5} ...
/* 15423 */   MCD::OPC_FilterValue, 0, 30, 0, // Skip to: 15457
/* 15427 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15430 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15439
/* 15434 */   MCD::OPC_Decode, 152, 8, 218, 1, // Opcode: M2_mpyd_ll_s1
/* 15439 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15448
/* 15443 */   MCD::OPC_Decode, 168, 8, 218, 1, // Opcode: M2_mpyd_rnd_ll_s1
/* 15448 */   MCD::OPC_FilterValue, 2, 114, 18, // Skip to: 20174
/* 15452 */   MCD::OPC_Decode, 214, 8, 218, 1, // Opcode: M2_mpyud_ll_s1
/* 15457 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 15491
/* 15461 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15464 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15473
/* 15468 */   MCD::OPC_Decode, 150, 8, 218, 1, // Opcode: M2_mpyd_lh_s1
/* 15473 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15482
/* 15477 */   MCD::OPC_Decode, 166, 8, 218, 1, // Opcode: M2_mpyd_rnd_lh_s1
/* 15482 */   MCD::OPC_FilterValue, 2, 80, 18, // Skip to: 20174
/* 15486 */   MCD::OPC_Decode, 212, 8, 218, 1, // Opcode: M2_mpyud_lh_s1
/* 15491 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 15525
/* 15495 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15498 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15507
/* 15502 */   MCD::OPC_Decode, 148, 8, 218, 1, // Opcode: M2_mpyd_hl_s1
/* 15507 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15516
/* 15511 */   MCD::OPC_Decode, 164, 8, 218, 1, // Opcode: M2_mpyd_rnd_hl_s1
/* 15516 */   MCD::OPC_FilterValue, 2, 46, 18, // Skip to: 20174
/* 15520 */   MCD::OPC_Decode, 210, 8, 218, 1, // Opcode: M2_mpyud_hl_s1
/* 15525 */   MCD::OPC_FilterValue, 3, 37, 18, // Skip to: 20174
/* 15529 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15532 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15541
/* 15536 */   MCD::OPC_Decode, 146, 8, 218, 1, // Opcode: M2_mpyd_hh_s1
/* 15541 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15550
/* 15545 */   MCD::OPC_Decode, 162, 8, 218, 1, // Opcode: M2_mpyd_rnd_hh_s1
/* 15550 */   MCD::OPC_FilterValue, 2, 12, 18, // Skip to: 20174
/* 15554 */   MCD::OPC_Decode, 208, 8, 218, 1, // Opcode: M2_mpyud_hh_s1
/* 15559 */   MCD::OPC_FilterValue, 10, 133, 0, // Skip to: 15696
/* 15563 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 15566 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 15591
/* 15570 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15573 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15582
/* 15577 */   MCD::OPC_Decode, 155, 7, 218, 1, // Opcode: M2_dpmpyss_s0
/* 15582 */   MCD::OPC_FilterValue, 2, 236, 17, // Skip to: 20174
/* 15586 */   MCD::OPC_Decode, 158, 7, 218, 1, // Opcode: M2_dpmpyuu_s0
/* 15591 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 15616
/* 15595 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15598 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15607
/* 15602 */   MCD::OPC_Decode, 138, 7, 218, 1, // Opcode: M2_cmpyi_s0
/* 15607 */   MCD::OPC_FilterValue, 2, 211, 17, // Skip to: 20174
/* 15611 */   MCD::OPC_Decode, 190, 9, 218, 1, // Opcode: M5_vmpybsu
/* 15616 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 15631
/* 15620 */   MCD::OPC_CheckField, 21, 2, 0, 196, 17, // Skip to: 20174
/* 15626 */   MCD::OPC_Decode, 139, 7, 218, 1, // Opcode: M2_cmpyr_s0
/* 15631 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 15646
/* 15635 */   MCD::OPC_CheckField, 21, 2, 0, 181, 17, // Skip to: 20174
/* 15641 */   MCD::OPC_Decode, 251, 8, 218, 1, // Opcode: M2_vmpy2s_s0
/* 15646 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 15671
/* 15650 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15653 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15662
/* 15657 */   MCD::OPC_Decode, 144, 7, 218, 1, // Opcode: M2_cmpys_s0
/* 15662 */   MCD::OPC_FilterValue, 2, 156, 17, // Skip to: 20174
/* 15666 */   MCD::OPC_Decode, 146, 7, 218, 1, // Opcode: M2_cmpysc_s0
/* 15671 */   MCD::OPC_FilterValue, 7, 147, 17, // Skip to: 20174
/* 15675 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15678 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15687
/* 15682 */   MCD::OPC_Decode, 255, 8, 218, 1, // Opcode: M2_vmpy2su_s0
/* 15687 */   MCD::OPC_FilterValue, 2, 131, 17, // Skip to: 20174
/* 15691 */   MCD::OPC_Decode, 170, 9, 218, 1, // Opcode: M4_pmpyw
/* 15696 */   MCD::OPC_FilterValue, 11, 83, 0, // Skip to: 15783
/* 15700 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 15703 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 15718
/* 15707 */   MCD::OPC_CheckField, 21, 2, 0, 109, 17, // Skip to: 20174
/* 15713 */   MCD::OPC_Decode, 191, 9, 218, 1, // Opcode: M5_vmpybuu
/* 15718 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 15733
/* 15722 */   MCD::OPC_CheckField, 21, 2, 0, 94, 17, // Skip to: 20174
/* 15728 */   MCD::OPC_Decode, 253, 8, 218, 1, // Opcode: M2_vmpy2s_s1
/* 15733 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 15758
/* 15737 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15740 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15749
/* 15744 */   MCD::OPC_Decode, 145, 7, 218, 1, // Opcode: M2_cmpys_s1
/* 15749 */   MCD::OPC_FilterValue, 2, 69, 17, // Skip to: 20174
/* 15753 */   MCD::OPC_Decode, 147, 7, 218, 1, // Opcode: M2_cmpysc_s1
/* 15758 */   MCD::OPC_FilterValue, 7, 60, 17, // Skip to: 20174
/* 15762 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15765 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15774
/* 15769 */   MCD::OPC_Decode, 128, 9, 218, 1, // Opcode: M2_vmpy2su_s1
/* 15774 */   MCD::OPC_FilterValue, 2, 44, 17, // Skip to: 20174
/* 15778 */   MCD::OPC_Decode, 172, 9, 218, 1, // Opcode: M4_vpmpyh
/* 15783 */   MCD::OPC_FilterValue, 12, 175, 0, // Skip to: 15962
/* 15787 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 15790 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 15833
/* 15794 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15797 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15806
/* 15801 */   MCD::OPC_Decode, 143, 8, 240, 1, // Opcode: M2_mpyd_acc_ll_s0
/* 15806 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15815
/* 15810 */   MCD::OPC_Decode, 159, 8, 240, 1, // Opcode: M2_mpyd_nac_ll_s0
/* 15815 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 15824
/* 15819 */   MCD::OPC_Decode, 205, 8, 240, 1, // Opcode: M2_mpyud_acc_ll_s0
/* 15824 */   MCD::OPC_FilterValue, 3, 250, 16, // Skip to: 20174
/* 15828 */   MCD::OPC_Decode, 221, 8, 240, 1, // Opcode: M2_mpyud_nac_ll_s0
/* 15833 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 15876
/* 15837 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15840 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15849
/* 15844 */   MCD::OPC_Decode, 141, 8, 240, 1, // Opcode: M2_mpyd_acc_lh_s0
/* 15849 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15858
/* 15853 */   MCD::OPC_Decode, 157, 8, 240, 1, // Opcode: M2_mpyd_nac_lh_s0
/* 15858 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 15867
/* 15862 */   MCD::OPC_Decode, 203, 8, 240, 1, // Opcode: M2_mpyud_acc_lh_s0
/* 15867 */   MCD::OPC_FilterValue, 3, 207, 16, // Skip to: 20174
/* 15871 */   MCD::OPC_Decode, 219, 8, 240, 1, // Opcode: M2_mpyud_nac_lh_s0
/* 15876 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 15919
/* 15880 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15883 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15892
/* 15887 */   MCD::OPC_Decode, 139, 8, 240, 1, // Opcode: M2_mpyd_acc_hl_s0
/* 15892 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15901
/* 15896 */   MCD::OPC_Decode, 155, 8, 240, 1, // Opcode: M2_mpyd_nac_hl_s0
/* 15901 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 15910
/* 15905 */   MCD::OPC_Decode, 201, 8, 240, 1, // Opcode: M2_mpyud_acc_hl_s0
/* 15910 */   MCD::OPC_FilterValue, 3, 164, 16, // Skip to: 20174
/* 15914 */   MCD::OPC_Decode, 217, 8, 240, 1, // Opcode: M2_mpyud_nac_hl_s0
/* 15919 */   MCD::OPC_FilterValue, 3, 155, 16, // Skip to: 20174
/* 15923 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15926 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15935
/* 15930 */   MCD::OPC_Decode, 137, 8, 240, 1, // Opcode: M2_mpyd_acc_hh_s0
/* 15935 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15944
/* 15939 */   MCD::OPC_Decode, 153, 8, 240, 1, // Opcode: M2_mpyd_nac_hh_s0
/* 15944 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 15953
/* 15948 */   MCD::OPC_Decode, 199, 8, 240, 1, // Opcode: M2_mpyud_acc_hh_s0
/* 15953 */   MCD::OPC_FilterValue, 3, 121, 16, // Skip to: 20174
/* 15957 */   MCD::OPC_Decode, 215, 8, 240, 1, // Opcode: M2_mpyud_nac_hh_s0
/* 15962 */   MCD::OPC_FilterValue, 13, 175, 0, // Skip to: 16141
/* 15966 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 15969 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 16012
/* 15973 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 15976 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 15985
/* 15980 */   MCD::OPC_Decode, 144, 8, 240, 1, // Opcode: M2_mpyd_acc_ll_s1
/* 15985 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 15994
/* 15989 */   MCD::OPC_Decode, 160, 8, 240, 1, // Opcode: M2_mpyd_nac_ll_s1
/* 15994 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16003
/* 15998 */   MCD::OPC_Decode, 206, 8, 240, 1, // Opcode: M2_mpyud_acc_ll_s1
/* 16003 */   MCD::OPC_FilterValue, 3, 71, 16, // Skip to: 20174
/* 16007 */   MCD::OPC_Decode, 222, 8, 240, 1, // Opcode: M2_mpyud_nac_ll_s1
/* 16012 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 16055
/* 16016 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16019 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16028
/* 16023 */   MCD::OPC_Decode, 142, 8, 240, 1, // Opcode: M2_mpyd_acc_lh_s1
/* 16028 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16037
/* 16032 */   MCD::OPC_Decode, 158, 8, 240, 1, // Opcode: M2_mpyd_nac_lh_s1
/* 16037 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16046
/* 16041 */   MCD::OPC_Decode, 204, 8, 240, 1, // Opcode: M2_mpyud_acc_lh_s1
/* 16046 */   MCD::OPC_FilterValue, 3, 28, 16, // Skip to: 20174
/* 16050 */   MCD::OPC_Decode, 220, 8, 240, 1, // Opcode: M2_mpyud_nac_lh_s1
/* 16055 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 16098
/* 16059 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16062 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16071
/* 16066 */   MCD::OPC_Decode, 140, 8, 240, 1, // Opcode: M2_mpyd_acc_hl_s1
/* 16071 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16080
/* 16075 */   MCD::OPC_Decode, 156, 8, 240, 1, // Opcode: M2_mpyd_nac_hl_s1
/* 16080 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16089
/* 16084 */   MCD::OPC_Decode, 202, 8, 240, 1, // Opcode: M2_mpyud_acc_hl_s1
/* 16089 */   MCD::OPC_FilterValue, 3, 241, 15, // Skip to: 20174
/* 16093 */   MCD::OPC_Decode, 218, 8, 240, 1, // Opcode: M2_mpyud_nac_hl_s1
/* 16098 */   MCD::OPC_FilterValue, 3, 232, 15, // Skip to: 20174
/* 16102 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16105 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16114
/* 16109 */   MCD::OPC_Decode, 138, 8, 240, 1, // Opcode: M2_mpyd_acc_hh_s1
/* 16114 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16123
/* 16118 */   MCD::OPC_Decode, 154, 8, 240, 1, // Opcode: M2_mpyd_nac_hh_s1
/* 16123 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16132
/* 16127 */   MCD::OPC_Decode, 200, 8, 240, 1, // Opcode: M2_mpyud_acc_hh_s1
/* 16132 */   MCD::OPC_FilterValue, 3, 198, 15, // Skip to: 20174
/* 16136 */   MCD::OPC_Decode, 216, 8, 240, 1, // Opcode: M2_mpyud_nac_hh_s1
/* 16141 */   MCD::OPC_FilterValue, 14, 170, 0, // Skip to: 16315
/* 16145 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16148 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 16191
/* 16152 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16155 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16164
/* 16159 */   MCD::OPC_Decode, 152, 7, 240, 1, // Opcode: M2_dpmpyss_acc_s0
/* 16164 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16173
/* 16168 */   MCD::OPC_Decode, 153, 7, 240, 1, // Opcode: M2_dpmpyss_nac_s0
/* 16173 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16182
/* 16177 */   MCD::OPC_Decode, 156, 7, 240, 1, // Opcode: M2_dpmpyuu_acc_s0
/* 16182 */   MCD::OPC_FilterValue, 3, 148, 15, // Skip to: 20174
/* 16186 */   MCD::OPC_Decode, 157, 7, 240, 1, // Opcode: M2_dpmpyuu_nac_s0
/* 16191 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 16216
/* 16195 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16198 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16207
/* 16202 */   MCD::OPC_Decode, 132, 7, 240, 1, // Opcode: M2_cmaci_s0
/* 16207 */   MCD::OPC_FilterValue, 1, 123, 15, // Skip to: 20174
/* 16211 */   MCD::OPC_Decode, 241, 8, 240, 1, // Opcode: M2_vmac2
/* 16216 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 16231
/* 16220 */   MCD::OPC_CheckField, 21, 2, 0, 108, 15, // Skip to: 20174
/* 16226 */   MCD::OPC_Decode, 133, 7, 240, 1, // Opcode: M2_cmacr_s0
/* 16231 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 16256
/* 16235 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16238 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16247
/* 16242 */   MCD::OPC_Decode, 245, 8, 240, 1, // Opcode: M2_vmac2s_s0
/* 16247 */   MCD::OPC_FilterValue, 3, 83, 15, // Skip to: 20174
/* 16251 */   MCD::OPC_Decode, 247, 8, 240, 1, // Opcode: M2_vmac2su_s0
/* 16256 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 16281
/* 16260 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16263 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16272
/* 16267 */   MCD::OPC_Decode, 134, 7, 240, 1, // Opcode: M2_cmacs_s0
/* 16272 */   MCD::OPC_FilterValue, 2, 58, 15, // Skip to: 20174
/* 16276 */   MCD::OPC_Decode, 136, 7, 240, 1, // Opcode: M2_cmacsc_s0
/* 16281 */   MCD::OPC_FilterValue, 7, 49, 15, // Skip to: 20174
/* 16285 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16288 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16297
/* 16292 */   MCD::OPC_Decode, 148, 7, 240, 1, // Opcode: M2_cnacs_s0
/* 16297 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16306
/* 16301 */   MCD::OPC_Decode, 171, 9, 240, 1, // Opcode: M4_pmpyw_acc
/* 16306 */   MCD::OPC_FilterValue, 2, 24, 15, // Skip to: 20174
/* 16310 */   MCD::OPC_Decode, 150, 7, 240, 1, // Opcode: M2_cnacsc_s0
/* 16315 */   MCD::OPC_FilterValue, 15, 112, 0, // Skip to: 16431
/* 16319 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16322 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 16347
/* 16326 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16329 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16338
/* 16333 */   MCD::OPC_Decode, 189, 9, 240, 1, // Opcode: M5_vmacbuu
/* 16338 */   MCD::OPC_FilterValue, 2, 248, 14, // Skip to: 20174
/* 16342 */   MCD::OPC_Decode, 188, 9, 240, 1, // Opcode: M5_vmacbsu
/* 16347 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 16372
/* 16351 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16354 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16363
/* 16358 */   MCD::OPC_Decode, 246, 8, 240, 1, // Opcode: M2_vmac2s_s1
/* 16363 */   MCD::OPC_FilterValue, 3, 223, 14, // Skip to: 20174
/* 16367 */   MCD::OPC_Decode, 248, 8, 240, 1, // Opcode: M2_vmac2su_s1
/* 16372 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 16397
/* 16376 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16379 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16388
/* 16383 */   MCD::OPC_Decode, 135, 7, 240, 1, // Opcode: M2_cmacs_s1
/* 16388 */   MCD::OPC_FilterValue, 2, 198, 14, // Skip to: 20174
/* 16392 */   MCD::OPC_Decode, 137, 7, 240, 1, // Opcode: M2_cmacsc_s1
/* 16397 */   MCD::OPC_FilterValue, 7, 189, 14, // Skip to: 20174
/* 16401 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16404 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16413
/* 16408 */   MCD::OPC_Decode, 149, 7, 240, 1, // Opcode: M2_cnacs_s1
/* 16413 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16422
/* 16417 */   MCD::OPC_Decode, 173, 9, 240, 1, // Opcode: M4_vpmpyh_acc
/* 16422 */   MCD::OPC_FilterValue, 2, 164, 14, // Skip to: 20174
/* 16426 */   MCD::OPC_Decode, 151, 7, 240, 1, // Opcode: M2_cnacsc_s1
/* 16431 */   MCD::OPC_FilterValue, 16, 3, 1, // Skip to: 16694
/* 16435 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16438 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 16481
/* 16442 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16445 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16454
/* 16449 */   MCD::OPC_Decode, 135, 9, 196, 1, // Opcode: M2_vrcmpyi_s0
/* 16454 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16463
/* 16458 */   MCD::OPC_Decode, 228, 8, 197, 1, // Opcode: M2_vabsdiffw
/* 16463 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16472
/* 16467 */   MCD::OPC_Decode, 136, 9, 196, 1, // Opcode: M2_vrcmpyi_s0c
/* 16472 */   MCD::OPC_FilterValue, 3, 114, 14, // Skip to: 20174
/* 16476 */   MCD::OPC_Decode, 227, 8, 197, 1, // Opcode: M2_vabsdiffh
/* 16481 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 16515
/* 16485 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16488 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16497
/* 16492 */   MCD::OPC_Decode, 137, 9, 196, 1, // Opcode: M2_vrcmpyr_s0
/* 16497 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16506
/* 16501 */   MCD::OPC_Decode, 198, 1, 196, 1, // Opcode: A2_vraddub
/* 16506 */   MCD::OPC_FilterValue, 3, 80, 14, // Skip to: 20174
/* 16510 */   MCD::OPC_Decode, 138, 9, 196, 1, // Opcode: M2_vrcmpyr_s0c
/* 16515 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 16549
/* 16519 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16522 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16531
/* 16526 */   MCD::OPC_Decode, 149, 9, 196, 1, // Opcode: M2_vrmpy_s0
/* 16531 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16540
/* 16535 */   MCD::OPC_Decode, 180, 9, 196, 1, // Opcode: M4_vrmpyoh_s0
/* 16540 */   MCD::OPC_FilterValue, 2, 46, 14, // Skip to: 20174
/* 16544 */   MCD::OPC_Decode, 200, 1, 196, 1, // Opcode: A2_vrsadub
/* 16549 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 16574
/* 16553 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16556 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16565
/* 16560 */   MCD::OPC_Decode, 239, 8, 196, 1, // Opcode: M2_vdmpys_s0
/* 16565 */   MCD::OPC_FilterValue, 2, 21, 14, // Skip to: 20174
/* 16569 */   MCD::OPC_Decode, 176, 9, 196, 1, // Opcode: M4_vrmpyeh_s0
/* 16574 */   MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 16617
/* 16578 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16581 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16590
/* 16585 */   MCD::OPC_Decode, 188, 7, 196, 1, // Opcode: M2_mmpyl_s0
/* 16590 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16599
/* 16594 */   MCD::OPC_Decode, 186, 7, 196, 1, // Opcode: M2_mmpyl_rs0
/* 16599 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16608
/* 16603 */   MCD::OPC_Decode, 196, 7, 196, 1, // Opcode: M2_mmpyul_s0
/* 16608 */   MCD::OPC_FilterValue, 3, 234, 13, // Skip to: 20174
/* 16612 */   MCD::OPC_Decode, 194, 7, 196, 1, // Opcode: M2_mmpyul_rs0
/* 16617 */   MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 16651
/* 16621 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16624 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16633
/* 16628 */   MCD::OPC_Decode, 249, 8, 196, 1, // Opcode: M2_vmpy2es_s0
/* 16633 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16642
/* 16637 */   MCD::OPC_Decode, 232, 8, 196, 1, // Opcode: M2_vcmpy_s0_sat_r
/* 16642 */   MCD::OPC_FilterValue, 2, 200, 13, // Skip to: 20174
/* 16646 */   MCD::OPC_Decode, 231, 8, 196, 1, // Opcode: M2_vcmpy_s0_sat_i
/* 16651 */   MCD::OPC_FilterValue, 7, 191, 13, // Skip to: 20174
/* 16655 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16658 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16667
/* 16662 */   MCD::OPC_Decode, 184, 7, 196, 1, // Opcode: M2_mmpyh_s0
/* 16667 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16676
/* 16671 */   MCD::OPC_Decode, 182, 7, 196, 1, // Opcode: M2_mmpyh_rs0
/* 16676 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16685
/* 16680 */   MCD::OPC_Decode, 192, 7, 196, 1, // Opcode: M2_mmpyuh_s0
/* 16685 */   MCD::OPC_FilterValue, 3, 157, 13, // Skip to: 20174
/* 16689 */   MCD::OPC_Decode, 190, 7, 196, 1, // Opcode: M2_mmpyuh_rs0
/* 16694 */   MCD::OPC_FilterValue, 17, 215, 0, // Skip to: 16913
/* 16698 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16701 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 16735
/* 16705 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16708 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16717
/* 16712 */   MCD::OPC_Decode, 195, 9, 196, 1, // Opcode: M5_vrmpybuu
/* 16717 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16726
/* 16721 */   MCD::OPC_Decode, 187, 9, 196, 1, // Opcode: M5_vdmpybsu
/* 16726 */   MCD::OPC_FilterValue, 2, 116, 13, // Skip to: 20174
/* 16730 */   MCD::OPC_Decode, 194, 9, 196, 1, // Opcode: M5_vrmpybsu
/* 16735 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 16750
/* 16739 */   MCD::OPC_CheckField, 21, 2, 1, 101, 13, // Skip to: 20174
/* 16745 */   MCD::OPC_Decode, 181, 9, 196, 1, // Opcode: M4_vrmpyoh_s1
/* 16750 */   MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 16793
/* 16754 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16757 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16766
/* 16761 */   MCD::OPC_Decode, 240, 8, 196, 1, // Opcode: M2_vdmpys_s1
/* 16766 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16775
/* 16770 */   MCD::OPC_Decode, 143, 9, 196, 1, // Opcode: M2_vrcmpys_s1_h
/* 16775 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16784
/* 16779 */   MCD::OPC_Decode, 177, 9, 196, 1, // Opcode: M4_vrmpyeh_s1
/* 16784 */   MCD::OPC_FilterValue, 3, 58, 13, // Skip to: 20174
/* 16788 */   MCD::OPC_Decode, 144, 9, 196, 1, // Opcode: M2_vrcmpys_s1_l
/* 16793 */   MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 16836
/* 16797 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16800 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16809
/* 16804 */   MCD::OPC_Decode, 189, 7, 196, 1, // Opcode: M2_mmpyl_s1
/* 16809 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16818
/* 16813 */   MCD::OPC_Decode, 187, 7, 196, 1, // Opcode: M2_mmpyl_rs1
/* 16818 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16827
/* 16822 */   MCD::OPC_Decode, 197, 7, 196, 1, // Opcode: M2_mmpyul_s1
/* 16827 */   MCD::OPC_FilterValue, 3, 15, 13, // Skip to: 20174
/* 16831 */   MCD::OPC_Decode, 195, 7, 196, 1, // Opcode: M2_mmpyul_rs1
/* 16836 */   MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 16870
/* 16840 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16843 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16852
/* 16847 */   MCD::OPC_Decode, 250, 8, 196, 1, // Opcode: M2_vmpy2es_s1
/* 16852 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16861
/* 16856 */   MCD::OPC_Decode, 234, 8, 196, 1, // Opcode: M2_vcmpy_s1_sat_r
/* 16861 */   MCD::OPC_FilterValue, 2, 237, 12, // Skip to: 20174
/* 16865 */   MCD::OPC_Decode, 233, 8, 196, 1, // Opcode: M2_vcmpy_s1_sat_i
/* 16870 */   MCD::OPC_FilterValue, 7, 228, 12, // Skip to: 20174
/* 16874 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 16877 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 16886
/* 16881 */   MCD::OPC_Decode, 185, 7, 196, 1, // Opcode: M2_mmpyh_s1
/* 16886 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 16895
/* 16890 */   MCD::OPC_Decode, 183, 7, 196, 1, // Opcode: M2_mmpyh_rs1
/* 16895 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 16904
/* 16899 */   MCD::OPC_Decode, 193, 7, 196, 1, // Opcode: M2_mmpyuh_s1
/* 16904 */   MCD::OPC_FilterValue, 3, 194, 12, // Skip to: 20174
/* 16908 */   MCD::OPC_Decode, 191, 7, 196, 1, // Opcode: M2_mmpyuh_rs1
/* 16913 */   MCD::OPC_FilterValue, 18, 66, 0, // Skip to: 16983
/* 16917 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16920 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 16941
/* 16924 */   MCD::OPC_CheckField, 21, 2, 0, 172, 12, // Skip to: 20174
/* 16930 */   MCD::OPC_CheckField, 13, 1, 0, 166, 12, // Skip to: 20174
/* 16936 */   MCD::OPC_Decode, 237, 8, 198, 1, // Opcode: M2_vdmpyrs_s0
/* 16941 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 16962
/* 16945 */   MCD::OPC_CheckField, 21, 2, 0, 151, 12, // Skip to: 20174
/* 16951 */   MCD::OPC_CheckField, 13, 1, 0, 145, 12, // Skip to: 20174
/* 16957 */   MCD::OPC_Decode, 130, 9, 198, 1, // Opcode: M2_vradduh
/* 16962 */   MCD::OPC_FilterValue, 7, 136, 12, // Skip to: 20174
/* 16966 */   MCD::OPC_CheckField, 21, 2, 1, 130, 12, // Skip to: 20174
/* 16972 */   MCD::OPC_CheckField, 13, 1, 0, 124, 12, // Skip to: 20174
/* 16978 */   MCD::OPC_Decode, 129, 9, 198, 1, // Opcode: M2_vraddh
/* 16983 */   MCD::OPC_FilterValue, 19, 66, 0, // Skip to: 17053
/* 16987 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 16990 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 17011
/* 16994 */   MCD::OPC_CheckField, 21, 2, 0, 102, 12, // Skip to: 20174
/* 17000 */   MCD::OPC_CheckField, 13, 1, 0, 96, 12, // Skip to: 20174
/* 17006 */   MCD::OPC_Decode, 238, 8, 198, 1, // Opcode: M2_vdmpyrs_s1
/* 17011 */   MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 17032
/* 17015 */   MCD::OPC_CheckField, 21, 2, 1, 81, 12, // Skip to: 20174
/* 17021 */   MCD::OPC_CheckField, 13, 1, 0, 75, 12, // Skip to: 20174
/* 17027 */   MCD::OPC_Decode, 146, 9, 198, 1, // Opcode: M2_vrcmpys_s1rp_h
/* 17032 */   MCD::OPC_FilterValue, 7, 66, 12, // Skip to: 20174
/* 17036 */   MCD::OPC_CheckField, 21, 2, 1, 60, 12, // Skip to: 20174
/* 17042 */   MCD::OPC_CheckField, 13, 1, 0, 54, 12, // Skip to: 20174
/* 17048 */   MCD::OPC_Decode, 147, 9, 198, 1, // Opcode: M2_vrcmpys_s1rp_l
/* 17053 */   MCD::OPC_FilterValue, 20, 3, 1, // Skip to: 17316
/* 17057 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17060 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 17085
/* 17064 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17067 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17076
/* 17071 */   MCD::OPC_Decode, 131, 9, 210, 1, // Opcode: M2_vrcmaci_s0
/* 17076 */   MCD::OPC_FilterValue, 2, 22, 12, // Skip to: 20174
/* 17080 */   MCD::OPC_Decode, 132, 9, 210, 1, // Opcode: M2_vrcmaci_s0c
/* 17085 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 17128
/* 17089 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17092 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17101
/* 17096 */   MCD::OPC_Decode, 133, 9, 210, 1, // Opcode: M2_vrcmacr_s0
/* 17101 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17110
/* 17105 */   MCD::OPC_Decode, 186, 9, 210, 1, // Opcode: M5_vdmacbsu
/* 17110 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 17119
/* 17114 */   MCD::OPC_Decode, 199, 1, 210, 1, // Opcode: A2_vraddub_acc
/* 17119 */   MCD::OPC_FilterValue, 3, 235, 11, // Skip to: 20174
/* 17123 */   MCD::OPC_Decode, 134, 9, 210, 1, // Opcode: M2_vrcmacr_s0c
/* 17128 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 17162
/* 17132 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17135 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17144
/* 17139 */   MCD::OPC_Decode, 148, 9, 210, 1, // Opcode: M2_vrmac_s0
/* 17144 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17153
/* 17148 */   MCD::OPC_Decode, 242, 8, 210, 1, // Opcode: M2_vmac2es
/* 17153 */   MCD::OPC_FilterValue, 2, 201, 11, // Skip to: 20174
/* 17157 */   MCD::OPC_Decode, 201, 1, 210, 1, // Opcode: A2_vrsadub_acc
/* 17162 */   MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 17196
/* 17166 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17169 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17178
/* 17173 */   MCD::OPC_Decode, 235, 8, 210, 1, // Opcode: M2_vdmacs_s0
/* 17178 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17187
/* 17182 */   MCD::OPC_Decode, 230, 8, 210, 1, // Opcode: M2_vcmac_s0_sat_r
/* 17187 */   MCD::OPC_FilterValue, 2, 167, 11, // Skip to: 20174
/* 17191 */   MCD::OPC_Decode, 229, 8, 210, 1, // Opcode: M2_vcmac_s0_sat_i
/* 17196 */   MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 17239
/* 17200 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17203 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17212
/* 17207 */   MCD::OPC_Decode, 172, 7, 210, 1, // Opcode: M2_mmacls_s0
/* 17212 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17221
/* 17216 */   MCD::OPC_Decode, 170, 7, 210, 1, // Opcode: M2_mmacls_rs0
/* 17221 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 17230
/* 17225 */   MCD::OPC_Decode, 180, 7, 210, 1, // Opcode: M2_mmaculs_s0
/* 17230 */   MCD::OPC_FilterValue, 3, 124, 11, // Skip to: 20174
/* 17234 */   MCD::OPC_Decode, 178, 7, 210, 1, // Opcode: M2_mmaculs_rs0
/* 17239 */   MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 17273
/* 17243 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17246 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17255
/* 17250 */   MCD::OPC_Decode, 243, 8, 210, 1, // Opcode: M2_vmac2es_s0
/* 17255 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17264
/* 17259 */   MCD::OPC_Decode, 174, 9, 210, 1, // Opcode: M4_vrmpyeh_acc_s0
/* 17264 */   MCD::OPC_FilterValue, 3, 90, 11, // Skip to: 20174
/* 17268 */   MCD::OPC_Decode, 178, 9, 210, 1, // Opcode: M4_vrmpyoh_acc_s0
/* 17273 */   MCD::OPC_FilterValue, 7, 81, 11, // Skip to: 20174
/* 17277 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17280 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17289
/* 17284 */   MCD::OPC_Decode, 168, 7, 210, 1, // Opcode: M2_mmachs_s0
/* 17289 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17298
/* 17293 */   MCD::OPC_Decode, 166, 7, 210, 1, // Opcode: M2_mmachs_rs0
/* 17298 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 17307
/* 17302 */   MCD::OPC_Decode, 176, 7, 210, 1, // Opcode: M2_mmacuhs_s0
/* 17307 */   MCD::OPC_FilterValue, 3, 47, 11, // Skip to: 20174
/* 17311 */   MCD::OPC_Decode, 174, 7, 210, 1, // Opcode: M2_mmacuhs_rs0
/* 17316 */   MCD::OPC_FilterValue, 21, 182, 0, // Skip to: 17502
/* 17320 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17323 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 17348
/* 17327 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17330 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17339
/* 17334 */   MCD::OPC_Decode, 193, 9, 210, 1, // Opcode: M5_vrmacbuu
/* 17339 */   MCD::OPC_FilterValue, 2, 15, 11, // Skip to: 20174
/* 17343 */   MCD::OPC_Decode, 192, 9, 210, 1, // Opcode: M5_vrmacbsu
/* 17348 */   MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 17382
/* 17352 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17355 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17364
/* 17359 */   MCD::OPC_Decode, 236, 8, 210, 1, // Opcode: M2_vdmacs_s1
/* 17364 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17373
/* 17368 */   MCD::OPC_Decode, 140, 9, 210, 1, // Opcode: M2_vrcmpys_acc_s1_h
/* 17373 */   MCD::OPC_FilterValue, 3, 237, 10, // Skip to: 20174
/* 17377 */   MCD::OPC_Decode, 141, 9, 210, 1, // Opcode: M2_vrcmpys_acc_s1_l
/* 17382 */   MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 17425
/* 17386 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17389 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17398
/* 17393 */   MCD::OPC_Decode, 173, 7, 210, 1, // Opcode: M2_mmacls_s1
/* 17398 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17407
/* 17402 */   MCD::OPC_Decode, 171, 7, 210, 1, // Opcode: M2_mmacls_rs1
/* 17407 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 17416
/* 17411 */   MCD::OPC_Decode, 181, 7, 210, 1, // Opcode: M2_mmaculs_s1
/* 17416 */   MCD::OPC_FilterValue, 3, 194, 10, // Skip to: 20174
/* 17420 */   MCD::OPC_Decode, 179, 7, 210, 1, // Opcode: M2_mmaculs_rs1
/* 17425 */   MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 17459
/* 17429 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17432 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17441
/* 17436 */   MCD::OPC_Decode, 244, 8, 210, 1, // Opcode: M2_vmac2es_s1
/* 17441 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17450
/* 17445 */   MCD::OPC_Decode, 175, 9, 210, 1, // Opcode: M4_vrmpyeh_acc_s1
/* 17450 */   MCD::OPC_FilterValue, 3, 160, 10, // Skip to: 20174
/* 17454 */   MCD::OPC_Decode, 179, 9, 210, 1, // Opcode: M4_vrmpyoh_acc_s1
/* 17459 */   MCD::OPC_FilterValue, 7, 151, 10, // Skip to: 20174
/* 17463 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17466 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17475
/* 17470 */   MCD::OPC_Decode, 169, 7, 210, 1, // Opcode: M2_mmachs_s1
/* 17475 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17484
/* 17479 */   MCD::OPC_Decode, 167, 7, 210, 1, // Opcode: M2_mmachs_rs1
/* 17484 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 17493
/* 17488 */   MCD::OPC_Decode, 177, 7, 210, 1, // Opcode: M2_mmacuhs_s1
/* 17493 */   MCD::OPC_FilterValue, 3, 117, 10, // Skip to: 20174
/* 17497 */   MCD::OPC_Decode, 175, 7, 210, 1, // Opcode: M2_mmacuhs_rs1
/* 17502 */   MCD::OPC_FilterValue, 22, 61, 0, // Skip to: 17567
/* 17506 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17509 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 17546
/* 17513 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17516 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 17531
/* 17520 */   MCD::OPC_CheckField, 13, 1, 0, 88, 10, // Skip to: 20174
/* 17526 */   MCD::OPC_Decode, 169, 3, 206, 1, // Opcode: F2_sfadd
/* 17531 */   MCD::OPC_FilterValue, 2, 79, 10, // Skip to: 20174
/* 17535 */   MCD::OPC_CheckField, 13, 1, 0, 73, 10, // Skip to: 20174
/* 17541 */   MCD::OPC_Decode, 188, 3, 206, 1, // Opcode: F2_sfmpy
/* 17546 */   MCD::OPC_FilterValue, 1, 64, 10, // Skip to: 20174
/* 17550 */   MCD::OPC_CheckField, 21, 2, 0, 58, 10, // Skip to: 20174
/* 17556 */   MCD::OPC_CheckField, 13, 1, 0, 52, 10, // Skip to: 20174
/* 17562 */   MCD::OPC_Decode, 190, 3, 206, 1, // Opcode: F2_sfsub
/* 17567 */   MCD::OPC_FilterValue, 23, 98, 0, // Skip to: 17669
/* 17571 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17574 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 17611
/* 17578 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17581 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 17596
/* 17585 */   MCD::OPC_CheckField, 13, 1, 0, 23, 10, // Skip to: 20174
/* 17591 */   MCD::OPC_Decode, 186, 3, 206, 1, // Opcode: F2_sfmax
/* 17596 */   MCD::OPC_FilterValue, 1, 14, 10, // Skip to: 20174
/* 17600 */   MCD::OPC_CheckField, 13, 1, 0, 8, 10, // Skip to: 20174
/* 17606 */   MCD::OPC_Decode, 187, 3, 206, 1, // Opcode: F2_sfmin
/* 17611 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 17648
/* 17615 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17618 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 17633
/* 17622 */   MCD::OPC_CheckField, 13, 1, 0, 242, 9, // Skip to: 20174
/* 17628 */   MCD::OPC_Decode, 176, 3, 206, 1, // Opcode: F2_sffixupn
/* 17633 */   MCD::OPC_FilterValue, 1, 233, 9, // Skip to: 20174
/* 17637 */   MCD::OPC_CheckField, 13, 1, 0, 227, 9, // Skip to: 20174
/* 17643 */   MCD::OPC_Decode, 175, 3, 206, 1, // Opcode: F2_sffixupd
/* 17648 */   MCD::OPC_FilterValue, 3, 218, 9, // Skip to: 20174
/* 17652 */   MCD::OPC_CheckField, 13, 1, 0, 212, 9, // Skip to: 20174
/* 17658 */   MCD::OPC_CheckField, 7, 1, 1, 206, 9, // Skip to: 20174
/* 17664 */   MCD::OPC_Decode, 189, 3, 241, 1, // Opcode: F2_sfrecipa
/* 17669 */   MCD::OPC_FilterValue, 24, 239, 0, // Skip to: 17912
/* 17673 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17676 */   MCD::OPC_FilterValue, 0, 30, 0, // Skip to: 17710
/* 17680 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17683 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17692
/* 17687 */   MCD::OPC_Decode, 220, 7, 206, 1, // Opcode: M2_mpy_ll_s0
/* 17692 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17701
/* 17696 */   MCD::OPC_Decode, 244, 7, 206, 1, // Opcode: M2_mpy_rnd_ll_s0
/* 17701 */   MCD::OPC_FilterValue, 2, 165, 9, // Skip to: 20174
/* 17705 */   MCD::OPC_Decode, 188, 8, 206, 1, // Opcode: M2_mpyu_ll_s0
/* 17710 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 17744
/* 17714 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17717 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17726
/* 17721 */   MCD::OPC_Decode, 218, 7, 206, 1, // Opcode: M2_mpy_lh_s0
/* 17726 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17735
/* 17730 */   MCD::OPC_Decode, 242, 7, 206, 1, // Opcode: M2_mpy_rnd_lh_s0
/* 17735 */   MCD::OPC_FilterValue, 2, 131, 9, // Skip to: 20174
/* 17739 */   MCD::OPC_Decode, 186, 8, 206, 1, // Opcode: M2_mpyu_lh_s0
/* 17744 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 17778
/* 17748 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17751 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17760
/* 17755 */   MCD::OPC_Decode, 216, 7, 206, 1, // Opcode: M2_mpy_hl_s0
/* 17760 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17769
/* 17764 */   MCD::OPC_Decode, 240, 7, 206, 1, // Opcode: M2_mpy_rnd_hl_s0
/* 17769 */   MCD::OPC_FilterValue, 2, 97, 9, // Skip to: 20174
/* 17773 */   MCD::OPC_Decode, 184, 8, 206, 1, // Opcode: M2_mpyu_hl_s0
/* 17778 */   MCD::OPC_FilterValue, 3, 30, 0, // Skip to: 17812
/* 17782 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17785 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17794
/* 17789 */   MCD::OPC_Decode, 214, 7, 206, 1, // Opcode: M2_mpy_hh_s0
/* 17794 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17803
/* 17798 */   MCD::OPC_Decode, 238, 7, 206, 1, // Opcode: M2_mpy_rnd_hh_s0
/* 17803 */   MCD::OPC_FilterValue, 2, 63, 9, // Skip to: 20174
/* 17807 */   MCD::OPC_Decode, 182, 8, 206, 1, // Opcode: M2_mpyu_hh_s0
/* 17812 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 17837
/* 17816 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17819 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17828
/* 17823 */   MCD::OPC_Decode, 252, 7, 206, 1, // Opcode: M2_mpy_sat_ll_s0
/* 17828 */   MCD::OPC_FilterValue, 1, 38, 9, // Skip to: 20174
/* 17832 */   MCD::OPC_Decode, 132, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_ll_s0
/* 17837 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 17862
/* 17841 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17844 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17853
/* 17848 */   MCD::OPC_Decode, 250, 7, 206, 1, // Opcode: M2_mpy_sat_lh_s0
/* 17853 */   MCD::OPC_FilterValue, 1, 13, 9, // Skip to: 20174
/* 17857 */   MCD::OPC_Decode, 130, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_lh_s0
/* 17862 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 17887
/* 17866 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17869 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17878
/* 17873 */   MCD::OPC_Decode, 248, 7, 206, 1, // Opcode: M2_mpy_sat_hl_s0
/* 17878 */   MCD::OPC_FilterValue, 1, 244, 8, // Skip to: 20174
/* 17882 */   MCD::OPC_Decode, 128, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_hl_s0
/* 17887 */   MCD::OPC_FilterValue, 7, 235, 8, // Skip to: 20174
/* 17891 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17894 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17903
/* 17898 */   MCD::OPC_Decode, 246, 7, 206, 1, // Opcode: M2_mpy_sat_hh_s0
/* 17903 */   MCD::OPC_FilterValue, 1, 219, 8, // Skip to: 20174
/* 17907 */   MCD::OPC_Decode, 254, 7, 206, 1, // Opcode: M2_mpy_sat_rnd_hh_s0
/* 17912 */   MCD::OPC_FilterValue, 25, 239, 0, // Skip to: 18155
/* 17916 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 17919 */   MCD::OPC_FilterValue, 0, 30, 0, // Skip to: 17953
/* 17923 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17926 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17935
/* 17930 */   MCD::OPC_Decode, 221, 7, 206, 1, // Opcode: M2_mpy_ll_s1
/* 17935 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17944
/* 17939 */   MCD::OPC_Decode, 245, 7, 206, 1, // Opcode: M2_mpy_rnd_ll_s1
/* 17944 */   MCD::OPC_FilterValue, 2, 178, 8, // Skip to: 20174
/* 17948 */   MCD::OPC_Decode, 189, 8, 206, 1, // Opcode: M2_mpyu_ll_s1
/* 17953 */   MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 17987
/* 17957 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17960 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 17969
/* 17964 */   MCD::OPC_Decode, 219, 7, 206, 1, // Opcode: M2_mpy_lh_s1
/* 17969 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 17978
/* 17973 */   MCD::OPC_Decode, 243, 7, 206, 1, // Opcode: M2_mpy_rnd_lh_s1
/* 17978 */   MCD::OPC_FilterValue, 2, 144, 8, // Skip to: 20174
/* 17982 */   MCD::OPC_Decode, 187, 8, 206, 1, // Opcode: M2_mpyu_lh_s1
/* 17987 */   MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 18021
/* 17991 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 17994 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18003
/* 17998 */   MCD::OPC_Decode, 217, 7, 206, 1, // Opcode: M2_mpy_hl_s1
/* 18003 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18012
/* 18007 */   MCD::OPC_Decode, 241, 7, 206, 1, // Opcode: M2_mpy_rnd_hl_s1
/* 18012 */   MCD::OPC_FilterValue, 2, 110, 8, // Skip to: 20174
/* 18016 */   MCD::OPC_Decode, 185, 8, 206, 1, // Opcode: M2_mpyu_hl_s1
/* 18021 */   MCD::OPC_FilterValue, 3, 30, 0, // Skip to: 18055
/* 18025 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18028 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18037
/* 18032 */   MCD::OPC_Decode, 215, 7, 206, 1, // Opcode: M2_mpy_hh_s1
/* 18037 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18046
/* 18041 */   MCD::OPC_Decode, 239, 7, 206, 1, // Opcode: M2_mpy_rnd_hh_s1
/* 18046 */   MCD::OPC_FilterValue, 2, 76, 8, // Skip to: 20174
/* 18050 */   MCD::OPC_Decode, 183, 8, 206, 1, // Opcode: M2_mpyu_hh_s1
/* 18055 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 18080
/* 18059 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18062 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18071
/* 18066 */   MCD::OPC_Decode, 253, 7, 206, 1, // Opcode: M2_mpy_sat_ll_s1
/* 18071 */   MCD::OPC_FilterValue, 1, 51, 8, // Skip to: 20174
/* 18075 */   MCD::OPC_Decode, 133, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_ll_s1
/* 18080 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 18105
/* 18084 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18087 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18096
/* 18091 */   MCD::OPC_Decode, 251, 7, 206, 1, // Opcode: M2_mpy_sat_lh_s1
/* 18096 */   MCD::OPC_FilterValue, 1, 26, 8, // Skip to: 20174
/* 18100 */   MCD::OPC_Decode, 131, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_lh_s1
/* 18105 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 18130
/* 18109 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18112 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18121
/* 18116 */   MCD::OPC_Decode, 249, 7, 206, 1, // Opcode: M2_mpy_sat_hl_s1
/* 18121 */   MCD::OPC_FilterValue, 1, 1, 8, // Skip to: 20174
/* 18125 */   MCD::OPC_Decode, 129, 8, 206, 1, // Opcode: M2_mpy_sat_rnd_hl_s1
/* 18130 */   MCD::OPC_FilterValue, 7, 248, 7, // Skip to: 20174
/* 18134 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18137 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18146
/* 18141 */   MCD::OPC_Decode, 247, 7, 206, 1, // Opcode: M2_mpy_sat_hh_s1
/* 18146 */   MCD::OPC_FilterValue, 1, 232, 7, // Skip to: 20174
/* 18150 */   MCD::OPC_Decode, 255, 7, 206, 1, // Opcode: M2_mpy_sat_rnd_hh_s1
/* 18155 */   MCD::OPC_FilterValue, 26, 149, 0, // Skip to: 18308
/* 18159 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 18162 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 18183
/* 18166 */   MCD::OPC_CheckField, 21, 2, 0, 210, 7, // Skip to: 20174
/* 18172 */   MCD::OPC_CheckField, 13, 1, 0, 204, 7, // Skip to: 20174
/* 18178 */   MCD::OPC_Decode, 169, 8, 206, 1, // Opcode: M2_mpyi
/* 18183 */   MCD::OPC_FilterValue, 1, 63, 0, // Skip to: 18250
/* 18187 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18190 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 18205
/* 18194 */   MCD::OPC_CheckField, 13, 1, 0, 182, 7, // Skip to: 20174
/* 18200 */   MCD::OPC_Decode, 134, 8, 206, 1, // Opcode: M2_mpy_up
/* 18205 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 18220
/* 18209 */   MCD::OPC_CheckField, 13, 1, 0, 167, 7, // Skip to: 20174
/* 18215 */   MCD::OPC_Decode, 154, 7, 206, 1, // Opcode: M2_dpmpyss_rnd_s0
/* 18220 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 18235
/* 18224 */   MCD::OPC_CheckField, 13, 1, 0, 152, 7, // Skip to: 20174
/* 18230 */   MCD::OPC_Decode, 198, 8, 206, 1, // Opcode: M2_mpyu_up
/* 18235 */   MCD::OPC_FilterValue, 3, 143, 7, // Skip to: 20174
/* 18239 */   MCD::OPC_CheckField, 13, 1, 0, 137, 7, // Skip to: 20174
/* 18245 */   MCD::OPC_Decode, 173, 8, 206, 1, // Opcode: M2_mpysu_up
/* 18250 */   MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 18287
/* 18254 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18257 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 18272
/* 18261 */   MCD::OPC_CheckField, 13, 1, 0, 115, 7, // Skip to: 20174
/* 18267 */   MCD::OPC_Decode, 140, 7, 206, 1, // Opcode: M2_cmpyrs_s0
/* 18272 */   MCD::OPC_FilterValue, 3, 106, 7, // Skip to: 20174
/* 18276 */   MCD::OPC_CheckField, 13, 1, 0, 100, 7, // Skip to: 20174
/* 18282 */   MCD::OPC_Decode, 142, 7, 206, 1, // Opcode: M2_cmpyrsc_s0
/* 18287 */   MCD::OPC_FilterValue, 7, 91, 7, // Skip to: 20174
/* 18291 */   MCD::OPC_CheckField, 21, 2, 1, 85, 7, // Skip to: 20174
/* 18297 */   MCD::OPC_CheckField, 13, 1, 0, 79, 7, // Skip to: 20174
/* 18303 */   MCD::OPC_Decode, 252, 8, 206, 1, // Opcode: M2_vmpy2s_s0pack
/* 18308 */   MCD::OPC_FilterValue, 27, 177, 0, // Skip to: 18489
/* 18312 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 18315 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 18352
/* 18319 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18322 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 18337
/* 18326 */   MCD::OPC_CheckField, 13, 1, 0, 50, 7, // Skip to: 20174
/* 18332 */   MCD::OPC_Decode, 160, 7, 206, 1, // Opcode: M2_hmmpyh_s1
/* 18337 */   MCD::OPC_FilterValue, 3, 41, 7, // Skip to: 20174
/* 18341 */   MCD::OPC_CheckField, 13, 1, 0, 35, 7, // Skip to: 20174
/* 18347 */   MCD::OPC_Decode, 136, 8, 206, 1, // Opcode: M2_mpy_up_s1_sat
/* 18352 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 18373
/* 18356 */   MCD::OPC_CheckField, 21, 2, 1, 20, 7, // Skip to: 20174
/* 18362 */   MCD::OPC_CheckField, 13, 1, 0, 14, 7, // Skip to: 20174
/* 18368 */   MCD::OPC_Decode, 162, 7, 206, 1, // Opcode: M2_hmmpyl_s1
/* 18373 */   MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 18394
/* 18377 */   MCD::OPC_CheckField, 21, 2, 1, 255, 6, // Skip to: 20174
/* 18383 */   MCD::OPC_CheckField, 13, 1, 0, 249, 6, // Skip to: 20174
/* 18389 */   MCD::OPC_Decode, 135, 8, 206, 1, // Opcode: M2_mpy_up_s1
/* 18394 */   MCD::OPC_FilterValue, 4, 33, 0, // Skip to: 18431
/* 18398 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18401 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 18416
/* 18405 */   MCD::OPC_CheckField, 13, 1, 0, 227, 6, // Skip to: 20174
/* 18411 */   MCD::OPC_Decode, 159, 7, 206, 1, // Opcode: M2_hmmpyh_rs1
/* 18416 */   MCD::OPC_FilterValue, 3, 218, 6, // Skip to: 20174
/* 18420 */   MCD::OPC_CheckField, 13, 1, 0, 212, 6, // Skip to: 20174
/* 18426 */   MCD::OPC_Decode, 161, 7, 206, 1, // Opcode: M2_hmmpyl_rs1
/* 18431 */   MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 18468
/* 18435 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18438 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 18453
/* 18442 */   MCD::OPC_CheckField, 13, 1, 0, 190, 6, // Skip to: 20174
/* 18448 */   MCD::OPC_Decode, 141, 7, 206, 1, // Opcode: M2_cmpyrs_s1
/* 18453 */   MCD::OPC_FilterValue, 3, 181, 6, // Skip to: 20174
/* 18457 */   MCD::OPC_CheckField, 13, 1, 0, 175, 6, // Skip to: 20174
/* 18463 */   MCD::OPC_Decode, 143, 7, 206, 1, // Opcode: M2_cmpyrsc_s1
/* 18468 */   MCD::OPC_FilterValue, 7, 166, 6, // Skip to: 20174
/* 18472 */   MCD::OPC_CheckField, 21, 2, 1, 160, 6, // Skip to: 20174
/* 18478 */   MCD::OPC_CheckField, 13, 1, 0, 154, 6, // Skip to: 20174
/* 18484 */   MCD::OPC_Decode, 254, 8, 206, 1, // Opcode: M2_vmpy2s_s1pack
/* 18489 */   MCD::OPC_FilterValue, 28, 19, 1, // Skip to: 18768
/* 18493 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 18496 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 18539
/* 18500 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18503 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18512
/* 18507 */   MCD::OPC_Decode, 204, 7, 214, 1, // Opcode: M2_mpy_acc_ll_s0
/* 18512 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18521
/* 18516 */   MCD::OPC_Decode, 228, 7, 214, 1, // Opcode: M2_mpy_nac_ll_s0
/* 18521 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18530
/* 18525 */   MCD::OPC_Decode, 180, 8, 214, 1, // Opcode: M2_mpyu_acc_ll_s0
/* 18530 */   MCD::OPC_FilterValue, 3, 104, 6, // Skip to: 20174
/* 18534 */   MCD::OPC_Decode, 196, 8, 214, 1, // Opcode: M2_mpyu_nac_ll_s0
/* 18539 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 18582
/* 18543 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18546 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18555
/* 18550 */   MCD::OPC_Decode, 202, 7, 214, 1, // Opcode: M2_mpy_acc_lh_s0
/* 18555 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18564
/* 18559 */   MCD::OPC_Decode, 226, 7, 214, 1, // Opcode: M2_mpy_nac_lh_s0
/* 18564 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18573
/* 18568 */   MCD::OPC_Decode, 178, 8, 214, 1, // Opcode: M2_mpyu_acc_lh_s0
/* 18573 */   MCD::OPC_FilterValue, 3, 61, 6, // Skip to: 20174
/* 18577 */   MCD::OPC_Decode, 194, 8, 214, 1, // Opcode: M2_mpyu_nac_lh_s0
/* 18582 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 18625
/* 18586 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18589 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18598
/* 18593 */   MCD::OPC_Decode, 200, 7, 214, 1, // Opcode: M2_mpy_acc_hl_s0
/* 18598 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18607
/* 18602 */   MCD::OPC_Decode, 224, 7, 214, 1, // Opcode: M2_mpy_nac_hl_s0
/* 18607 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18616
/* 18611 */   MCD::OPC_Decode, 176, 8, 214, 1, // Opcode: M2_mpyu_acc_hl_s0
/* 18616 */   MCD::OPC_FilterValue, 3, 18, 6, // Skip to: 20174
/* 18620 */   MCD::OPC_Decode, 192, 8, 214, 1, // Opcode: M2_mpyu_nac_hl_s0
/* 18625 */   MCD::OPC_FilterValue, 3, 39, 0, // Skip to: 18668
/* 18629 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18632 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18641
/* 18636 */   MCD::OPC_Decode, 198, 7, 214, 1, // Opcode: M2_mpy_acc_hh_s0
/* 18641 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18650
/* 18645 */   MCD::OPC_Decode, 222, 7, 214, 1, // Opcode: M2_mpy_nac_hh_s0
/* 18650 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18659
/* 18654 */   MCD::OPC_Decode, 174, 8, 214, 1, // Opcode: M2_mpyu_acc_hh_s0
/* 18659 */   MCD::OPC_FilterValue, 3, 231, 5, // Skip to: 20174
/* 18663 */   MCD::OPC_Decode, 190, 8, 214, 1, // Opcode: M2_mpyu_nac_hh_s0
/* 18668 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 18693
/* 18672 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18675 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18684
/* 18679 */   MCD::OPC_Decode, 212, 7, 214, 1, // Opcode: M2_mpy_acc_sat_ll_s0
/* 18684 */   MCD::OPC_FilterValue, 1, 206, 5, // Skip to: 20174
/* 18688 */   MCD::OPC_Decode, 236, 7, 214, 1, // Opcode: M2_mpy_nac_sat_ll_s0
/* 18693 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 18718
/* 18697 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18700 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18709
/* 18704 */   MCD::OPC_Decode, 210, 7, 214, 1, // Opcode: M2_mpy_acc_sat_lh_s0
/* 18709 */   MCD::OPC_FilterValue, 1, 181, 5, // Skip to: 20174
/* 18713 */   MCD::OPC_Decode, 234, 7, 214, 1, // Opcode: M2_mpy_nac_sat_lh_s0
/* 18718 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 18743
/* 18722 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18725 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18734
/* 18729 */   MCD::OPC_Decode, 208, 7, 214, 1, // Opcode: M2_mpy_acc_sat_hl_s0
/* 18734 */   MCD::OPC_FilterValue, 1, 156, 5, // Skip to: 20174
/* 18738 */   MCD::OPC_Decode, 232, 7, 214, 1, // Opcode: M2_mpy_nac_sat_hl_s0
/* 18743 */   MCD::OPC_FilterValue, 7, 147, 5, // Skip to: 20174
/* 18747 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18750 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18759
/* 18754 */   MCD::OPC_Decode, 206, 7, 214, 1, // Opcode: M2_mpy_acc_sat_hh_s0
/* 18759 */   MCD::OPC_FilterValue, 1, 131, 5, // Skip to: 20174
/* 18763 */   MCD::OPC_Decode, 230, 7, 214, 1, // Opcode: M2_mpy_nac_sat_hh_s0
/* 18768 */   MCD::OPC_FilterValue, 29, 19, 1, // Skip to: 19047
/* 18772 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 18775 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 18818
/* 18779 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18782 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18791
/* 18786 */   MCD::OPC_Decode, 205, 7, 214, 1, // Opcode: M2_mpy_acc_ll_s1
/* 18791 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18800
/* 18795 */   MCD::OPC_Decode, 229, 7, 214, 1, // Opcode: M2_mpy_nac_ll_s1
/* 18800 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18809
/* 18804 */   MCD::OPC_Decode, 181, 8, 214, 1, // Opcode: M2_mpyu_acc_ll_s1
/* 18809 */   MCD::OPC_FilterValue, 3, 81, 5, // Skip to: 20174
/* 18813 */   MCD::OPC_Decode, 197, 8, 214, 1, // Opcode: M2_mpyu_nac_ll_s1
/* 18818 */   MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 18861
/* 18822 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18825 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18834
/* 18829 */   MCD::OPC_Decode, 203, 7, 214, 1, // Opcode: M2_mpy_acc_lh_s1
/* 18834 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18843
/* 18838 */   MCD::OPC_Decode, 227, 7, 214, 1, // Opcode: M2_mpy_nac_lh_s1
/* 18843 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18852
/* 18847 */   MCD::OPC_Decode, 179, 8, 214, 1, // Opcode: M2_mpyu_acc_lh_s1
/* 18852 */   MCD::OPC_FilterValue, 3, 38, 5, // Skip to: 20174
/* 18856 */   MCD::OPC_Decode, 195, 8, 214, 1, // Opcode: M2_mpyu_nac_lh_s1
/* 18861 */   MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 18904
/* 18865 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18868 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18877
/* 18872 */   MCD::OPC_Decode, 201, 7, 214, 1, // Opcode: M2_mpy_acc_hl_s1
/* 18877 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18886
/* 18881 */   MCD::OPC_Decode, 225, 7, 214, 1, // Opcode: M2_mpy_nac_hl_s1
/* 18886 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18895
/* 18890 */   MCD::OPC_Decode, 177, 8, 214, 1, // Opcode: M2_mpyu_acc_hl_s1
/* 18895 */   MCD::OPC_FilterValue, 3, 251, 4, // Skip to: 20174
/* 18899 */   MCD::OPC_Decode, 193, 8, 214, 1, // Opcode: M2_mpyu_nac_hl_s1
/* 18904 */   MCD::OPC_FilterValue, 3, 39, 0, // Skip to: 18947
/* 18908 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18911 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18920
/* 18915 */   MCD::OPC_Decode, 199, 7, 214, 1, // Opcode: M2_mpy_acc_hh_s1
/* 18920 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 18929
/* 18924 */   MCD::OPC_Decode, 223, 7, 214, 1, // Opcode: M2_mpy_nac_hh_s1
/* 18929 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 18938
/* 18933 */   MCD::OPC_Decode, 175, 8, 214, 1, // Opcode: M2_mpyu_acc_hh_s1
/* 18938 */   MCD::OPC_FilterValue, 3, 208, 4, // Skip to: 20174
/* 18942 */   MCD::OPC_Decode, 191, 8, 214, 1, // Opcode: M2_mpyu_nac_hh_s1
/* 18947 */   MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 18972
/* 18951 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18954 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18963
/* 18958 */   MCD::OPC_Decode, 213, 7, 214, 1, // Opcode: M2_mpy_acc_sat_ll_s1
/* 18963 */   MCD::OPC_FilterValue, 1, 183, 4, // Skip to: 20174
/* 18967 */   MCD::OPC_Decode, 237, 7, 214, 1, // Opcode: M2_mpy_nac_sat_ll_s1
/* 18972 */   MCD::OPC_FilterValue, 5, 21, 0, // Skip to: 18997
/* 18976 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 18979 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 18988
/* 18983 */   MCD::OPC_Decode, 211, 7, 214, 1, // Opcode: M2_mpy_acc_sat_lh_s1
/* 18988 */   MCD::OPC_FilterValue, 1, 158, 4, // Skip to: 20174
/* 18992 */   MCD::OPC_Decode, 235, 7, 214, 1, // Opcode: M2_mpy_nac_sat_lh_s1
/* 18997 */   MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 19022
/* 19001 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19004 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 19013
/* 19008 */   MCD::OPC_Decode, 209, 7, 214, 1, // Opcode: M2_mpy_acc_sat_hl_s1
/* 19013 */   MCD::OPC_FilterValue, 1, 133, 4, // Skip to: 20174
/* 19017 */   MCD::OPC_Decode, 233, 7, 214, 1, // Opcode: M2_mpy_nac_sat_hl_s1
/* 19022 */   MCD::OPC_FilterValue, 7, 124, 4, // Skip to: 20174
/* 19026 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19029 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 19038
/* 19033 */   MCD::OPC_Decode, 207, 7, 214, 1, // Opcode: M2_mpy_acc_sat_hh_s1
/* 19038 */   MCD::OPC_FilterValue, 1, 108, 4, // Skip to: 20174
/* 19042 */   MCD::OPC_Decode, 231, 7, 214, 1, // Opcode: M2_mpy_nac_sat_hh_s1
/* 19047 */   MCD::OPC_FilterValue, 30, 37, 1, // Skip to: 19344
/* 19051 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19054 */   MCD::OPC_FilterValue, 0, 108, 0, // Skip to: 19166
/* 19058 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 19061 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19076
/* 19065 */   MCD::OPC_CheckField, 13, 1, 0, 79, 4, // Skip to: 20174
/* 19071 */   MCD::OPC_Decode, 163, 7, 214, 1, // Opcode: M2_maci
/* 19076 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 19091
/* 19080 */   MCD::OPC_CheckField, 13, 1, 0, 64, 4, // Skip to: 20174
/* 19086 */   MCD::OPC_Decode, 130, 7, 214, 1, // Opcode: M2_acci
/* 19091 */   MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 19106
/* 19095 */   MCD::OPC_CheckField, 13, 1, 0, 49, 4, // Skip to: 20174
/* 19101 */   MCD::OPC_Decode, 226, 8, 242, 1, // Opcode: M2_subacc
/* 19106 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 19121
/* 19110 */   MCD::OPC_CheckField, 13, 1, 0, 34, 4, // Skip to: 20174
/* 19116 */   MCD::OPC_Decode, 178, 3, 214, 1, // Opcode: F2_sffma
/* 19121 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 19136
/* 19125 */   MCD::OPC_CheckField, 13, 1, 0, 19, 4, // Skip to: 20174
/* 19131 */   MCD::OPC_Decode, 181, 3, 214, 1, // Opcode: F2_sffms
/* 19136 */   MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 19151
/* 19140 */   MCD::OPC_CheckField, 13, 1, 0, 4, 4, // Skip to: 20174
/* 19146 */   MCD::OPC_Decode, 179, 3, 214, 1, // Opcode: F2_sffma_lib
/* 19151 */   MCD::OPC_FilterValue, 7, 251, 3, // Skip to: 20174
/* 19155 */   MCD::OPC_CheckField, 13, 1, 0, 245, 3, // Skip to: 20174
/* 19161 */   MCD::OPC_Decode, 182, 3, 214, 1, // Opcode: F2_sffms_lib
/* 19166 */   MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 19218
/* 19170 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 19173 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19188
/* 19177 */   MCD::OPC_CheckField, 13, 1, 0, 223, 3, // Skip to: 20174
/* 19183 */   MCD::OPC_Decode, 167, 9, 214, 1, // Opcode: M4_or_andn
/* 19188 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 19203
/* 19192 */   MCD::OPC_CheckField, 13, 1, 0, 208, 3, // Skip to: 20174
/* 19198 */   MCD::OPC_Decode, 152, 9, 214, 1, // Opcode: M4_and_andn
/* 19203 */   MCD::OPC_FilterValue, 2, 199, 3, // Skip to: 20174
/* 19207 */   MCD::OPC_CheckField, 13, 1, 0, 193, 3, // Skip to: 20174
/* 19213 */   MCD::OPC_Decode, 183, 9, 214, 1, // Opcode: M4_xor_andn
/* 19218 */   MCD::OPC_FilterValue, 2, 63, 0, // Skip to: 19285
/* 19222 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 19225 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19240
/* 19229 */   MCD::OPC_CheckField, 13, 1, 0, 171, 3, // Skip to: 20174
/* 19235 */   MCD::OPC_Decode, 151, 9, 214, 1, // Opcode: M4_and_and
/* 19240 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 19255
/* 19244 */   MCD::OPC_CheckField, 13, 1, 0, 156, 3, // Skip to: 20174
/* 19250 */   MCD::OPC_Decode, 153, 9, 214, 1, // Opcode: M4_and_or
/* 19255 */   MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 19270
/* 19259 */   MCD::OPC_CheckField, 13, 1, 0, 141, 3, // Skip to: 20174
/* 19265 */   MCD::OPC_Decode, 154, 9, 214, 1, // Opcode: M4_and_xor
/* 19270 */   MCD::OPC_FilterValue, 3, 132, 3, // Skip to: 20174
/* 19274 */   MCD::OPC_CheckField, 13, 1, 0, 126, 3, // Skip to: 20174
/* 19280 */   MCD::OPC_Decode, 166, 9, 214, 1, // Opcode: M4_or_and
/* 19285 */   MCD::OPC_FilterValue, 3, 117, 3, // Skip to: 20174
/* 19289 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 19292 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 19329
/* 19296 */   MCD::OPC_ExtractField, 5, 2,  // Inst{6-5} ...
/* 19299 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19314
/* 19303 */   MCD::OPC_CheckField, 13, 1, 0, 97, 3, // Skip to: 20174
/* 19309 */   MCD::OPC_Decode, 159, 9, 214, 1, // Opcode: M4_mac_up_s1_sat
/* 19314 */   MCD::OPC_FilterValue, 1, 88, 3, // Skip to: 20174
/* 19318 */   MCD::OPC_CheckField, 13, 1, 0, 82, 3, // Skip to: 20174
/* 19324 */   MCD::OPC_Decode, 165, 9, 214, 1, // Opcode: M4_nac_up_s1_sat
/* 19329 */   MCD::OPC_FilterValue, 1, 73, 3, // Skip to: 20174
/* 19333 */   MCD::OPC_CheckField, 13, 1, 0, 67, 3, // Skip to: 20174
/* 19339 */   MCD::OPC_Decode, 180, 3, 243, 1, // Opcode: F2_sffma_sc
/* 19344 */   MCD::OPC_FilterValue, 31, 58, 3, // Skip to: 20174
/* 19348 */   MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 19351 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 19372
/* 19355 */   MCD::OPC_CheckField, 21, 2, 2, 45, 3, // Skip to: 20174
/* 19361 */   MCD::OPC_CheckField, 13, 1, 0, 39, 3, // Skip to: 20174
/* 19367 */   MCD::OPC_Decode, 168, 9, 214, 1, // Opcode: M4_or_or
/* 19372 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 19409
/* 19376 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19379 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19394
/* 19383 */   MCD::OPC_CheckField, 13, 1, 0, 17, 3, // Skip to: 20174
/* 19389 */   MCD::OPC_Decode, 224, 8, 214, 1, // Opcode: M2_nacci
/* 19394 */   MCD::OPC_FilterValue, 2, 8, 3, // Skip to: 20174
/* 19398 */   MCD::OPC_CheckField, 13, 1, 0, 2, 3, // Skip to: 20174
/* 19404 */   MCD::OPC_Decode, 169, 9, 214, 1, // Opcode: M4_or_xor
/* 19409 */   MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 19430
/* 19413 */   MCD::OPC_CheckField, 21, 2, 2, 243, 2, // Skip to: 20174
/* 19419 */   MCD::OPC_CheckField, 13, 1, 0, 237, 2, // Skip to: 20174
/* 19425 */   MCD::OPC_Decode, 182, 9, 214, 1, // Opcode: M4_xor_and
/* 19430 */   MCD::OPC_FilterValue, 3, 228, 2, // Skip to: 20174
/* 19434 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19437 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 19452
/* 19441 */   MCD::OPC_CheckField, 13, 1, 0, 215, 2, // Skip to: 20174
/* 19447 */   MCD::OPC_Decode, 150, 9, 214, 1, // Opcode: M2_xor_xacc
/* 19452 */   MCD::OPC_FilterValue, 2, 206, 2, // Skip to: 20174
/* 19456 */   MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 20174
/* 19462 */   MCD::OPC_Decode, 184, 9, 214, 1, // Opcode: M4_xor_or
/* 19467 */   MCD::OPC_FilterValue, 15, 191, 2, // Skip to: 20174
/* 19471 */   MCD::OPC_ExtractField, 24, 4,  // Inst{27-24} ...
/* 19474 */   MCD::OPC_FilterValue, 1, 46, 0, // Skip to: 19524
/* 19478 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19481 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19489
/* 19485 */   MCD::OPC_Decode, 46, 206, 1, // Opcode: A2_and
/* 19489 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 19497
/* 19493 */   MCD::OPC_Decode, 70, 206, 1, // Opcode: A2_or
/* 19497 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 19506
/* 19501 */   MCD::OPC_Decode, 209, 1, 206, 1, // Opcode: A2_xor
/* 19506 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 19515
/* 19510 */   MCD::OPC_Decode, 214, 1, 219, 1, // Opcode: A4_andn
/* 19515 */   MCD::OPC_FilterValue, 5, 143, 2, // Skip to: 20174
/* 19519 */   MCD::OPC_Decode, 243, 1, 219, 1, // Opcode: A4_orn
/* 19524 */   MCD::OPC_FilterValue, 2, 78, 0, // Skip to: 19606
/* 19528 */   MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 19531 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 19556
/* 19535 */   MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 19538 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 19547
/* 19542 */   MCD::OPC_Decode, 193, 2, 151, 1, // Opcode: C2_cmpeq
/* 19547 */   MCD::OPC_FilterValue, 4, 111, 2, // Skip to: 20174
/* 19551 */   MCD::OPC_Decode, 227, 2, 151, 1, // Opcode: C4_cmpneq
/* 19556 */   MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 19581
/* 19560 */   MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 19563 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 19572
/* 19567 */   MCD::OPC_Decode, 198, 2, 151, 1, // Opcode: C2_cmpgt
/* 19572 */   MCD::OPC_FilterValue, 4, 86, 2, // Skip to: 20174
/* 19576 */   MCD::OPC_Decode, 223, 2, 151, 1, // Opcode: C4_cmplte
/* 19581 */   MCD::OPC_FilterValue, 3, 77, 2, // Skip to: 20174
/* 19585 */   MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 19588 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 19597
/* 19592 */   MCD::OPC_Decode, 201, 2, 151, 1, // Opcode: C2_cmpgtu
/* 19597 */   MCD::OPC_FilterValue, 4, 61, 2, // Skip to: 20174
/* 19601 */   MCD::OPC_Decode, 225, 2, 151, 1, // Opcode: C4_cmplteu
/* 19606 */   MCD::OPC_FilterValue, 3, 69, 0, // Skip to: 19679
/* 19610 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19613 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19621
/* 19617 */   MCD::OPC_Decode, 26, 206, 1, // Opcode: A2_add
/* 19621 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 19629
/* 19625 */   MCD::OPC_Decode, 103, 219, 1, // Opcode: A2_sub
/* 19629 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 19638
/* 19633 */   MCD::OPC_Decode, 141, 2, 206, 1, // Opcode: A4_rcmpeq
/* 19638 */   MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 19647
/* 19642 */   MCD::OPC_Decode, 143, 2, 206, 1, // Opcode: A4_rcmpneq
/* 19647 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 19655
/* 19651 */   MCD::OPC_Decode, 51, 219, 1, // Opcode: A2_combine_hh
/* 19655 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 19663
/* 19659 */   MCD::OPC_Decode, 52, 219, 1, // Opcode: A2_combine_hl
/* 19663 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 19671
/* 19667 */   MCD::OPC_Decode, 53, 219, 1, // Opcode: A2_combine_lh
/* 19671 */   MCD::OPC_FilterValue, 7, 243, 1, // Skip to: 20174
/* 19675 */   MCD::OPC_Decode, 54, 219, 1, // Opcode: A2_combine_ll
/* 19679 */   MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 19688
/* 19683 */   MCD::OPC_Decode, 205, 2, 241, 1, // Opcode: C2_mux
/* 19688 */   MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 19712
/* 19692 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19695 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19703
/* 19699 */   MCD::OPC_Decode, 56, 218, 1, // Opcode: A2_combinew
/* 19703 */   MCD::OPC_FilterValue, 4, 211, 1, // Skip to: 20174
/* 19707 */   MCD::OPC_Decode, 203, 10, 218, 1, // Opcode: S2_packhl
/* 19712 */   MCD::OPC_FilterValue, 6, 67, 0, // Skip to: 19783
/* 19716 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19719 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19727
/* 19723 */   MCD::OPC_Decode, 119, 206, 1, // Opcode: A2_svaddh
/* 19727 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 19735
/* 19731 */   MCD::OPC_Decode, 120, 206, 1, // Opcode: A2_svaddhs
/* 19735 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 19743
/* 19739 */   MCD::OPC_Decode, 42, 206, 1, // Opcode: A2_addsat
/* 19743 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 19751
/* 19747 */   MCD::OPC_Decode, 121, 206, 1, // Opcode: A2_svadduhs
/* 19751 */   MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 19759
/* 19755 */   MCD::OPC_Decode, 125, 219, 1, // Opcode: A2_svsubh
/* 19759 */   MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 19767
/* 19763 */   MCD::OPC_Decode, 126, 219, 1, // Opcode: A2_svsubhs
/* 19767 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 19775
/* 19771 */   MCD::OPC_Decode, 118, 219, 1, // Opcode: A2_subsat
/* 19775 */   MCD::OPC_FilterValue, 7, 139, 1, // Skip to: 20174
/* 19779 */   MCD::OPC_Decode, 127, 219, 1, // Opcode: A2_svsubuhs
/* 19783 */   MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 19814
/* 19787 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19790 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19798
/* 19794 */   MCD::OPC_Decode, 122, 206, 1, // Opcode: A2_svavgh
/* 19798 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 19806
/* 19802 */   MCD::OPC_Decode, 123, 206, 1, // Opcode: A2_svavghs
/* 19806 */   MCD::OPC_FilterValue, 3, 108, 1, // Skip to: 20174
/* 19810 */   MCD::OPC_Decode, 124, 219, 1, // Opcode: A2_svnavgh
/* 19814 */   MCD::OPC_FilterValue, 9, 162, 0, // Skip to: 19980
/* 19818 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 19821 */   MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 19874
/* 19825 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 19828 */   MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 19851
/* 19832 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19835 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19843
/* 19839 */   MCD::OPC_Decode, 83, 241, 1, // Opcode: A2_pandt
/* 19843 */   MCD::OPC_FilterValue, 1, 71, 1, // Skip to: 20174
/* 19847 */   MCD::OPC_Decode, 84, 241, 1, // Opcode: A2_pandtnew
/* 19851 */   MCD::OPC_FilterValue, 1, 63, 1, // Skip to: 20174
/* 19855 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19858 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19866
/* 19862 */   MCD::OPC_Decode, 81, 241, 1, // Opcode: A2_pandf
/* 19866 */   MCD::OPC_FilterValue, 1, 48, 1, // Skip to: 20174
/* 19870 */   MCD::OPC_Decode, 82, 241, 1, // Opcode: A2_pandfnew
/* 19874 */   MCD::OPC_FilterValue, 1, 49, 0, // Skip to: 19927
/* 19878 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 19881 */   MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 19904
/* 19885 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19888 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19896
/* 19892 */   MCD::OPC_Decode, 87, 241, 1, // Opcode: A2_port
/* 19896 */   MCD::OPC_FilterValue, 1, 18, 1, // Skip to: 20174
/* 19900 */   MCD::OPC_Decode, 88, 241, 1, // Opcode: A2_portnew
/* 19904 */   MCD::OPC_FilterValue, 1, 10, 1, // Skip to: 20174
/* 19908 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19911 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19919
/* 19915 */   MCD::OPC_Decode, 85, 241, 1, // Opcode: A2_porf
/* 19919 */   MCD::OPC_FilterValue, 1, 251, 0, // Skip to: 20174
/* 19923 */   MCD::OPC_Decode, 86, 241, 1, // Opcode: A2_porfnew
/* 19927 */   MCD::OPC_FilterValue, 3, 243, 0, // Skip to: 20174
/* 19931 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 19934 */   MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 19957
/* 19938 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19941 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19949
/* 19945 */   MCD::OPC_Decode, 95, 241, 1, // Opcode: A2_pxort
/* 19949 */   MCD::OPC_FilterValue, 1, 221, 0, // Skip to: 20174
/* 19953 */   MCD::OPC_Decode, 96, 241, 1, // Opcode: A2_pxortnew
/* 19957 */   MCD::OPC_FilterValue, 1, 213, 0, // Skip to: 20174
/* 19961 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19964 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19972
/* 19968 */   MCD::OPC_Decode, 93, 241, 1, // Opcode: A2_pxorf
/* 19972 */   MCD::OPC_FilterValue, 1, 198, 0, // Skip to: 20174
/* 19976 */   MCD::OPC_Decode, 94, 241, 1, // Opcode: A2_pxorfnew
/* 19980 */   MCD::OPC_FilterValue, 11, 109, 0, // Skip to: 20093
/* 19984 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 19987 */   MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 20040
/* 19991 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 19994 */   MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 20017
/* 19998 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 20001 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 20009
/* 20005 */   MCD::OPC_Decode, 79, 241, 1, // Opcode: A2_paddt
/* 20009 */   MCD::OPC_FilterValue, 1, 161, 0, // Skip to: 20174
/* 20013 */   MCD::OPC_Decode, 91, 244, 1, // Opcode: A2_psubt
/* 20017 */   MCD::OPC_FilterValue, 1, 153, 0, // Skip to: 20174
/* 20021 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 20024 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 20032
/* 20028 */   MCD::OPC_Decode, 80, 241, 1, // Opcode: A2_paddtnew
/* 20032 */   MCD::OPC_FilterValue, 1, 138, 0, // Skip to: 20174
/* 20036 */   MCD::OPC_Decode, 92, 244, 1, // Opcode: A2_psubtnew
/* 20040 */   MCD::OPC_FilterValue, 1, 130, 0, // Skip to: 20174
/* 20044 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 20047 */   MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 20070
/* 20051 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 20054 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 20062
/* 20058 */   MCD::OPC_Decode, 73, 241, 1, // Opcode: A2_paddf
/* 20062 */   MCD::OPC_FilterValue, 1, 108, 0, // Skip to: 20174
/* 20066 */   MCD::OPC_Decode, 89, 244, 1, // Opcode: A2_psubf
/* 20070 */   MCD::OPC_FilterValue, 1, 100, 0, // Skip to: 20174
/* 20074 */   MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 20077 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 20085
/* 20081 */   MCD::OPC_Decode, 74, 241, 1, // Opcode: A2_paddfnew
/* 20085 */   MCD::OPC_FilterValue, 1, 85, 0, // Skip to: 20174
/* 20089 */   MCD::OPC_Decode, 90, 244, 1, // Opcode: A2_psubfnew
/* 20093 */   MCD::OPC_FilterValue, 13, 77, 0, // Skip to: 20174
/* 20097 */   MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 20100 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 20137
/* 20104 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 20107 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 20122
/* 20111 */   MCD::OPC_CheckField, 21, 3, 0, 57, 0, // Skip to: 20174
/* 20117 */   MCD::OPC_Decode, 188, 2, 245, 1, // Opcode: C2_ccombinewt
/* 20122 */   MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 20174
/* 20126 */   MCD::OPC_CheckField, 21, 3, 0, 42, 0, // Skip to: 20174
/* 20132 */   MCD::OPC_Decode, 187, 2, 245, 1, // Opcode: C2_ccombinewnewt
/* 20137 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 20174
/* 20141 */   MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 20144 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 20159
/* 20148 */   MCD::OPC_CheckField, 21, 3, 0, 20, 0, // Skip to: 20174
/* 20154 */   MCD::OPC_Decode, 185, 2, 245, 1, // Opcode: C2_ccombinewf
/* 20159 */   MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 20174
/* 20163 */   MCD::OPC_CheckField, 21, 3, 0, 5, 0, // Skip to: 20174
/* 20169 */   MCD::OPC_Decode, 186, 2, 245, 1, // Opcode: C2_ccombinewnewf
/* 20174 */   MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 16, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 16, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 16, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 20, 2) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    if (s6_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    if (s6_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    if (s6_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 7) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 7;
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 7) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 7;
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 7) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 7;
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 8;
    tmp |= fieldFromInstruction(insn, 16, 5) << 9;
    tmp |= fieldFromInstruction(insn, 25, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 6;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 9;
    tmp |= fieldFromInstruction(insn, 16, 5) << 10;
    tmp |= fieldFromInstruction(insn, 25, 2) << 15;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 7;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 10;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 25, 2) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 8;
    tmp |= fieldFromInstruction(insn, 16, 5) << 9;
    tmp |= fieldFromInstruction(insn, 25, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 6;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 9;
    tmp |= fieldFromInstruction(insn, 16, 5) << 10;
    tmp |= fieldFromInstruction(insn, 25, 2) << 15;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 7;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 10;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 25, 2) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 5) << 3;
    tmp |= fieldFromInstruction(insn, 13, 1) << 8;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 3;
    tmp |= fieldFromInstruction(insn, 13, 1) << 11;
    tmp |= fieldFromInstruction(insn, 16, 5) << 12;
    tmp |= fieldFromInstruction(insn, 25, 2) << 17;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 9;
    tmp |= fieldFromInstruction(insn, 25, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 6) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 1;
    tmp |= fieldFromInstruction(insn, 16, 5) << 10;
    tmp |= fieldFromInstruction(insn, 25, 2) << 15;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 6) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 2;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 25, 2) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 6) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 3;
    tmp |= fieldFromInstruction(insn, 16, 5) << 12;
    tmp |= fieldFromInstruction(insn, 25, 2) << 17;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 13) << 2;
    tmp |= fieldFromInstruction(insn, 16, 9) << 15;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 7) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 9;
    tmp |= fieldFromInstruction(insn, 16, 5) << 10;
    tmp |= fieldFromInstruction(insn, 22, 2) << 15;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 2;
    tmp |= fieldFromInstruction(insn, 8, 5) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 11) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 13;
    tmp |= fieldFromInstruction(insn, 21, 1) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeCtrRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeCtrRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCtrRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 2;
    tmp |= fieldFromInstruction(insn, 8, 5) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 2) << 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 2;
    tmp |= fieldFromInstruction(insn, 16, 5) << 5;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCtrRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 22, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    if (s10ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 9);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    if (s10ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    if (s10ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 9;
    tmp |= fieldFromInstruction(insn, 22, 2) << 14;
    if (s16ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 23, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 7) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 7) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 8) << 0;
    tmp |= fieldFromInstruction(insn, 16, 4) << 8;
    if (s12ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 21, 3) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 21, 3) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 21, 2) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 21, 2) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 11) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 8, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 1;
    tmp |= fieldFromInstruction(insn, 25, 2) << 10;
    if (s11_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 1;
    tmp |= fieldFromInstruction(insn, 25, 2) << 10;
    if (s11_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 25, 2) << 9;
    if (s11_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 2;
    tmp |= fieldFromInstruction(insn, 25, 2) << 11;
    if (s11_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 25, 2) << 9;
    if (s11_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 8, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 2;
    tmp |= fieldFromInstruction(insn, 25, 2) << 11;
    if (s11_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 3;
    tmp |= fieldFromInstruction(insn, 25, 2) << 12;
    if (s11_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 8, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 0, 11) << 3;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 8;
    tmp |= fieldFromInstruction(insn, 25, 2) << 9;
    if (s11_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 6, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 9;
    tmp |= fieldFromInstruction(insn, 25, 2) << 10;
    if (s11_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 10;
    tmp |= fieldFromInstruction(insn, 25, 2) << 11;
    if (s11_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 8;
    tmp |= fieldFromInstruction(insn, 25, 2) << 9;
    if (s11_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4);
    if (s4_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 6, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 9;
    tmp |= fieldFromInstruction(insn, 25, 2) << 10;
    if (s11_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 1;
    if (s4_1ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 10;
    tmp |= fieldFromInstruction(insn, 25, 2) << 11;
    if (s11_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 2;
    if (s4_2ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 8) << 3;
    tmp |= fieldFromInstruction(insn, 13, 1) << 11;
    tmp |= fieldFromInstruction(insn, 25, 2) << 12;
    if (s11_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 1);
    if (DecodeModRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 4) << 3;
    if (s4_3ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 6, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 7) << 9;
    if (s16ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 3;
    tmp |= fieldFromInstruction(insn, 21, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 3;
    tmp |= fieldFromInstruction(insn, 21, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 23, 1) << 5;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    if (s10ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 9) << 0;
    tmp |= fieldFromInstruction(insn, 21, 1) << 9;
    if (s10ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 3;
    tmp |= fieldFromInstruction(insn, 21, 2) << 4;
    if (s6_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 3;
    tmp |= fieldFromInstruction(insn, 21, 2) << 4;
    if (s6_0ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 0, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 1;
    tmp |= fieldFromInstruction(insn, 13, 1) << 4;
    tmp |= fieldFromInstruction(insn, 21, 3) << 5;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 2;
    tmp |= fieldFromInstruction(insn, 13, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 2) << 6;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    tmp |= fieldFromInstruction(insn, 13, 1) << 3;
    tmp |= fieldFromInstruction(insn, 21, 2) << 4;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 8);
    if (s8ImmDecoder(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDoubleRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 2);
    if (DecodePredRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
