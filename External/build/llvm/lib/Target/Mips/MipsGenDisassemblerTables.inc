/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 215, 2, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 213, 2, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 218, 2, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 168, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 220, 13, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 223, 13, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 221, 2, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 229, 2, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 171, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 143, 10, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 144, 10, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 158, 8, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 178, 4, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 166, 8, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 173, 1, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 232, 13, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 190, 7, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 187, 7, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 189, 7, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 188, 7, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 218, 13, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 226, 13, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 216, 13, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 220, 2, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 231, 13, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 229, 13, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 177, 4, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 174, 1, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 194, 10, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 180, 14, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 179, 10, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 141, 10, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 198, 13, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 199, 13, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 142, 10, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 163, 5, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 164, 5, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 178, 10, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 198, 1, // Skip to: 465
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 192, 1, // Skip to: 465
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 186, 1, // Skip to: 465
/* 23 */      MCD::OPC_Decode, 167, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 174, 1, // Skip to: 465
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 168, 1, // Skip to: 465
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 162, 1, // Skip to: 465
/* 47 */      MCD::OPC_Decode, 216, 2, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 465
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 144, 1, // Skip to: 465
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 138, 1, // Skip to: 465
/* 71 */      MCD::OPC_Decode, 214, 2, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 126, 1, // Skip to: 465
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 120, 1, // Skip to: 465
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 114, 1, // Skip to: 465
/* 95 */      MCD::OPC_Decode, 219, 2, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 99, 1, // Skip to: 465
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 215, 13, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 230, 13, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 228, 13, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 42, 1, // Skip to: 465
/* 167 */     MCD::OPC_Decode, 228, 2, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 465
/* 179 */     MCD::OPC_Decode, 236, 2, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 22, 1, // Skip to: 465
/* 187 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 465
/* 191 */     MCD::OPC_Decode, 172, 1, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 465
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 0, 1, // Skip to: 465
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 250, 0, // Skip to: 465
/* 215 */     MCD::OPC_Decode, 170, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 465
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 232, 0, // Skip to: 465
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 226, 0, // Skip to: 465
/* 239 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 214, 0, // Skip to: 465
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 208, 0, // Skip to: 465
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 202, 0, // Skip to: 465
/* 263 */     MCD::OPC_Decode, 221, 13, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 465
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 465
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 465
/* 287 */     MCD::OPC_Decode, 224, 13, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 465
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 465
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 465
/* 311 */     MCD::OPC_Decode, 160, 8, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 465
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 465
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 465
/* 335 */     MCD::OPC_Decode, 179, 4, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 363
/* 343 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 465
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 465
/* 353 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 465
/* 359 */     MCD::OPC_Decode, 169, 8, 1, // Opcode: LwRxSpImmX16
/* 363 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 387
/* 367 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 465
/* 371 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 465
/* 377 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 465
/* 383 */     MCD::OPC_Decode, 167, 8, 1, // Opcode: LwRxPcTcpX16
/* 387 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 405
/* 391 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 465
/* 395 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 465
/* 401 */     MCD::OPC_Decode, 197, 13, 9, // Opcode: SbRxRyOffMemX16
/* 405 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 465
/* 413 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 465
/* 419 */     MCD::OPC_Decode, 214, 13, 9, // Opcode: ShRxRyOffMemX16
/* 423 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 447
/* 427 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 465
/* 431 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 465
/* 437 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 465
/* 443 */     MCD::OPC_Decode, 234, 13, 1, // Opcode: SwRxSpImmX16
/* 447 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 465
/* 451 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 233, 13, 9, // Opcode: SwRxRyOffMemX16
/* 465 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 131, 8, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 205, 7, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 170, 13, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 211, 11, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 223, 4, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 229, 4, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 232, 4, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 227, 9, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 230, 9, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 231, 9, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 232, 9, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 228, 9, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 229, 9, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 156, 14, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 155, 14, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 154, 14, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 177, 1, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 238, 11, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 178, 12, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 212, 10, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 129, 5, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 239, 11, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 179, 12, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 3, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 133, 3, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 3, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 134, 3, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 3, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 188, 5, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 3, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 189, 5, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 183, 1, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 184, 1, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 185, 1, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 186, 1, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 4, 19, 2, // Skip to: 549
/* 18 */      MCD::OPC_Decode, 55, 19, // Opcode: ADDU16_MM
/* 21 */      MCD::OPC_FilterValue, 1, 12, 2, // Skip to: 549
/* 25 */      MCD::OPC_CheckPredicate, 4, 8, 2, // Skip to: 549
/* 29 */      MCD::OPC_Decode, 140, 13, 19, // Opcode: SUBU16_MM
/* 33 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 4, 252, 1, // Skip to: 549
/* 41 */      MCD::OPC_Decode, 193, 7, 20, // Opcode: LBU16_MM
/* 45 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 57
/* 49 */      MCD::OPC_CheckPredicate, 4, 240, 1, // Skip to: 549
/* 53 */      MCD::OPC_Decode, 147, 9, 21, // Opcode: MOVE16_MM
/* 57 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 88
/* 61 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 64 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 76
/* 68 */      MCD::OPC_CheckPredicate, 4, 221, 1, // Skip to: 549
/* 72 */      MCD::OPC_Decode, 152, 12, 22, // Opcode: SLL16_MM
/* 76 */      MCD::OPC_FilterValue, 1, 213, 1, // Skip to: 549
/* 80 */      MCD::OPC_CheckPredicate, 4, 209, 1, // Skip to: 549
/* 84 */      MCD::OPC_Decode, 214, 12, 22, // Opcode: SRL16_MM
/* 88 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 100
/* 92 */      MCD::OPC_CheckPredicate, 4, 197, 1, // Skip to: 549
/* 96 */      MCD::OPC_Decode, 224, 7, 20, // Opcode: LHU16_MM
/* 100 */     MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 111
/* 104 */     MCD::OPC_CheckPredicate, 4, 185, 1, // Skip to: 549
/* 108 */     MCD::OPC_Decode, 93, 23, // Opcode: ANDI16_MM
/* 111 */     MCD::OPC_FilterValue, 17, 226, 0, // Skip to: 341
/* 115 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 4, 167, 1, // Skip to: 549
/* 126 */     MCD::OPC_Decode, 177, 10, 24, // Opcode: NOT16_MM
/* 130 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 142
/* 134 */     MCD::OPC_CheckPredicate, 4, 155, 1, // Skip to: 549
/* 138 */     MCD::OPC_Decode, 167, 14, 25, // Opcode: XOR16_MM
/* 142 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 153
/* 146 */     MCD::OPC_CheckPredicate, 4, 143, 1, // Skip to: 549
/* 150 */     MCD::OPC_Decode, 91, 25, // Opcode: AND16_MM
/* 153 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 165
/* 157 */     MCD::OPC_CheckPredicate, 4, 132, 1, // Skip to: 549
/* 161 */     MCD::OPC_Decode, 181, 10, 25, // Opcode: OR16_MM
/* 165 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 4, 120, 1, // Skip to: 549
/* 173 */     MCD::OPC_Decode, 136, 8, 26, // Opcode: LWM16_MM
/* 177 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 4, 108, 1, // Skip to: 549
/* 185 */     MCD::OPC_Decode, 174, 13, 26, // Opcode: SWM16_MM
/* 189 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 220
/* 193 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 196 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 208
/* 200 */     MCD::OPC_CheckPredicate, 4, 89, 1, // Skip to: 549
/* 204 */     MCD::OPC_Decode, 175, 7, 27, // Opcode: JR16_MM
/* 208 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 549
/* 212 */     MCD::OPC_CheckPredicate, 4, 77, 1, // Skip to: 549
/* 216 */     MCD::OPC_Decode, 178, 7, 27, // Opcode: JRC16_MM
/* 220 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 251
/* 224 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 227 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 239
/* 231 */     MCD::OPC_CheckPredicate, 4, 58, 1, // Skip to: 549
/* 235 */     MCD::OPC_Decode, 158, 7, 27, // Opcode: JALR16_MM
/* 239 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 549
/* 243 */     MCD::OPC_CheckPredicate, 4, 46, 1, // Skip to: 549
/* 247 */     MCD::OPC_Decode, 162, 7, 27, // Opcode: JALRS16_MM
/* 251 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 269
/* 255 */     MCD::OPC_CheckPredicate, 4, 34, 1, // Skip to: 549
/* 259 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 549
/* 265 */     MCD::OPC_Decode, 227, 8, 27, // Opcode: MFHI16_MM
/* 269 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 287
/* 273 */     MCD::OPC_CheckPredicate, 4, 16, 1, // Skip to: 549
/* 277 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 549
/* 283 */     MCD::OPC_Decode, 232, 8, 27, // Opcode: MFLO16_MM
/* 287 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 305
/* 291 */     MCD::OPC_CheckPredicate, 4, 254, 0, // Skip to: 549
/* 295 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 549
/* 301 */     MCD::OPC_Decode, 188, 2, 28, // Opcode: BREAK16_MM
/* 305 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 323
/* 309 */     MCD::OPC_CheckPredicate, 4, 236, 0, // Skip to: 549
/* 313 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 549
/* 319 */     MCD::OPC_Decode, 203, 11, 28, // Opcode: SDBBP16_MM
/* 323 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 549
/* 327 */     MCD::OPC_CheckPredicate, 4, 218, 0, // Skip to: 549
/* 331 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 549
/* 337 */     MCD::OPC_Decode, 177, 7, 29, // Opcode: JRADDIUSP
/* 341 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 353
/* 345 */     MCD::OPC_CheckPredicate, 4, 200, 0, // Skip to: 549
/* 349 */     MCD::OPC_Decode, 145, 8, 30, // Opcode: LWSP_MM
/* 353 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 382
/* 357 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 360 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 371
/* 364 */     MCD::OPC_CheckPredicate, 4, 181, 0, // Skip to: 549
/* 368 */     MCD::OPC_Decode, 32, 31, // Opcode: ADDIUS5_MM
/* 371 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 549
/* 375 */     MCD::OPC_CheckPredicate, 4, 170, 0, // Skip to: 549
/* 379 */     MCD::OPC_Decode, 33, 32, // Opcode: ADDIUSP_MM
/* 382 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 394
/* 386 */     MCD::OPC_CheckPredicate, 4, 159, 0, // Skip to: 549
/* 390 */     MCD::OPC_Decode, 132, 8, 33, // Opcode: LWGP_MM
/* 394 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 4, 147, 0, // Skip to: 549
/* 402 */     MCD::OPC_Decode, 253, 7, 20, // Opcode: LW16_MM
/* 406 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 435
/* 410 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 413 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 424
/* 417 */     MCD::OPC_CheckPredicate, 4, 128, 0, // Skip to: 549
/* 421 */     MCD::OPC_Decode, 31, 34, // Opcode: ADDIUR2_MM
/* 424 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 549
/* 428 */     MCD::OPC_CheckPredicate, 4, 117, 0, // Skip to: 549
/* 432 */     MCD::OPC_Decode, 30, 35, // Opcode: ADDIUR1SP_MM
/* 435 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 4, 106, 0, // Skip to: 549
/* 443 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 549
/* 449 */     MCD::OPC_Decode, 148, 9, 36, // Opcode: MOVEP_MM
/* 453 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 465
/* 457 */     MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 549
/* 461 */     MCD::OPC_Decode, 193, 11, 20, // Opcode: SB16_MM
/* 465 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 477
/* 469 */     MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 549
/* 473 */     MCD::OPC_Decode, 211, 1, 37, // Opcode: BEQZ16_MM
/* 477 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 549
/* 485 */     MCD::OPC_Decode, 241, 11, 20, // Opcode: SH16_MM
/* 489 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 501
/* 493 */     MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 549
/* 497 */     MCD::OPC_Decode, 172, 2, 37, // Opcode: BNEZ16_MM
/* 501 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 513
/* 505 */     MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 549
/* 509 */     MCD::OPC_Decode, 181, 13, 30, // Opcode: SWSP_MM
/* 513 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 525
/* 517 */     MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 549
/* 521 */     MCD::OPC_Decode, 176, 1, 38, // Opcode: B16_MM
/* 525 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 549
/* 533 */     MCD::OPC_Decode, 164, 13, 20, // Opcode: SW16_MM
/* 537 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 549
/* 541 */     MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 549
/* 545 */     MCD::OPC_Decode, 230, 7, 39, // Opcode: LI16_MM
/* 549 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 189, 3, // Skip to: 964
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 235, 12, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 166, 5, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 197, 10, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 4, 38, 6, // Skip to: 1638
/* 64 */      MCD::OPC_Decode, 164, 12, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 4, 26, 6, // Skip to: 1638
/* 76 */      MCD::OPC_Decode, 232, 12, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 4, 14, 6, // Skip to: 1638
/* 88 */      MCD::OPC_Decode, 211, 12, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 6, 6, // Skip to: 1638
/* 96 */      MCD::OPC_CheckPredicate, 4, 2, 6, // Skip to: 1638
/* 100 */     MCD::OPC_Decode, 172, 11, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 4, 246, 5, // Skip to: 1638
/* 112 */     MCD::OPC_Decode, 189, 2, 41, // Opcode: BREAK_MM
/* 116 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 4, 234, 5, // Skip to: 1638
/* 124 */     MCD::OPC_Decode, 154, 7, 42, // Opcode: INS_MM
/* 128 */     MCD::OPC_FilterValue, 16, 180, 0, // Skip to: 312
/* 132 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 135 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 147
/* 139 */     MCD::OPC_CheckPredicate, 4, 215, 5, // Skip to: 1638
/* 143 */     MCD::OPC_Decode, 160, 12, 43, // Opcode: SLLV_MM
/* 147 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 159
/* 151 */     MCD::OPC_CheckPredicate, 4, 203, 5, // Skip to: 1638
/* 155 */     MCD::OPC_Decode, 228, 12, 43, // Opcode: SRLV_MM
/* 159 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 4, 191, 5, // Skip to: 1638
/* 167 */     MCD::OPC_Decode, 207, 12, 43, // Opcode: SRAV_MM
/* 171 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 4, 179, 5, // Skip to: 1638
/* 179 */     MCD::OPC_Decode, 171, 11, 43, // Opcode: ROTRV_MM
/* 183 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 194
/* 187 */     MCD::OPC_CheckPredicate, 4, 167, 5, // Skip to: 1638
/* 191 */     MCD::OPC_Decode, 76, 44, // Opcode: ADD_MM
/* 194 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 205
/* 198 */     MCD::OPC_CheckPredicate, 4, 156, 5, // Skip to: 1638
/* 202 */     MCD::OPC_Decode, 83, 44, // Opcode: ADDu_MM
/* 205 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 217
/* 209 */     MCD::OPC_CheckPredicate, 4, 145, 5, // Skip to: 1638
/* 213 */     MCD::OPC_Decode, 156, 13, 44, // Opcode: SUB_MM
/* 217 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 229
/* 221 */     MCD::OPC_CheckPredicate, 4, 133, 5, // Skip to: 1638
/* 225 */     MCD::OPC_Decode, 159, 13, 44, // Opcode: SUBu_MM
/* 229 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 241
/* 233 */     MCD::OPC_CheckPredicate, 4, 121, 5, // Skip to: 1638
/* 237 */     MCD::OPC_Decode, 134, 10, 44, // Opcode: MUL_MM
/* 241 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 252
/* 245 */     MCD::OPC_CheckPredicate, 4, 109, 5, // Skip to: 1638
/* 249 */     MCD::OPC_Decode, 96, 44, // Opcode: AND_MM
/* 252 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 4, 98, 5, // Skip to: 1638
/* 260 */     MCD::OPC_Decode, 185, 10, 44, // Opcode: OR_MM
/* 264 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 276
/* 268 */     MCD::OPC_CheckPredicate, 4, 86, 5, // Skip to: 1638
/* 272 */     MCD::OPC_Decode, 171, 10, 44, // Opcode: NOR_MM
/* 276 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 4, 74, 5, // Skip to: 1638
/* 284 */     MCD::OPC_Decode, 171, 14, 44, // Opcode: XOR_MM
/* 288 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 300
/* 292 */     MCD::OPC_CheckPredicate, 4, 62, 5, // Skip to: 1638
/* 296 */     MCD::OPC_Decode, 168, 12, 44, // Opcode: SLT_MM
/* 300 */     MCD::OPC_FilterValue, 14, 54, 5, // Skip to: 1638
/* 304 */     MCD::OPC_CheckPredicate, 4, 50, 5, // Skip to: 1638
/* 308 */     MCD::OPC_Decode, 177, 12, 44, // Opcode: SLTu_MM
/* 312 */     MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 355
/* 316 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 319 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 331
/* 323 */     MCD::OPC_CheckPredicate, 4, 31, 5, // Skip to: 1638
/* 327 */     MCD::OPC_Decode, 167, 9, 45, // Opcode: MOVN_I_MM
/* 331 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 343
/* 335 */     MCD::OPC_CheckPredicate, 4, 19, 5, // Skip to: 1638
/* 339 */     MCD::OPC_Decode, 187, 9, 45, // Opcode: MOVZ_I_MM
/* 343 */     MCD::OPC_FilterValue, 4, 11, 5, // Skip to: 1638
/* 347 */     MCD::OPC_CheckPredicate, 4, 7, 5, // Skip to: 1638
/* 351 */     MCD::OPC_Decode, 151, 8, 46, // Opcode: LWXS_MM
/* 355 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 4, 251, 4, // Skip to: 1638
/* 363 */     MCD::OPC_Decode, 190, 5, 47, // Opcode: EXT_MM
/* 367 */     MCD::OPC_FilterValue, 60, 243, 4, // Skip to: 1638
/* 371 */     MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 374 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 386
/* 378 */     MCD::OPC_CheckPredicate, 4, 232, 4, // Skip to: 1638
/* 382 */     MCD::OPC_Decode, 241, 13, 48, // Opcode: TEQ_MM
/* 386 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 398
/* 390 */     MCD::OPC_CheckPredicate, 4, 220, 4, // Skip to: 1638
/* 394 */     MCD::OPC_Decode, 249, 13, 48, // Opcode: TGE_MM
/* 398 */     MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 525
/* 402 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 405 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 4, 201, 4, // Skip to: 1638
/* 413 */     MCD::OPC_CheckField, 16, 10, 0, 195, 4, // Skip to: 1638
/* 419 */     MCD::OPC_Decode, 251, 13, 0, // Opcode: TLBP_MM
/* 423 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 441
/* 427 */     MCD::OPC_CheckPredicate, 4, 183, 4, // Skip to: 1638
/* 431 */     MCD::OPC_CheckField, 16, 10, 0, 177, 4, // Skip to: 1638
/* 437 */     MCD::OPC_Decode, 253, 13, 0, // Opcode: TLBR_MM
/* 441 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 459
/* 445 */     MCD::OPC_CheckPredicate, 4, 165, 4, // Skip to: 1638
/* 449 */     MCD::OPC_CheckField, 16, 10, 0, 159, 4, // Skip to: 1638
/* 455 */     MCD::OPC_Decode, 255, 13, 0, // Opcode: TLBWI_MM
/* 459 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 477
/* 463 */     MCD::OPC_CheckPredicate, 4, 147, 4, // Skip to: 1638
/* 467 */     MCD::OPC_CheckField, 16, 10, 0, 141, 4, // Skip to: 1638
/* 473 */     MCD::OPC_Decode, 129, 14, 0, // Opcode: TLBWR_MM
/* 477 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 4, 129, 4, // Skip to: 1638
/* 485 */     MCD::OPC_Decode, 162, 14, 49, // Opcode: WAIT_MM
/* 489 */     MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 507
/* 493 */     MCD::OPC_CheckPredicate, 4, 117, 4, // Skip to: 1638
/* 497 */     MCD::OPC_CheckField, 16, 10, 0, 111, 4, // Skip to: 1638
/* 503 */     MCD::OPC_Decode, 197, 4, 0, // Opcode: DERET_MM
/* 507 */     MCD::OPC_FilterValue, 15, 103, 4, // Skip to: 1638
/* 511 */     MCD::OPC_CheckPredicate, 4, 99, 4, // Skip to: 1638
/* 515 */     MCD::OPC_CheckField, 16, 10, 0, 93, 4, // Skip to: 1638
/* 521 */     MCD::OPC_Decode, 173, 5, 0, // Opcode: ERET_MM
/* 525 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 4, 81, 4, // Skip to: 1638
/* 533 */     MCD::OPC_Decode, 248, 13, 48, // Opcode: TGEU_MM
/* 537 */     MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 580
/* 541 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 544 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 562
/* 548 */     MCD::OPC_CheckPredicate, 4, 62, 4, // Skip to: 1638
/* 552 */     MCD::OPC_CheckField, 21, 5, 0, 56, 4, // Skip to: 1638
/* 558 */     MCD::OPC_Decode, 217, 4, 50, // Opcode: DI_MM
/* 562 */     MCD::OPC_FilterValue, 5, 48, 4, // Skip to: 1638
/* 566 */     MCD::OPC_CheckPredicate, 4, 44, 4, // Skip to: 1638
/* 570 */     MCD::OPC_CheckField, 21, 5, 0, 38, 4, // Skip to: 1638
/* 576 */     MCD::OPC_Decode, 169, 5, 50, // Opcode: EI_MM
/* 580 */     MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 592
/* 584 */     MCD::OPC_CheckPredicate, 4, 26, 4, // Skip to: 1638
/* 588 */     MCD::OPC_Decode, 136, 14, 48, // Opcode: TLT_MM
/* 592 */     MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 604
/* 596 */     MCD::OPC_CheckPredicate, 4, 14, 4, // Skip to: 1638
/* 600 */     MCD::OPC_Decode, 135, 14, 48, // Opcode: TLTU_MM
/* 604 */     MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 779
/* 608 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 611 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 623
/* 615 */     MCD::OPC_CheckPredicate, 4, 251, 3, // Skip to: 1638
/* 619 */     MCD::OPC_Decode, 220, 11, 51, // Opcode: SEB_MM
/* 623 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 635
/* 627 */     MCD::OPC_CheckPredicate, 4, 239, 3, // Skip to: 1638
/* 631 */     MCD::OPC_Decode, 224, 11, 51, // Opcode: SEH_MM
/* 635 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 647
/* 639 */     MCD::OPC_CheckPredicate, 4, 227, 3, // Skip to: 1638
/* 643 */     MCD::OPC_Decode, 154, 3, 51, // Opcode: CLO_MM
/* 647 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 659
/* 651 */     MCD::OPC_CheckPredicate, 4, 215, 3, // Skip to: 1638
/* 655 */     MCD::OPC_Decode, 174, 3, 51, // Opcode: CLZ_MM
/* 659 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 671
/* 663 */     MCD::OPC_CheckPredicate, 4, 203, 3, // Skip to: 1638
/* 667 */     MCD::OPC_Decode, 162, 11, 52, // Opcode: RDHWR_MM
/* 671 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 683
/* 675 */     MCD::OPC_CheckPredicate, 4, 191, 3, // Skip to: 1638
/* 679 */     MCD::OPC_Decode, 165, 14, 51, // Opcode: WSBH_MM
/* 683 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 695
/* 687 */     MCD::OPC_CheckPredicate, 4, 179, 3, // Skip to: 1638
/* 691 */     MCD::OPC_Decode, 253, 9, 53, // Opcode: MULT_MM
/* 695 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 707
/* 699 */     MCD::OPC_CheckPredicate, 4, 167, 3, // Skip to: 1638
/* 703 */     MCD::OPC_Decode, 255, 9, 53, // Opcode: MULTu_MM
/* 707 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 719
/* 711 */     MCD::OPC_CheckPredicate, 4, 155, 3, // Skip to: 1638
/* 715 */     MCD::OPC_Decode, 213, 11, 53, // Opcode: SDIV_MM
/* 719 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 731
/* 723 */     MCD::OPC_CheckPredicate, 4, 143, 3, // Skip to: 1638
/* 727 */     MCD::OPC_Decode, 151, 14, 53, // Opcode: UDIV_MM
/* 731 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 743
/* 735 */     MCD::OPC_CheckPredicate, 4, 131, 3, // Skip to: 1638
/* 739 */     MCD::OPC_Decode, 186, 8, 53, // Opcode: MADD_MM
/* 743 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 755
/* 747 */     MCD::OPC_CheckPredicate, 4, 119, 3, // Skip to: 1638
/* 751 */     MCD::OPC_Decode, 177, 8, 53, // Opcode: MADDU_MM
/* 755 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 767
/* 759 */     MCD::OPC_CheckPredicate, 4, 107, 3, // Skip to: 1638
/* 763 */     MCD::OPC_Decode, 206, 9, 53, // Opcode: MSUB_MM
/* 767 */     MCD::OPC_FilterValue, 15, 99, 3, // Skip to: 1638
/* 771 */     MCD::OPC_CheckPredicate, 4, 95, 3, // Skip to: 1638
/* 775 */     MCD::OPC_Decode, 197, 9, 53, // Opcode: MSUBU_MM
/* 779 */     MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 828
/* 783 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 786 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 4, 76, 3, // Skip to: 1638
/* 794 */     MCD::OPC_CheckField, 21, 5, 0, 70, 3, // Skip to: 1638
/* 800 */     MCD::OPC_Decode, 187, 13, 54, // Opcode: SYNC_MM
/* 804 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 816
/* 808 */     MCD::OPC_CheckPredicate, 4, 58, 3, // Skip to: 1638
/* 812 */     MCD::OPC_Decode, 189, 13, 49, // Opcode: SYSCALL_MM
/* 816 */     MCD::OPC_FilterValue, 13, 50, 3, // Skip to: 1638
/* 820 */     MCD::OPC_CheckPredicate, 4, 46, 3, // Skip to: 1638
/* 824 */     MCD::OPC_Decode, 204, 11, 49, // Opcode: SDBBP_MM
/* 828 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 840
/* 832 */     MCD::OPC_CheckPredicate, 4, 34, 3, // Skip to: 1638
/* 836 */     MCD::OPC_Decode, 140, 14, 48, // Opcode: TNE_MM
/* 840 */     MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 919
/* 844 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 847 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 865
/* 851 */     MCD::OPC_CheckPredicate, 4, 15, 3, // Skip to: 1638
/* 855 */     MCD::OPC_CheckField, 21, 5, 0, 9, 3, // Skip to: 1638
/* 861 */     MCD::OPC_Decode, 230, 8, 50, // Opcode: MFHI_MM
/* 865 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 883
/* 869 */     MCD::OPC_CheckPredicate, 4, 253, 2, // Skip to: 1638
/* 873 */     MCD::OPC_CheckField, 21, 5, 0, 247, 2, // Skip to: 1638
/* 879 */     MCD::OPC_Decode, 235, 8, 50, // Opcode: MFLO_MM
/* 883 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 901
/* 887 */     MCD::OPC_CheckPredicate, 4, 235, 2, // Skip to: 1638
/* 891 */     MCD::OPC_CheckField, 21, 5, 0, 229, 2, // Skip to: 1638
/* 897 */     MCD::OPC_Decode, 221, 9, 50, // Opcode: MTHI_MM
/* 901 */     MCD::OPC_FilterValue, 3, 221, 2, // Skip to: 1638
/* 905 */     MCD::OPC_CheckPredicate, 4, 217, 2, // Skip to: 1638
/* 909 */     MCD::OPC_CheckField, 21, 5, 0, 211, 2, // Skip to: 1638
/* 915 */     MCD::OPC_Decode, 226, 9, 50, // Opcode: MTLO_MM
/* 919 */     MCD::OPC_FilterValue, 60, 203, 2, // Skip to: 1638
/* 923 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 926 */     MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 952
/* 930 */     MCD::OPC_CheckPredicate, 4, 10, 0, // Skip to: 944
/* 934 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 944
/* 940 */     MCD::OPC_Decode, 181, 7, 50, // Opcode: JR_MM
/* 944 */     MCD::OPC_CheckPredicate, 4, 178, 2, // Skip to: 1638
/* 948 */     MCD::OPC_Decode, 165, 7, 51, // Opcode: JALR_MM
/* 952 */     MCD::OPC_FilterValue, 4, 170, 2, // Skip to: 1638
/* 956 */     MCD::OPC_CheckPredicate, 4, 166, 2, // Skip to: 1638
/* 960 */     MCD::OPC_Decode, 163, 7, 51, // Opcode: JALRS_MM
/* 964 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 975
/* 968 */     MCD::OPC_CheckPredicate, 4, 154, 2, // Skip to: 1638
/* 972 */     MCD::OPC_Decode, 79, 55, // Opcode: ADDi_MM
/* 975 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 987
/* 979 */     MCD::OPC_CheckPredicate, 4, 143, 2, // Skip to: 1638
/* 983 */     MCD::OPC_Decode, 198, 7, 56, // Opcode: LBu_MM
/* 987 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 999
/* 991 */     MCD::OPC_CheckPredicate, 4, 131, 2, // Skip to: 1638
/* 995 */     MCD::OPC_Decode, 195, 11, 56, // Opcode: SB_MM
/* 999 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1011
/* 1003 */    MCD::OPC_CheckPredicate, 4, 119, 2, // Skip to: 1638
/* 1007 */    MCD::OPC_Decode, 195, 7, 56, // Opcode: LB_MM
/* 1011 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 1078
/* 1015 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1018 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1030
/* 1022 */    MCD::OPC_CheckPredicate, 4, 100, 2, // Skip to: 1638
/* 1026 */    MCD::OPC_Decode, 141, 8, 57, // Opcode: LWP_MM
/* 1030 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 4, 88, 2, // Skip to: 1638
/* 1038 */    MCD::OPC_Decode, 137, 8, 57, // Opcode: LWM32_MM
/* 1042 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1054
/* 1046 */    MCD::OPC_CheckPredicate, 4, 76, 2, // Skip to: 1638
/* 1050 */    MCD::OPC_Decode, 240, 2, 58, // Opcode: CACHE_MM
/* 1054 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1066
/* 1058 */    MCD::OPC_CheckPredicate, 4, 64, 2, // Skip to: 1638
/* 1062 */    MCD::OPC_Decode, 177, 13, 57, // Opcode: SWP_MM
/* 1066 */    MCD::OPC_FilterValue, 13, 56, 2, // Skip to: 1638
/* 1070 */    MCD::OPC_CheckPredicate, 4, 52, 2, // Skip to: 1638
/* 1074 */    MCD::OPC_Decode, 175, 13, 57, // Opcode: SWM32_MM
/* 1078 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1089
/* 1082 */    MCD::OPC_CheckPredicate, 4, 40, 2, // Skip to: 1638
/* 1086 */    MCD::OPC_Decode, 81, 55, // Opcode: ADDiu_MM
/* 1089 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1101
/* 1093 */    MCD::OPC_CheckPredicate, 4, 29, 2, // Skip to: 1638
/* 1097 */    MCD::OPC_Decode, 229, 7, 56, // Opcode: LHu_MM
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 4, 17, 2, // Skip to: 1638
/* 1109 */    MCD::OPC_Decode, 142, 12, 56, // Opcode: SH_MM
/* 1113 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1125
/* 1117 */    MCD::OPC_CheckPredicate, 4, 5, 2, // Skip to: 1638
/* 1121 */    MCD::OPC_Decode, 226, 7, 56, // Opcode: LH_MM
/* 1125 */    MCD::OPC_FilterValue, 16, 207, 0, // Skip to: 1336
/* 1129 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1132 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 4, 242, 1, // Skip to: 1638
/* 1140 */    MCD::OPC_Decode, 155, 2, 59, // Opcode: BLTZ_MM
/* 1144 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 4, 230, 1, // Skip to: 1638
/* 1152 */    MCD::OPC_Decode, 152, 2, 59, // Opcode: BLTZAL_MM
/* 1156 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 4, 218, 1, // Skip to: 1638
/* 1164 */    MCD::OPC_Decode, 231, 1, 59, // Opcode: BGEZ_MM
/* 1168 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 4, 206, 1, // Skip to: 1638
/* 1176 */    MCD::OPC_Decode, 228, 1, 59, // Opcode: BGEZAL_MM
/* 1180 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 4, 194, 1, // Skip to: 1638
/* 1188 */    MCD::OPC_Decode, 140, 2, 59, // Opcode: BLEZ_MM
/* 1192 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1204
/* 1196 */    MCD::OPC_CheckPredicate, 4, 182, 1, // Skip to: 1638
/* 1200 */    MCD::OPC_Decode, 176, 2, 59, // Opcode: BNEZC_MM
/* 1204 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 4, 170, 1, // Skip to: 1638
/* 1212 */    MCD::OPC_Decode, 240, 1, 59, // Opcode: BGTZ_MM
/* 1216 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1228
/* 1220 */    MCD::OPC_CheckPredicate, 4, 158, 1, // Skip to: 1638
/* 1224 */    MCD::OPC_Decode, 215, 1, 59, // Opcode: BEQZC_MM
/* 1228 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1240
/* 1232 */    MCD::OPC_CheckPredicate, 4, 146, 1, // Skip to: 1638
/* 1236 */    MCD::OPC_Decode, 133, 14, 60, // Opcode: TLTI_MM
/* 1240 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1252
/* 1244 */    MCD::OPC_CheckPredicate, 4, 134, 1, // Skip to: 1638
/* 1248 */    MCD::OPC_Decode, 246, 13, 60, // Opcode: TGEI_MM
/* 1252 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1264
/* 1256 */    MCD::OPC_CheckPredicate, 4, 122, 1, // Skip to: 1638
/* 1260 */    MCD::OPC_Decode, 132, 14, 60, // Opcode: TLTIU_MM
/* 1264 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1276
/* 1268 */    MCD::OPC_CheckPredicate, 4, 110, 1, // Skip to: 1638
/* 1272 */    MCD::OPC_Decode, 245, 13, 60, // Opcode: TGEIU_MM
/* 1276 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1288
/* 1280 */    MCD::OPC_CheckPredicate, 4, 98, 1, // Skip to: 1638
/* 1284 */    MCD::OPC_Decode, 139, 14, 60, // Opcode: TNEI_MM
/* 1288 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1300
/* 1292 */    MCD::OPC_CheckPredicate, 4, 86, 1, // Skip to: 1638
/* 1296 */    MCD::OPC_Decode, 251, 7, 60, // Opcode: LUi_MM
/* 1300 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1312
/* 1304 */    MCD::OPC_CheckPredicate, 4, 74, 1, // Skip to: 1638
/* 1308 */    MCD::OPC_Decode, 240, 13, 60, // Opcode: TEQI_MM
/* 1312 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1324
/* 1316 */    MCD::OPC_CheckPredicate, 4, 62, 1, // Skip to: 1638
/* 1320 */    MCD::OPC_Decode, 151, 2, 59, // Opcode: BLTZALS_MM
/* 1324 */    MCD::OPC_FilterValue, 19, 54, 1, // Skip to: 1638
/* 1328 */    MCD::OPC_CheckPredicate, 4, 50, 1, // Skip to: 1638
/* 1332 */    MCD::OPC_Decode, 227, 1, 59, // Opcode: BGEZALS_MM
/* 1336 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1348
/* 1340 */    MCD::OPC_CheckPredicate, 4, 38, 1, // Skip to: 1638
/* 1344 */    MCD::OPC_Decode, 193, 10, 61, // Opcode: ORi_MM
/* 1348 */    MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 1381
/* 1352 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1355 */    MCD::OPC_FilterValue, 251, 2, 8, 0, // Skip to: 1368
/* 1360 */    MCD::OPC_CheckPredicate, 4, 18, 1, // Skip to: 1638
/* 1364 */    MCD::OPC_Decode, 155, 9, 62, // Opcode: MOVF_I_MM
/* 1368 */    MCD::OPC_FilterValue, 251, 18, 9, 1, // Skip to: 1638
/* 1373 */    MCD::OPC_CheckPredicate, 4, 5, 1, // Skip to: 1638
/* 1377 */    MCD::OPC_Decode, 175, 9, 62, // Opcode: MOVT_I_MM
/* 1381 */    MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 1484
/* 1385 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1388 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1400
/* 1392 */    MCD::OPC_CheckPredicate, 4, 242, 0, // Skip to: 1638
/* 1396 */    MCD::OPC_Decode, 135, 8, 57, // Opcode: LWL_MM
/* 1400 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1412
/* 1404 */    MCD::OPC_CheckPredicate, 4, 230, 0, // Skip to: 1638
/* 1408 */    MCD::OPC_Decode, 144, 8, 57, // Opcode: LWR_MM
/* 1412 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1424
/* 1416 */    MCD::OPC_CheckPredicate, 4, 218, 0, // Skip to: 1638
/* 1420 */    MCD::OPC_Decode, 231, 10, 58, // Opcode: PREF_MM
/* 1424 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1436
/* 1428 */    MCD::OPC_CheckPredicate, 4, 206, 0, // Skip to: 1638
/* 1432 */    MCD::OPC_Decode, 234, 7, 57, // Opcode: LL_MM
/* 1436 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1448
/* 1440 */    MCD::OPC_CheckPredicate, 4, 194, 0, // Skip to: 1638
/* 1444 */    MCD::OPC_Decode, 173, 13, 57, // Opcode: SWL_MM
/* 1448 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1460
/* 1452 */    MCD::OPC_CheckPredicate, 4, 182, 0, // Skip to: 1638
/* 1456 */    MCD::OPC_Decode, 180, 13, 57, // Opcode: SWR_MM
/* 1460 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1472
/* 1464 */    MCD::OPC_CheckPredicate, 4, 170, 0, // Skip to: 1638
/* 1468 */    MCD::OPC_Decode, 199, 11, 57, // Opcode: SC_MM
/* 1472 */    MCD::OPC_FilterValue, 14, 162, 0, // Skip to: 1638
/* 1476 */    MCD::OPC_CheckPredicate, 4, 158, 0, // Skip to: 1638
/* 1480 */    MCD::OPC_Decode, 147, 8, 57, // Opcode: LWU_MM
/* 1484 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 1496
/* 1488 */    MCD::OPC_CheckPredicate, 4, 146, 0, // Skip to: 1638
/* 1492 */    MCD::OPC_Decode, 179, 14, 61, // Opcode: XORi_MM
/* 1496 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 1508
/* 1500 */    MCD::OPC_CheckPredicate, 4, 134, 0, // Skip to: 1638
/* 1504 */    MCD::OPC_Decode, 166, 7, 63, // Opcode: JALS_MM
/* 1508 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 1519
/* 1512 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 1638
/* 1516 */    MCD::OPC_Decode, 28, 64, // Opcode: ADDIUPC_MM
/* 1519 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1531
/* 1523 */    MCD::OPC_CheckPredicate, 4, 111, 0, // Skip to: 1638
/* 1527 */    MCD::OPC_Decode, 171, 12, 55, // Opcode: SLTi_MM
/* 1531 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1543
/* 1535 */    MCD::OPC_CheckPredicate, 4, 99, 0, // Skip to: 1638
/* 1539 */    MCD::OPC_Decode, 216, 1, 65, // Opcode: BEQ_MM
/* 1543 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1555
/* 1547 */    MCD::OPC_CheckPredicate, 4, 87, 0, // Skip to: 1638
/* 1551 */    MCD::OPC_Decode, 174, 12, 55, // Opcode: SLTiu_MM
/* 1555 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1567
/* 1559 */    MCD::OPC_CheckPredicate, 4, 75, 0, // Skip to: 1638
/* 1563 */    MCD::OPC_Decode, 177, 2, 65, // Opcode: BNE_MM
/* 1567 */    MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 1578
/* 1571 */    MCD::OPC_CheckPredicate, 4, 63, 0, // Skip to: 1638
/* 1575 */    MCD::OPC_Decode, 104, 61, // Opcode: ANDi_MM
/* 1578 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1590
/* 1582 */    MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 1638
/* 1586 */    MCD::OPC_Decode, 182, 7, 63, // Opcode: J_MM
/* 1590 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1602
/* 1594 */    MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 1638
/* 1598 */    MCD::OPC_Decode, 168, 7, 63, // Opcode: JALX_MM
/* 1602 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1614
/* 1606 */    MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 1638
/* 1610 */    MCD::OPC_Decode, 169, 7, 63, // Opcode: JAL_MM
/* 1614 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 1626
/* 1618 */    MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 1638
/* 1622 */    MCD::OPC_Decode, 184, 13, 56, // Opcode: SW_MM
/* 1626 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1638
/* 1630 */    MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 1638
/* 1634 */    MCD::OPC_Decode, 152, 8, 56, // Opcode: LW_MM
/* 1638 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 173, 1, // Skip to: 436
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 59
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 35
/* 21 */      MCD::OPC_CheckPredicate, 5, 201, 2, // Skip to: 738
/* 25 */      MCD::OPC_CheckField, 11, 15, 3, 195, 2, // Skip to: 738
/* 31 */      MCD::OPC_Decode, 167, 5, 0, // Opcode: EHB_MMR6
/* 35 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 47
/* 39 */      MCD::OPC_CheckPredicate, 5, 183, 2, // Skip to: 738
/* 43 */      MCD::OPC_Decode, 229, 11, 44, // Opcode: SELEQZ_MMR6
/* 47 */      MCD::OPC_FilterValue, 6, 175, 2, // Skip to: 738
/* 51 */      MCD::OPC_CheckPredicate, 5, 171, 2, // Skip to: 738
/* 55 */      MCD::OPC_Decode, 234, 11, 44, // Opcode: SELNEZ_MMR6
/* 59 */      MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 71
/* 63 */      MCD::OPC_CheckPredicate, 5, 159, 2, // Skip to: 738
/* 67 */      MCD::OPC_Decode, 190, 2, 41, // Opcode: BREAK_MMR6
/* 71 */      MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 89
/* 75 */      MCD::OPC_CheckPredicate, 5, 147, 2, // Skip to: 738
/* 79 */      MCD::OPC_CheckField, 6, 3, 0, 141, 2, // Skip to: 738
/* 85 */      MCD::OPC_Decode, 244, 7, 66, // Opcode: LSA_MMR6
/* 89 */      MCD::OPC_FilterValue, 16, 114, 0, // Skip to: 207
/* 93 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 96 */      MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 114
/* 100 */     MCD::OPC_CheckPredicate, 5, 122, 2, // Skip to: 738
/* 104 */     MCD::OPC_CheckField, 16, 5, 0, 116, 2, // Skip to: 738
/* 110 */     MCD::OPC_Decode, 175, 3, 14, // Opcode: CLZ_MMR6
/* 114 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 125
/* 118 */     MCD::OPC_CheckPredicate, 5, 104, 2, // Skip to: 738
/* 122 */     MCD::OPC_Decode, 77, 44, // Opcode: ADD_MMR6
/* 125 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 136
/* 129 */     MCD::OPC_CheckPredicate, 5, 93, 2, // Skip to: 738
/* 133 */     MCD::OPC_Decode, 58, 44, // Opcode: ADDU_MMR6
/* 136 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 148
/* 140 */     MCD::OPC_CheckPredicate, 5, 82, 2, // Skip to: 738
/* 144 */     MCD::OPC_Decode, 157, 13, 44, // Opcode: SUB_MMR6
/* 148 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 160
/* 152 */     MCD::OPC_CheckPredicate, 5, 70, 2, // Skip to: 738
/* 156 */     MCD::OPC_Decode, 143, 13, 44, // Opcode: SUBU_MMR6
/* 160 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 171
/* 164 */     MCD::OPC_CheckPredicate, 5, 58, 2, // Skip to: 738
/* 168 */     MCD::OPC_Decode, 97, 44, // Opcode: AND_MMR6
/* 171 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 5, 47, 2, // Skip to: 738
/* 179 */     MCD::OPC_Decode, 186, 10, 44, // Opcode: OR_MMR6
/* 183 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 5, 35, 2, // Skip to: 738
/* 191 */     MCD::OPC_Decode, 172, 10, 44, // Opcode: NOR_MMR6
/* 195 */     MCD::OPC_FilterValue, 12, 27, 2, // Skip to: 738
/* 199 */     MCD::OPC_CheckPredicate, 5, 23, 2, // Skip to: 738
/* 203 */     MCD::OPC_Decode, 172, 14, 44, // Opcode: XOR_MMR6
/* 207 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 310
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 5, 4, 2, // Skip to: 738
/* 222 */     MCD::OPC_Decode, 135, 10, 44, // Opcode: MUL_MMR6
/* 226 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 238
/* 230 */     MCD::OPC_CheckPredicate, 5, 248, 1, // Skip to: 738
/* 234 */     MCD::OPC_Decode, 236, 9, 44, // Opcode: MUH_MMR6
/* 238 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 250
/* 242 */     MCD::OPC_CheckPredicate, 5, 236, 1, // Skip to: 738
/* 246 */     MCD::OPC_Decode, 129, 10, 44, // Opcode: MULU_MMR6
/* 250 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 262
/* 254 */     MCD::OPC_CheckPredicate, 5, 224, 1, // Skip to: 738
/* 258 */     MCD::OPC_Decode, 235, 9, 44, // Opcode: MUHU_MMR6
/* 262 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 274
/* 266 */     MCD::OPC_CheckPredicate, 5, 212, 1, // Skip to: 738
/* 270 */     MCD::OPC_Decode, 208, 4, 44, // Opcode: DIV_MMR6
/* 274 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 286
/* 278 */     MCD::OPC_CheckPredicate, 5, 200, 1, // Skip to: 738
/* 282 */     MCD::OPC_Decode, 138, 9, 44, // Opcode: MOD_MMR6
/* 286 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 298
/* 290 */     MCD::OPC_CheckPredicate, 5, 188, 1, // Skip to: 738
/* 294 */     MCD::OPC_Decode, 207, 4, 44, // Opcode: DIVU_MMR6
/* 298 */     MCD::OPC_FilterValue, 7, 180, 1, // Skip to: 738
/* 302 */     MCD::OPC_CheckPredicate, 5, 176, 1, // Skip to: 738
/* 306 */     MCD::OPC_Decode, 137, 9, 44, // Opcode: MODU_MMR6
/* 310 */     MCD::OPC_FilterValue, 31, 13, 0, // Skip to: 327
/* 314 */     MCD::OPC_CheckPredicate, 5, 164, 1, // Skip to: 738
/* 318 */     MCD::OPC_CheckField, 6, 3, 0, 158, 1, // Skip to: 738
/* 324 */     MCD::OPC_Decode, 87, 67, // Opcode: ALIGN_MMR6
/* 327 */     MCD::OPC_FilterValue, 60, 151, 1, // Skip to: 738
/* 331 */     MCD::OPC_ExtractField, 6, 10,  // Inst{15-6} ...
/* 334 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 346
/* 338 */     MCD::OPC_CheckPredicate, 5, 140, 1, // Skip to: 738
/* 342 */     MCD::OPC_Decode, 131, 2, 53, // Opcode: BITSWAP_MMR6
/* 346 */     MCD::OPC_FilterValue, 172, 1, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 5, 127, 1, // Skip to: 738
/* 355 */     MCD::OPC_Decode, 221, 11, 51, // Opcode: SEB_MMR6
/* 359 */     MCD::OPC_FilterValue, 236, 1, 8, 0, // Skip to: 372
/* 364 */     MCD::OPC_CheckPredicate, 5, 114, 1, // Skip to: 738
/* 368 */     MCD::OPC_Decode, 225, 11, 51, // Opcode: SEH_MMR6
/* 372 */     MCD::OPC_FilterValue, 172, 2, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 5, 101, 1, // Skip to: 738
/* 381 */     MCD::OPC_Decode, 155, 3, 51, // Opcode: CLO_MMR6
/* 385 */     MCD::OPC_FilterValue, 221, 2, 14, 0, // Skip to: 404
/* 390 */     MCD::OPC_CheckPredicate, 5, 88, 1, // Skip to: 738
/* 394 */     MCD::OPC_CheckField, 21, 5, 0, 82, 1, // Skip to: 738
/* 400 */     MCD::OPC_Decode, 170, 5, 50, // Opcode: EI_MMR6
/* 404 */     MCD::OPC_FilterValue, 205, 7, 73, 1, // Skip to: 738
/* 409 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 412 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 424
/* 416 */     MCD::OPC_CheckPredicate, 5, 62, 1, // Skip to: 738
/* 420 */     MCD::OPC_Decode, 174, 5, 0, // Opcode: ERET_MMR6
/* 424 */     MCD::OPC_FilterValue, 1, 54, 1, // Skip to: 738
/* 428 */     MCD::OPC_CheckPredicate, 5, 50, 1, // Skip to: 738
/* 432 */     MCD::OPC_Decode, 172, 5, 0, // Opcode: ERETNC_MMR6
/* 436 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 448
/* 440 */     MCD::OPC_CheckPredicate, 5, 38, 1, // Skip to: 738
/* 444 */     MCD::OPC_Decode, 149, 1, 55, // Opcode: AUI_MMR6
/* 448 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 466
/* 452 */     MCD::OPC_CheckPredicate, 5, 26, 1, // Skip to: 738
/* 456 */     MCD::OPC_CheckField, 12, 4, 6, 20, 1, // Skip to: 738
/* 462 */     MCD::OPC_Decode, 241, 2, 58, // Opcode: CACHE_MMR6
/* 466 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 477
/* 470 */     MCD::OPC_CheckPredicate, 5, 8, 1, // Skip to: 738
/* 474 */     MCD::OPC_Decode, 34, 55, // Opcode: ADDIU_MMR6
/* 477 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 5, 253, 0, // Skip to: 738
/* 485 */     MCD::OPC_Decode, 184, 10, 55, // Opcode: ORI_MMR6
/* 489 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 507
/* 493 */     MCD::OPC_CheckPredicate, 5, 241, 0, // Skip to: 738
/* 497 */     MCD::OPC_CheckField, 12, 4, 2, 235, 0, // Skip to: 738
/* 503 */     MCD::OPC_Decode, 232, 10, 58, // Opcode: PREF_MMR6
/* 507 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 519
/* 511 */     MCD::OPC_CheckPredicate, 5, 223, 0, // Skip to: 738
/* 515 */     MCD::OPC_Decode, 170, 14, 55, // Opcode: XORI_MMR6
/* 519 */     MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 537
/* 523 */     MCD::OPC_CheckPredicate, 5, 211, 0, // Skip to: 738
/* 527 */     MCD::OPC_CheckField, 16, 5, 0, 205, 0, // Skip to: 738
/* 533 */     MCD::OPC_Decode, 213, 1, 68, // Opcode: BEQZALC_MMR6
/* 537 */     MCD::OPC_FilterValue, 30, 56, 0, // Skip to: 597
/* 541 */     MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 544 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 555
/* 548 */     MCD::OPC_CheckPredicate, 5, 186, 0, // Skip to: 738
/* 552 */     MCD::OPC_Decode, 29, 69, // Opcode: ADDIUPC_MMR6
/* 555 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 567
/* 559 */     MCD::OPC_CheckPredicate, 5, 175, 0, // Skip to: 738
/* 563 */     MCD::OPC_Decode, 140, 8, 69, // Opcode: LWPC_MMR6
/* 567 */     MCD::OPC_FilterValue, 3, 167, 0, // Skip to: 738
/* 571 */     MCD::OPC_ExtractField, 16, 3,  // Inst{18-16} ...
/* 574 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 586
/* 578 */     MCD::OPC_CheckPredicate, 5, 156, 0, // Skip to: 738
/* 582 */     MCD::OPC_Decode, 148, 1, 70, // Opcode: AUIPC_MMR6
/* 586 */     MCD::OPC_FilterValue, 7, 148, 0, // Skip to: 738
/* 590 */     MCD::OPC_CheckPredicate, 5, 144, 0, // Skip to: 738
/* 594 */     MCD::OPC_Decode, 89, 70, // Opcode: ALUIPC_MMR6
/* 597 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 615
/* 601 */     MCD::OPC_CheckPredicate, 5, 133, 0, // Skip to: 738
/* 605 */     MCD::OPC_CheckField, 16, 5, 0, 127, 0, // Skip to: 738
/* 611 */     MCD::OPC_Decode, 174, 2, 68, // Opcode: BNEZALC_MMR6
/* 615 */     MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 633
/* 619 */     MCD::OPC_CheckPredicate, 5, 115, 0, // Skip to: 738
/* 623 */     MCD::OPC_CheckField, 21, 5, 0, 109, 0, // Skip to: 738
/* 629 */     MCD::OPC_Decode, 171, 7, 60, // Opcode: JIALC_MMR6
/* 633 */     MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 645
/* 637 */     MCD::OPC_CheckPredicate, 5, 97, 0, // Skip to: 738
/* 641 */     MCD::OPC_Decode, 206, 1, 71, // Opcode: BC_MMR6
/* 645 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 663
/* 649 */     MCD::OPC_CheckPredicate, 5, 85, 0, // Skip to: 738
/* 653 */     MCD::OPC_CheckField, 21, 5, 0, 79, 0, // Skip to: 738
/* 659 */     MCD::OPC_Decode, 173, 7, 60, // Opcode: JIC_MMR6
/* 663 */     MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 675
/* 667 */     MCD::OPC_CheckPredicate, 5, 67, 0, // Skip to: 738
/* 671 */     MCD::OPC_Decode, 180, 1, 71, // Opcode: BALC_MMR6
/* 675 */     MCD::OPC_FilterValue, 48, 22, 0, // Skip to: 701
/* 679 */     MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 693
/* 683 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 693
/* 689 */     MCD::OPC_Decode, 137, 2, 68, // Opcode: BLEZALC_MMR6
/* 693 */     MCD::OPC_CheckPredicate, 5, 41, 0, // Skip to: 738
/* 697 */     MCD::OPC_Decode, 225, 1, 72, // Opcode: BGEZALC_MMR6
/* 701 */     MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 712
/* 705 */     MCD::OPC_CheckPredicate, 5, 29, 0, // Skip to: 738
/* 709 */     MCD::OPC_Decode, 95, 55, // Opcode: ANDI_MMR6
/* 712 */     MCD::OPC_FilterValue, 56, 22, 0, // Skip to: 738
/* 716 */     MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 730
/* 720 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 730
/* 726 */     MCD::OPC_Decode, 237, 1, 68, // Opcode: BGTZALC_MMR6
/* 730 */     MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 738
/* 734 */     MCD::OPC_Decode, 149, 2, 72, // Opcode: BLTZALC_MMR6
/* 738 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 173, 3, // Skip to: 948
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 68
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 157, 53, // Skip to: 13746
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 234, 12, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 165, 5, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 7, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 196, 10, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 114, 53, // Skip to: 13746
/* 64 */      MCD::OPC_Decode, 151, 12, 73, // Opcode: SLL
/* 68 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 111
/* 72 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 75 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 93
/* 79 */      MCD::OPC_CheckPredicate, 8, 95, 53, // Skip to: 13746
/* 83 */      MCD::OPC_CheckField, 6, 5, 0, 89, 53, // Skip to: 13746
/* 89 */      MCD::OPC_Decode, 153, 9, 74, // Opcode: MOVF_I
/* 93 */      MCD::OPC_FilterValue, 1, 81, 53, // Skip to: 13746
/* 97 */      MCD::OPC_CheckPredicate, 8, 77, 53, // Skip to: 13746
/* 101 */     MCD::OPC_CheckField, 6, 5, 0, 71, 53, // Skip to: 13746
/* 107 */     MCD::OPC_Decode, 173, 9, 74, // Opcode: MOVT_I
/* 111 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 142
/* 115 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 1, 52, 53, // Skip to: 13746
/* 126 */     MCD::OPC_Decode, 213, 12, 73, // Opcode: SRL
/* 130 */     MCD::OPC_FilterValue, 1, 44, 53, // Skip to: 13746
/* 134 */     MCD::OPC_CheckPredicate, 7, 40, 53, // Skip to: 13746
/* 138 */     MCD::OPC_Decode, 169, 11, 73, // Opcode: ROTR
/* 142 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 160
/* 146 */     MCD::OPC_CheckPredicate, 6, 28, 53, // Skip to: 13746
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 22, 53, // Skip to: 13746
/* 156 */     MCD::OPC_Decode, 193, 12, 73, // Opcode: SRA
/* 160 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 178
/* 164 */     MCD::OPC_CheckPredicate, 6, 10, 53, // Skip to: 13746
/* 168 */     MCD::OPC_CheckField, 6, 5, 0, 4, 53, // Skip to: 13746
/* 174 */     MCD::OPC_Decode, 159, 12, 44, // Opcode: SLLV
/* 178 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 196
/* 182 */     MCD::OPC_CheckPredicate, 9, 248, 52, // Skip to: 13746
/* 186 */     MCD::OPC_CheckField, 8, 3, 0, 242, 52, // Skip to: 13746
/* 192 */     MCD::OPC_Decode, 243, 7, 75, // Opcode: LSA
/* 196 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 227
/* 200 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 6, 223, 52, // Skip to: 13746
/* 211 */     MCD::OPC_Decode, 227, 12, 44, // Opcode: SRLV
/* 215 */     MCD::OPC_FilterValue, 1, 215, 52, // Skip to: 13746
/* 219 */     MCD::OPC_CheckPredicate, 7, 211, 52, // Skip to: 13746
/* 223 */     MCD::OPC_Decode, 170, 11, 44, // Opcode: ROTRV
/* 227 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 245
/* 231 */     MCD::OPC_CheckPredicate, 6, 199, 52, // Skip to: 13746
/* 235 */     MCD::OPC_CheckField, 6, 5, 0, 193, 52, // Skip to: 13746
/* 241 */     MCD::OPC_Decode, 206, 12, 44, // Opcode: SRAV
/* 245 */     MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 276
/* 249 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 252 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 6, 174, 52, // Skip to: 13746
/* 260 */     MCD::OPC_Decode, 174, 7, 76, // Opcode: JR
/* 264 */     MCD::OPC_FilterValue, 16, 166, 52, // Skip to: 13746
/* 268 */     MCD::OPC_CheckPredicate, 10, 162, 52, // Skip to: 13746
/* 272 */     MCD::OPC_Decode, 179, 7, 76, // Opcode: JR_HB
/* 276 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 319
/* 280 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 283 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 301
/* 287 */     MCD::OPC_CheckPredicate, 1, 143, 52, // Skip to: 13746
/* 291 */     MCD::OPC_CheckField, 16, 5, 0, 137, 52, // Skip to: 13746
/* 297 */     MCD::OPC_Decode, 157, 7, 14, // Opcode: JALR
/* 301 */     MCD::OPC_FilterValue, 16, 129, 52, // Skip to: 13746
/* 305 */     MCD::OPC_CheckPredicate, 11, 125, 52, // Skip to: 13746
/* 309 */     MCD::OPC_CheckField, 16, 5, 0, 119, 52, // Skip to: 13746
/* 315 */     MCD::OPC_Decode, 164, 7, 14, // Opcode: JALR_HB
/* 319 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 12, 107, 52, // Skip to: 13746
/* 327 */     MCD::OPC_CheckField, 6, 5, 0, 101, 52, // Skip to: 13746
/* 333 */     MCD::OPC_Decode, 185, 9, 77, // Opcode: MOVZ_I_I
/* 337 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 355
/* 341 */     MCD::OPC_CheckPredicate, 12, 89, 52, // Skip to: 13746
/* 345 */     MCD::OPC_CheckField, 6, 5, 0, 83, 52, // Skip to: 13746
/* 351 */     MCD::OPC_Decode, 165, 9, 77, // Opcode: MOVN_I_I
/* 355 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 6, 71, 52, // Skip to: 13746
/* 363 */     MCD::OPC_Decode, 188, 13, 78, // Opcode: SYSCALL
/* 367 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 1, 59, 52, // Skip to: 13746
/* 375 */     MCD::OPC_Decode, 187, 2, 41, // Opcode: BREAK
/* 379 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 11, 47, 52, // Skip to: 13746
/* 387 */     MCD::OPC_Decode, 185, 13, 79, // Opcode: SYNC
/* 391 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 438
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 0, 32, 52, // Skip to: 13746
/* 402 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 405 */     MCD::OPC_FilterValue, 0, 25, 52, // Skip to: 13746
/* 409 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 412 */     MCD::OPC_FilterValue, 0, 18, 52, // Skip to: 13746
/* 416 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 430
/* 420 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 430
/* 426 */     MCD::OPC_Decode, 226, 8, 80, // Opcode: MFHI
/* 430 */     MCD::OPC_CheckPredicate, 14, 0, 52, // Skip to: 13746
/* 434 */     MCD::OPC_Decode, 229, 8, 81, // Opcode: MFHI_DSP
/* 438 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 478
/* 442 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 445 */     MCD::OPC_FilterValue, 0, 241, 51, // Skip to: 13746
/* 449 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 452 */     MCD::OPC_FilterValue, 0, 234, 51, // Skip to: 13746
/* 456 */     MCD::OPC_CheckPredicate, 15, 10, 0, // Skip to: 470
/* 460 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 470
/* 466 */     MCD::OPC_Decode, 218, 9, 76, // Opcode: MTHI
/* 470 */     MCD::OPC_CheckPredicate, 14, 216, 51, // Skip to: 13746
/* 474 */     MCD::OPC_Decode, 220, 9, 82, // Opcode: MTHI_DSP
/* 478 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 525
/* 482 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 485 */     MCD::OPC_FilterValue, 0, 201, 51, // Skip to: 13746
/* 489 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 492 */     MCD::OPC_FilterValue, 0, 194, 51, // Skip to: 13746
/* 496 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 499 */     MCD::OPC_FilterValue, 0, 187, 51, // Skip to: 13746
/* 503 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 231, 8, 80, // Opcode: MFLO
/* 517 */     MCD::OPC_CheckPredicate, 14, 169, 51, // Skip to: 13746
/* 521 */     MCD::OPC_Decode, 234, 8, 81, // Opcode: MFLO_DSP
/* 525 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 565
/* 529 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 532 */     MCD::OPC_FilterValue, 0, 154, 51, // Skip to: 13746
/* 536 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 539 */     MCD::OPC_FilterValue, 0, 147, 51, // Skip to: 13746
/* 543 */     MCD::OPC_CheckPredicate, 15, 10, 0, // Skip to: 557
/* 547 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 557
/* 553 */     MCD::OPC_Decode, 223, 9, 76, // Opcode: MTLO
/* 557 */     MCD::OPC_CheckPredicate, 14, 129, 51, // Skip to: 13746
/* 561 */     MCD::OPC_Decode, 225, 9, 83, // Opcode: MTLO_DSP
/* 565 */     MCD::OPC_FilterValue, 21, 14, 0, // Skip to: 583
/* 569 */     MCD::OPC_CheckPredicate, 16, 117, 51, // Skip to: 13746
/* 573 */     MCD::OPC_CheckField, 8, 3, 0, 111, 51, // Skip to: 13746
/* 579 */     MCD::OPC_Decode, 218, 4, 84, // Opcode: DLSA
/* 583 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 623
/* 587 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 590 */     MCD::OPC_FilterValue, 0, 96, 51, // Skip to: 13746
/* 594 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 597 */     MCD::OPC_FilterValue, 0, 89, 51, // Skip to: 13746
/* 601 */     MCD::OPC_CheckPredicate, 15, 10, 0, // Skip to: 615
/* 605 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 250, 9, 51, // Opcode: MULT
/* 615 */     MCD::OPC_CheckPredicate, 14, 71, 51, // Skip to: 13746
/* 619 */     MCD::OPC_Decode, 252, 9, 85, // Opcode: MULT_DSP
/* 623 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 663
/* 627 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 630 */     MCD::OPC_FilterValue, 0, 56, 51, // Skip to: 13746
/* 634 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 637 */     MCD::OPC_FilterValue, 0, 49, 51, // Skip to: 13746
/* 641 */     MCD::OPC_CheckPredicate, 15, 10, 0, // Skip to: 655
/* 645 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 655
/* 651 */     MCD::OPC_Decode, 254, 9, 51, // Opcode: MULTu
/* 655 */     MCD::OPC_CheckPredicate, 14, 31, 51, // Skip to: 13746
/* 659 */     MCD::OPC_Decode, 251, 9, 85, // Opcode: MULTU_DSP
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 15, 19, 51, // Skip to: 13746
/* 671 */     MCD::OPC_CheckField, 6, 10, 0, 13, 51, // Skip to: 13746
/* 677 */     MCD::OPC_Decode, 212, 11, 51, // Opcode: SDIV
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 15, 1, 51, // Skip to: 13746
/* 689 */     MCD::OPC_CheckField, 6, 10, 0, 251, 50, // Skip to: 13746
/* 695 */     MCD::OPC_Decode, 150, 14, 51, // Opcode: UDIV
/* 699 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 716
/* 703 */     MCD::OPC_CheckPredicate, 6, 239, 50, // Skip to: 13746
/* 707 */     MCD::OPC_CheckField, 6, 5, 0, 233, 50, // Skip to: 13746
/* 713 */     MCD::OPC_Decode, 26, 43, // Opcode: ADD
/* 716 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 733
/* 720 */     MCD::OPC_CheckPredicate, 1, 222, 50, // Skip to: 13746
/* 724 */     MCD::OPC_CheckField, 6, 5, 0, 216, 50, // Skip to: 13746
/* 730 */     MCD::OPC_Decode, 82, 43, // Opcode: ADDu
/* 733 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 751
/* 737 */     MCD::OPC_CheckPredicate, 6, 205, 50, // Skip to: 13746
/* 741 */     MCD::OPC_CheckField, 6, 5, 0, 199, 50, // Skip to: 13746
/* 747 */     MCD::OPC_Decode, 244, 12, 43, // Opcode: SUB
/* 751 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 769
/* 755 */     MCD::OPC_CheckPredicate, 1, 187, 50, // Skip to: 13746
/* 759 */     MCD::OPC_CheckField, 6, 5, 0, 181, 50, // Skip to: 13746
/* 765 */     MCD::OPC_Decode, 158, 13, 43, // Opcode: SUBu
/* 769 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 786
/* 773 */     MCD::OPC_CheckPredicate, 1, 169, 50, // Skip to: 13746
/* 777 */     MCD::OPC_CheckField, 6, 5, 0, 163, 50, // Skip to: 13746
/* 783 */     MCD::OPC_Decode, 90, 43, // Opcode: AND
/* 786 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 1, 152, 50, // Skip to: 13746
/* 794 */     MCD::OPC_CheckField, 6, 5, 0, 146, 50, // Skip to: 13746
/* 800 */     MCD::OPC_Decode, 180, 10, 43, // Opcode: OR
/* 804 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 822
/* 808 */     MCD::OPC_CheckPredicate, 1, 134, 50, // Skip to: 13746
/* 812 */     MCD::OPC_CheckField, 6, 5, 0, 128, 50, // Skip to: 13746
/* 818 */     MCD::OPC_Decode, 166, 14, 43, // Opcode: XOR
/* 822 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 840
/* 826 */     MCD::OPC_CheckPredicate, 6, 116, 50, // Skip to: 13746
/* 830 */     MCD::OPC_CheckField, 6, 5, 0, 110, 50, // Skip to: 13746
/* 836 */     MCD::OPC_Decode, 168, 10, 43, // Opcode: NOR
/* 840 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 858
/* 844 */     MCD::OPC_CheckPredicate, 6, 98, 50, // Skip to: 13746
/* 848 */     MCD::OPC_CheckField, 6, 5, 0, 92, 50, // Skip to: 13746
/* 854 */     MCD::OPC_Decode, 166, 12, 43, // Opcode: SLT
/* 858 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 876
/* 862 */     MCD::OPC_CheckPredicate, 6, 80, 50, // Skip to: 13746
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 74, 50, // Skip to: 13746
/* 872 */     MCD::OPC_Decode, 175, 12, 43, // Opcode: SLTu
/* 876 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 888
/* 880 */     MCD::OPC_CheckPredicate, 17, 62, 50, // Skip to: 13746
/* 884 */     MCD::OPC_Decode, 242, 13, 86, // Opcode: TGE
/* 888 */     MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 900
/* 892 */     MCD::OPC_CheckPredicate, 17, 50, 50, // Skip to: 13746
/* 896 */     MCD::OPC_Decode, 247, 13, 86, // Opcode: TGEU
/* 900 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 912
/* 904 */     MCD::OPC_CheckPredicate, 17, 38, 50, // Skip to: 13746
/* 908 */     MCD::OPC_Decode, 130, 14, 86, // Opcode: TLT
/* 912 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 17, 26, 50, // Skip to: 13746
/* 920 */     MCD::OPC_Decode, 134, 14, 86, // Opcode: TLTU
/* 924 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 17, 14, 50, // Skip to: 13746
/* 932 */     MCD::OPC_Decode, 238, 13, 86, // Opcode: TEQ
/* 936 */     MCD::OPC_FilterValue, 54, 6, 50, // Skip to: 13746
/* 940 */     MCD::OPC_CheckPredicate, 17, 2, 50, // Skip to: 13746
/* 944 */     MCD::OPC_Decode, 137, 14, 86, // Opcode: TNE
/* 948 */     MCD::OPC_FilterValue, 1, 201, 0, // Skip to: 1153
/* 952 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 955 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 6, 239, 49, // Skip to: 13746
/* 963 */     MCD::OPC_Decode, 145, 2, 87, // Opcode: BLTZ
/* 967 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 979
/* 971 */     MCD::OPC_CheckPredicate, 6, 227, 49, // Skip to: 13746
/* 975 */     MCD::OPC_Decode, 221, 1, 87, // Opcode: BGEZ
/* 979 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 991
/* 983 */     MCD::OPC_CheckPredicate, 18, 215, 49, // Skip to: 13746
/* 987 */     MCD::OPC_Decode, 154, 2, 87, // Opcode: BLTZL
/* 991 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1003
/* 995 */     MCD::OPC_CheckPredicate, 18, 203, 49, // Skip to: 13746
/* 999 */     MCD::OPC_Decode, 230, 1, 87, // Opcode: BGEZL
/* 1003 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1015
/* 1007 */    MCD::OPC_CheckPredicate, 18, 191, 49, // Skip to: 13746
/* 1011 */    MCD::OPC_Decode, 243, 13, 88, // Opcode: TGEI
/* 1015 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1027
/* 1019 */    MCD::OPC_CheckPredicate, 18, 179, 49, // Skip to: 13746
/* 1023 */    MCD::OPC_Decode, 244, 13, 88, // Opcode: TGEIU
/* 1027 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1039
/* 1031 */    MCD::OPC_CheckPredicate, 18, 167, 49, // Skip to: 13746
/* 1035 */    MCD::OPC_Decode, 131, 14, 88, // Opcode: TLTI
/* 1039 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1051
/* 1043 */    MCD::OPC_CheckPredicate, 18, 155, 49, // Skip to: 13746
/* 1047 */    MCD::OPC_Decode, 149, 14, 88, // Opcode: TTLTIU
/* 1051 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 18, 143, 49, // Skip to: 13746
/* 1059 */    MCD::OPC_Decode, 239, 13, 88, // Opcode: TEQI
/* 1063 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1075
/* 1067 */    MCD::OPC_CheckPredicate, 18, 131, 49, // Skip to: 13746
/* 1071 */    MCD::OPC_Decode, 138, 14, 88, // Opcode: TNEI
/* 1075 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1087
/* 1079 */    MCD::OPC_CheckPredicate, 15, 119, 49, // Skip to: 13746
/* 1083 */    MCD::OPC_Decode, 147, 2, 87, // Opcode: BLTZAL
/* 1087 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1099
/* 1091 */    MCD::OPC_CheckPredicate, 15, 107, 49, // Skip to: 13746
/* 1095 */    MCD::OPC_Decode, 223, 1, 87, // Opcode: BGEZAL
/* 1099 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1111
/* 1103 */    MCD::OPC_CheckPredicate, 18, 95, 49, // Skip to: 13746
/* 1107 */    MCD::OPC_Decode, 150, 2, 87, // Opcode: BLTZALL
/* 1111 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1123
/* 1115 */    MCD::OPC_CheckPredicate, 18, 83, 49, // Skip to: 13746
/* 1119 */    MCD::OPC_Decode, 226, 1, 87, // Opcode: BGEZALL
/* 1123 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 1141
/* 1127 */    MCD::OPC_CheckPredicate, 14, 71, 49, // Skip to: 13746
/* 1131 */    MCD::OPC_CheckField, 21, 5, 0, 65, 49, // Skip to: 13746
/* 1137 */    MCD::OPC_Decode, 185, 2, 89, // Opcode: BPOSGE32
/* 1141 */    MCD::OPC_FilterValue, 31, 57, 49, // Skip to: 13746
/* 1145 */    MCD::OPC_CheckPredicate, 7, 53, 49, // Skip to: 13746
/* 1149 */    MCD::OPC_Decode, 186, 13, 90, // Opcode: SYNCI
/* 1153 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1165
/* 1157 */    MCD::OPC_CheckPredicate, 6, 41, 49, // Skip to: 13746
/* 1161 */    MCD::OPC_Decode, 155, 7, 91, // Opcode: J
/* 1165 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1177
/* 1169 */    MCD::OPC_CheckPredicate, 6, 29, 49, // Skip to: 13746
/* 1173 */    MCD::OPC_Decode, 156, 7, 91, // Opcode: JAL
/* 1177 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1189
/* 1181 */    MCD::OPC_CheckPredicate, 6, 17, 49, // Skip to: 13746
/* 1185 */    MCD::OPC_Decode, 207, 1, 92, // Opcode: BEQ
/* 1189 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1201
/* 1193 */    MCD::OPC_CheckPredicate, 6, 5, 49, // Skip to: 13746
/* 1197 */    MCD::OPC_Decode, 160, 2, 92, // Opcode: BNE
/* 1201 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1219
/* 1205 */    MCD::OPC_CheckPredicate, 6, 249, 48, // Skip to: 13746
/* 1209 */    MCD::OPC_CheckField, 16, 5, 0, 243, 48, // Skip to: 13746
/* 1215 */    MCD::OPC_Decode, 134, 2, 87, // Opcode: BLEZ
/* 1219 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 6, 231, 48, // Skip to: 13746
/* 1227 */    MCD::OPC_CheckField, 16, 5, 0, 225, 48, // Skip to: 13746
/* 1233 */    MCD::OPC_Decode, 234, 1, 87, // Opcode: BGTZ
/* 1237 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 1248
/* 1241 */    MCD::OPC_CheckPredicate, 15, 213, 48, // Skip to: 13746
/* 1245 */    MCD::OPC_Decode, 78, 93, // Opcode: ADDi
/* 1248 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 1259
/* 1252 */    MCD::OPC_CheckPredicate, 1, 202, 48, // Skip to: 13746
/* 1256 */    MCD::OPC_Decode, 80, 93, // Opcode: ADDiu
/* 1259 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1271
/* 1263 */    MCD::OPC_CheckPredicate, 6, 191, 48, // Skip to: 13746
/* 1267 */    MCD::OPC_Decode, 169, 12, 93, // Opcode: SLTi
/* 1271 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1283
/* 1275 */    MCD::OPC_CheckPredicate, 6, 179, 48, // Skip to: 13746
/* 1279 */    MCD::OPC_Decode, 172, 12, 93, // Opcode: SLTiu
/* 1283 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1294
/* 1287 */    MCD::OPC_CheckPredicate, 1, 167, 48, // Skip to: 13746
/* 1291 */    MCD::OPC_Decode, 102, 94, // Opcode: ANDi
/* 1294 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 6, 156, 48, // Skip to: 13746
/* 1302 */    MCD::OPC_Decode, 191, 10, 94, // Opcode: ORi
/* 1306 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 6, 144, 48, // Skip to: 13746
/* 1314 */    MCD::OPC_Decode, 177, 14, 94, // Opcode: XORi
/* 1318 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1336
/* 1322 */    MCD::OPC_CheckPredicate, 6, 132, 48, // Skip to: 13746
/* 1326 */    MCD::OPC_CheckField, 21, 5, 0, 126, 48, // Skip to: 13746
/* 1332 */    MCD::OPC_Decode, 249, 7, 60, // Opcode: LUi
/* 1336 */    MCD::OPC_FilterValue, 16, 248, 0, // Skip to: 1588
/* 1340 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1343 */    MCD::OPC_FilterValue, 0, 112, 0, // Skip to: 1459
/* 1347 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1350 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1362
/* 1354 */    MCD::OPC_CheckPredicate, 11, 100, 48, // Skip to: 13746
/* 1358 */    MCD::OPC_Decode, 219, 8, 95, // Opcode: MFC0
/* 1362 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1374
/* 1366 */    MCD::OPC_CheckPredicate, 11, 88, 48, // Skip to: 13746
/* 1370 */    MCD::OPC_Decode, 211, 9, 96, // Opcode: MTC0
/* 1374 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1398
/* 1378 */    MCD::OPC_CheckPredicate, 7, 76, 48, // Skip to: 13746
/* 1382 */    MCD::OPC_CheckField, 11, 5, 12, 70, 48, // Skip to: 13746
/* 1388 */    MCD::OPC_CheckField, 0, 3, 0, 64, 48, // Skip to: 13746
/* 1394 */    MCD::OPC_Decode, 201, 4, 50, // Opcode: DI
/* 1398 */    MCD::OPC_FilterValue, 16, 56, 48, // Skip to: 13746
/* 1402 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1405 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1423
/* 1409 */    MCD::OPC_CheckPredicate, 6, 45, 48, // Skip to: 13746
/* 1413 */    MCD::OPC_CheckField, 11, 10, 0, 39, 48, // Skip to: 13746
/* 1419 */    MCD::OPC_Decode, 252, 13, 0, // Opcode: TLBR
/* 1423 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1441
/* 1427 */    MCD::OPC_CheckPredicate, 6, 27, 48, // Skip to: 13746
/* 1431 */    MCD::OPC_CheckField, 11, 10, 0, 21, 48, // Skip to: 13746
/* 1437 */    MCD::OPC_Decode, 254, 13, 0, // Opcode: TLBWI
/* 1441 */    MCD::OPC_FilterValue, 6, 13, 48, // Skip to: 13746
/* 1445 */    MCD::OPC_CheckPredicate, 6, 9, 48, // Skip to: 13746
/* 1449 */    MCD::OPC_CheckField, 11, 10, 0, 3, 48, // Skip to: 13746
/* 1455 */    MCD::OPC_Decode, 128, 14, 0, // Opcode: TLBWR
/* 1459 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1485
/* 1463 */    MCD::OPC_CheckPredicate, 6, 247, 47, // Skip to: 13746
/* 1467 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 239, 47, // Skip to: 13746
/* 1475 */    MCD::OPC_CheckField, 0, 3, 0, 233, 47, // Skip to: 13746
/* 1481 */    MCD::OPC_Decode, 250, 13, 0, // Opcode: TLBP
/* 1485 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1532
/* 1489 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1492 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1512
/* 1496 */    MCD::OPC_CheckPredicate, 19, 214, 47, // Skip to: 13746
/* 1500 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 206, 47, // Skip to: 13746
/* 1508 */    MCD::OPC_Decode, 171, 5, 0, // Opcode: ERET
/* 1512 */    MCD::OPC_FilterValue, 7, 198, 47, // Skip to: 13746
/* 1516 */    MCD::OPC_CheckPredicate, 11, 194, 47, // Skip to: 13746
/* 1520 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 186, 47, // Skip to: 13746
/* 1528 */    MCD::OPC_Decode, 196, 4, 0, // Opcode: DERET
/* 1532 */    MCD::OPC_FilterValue, 4, 178, 47, // Skip to: 13746
/* 1536 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1539 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1564
/* 1543 */    MCD::OPC_CheckPredicate, 20, 167, 47, // Skip to: 13746
/* 1547 */    MCD::OPC_CheckField, 16, 10, 128, 4, 160, 47, // Skip to: 13746
/* 1554 */    MCD::OPC_CheckField, 0, 3, 0, 154, 47, // Skip to: 13746
/* 1560 */    MCD::OPC_Decode, 161, 14, 0, // Opcode: WAIT
/* 1564 */    MCD::OPC_FilterValue, 12, 146, 47, // Skip to: 13746
/* 1568 */    MCD::OPC_CheckPredicate, 21, 142, 47, // Skip to: 13746
/* 1572 */    MCD::OPC_CheckField, 21, 5, 11, 136, 47, // Skip to: 13746
/* 1578 */    MCD::OPC_CheckField, 0, 3, 0, 130, 47, // Skip to: 13746
/* 1584 */    MCD::OPC_Decode, 168, 5, 50, // Opcode: EI
/* 1588 */    MCD::OPC_FilterValue, 17, 21, 6, // Skip to: 3149
/* 1592 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1595 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1613
/* 1599 */    MCD::OPC_CheckPredicate, 22, 111, 47, // Skip to: 13746
/* 1603 */    MCD::OPC_CheckField, 0, 11, 0, 105, 47, // Skip to: 13746
/* 1609 */    MCD::OPC_Decode, 220, 8, 97, // Opcode: MFC1
/* 1613 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1631
/* 1617 */    MCD::OPC_CheckPredicate, 23, 93, 47, // Skip to: 13746
/* 1621 */    MCD::OPC_CheckField, 0, 11, 0, 87, 47, // Skip to: 13746
/* 1627 */    MCD::OPC_Decode, 221, 4, 98, // Opcode: DMFC1
/* 1631 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1649
/* 1635 */    MCD::OPC_CheckPredicate, 22, 75, 47, // Skip to: 13746
/* 1639 */    MCD::OPC_CheckField, 0, 11, 0, 69, 47, // Skip to: 13746
/* 1645 */    MCD::OPC_Decode, 130, 3, 99, // Opcode: CFC1
/* 1649 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1667
/* 1653 */    MCD::OPC_CheckPredicate, 24, 57, 47, // Skip to: 13746
/* 1657 */    MCD::OPC_CheckField, 0, 11, 0, 51, 47, // Skip to: 13746
/* 1663 */    MCD::OPC_Decode, 223, 8, 100, // Opcode: MFHC1_D32
/* 1667 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1685
/* 1671 */    MCD::OPC_CheckPredicate, 22, 39, 47, // Skip to: 13746
/* 1675 */    MCD::OPC_CheckField, 0, 11, 0, 33, 47, // Skip to: 13746
/* 1681 */    MCD::OPC_Decode, 212, 9, 101, // Opcode: MTC1
/* 1685 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1703
/* 1689 */    MCD::OPC_CheckPredicate, 23, 21, 47, // Skip to: 13746
/* 1693 */    MCD::OPC_CheckField, 0, 11, 0, 15, 47, // Skip to: 13746
/* 1699 */    MCD::OPC_Decode, 227, 4, 102, // Opcode: DMTC1
/* 1703 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1721
/* 1707 */    MCD::OPC_CheckPredicate, 22, 3, 47, // Skip to: 13746
/* 1711 */    MCD::OPC_CheckField, 0, 11, 0, 253, 46, // Skip to: 13746
/* 1717 */    MCD::OPC_Decode, 232, 3, 103, // Opcode: CTC1
/* 1721 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1739
/* 1725 */    MCD::OPC_CheckPredicate, 24, 241, 46, // Skip to: 13746
/* 1729 */    MCD::OPC_CheckField, 0, 11, 0, 235, 46, // Skip to: 13746
/* 1735 */    MCD::OPC_Decode, 215, 9, 104, // Opcode: MTHC1_D32
/* 1739 */    MCD::OPC_FilterValue, 8, 51, 0, // Skip to: 1794
/* 1743 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1746 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1758
/* 1750 */    MCD::OPC_CheckPredicate, 25, 216, 46, // Skip to: 13746
/* 1754 */    MCD::OPC_Decode, 189, 1, 105, // Opcode: BC1F
/* 1758 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1770
/* 1762 */    MCD::OPC_CheckPredicate, 25, 204, 46, // Skip to: 13746
/* 1766 */    MCD::OPC_Decode, 193, 1, 105, // Opcode: BC1T
/* 1770 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1782
/* 1774 */    MCD::OPC_CheckPredicate, 26, 192, 46, // Skip to: 13746
/* 1778 */    MCD::OPC_Decode, 190, 1, 105, // Opcode: BC1FL
/* 1782 */    MCD::OPC_FilterValue, 3, 184, 46, // Skip to: 13746
/* 1786 */    MCD::OPC_CheckPredicate, 26, 180, 46, // Skip to: 13746
/* 1790 */    MCD::OPC_Decode, 194, 1, 105, // Opcode: BC1TL
/* 1794 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1806
/* 1798 */    MCD::OPC_CheckPredicate, 9, 168, 46, // Skip to: 13746
/* 1802 */    MCD::OPC_Decode, 209, 2, 106, // Opcode: BZ_V
/* 1806 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1818
/* 1810 */    MCD::OPC_CheckPredicate, 9, 156, 46, // Skip to: 13746
/* 1814 */    MCD::OPC_Decode, 182, 2, 106, // Opcode: BNZ_V
/* 1818 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 2414
/* 1822 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1825 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1837
/* 1829 */    MCD::OPC_CheckPredicate, 22, 137, 46, // Skip to: 13746
/* 1833 */    MCD::OPC_Decode, 204, 5, 107, // Opcode: FADD_S
/* 1837 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1849
/* 1841 */    MCD::OPC_CheckPredicate, 22, 125, 46, // Skip to: 13746
/* 1845 */    MCD::OPC_Decode, 206, 6, 107, // Opcode: FSUB_S
/* 1849 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1861
/* 1853 */    MCD::OPC_CheckPredicate, 22, 113, 46, // Skip to: 13746
/* 1857 */    MCD::OPC_Decode, 169, 6, 107, // Opcode: FMUL_S
/* 1861 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1873
/* 1865 */    MCD::OPC_CheckPredicate, 22, 101, 46, // Skip to: 13746
/* 1869 */    MCD::OPC_Decode, 240, 5, 107, // Opcode: FDIV_S
/* 1873 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1891
/* 1877 */    MCD::OPC_CheckPredicate, 27, 89, 46, // Skip to: 13746
/* 1881 */    MCD::OPC_CheckField, 16, 5, 0, 83, 46, // Skip to: 13746
/* 1887 */    MCD::OPC_Decode, 199, 6, 108, // Opcode: FSQRT_S
/* 1891 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1909
/* 1895 */    MCD::OPC_CheckPredicate, 22, 71, 46, // Skip to: 13746
/* 1899 */    MCD::OPC_CheckField, 16, 5, 0, 65, 46, // Skip to: 13746
/* 1905 */    MCD::OPC_Decode, 197, 5, 108, // Opcode: FABS_S
/* 1909 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1927
/* 1913 */    MCD::OPC_CheckPredicate, 22, 53, 46, // Skip to: 13746
/* 1917 */    MCD::OPC_CheckField, 16, 5, 0, 47, 46, // Skip to: 13746
/* 1923 */    MCD::OPC_Decode, 161, 6, 108, // Opcode: FMOV_S
/* 1927 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1945
/* 1931 */    MCD::OPC_CheckPredicate, 22, 35, 46, // Skip to: 13746
/* 1935 */    MCD::OPC_CheckField, 16, 5, 0, 29, 46, // Skip to: 13746
/* 1941 */    MCD::OPC_Decode, 175, 6, 108, // Opcode: FNEG_S
/* 1945 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1963
/* 1949 */    MCD::OPC_CheckPredicate, 27, 17, 46, // Skip to: 13746
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 11, 46, // Skip to: 13746
/* 1959 */    MCD::OPC_Decode, 178, 11, 108, // Opcode: ROUND_W_S
/* 1963 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1981
/* 1967 */    MCD::OPC_CheckPredicate, 27, 255, 45, // Skip to: 13746
/* 1971 */    MCD::OPC_CheckField, 16, 5, 0, 249, 45, // Skip to: 13746
/* 1977 */    MCD::OPC_Decode, 147, 14, 108, // Opcode: TRUNC_W_S
/* 1981 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1999
/* 1985 */    MCD::OPC_CheckPredicate, 27, 237, 45, // Skip to: 13746
/* 1989 */    MCD::OPC_CheckField, 16, 5, 0, 231, 45, // Skip to: 13746
/* 1995 */    MCD::OPC_Decode, 248, 2, 108, // Opcode: CEIL_W_S
/* 1999 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2017
/* 2003 */    MCD::OPC_CheckPredicate, 27, 219, 45, // Skip to: 13746
/* 2007 */    MCD::OPC_CheckField, 16, 5, 0, 213, 45, // Skip to: 13746
/* 2013 */    MCD::OPC_Decode, 146, 6, 108, // Opcode: FLOOR_W_S
/* 2017 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2048
/* 2021 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2024 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2036
/* 2028 */    MCD::OPC_CheckPredicate, 8, 194, 45, // Skip to: 13746
/* 2032 */    MCD::OPC_Decode, 156, 9, 109, // Opcode: MOVF_S
/* 2036 */    MCD::OPC_FilterValue, 1, 186, 45, // Skip to: 13746
/* 2040 */    MCD::OPC_CheckPredicate, 8, 182, 45, // Skip to: 13746
/* 2044 */    MCD::OPC_Decode, 176, 9, 109, // Opcode: MOVT_S
/* 2048 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2060
/* 2052 */    MCD::OPC_CheckPredicate, 8, 170, 45, // Skip to: 13746
/* 2056 */    MCD::OPC_Decode, 188, 9, 110, // Opcode: MOVZ_I_S
/* 2060 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2072
/* 2064 */    MCD::OPC_CheckPredicate, 8, 158, 45, // Skip to: 13746
/* 2068 */    MCD::OPC_Decode, 168, 9, 110, // Opcode: MOVN_I_S
/* 2072 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 2090
/* 2076 */    MCD::OPC_CheckPredicate, 28, 146, 45, // Skip to: 13746
/* 2080 */    MCD::OPC_CheckField, 16, 5, 0, 140, 45, // Skip to: 13746
/* 2086 */    MCD::OPC_Decode, 235, 3, 111, // Opcode: CVT_D32_S
/* 2090 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2108
/* 2094 */    MCD::OPC_CheckPredicate, 22, 128, 45, // Skip to: 13746
/* 2098 */    MCD::OPC_CheckField, 16, 5, 0, 122, 45, // Skip to: 13746
/* 2104 */    MCD::OPC_Decode, 255, 3, 108, // Opcode: CVT_W_S
/* 2108 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2126
/* 2112 */    MCD::OPC_CheckPredicate, 29, 110, 45, // Skip to: 13746
/* 2116 */    MCD::OPC_CheckField, 16, 5, 0, 104, 45, // Skip to: 13746
/* 2122 */    MCD::OPC_Decode, 244, 3, 112, // Opcode: CVT_L_S
/* 2126 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2144
/* 2130 */    MCD::OPC_CheckPredicate, 25, 92, 45, // Skip to: 13746
/* 2134 */    MCD::OPC_CheckField, 6, 5, 0, 86, 45, // Skip to: 13746
/* 2140 */    MCD::OPC_Decode, 134, 4, 113, // Opcode: C_F_S
/* 2144 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2162
/* 2148 */    MCD::OPC_CheckPredicate, 25, 74, 45, // Skip to: 13746
/* 2152 */    MCD::OPC_CheckField, 6, 5, 0, 68, 45, // Skip to: 13746
/* 2158 */    MCD::OPC_Decode, 176, 4, 113, // Opcode: C_UN_S
/* 2162 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2180
/* 2166 */    MCD::OPC_CheckPredicate, 25, 56, 45, // Skip to: 13746
/* 2170 */    MCD::OPC_CheckField, 6, 5, 0, 50, 45, // Skip to: 13746
/* 2176 */    MCD::OPC_Decode, 131, 4, 113, // Opcode: C_EQ_S
/* 2180 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2198
/* 2184 */    MCD::OPC_CheckPredicate, 25, 38, 45, // Skip to: 13746
/* 2188 */    MCD::OPC_CheckField, 6, 5, 0, 32, 45, // Skip to: 13746
/* 2194 */    MCD::OPC_Decode, 167, 4, 113, // Opcode: C_UEQ_S
/* 2198 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2216
/* 2202 */    MCD::OPC_CheckPredicate, 25, 20, 45, // Skip to: 13746
/* 2206 */    MCD::OPC_CheckField, 6, 5, 0, 14, 45, // Skip to: 13746
/* 2212 */    MCD::OPC_Decode, 158, 4, 113, // Opcode: C_OLT_S
/* 2216 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2234
/* 2220 */    MCD::OPC_CheckPredicate, 25, 2, 45, // Skip to: 13746
/* 2224 */    MCD::OPC_CheckField, 6, 5, 0, 252, 44, // Skip to: 13746
/* 2230 */    MCD::OPC_Decode, 173, 4, 113, // Opcode: C_ULT_S
/* 2234 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2252
/* 2238 */    MCD::OPC_CheckPredicate, 25, 240, 44, // Skip to: 13746
/* 2242 */    MCD::OPC_CheckField, 6, 5, 0, 234, 44, // Skip to: 13746
/* 2248 */    MCD::OPC_Decode, 155, 4, 113, // Opcode: C_OLE_S
/* 2252 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2270
/* 2256 */    MCD::OPC_CheckPredicate, 25, 222, 44, // Skip to: 13746
/* 2260 */    MCD::OPC_CheckField, 6, 5, 0, 216, 44, // Skip to: 13746
/* 2266 */    MCD::OPC_Decode, 170, 4, 113, // Opcode: C_ULE_S
/* 2270 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2288
/* 2274 */    MCD::OPC_CheckPredicate, 25, 204, 44, // Skip to: 13746
/* 2278 */    MCD::OPC_CheckField, 6, 5, 0, 198, 44, // Skip to: 13746
/* 2284 */    MCD::OPC_Decode, 164, 4, 113, // Opcode: C_SF_S
/* 2288 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2306
/* 2292 */    MCD::OPC_CheckPredicate, 25, 186, 44, // Skip to: 13746
/* 2296 */    MCD::OPC_CheckField, 6, 5, 0, 180, 44, // Skip to: 13746
/* 2302 */    MCD::OPC_Decode, 146, 4, 113, // Opcode: C_NGLE_S
/* 2306 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2324
/* 2310 */    MCD::OPC_CheckPredicate, 25, 168, 44, // Skip to: 13746
/* 2314 */    MCD::OPC_CheckField, 6, 5, 0, 162, 44, // Skip to: 13746
/* 2320 */    MCD::OPC_Decode, 161, 4, 113, // Opcode: C_SEQ_S
/* 2324 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2342
/* 2328 */    MCD::OPC_CheckPredicate, 25, 150, 44, // Skip to: 13746
/* 2332 */    MCD::OPC_CheckField, 6, 5, 0, 144, 44, // Skip to: 13746
/* 2338 */    MCD::OPC_Decode, 149, 4, 113, // Opcode: C_NGL_S
/* 2342 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2360
/* 2346 */    MCD::OPC_CheckPredicate, 25, 132, 44, // Skip to: 13746
/* 2350 */    MCD::OPC_CheckField, 6, 5, 0, 126, 44, // Skip to: 13746
/* 2356 */    MCD::OPC_Decode, 140, 4, 113, // Opcode: C_LT_S
/* 2360 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2378
/* 2364 */    MCD::OPC_CheckPredicate, 25, 114, 44, // Skip to: 13746
/* 2368 */    MCD::OPC_CheckField, 6, 5, 0, 108, 44, // Skip to: 13746
/* 2374 */    MCD::OPC_Decode, 143, 4, 113, // Opcode: C_NGE_S
/* 2378 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2396
/* 2382 */    MCD::OPC_CheckPredicate, 25, 96, 44, // Skip to: 13746
/* 2386 */    MCD::OPC_CheckField, 6, 5, 0, 90, 44, // Skip to: 13746
/* 2392 */    MCD::OPC_Decode, 137, 4, 113, // Opcode: C_LE_S
/* 2396 */    MCD::OPC_FilterValue, 63, 82, 44, // Skip to: 13746
/* 2400 */    MCD::OPC_CheckPredicate, 25, 78, 44, // Skip to: 13746
/* 2404 */    MCD::OPC_CheckField, 6, 5, 0, 72, 44, // Skip to: 13746
/* 2410 */    MCD::OPC_Decode, 152, 4, 113, // Opcode: C_NGT_S
/* 2414 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 3010
/* 2418 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2421 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2433
/* 2425 */    MCD::OPC_CheckPredicate, 28, 53, 44, // Skip to: 13746
/* 2429 */    MCD::OPC_Decode, 201, 5, 114, // Opcode: FADD_D32
/* 2433 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2445
/* 2437 */    MCD::OPC_CheckPredicate, 28, 41, 44, // Skip to: 13746
/* 2441 */    MCD::OPC_Decode, 203, 6, 114, // Opcode: FSUB_D32
/* 2445 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2457
/* 2449 */    MCD::OPC_CheckPredicate, 28, 29, 44, // Skip to: 13746
/* 2453 */    MCD::OPC_Decode, 166, 6, 114, // Opcode: FMUL_D32
/* 2457 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2469
/* 2461 */    MCD::OPC_CheckPredicate, 28, 17, 44, // Skip to: 13746
/* 2465 */    MCD::OPC_Decode, 237, 5, 114, // Opcode: FDIV_D32
/* 2469 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2487
/* 2473 */    MCD::OPC_CheckPredicate, 30, 5, 44, // Skip to: 13746
/* 2477 */    MCD::OPC_CheckField, 16, 5, 0, 255, 43, // Skip to: 13746
/* 2483 */    MCD::OPC_Decode, 196, 6, 115, // Opcode: FSQRT_D32
/* 2487 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2505
/* 2491 */    MCD::OPC_CheckPredicate, 28, 243, 43, // Skip to: 13746
/* 2495 */    MCD::OPC_CheckField, 16, 5, 0, 237, 43, // Skip to: 13746
/* 2501 */    MCD::OPC_Decode, 194, 5, 115, // Opcode: FABS_D32
/* 2505 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2523
/* 2509 */    MCD::OPC_CheckPredicate, 28, 225, 43, // Skip to: 13746
/* 2513 */    MCD::OPC_CheckField, 16, 5, 0, 219, 43, // Skip to: 13746
/* 2519 */    MCD::OPC_Decode, 158, 6, 115, // Opcode: FMOV_D32
/* 2523 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2541
/* 2527 */    MCD::OPC_CheckPredicate, 28, 207, 43, // Skip to: 13746
/* 2531 */    MCD::OPC_CheckField, 16, 5, 0, 201, 43, // Skip to: 13746
/* 2537 */    MCD::OPC_Decode, 172, 6, 115, // Opcode: FNEG_D32
/* 2541 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2559
/* 2545 */    MCD::OPC_CheckPredicate, 30, 189, 43, // Skip to: 13746
/* 2549 */    MCD::OPC_CheckField, 16, 5, 0, 183, 43, // Skip to: 13746
/* 2555 */    MCD::OPC_Decode, 175, 11, 116, // Opcode: ROUND_W_D32
/* 2559 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2577
/* 2563 */    MCD::OPC_CheckPredicate, 30, 171, 43, // Skip to: 13746
/* 2567 */    MCD::OPC_CheckField, 16, 5, 0, 165, 43, // Skip to: 13746
/* 2573 */    MCD::OPC_Decode, 144, 14, 116, // Opcode: TRUNC_W_D32
/* 2577 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2595
/* 2581 */    MCD::OPC_CheckPredicate, 30, 153, 43, // Skip to: 13746
/* 2585 */    MCD::OPC_CheckField, 16, 5, 0, 147, 43, // Skip to: 13746
/* 2591 */    MCD::OPC_Decode, 245, 2, 116, // Opcode: CEIL_W_D32
/* 2595 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2613
/* 2599 */    MCD::OPC_CheckPredicate, 30, 135, 43, // Skip to: 13746
/* 2603 */    MCD::OPC_CheckField, 16, 5, 0, 129, 43, // Skip to: 13746
/* 2609 */    MCD::OPC_Decode, 143, 6, 116, // Opcode: FLOOR_W_D32
/* 2613 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2644
/* 2617 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2620 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2632
/* 2624 */    MCD::OPC_CheckPredicate, 31, 110, 43, // Skip to: 13746
/* 2628 */    MCD::OPC_Decode, 150, 9, 117, // Opcode: MOVF_D32
/* 2632 */    MCD::OPC_FilterValue, 1, 102, 43, // Skip to: 13746
/* 2636 */    MCD::OPC_CheckPredicate, 31, 98, 43, // Skip to: 13746
/* 2640 */    MCD::OPC_Decode, 170, 9, 117, // Opcode: MOVT_D32
/* 2644 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2656
/* 2648 */    MCD::OPC_CheckPredicate, 31, 86, 43, // Skip to: 13746
/* 2652 */    MCD::OPC_Decode, 182, 9, 118, // Opcode: MOVZ_I_D32
/* 2656 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2668
/* 2660 */    MCD::OPC_CheckPredicate, 31, 74, 43, // Skip to: 13746
/* 2664 */    MCD::OPC_Decode, 162, 9, 118, // Opcode: MOVN_I_D32
/* 2668 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2686
/* 2672 */    MCD::OPC_CheckPredicate, 28, 62, 43, // Skip to: 13746
/* 2676 */    MCD::OPC_CheckField, 16, 5, 0, 56, 43, // Skip to: 13746
/* 2682 */    MCD::OPC_Decode, 246, 3, 116, // Opcode: CVT_S_D32
/* 2686 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2704
/* 2690 */    MCD::OPC_CheckPredicate, 28, 44, 43, // Skip to: 13746
/* 2694 */    MCD::OPC_CheckField, 16, 5, 0, 38, 43, // Skip to: 13746
/* 2700 */    MCD::OPC_Decode, 252, 3, 116, // Opcode: CVT_W_D32
/* 2704 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2722
/* 2708 */    MCD::OPC_CheckPredicate, 29, 26, 43, // Skip to: 13746
/* 2712 */    MCD::OPC_CheckField, 16, 5, 0, 20, 43, // Skip to: 13746
/* 2718 */    MCD::OPC_Decode, 242, 3, 119, // Opcode: CVT_L_D64
/* 2722 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2740
/* 2726 */    MCD::OPC_CheckPredicate, 32, 8, 43, // Skip to: 13746
/* 2730 */    MCD::OPC_CheckField, 6, 5, 0, 2, 43, // Skip to: 13746
/* 2736 */    MCD::OPC_Decode, 132, 4, 120, // Opcode: C_F_D32
/* 2740 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2758
/* 2744 */    MCD::OPC_CheckPredicate, 32, 246, 42, // Skip to: 13746
/* 2748 */    MCD::OPC_CheckField, 6, 5, 0, 240, 42, // Skip to: 13746
/* 2754 */    MCD::OPC_Decode, 174, 4, 120, // Opcode: C_UN_D32
/* 2758 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2776
/* 2762 */    MCD::OPC_CheckPredicate, 32, 228, 42, // Skip to: 13746
/* 2766 */    MCD::OPC_CheckField, 6, 5, 0, 222, 42, // Skip to: 13746
/* 2772 */    MCD::OPC_Decode, 129, 4, 120, // Opcode: C_EQ_D32
/* 2776 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2794
/* 2780 */    MCD::OPC_CheckPredicate, 32, 210, 42, // Skip to: 13746
/* 2784 */    MCD::OPC_CheckField, 6, 5, 0, 204, 42, // Skip to: 13746
/* 2790 */    MCD::OPC_Decode, 165, 4, 120, // Opcode: C_UEQ_D32
/* 2794 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2812
/* 2798 */    MCD::OPC_CheckPredicate, 32, 192, 42, // Skip to: 13746
/* 2802 */    MCD::OPC_CheckField, 6, 5, 0, 186, 42, // Skip to: 13746
/* 2808 */    MCD::OPC_Decode, 156, 4, 120, // Opcode: C_OLT_D32
/* 2812 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2830
/* 2816 */    MCD::OPC_CheckPredicate, 32, 174, 42, // Skip to: 13746
/* 2820 */    MCD::OPC_CheckField, 6, 5, 0, 168, 42, // Skip to: 13746
/* 2826 */    MCD::OPC_Decode, 171, 4, 120, // Opcode: C_ULT_D32
/* 2830 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2848
/* 2834 */    MCD::OPC_CheckPredicate, 32, 156, 42, // Skip to: 13746
/* 2838 */    MCD::OPC_CheckField, 6, 5, 0, 150, 42, // Skip to: 13746
/* 2844 */    MCD::OPC_Decode, 153, 4, 120, // Opcode: C_OLE_D32
/* 2848 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2866
/* 2852 */    MCD::OPC_CheckPredicate, 32, 138, 42, // Skip to: 13746
/* 2856 */    MCD::OPC_CheckField, 6, 5, 0, 132, 42, // Skip to: 13746
/* 2862 */    MCD::OPC_Decode, 168, 4, 120, // Opcode: C_ULE_D32
/* 2866 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2884
/* 2870 */    MCD::OPC_CheckPredicate, 32, 120, 42, // Skip to: 13746
/* 2874 */    MCD::OPC_CheckField, 6, 5, 0, 114, 42, // Skip to: 13746
/* 2880 */    MCD::OPC_Decode, 162, 4, 120, // Opcode: C_SF_D32
/* 2884 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2902
/* 2888 */    MCD::OPC_CheckPredicate, 32, 102, 42, // Skip to: 13746
/* 2892 */    MCD::OPC_CheckField, 6, 5, 0, 96, 42, // Skip to: 13746
/* 2898 */    MCD::OPC_Decode, 144, 4, 120, // Opcode: C_NGLE_D32
/* 2902 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2920
/* 2906 */    MCD::OPC_CheckPredicate, 32, 84, 42, // Skip to: 13746
/* 2910 */    MCD::OPC_CheckField, 6, 5, 0, 78, 42, // Skip to: 13746
/* 2916 */    MCD::OPC_Decode, 159, 4, 120, // Opcode: C_SEQ_D32
/* 2920 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2938
/* 2924 */    MCD::OPC_CheckPredicate, 32, 66, 42, // Skip to: 13746
/* 2928 */    MCD::OPC_CheckField, 6, 5, 0, 60, 42, // Skip to: 13746
/* 2934 */    MCD::OPC_Decode, 147, 4, 120, // Opcode: C_NGL_D32
/* 2938 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2956
/* 2942 */    MCD::OPC_CheckPredicate, 32, 48, 42, // Skip to: 13746
/* 2946 */    MCD::OPC_CheckField, 6, 5, 0, 42, 42, // Skip to: 13746
/* 2952 */    MCD::OPC_Decode, 138, 4, 120, // Opcode: C_LT_D32
/* 2956 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2974
/* 2960 */    MCD::OPC_CheckPredicate, 32, 30, 42, // Skip to: 13746
/* 2964 */    MCD::OPC_CheckField, 6, 5, 0, 24, 42, // Skip to: 13746
/* 2970 */    MCD::OPC_Decode, 141, 4, 120, // Opcode: C_NGE_D32
/* 2974 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2992
/* 2978 */    MCD::OPC_CheckPredicate, 32, 12, 42, // Skip to: 13746
/* 2982 */    MCD::OPC_CheckField, 6, 5, 0, 6, 42, // Skip to: 13746
/* 2988 */    MCD::OPC_Decode, 135, 4, 120, // Opcode: C_LE_D32
/* 2992 */    MCD::OPC_FilterValue, 63, 254, 41, // Skip to: 13746
/* 2996 */    MCD::OPC_CheckPredicate, 32, 250, 41, // Skip to: 13746
/* 3000 */    MCD::OPC_CheckField, 6, 5, 0, 244, 41, // Skip to: 13746
/* 3006 */    MCD::OPC_Decode, 150, 4, 120, // Opcode: C_NGT_D32
/* 3010 */    MCD::OPC_FilterValue, 20, 39, 0, // Skip to: 3053
/* 3014 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3017 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3035
/* 3021 */    MCD::OPC_CheckPredicate, 22, 225, 41, // Skip to: 13746
/* 3025 */    MCD::OPC_CheckField, 16, 5, 0, 219, 41, // Skip to: 13746
/* 3031 */    MCD::OPC_Decode, 250, 3, 108, // Opcode: CVT_S_W
/* 3035 */    MCD::OPC_FilterValue, 33, 211, 41, // Skip to: 13746
/* 3039 */    MCD::OPC_CheckPredicate, 28, 207, 41, // Skip to: 13746
/* 3043 */    MCD::OPC_CheckField, 16, 5, 0, 201, 41, // Skip to: 13746
/* 3049 */    MCD::OPC_Decode, 236, 3, 111, // Opcode: CVT_D32_W
/* 3053 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3065
/* 3057 */    MCD::OPC_CheckPredicate, 9, 189, 41, // Skip to: 13746
/* 3061 */    MCD::OPC_Decode, 206, 2, 106, // Opcode: BZ_B
/* 3065 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3077
/* 3069 */    MCD::OPC_CheckPredicate, 9, 177, 41, // Skip to: 13746
/* 3073 */    MCD::OPC_Decode, 208, 2, 121, // Opcode: BZ_H
/* 3077 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3089
/* 3081 */    MCD::OPC_CheckPredicate, 9, 165, 41, // Skip to: 13746
/* 3085 */    MCD::OPC_Decode, 210, 2, 122, // Opcode: BZ_W
/* 3089 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 3101
/* 3093 */    MCD::OPC_CheckPredicate, 9, 153, 41, // Skip to: 13746
/* 3097 */    MCD::OPC_Decode, 207, 2, 123, // Opcode: BZ_D
/* 3101 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3113
/* 3105 */    MCD::OPC_CheckPredicate, 9, 141, 41, // Skip to: 13746
/* 3109 */    MCD::OPC_Decode, 179, 2, 106, // Opcode: BNZ_B
/* 3113 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3125
/* 3117 */    MCD::OPC_CheckPredicate, 9, 129, 41, // Skip to: 13746
/* 3121 */    MCD::OPC_Decode, 181, 2, 121, // Opcode: BNZ_H
/* 3125 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3137
/* 3129 */    MCD::OPC_CheckPredicate, 9, 117, 41, // Skip to: 13746
/* 3133 */    MCD::OPC_Decode, 183, 2, 122, // Opcode: BNZ_W
/* 3137 */    MCD::OPC_FilterValue, 31, 109, 41, // Skip to: 13746
/* 3141 */    MCD::OPC_CheckPredicate, 9, 105, 41, // Skip to: 13746
/* 3145 */    MCD::OPC_Decode, 180, 2, 123, // Opcode: BNZ_D
/* 3149 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 3192
/* 3153 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3156 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3174
/* 3160 */    MCD::OPC_CheckPredicate, 6, 86, 41, // Skip to: 13746
/* 3164 */    MCD::OPC_CheckField, 3, 8, 0, 80, 41, // Skip to: 13746
/* 3170 */    MCD::OPC_Decode, 222, 8, 124, // Opcode: MFC2
/* 3174 */    MCD::OPC_FilterValue, 4, 72, 41, // Skip to: 13746
/* 3178 */    MCD::OPC_CheckPredicate, 6, 68, 41, // Skip to: 13746
/* 3182 */    MCD::OPC_CheckField, 3, 8, 0, 62, 41, // Skip to: 13746
/* 3188 */    MCD::OPC_Decode, 214, 9, 125, // Opcode: MTC2
/* 3192 */    MCD::OPC_FilterValue, 19, 218, 0, // Skip to: 3414
/* 3196 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3199 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3217
/* 3203 */    MCD::OPC_CheckPredicate, 33, 43, 41, // Skip to: 13746
/* 3207 */    MCD::OPC_CheckField, 11, 5, 0, 37, 41, // Skip to: 13746
/* 3213 */    MCD::OPC_Decode, 149, 8, 126, // Opcode: LWXC1
/* 3217 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3235
/* 3221 */    MCD::OPC_CheckPredicate, 34, 25, 41, // Skip to: 13746
/* 3225 */    MCD::OPC_CheckField, 11, 5, 0, 19, 41, // Skip to: 13746
/* 3231 */    MCD::OPC_Decode, 213, 7, 127, // Opcode: LDXC1
/* 3235 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3253
/* 3239 */    MCD::OPC_CheckPredicate, 35, 7, 41, // Skip to: 13746
/* 3243 */    MCD::OPC_CheckField, 11, 5, 0, 1, 41, // Skip to: 13746
/* 3249 */    MCD::OPC_Decode, 246, 7, 127, // Opcode: LUXC1
/* 3253 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3272
/* 3257 */    MCD::OPC_CheckPredicate, 33, 245, 40, // Skip to: 13746
/* 3261 */    MCD::OPC_CheckField, 6, 5, 0, 239, 40, // Skip to: 13746
/* 3267 */    MCD::OPC_Decode, 182, 13, 128, 1, // Opcode: SWXC1
/* 3272 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3291
/* 3276 */    MCD::OPC_CheckPredicate, 34, 226, 40, // Skip to: 13746
/* 3280 */    MCD::OPC_CheckField, 6, 5, 0, 220, 40, // Skip to: 13746
/* 3286 */    MCD::OPC_Decode, 216, 11, 129, 1, // Opcode: SDXC1
/* 3291 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3310
/* 3295 */    MCD::OPC_CheckPredicate, 35, 207, 40, // Skip to: 13746
/* 3299 */    MCD::OPC_CheckField, 6, 5, 0, 201, 40, // Skip to: 13746
/* 3305 */    MCD::OPC_Decode, 160, 13, 129, 1, // Opcode: SUXC1
/* 3310 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3323
/* 3314 */    MCD::OPC_CheckPredicate, 33, 188, 40, // Skip to: 13746
/* 3318 */    MCD::OPC_Decode, 189, 8, 130, 1, // Opcode: MADD_S
/* 3323 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3336
/* 3327 */    MCD::OPC_CheckPredicate, 36, 175, 40, // Skip to: 13746
/* 3331 */    MCD::OPC_Decode, 182, 8, 131, 1, // Opcode: MADD_D32
/* 3336 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3349
/* 3340 */    MCD::OPC_CheckPredicate, 33, 162, 40, // Skip to: 13746
/* 3344 */    MCD::OPC_Decode, 209, 9, 130, 1, // Opcode: MSUB_S
/* 3349 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3362
/* 3353 */    MCD::OPC_CheckPredicate, 36, 149, 40, // Skip to: 13746
/* 3357 */    MCD::OPC_Decode, 202, 9, 131, 1, // Opcode: MSUB_D32
/* 3362 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3375
/* 3366 */    MCD::OPC_CheckPredicate, 33, 136, 40, // Skip to: 13746
/* 3370 */    MCD::OPC_Decode, 160, 10, 130, 1, // Opcode: NMADD_S
/* 3375 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3388
/* 3379 */    MCD::OPC_CheckPredicate, 36, 123, 40, // Skip to: 13746
/* 3383 */    MCD::OPC_Decode, 157, 10, 131, 1, // Opcode: NMADD_D32
/* 3388 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3401
/* 3392 */    MCD::OPC_CheckPredicate, 33, 110, 40, // Skip to: 13746
/* 3396 */    MCD::OPC_Decode, 165, 10, 130, 1, // Opcode: NMSUB_S
/* 3401 */    MCD::OPC_FilterValue, 57, 101, 40, // Skip to: 13746
/* 3405 */    MCD::OPC_CheckPredicate, 36, 97, 40, // Skip to: 13746
/* 3409 */    MCD::OPC_Decode, 162, 10, 131, 1, // Opcode: NMSUB_D32
/* 3414 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3426
/* 3418 */    MCD::OPC_CheckPredicate, 18, 84, 40, // Skip to: 13746
/* 3422 */    MCD::OPC_Decode, 210, 1, 92, // Opcode: BEQL
/* 3426 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3438
/* 3430 */    MCD::OPC_CheckPredicate, 18, 72, 40, // Skip to: 13746
/* 3434 */    MCD::OPC_Decode, 171, 2, 92, // Opcode: BNEL
/* 3438 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 3456
/* 3442 */    MCD::OPC_CheckPredicate, 18, 60, 40, // Skip to: 13746
/* 3446 */    MCD::OPC_CheckField, 16, 5, 0, 54, 40, // Skip to: 13746
/* 3452 */    MCD::OPC_Decode, 139, 2, 87, // Opcode: BLEZL
/* 3456 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3474
/* 3460 */    MCD::OPC_CheckPredicate, 18, 42, 40, // Skip to: 13746
/* 3464 */    MCD::OPC_CheckField, 16, 5, 0, 36, 40, // Skip to: 13746
/* 3470 */    MCD::OPC_Decode, 239, 1, 87, // Opcode: BGTZL
/* 3474 */    MCD::OPC_FilterValue, 28, 235, 0, // Skip to: 3713
/* 3478 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3481 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 3522
/* 3485 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3488 */    MCD::OPC_FilterValue, 0, 14, 40, // Skip to: 13746
/* 3492 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3495 */    MCD::OPC_FilterValue, 0, 7, 40, // Skip to: 13746
/* 3499 */    MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 3513
/* 3503 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3513
/* 3509 */    MCD::OPC_Decode, 170, 8, 51, // Opcode: MADD
/* 3513 */    MCD::OPC_CheckPredicate, 14, 245, 39, // Skip to: 13746
/* 3517 */    MCD::OPC_Decode, 185, 8, 132, 1, // Opcode: MADD_DSP
/* 3522 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 3563
/* 3526 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3529 */    MCD::OPC_FilterValue, 0, 229, 39, // Skip to: 13746
/* 3533 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3536 */    MCD::OPC_FilterValue, 0, 222, 39, // Skip to: 13746
/* 3540 */    MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 3554
/* 3544 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3554
/* 3550 */    MCD::OPC_Decode, 175, 8, 51, // Opcode: MADDU
/* 3554 */    MCD::OPC_CheckPredicate, 14, 204, 39, // Skip to: 13746
/* 3558 */    MCD::OPC_Decode, 176, 8, 132, 1, // Opcode: MADDU_DSP
/* 3563 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3581
/* 3567 */    MCD::OPC_CheckPredicate, 10, 191, 39, // Skip to: 13746
/* 3571 */    MCD::OPC_CheckField, 6, 5, 0, 185, 39, // Skip to: 13746
/* 3577 */    MCD::OPC_Decode, 237, 9, 43, // Opcode: MUL
/* 3581 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 3622
/* 3585 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3588 */    MCD::OPC_FilterValue, 0, 170, 39, // Skip to: 13746
/* 3592 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3595 */    MCD::OPC_FilterValue, 0, 163, 39, // Skip to: 13746
/* 3599 */    MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 3613
/* 3603 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3613
/* 3609 */    MCD::OPC_Decode, 190, 9, 51, // Opcode: MSUB
/* 3613 */    MCD::OPC_CheckPredicate, 14, 145, 39, // Skip to: 13746
/* 3617 */    MCD::OPC_Decode, 205, 9, 132, 1, // Opcode: MSUB_DSP
/* 3622 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 3663
/* 3626 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3629 */    MCD::OPC_FilterValue, 0, 129, 39, // Skip to: 13746
/* 3633 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3636 */    MCD::OPC_FilterValue, 0, 122, 39, // Skip to: 13746
/* 3640 */    MCD::OPC_CheckPredicate, 10, 10, 0, // Skip to: 3654
/* 3644 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3654
/* 3650 */    MCD::OPC_Decode, 195, 9, 51, // Opcode: MSUBU
/* 3654 */    MCD::OPC_CheckPredicate, 14, 104, 39, // Skip to: 13746
/* 3658 */    MCD::OPC_Decode, 196, 9, 132, 1, // Opcode: MSUBU_DSP
/* 3663 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3682
/* 3667 */    MCD::OPC_CheckPredicate, 10, 91, 39, // Skip to: 13746
/* 3671 */    MCD::OPC_CheckField, 6, 5, 0, 85, 39, // Skip to: 13746
/* 3677 */    MCD::OPC_Decode, 173, 3, 133, 1, // Opcode: CLZ
/* 3682 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 3701
/* 3686 */    MCD::OPC_CheckPredicate, 10, 72, 39, // Skip to: 13746
/* 3690 */    MCD::OPC_CheckField, 6, 5, 0, 66, 39, // Skip to: 13746
/* 3696 */    MCD::OPC_Decode, 153, 3, 133, 1, // Opcode: CLO
/* 3701 */    MCD::OPC_FilterValue, 63, 57, 39, // Skip to: 13746
/* 3705 */    MCD::OPC_CheckPredicate, 10, 53, 39, // Skip to: 13746
/* 3709 */    MCD::OPC_Decode, 202, 11, 78, // Opcode: SDBBP
/* 3713 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3725
/* 3717 */    MCD::OPC_CheckPredicate, 10, 41, 39, // Skip to: 13746
/* 3721 */    MCD::OPC_Decode, 167, 7, 91, // Opcode: JALX
/* 3725 */    MCD::OPC_FilterValue, 30, 94, 28, // Skip to: 10991
/* 3729 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3732 */    MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 3790
/* 3736 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3739 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3751
/* 3743 */    MCD::OPC_CheckPredicate, 9, 15, 39, // Skip to: 13746
/* 3747 */    MCD::OPC_Decode, 94, 134, 1, // Opcode: ANDI_B
/* 3751 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3764
/* 3755 */    MCD::OPC_CheckPredicate, 9, 3, 39, // Skip to: 13746
/* 3759 */    MCD::OPC_Decode, 183, 10, 134, 1, // Opcode: ORI_B
/* 3764 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3777
/* 3768 */    MCD::OPC_CheckPredicate, 9, 246, 38, // Skip to: 13746
/* 3772 */    MCD::OPC_Decode, 170, 10, 134, 1, // Opcode: NORI_B
/* 3777 */    MCD::OPC_FilterValue, 3, 237, 38, // Skip to: 13746
/* 3781 */    MCD::OPC_CheckPredicate, 9, 233, 38, // Skip to: 13746
/* 3785 */    MCD::OPC_Decode, 169, 14, 134, 1, // Opcode: XORI_B
/* 3790 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 3836
/* 3794 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3797 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3810
/* 3801 */    MCD::OPC_CheckPredicate, 9, 213, 38, // Skip to: 13746
/* 3805 */    MCD::OPC_Decode, 156, 2, 135, 1, // Opcode: BMNZI_B
/* 3810 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3823
/* 3814 */    MCD::OPC_CheckPredicate, 9, 200, 38, // Skip to: 13746
/* 3818 */    MCD::OPC_Decode, 158, 2, 135, 1, // Opcode: BMZI_B
/* 3823 */    MCD::OPC_FilterValue, 2, 191, 38, // Skip to: 13746
/* 3827 */    MCD::OPC_CheckPredicate, 9, 187, 38, // Skip to: 13746
/* 3831 */    MCD::OPC_Decode, 191, 2, 135, 1, // Opcode: BSELI_B
/* 3836 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 3882
/* 3840 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3843 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3856
/* 3847 */    MCD::OPC_CheckPredicate, 9, 167, 38, // Skip to: 13746
/* 3851 */    MCD::OPC_Decode, 243, 11, 134, 1, // Opcode: SHF_B
/* 3856 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3869
/* 3860 */    MCD::OPC_CheckPredicate, 9, 154, 38, // Skip to: 13746
/* 3864 */    MCD::OPC_Decode, 244, 11, 136, 1, // Opcode: SHF_H
/* 3869 */    MCD::OPC_FilterValue, 2, 145, 38, // Skip to: 13746
/* 3873 */    MCD::OPC_CheckPredicate, 9, 141, 38, // Skip to: 13746
/* 3877 */    MCD::OPC_Decode, 245, 11, 137, 1, // Opcode: SHF_W
/* 3882 */    MCD::OPC_FilterValue, 6, 55, 1, // Skip to: 4197
/* 3886 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3889 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3901
/* 3893 */    MCD::OPC_CheckPredicate, 9, 121, 38, // Skip to: 13746
/* 3897 */    MCD::OPC_Decode, 63, 138, 1, // Opcode: ADDVI_B
/* 3901 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3913
/* 3905 */    MCD::OPC_CheckPredicate, 9, 109, 38, // Skip to: 13746
/* 3909 */    MCD::OPC_Decode, 65, 139, 1, // Opcode: ADDVI_H
/* 3913 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3925
/* 3917 */    MCD::OPC_CheckPredicate, 9, 97, 38, // Skip to: 13746
/* 3921 */    MCD::OPC_Decode, 66, 140, 1, // Opcode: ADDVI_W
/* 3925 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3937
/* 3929 */    MCD::OPC_CheckPredicate, 9, 85, 38, // Skip to: 13746
/* 3933 */    MCD::OPC_Decode, 64, 141, 1, // Opcode: ADDVI_D
/* 3937 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3950
/* 3941 */    MCD::OPC_CheckPredicate, 9, 73, 38, // Skip to: 13746
/* 3945 */    MCD::OPC_Decode, 148, 13, 138, 1, // Opcode: SUBVI_B
/* 3950 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3963
/* 3954 */    MCD::OPC_CheckPredicate, 9, 60, 38, // Skip to: 13746
/* 3958 */    MCD::OPC_Decode, 150, 13, 139, 1, // Opcode: SUBVI_H
/* 3963 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3976
/* 3967 */    MCD::OPC_CheckPredicate, 9, 47, 38, // Skip to: 13746
/* 3971 */    MCD::OPC_Decode, 151, 13, 140, 1, // Opcode: SUBVI_W
/* 3976 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 3989
/* 3980 */    MCD::OPC_CheckPredicate, 9, 34, 38, // Skip to: 13746
/* 3984 */    MCD::OPC_Decode, 149, 13, 141, 1, // Opcode: SUBVI_D
/* 3989 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4002
/* 3993 */    MCD::OPC_CheckPredicate, 9, 21, 38, // Skip to: 13746
/* 3997 */    MCD::OPC_Decode, 197, 8, 138, 1, // Opcode: MAXI_S_B
/* 4002 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4015
/* 4006 */    MCD::OPC_CheckPredicate, 9, 8, 38, // Skip to: 13746
/* 4010 */    MCD::OPC_Decode, 199, 8, 139, 1, // Opcode: MAXI_S_H
/* 4015 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4028
/* 4019 */    MCD::OPC_CheckPredicate, 9, 251, 37, // Skip to: 13746
/* 4023 */    MCD::OPC_Decode, 200, 8, 140, 1, // Opcode: MAXI_S_W
/* 4028 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4041
/* 4032 */    MCD::OPC_CheckPredicate, 9, 238, 37, // Skip to: 13746
/* 4036 */    MCD::OPC_Decode, 198, 8, 141, 1, // Opcode: MAXI_S_D
/* 4041 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4054
/* 4045 */    MCD::OPC_CheckPredicate, 9, 225, 37, // Skip to: 13746
/* 4049 */    MCD::OPC_Decode, 201, 8, 138, 1, // Opcode: MAXI_U_B
/* 4054 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4067
/* 4058 */    MCD::OPC_CheckPredicate, 9, 212, 37, // Skip to: 13746
/* 4062 */    MCD::OPC_Decode, 203, 8, 139, 1, // Opcode: MAXI_U_H
/* 4067 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4080
/* 4071 */    MCD::OPC_CheckPredicate, 9, 199, 37, // Skip to: 13746
/* 4075 */    MCD::OPC_Decode, 204, 8, 140, 1, // Opcode: MAXI_U_W
/* 4080 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4093
/* 4084 */    MCD::OPC_CheckPredicate, 9, 186, 37, // Skip to: 13746
/* 4088 */    MCD::OPC_Decode, 202, 8, 141, 1, // Opcode: MAXI_U_D
/* 4093 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4106
/* 4097 */    MCD::OPC_CheckPredicate, 9, 173, 37, // Skip to: 13746
/* 4101 */    MCD::OPC_Decode, 238, 8, 138, 1, // Opcode: MINI_S_B
/* 4106 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4119
/* 4110 */    MCD::OPC_CheckPredicate, 9, 160, 37, // Skip to: 13746
/* 4114 */    MCD::OPC_Decode, 240, 8, 139, 1, // Opcode: MINI_S_H
/* 4119 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4132
/* 4123 */    MCD::OPC_CheckPredicate, 9, 147, 37, // Skip to: 13746
/* 4127 */    MCD::OPC_Decode, 241, 8, 140, 1, // Opcode: MINI_S_W
/* 4132 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4145
/* 4136 */    MCD::OPC_CheckPredicate, 9, 134, 37, // Skip to: 13746
/* 4140 */    MCD::OPC_Decode, 239, 8, 141, 1, // Opcode: MINI_S_D
/* 4145 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4158
/* 4149 */    MCD::OPC_CheckPredicate, 9, 121, 37, // Skip to: 13746
/* 4153 */    MCD::OPC_Decode, 242, 8, 138, 1, // Opcode: MINI_U_B
/* 4158 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4171
/* 4162 */    MCD::OPC_CheckPredicate, 9, 108, 37, // Skip to: 13746
/* 4166 */    MCD::OPC_Decode, 244, 8, 139, 1, // Opcode: MINI_U_H
/* 4171 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4184
/* 4175 */    MCD::OPC_CheckPredicate, 9, 95, 37, // Skip to: 13746
/* 4179 */    MCD::OPC_Decode, 245, 8, 140, 1, // Opcode: MINI_U_W
/* 4184 */    MCD::OPC_FilterValue, 23, 86, 37, // Skip to: 13746
/* 4188 */    MCD::OPC_CheckPredicate, 9, 82, 37, // Skip to: 13746
/* 4192 */    MCD::OPC_Decode, 243, 8, 141, 1, // Opcode: MINI_U_D
/* 4197 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 4516
/* 4201 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4204 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4217
/* 4208 */    MCD::OPC_CheckPredicate, 9, 62, 37, // Skip to: 13746
/* 4212 */    MCD::OPC_Decode, 250, 2, 138, 1, // Opcode: CEQI_B
/* 4217 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4230
/* 4221 */    MCD::OPC_CheckPredicate, 9, 49, 37, // Skip to: 13746
/* 4225 */    MCD::OPC_Decode, 252, 2, 139, 1, // Opcode: CEQI_H
/* 4230 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4243
/* 4234 */    MCD::OPC_CheckPredicate, 9, 36, 37, // Skip to: 13746
/* 4238 */    MCD::OPC_Decode, 253, 2, 140, 1, // Opcode: CEQI_W
/* 4243 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4256
/* 4247 */    MCD::OPC_CheckPredicate, 9, 23, 37, // Skip to: 13746
/* 4251 */    MCD::OPC_Decode, 251, 2, 141, 1, // Opcode: CEQI_D
/* 4256 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4269
/* 4260 */    MCD::OPC_CheckPredicate, 9, 10, 37, // Skip to: 13746
/* 4264 */    MCD::OPC_Decode, 157, 3, 138, 1, // Opcode: CLTI_S_B
/* 4269 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4282
/* 4273 */    MCD::OPC_CheckPredicate, 9, 253, 36, // Skip to: 13746
/* 4277 */    MCD::OPC_Decode, 159, 3, 139, 1, // Opcode: CLTI_S_H
/* 4282 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4295
/* 4286 */    MCD::OPC_CheckPredicate, 9, 240, 36, // Skip to: 13746
/* 4290 */    MCD::OPC_Decode, 160, 3, 140, 1, // Opcode: CLTI_S_W
/* 4295 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4308
/* 4299 */    MCD::OPC_CheckPredicate, 9, 227, 36, // Skip to: 13746
/* 4303 */    MCD::OPC_Decode, 158, 3, 141, 1, // Opcode: CLTI_S_D
/* 4308 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4321
/* 4312 */    MCD::OPC_CheckPredicate, 9, 214, 36, // Skip to: 13746
/* 4316 */    MCD::OPC_Decode, 161, 3, 138, 1, // Opcode: CLTI_U_B
/* 4321 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4334
/* 4325 */    MCD::OPC_CheckPredicate, 9, 201, 36, // Skip to: 13746
/* 4329 */    MCD::OPC_Decode, 163, 3, 139, 1, // Opcode: CLTI_U_H
/* 4334 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4347
/* 4338 */    MCD::OPC_CheckPredicate, 9, 188, 36, // Skip to: 13746
/* 4342 */    MCD::OPC_Decode, 164, 3, 140, 1, // Opcode: CLTI_U_W
/* 4347 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4360
/* 4351 */    MCD::OPC_CheckPredicate, 9, 175, 36, // Skip to: 13746
/* 4355 */    MCD::OPC_Decode, 162, 3, 141, 1, // Opcode: CLTI_U_D
/* 4360 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4373
/* 4364 */    MCD::OPC_CheckPredicate, 9, 162, 36, // Skip to: 13746
/* 4368 */    MCD::OPC_Decode, 137, 3, 138, 1, // Opcode: CLEI_S_B
/* 4373 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4386
/* 4377 */    MCD::OPC_CheckPredicate, 9, 149, 36, // Skip to: 13746
/* 4381 */    MCD::OPC_Decode, 139, 3, 139, 1, // Opcode: CLEI_S_H
/* 4386 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4399
/* 4390 */    MCD::OPC_CheckPredicate, 9, 136, 36, // Skip to: 13746
/* 4394 */    MCD::OPC_Decode, 140, 3, 140, 1, // Opcode: CLEI_S_W
/* 4399 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4412
/* 4403 */    MCD::OPC_CheckPredicate, 9, 123, 36, // Skip to: 13746
/* 4407 */    MCD::OPC_Decode, 138, 3, 141, 1, // Opcode: CLEI_S_D
/* 4412 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4425
/* 4416 */    MCD::OPC_CheckPredicate, 9, 110, 36, // Skip to: 13746
/* 4420 */    MCD::OPC_Decode, 141, 3, 138, 1, // Opcode: CLEI_U_B
/* 4425 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4438
/* 4429 */    MCD::OPC_CheckPredicate, 9, 97, 36, // Skip to: 13746
/* 4433 */    MCD::OPC_Decode, 143, 3, 139, 1, // Opcode: CLEI_U_H
/* 4438 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4451
/* 4442 */    MCD::OPC_CheckPredicate, 9, 84, 36, // Skip to: 13746
/* 4446 */    MCD::OPC_Decode, 144, 3, 140, 1, // Opcode: CLEI_U_W
/* 4451 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 4464
/* 4455 */    MCD::OPC_CheckPredicate, 9, 71, 36, // Skip to: 13746
/* 4459 */    MCD::OPC_Decode, 142, 3, 141, 1, // Opcode: CLEI_U_D
/* 4464 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 4477
/* 4468 */    MCD::OPC_CheckPredicate, 9, 58, 36, // Skip to: 13746
/* 4472 */    MCD::OPC_Decode, 206, 7, 142, 1, // Opcode: LDI_B
/* 4477 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 4490
/* 4481 */    MCD::OPC_CheckPredicate, 9, 45, 36, // Skip to: 13746
/* 4485 */    MCD::OPC_Decode, 208, 7, 143, 1, // Opcode: LDI_H
/* 4490 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 4503
/* 4494 */    MCD::OPC_CheckPredicate, 9, 32, 36, // Skip to: 13746
/* 4498 */    MCD::OPC_Decode, 209, 7, 144, 1, // Opcode: LDI_W
/* 4503 */    MCD::OPC_FilterValue, 27, 23, 36, // Skip to: 13746
/* 4507 */    MCD::OPC_CheckPredicate, 9, 19, 36, // Skip to: 13746
/* 4511 */    MCD::OPC_Decode, 207, 7, 145, 1, // Opcode: LDI_D
/* 4516 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5099
/* 4520 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4523 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4536
/* 4527 */    MCD::OPC_CheckPredicate, 9, 255, 35, // Skip to: 13746
/* 4531 */    MCD::OPC_Decode, 156, 12, 146, 1, // Opcode: SLLI_D
/* 4536 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 4595
/* 4540 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4543 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4556
/* 4547 */    MCD::OPC_CheckPredicate, 9, 235, 35, // Skip to: 13746
/* 4551 */    MCD::OPC_Decode, 158, 12, 140, 1, // Opcode: SLLI_W
/* 4556 */    MCD::OPC_FilterValue, 1, 226, 35, // Skip to: 13746
/* 4560 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4563 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4576
/* 4567 */    MCD::OPC_CheckPredicate, 9, 215, 35, // Skip to: 13746
/* 4571 */    MCD::OPC_Decode, 157, 12, 147, 1, // Opcode: SLLI_H
/* 4576 */    MCD::OPC_FilterValue, 1, 206, 35, // Skip to: 13746
/* 4580 */    MCD::OPC_CheckPredicate, 9, 202, 35, // Skip to: 13746
/* 4584 */    MCD::OPC_CheckField, 19, 1, 0, 196, 35, // Skip to: 13746
/* 4590 */    MCD::OPC_Decode, 155, 12, 148, 1, // Opcode: SLLI_B
/* 4595 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4608
/* 4599 */    MCD::OPC_CheckPredicate, 9, 183, 35, // Skip to: 13746
/* 4603 */    MCD::OPC_Decode, 195, 12, 146, 1, // Opcode: SRAI_D
/* 4608 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 4667
/* 4612 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4615 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4628
/* 4619 */    MCD::OPC_CheckPredicate, 9, 163, 35, // Skip to: 13746
/* 4623 */    MCD::OPC_Decode, 197, 12, 140, 1, // Opcode: SRAI_W
/* 4628 */    MCD::OPC_FilterValue, 1, 154, 35, // Skip to: 13746
/* 4632 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4635 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4648
/* 4639 */    MCD::OPC_CheckPredicate, 9, 143, 35, // Skip to: 13746
/* 4643 */    MCD::OPC_Decode, 196, 12, 147, 1, // Opcode: SRAI_H
/* 4648 */    MCD::OPC_FilterValue, 1, 134, 35, // Skip to: 13746
/* 4652 */    MCD::OPC_CheckPredicate, 9, 130, 35, // Skip to: 13746
/* 4656 */    MCD::OPC_CheckField, 19, 1, 0, 124, 35, // Skip to: 13746
/* 4662 */    MCD::OPC_Decode, 194, 12, 148, 1, // Opcode: SRAI_B
/* 4667 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4680
/* 4671 */    MCD::OPC_CheckPredicate, 9, 111, 35, // Skip to: 13746
/* 4675 */    MCD::OPC_Decode, 216, 12, 146, 1, // Opcode: SRLI_D
/* 4680 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 4739
/* 4684 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4687 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4700
/* 4691 */    MCD::OPC_CheckPredicate, 9, 91, 35, // Skip to: 13746
/* 4695 */    MCD::OPC_Decode, 218, 12, 140, 1, // Opcode: SRLI_W
/* 4700 */    MCD::OPC_FilterValue, 1, 82, 35, // Skip to: 13746
/* 4704 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4707 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4720
/* 4711 */    MCD::OPC_CheckPredicate, 9, 71, 35, // Skip to: 13746
/* 4715 */    MCD::OPC_Decode, 217, 12, 147, 1, // Opcode: SRLI_H
/* 4720 */    MCD::OPC_FilterValue, 1, 62, 35, // Skip to: 13746
/* 4724 */    MCD::OPC_CheckPredicate, 9, 58, 35, // Skip to: 13746
/* 4728 */    MCD::OPC_CheckField, 19, 1, 0, 52, 35, // Skip to: 13746
/* 4734 */    MCD::OPC_Decode, 215, 12, 148, 1, // Opcode: SRLI_B
/* 4739 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4752
/* 4743 */    MCD::OPC_CheckPredicate, 9, 39, 35, // Skip to: 13746
/* 4747 */    MCD::OPC_Decode, 199, 1, 146, 1, // Opcode: BCLRI_D
/* 4752 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 4811
/* 4756 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4759 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4772
/* 4763 */    MCD::OPC_CheckPredicate, 9, 19, 35, // Skip to: 13746
/* 4767 */    MCD::OPC_Decode, 201, 1, 140, 1, // Opcode: BCLRI_W
/* 4772 */    MCD::OPC_FilterValue, 1, 10, 35, // Skip to: 13746
/* 4776 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4779 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4792
/* 4783 */    MCD::OPC_CheckPredicate, 9, 255, 34, // Skip to: 13746
/* 4787 */    MCD::OPC_Decode, 200, 1, 147, 1, // Opcode: BCLRI_H
/* 4792 */    MCD::OPC_FilterValue, 1, 246, 34, // Skip to: 13746
/* 4796 */    MCD::OPC_CheckPredicate, 9, 242, 34, // Skip to: 13746
/* 4800 */    MCD::OPC_CheckField, 19, 1, 0, 236, 34, // Skip to: 13746
/* 4806 */    MCD::OPC_Decode, 198, 1, 148, 1, // Opcode: BCLRI_B
/* 4811 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4824
/* 4815 */    MCD::OPC_CheckPredicate, 9, 223, 34, // Skip to: 13746
/* 4819 */    MCD::OPC_Decode, 199, 2, 146, 1, // Opcode: BSETI_D
/* 4824 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 4883
/* 4828 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4831 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4844
/* 4835 */    MCD::OPC_CheckPredicate, 9, 203, 34, // Skip to: 13746
/* 4839 */    MCD::OPC_Decode, 201, 2, 140, 1, // Opcode: BSETI_W
/* 4844 */    MCD::OPC_FilterValue, 1, 194, 34, // Skip to: 13746
/* 4848 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4851 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4864
/* 4855 */    MCD::OPC_CheckPredicate, 9, 183, 34, // Skip to: 13746
/* 4859 */    MCD::OPC_Decode, 200, 2, 147, 1, // Opcode: BSETI_H
/* 4864 */    MCD::OPC_FilterValue, 1, 174, 34, // Skip to: 13746
/* 4868 */    MCD::OPC_CheckPredicate, 9, 170, 34, // Skip to: 13746
/* 4872 */    MCD::OPC_CheckField, 19, 1, 0, 164, 34, // Skip to: 13746
/* 4878 */    MCD::OPC_Decode, 198, 2, 148, 1, // Opcode: BSETI_B
/* 4883 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4896
/* 4887 */    MCD::OPC_CheckPredicate, 9, 151, 34, // Skip to: 13746
/* 4891 */    MCD::OPC_Decode, 164, 2, 146, 1, // Opcode: BNEGI_D
/* 4896 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 4955
/* 4900 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4903 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4916
/* 4907 */    MCD::OPC_CheckPredicate, 9, 131, 34, // Skip to: 13746
/* 4911 */    MCD::OPC_Decode, 166, 2, 140, 1, // Opcode: BNEGI_W
/* 4916 */    MCD::OPC_FilterValue, 1, 122, 34, // Skip to: 13746
/* 4920 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4923 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4936
/* 4927 */    MCD::OPC_CheckPredicate, 9, 111, 34, // Skip to: 13746
/* 4931 */    MCD::OPC_Decode, 165, 2, 147, 1, // Opcode: BNEGI_H
/* 4936 */    MCD::OPC_FilterValue, 1, 102, 34, // Skip to: 13746
/* 4940 */    MCD::OPC_CheckPredicate, 9, 98, 34, // Skip to: 13746
/* 4944 */    MCD::OPC_CheckField, 19, 1, 0, 92, 34, // Skip to: 13746
/* 4950 */    MCD::OPC_Decode, 163, 2, 148, 1, // Opcode: BNEGI_B
/* 4955 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4968
/* 4959 */    MCD::OPC_CheckPredicate, 9, 79, 34, // Skip to: 13746
/* 4963 */    MCD::OPC_Decode, 242, 1, 149, 1, // Opcode: BINSLI_D
/* 4968 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5027
/* 4972 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4975 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4988
/* 4979 */    MCD::OPC_CheckPredicate, 9, 59, 34, // Skip to: 13746
/* 4983 */    MCD::OPC_Decode, 244, 1, 150, 1, // Opcode: BINSLI_W
/* 4988 */    MCD::OPC_FilterValue, 1, 50, 34, // Skip to: 13746
/* 4992 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4995 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5008
/* 4999 */    MCD::OPC_CheckPredicate, 9, 39, 34, // Skip to: 13746
/* 5003 */    MCD::OPC_Decode, 243, 1, 151, 1, // Opcode: BINSLI_H
/* 5008 */    MCD::OPC_FilterValue, 1, 30, 34, // Skip to: 13746
/* 5012 */    MCD::OPC_CheckPredicate, 9, 26, 34, // Skip to: 13746
/* 5016 */    MCD::OPC_CheckField, 19, 1, 0, 20, 34, // Skip to: 13746
/* 5022 */    MCD::OPC_Decode, 241, 1, 152, 1, // Opcode: BINSLI_B
/* 5027 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5040
/* 5031 */    MCD::OPC_CheckPredicate, 9, 7, 34, // Skip to: 13746
/* 5035 */    MCD::OPC_Decode, 250, 1, 149, 1, // Opcode: BINSRI_D
/* 5040 */    MCD::OPC_FilterValue, 15, 254, 33, // Skip to: 13746
/* 5044 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5047 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5060
/* 5051 */    MCD::OPC_CheckPredicate, 9, 243, 33, // Skip to: 13746
/* 5055 */    MCD::OPC_Decode, 252, 1, 150, 1, // Opcode: BINSRI_W
/* 5060 */    MCD::OPC_FilterValue, 1, 234, 33, // Skip to: 13746
/* 5064 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5067 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5080
/* 5071 */    MCD::OPC_CheckPredicate, 9, 223, 33, // Skip to: 13746
/* 5075 */    MCD::OPC_Decode, 251, 1, 151, 1, // Opcode: BINSRI_H
/* 5080 */    MCD::OPC_FilterValue, 1, 214, 33, // Skip to: 13746
/* 5084 */    MCD::OPC_CheckPredicate, 9, 210, 33, // Skip to: 13746
/* 5088 */    MCD::OPC_CheckField, 19, 1, 0, 204, 33, // Skip to: 13746
/* 5094 */    MCD::OPC_Decode, 249, 1, 152, 1, // Opcode: BINSRI_B
/* 5099 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 5394
/* 5103 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5106 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5119
/* 5110 */    MCD::OPC_CheckPredicate, 9, 184, 33, // Skip to: 13746
/* 5114 */    MCD::OPC_Decode, 185, 11, 146, 1, // Opcode: SAT_S_D
/* 5119 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5178
/* 5123 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5126 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5139
/* 5130 */    MCD::OPC_CheckPredicate, 9, 164, 33, // Skip to: 13746
/* 5134 */    MCD::OPC_Decode, 187, 11, 140, 1, // Opcode: SAT_S_W
/* 5139 */    MCD::OPC_FilterValue, 1, 155, 33, // Skip to: 13746
/* 5143 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5146 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5159
/* 5150 */    MCD::OPC_CheckPredicate, 9, 144, 33, // Skip to: 13746
/* 5154 */    MCD::OPC_Decode, 186, 11, 147, 1, // Opcode: SAT_S_H
/* 5159 */    MCD::OPC_FilterValue, 1, 135, 33, // Skip to: 13746
/* 5163 */    MCD::OPC_CheckPredicate, 9, 131, 33, // Skip to: 13746
/* 5167 */    MCD::OPC_CheckField, 19, 1, 0, 125, 33, // Skip to: 13746
/* 5173 */    MCD::OPC_Decode, 184, 11, 148, 1, // Opcode: SAT_S_B
/* 5178 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5191
/* 5182 */    MCD::OPC_CheckPredicate, 9, 112, 33, // Skip to: 13746
/* 5186 */    MCD::OPC_Decode, 189, 11, 146, 1, // Opcode: SAT_U_D
/* 5191 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5250
/* 5195 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5198 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5211
/* 5202 */    MCD::OPC_CheckPredicate, 9, 92, 33, // Skip to: 13746
/* 5206 */    MCD::OPC_Decode, 191, 11, 140, 1, // Opcode: SAT_U_W
/* 5211 */    MCD::OPC_FilterValue, 1, 83, 33, // Skip to: 13746
/* 5215 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5218 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5231
/* 5222 */    MCD::OPC_CheckPredicate, 9, 72, 33, // Skip to: 13746
/* 5226 */    MCD::OPC_Decode, 190, 11, 147, 1, // Opcode: SAT_U_H
/* 5231 */    MCD::OPC_FilterValue, 1, 63, 33, // Skip to: 13746
/* 5235 */    MCD::OPC_CheckPredicate, 9, 59, 33, // Skip to: 13746
/* 5239 */    MCD::OPC_CheckField, 19, 1, 0, 53, 33, // Skip to: 13746
/* 5245 */    MCD::OPC_Decode, 188, 11, 148, 1, // Opcode: SAT_U_B
/* 5250 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5263
/* 5254 */    MCD::OPC_CheckPredicate, 9, 40, 33, // Skip to: 13746
/* 5258 */    MCD::OPC_Decode, 199, 12, 146, 1, // Opcode: SRARI_D
/* 5263 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5322
/* 5267 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5270 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5283
/* 5274 */    MCD::OPC_CheckPredicate, 9, 20, 33, // Skip to: 13746
/* 5278 */    MCD::OPC_Decode, 201, 12, 140, 1, // Opcode: SRARI_W
/* 5283 */    MCD::OPC_FilterValue, 1, 11, 33, // Skip to: 13746
/* 5287 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5290 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5303
/* 5294 */    MCD::OPC_CheckPredicate, 9, 0, 33, // Skip to: 13746
/* 5298 */    MCD::OPC_Decode, 200, 12, 147, 1, // Opcode: SRARI_H
/* 5303 */    MCD::OPC_FilterValue, 1, 247, 32, // Skip to: 13746
/* 5307 */    MCD::OPC_CheckPredicate, 9, 243, 32, // Skip to: 13746
/* 5311 */    MCD::OPC_CheckField, 19, 1, 0, 237, 32, // Skip to: 13746
/* 5317 */    MCD::OPC_Decode, 198, 12, 148, 1, // Opcode: SRARI_B
/* 5322 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5335
/* 5326 */    MCD::OPC_CheckPredicate, 9, 224, 32, // Skip to: 13746
/* 5330 */    MCD::OPC_Decode, 220, 12, 146, 1, // Opcode: SRLRI_D
/* 5335 */    MCD::OPC_FilterValue, 7, 215, 32, // Skip to: 13746
/* 5339 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5342 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5355
/* 5346 */    MCD::OPC_CheckPredicate, 9, 204, 32, // Skip to: 13746
/* 5350 */    MCD::OPC_Decode, 222, 12, 140, 1, // Opcode: SRLRI_W
/* 5355 */    MCD::OPC_FilterValue, 1, 195, 32, // Skip to: 13746
/* 5359 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5362 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5375
/* 5366 */    MCD::OPC_CheckPredicate, 9, 184, 32, // Skip to: 13746
/* 5370 */    MCD::OPC_Decode, 221, 12, 147, 1, // Opcode: SRLRI_H
/* 5375 */    MCD::OPC_FilterValue, 1, 175, 32, // Skip to: 13746
/* 5379 */    MCD::OPC_CheckPredicate, 9, 171, 32, // Skip to: 13746
/* 5383 */    MCD::OPC_CheckField, 19, 1, 0, 165, 32, // Skip to: 13746
/* 5389 */    MCD::OPC_Decode, 219, 12, 148, 1, // Opcode: SRLRI_B
/* 5394 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 5817
/* 5398 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5401 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5414
/* 5405 */    MCD::OPC_CheckPredicate, 9, 145, 32, // Skip to: 13746
/* 5409 */    MCD::OPC_Decode, 161, 12, 153, 1, // Opcode: SLL_B
/* 5414 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5427
/* 5418 */    MCD::OPC_CheckPredicate, 9, 132, 32, // Skip to: 13746
/* 5422 */    MCD::OPC_Decode, 163, 12, 154, 1, // Opcode: SLL_H
/* 5427 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5440
/* 5431 */    MCD::OPC_CheckPredicate, 9, 119, 32, // Skip to: 13746
/* 5435 */    MCD::OPC_Decode, 165, 12, 155, 1, // Opcode: SLL_W
/* 5440 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5453
/* 5444 */    MCD::OPC_CheckPredicate, 9, 106, 32, // Skip to: 13746
/* 5448 */    MCD::OPC_Decode, 162, 12, 156, 1, // Opcode: SLL_D
/* 5453 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5466
/* 5457 */    MCD::OPC_CheckPredicate, 9, 93, 32, // Skip to: 13746
/* 5461 */    MCD::OPC_Decode, 208, 12, 153, 1, // Opcode: SRA_B
/* 5466 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5479
/* 5470 */    MCD::OPC_CheckPredicate, 9, 80, 32, // Skip to: 13746
/* 5474 */    MCD::OPC_Decode, 210, 12, 154, 1, // Opcode: SRA_H
/* 5479 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5492
/* 5483 */    MCD::OPC_CheckPredicate, 9, 67, 32, // Skip to: 13746
/* 5487 */    MCD::OPC_Decode, 212, 12, 155, 1, // Opcode: SRA_W
/* 5492 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5505
/* 5496 */    MCD::OPC_CheckPredicate, 9, 54, 32, // Skip to: 13746
/* 5500 */    MCD::OPC_Decode, 209, 12, 156, 1, // Opcode: SRA_D
/* 5505 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5518
/* 5509 */    MCD::OPC_CheckPredicate, 9, 41, 32, // Skip to: 13746
/* 5513 */    MCD::OPC_Decode, 229, 12, 153, 1, // Opcode: SRL_B
/* 5518 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5531
/* 5522 */    MCD::OPC_CheckPredicate, 9, 28, 32, // Skip to: 13746
/* 5526 */    MCD::OPC_Decode, 231, 12, 154, 1, // Opcode: SRL_H
/* 5531 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5544
/* 5535 */    MCD::OPC_CheckPredicate, 9, 15, 32, // Skip to: 13746
/* 5539 */    MCD::OPC_Decode, 233, 12, 155, 1, // Opcode: SRL_W
/* 5544 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5557
/* 5548 */    MCD::OPC_CheckPredicate, 9, 2, 32, // Skip to: 13746
/* 5552 */    MCD::OPC_Decode, 230, 12, 156, 1, // Opcode: SRL_D
/* 5557 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5570
/* 5561 */    MCD::OPC_CheckPredicate, 9, 245, 31, // Skip to: 13746
/* 5565 */    MCD::OPC_Decode, 202, 1, 153, 1, // Opcode: BCLR_B
/* 5570 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5583
/* 5574 */    MCD::OPC_CheckPredicate, 9, 232, 31, // Skip to: 13746
/* 5578 */    MCD::OPC_Decode, 204, 1, 154, 1, // Opcode: BCLR_H
/* 5583 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5596
/* 5587 */    MCD::OPC_CheckPredicate, 9, 219, 31, // Skip to: 13746
/* 5591 */    MCD::OPC_Decode, 205, 1, 155, 1, // Opcode: BCLR_W
/* 5596 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5609
/* 5600 */    MCD::OPC_CheckPredicate, 9, 206, 31, // Skip to: 13746
/* 5604 */    MCD::OPC_Decode, 203, 1, 156, 1, // Opcode: BCLR_D
/* 5609 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5622
/* 5613 */    MCD::OPC_CheckPredicate, 9, 193, 31, // Skip to: 13746
/* 5617 */    MCD::OPC_Decode, 202, 2, 153, 1, // Opcode: BSET_B
/* 5622 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5635
/* 5626 */    MCD::OPC_CheckPredicate, 9, 180, 31, // Skip to: 13746
/* 5630 */    MCD::OPC_Decode, 204, 2, 154, 1, // Opcode: BSET_H
/* 5635 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5648
/* 5639 */    MCD::OPC_CheckPredicate, 9, 167, 31, // Skip to: 13746
/* 5643 */    MCD::OPC_Decode, 205, 2, 155, 1, // Opcode: BSET_W
/* 5648 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5661
/* 5652 */    MCD::OPC_CheckPredicate, 9, 154, 31, // Skip to: 13746
/* 5656 */    MCD::OPC_Decode, 203, 2, 156, 1, // Opcode: BSET_D
/* 5661 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5674
/* 5665 */    MCD::OPC_CheckPredicate, 9, 141, 31, // Skip to: 13746
/* 5669 */    MCD::OPC_Decode, 167, 2, 153, 1, // Opcode: BNEG_B
/* 5674 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5687
/* 5678 */    MCD::OPC_CheckPredicate, 9, 128, 31, // Skip to: 13746
/* 5682 */    MCD::OPC_Decode, 169, 2, 154, 1, // Opcode: BNEG_H
/* 5687 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5700
/* 5691 */    MCD::OPC_CheckPredicate, 9, 115, 31, // Skip to: 13746
/* 5695 */    MCD::OPC_Decode, 170, 2, 155, 1, // Opcode: BNEG_W
/* 5700 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5713
/* 5704 */    MCD::OPC_CheckPredicate, 9, 102, 31, // Skip to: 13746
/* 5708 */    MCD::OPC_Decode, 168, 2, 156, 1, // Opcode: BNEG_D
/* 5713 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5726
/* 5717 */    MCD::OPC_CheckPredicate, 9, 89, 31, // Skip to: 13746
/* 5721 */    MCD::OPC_Decode, 245, 1, 157, 1, // Opcode: BINSL_B
/* 5726 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5739
/* 5730 */    MCD::OPC_CheckPredicate, 9, 76, 31, // Skip to: 13746
/* 5734 */    MCD::OPC_Decode, 247, 1, 158, 1, // Opcode: BINSL_H
/* 5739 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5752
/* 5743 */    MCD::OPC_CheckPredicate, 9, 63, 31, // Skip to: 13746
/* 5747 */    MCD::OPC_Decode, 248, 1, 159, 1, // Opcode: BINSL_W
/* 5752 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 5765
/* 5756 */    MCD::OPC_CheckPredicate, 9, 50, 31, // Skip to: 13746
/* 5760 */    MCD::OPC_Decode, 246, 1, 160, 1, // Opcode: BINSL_D
/* 5765 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 5778
/* 5769 */    MCD::OPC_CheckPredicate, 9, 37, 31, // Skip to: 13746
/* 5773 */    MCD::OPC_Decode, 253, 1, 157, 1, // Opcode: BINSR_B
/* 5778 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 5791
/* 5782 */    MCD::OPC_CheckPredicate, 9, 24, 31, // Skip to: 13746
/* 5786 */    MCD::OPC_Decode, 255, 1, 158, 1, // Opcode: BINSR_H
/* 5791 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 5804
/* 5795 */    MCD::OPC_CheckPredicate, 9, 11, 31, // Skip to: 13746
/* 5799 */    MCD::OPC_Decode, 128, 2, 159, 1, // Opcode: BINSR_W
/* 5804 */    MCD::OPC_FilterValue, 31, 2, 31, // Skip to: 13746
/* 5808 */    MCD::OPC_CheckPredicate, 9, 254, 30, // Skip to: 13746
/* 5812 */    MCD::OPC_Decode, 254, 1, 160, 1, // Opcode: BINSR_D
/* 5817 */    MCD::OPC_FilterValue, 14, 159, 1, // Skip to: 6236
/* 5821 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5824 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5836
/* 5828 */    MCD::OPC_CheckPredicate, 9, 234, 30, // Skip to: 13746
/* 5832 */    MCD::OPC_Decode, 67, 153, 1, // Opcode: ADDV_B
/* 5836 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5848
/* 5840 */    MCD::OPC_CheckPredicate, 9, 222, 30, // Skip to: 13746
/* 5844 */    MCD::OPC_Decode, 69, 154, 1, // Opcode: ADDV_H
/* 5848 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5860
/* 5852 */    MCD::OPC_CheckPredicate, 9, 210, 30, // Skip to: 13746
/* 5856 */    MCD::OPC_Decode, 70, 155, 1, // Opcode: ADDV_W
/* 5860 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 5872
/* 5864 */    MCD::OPC_CheckPredicate, 9, 198, 30, // Skip to: 13746
/* 5868 */    MCD::OPC_Decode, 68, 156, 1, // Opcode: ADDV_D
/* 5872 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5885
/* 5876 */    MCD::OPC_CheckPredicate, 9, 186, 30, // Skip to: 13746
/* 5880 */    MCD::OPC_Decode, 152, 13, 153, 1, // Opcode: SUBV_B
/* 5885 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5898
/* 5889 */    MCD::OPC_CheckPredicate, 9, 173, 30, // Skip to: 13746
/* 5893 */    MCD::OPC_Decode, 154, 13, 154, 1, // Opcode: SUBV_H
/* 5898 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5911
/* 5902 */    MCD::OPC_CheckPredicate, 9, 160, 30, // Skip to: 13746
/* 5906 */    MCD::OPC_Decode, 155, 13, 155, 1, // Opcode: SUBV_W
/* 5911 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5924
/* 5915 */    MCD::OPC_CheckPredicate, 9, 147, 30, // Skip to: 13746
/* 5919 */    MCD::OPC_Decode, 153, 13, 156, 1, // Opcode: SUBV_D
/* 5924 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5937
/* 5928 */    MCD::OPC_CheckPredicate, 9, 134, 30, // Skip to: 13746
/* 5932 */    MCD::OPC_Decode, 211, 8, 153, 1, // Opcode: MAX_S_B
/* 5937 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5950
/* 5941 */    MCD::OPC_CheckPredicate, 9, 121, 30, // Skip to: 13746
/* 5945 */    MCD::OPC_Decode, 213, 8, 154, 1, // Opcode: MAX_S_H
/* 5950 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5963
/* 5954 */    MCD::OPC_CheckPredicate, 9, 108, 30, // Skip to: 13746
/* 5958 */    MCD::OPC_Decode, 214, 8, 155, 1, // Opcode: MAX_S_W
/* 5963 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5976
/* 5967 */    MCD::OPC_CheckPredicate, 9, 95, 30, // Skip to: 13746
/* 5971 */    MCD::OPC_Decode, 212, 8, 156, 1, // Opcode: MAX_S_D
/* 5976 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5989
/* 5980 */    MCD::OPC_CheckPredicate, 9, 82, 30, // Skip to: 13746
/* 5984 */    MCD::OPC_Decode, 215, 8, 153, 1, // Opcode: MAX_U_B
/* 5989 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6002
/* 5993 */    MCD::OPC_CheckPredicate, 9, 69, 30, // Skip to: 13746
/* 5997 */    MCD::OPC_Decode, 217, 8, 154, 1, // Opcode: MAX_U_H
/* 6002 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6015
/* 6006 */    MCD::OPC_CheckPredicate, 9, 56, 30, // Skip to: 13746
/* 6010 */    MCD::OPC_Decode, 218, 8, 155, 1, // Opcode: MAX_U_W
/* 6015 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6028
/* 6019 */    MCD::OPC_CheckPredicate, 9, 43, 30, // Skip to: 13746
/* 6023 */    MCD::OPC_Decode, 216, 8, 156, 1, // Opcode: MAX_U_D
/* 6028 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6041
/* 6032 */    MCD::OPC_CheckPredicate, 9, 30, 30, // Skip to: 13746
/* 6036 */    MCD::OPC_Decode, 252, 8, 153, 1, // Opcode: MIN_S_B
/* 6041 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6054
/* 6045 */    MCD::OPC_CheckPredicate, 9, 17, 30, // Skip to: 13746
/* 6049 */    MCD::OPC_Decode, 254, 8, 154, 1, // Opcode: MIN_S_H
/* 6054 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6067
/* 6058 */    MCD::OPC_CheckPredicate, 9, 4, 30, // Skip to: 13746
/* 6062 */    MCD::OPC_Decode, 255, 8, 155, 1, // Opcode: MIN_S_W
/* 6067 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6080
/* 6071 */    MCD::OPC_CheckPredicate, 9, 247, 29, // Skip to: 13746
/* 6075 */    MCD::OPC_Decode, 253, 8, 156, 1, // Opcode: MIN_S_D
/* 6080 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6093
/* 6084 */    MCD::OPC_CheckPredicate, 9, 234, 29, // Skip to: 13746
/* 6088 */    MCD::OPC_Decode, 128, 9, 153, 1, // Opcode: MIN_U_B
/* 6093 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6106
/* 6097 */    MCD::OPC_CheckPredicate, 9, 221, 29, // Skip to: 13746
/* 6101 */    MCD::OPC_Decode, 130, 9, 154, 1, // Opcode: MIN_U_H
/* 6106 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6119
/* 6110 */    MCD::OPC_CheckPredicate, 9, 208, 29, // Skip to: 13746
/* 6114 */    MCD::OPC_Decode, 131, 9, 155, 1, // Opcode: MIN_U_W
/* 6119 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6132
/* 6123 */    MCD::OPC_CheckPredicate, 9, 195, 29, // Skip to: 13746
/* 6127 */    MCD::OPC_Decode, 129, 9, 156, 1, // Opcode: MIN_U_D
/* 6132 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6145
/* 6136 */    MCD::OPC_CheckPredicate, 9, 182, 29, // Skip to: 13746
/* 6140 */    MCD::OPC_Decode, 205, 8, 153, 1, // Opcode: MAX_A_B
/* 6145 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6158
/* 6149 */    MCD::OPC_CheckPredicate, 9, 169, 29, // Skip to: 13746
/* 6153 */    MCD::OPC_Decode, 207, 8, 154, 1, // Opcode: MAX_A_H
/* 6158 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6171
/* 6162 */    MCD::OPC_CheckPredicate, 9, 156, 29, // Skip to: 13746
/* 6166 */    MCD::OPC_Decode, 208, 8, 155, 1, // Opcode: MAX_A_W
/* 6171 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6184
/* 6175 */    MCD::OPC_CheckPredicate, 9, 143, 29, // Skip to: 13746
/* 6179 */    MCD::OPC_Decode, 206, 8, 156, 1, // Opcode: MAX_A_D
/* 6184 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6197
/* 6188 */    MCD::OPC_CheckPredicate, 9, 130, 29, // Skip to: 13746
/* 6192 */    MCD::OPC_Decode, 246, 8, 153, 1, // Opcode: MIN_A_B
/* 6197 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6210
/* 6201 */    MCD::OPC_CheckPredicate, 9, 117, 29, // Skip to: 13746
/* 6205 */    MCD::OPC_Decode, 248, 8, 154, 1, // Opcode: MIN_A_H
/* 6210 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6223
/* 6214 */    MCD::OPC_CheckPredicate, 9, 104, 29, // Skip to: 13746
/* 6218 */    MCD::OPC_Decode, 249, 8, 155, 1, // Opcode: MIN_A_W
/* 6223 */    MCD::OPC_FilterValue, 31, 95, 29, // Skip to: 13746
/* 6227 */    MCD::OPC_CheckPredicate, 9, 91, 29, // Skip to: 13746
/* 6231 */    MCD::OPC_Decode, 247, 8, 156, 1, // Opcode: MIN_A_D
/* 6236 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 6503
/* 6240 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6243 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6256
/* 6247 */    MCD::OPC_CheckPredicate, 9, 71, 29, // Skip to: 13746
/* 6251 */    MCD::OPC_Decode, 254, 2, 153, 1, // Opcode: CEQ_B
/* 6256 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6269
/* 6260 */    MCD::OPC_CheckPredicate, 9, 58, 29, // Skip to: 13746
/* 6264 */    MCD::OPC_Decode, 128, 3, 154, 1, // Opcode: CEQ_H
/* 6269 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6282
/* 6273 */    MCD::OPC_CheckPredicate, 9, 45, 29, // Skip to: 13746
/* 6277 */    MCD::OPC_Decode, 129, 3, 155, 1, // Opcode: CEQ_W
/* 6282 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6295
/* 6286 */    MCD::OPC_CheckPredicate, 9, 32, 29, // Skip to: 13746
/* 6290 */    MCD::OPC_Decode, 255, 2, 156, 1, // Opcode: CEQ_D
/* 6295 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6308
/* 6299 */    MCD::OPC_CheckPredicate, 9, 19, 29, // Skip to: 13746
/* 6303 */    MCD::OPC_Decode, 165, 3, 153, 1, // Opcode: CLT_S_B
/* 6308 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6321
/* 6312 */    MCD::OPC_CheckPredicate, 9, 6, 29, // Skip to: 13746
/* 6316 */    MCD::OPC_Decode, 167, 3, 154, 1, // Opcode: CLT_S_H
/* 6321 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6334
/* 6325 */    MCD::OPC_CheckPredicate, 9, 249, 28, // Skip to: 13746
/* 6329 */    MCD::OPC_Decode, 168, 3, 155, 1, // Opcode: CLT_S_W
/* 6334 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6347
/* 6338 */    MCD::OPC_CheckPredicate, 9, 236, 28, // Skip to: 13746
/* 6342 */    MCD::OPC_Decode, 166, 3, 156, 1, // Opcode: CLT_S_D
/* 6347 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6360
/* 6351 */    MCD::OPC_CheckPredicate, 9, 223, 28, // Skip to: 13746
/* 6355 */    MCD::OPC_Decode, 169, 3, 153, 1, // Opcode: CLT_U_B
/* 6360 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6373
/* 6364 */    MCD::OPC_CheckPredicate, 9, 210, 28, // Skip to: 13746
/* 6368 */    MCD::OPC_Decode, 171, 3, 154, 1, // Opcode: CLT_U_H
/* 6373 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6386
/* 6377 */    MCD::OPC_CheckPredicate, 9, 197, 28, // Skip to: 13746
/* 6381 */    MCD::OPC_Decode, 172, 3, 155, 1, // Opcode: CLT_U_W
/* 6386 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6399
/* 6390 */    MCD::OPC_CheckPredicate, 9, 184, 28, // Skip to: 13746
/* 6394 */    MCD::OPC_Decode, 170, 3, 156, 1, // Opcode: CLT_U_D
/* 6399 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6412
/* 6403 */    MCD::OPC_CheckPredicate, 9, 171, 28, // Skip to: 13746
/* 6407 */    MCD::OPC_Decode, 145, 3, 153, 1, // Opcode: CLE_S_B
/* 6412 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6425
/* 6416 */    MCD::OPC_CheckPredicate, 9, 158, 28, // Skip to: 13746
/* 6420 */    MCD::OPC_Decode, 147, 3, 154, 1, // Opcode: CLE_S_H
/* 6425 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6438
/* 6429 */    MCD::OPC_CheckPredicate, 9, 145, 28, // Skip to: 13746
/* 6433 */    MCD::OPC_Decode, 148, 3, 155, 1, // Opcode: CLE_S_W
/* 6438 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6451
/* 6442 */    MCD::OPC_CheckPredicate, 9, 132, 28, // Skip to: 13746
/* 6446 */    MCD::OPC_Decode, 146, 3, 156, 1, // Opcode: CLE_S_D
/* 6451 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6464
/* 6455 */    MCD::OPC_CheckPredicate, 9, 119, 28, // Skip to: 13746
/* 6459 */    MCD::OPC_Decode, 149, 3, 153, 1, // Opcode: CLE_U_B
/* 6464 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6477
/* 6468 */    MCD::OPC_CheckPredicate, 9, 106, 28, // Skip to: 13746
/* 6472 */    MCD::OPC_Decode, 151, 3, 154, 1, // Opcode: CLE_U_H
/* 6477 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6490
/* 6481 */    MCD::OPC_CheckPredicate, 9, 93, 28, // Skip to: 13746
/* 6485 */    MCD::OPC_Decode, 152, 3, 155, 1, // Opcode: CLE_U_W
/* 6490 */    MCD::OPC_FilterValue, 23, 84, 28, // Skip to: 13746
/* 6494 */    MCD::OPC_CheckPredicate, 9, 80, 28, // Skip to: 13746
/* 6498 */    MCD::OPC_Decode, 150, 3, 156, 1, // Opcode: CLE_U_D
/* 6503 */    MCD::OPC_FilterValue, 16, 147, 1, // Skip to: 6910
/* 6507 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6510 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6522
/* 6514 */    MCD::OPC_CheckPredicate, 9, 60, 28, // Skip to: 13746
/* 6518 */    MCD::OPC_Decode, 72, 153, 1, // Opcode: ADD_A_B
/* 6522 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6534
/* 6526 */    MCD::OPC_CheckPredicate, 9, 48, 28, // Skip to: 13746
/* 6530 */    MCD::OPC_Decode, 74, 154, 1, // Opcode: ADD_A_H
/* 6534 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6546
/* 6538 */    MCD::OPC_CheckPredicate, 9, 36, 28, // Skip to: 13746
/* 6542 */    MCD::OPC_Decode, 75, 155, 1, // Opcode: ADD_A_W
/* 6546 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6558
/* 6550 */    MCD::OPC_CheckPredicate, 9, 24, 28, // Skip to: 13746
/* 6554 */    MCD::OPC_Decode, 73, 156, 1, // Opcode: ADD_A_D
/* 6558 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6570
/* 6562 */    MCD::OPC_CheckPredicate, 9, 12, 28, // Skip to: 13746
/* 6566 */    MCD::OPC_Decode, 43, 153, 1, // Opcode: ADDS_A_B
/* 6570 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6582
/* 6574 */    MCD::OPC_CheckPredicate, 9, 0, 28, // Skip to: 13746
/* 6578 */    MCD::OPC_Decode, 45, 154, 1, // Opcode: ADDS_A_H
/* 6582 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6594
/* 6586 */    MCD::OPC_CheckPredicate, 9, 244, 27, // Skip to: 13746
/* 6590 */    MCD::OPC_Decode, 46, 155, 1, // Opcode: ADDS_A_W
/* 6594 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6606
/* 6598 */    MCD::OPC_CheckPredicate, 9, 232, 27, // Skip to: 13746
/* 6602 */    MCD::OPC_Decode, 44, 156, 1, // Opcode: ADDS_A_D
/* 6606 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6618
/* 6610 */    MCD::OPC_CheckPredicate, 9, 220, 27, // Skip to: 13746
/* 6614 */    MCD::OPC_Decode, 47, 153, 1, // Opcode: ADDS_S_B
/* 6618 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6630
/* 6622 */    MCD::OPC_CheckPredicate, 9, 208, 27, // Skip to: 13746
/* 6626 */    MCD::OPC_Decode, 49, 154, 1, // Opcode: ADDS_S_H
/* 6630 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6642
/* 6634 */    MCD::OPC_CheckPredicate, 9, 196, 27, // Skip to: 13746
/* 6638 */    MCD::OPC_Decode, 50, 155, 1, // Opcode: ADDS_S_W
/* 6642 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6654
/* 6646 */    MCD::OPC_CheckPredicate, 9, 184, 27, // Skip to: 13746
/* 6650 */    MCD::OPC_Decode, 48, 156, 1, // Opcode: ADDS_S_D
/* 6654 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6666
/* 6658 */    MCD::OPC_CheckPredicate, 9, 172, 27, // Skip to: 13746
/* 6662 */    MCD::OPC_Decode, 51, 153, 1, // Opcode: ADDS_U_B
/* 6666 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6678
/* 6670 */    MCD::OPC_CheckPredicate, 9, 160, 27, // Skip to: 13746
/* 6674 */    MCD::OPC_Decode, 53, 154, 1, // Opcode: ADDS_U_H
/* 6678 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6690
/* 6682 */    MCD::OPC_CheckPredicate, 9, 148, 27, // Skip to: 13746
/* 6686 */    MCD::OPC_Decode, 54, 155, 1, // Opcode: ADDS_U_W
/* 6690 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6702
/* 6694 */    MCD::OPC_CheckPredicate, 9, 136, 27, // Skip to: 13746
/* 6698 */    MCD::OPC_Decode, 52, 156, 1, // Opcode: ADDS_U_D
/* 6702 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6715
/* 6706 */    MCD::OPC_CheckPredicate, 9, 124, 27, // Skip to: 13746
/* 6710 */    MCD::OPC_Decode, 158, 1, 153, 1, // Opcode: AVE_S_B
/* 6715 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6728
/* 6719 */    MCD::OPC_CheckPredicate, 9, 111, 27, // Skip to: 13746
/* 6723 */    MCD::OPC_Decode, 160, 1, 154, 1, // Opcode: AVE_S_H
/* 6728 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6741
/* 6732 */    MCD::OPC_CheckPredicate, 9, 98, 27, // Skip to: 13746
/* 6736 */    MCD::OPC_Decode, 161, 1, 155, 1, // Opcode: AVE_S_W
/* 6741 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6754
/* 6745 */    MCD::OPC_CheckPredicate, 9, 85, 27, // Skip to: 13746
/* 6749 */    MCD::OPC_Decode, 159, 1, 156, 1, // Opcode: AVE_S_D
/* 6754 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6767
/* 6758 */    MCD::OPC_CheckPredicate, 9, 72, 27, // Skip to: 13746
/* 6762 */    MCD::OPC_Decode, 162, 1, 153, 1, // Opcode: AVE_U_B
/* 6767 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6780
/* 6771 */    MCD::OPC_CheckPredicate, 9, 59, 27, // Skip to: 13746
/* 6775 */    MCD::OPC_Decode, 164, 1, 154, 1, // Opcode: AVE_U_H
/* 6780 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6793
/* 6784 */    MCD::OPC_CheckPredicate, 9, 46, 27, // Skip to: 13746
/* 6788 */    MCD::OPC_Decode, 165, 1, 155, 1, // Opcode: AVE_U_W
/* 6793 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6806
/* 6797 */    MCD::OPC_CheckPredicate, 9, 33, 27, // Skip to: 13746
/* 6801 */    MCD::OPC_Decode, 163, 1, 156, 1, // Opcode: AVE_U_D
/* 6806 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6819
/* 6810 */    MCD::OPC_CheckPredicate, 9, 20, 27, // Skip to: 13746
/* 6814 */    MCD::OPC_Decode, 150, 1, 153, 1, // Opcode: AVER_S_B
/* 6819 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6832
/* 6823 */    MCD::OPC_CheckPredicate, 9, 7, 27, // Skip to: 13746
/* 6827 */    MCD::OPC_Decode, 152, 1, 154, 1, // Opcode: AVER_S_H
/* 6832 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6845
/* 6836 */    MCD::OPC_CheckPredicate, 9, 250, 26, // Skip to: 13746
/* 6840 */    MCD::OPC_Decode, 153, 1, 155, 1, // Opcode: AVER_S_W
/* 6845 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6858
/* 6849 */    MCD::OPC_CheckPredicate, 9, 237, 26, // Skip to: 13746
/* 6853 */    MCD::OPC_Decode, 151, 1, 156, 1, // Opcode: AVER_S_D
/* 6858 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6871
/* 6862 */    MCD::OPC_CheckPredicate, 9, 224, 26, // Skip to: 13746
/* 6866 */    MCD::OPC_Decode, 154, 1, 153, 1, // Opcode: AVER_U_B
/* 6871 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6884
/* 6875 */    MCD::OPC_CheckPredicate, 9, 211, 26, // Skip to: 13746
/* 6879 */    MCD::OPC_Decode, 156, 1, 154, 1, // Opcode: AVER_U_H
/* 6884 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6897
/* 6888 */    MCD::OPC_CheckPredicate, 9, 198, 26, // Skip to: 13746
/* 6892 */    MCD::OPC_Decode, 157, 1, 155, 1, // Opcode: AVER_U_W
/* 6897 */    MCD::OPC_FilterValue, 31, 189, 26, // Skip to: 13746
/* 6901 */    MCD::OPC_CheckPredicate, 9, 185, 26, // Skip to: 13746
/* 6905 */    MCD::OPC_Decode, 155, 1, 156, 1, // Opcode: AVER_U_D
/* 6910 */    MCD::OPC_FilterValue, 17, 51, 1, // Skip to: 7221
/* 6914 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6917 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6930
/* 6921 */    MCD::OPC_CheckPredicate, 9, 165, 26, // Skip to: 13746
/* 6925 */    MCD::OPC_Decode, 132, 13, 153, 1, // Opcode: SUBS_S_B
/* 6930 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6943
/* 6934 */    MCD::OPC_CheckPredicate, 9, 152, 26, // Skip to: 13746
/* 6938 */    MCD::OPC_Decode, 134, 13, 154, 1, // Opcode: SUBS_S_H
/* 6943 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6956
/* 6947 */    MCD::OPC_CheckPredicate, 9, 139, 26, // Skip to: 13746
/* 6951 */    MCD::OPC_Decode, 135, 13, 155, 1, // Opcode: SUBS_S_W
/* 6956 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6969
/* 6960 */    MCD::OPC_CheckPredicate, 9, 126, 26, // Skip to: 13746
/* 6964 */    MCD::OPC_Decode, 133, 13, 156, 1, // Opcode: SUBS_S_D
/* 6969 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6982
/* 6973 */    MCD::OPC_CheckPredicate, 9, 113, 26, // Skip to: 13746
/* 6977 */    MCD::OPC_Decode, 136, 13, 153, 1, // Opcode: SUBS_U_B
/* 6982 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6995
/* 6986 */    MCD::OPC_CheckPredicate, 9, 100, 26, // Skip to: 13746
/* 6990 */    MCD::OPC_Decode, 138, 13, 154, 1, // Opcode: SUBS_U_H
/* 6995 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7008
/* 6999 */    MCD::OPC_CheckPredicate, 9, 87, 26, // Skip to: 13746
/* 7003 */    MCD::OPC_Decode, 139, 13, 155, 1, // Opcode: SUBS_U_W
/* 7008 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7021
/* 7012 */    MCD::OPC_CheckPredicate, 9, 74, 26, // Skip to: 13746
/* 7016 */    MCD::OPC_Decode, 137, 13, 156, 1, // Opcode: SUBS_U_D
/* 7021 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7034
/* 7025 */    MCD::OPC_CheckPredicate, 9, 61, 26, // Skip to: 13746
/* 7029 */    MCD::OPC_Decode, 252, 12, 153, 1, // Opcode: SUBSUS_U_B
/* 7034 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7047
/* 7038 */    MCD::OPC_CheckPredicate, 9, 48, 26, // Skip to: 13746
/* 7042 */    MCD::OPC_Decode, 254, 12, 154, 1, // Opcode: SUBSUS_U_H
/* 7047 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7060
/* 7051 */    MCD::OPC_CheckPredicate, 9, 35, 26, // Skip to: 13746
/* 7055 */    MCD::OPC_Decode, 255, 12, 155, 1, // Opcode: SUBSUS_U_W
/* 7060 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7073
/* 7064 */    MCD::OPC_CheckPredicate, 9, 22, 26, // Skip to: 13746
/* 7068 */    MCD::OPC_Decode, 253, 12, 156, 1, // Opcode: SUBSUS_U_D
/* 7073 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7086
/* 7077 */    MCD::OPC_CheckPredicate, 9, 9, 26, // Skip to: 13746
/* 7081 */    MCD::OPC_Decode, 128, 13, 153, 1, // Opcode: SUBSUU_S_B
/* 7086 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7099
/* 7090 */    MCD::OPC_CheckPredicate, 9, 252, 25, // Skip to: 13746
/* 7094 */    MCD::OPC_Decode, 130, 13, 154, 1, // Opcode: SUBSUU_S_H
/* 7099 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7112
/* 7103 */    MCD::OPC_CheckPredicate, 9, 239, 25, // Skip to: 13746
/* 7107 */    MCD::OPC_Decode, 131, 13, 155, 1, // Opcode: SUBSUU_S_W
/* 7112 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7125
/* 7116 */    MCD::OPC_CheckPredicate, 9, 226, 25, // Skip to: 13746
/* 7120 */    MCD::OPC_Decode, 129, 13, 156, 1, // Opcode: SUBSUU_S_D
/* 7125 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7137
/* 7129 */    MCD::OPC_CheckPredicate, 9, 213, 25, // Skip to: 13746
/* 7133 */    MCD::OPC_Decode, 106, 153, 1, // Opcode: ASUB_S_B
/* 7137 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7149
/* 7141 */    MCD::OPC_CheckPredicate, 9, 201, 25, // Skip to: 13746
/* 7145 */    MCD::OPC_Decode, 108, 154, 1, // Opcode: ASUB_S_H
/* 7149 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7161
/* 7153 */    MCD::OPC_CheckPredicate, 9, 189, 25, // Skip to: 13746
/* 7157 */    MCD::OPC_Decode, 109, 155, 1, // Opcode: ASUB_S_W
/* 7161 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7173
/* 7165 */    MCD::OPC_CheckPredicate, 9, 177, 25, // Skip to: 13746
/* 7169 */    MCD::OPC_Decode, 107, 156, 1, // Opcode: ASUB_S_D
/* 7173 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7185
/* 7177 */    MCD::OPC_CheckPredicate, 9, 165, 25, // Skip to: 13746
/* 7181 */    MCD::OPC_Decode, 110, 153, 1, // Opcode: ASUB_U_B
/* 7185 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7197
/* 7189 */    MCD::OPC_CheckPredicate, 9, 153, 25, // Skip to: 13746
/* 7193 */    MCD::OPC_Decode, 112, 154, 1, // Opcode: ASUB_U_H
/* 7197 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7209
/* 7201 */    MCD::OPC_CheckPredicate, 9, 141, 25, // Skip to: 13746
/* 7205 */    MCD::OPC_Decode, 113, 155, 1, // Opcode: ASUB_U_W
/* 7209 */    MCD::OPC_FilterValue, 23, 133, 25, // Skip to: 13746
/* 7213 */    MCD::OPC_CheckPredicate, 9, 129, 25, // Skip to: 13746
/* 7217 */    MCD::OPC_Decode, 111, 156, 1, // Opcode: ASUB_U_D
/* 7221 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 7592
/* 7225 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7228 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7241
/* 7232 */    MCD::OPC_CheckPredicate, 9, 110, 25, // Skip to: 13746
/* 7236 */    MCD::OPC_Decode, 130, 10, 153, 1, // Opcode: MULV_B
/* 7241 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7254
/* 7245 */    MCD::OPC_CheckPredicate, 9, 97, 25, // Skip to: 13746
/* 7249 */    MCD::OPC_Decode, 132, 10, 154, 1, // Opcode: MULV_H
/* 7254 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7267
/* 7258 */    MCD::OPC_CheckPredicate, 9, 84, 25, // Skip to: 13746
/* 7262 */    MCD::OPC_Decode, 133, 10, 155, 1, // Opcode: MULV_W
/* 7267 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7280
/* 7271 */    MCD::OPC_CheckPredicate, 9, 71, 25, // Skip to: 13746
/* 7275 */    MCD::OPC_Decode, 131, 10, 156, 1, // Opcode: MULV_D
/* 7280 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7293
/* 7284 */    MCD::OPC_CheckPredicate, 9, 58, 25, // Skip to: 13746
/* 7288 */    MCD::OPC_Decode, 178, 8, 157, 1, // Opcode: MADDV_B
/* 7293 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7306
/* 7297 */    MCD::OPC_CheckPredicate, 9, 45, 25, // Skip to: 13746
/* 7301 */    MCD::OPC_Decode, 180, 8, 158, 1, // Opcode: MADDV_H
/* 7306 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7319
/* 7310 */    MCD::OPC_CheckPredicate, 9, 32, 25, // Skip to: 13746
/* 7314 */    MCD::OPC_Decode, 181, 8, 159, 1, // Opcode: MADDV_W
/* 7319 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7332
/* 7323 */    MCD::OPC_CheckPredicate, 9, 19, 25, // Skip to: 13746
/* 7327 */    MCD::OPC_Decode, 179, 8, 160, 1, // Opcode: MADDV_D
/* 7332 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7345
/* 7336 */    MCD::OPC_CheckPredicate, 9, 6, 25, // Skip to: 13746
/* 7340 */    MCD::OPC_Decode, 198, 9, 157, 1, // Opcode: MSUBV_B
/* 7345 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7358
/* 7349 */    MCD::OPC_CheckPredicate, 9, 249, 24, // Skip to: 13746
/* 7353 */    MCD::OPC_Decode, 200, 9, 158, 1, // Opcode: MSUBV_H
/* 7358 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7371
/* 7362 */    MCD::OPC_CheckPredicate, 9, 236, 24, // Skip to: 13746
/* 7366 */    MCD::OPC_Decode, 201, 9, 159, 1, // Opcode: MSUBV_W
/* 7371 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7384
/* 7375 */    MCD::OPC_CheckPredicate, 9, 223, 24, // Skip to: 13746
/* 7379 */    MCD::OPC_Decode, 199, 9, 160, 1, // Opcode: MSUBV_D
/* 7384 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7397
/* 7388 */    MCD::OPC_CheckPredicate, 9, 210, 24, // Skip to: 13746
/* 7392 */    MCD::OPC_Decode, 209, 4, 153, 1, // Opcode: DIV_S_B
/* 7397 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7410
/* 7401 */    MCD::OPC_CheckPredicate, 9, 197, 24, // Skip to: 13746
/* 7405 */    MCD::OPC_Decode, 211, 4, 154, 1, // Opcode: DIV_S_H
/* 7410 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7423
/* 7414 */    MCD::OPC_CheckPredicate, 9, 184, 24, // Skip to: 13746
/* 7418 */    MCD::OPC_Decode, 212, 4, 155, 1, // Opcode: DIV_S_W
/* 7423 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7436
/* 7427 */    MCD::OPC_CheckPredicate, 9, 171, 24, // Skip to: 13746
/* 7431 */    MCD::OPC_Decode, 210, 4, 156, 1, // Opcode: DIV_S_D
/* 7436 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7449
/* 7440 */    MCD::OPC_CheckPredicate, 9, 158, 24, // Skip to: 13746
/* 7444 */    MCD::OPC_Decode, 213, 4, 153, 1, // Opcode: DIV_U_B
/* 7449 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7462
/* 7453 */    MCD::OPC_CheckPredicate, 9, 145, 24, // Skip to: 13746
/* 7457 */    MCD::OPC_Decode, 215, 4, 154, 1, // Opcode: DIV_U_H
/* 7462 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7475
/* 7466 */    MCD::OPC_CheckPredicate, 9, 132, 24, // Skip to: 13746
/* 7470 */    MCD::OPC_Decode, 216, 4, 155, 1, // Opcode: DIV_U_W
/* 7475 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7488
/* 7479 */    MCD::OPC_CheckPredicate, 9, 119, 24, // Skip to: 13746
/* 7483 */    MCD::OPC_Decode, 214, 4, 156, 1, // Opcode: DIV_U_D
/* 7488 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7501
/* 7492 */    MCD::OPC_CheckPredicate, 9, 106, 24, // Skip to: 13746
/* 7496 */    MCD::OPC_Decode, 139, 9, 153, 1, // Opcode: MOD_S_B
/* 7501 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7514
/* 7505 */    MCD::OPC_CheckPredicate, 9, 93, 24, // Skip to: 13746
/* 7509 */    MCD::OPC_Decode, 141, 9, 154, 1, // Opcode: MOD_S_H
/* 7514 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7527
/* 7518 */    MCD::OPC_CheckPredicate, 9, 80, 24, // Skip to: 13746
/* 7522 */    MCD::OPC_Decode, 142, 9, 155, 1, // Opcode: MOD_S_W
/* 7527 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7540
/* 7531 */    MCD::OPC_CheckPredicate, 9, 67, 24, // Skip to: 13746
/* 7535 */    MCD::OPC_Decode, 140, 9, 156, 1, // Opcode: MOD_S_D
/* 7540 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7553
/* 7544 */    MCD::OPC_CheckPredicate, 9, 54, 24, // Skip to: 13746
/* 7548 */    MCD::OPC_Decode, 143, 9, 153, 1, // Opcode: MOD_U_B
/* 7553 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7566
/* 7557 */    MCD::OPC_CheckPredicate, 9, 41, 24, // Skip to: 13746
/* 7561 */    MCD::OPC_Decode, 145, 9, 154, 1, // Opcode: MOD_U_H
/* 7566 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7579
/* 7570 */    MCD::OPC_CheckPredicate, 9, 28, 24, // Skip to: 13746
/* 7574 */    MCD::OPC_Decode, 146, 9, 155, 1, // Opcode: MOD_U_W
/* 7579 */    MCD::OPC_FilterValue, 31, 19, 24, // Skip to: 13746
/* 7583 */    MCD::OPC_CheckPredicate, 9, 15, 24, // Skip to: 13746
/* 7587 */    MCD::OPC_Decode, 144, 9, 156, 1, // Opcode: MOD_U_D
/* 7592 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 7833
/* 7596 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7599 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7612
/* 7603 */    MCD::OPC_CheckPredicate, 9, 251, 23, // Skip to: 13746
/* 7607 */    MCD::OPC_Decode, 238, 4, 161, 1, // Opcode: DOTP_S_H
/* 7612 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7625
/* 7616 */    MCD::OPC_CheckPredicate, 9, 238, 23, // Skip to: 13746
/* 7620 */    MCD::OPC_Decode, 239, 4, 162, 1, // Opcode: DOTP_S_W
/* 7625 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7638
/* 7629 */    MCD::OPC_CheckPredicate, 9, 225, 23, // Skip to: 13746
/* 7633 */    MCD::OPC_Decode, 237, 4, 163, 1, // Opcode: DOTP_S_D
/* 7638 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7651
/* 7642 */    MCD::OPC_CheckPredicate, 9, 212, 23, // Skip to: 13746
/* 7646 */    MCD::OPC_Decode, 241, 4, 161, 1, // Opcode: DOTP_U_H
/* 7651 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7664
/* 7655 */    MCD::OPC_CheckPredicate, 9, 199, 23, // Skip to: 13746
/* 7659 */    MCD::OPC_Decode, 242, 4, 162, 1, // Opcode: DOTP_U_W
/* 7664 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7677
/* 7668 */    MCD::OPC_CheckPredicate, 9, 186, 23, // Skip to: 13746
/* 7672 */    MCD::OPC_Decode, 240, 4, 163, 1, // Opcode: DOTP_U_D
/* 7677 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7690
/* 7681 */    MCD::OPC_CheckPredicate, 9, 173, 23, // Skip to: 13746
/* 7685 */    MCD::OPC_Decode, 244, 4, 164, 1, // Opcode: DPADD_S_H
/* 7690 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7703
/* 7694 */    MCD::OPC_CheckPredicate, 9, 160, 23, // Skip to: 13746
/* 7698 */    MCD::OPC_Decode, 245, 4, 165, 1, // Opcode: DPADD_S_W
/* 7703 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7716
/* 7707 */    MCD::OPC_CheckPredicate, 9, 147, 23, // Skip to: 13746
/* 7711 */    MCD::OPC_Decode, 243, 4, 166, 1, // Opcode: DPADD_S_D
/* 7716 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7729
/* 7720 */    MCD::OPC_CheckPredicate, 9, 134, 23, // Skip to: 13746
/* 7724 */    MCD::OPC_Decode, 247, 4, 164, 1, // Opcode: DPADD_U_H
/* 7729 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7742
/* 7733 */    MCD::OPC_CheckPredicate, 9, 121, 23, // Skip to: 13746
/* 7737 */    MCD::OPC_Decode, 248, 4, 165, 1, // Opcode: DPADD_U_W
/* 7742 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7755
/* 7746 */    MCD::OPC_CheckPredicate, 9, 108, 23, // Skip to: 13746
/* 7750 */    MCD::OPC_Decode, 246, 4, 166, 1, // Opcode: DPADD_U_D
/* 7755 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7768
/* 7759 */    MCD::OPC_CheckPredicate, 9, 95, 23, // Skip to: 13746
/* 7763 */    MCD::OPC_Decode, 135, 5, 164, 1, // Opcode: DPSUB_S_H
/* 7768 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7781
/* 7772 */    MCD::OPC_CheckPredicate, 9, 82, 23, // Skip to: 13746
/* 7776 */    MCD::OPC_Decode, 136, 5, 165, 1, // Opcode: DPSUB_S_W
/* 7781 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7794
/* 7785 */    MCD::OPC_CheckPredicate, 9, 69, 23, // Skip to: 13746
/* 7789 */    MCD::OPC_Decode, 134, 5, 166, 1, // Opcode: DPSUB_S_D
/* 7794 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7807
/* 7798 */    MCD::OPC_CheckPredicate, 9, 56, 23, // Skip to: 13746
/* 7802 */    MCD::OPC_Decode, 138, 5, 164, 1, // Opcode: DPSUB_U_H
/* 7807 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7820
/* 7811 */    MCD::OPC_CheckPredicate, 9, 43, 23, // Skip to: 13746
/* 7815 */    MCD::OPC_Decode, 139, 5, 165, 1, // Opcode: DPSUB_U_W
/* 7820 */    MCD::OPC_FilterValue, 23, 34, 23, // Skip to: 13746
/* 7824 */    MCD::OPC_CheckPredicate, 9, 30, 23, // Skip to: 13746
/* 7828 */    MCD::OPC_Decode, 137, 5, 166, 1, // Opcode: DPSUB_U_D
/* 7833 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 8256
/* 7837 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7840 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7853
/* 7844 */    MCD::OPC_CheckPredicate, 9, 10, 23, // Skip to: 13746
/* 7848 */    MCD::OPC_Decode, 147, 12, 167, 1, // Opcode: SLD_B
/* 7853 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7866
/* 7857 */    MCD::OPC_CheckPredicate, 9, 253, 22, // Skip to: 13746
/* 7861 */    MCD::OPC_Decode, 149, 12, 168, 1, // Opcode: SLD_H
/* 7866 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7879
/* 7870 */    MCD::OPC_CheckPredicate, 9, 240, 22, // Skip to: 13746
/* 7874 */    MCD::OPC_Decode, 150, 12, 169, 1, // Opcode: SLD_W
/* 7879 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7892
/* 7883 */    MCD::OPC_CheckPredicate, 9, 227, 22, // Skip to: 13746
/* 7887 */    MCD::OPC_Decode, 148, 12, 170, 1, // Opcode: SLD_D
/* 7892 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7905
/* 7896 */    MCD::OPC_CheckPredicate, 9, 214, 22, // Skip to: 13746
/* 7900 */    MCD::OPC_Decode, 189, 12, 171, 1, // Opcode: SPLAT_B
/* 7905 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7918
/* 7909 */    MCD::OPC_CheckPredicate, 9, 201, 22, // Skip to: 13746
/* 7913 */    MCD::OPC_Decode, 191, 12, 172, 1, // Opcode: SPLAT_H
/* 7918 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7931
/* 7922 */    MCD::OPC_CheckPredicate, 9, 188, 22, // Skip to: 13746
/* 7926 */    MCD::OPC_Decode, 192, 12, 173, 1, // Opcode: SPLAT_W
/* 7931 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7944
/* 7935 */    MCD::OPC_CheckPredicate, 9, 175, 22, // Skip to: 13746
/* 7939 */    MCD::OPC_Decode, 190, 12, 174, 1, // Opcode: SPLAT_D
/* 7944 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7957
/* 7948 */    MCD::OPC_CheckPredicate, 9, 162, 22, // Skip to: 13746
/* 7952 */    MCD::OPC_Decode, 198, 10, 153, 1, // Opcode: PCKEV_B
/* 7957 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7970
/* 7961 */    MCD::OPC_CheckPredicate, 9, 149, 22, // Skip to: 13746
/* 7965 */    MCD::OPC_Decode, 200, 10, 154, 1, // Opcode: PCKEV_H
/* 7970 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7983
/* 7974 */    MCD::OPC_CheckPredicate, 9, 136, 22, // Skip to: 13746
/* 7978 */    MCD::OPC_Decode, 201, 10, 155, 1, // Opcode: PCKEV_W
/* 7983 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7996
/* 7987 */    MCD::OPC_CheckPredicate, 9, 123, 22, // Skip to: 13746
/* 7991 */    MCD::OPC_Decode, 199, 10, 156, 1, // Opcode: PCKEV_D
/* 7996 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8009
/* 8000 */    MCD::OPC_CheckPredicate, 9, 110, 22, // Skip to: 13746
/* 8004 */    MCD::OPC_Decode, 202, 10, 153, 1, // Opcode: PCKOD_B
/* 8009 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8022
/* 8013 */    MCD::OPC_CheckPredicate, 9, 97, 22, // Skip to: 13746
/* 8017 */    MCD::OPC_Decode, 204, 10, 154, 1, // Opcode: PCKOD_H
/* 8022 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8035
/* 8026 */    MCD::OPC_CheckPredicate, 9, 84, 22, // Skip to: 13746
/* 8030 */    MCD::OPC_Decode, 205, 10, 155, 1, // Opcode: PCKOD_W
/* 8035 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8048
/* 8039 */    MCD::OPC_CheckPredicate, 9, 71, 22, // Skip to: 13746
/* 8043 */    MCD::OPC_Decode, 203, 10, 156, 1, // Opcode: PCKOD_D
/* 8048 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8061
/* 8052 */    MCD::OPC_CheckPredicate, 9, 58, 22, // Skip to: 13746
/* 8056 */    MCD::OPC_Decode, 246, 6, 153, 1, // Opcode: ILVL_B
/* 8061 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8074
/* 8065 */    MCD::OPC_CheckPredicate, 9, 45, 22, // Skip to: 13746
/* 8069 */    MCD::OPC_Decode, 248, 6, 154, 1, // Opcode: ILVL_H
/* 8074 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8087
/* 8078 */    MCD::OPC_CheckPredicate, 9, 32, 22, // Skip to: 13746
/* 8082 */    MCD::OPC_Decode, 249, 6, 155, 1, // Opcode: ILVL_W
/* 8087 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8100
/* 8091 */    MCD::OPC_CheckPredicate, 9, 19, 22, // Skip to: 13746
/* 8095 */    MCD::OPC_Decode, 247, 6, 156, 1, // Opcode: ILVL_D
/* 8100 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8113
/* 8104 */    MCD::OPC_CheckPredicate, 9, 6, 22, // Skip to: 13746
/* 8108 */    MCD::OPC_Decode, 254, 6, 153, 1, // Opcode: ILVR_B
/* 8113 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8126
/* 8117 */    MCD::OPC_CheckPredicate, 9, 249, 21, // Skip to: 13746
/* 8121 */    MCD::OPC_Decode, 128, 7, 154, 1, // Opcode: ILVR_H
/* 8126 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8139
/* 8130 */    MCD::OPC_CheckPredicate, 9, 236, 21, // Skip to: 13746
/* 8134 */    MCD::OPC_Decode, 129, 7, 155, 1, // Opcode: ILVR_W
/* 8139 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8152
/* 8143 */    MCD::OPC_CheckPredicate, 9, 223, 21, // Skip to: 13746
/* 8147 */    MCD::OPC_Decode, 255, 6, 156, 1, // Opcode: ILVR_D
/* 8152 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8165
/* 8156 */    MCD::OPC_CheckPredicate, 9, 210, 21, // Skip to: 13746
/* 8160 */    MCD::OPC_Decode, 242, 6, 153, 1, // Opcode: ILVEV_B
/* 8165 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8178
/* 8169 */    MCD::OPC_CheckPredicate, 9, 197, 21, // Skip to: 13746
/* 8173 */    MCD::OPC_Decode, 244, 6, 154, 1, // Opcode: ILVEV_H
/* 8178 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8191
/* 8182 */    MCD::OPC_CheckPredicate, 9, 184, 21, // Skip to: 13746
/* 8186 */    MCD::OPC_Decode, 245, 6, 155, 1, // Opcode: ILVEV_W
/* 8191 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8204
/* 8195 */    MCD::OPC_CheckPredicate, 9, 171, 21, // Skip to: 13746
/* 8199 */    MCD::OPC_Decode, 243, 6, 156, 1, // Opcode: ILVEV_D
/* 8204 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8217
/* 8208 */    MCD::OPC_CheckPredicate, 9, 158, 21, // Skip to: 13746
/* 8212 */    MCD::OPC_Decode, 250, 6, 153, 1, // Opcode: ILVOD_B
/* 8217 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8230
/* 8221 */    MCD::OPC_CheckPredicate, 9, 145, 21, // Skip to: 13746
/* 8225 */    MCD::OPC_Decode, 252, 6, 154, 1, // Opcode: ILVOD_H
/* 8230 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8243
/* 8234 */    MCD::OPC_CheckPredicate, 9, 132, 21, // Skip to: 13746
/* 8238 */    MCD::OPC_Decode, 253, 6, 155, 1, // Opcode: ILVOD_W
/* 8243 */    MCD::OPC_FilterValue, 31, 123, 21, // Skip to: 13746
/* 8247 */    MCD::OPC_CheckPredicate, 9, 119, 21, // Skip to: 13746
/* 8251 */    MCD::OPC_Decode, 251, 6, 156, 1, // Opcode: ILVOD_D
/* 8256 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 8575
/* 8260 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8263 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8276
/* 8267 */    MCD::OPC_CheckPredicate, 9, 99, 21, // Skip to: 13746
/* 8271 */    MCD::OPC_Decode, 157, 14, 157, 1, // Opcode: VSHF_B
/* 8276 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8289
/* 8280 */    MCD::OPC_CheckPredicate, 9, 86, 21, // Skip to: 13746
/* 8284 */    MCD::OPC_Decode, 159, 14, 158, 1, // Opcode: VSHF_H
/* 8289 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8302
/* 8293 */    MCD::OPC_CheckPredicate, 9, 73, 21, // Skip to: 13746
/* 8297 */    MCD::OPC_Decode, 160, 14, 159, 1, // Opcode: VSHF_W
/* 8302 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8315
/* 8306 */    MCD::OPC_CheckPredicate, 9, 60, 21, // Skip to: 13746
/* 8310 */    MCD::OPC_Decode, 158, 14, 160, 1, // Opcode: VSHF_D
/* 8315 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8328
/* 8319 */    MCD::OPC_CheckPredicate, 9, 47, 21, // Skip to: 13746
/* 8323 */    MCD::OPC_Decode, 202, 12, 153, 1, // Opcode: SRAR_B
/* 8328 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8341
/* 8332 */    MCD::OPC_CheckPredicate, 9, 34, 21, // Skip to: 13746
/* 8336 */    MCD::OPC_Decode, 204, 12, 154, 1, // Opcode: SRAR_H
/* 8341 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8354
/* 8345 */    MCD::OPC_CheckPredicate, 9, 21, 21, // Skip to: 13746
/* 8349 */    MCD::OPC_Decode, 205, 12, 155, 1, // Opcode: SRAR_W
/* 8354 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8367
/* 8358 */    MCD::OPC_CheckPredicate, 9, 8, 21, // Skip to: 13746
/* 8362 */    MCD::OPC_Decode, 203, 12, 156, 1, // Opcode: SRAR_D
/* 8367 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8380
/* 8371 */    MCD::OPC_CheckPredicate, 9, 251, 20, // Skip to: 13746
/* 8375 */    MCD::OPC_Decode, 223, 12, 153, 1, // Opcode: SRLR_B
/* 8380 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8393
/* 8384 */    MCD::OPC_CheckPredicate, 9, 238, 20, // Skip to: 13746
/* 8388 */    MCD::OPC_Decode, 225, 12, 154, 1, // Opcode: SRLR_H
/* 8393 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8406
/* 8397 */    MCD::OPC_CheckPredicate, 9, 225, 20, // Skip to: 13746
/* 8401 */    MCD::OPC_Decode, 226, 12, 155, 1, // Opcode: SRLR_W
/* 8406 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8419
/* 8410 */    MCD::OPC_CheckPredicate, 9, 212, 20, // Skip to: 13746
/* 8414 */    MCD::OPC_Decode, 224, 12, 156, 1, // Opcode: SRLR_D
/* 8419 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8432
/* 8423 */    MCD::OPC_CheckPredicate, 9, 199, 20, // Skip to: 13746
/* 8427 */    MCD::OPC_Decode, 231, 6, 161, 1, // Opcode: HADD_S_H
/* 8432 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8445
/* 8436 */    MCD::OPC_CheckPredicate, 9, 186, 20, // Skip to: 13746
/* 8440 */    MCD::OPC_Decode, 232, 6, 162, 1, // Opcode: HADD_S_W
/* 8445 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8458
/* 8449 */    MCD::OPC_CheckPredicate, 9, 173, 20, // Skip to: 13746
/* 8453 */    MCD::OPC_Decode, 230, 6, 163, 1, // Opcode: HADD_S_D
/* 8458 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8471
/* 8462 */    MCD::OPC_CheckPredicate, 9, 160, 20, // Skip to: 13746
/* 8466 */    MCD::OPC_Decode, 234, 6, 161, 1, // Opcode: HADD_U_H
/* 8471 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8484
/* 8475 */    MCD::OPC_CheckPredicate, 9, 147, 20, // Skip to: 13746
/* 8479 */    MCD::OPC_Decode, 235, 6, 162, 1, // Opcode: HADD_U_W
/* 8484 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8497
/* 8488 */    MCD::OPC_CheckPredicate, 9, 134, 20, // Skip to: 13746
/* 8492 */    MCD::OPC_Decode, 233, 6, 163, 1, // Opcode: HADD_U_D
/* 8497 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8510
/* 8501 */    MCD::OPC_CheckPredicate, 9, 121, 20, // Skip to: 13746
/* 8505 */    MCD::OPC_Decode, 237, 6, 161, 1, // Opcode: HSUB_S_H
/* 8510 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8523
/* 8514 */    MCD::OPC_CheckPredicate, 9, 108, 20, // Skip to: 13746
/* 8518 */    MCD::OPC_Decode, 238, 6, 162, 1, // Opcode: HSUB_S_W
/* 8523 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8536
/* 8527 */    MCD::OPC_CheckPredicate, 9, 95, 20, // Skip to: 13746
/* 8531 */    MCD::OPC_Decode, 236, 6, 163, 1, // Opcode: HSUB_S_D
/* 8536 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8549
/* 8540 */    MCD::OPC_CheckPredicate, 9, 82, 20, // Skip to: 13746
/* 8544 */    MCD::OPC_Decode, 240, 6, 161, 1, // Opcode: HSUB_U_H
/* 8549 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8562
/* 8553 */    MCD::OPC_CheckPredicate, 9, 69, 20, // Skip to: 13746
/* 8557 */    MCD::OPC_Decode, 241, 6, 162, 1, // Opcode: HSUB_U_W
/* 8562 */    MCD::OPC_FilterValue, 31, 60, 20, // Skip to: 13746
/* 8566 */    MCD::OPC_CheckPredicate, 9, 56, 20, // Skip to: 13746
/* 8570 */    MCD::OPC_Decode, 239, 6, 163, 1, // Opcode: HSUB_U_D
/* 8575 */    MCD::OPC_FilterValue, 25, 230, 1, // Skip to: 9065
/* 8579 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 8582 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8595
/* 8586 */    MCD::OPC_CheckPredicate, 9, 36, 20, // Skip to: 13746
/* 8590 */    MCD::OPC_Decode, 143, 12, 175, 1, // Opcode: SLDI_B
/* 8595 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8614
/* 8599 */    MCD::OPC_CheckPredicate, 9, 23, 20, // Skip to: 13746
/* 8603 */    MCD::OPC_CheckField, 19, 1, 0, 17, 20, // Skip to: 13746
/* 8609 */    MCD::OPC_Decode, 145, 12, 176, 1, // Opcode: SLDI_H
/* 8614 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 8672
/* 8618 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8621 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8634
/* 8625 */    MCD::OPC_CheckPredicate, 9, 253, 19, // Skip to: 13746
/* 8629 */    MCD::OPC_Decode, 146, 12, 177, 1, // Opcode: SLDI_W
/* 8634 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8653
/* 8638 */    MCD::OPC_CheckPredicate, 9, 240, 19, // Skip to: 13746
/* 8642 */    MCD::OPC_CheckField, 17, 1, 0, 234, 19, // Skip to: 13746
/* 8648 */    MCD::OPC_Decode, 144, 12, 178, 1, // Opcode: SLDI_D
/* 8653 */    MCD::OPC_FilterValue, 3, 225, 19, // Skip to: 13746
/* 8657 */    MCD::OPC_CheckPredicate, 9, 221, 19, // Skip to: 13746
/* 8661 */    MCD::OPC_CheckField, 16, 2, 2, 215, 19, // Skip to: 13746
/* 8667 */    MCD::OPC_Decode, 234, 3, 179, 1, // Opcode: CTCMSA
/* 8672 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8685
/* 8676 */    MCD::OPC_CheckPredicate, 9, 202, 19, // Skip to: 13746
/* 8680 */    MCD::OPC_Decode, 185, 12, 180, 1, // Opcode: SPLATI_B
/* 8685 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 8704
/* 8689 */    MCD::OPC_CheckPredicate, 9, 189, 19, // Skip to: 13746
/* 8693 */    MCD::OPC_CheckField, 19, 1, 0, 183, 19, // Skip to: 13746
/* 8699 */    MCD::OPC_Decode, 187, 12, 181, 1, // Opcode: SPLATI_H
/* 8704 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 8762
/* 8708 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8711 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8724
/* 8715 */    MCD::OPC_CheckPredicate, 9, 163, 19, // Skip to: 13746
/* 8719 */    MCD::OPC_Decode, 188, 12, 182, 1, // Opcode: SPLATI_W
/* 8724 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8743
/* 8728 */    MCD::OPC_CheckPredicate, 9, 150, 19, // Skip to: 13746
/* 8732 */    MCD::OPC_CheckField, 17, 1, 0, 144, 19, // Skip to: 13746
/* 8738 */    MCD::OPC_Decode, 186, 12, 183, 1, // Opcode: SPLATI_D
/* 8743 */    MCD::OPC_FilterValue, 3, 135, 19, // Skip to: 13746
/* 8747 */    MCD::OPC_CheckPredicate, 9, 131, 19, // Skip to: 13746
/* 8751 */    MCD::OPC_CheckField, 16, 2, 2, 125, 19, // Skip to: 13746
/* 8757 */    MCD::OPC_Decode, 132, 3, 184, 1, // Opcode: CFCMSA
/* 8762 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8775
/* 8766 */    MCD::OPC_CheckPredicate, 9, 112, 19, // Skip to: 13746
/* 8770 */    MCD::OPC_Decode, 224, 3, 185, 1, // Opcode: COPY_S_B
/* 8775 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 8794
/* 8779 */    MCD::OPC_CheckPredicate, 9, 99, 19, // Skip to: 13746
/* 8783 */    MCD::OPC_CheckField, 19, 1, 0, 93, 19, // Skip to: 13746
/* 8789 */    MCD::OPC_Decode, 226, 3, 186, 1, // Opcode: COPY_S_H
/* 8794 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 8852
/* 8798 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8801 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8814
/* 8805 */    MCD::OPC_CheckPredicate, 9, 73, 19, // Skip to: 13746
/* 8809 */    MCD::OPC_Decode, 227, 3, 187, 1, // Opcode: COPY_S_W
/* 8814 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8833
/* 8818 */    MCD::OPC_CheckPredicate, 16, 60, 19, // Skip to: 13746
/* 8822 */    MCD::OPC_CheckField, 17, 1, 0, 54, 19, // Skip to: 13746
/* 8828 */    MCD::OPC_Decode, 225, 3, 188, 1, // Opcode: COPY_S_D
/* 8833 */    MCD::OPC_FilterValue, 3, 45, 19, // Skip to: 13746
/* 8837 */    MCD::OPC_CheckPredicate, 9, 41, 19, // Skip to: 13746
/* 8841 */    MCD::OPC_CheckField, 16, 2, 2, 35, 19, // Skip to: 13746
/* 8847 */    MCD::OPC_Decode, 149, 9, 189, 1, // Opcode: MOVE_V
/* 8852 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8865
/* 8856 */    MCD::OPC_CheckPredicate, 9, 22, 19, // Skip to: 13746
/* 8860 */    MCD::OPC_Decode, 228, 3, 185, 1, // Opcode: COPY_U_B
/* 8865 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 8884
/* 8869 */    MCD::OPC_CheckPredicate, 9, 9, 19, // Skip to: 13746
/* 8873 */    MCD::OPC_CheckField, 19, 1, 0, 3, 19, // Skip to: 13746
/* 8879 */    MCD::OPC_Decode, 230, 3, 186, 1, // Opcode: COPY_U_H
/* 8884 */    MCD::OPC_FilterValue, 15, 35, 0, // Skip to: 8923
/* 8888 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8891 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8904
/* 8895 */    MCD::OPC_CheckPredicate, 9, 239, 18, // Skip to: 13746
/* 8899 */    MCD::OPC_Decode, 231, 3, 187, 1, // Opcode: COPY_U_W
/* 8904 */    MCD::OPC_FilterValue, 2, 230, 18, // Skip to: 13746
/* 8908 */    MCD::OPC_CheckPredicate, 16, 226, 18, // Skip to: 13746
/* 8912 */    MCD::OPC_CheckField, 17, 1, 0, 220, 18, // Skip to: 13746
/* 8918 */    MCD::OPC_Decode, 229, 3, 188, 1, // Opcode: COPY_U_D
/* 8923 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8936
/* 8927 */    MCD::OPC_CheckPredicate, 9, 207, 18, // Skip to: 13746
/* 8931 */    MCD::OPC_Decode, 131, 7, 190, 1, // Opcode: INSERT_B
/* 8936 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 8955
/* 8940 */    MCD::OPC_CheckPredicate, 9, 194, 18, // Skip to: 13746
/* 8944 */    MCD::OPC_CheckField, 19, 1, 0, 188, 18, // Skip to: 13746
/* 8950 */    MCD::OPC_Decode, 143, 7, 191, 1, // Opcode: INSERT_H
/* 8955 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 8994
/* 8959 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8962 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8975
/* 8966 */    MCD::OPC_CheckPredicate, 9, 168, 18, // Skip to: 13746
/* 8970 */    MCD::OPC_Decode, 146, 7, 192, 1, // Opcode: INSERT_W
/* 8975 */    MCD::OPC_FilterValue, 2, 159, 18, // Skip to: 13746
/* 8979 */    MCD::OPC_CheckPredicate, 16, 155, 18, // Skip to: 13746
/* 8983 */    MCD::OPC_CheckField, 17, 1, 0, 149, 18, // Skip to: 13746
/* 8989 */    MCD::OPC_Decode, 134, 7, 193, 1, // Opcode: INSERT_D
/* 8994 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9007
/* 8998 */    MCD::OPC_CheckPredicate, 9, 136, 18, // Skip to: 13746
/* 9002 */    MCD::OPC_Decode, 150, 7, 194, 1, // Opcode: INSVE_B
/* 9007 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9026
/* 9011 */    MCD::OPC_CheckPredicate, 9, 123, 18, // Skip to: 13746
/* 9015 */    MCD::OPC_CheckField, 19, 1, 0, 117, 18, // Skip to: 13746
/* 9021 */    MCD::OPC_Decode, 152, 7, 194, 1, // Opcode: INSVE_H
/* 9026 */    MCD::OPC_FilterValue, 23, 108, 18, // Skip to: 13746
/* 9030 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9033 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9046
/* 9037 */    MCD::OPC_CheckPredicate, 9, 97, 18, // Skip to: 13746
/* 9041 */    MCD::OPC_Decode, 153, 7, 194, 1, // Opcode: INSVE_W
/* 9046 */    MCD::OPC_FilterValue, 2, 88, 18, // Skip to: 13746
/* 9050 */    MCD::OPC_CheckPredicate, 9, 84, 18, // Skip to: 13746
/* 9054 */    MCD::OPC_CheckField, 17, 1, 0, 78, 18, // Skip to: 13746
/* 9060 */    MCD::OPC_Decode, 151, 7, 194, 1, // Opcode: INSVE_D
/* 9065 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 9488
/* 9069 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9072 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9085
/* 9076 */    MCD::OPC_CheckPredicate, 9, 58, 18, // Skip to: 13746
/* 9080 */    MCD::OPC_Decode, 208, 5, 155, 1, // Opcode: FCAF_W
/* 9085 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9098
/* 9089 */    MCD::OPC_CheckPredicate, 9, 45, 18, // Skip to: 13746
/* 9093 */    MCD::OPC_Decode, 207, 5, 156, 1, // Opcode: FCAF_D
/* 9098 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9111
/* 9102 */    MCD::OPC_CheckPredicate, 9, 32, 18, // Skip to: 13746
/* 9106 */    MCD::OPC_Decode, 235, 5, 155, 1, // Opcode: FCUN_W
/* 9111 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9124
/* 9115 */    MCD::OPC_CheckPredicate, 9, 19, 18, // Skip to: 13746
/* 9119 */    MCD::OPC_Decode, 234, 5, 156, 1, // Opcode: FCUN_D
/* 9124 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9137
/* 9128 */    MCD::OPC_CheckPredicate, 9, 6, 18, // Skip to: 13746
/* 9132 */    MCD::OPC_Decode, 210, 5, 155, 1, // Opcode: FCEQ_W
/* 9137 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9150
/* 9141 */    MCD::OPC_CheckPredicate, 9, 249, 17, // Skip to: 13746
/* 9145 */    MCD::OPC_Decode, 209, 5, 156, 1, // Opcode: FCEQ_D
/* 9150 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9163
/* 9154 */    MCD::OPC_CheckPredicate, 9, 236, 17, // Skip to: 13746
/* 9158 */    MCD::OPC_Decode, 227, 5, 155, 1, // Opcode: FCUEQ_W
/* 9163 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9176
/* 9167 */    MCD::OPC_CheckPredicate, 9, 223, 17, // Skip to: 13746
/* 9171 */    MCD::OPC_Decode, 226, 5, 156, 1, // Opcode: FCUEQ_D
/* 9176 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9189
/* 9180 */    MCD::OPC_CheckPredicate, 9, 210, 17, // Skip to: 13746
/* 9184 */    MCD::OPC_Decode, 216, 5, 155, 1, // Opcode: FCLT_W
/* 9189 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9202
/* 9193 */    MCD::OPC_CheckPredicate, 9, 197, 17, // Skip to: 13746
/* 9197 */    MCD::OPC_Decode, 215, 5, 156, 1, // Opcode: FCLT_D
/* 9202 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9215
/* 9206 */    MCD::OPC_CheckPredicate, 9, 184, 17, // Skip to: 13746
/* 9210 */    MCD::OPC_Decode, 231, 5, 155, 1, // Opcode: FCULT_W
/* 9215 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9228
/* 9219 */    MCD::OPC_CheckPredicate, 9, 171, 17, // Skip to: 13746
/* 9223 */    MCD::OPC_Decode, 230, 5, 156, 1, // Opcode: FCULT_D
/* 9228 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9241
/* 9232 */    MCD::OPC_CheckPredicate, 9, 158, 17, // Skip to: 13746
/* 9236 */    MCD::OPC_Decode, 214, 5, 155, 1, // Opcode: FCLE_W
/* 9241 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9254
/* 9245 */    MCD::OPC_CheckPredicate, 9, 145, 17, // Skip to: 13746
/* 9249 */    MCD::OPC_Decode, 213, 5, 156, 1, // Opcode: FCLE_D
/* 9254 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9267
/* 9258 */    MCD::OPC_CheckPredicate, 9, 132, 17, // Skip to: 13746
/* 9262 */    MCD::OPC_Decode, 229, 5, 155, 1, // Opcode: FCULE_W
/* 9267 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9280
/* 9271 */    MCD::OPC_CheckPredicate, 9, 119, 17, // Skip to: 13746
/* 9275 */    MCD::OPC_Decode, 228, 5, 156, 1, // Opcode: FCULE_D
/* 9280 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9293
/* 9284 */    MCD::OPC_CheckPredicate, 9, 106, 17, // Skip to: 13746
/* 9288 */    MCD::OPC_Decode, 184, 6, 155, 1, // Opcode: FSAF_W
/* 9293 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9306
/* 9297 */    MCD::OPC_CheckPredicate, 9, 93, 17, // Skip to: 13746
/* 9301 */    MCD::OPC_Decode, 183, 6, 156, 1, // Opcode: FSAF_D
/* 9306 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9319
/* 9310 */    MCD::OPC_CheckPredicate, 9, 80, 17, // Skip to: 13746
/* 9314 */    MCD::OPC_Decode, 218, 6, 155, 1, // Opcode: FSUN_W
/* 9319 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9332
/* 9323 */    MCD::OPC_CheckPredicate, 9, 67, 17, // Skip to: 13746
/* 9327 */    MCD::OPC_Decode, 217, 6, 156, 1, // Opcode: FSUN_D
/* 9332 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9345
/* 9336 */    MCD::OPC_CheckPredicate, 9, 54, 17, // Skip to: 13746
/* 9340 */    MCD::OPC_Decode, 186, 6, 155, 1, // Opcode: FSEQ_W
/* 9345 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9358
/* 9349 */    MCD::OPC_CheckPredicate, 9, 41, 17, // Skip to: 13746
/* 9353 */    MCD::OPC_Decode, 185, 6, 156, 1, // Opcode: FSEQ_D
/* 9358 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9371
/* 9362 */    MCD::OPC_CheckPredicate, 9, 28, 17, // Skip to: 13746
/* 9366 */    MCD::OPC_Decode, 210, 6, 155, 1, // Opcode: FSUEQ_W
/* 9371 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9384
/* 9375 */    MCD::OPC_CheckPredicate, 9, 15, 17, // Skip to: 13746
/* 9379 */    MCD::OPC_Decode, 209, 6, 156, 1, // Opcode: FSUEQ_D
/* 9384 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9397
/* 9388 */    MCD::OPC_CheckPredicate, 9, 2, 17, // Skip to: 13746
/* 9392 */    MCD::OPC_Decode, 190, 6, 155, 1, // Opcode: FSLT_W
/* 9397 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9410
/* 9401 */    MCD::OPC_CheckPredicate, 9, 245, 16, // Skip to: 13746
/* 9405 */    MCD::OPC_Decode, 189, 6, 156, 1, // Opcode: FSLT_D
/* 9410 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9423
/* 9414 */    MCD::OPC_CheckPredicate, 9, 232, 16, // Skip to: 13746
/* 9418 */    MCD::OPC_Decode, 214, 6, 155, 1, // Opcode: FSULT_W
/* 9423 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9436
/* 9427 */    MCD::OPC_CheckPredicate, 9, 219, 16, // Skip to: 13746
/* 9431 */    MCD::OPC_Decode, 213, 6, 156, 1, // Opcode: FSULT_D
/* 9436 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9449
/* 9440 */    MCD::OPC_CheckPredicate, 9, 206, 16, // Skip to: 13746
/* 9444 */    MCD::OPC_Decode, 188, 6, 155, 1, // Opcode: FSLE_W
/* 9449 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9462
/* 9453 */    MCD::OPC_CheckPredicate, 9, 193, 16, // Skip to: 13746
/* 9457 */    MCD::OPC_Decode, 187, 6, 156, 1, // Opcode: FSLE_D
/* 9462 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9475
/* 9466 */    MCD::OPC_CheckPredicate, 9, 180, 16, // Skip to: 13746
/* 9470 */    MCD::OPC_Decode, 212, 6, 155, 1, // Opcode: FSULE_W
/* 9475 */    MCD::OPC_FilterValue, 31, 171, 16, // Skip to: 13746
/* 9479 */    MCD::OPC_CheckPredicate, 9, 167, 16, // Skip to: 13746
/* 9483 */    MCD::OPC_Decode, 211, 6, 156, 1, // Opcode: FSULE_D
/* 9488 */    MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 9833
/* 9492 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9495 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9508
/* 9499 */    MCD::OPC_CheckPredicate, 9, 147, 16, // Skip to: 13746
/* 9503 */    MCD::OPC_Decode, 206, 5, 155, 1, // Opcode: FADD_W
/* 9508 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9521
/* 9512 */    MCD::OPC_CheckPredicate, 9, 134, 16, // Skip to: 13746
/* 9516 */    MCD::OPC_Decode, 200, 5, 156, 1, // Opcode: FADD_D
/* 9521 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9534
/* 9525 */    MCD::OPC_CheckPredicate, 9, 121, 16, // Skip to: 13746
/* 9529 */    MCD::OPC_Decode, 208, 6, 155, 1, // Opcode: FSUB_W
/* 9534 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9547
/* 9538 */    MCD::OPC_CheckPredicate, 9, 108, 16, // Skip to: 13746
/* 9542 */    MCD::OPC_Decode, 202, 6, 156, 1, // Opcode: FSUB_D
/* 9547 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9560
/* 9551 */    MCD::OPC_CheckPredicate, 9, 95, 16, // Skip to: 13746
/* 9555 */    MCD::OPC_Decode, 171, 6, 155, 1, // Opcode: FMUL_W
/* 9560 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9573
/* 9564 */    MCD::OPC_CheckPredicate, 9, 82, 16, // Skip to: 13746
/* 9568 */    MCD::OPC_Decode, 165, 6, 156, 1, // Opcode: FMUL_D
/* 9573 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9586
/* 9577 */    MCD::OPC_CheckPredicate, 9, 69, 16, // Skip to: 13746
/* 9581 */    MCD::OPC_Decode, 242, 5, 155, 1, // Opcode: FDIV_W
/* 9586 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9599
/* 9590 */    MCD::OPC_CheckPredicate, 9, 56, 16, // Skip to: 13746
/* 9594 */    MCD::OPC_Decode, 236, 5, 156, 1, // Opcode: FDIV_D
/* 9599 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9612
/* 9603 */    MCD::OPC_CheckPredicate, 9, 43, 16, // Skip to: 13746
/* 9607 */    MCD::OPC_Decode, 149, 6, 159, 1, // Opcode: FMADD_W
/* 9612 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9625
/* 9616 */    MCD::OPC_CheckPredicate, 9, 30, 16, // Skip to: 13746
/* 9620 */    MCD::OPC_Decode, 148, 6, 160, 1, // Opcode: FMADD_D
/* 9625 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9638
/* 9629 */    MCD::OPC_CheckPredicate, 9, 17, 16, // Skip to: 13746
/* 9633 */    MCD::OPC_Decode, 164, 6, 159, 1, // Opcode: FMSUB_W
/* 9638 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9651
/* 9642 */    MCD::OPC_CheckPredicate, 9, 4, 16, // Skip to: 13746
/* 9646 */    MCD::OPC_Decode, 163, 6, 160, 1, // Opcode: FMSUB_D
/* 9651 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9664
/* 9655 */    MCD::OPC_CheckPredicate, 9, 247, 15, // Skip to: 13746
/* 9659 */    MCD::OPC_Decode, 247, 5, 155, 1, // Opcode: FEXP2_W
/* 9664 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9677
/* 9668 */    MCD::OPC_CheckPredicate, 9, 234, 15, // Skip to: 13746
/* 9672 */    MCD::OPC_Decode, 245, 5, 156, 1, // Opcode: FEXP2_D
/* 9677 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9690
/* 9681 */    MCD::OPC_CheckPredicate, 9, 221, 15, // Skip to: 13746
/* 9685 */    MCD::OPC_Decode, 243, 5, 195, 1, // Opcode: FEXDO_H
/* 9690 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9703
/* 9694 */    MCD::OPC_CheckPredicate, 9, 208, 15, // Skip to: 13746
/* 9698 */    MCD::OPC_Decode, 244, 5, 196, 1, // Opcode: FEXDO_W
/* 9703 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9716
/* 9707 */    MCD::OPC_CheckPredicate, 9, 195, 15, // Skip to: 13746
/* 9711 */    MCD::OPC_Decode, 223, 6, 195, 1, // Opcode: FTQ_H
/* 9716 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9729
/* 9720 */    MCD::OPC_CheckPredicate, 9, 182, 15, // Skip to: 13746
/* 9724 */    MCD::OPC_Decode, 224, 6, 196, 1, // Opcode: FTQ_W
/* 9729 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9742
/* 9733 */    MCD::OPC_CheckPredicate, 9, 169, 15, // Skip to: 13746
/* 9737 */    MCD::OPC_Decode, 157, 6, 155, 1, // Opcode: FMIN_W
/* 9742 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9755
/* 9746 */    MCD::OPC_CheckPredicate, 9, 156, 15, // Skip to: 13746
/* 9750 */    MCD::OPC_Decode, 156, 6, 156, 1, // Opcode: FMIN_D
/* 9755 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9768
/* 9759 */    MCD::OPC_CheckPredicate, 9, 143, 15, // Skip to: 13746
/* 9763 */    MCD::OPC_Decode, 155, 6, 155, 1, // Opcode: FMIN_A_W
/* 9768 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9781
/* 9772 */    MCD::OPC_CheckPredicate, 9, 130, 15, // Skip to: 13746
/* 9776 */    MCD::OPC_Decode, 154, 6, 156, 1, // Opcode: FMIN_A_D
/* 9781 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9794
/* 9785 */    MCD::OPC_CheckPredicate, 9, 117, 15, // Skip to: 13746
/* 9789 */    MCD::OPC_Decode, 153, 6, 155, 1, // Opcode: FMAX_W
/* 9794 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9807
/* 9798 */    MCD::OPC_CheckPredicate, 9, 104, 15, // Skip to: 13746
/* 9802 */    MCD::OPC_Decode, 152, 6, 156, 1, // Opcode: FMAX_D
/* 9807 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9820
/* 9811 */    MCD::OPC_CheckPredicate, 9, 91, 15, // Skip to: 13746
/* 9815 */    MCD::OPC_Decode, 151, 6, 155, 1, // Opcode: FMAX_A_W
/* 9820 */    MCD::OPC_FilterValue, 31, 82, 15, // Skip to: 13746
/* 9824 */    MCD::OPC_CheckPredicate, 9, 78, 15, // Skip to: 13746
/* 9828 */    MCD::OPC_Decode, 150, 6, 156, 1, // Opcode: FMAX_A_D
/* 9833 */    MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10152
/* 9837 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9840 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9853
/* 9844 */    MCD::OPC_CheckPredicate, 9, 58, 15, // Skip to: 13746
/* 9848 */    MCD::OPC_Decode, 225, 5, 155, 1, // Opcode: FCOR_W
/* 9853 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9866
/* 9857 */    MCD::OPC_CheckPredicate, 9, 45, 15, // Skip to: 13746
/* 9861 */    MCD::OPC_Decode, 224, 5, 156, 1, // Opcode: FCOR_D
/* 9866 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9879
/* 9870 */    MCD::OPC_CheckPredicate, 9, 32, 15, // Skip to: 13746
/* 9874 */    MCD::OPC_Decode, 233, 5, 155, 1, // Opcode: FCUNE_W
/* 9879 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9892
/* 9883 */    MCD::OPC_CheckPredicate, 9, 19, 15, // Skip to: 13746
/* 9887 */    MCD::OPC_Decode, 232, 5, 156, 1, // Opcode: FCUNE_D
/* 9892 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9905
/* 9896 */    MCD::OPC_CheckPredicate, 9, 6, 15, // Skip to: 13746
/* 9900 */    MCD::OPC_Decode, 223, 5, 155, 1, // Opcode: FCNE_W
/* 9905 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9918
/* 9909 */    MCD::OPC_CheckPredicate, 9, 249, 14, // Skip to: 13746
/* 9913 */    MCD::OPC_Decode, 222, 5, 156, 1, // Opcode: FCNE_D
/* 9918 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9931
/* 9922 */    MCD::OPC_CheckPredicate, 9, 236, 14, // Skip to: 13746
/* 9926 */    MCD::OPC_Decode, 137, 10, 154, 1, // Opcode: MUL_Q_H
/* 9931 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9944
/* 9935 */    MCD::OPC_CheckPredicate, 9, 223, 14, // Skip to: 13746
/* 9939 */    MCD::OPC_Decode, 138, 10, 155, 1, // Opcode: MUL_Q_W
/* 9944 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9957
/* 9948 */    MCD::OPC_CheckPredicate, 9, 210, 14, // Skip to: 13746
/* 9952 */    MCD::OPC_Decode, 187, 8, 158, 1, // Opcode: MADD_Q_H
/* 9957 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9970
/* 9961 */    MCD::OPC_CheckPredicate, 9, 197, 14, // Skip to: 13746
/* 9965 */    MCD::OPC_Decode, 188, 8, 159, 1, // Opcode: MADD_Q_W
/* 9970 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9983
/* 9974 */    MCD::OPC_CheckPredicate, 9, 184, 14, // Skip to: 13746
/* 9978 */    MCD::OPC_Decode, 207, 9, 158, 1, // Opcode: MSUB_Q_H
/* 9983 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9996
/* 9987 */    MCD::OPC_CheckPredicate, 9, 171, 14, // Skip to: 13746
/* 9991 */    MCD::OPC_Decode, 208, 9, 159, 1, // Opcode: MSUB_Q_W
/* 9996 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10009
/* 10000 */   MCD::OPC_CheckPredicate, 9, 158, 14, // Skip to: 13746
/* 10004 */   MCD::OPC_Decode, 194, 6, 155, 1, // Opcode: FSOR_W
/* 10009 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10022
/* 10013 */   MCD::OPC_CheckPredicate, 9, 145, 14, // Skip to: 13746
/* 10017 */   MCD::OPC_Decode, 193, 6, 156, 1, // Opcode: FSOR_D
/* 10022 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10035
/* 10026 */   MCD::OPC_CheckPredicate, 9, 132, 14, // Skip to: 13746
/* 10030 */   MCD::OPC_Decode, 216, 6, 155, 1, // Opcode: FSUNE_W
/* 10035 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10048
/* 10039 */   MCD::OPC_CheckPredicate, 9, 119, 14, // Skip to: 13746
/* 10043 */   MCD::OPC_Decode, 215, 6, 156, 1, // Opcode: FSUNE_D
/* 10048 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10061
/* 10052 */   MCD::OPC_CheckPredicate, 9, 106, 14, // Skip to: 13746
/* 10056 */   MCD::OPC_Decode, 192, 6, 155, 1, // Opcode: FSNE_W
/* 10061 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10074
/* 10065 */   MCD::OPC_CheckPredicate, 9, 93, 14, // Skip to: 13746
/* 10069 */   MCD::OPC_Decode, 191, 6, 156, 1, // Opcode: FSNE_D
/* 10074 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10087
/* 10078 */   MCD::OPC_CheckPredicate, 9, 80, 14, // Skip to: 13746
/* 10082 */   MCD::OPC_Decode, 246, 9, 154, 1, // Opcode: MULR_Q_H
/* 10087 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10100
/* 10091 */   MCD::OPC_CheckPredicate, 9, 67, 14, // Skip to: 13746
/* 10095 */   MCD::OPC_Decode, 247, 9, 155, 1, // Opcode: MULR_Q_W
/* 10100 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10113
/* 10104 */   MCD::OPC_CheckPredicate, 9, 54, 14, // Skip to: 13746
/* 10108 */   MCD::OPC_Decode, 173, 8, 158, 1, // Opcode: MADDR_Q_H
/* 10113 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10126
/* 10117 */   MCD::OPC_CheckPredicate, 9, 41, 14, // Skip to: 13746
/* 10121 */   MCD::OPC_Decode, 174, 8, 159, 1, // Opcode: MADDR_Q_W
/* 10126 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10139
/* 10130 */   MCD::OPC_CheckPredicate, 9, 28, 14, // Skip to: 13746
/* 10134 */   MCD::OPC_Decode, 193, 9, 158, 1, // Opcode: MSUBR_Q_H
/* 10139 */   MCD::OPC_FilterValue, 29, 19, 14, // Skip to: 13746
/* 10143 */   MCD::OPC_CheckPredicate, 9, 15, 14, // Skip to: 13746
/* 10147 */   MCD::OPC_Decode, 194, 9, 159, 1, // Opcode: MSUBR_Q_W
/* 10152 */   MCD::OPC_FilterValue, 30, 219, 2, // Skip to: 10887
/* 10156 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10159 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10171
/* 10163 */   MCD::OPC_CheckPredicate, 9, 251, 13, // Skip to: 13746
/* 10167 */   MCD::OPC_Decode, 98, 153, 1, // Opcode: AND_V
/* 10171 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10184
/* 10175 */   MCD::OPC_CheckPredicate, 9, 239, 13, // Skip to: 13746
/* 10179 */   MCD::OPC_Decode, 187, 10, 153, 1, // Opcode: OR_V
/* 10184 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10197
/* 10188 */   MCD::OPC_CheckPredicate, 9, 226, 13, // Skip to: 13746
/* 10192 */   MCD::OPC_Decode, 173, 10, 153, 1, // Opcode: NOR_V
/* 10197 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10210
/* 10201 */   MCD::OPC_CheckPredicate, 9, 213, 13, // Skip to: 13746
/* 10205 */   MCD::OPC_Decode, 173, 14, 153, 1, // Opcode: XOR_V
/* 10210 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10223
/* 10214 */   MCD::OPC_CheckPredicate, 9, 200, 13, // Skip to: 13746
/* 10218 */   MCD::OPC_Decode, 157, 2, 157, 1, // Opcode: BMNZ_V
/* 10223 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10236
/* 10227 */   MCD::OPC_CheckPredicate, 9, 187, 13, // Skip to: 13746
/* 10231 */   MCD::OPC_Decode, 159, 2, 157, 1, // Opcode: BMZ_V
/* 10236 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10249
/* 10240 */   MCD::OPC_CheckPredicate, 9, 174, 13, // Skip to: 13746
/* 10244 */   MCD::OPC_Decode, 196, 2, 157, 1, // Opcode: BSEL_V
/* 10249 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 10464
/* 10253 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10256 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10269
/* 10260 */   MCD::OPC_CheckPredicate, 9, 154, 13, // Skip to: 13746
/* 10264 */   MCD::OPC_Decode, 133, 6, 197, 1, // Opcode: FILL_B
/* 10269 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10282
/* 10273 */   MCD::OPC_CheckPredicate, 9, 141, 13, // Skip to: 13746
/* 10277 */   MCD::OPC_Decode, 137, 6, 198, 1, // Opcode: FILL_H
/* 10282 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10295
/* 10286 */   MCD::OPC_CheckPredicate, 9, 128, 13, // Skip to: 13746
/* 10290 */   MCD::OPC_Decode, 138, 6, 199, 1, // Opcode: FILL_W
/* 10295 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10308
/* 10299 */   MCD::OPC_CheckPredicate, 16, 115, 13, // Skip to: 13746
/* 10303 */   MCD::OPC_Decode, 134, 6, 200, 1, // Opcode: FILL_D
/* 10308 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10321
/* 10312 */   MCD::OPC_CheckPredicate, 9, 102, 13, // Skip to: 13746
/* 10316 */   MCD::OPC_Decode, 206, 10, 189, 1, // Opcode: PCNT_B
/* 10321 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10334
/* 10325 */   MCD::OPC_CheckPredicate, 9, 89, 13, // Skip to: 13746
/* 10329 */   MCD::OPC_Decode, 208, 10, 201, 1, // Opcode: PCNT_H
/* 10334 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10347
/* 10338 */   MCD::OPC_CheckPredicate, 9, 76, 13, // Skip to: 13746
/* 10342 */   MCD::OPC_Decode, 209, 10, 202, 1, // Opcode: PCNT_W
/* 10347 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10360
/* 10351 */   MCD::OPC_CheckPredicate, 9, 63, 13, // Skip to: 13746
/* 10355 */   MCD::OPC_Decode, 207, 10, 203, 1, // Opcode: PCNT_D
/* 10360 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10373
/* 10364 */   MCD::OPC_CheckPredicate, 9, 50, 13, // Skip to: 13746
/* 10368 */   MCD::OPC_Decode, 149, 10, 189, 1, // Opcode: NLOC_B
/* 10373 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10386
/* 10377 */   MCD::OPC_CheckPredicate, 9, 37, 13, // Skip to: 13746
/* 10381 */   MCD::OPC_Decode, 151, 10, 201, 1, // Opcode: NLOC_H
/* 10386 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10399
/* 10390 */   MCD::OPC_CheckPredicate, 9, 24, 13, // Skip to: 13746
/* 10394 */   MCD::OPC_Decode, 152, 10, 202, 1, // Opcode: NLOC_W
/* 10399 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10412
/* 10403 */   MCD::OPC_CheckPredicate, 9, 11, 13, // Skip to: 13746
/* 10407 */   MCD::OPC_Decode, 150, 10, 203, 1, // Opcode: NLOC_D
/* 10412 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10425
/* 10416 */   MCD::OPC_CheckPredicate, 9, 254, 12, // Skip to: 13746
/* 10420 */   MCD::OPC_Decode, 153, 10, 189, 1, // Opcode: NLZC_B
/* 10425 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10438
/* 10429 */   MCD::OPC_CheckPredicate, 9, 241, 12, // Skip to: 13746
/* 10433 */   MCD::OPC_Decode, 155, 10, 201, 1, // Opcode: NLZC_H
/* 10438 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10451
/* 10442 */   MCD::OPC_CheckPredicate, 9, 228, 12, // Skip to: 13746
/* 10446 */   MCD::OPC_Decode, 156, 10, 202, 1, // Opcode: NLZC_W
/* 10451 */   MCD::OPC_FilterValue, 15, 219, 12, // Skip to: 13746
/* 10455 */   MCD::OPC_CheckPredicate, 9, 215, 12, // Skip to: 13746
/* 10459 */   MCD::OPC_Decode, 154, 10, 203, 1, // Opcode: NLZC_D
/* 10464 */   MCD::OPC_FilterValue, 25, 206, 12, // Skip to: 13746
/* 10468 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10471 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10484
/* 10475 */   MCD::OPC_CheckPredicate, 9, 195, 12, // Skip to: 13746
/* 10479 */   MCD::OPC_Decode, 212, 5, 202, 1, // Opcode: FCLASS_W
/* 10484 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10497
/* 10488 */   MCD::OPC_CheckPredicate, 9, 182, 12, // Skip to: 13746
/* 10492 */   MCD::OPC_Decode, 211, 5, 203, 1, // Opcode: FCLASS_D
/* 10497 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10510
/* 10501 */   MCD::OPC_CheckPredicate, 9, 169, 12, // Skip to: 13746
/* 10505 */   MCD::OPC_Decode, 226, 6, 202, 1, // Opcode: FTRUNC_S_W
/* 10510 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10523
/* 10514 */   MCD::OPC_CheckPredicate, 9, 156, 12, // Skip to: 13746
/* 10518 */   MCD::OPC_Decode, 225, 6, 203, 1, // Opcode: FTRUNC_S_D
/* 10523 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10536
/* 10527 */   MCD::OPC_CheckPredicate, 9, 143, 12, // Skip to: 13746
/* 10531 */   MCD::OPC_Decode, 228, 6, 202, 1, // Opcode: FTRUNC_U_W
/* 10536 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10549
/* 10540 */   MCD::OPC_CheckPredicate, 9, 130, 12, // Skip to: 13746
/* 10544 */   MCD::OPC_Decode, 227, 6, 203, 1, // Opcode: FTRUNC_U_D
/* 10549 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10562
/* 10553 */   MCD::OPC_CheckPredicate, 9, 117, 12, // Skip to: 13746
/* 10557 */   MCD::OPC_Decode, 201, 6, 202, 1, // Opcode: FSQRT_W
/* 10562 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10575
/* 10566 */   MCD::OPC_CheckPredicate, 9, 104, 12, // Skip to: 13746
/* 10570 */   MCD::OPC_Decode, 195, 6, 203, 1, // Opcode: FSQRT_D
/* 10575 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10588
/* 10579 */   MCD::OPC_CheckPredicate, 9, 91, 12, // Skip to: 13746
/* 10583 */   MCD::OPC_Decode, 182, 6, 202, 1, // Opcode: FRSQRT_W
/* 10588 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10601
/* 10592 */   MCD::OPC_CheckPredicate, 9, 78, 12, // Skip to: 13746
/* 10596 */   MCD::OPC_Decode, 181, 6, 203, 1, // Opcode: FRSQRT_D
/* 10601 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10614
/* 10605 */   MCD::OPC_CheckPredicate, 9, 65, 12, // Skip to: 13746
/* 10609 */   MCD::OPC_Decode, 178, 6, 202, 1, // Opcode: FRCP_W
/* 10614 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10627
/* 10618 */   MCD::OPC_CheckPredicate, 9, 52, 12, // Skip to: 13746
/* 10622 */   MCD::OPC_Decode, 177, 6, 203, 1, // Opcode: FRCP_D
/* 10627 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10640
/* 10631 */   MCD::OPC_CheckPredicate, 9, 39, 12, // Skip to: 13746
/* 10635 */   MCD::OPC_Decode, 180, 6, 202, 1, // Opcode: FRINT_W
/* 10640 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10653
/* 10644 */   MCD::OPC_CheckPredicate, 9, 26, 12, // Skip to: 13746
/* 10648 */   MCD::OPC_Decode, 179, 6, 203, 1, // Opcode: FRINT_D
/* 10653 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10666
/* 10657 */   MCD::OPC_CheckPredicate, 9, 13, 12, // Skip to: 13746
/* 10661 */   MCD::OPC_Decode, 140, 6, 202, 1, // Opcode: FLOG2_W
/* 10666 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10679
/* 10670 */   MCD::OPC_CheckPredicate, 9, 0, 12, // Skip to: 13746
/* 10674 */   MCD::OPC_Decode, 139, 6, 203, 1, // Opcode: FLOG2_D
/* 10679 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10692
/* 10683 */   MCD::OPC_CheckPredicate, 9, 243, 11, // Skip to: 13746
/* 10687 */   MCD::OPC_Decode, 250, 5, 204, 1, // Opcode: FEXUPL_W
/* 10692 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10705
/* 10696 */   MCD::OPC_CheckPredicate, 9, 230, 11, // Skip to: 13746
/* 10700 */   MCD::OPC_Decode, 249, 5, 205, 1, // Opcode: FEXUPL_D
/* 10705 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10718
/* 10709 */   MCD::OPC_CheckPredicate, 9, 217, 11, // Skip to: 13746
/* 10713 */   MCD::OPC_Decode, 252, 5, 204, 1, // Opcode: FEXUPR_W
/* 10718 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10731
/* 10722 */   MCD::OPC_CheckPredicate, 9, 204, 11, // Skip to: 13746
/* 10726 */   MCD::OPC_Decode, 251, 5, 205, 1, // Opcode: FEXUPR_D
/* 10731 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10744
/* 10735 */   MCD::OPC_CheckPredicate, 9, 191, 11, // Skip to: 13746
/* 10739 */   MCD::OPC_Decode, 130, 6, 204, 1, // Opcode: FFQL_W
/* 10744 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10757
/* 10748 */   MCD::OPC_CheckPredicate, 9, 178, 11, // Skip to: 13746
/* 10752 */   MCD::OPC_Decode, 129, 6, 205, 1, // Opcode: FFQL_D
/* 10757 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10770
/* 10761 */   MCD::OPC_CheckPredicate, 9, 165, 11, // Skip to: 13746
/* 10765 */   MCD::OPC_Decode, 132, 6, 204, 1, // Opcode: FFQR_W
/* 10770 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10783
/* 10774 */   MCD::OPC_CheckPredicate, 9, 152, 11, // Skip to: 13746
/* 10778 */   MCD::OPC_Decode, 131, 6, 205, 1, // Opcode: FFQR_D
/* 10783 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10796
/* 10787 */   MCD::OPC_CheckPredicate, 9, 139, 11, // Skip to: 13746
/* 10791 */   MCD::OPC_Decode, 220, 6, 202, 1, // Opcode: FTINT_S_W
/* 10796 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10809
/* 10800 */   MCD::OPC_CheckPredicate, 9, 126, 11, // Skip to: 13746
/* 10804 */   MCD::OPC_Decode, 219, 6, 203, 1, // Opcode: FTINT_S_D
/* 10809 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10822
/* 10813 */   MCD::OPC_CheckPredicate, 9, 113, 11, // Skip to: 13746
/* 10817 */   MCD::OPC_Decode, 222, 6, 202, 1, // Opcode: FTINT_U_W
/* 10822 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10835
/* 10826 */   MCD::OPC_CheckPredicate, 9, 100, 11, // Skip to: 13746
/* 10830 */   MCD::OPC_Decode, 221, 6, 203, 1, // Opcode: FTINT_U_D
/* 10835 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10848
/* 10839 */   MCD::OPC_CheckPredicate, 9, 87, 11, // Skip to: 13746
/* 10843 */   MCD::OPC_Decode, 254, 5, 202, 1, // Opcode: FFINT_S_W
/* 10848 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10861
/* 10852 */   MCD::OPC_CheckPredicate, 9, 74, 11, // Skip to: 13746
/* 10856 */   MCD::OPC_Decode, 253, 5, 203, 1, // Opcode: FFINT_S_D
/* 10861 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10874
/* 10865 */   MCD::OPC_CheckPredicate, 9, 61, 11, // Skip to: 13746
/* 10869 */   MCD::OPC_Decode, 128, 6, 202, 1, // Opcode: FFINT_U_W
/* 10874 */   MCD::OPC_FilterValue, 31, 52, 11, // Skip to: 13746
/* 10878 */   MCD::OPC_CheckPredicate, 9, 48, 11, // Skip to: 13746
/* 10882 */   MCD::OPC_Decode, 255, 5, 203, 1, // Opcode: FFINT_U_D
/* 10887 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 10900
/* 10891 */   MCD::OPC_CheckPredicate, 9, 35, 11, // Skip to: 13746
/* 10895 */   MCD::OPC_Decode, 215, 7, 206, 1, // Opcode: LD_B
/* 10900 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 10913
/* 10904 */   MCD::OPC_CheckPredicate, 9, 22, 11, // Skip to: 13746
/* 10908 */   MCD::OPC_Decode, 217, 7, 206, 1, // Opcode: LD_H
/* 10913 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 10926
/* 10917 */   MCD::OPC_CheckPredicate, 9, 9, 11, // Skip to: 13746
/* 10921 */   MCD::OPC_Decode, 218, 7, 206, 1, // Opcode: LD_W
/* 10926 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 10939
/* 10930 */   MCD::OPC_CheckPredicate, 9, 252, 10, // Skip to: 13746
/* 10934 */   MCD::OPC_Decode, 216, 7, 206, 1, // Opcode: LD_D
/* 10939 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 10952
/* 10943 */   MCD::OPC_CheckPredicate, 9, 239, 10, // Skip to: 13746
/* 10947 */   MCD::OPC_Decode, 240, 12, 206, 1, // Opcode: ST_B
/* 10952 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 10965
/* 10956 */   MCD::OPC_CheckPredicate, 9, 226, 10, // Skip to: 13746
/* 10960 */   MCD::OPC_Decode, 242, 12, 206, 1, // Opcode: ST_H
/* 10965 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 10978
/* 10969 */   MCD::OPC_CheckPredicate, 9, 213, 10, // Skip to: 13746
/* 10973 */   MCD::OPC_Decode, 243, 12, 206, 1, // Opcode: ST_W
/* 10978 */   MCD::OPC_FilterValue, 39, 204, 10, // Skip to: 13746
/* 10982 */   MCD::OPC_CheckPredicate, 9, 200, 10, // Skip to: 13746
/* 10986 */   MCD::OPC_Decode, 241, 12, 206, 1, // Opcode: ST_D
/* 10991 */   MCD::OPC_FilterValue, 31, 135, 9, // Skip to: 13434
/* 10995 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10998 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11011
/* 11002 */   MCD::OPC_CheckPredicate, 7, 180, 10, // Skip to: 13746
/* 11006 */   MCD::OPC_Decode, 175, 5, 207, 1, // Opcode: EXT
/* 11011 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11024
/* 11015 */   MCD::OPC_CheckPredicate, 7, 167, 10, // Skip to: 13746
/* 11019 */   MCD::OPC_Decode, 130, 7, 208, 1, // Opcode: INS
/* 11024 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11070
/* 11028 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11031 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11044
/* 11035 */   MCD::OPC_CheckPredicate, 14, 147, 10, // Skip to: 13746
/* 11039 */   MCD::OPC_Decode, 148, 8, 209, 1, // Opcode: LWX
/* 11044 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11057
/* 11048 */   MCD::OPC_CheckPredicate, 14, 134, 10, // Skip to: 13746
/* 11052 */   MCD::OPC_Decode, 225, 7, 209, 1, // Opcode: LHX
/* 11057 */   MCD::OPC_FilterValue, 6, 125, 10, // Skip to: 13746
/* 11061 */   MCD::OPC_CheckPredicate, 14, 121, 10, // Skip to: 13746
/* 11065 */   MCD::OPC_Decode, 194, 7, 209, 1, // Opcode: LBUX
/* 11070 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11089
/* 11074 */   MCD::OPC_CheckPredicate, 14, 108, 10, // Skip to: 13746
/* 11078 */   MCD::OPC_CheckField, 6, 10, 0, 102, 10, // Skip to: 13746
/* 11084 */   MCD::OPC_Decode, 149, 7, 210, 1, // Opcode: INSV
/* 11089 */   MCD::OPC_FilterValue, 16, 51, 1, // Skip to: 11400
/* 11093 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11096 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11108
/* 11100 */   MCD::OPC_CheckPredicate, 14, 82, 10, // Skip to: 13746
/* 11104 */   MCD::OPC_Decode, 60, 211, 1, // Opcode: ADDU_QB
/* 11108 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11121
/* 11112 */   MCD::OPC_CheckPredicate, 14, 70, 10, // Skip to: 13746
/* 11116 */   MCD::OPC_Decode, 145, 13, 211, 1, // Opcode: SUBU_QB
/* 11121 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 11133
/* 11125 */   MCD::OPC_CheckPredicate, 14, 57, 10, // Skip to: 13746
/* 11129 */   MCD::OPC_Decode, 62, 211, 1, // Opcode: ADDU_S_QB
/* 11133 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11146
/* 11137 */   MCD::OPC_CheckPredicate, 14, 45, 10, // Skip to: 13746
/* 11141 */   MCD::OPC_Decode, 147, 13, 211, 1, // Opcode: SUBU_S_QB
/* 11146 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11159
/* 11150 */   MCD::OPC_CheckPredicate, 14, 32, 10, // Skip to: 13746
/* 11154 */   MCD::OPC_Decode, 240, 9, 211, 1, // Opcode: MULEU_S_PH_QBL
/* 11159 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11172
/* 11163 */   MCD::OPC_CheckPredicate, 14, 19, 10, // Skip to: 13746
/* 11167 */   MCD::OPC_Decode, 241, 9, 211, 1, // Opcode: MULEU_S_PH_QBR
/* 11172 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 11184
/* 11176 */   MCD::OPC_CheckPredicate, 37, 6, 10, // Skip to: 13746
/* 11180 */   MCD::OPC_Decode, 59, 211, 1, // Opcode: ADDU_PH
/* 11184 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11197
/* 11188 */   MCD::OPC_CheckPredicate, 37, 250, 9, // Skip to: 13746
/* 11192 */   MCD::OPC_Decode, 144, 13, 211, 1, // Opcode: SUBU_PH
/* 11197 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 11209
/* 11201 */   MCD::OPC_CheckPredicate, 14, 237, 9, // Skip to: 13746
/* 11205 */   MCD::OPC_Decode, 39, 211, 1, // Opcode: ADDQ_PH
/* 11209 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11222
/* 11213 */   MCD::OPC_CheckPredicate, 14, 225, 9, // Skip to: 13746
/* 11217 */   MCD::OPC_Decode, 249, 12, 211, 1, // Opcode: SUBQ_PH
/* 11222 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11234
/* 11226 */   MCD::OPC_CheckPredicate, 37, 212, 9, // Skip to: 13746
/* 11230 */   MCD::OPC_Decode, 61, 211, 1, // Opcode: ADDU_S_PH
/* 11234 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11247
/* 11238 */   MCD::OPC_CheckPredicate, 37, 200, 9, // Skip to: 13746
/* 11242 */   MCD::OPC_Decode, 146, 13, 211, 1, // Opcode: SUBU_S_PH
/* 11247 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11259
/* 11251 */   MCD::OPC_CheckPredicate, 14, 187, 9, // Skip to: 13746
/* 11255 */   MCD::OPC_Decode, 40, 211, 1, // Opcode: ADDQ_S_PH
/* 11259 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11272
/* 11263 */   MCD::OPC_CheckPredicate, 14, 175, 9, // Skip to: 13746
/* 11267 */   MCD::OPC_Decode, 250, 12, 211, 1, // Opcode: SUBQ_S_PH
/* 11272 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 11283
/* 11276 */   MCD::OPC_CheckPredicate, 14, 162, 9, // Skip to: 13746
/* 11280 */   MCD::OPC_Decode, 42, 43, // Opcode: ADDSC
/* 11283 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 11294
/* 11287 */   MCD::OPC_CheckPredicate, 14, 151, 9, // Skip to: 13746
/* 11291 */   MCD::OPC_Decode, 71, 43, // Opcode: ADDWC
/* 11294 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 11306
/* 11298 */   MCD::OPC_CheckPredicate, 14, 140, 9, // Skip to: 13746
/* 11302 */   MCD::OPC_Decode, 135, 9, 43, // Opcode: MODSUB
/* 11306 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 11325
/* 11310 */   MCD::OPC_CheckPredicate, 14, 128, 9, // Skip to: 13746
/* 11314 */   MCD::OPC_CheckField, 16, 5, 0, 122, 9, // Skip to: 13746
/* 11320 */   MCD::OPC_Decode, 158, 11, 212, 1, // Opcode: RADDU_W_QB
/* 11325 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 11336
/* 11329 */   MCD::OPC_CheckPredicate, 14, 109, 9, // Skip to: 13746
/* 11333 */   MCD::OPC_Decode, 41, 43, // Opcode: ADDQ_S_W
/* 11336 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11348
/* 11340 */   MCD::OPC_CheckPredicate, 14, 98, 9, // Skip to: 13746
/* 11344 */   MCD::OPC_Decode, 251, 12, 43, // Opcode: SUBQ_S_W
/* 11348 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11361
/* 11352 */   MCD::OPC_CheckPredicate, 14, 86, 9, // Skip to: 13746
/* 11356 */   MCD::OPC_Decode, 238, 9, 213, 1, // Opcode: MULEQ_S_W_PHL
/* 11361 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11374
/* 11365 */   MCD::OPC_CheckPredicate, 14, 73, 9, // Skip to: 13746
/* 11369 */   MCD::OPC_Decode, 239, 9, 213, 1, // Opcode: MULEQ_S_W_PHR
/* 11374 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11387
/* 11378 */   MCD::OPC_CheckPredicate, 37, 60, 9, // Skip to: 13746
/* 11382 */   MCD::OPC_Decode, 244, 9, 211, 1, // Opcode: MULQ_S_PH
/* 11387 */   MCD::OPC_FilterValue, 31, 51, 9, // Skip to: 13746
/* 11391 */   MCD::OPC_CheckPredicate, 14, 47, 9, // Skip to: 13746
/* 11395 */   MCD::OPC_Decode, 242, 9, 211, 1, // Opcode: MULQ_RS_PH
/* 11400 */   MCD::OPC_FilterValue, 17, 69, 1, // Skip to: 11729
/* 11404 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11407 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 11426
/* 11411 */   MCD::OPC_CheckPredicate, 14, 27, 9, // Skip to: 13746
/* 11415 */   MCD::OPC_CheckField, 11, 5, 0, 21, 9, // Skip to: 13746
/* 11421 */   MCD::OPC_Decode, 183, 3, 214, 1, // Opcode: CMPU_EQ_QB
/* 11426 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 11445
/* 11430 */   MCD::OPC_CheckPredicate, 14, 8, 9, // Skip to: 13746
/* 11434 */   MCD::OPC_CheckField, 11, 5, 0, 2, 9, // Skip to: 13746
/* 11440 */   MCD::OPC_Decode, 185, 3, 214, 1, // Opcode: CMPU_LT_QB
/* 11445 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 11464
/* 11449 */   MCD::OPC_CheckPredicate, 14, 245, 8, // Skip to: 13746
/* 11453 */   MCD::OPC_CheckField, 11, 5, 0, 239, 8, // Skip to: 13746
/* 11459 */   MCD::OPC_Decode, 184, 3, 214, 1, // Opcode: CMPU_LE_QB
/* 11464 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11477
/* 11468 */   MCD::OPC_CheckPredicate, 14, 226, 8, // Skip to: 13746
/* 11472 */   MCD::OPC_Decode, 211, 10, 211, 1, // Opcode: PICK_QB
/* 11477 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11490
/* 11481 */   MCD::OPC_CheckPredicate, 14, 213, 8, // Skip to: 13746
/* 11485 */   MCD::OPC_Decode, 180, 3, 213, 1, // Opcode: CMPGU_EQ_QB
/* 11490 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11503
/* 11494 */   MCD::OPC_CheckPredicate, 14, 200, 8, // Skip to: 13746
/* 11498 */   MCD::OPC_Decode, 182, 3, 213, 1, // Opcode: CMPGU_LT_QB
/* 11503 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11516
/* 11507 */   MCD::OPC_CheckPredicate, 14, 187, 8, // Skip to: 13746
/* 11511 */   MCD::OPC_Decode, 181, 3, 213, 1, // Opcode: CMPGU_LE_QB
/* 11516 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11535
/* 11520 */   MCD::OPC_CheckPredicate, 14, 174, 8, // Skip to: 13746
/* 11524 */   MCD::OPC_CheckField, 11, 5, 0, 168, 8, // Skip to: 13746
/* 11530 */   MCD::OPC_Decode, 187, 3, 214, 1, // Opcode: CMP_EQ_PH
/* 11535 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 11554
/* 11539 */   MCD::OPC_CheckPredicate, 14, 155, 8, // Skip to: 13746
/* 11543 */   MCD::OPC_CheckField, 11, 5, 0, 149, 8, // Skip to: 13746
/* 11549 */   MCD::OPC_Decode, 195, 3, 214, 1, // Opcode: CMP_LT_PH
/* 11554 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 11573
/* 11558 */   MCD::OPC_CheckPredicate, 14, 136, 8, // Skip to: 13746
/* 11562 */   MCD::OPC_CheckField, 11, 5, 0, 130, 8, // Skip to: 13746
/* 11568 */   MCD::OPC_Decode, 192, 3, 214, 1, // Opcode: CMP_LE_PH
/* 11573 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11586
/* 11577 */   MCD::OPC_CheckPredicate, 14, 117, 8, // Skip to: 13746
/* 11581 */   MCD::OPC_Decode, 210, 10, 211, 1, // Opcode: PICK_PH
/* 11586 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11599
/* 11590 */   MCD::OPC_CheckPredicate, 14, 104, 8, // Skip to: 13746
/* 11594 */   MCD::OPC_Decode, 225, 10, 211, 1, // Opcode: PRECRQ_QB_PH
/* 11599 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11612
/* 11603 */   MCD::OPC_CheckPredicate, 37, 91, 8, // Skip to: 13746
/* 11607 */   MCD::OPC_Decode, 227, 10, 211, 1, // Opcode: PRECR_QB_PH
/* 11612 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11625
/* 11616 */   MCD::OPC_CheckPredicate, 14, 78, 8, // Skip to: 13746
/* 11620 */   MCD::OPC_Decode, 195, 10, 211, 1, // Opcode: PACKRL_PH
/* 11625 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11638
/* 11629 */   MCD::OPC_CheckPredicate, 14, 65, 8, // Skip to: 13746
/* 11633 */   MCD::OPC_Decode, 223, 10, 211, 1, // Opcode: PRECRQU_S_QB_PH
/* 11638 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11651
/* 11642 */   MCD::OPC_CheckPredicate, 14, 52, 8, // Skip to: 13746
/* 11646 */   MCD::OPC_Decode, 224, 10, 215, 1, // Opcode: PRECRQ_PH_W
/* 11651 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11664
/* 11655 */   MCD::OPC_CheckPredicate, 14, 39, 8, // Skip to: 13746
/* 11659 */   MCD::OPC_Decode, 226, 10, 215, 1, // Opcode: PRECRQ_RS_PH_W
/* 11664 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11677
/* 11668 */   MCD::OPC_CheckPredicate, 37, 26, 8, // Skip to: 13746
/* 11672 */   MCD::OPC_Decode, 177, 3, 213, 1, // Opcode: CMPGDU_EQ_QB
/* 11677 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11690
/* 11681 */   MCD::OPC_CheckPredicate, 37, 13, 8, // Skip to: 13746
/* 11685 */   MCD::OPC_Decode, 179, 3, 213, 1, // Opcode: CMPGDU_LT_QB
/* 11690 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11703
/* 11694 */   MCD::OPC_CheckPredicate, 37, 0, 8, // Skip to: 13746
/* 11698 */   MCD::OPC_Decode, 178, 3, 213, 1, // Opcode: CMPGDU_LE_QB
/* 11703 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11716
/* 11707 */   MCD::OPC_CheckPredicate, 37, 243, 7, // Skip to: 13746
/* 11711 */   MCD::OPC_Decode, 228, 10, 216, 1, // Opcode: PRECR_SRA_PH_W
/* 11716 */   MCD::OPC_FilterValue, 31, 234, 7, // Skip to: 13746
/* 11720 */   MCD::OPC_CheckPredicate, 37, 230, 7, // Skip to: 13746
/* 11724 */   MCD::OPC_Decode, 229, 10, 216, 1, // Opcode: PRECR_SRA_R_PH_W
/* 11729 */   MCD::OPC_FilterValue, 18, 74, 1, // Skip to: 12063
/* 11733 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11736 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11754
/* 11740 */   MCD::OPC_CheckPredicate, 37, 210, 7, // Skip to: 13746
/* 11744 */   MCD::OPC_CheckField, 21, 5, 0, 204, 7, // Skip to: 13746
/* 11750 */   MCD::OPC_Decode, 24, 217, 1, // Opcode: ABSQ_S_QB
/* 11754 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11767
/* 11758 */   MCD::OPC_CheckPredicate, 14, 192, 7, // Skip to: 13746
/* 11762 */   MCD::OPC_Decode, 166, 11, 218, 1, // Opcode: REPL_QB
/* 11767 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 11786
/* 11771 */   MCD::OPC_CheckPredicate, 14, 179, 7, // Skip to: 13746
/* 11775 */   MCD::OPC_CheckField, 21, 5, 0, 173, 7, // Skip to: 13746
/* 11781 */   MCD::OPC_Decode, 164, 11, 219, 1, // Opcode: REPLV_QB
/* 11786 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 11805
/* 11790 */   MCD::OPC_CheckPredicate, 14, 160, 7, // Skip to: 13746
/* 11794 */   MCD::OPC_CheckField, 21, 5, 0, 154, 7, // Skip to: 13746
/* 11800 */   MCD::OPC_Decode, 213, 10, 217, 1, // Opcode: PRECEQU_PH_QBL
/* 11805 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 11824
/* 11809 */   MCD::OPC_CheckPredicate, 14, 141, 7, // Skip to: 13746
/* 11813 */   MCD::OPC_CheckField, 21, 5, 0, 135, 7, // Skip to: 13746
/* 11819 */   MCD::OPC_Decode, 215, 10, 217, 1, // Opcode: PRECEQU_PH_QBR
/* 11824 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 11843
/* 11828 */   MCD::OPC_CheckPredicate, 14, 122, 7, // Skip to: 13746
/* 11832 */   MCD::OPC_CheckField, 21, 5, 0, 116, 7, // Skip to: 13746
/* 11838 */   MCD::OPC_Decode, 214, 10, 217, 1, // Opcode: PRECEQU_PH_QBLA
/* 11843 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 11862
/* 11847 */   MCD::OPC_CheckPredicate, 14, 103, 7, // Skip to: 13746
/* 11851 */   MCD::OPC_CheckField, 21, 5, 0, 97, 7, // Skip to: 13746
/* 11857 */   MCD::OPC_Decode, 216, 10, 217, 1, // Opcode: PRECEQU_PH_QBRA
/* 11862 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11880
/* 11866 */   MCD::OPC_CheckPredicate, 14, 84, 7, // Skip to: 13746
/* 11870 */   MCD::OPC_CheckField, 21, 5, 0, 78, 7, // Skip to: 13746
/* 11876 */   MCD::OPC_Decode, 23, 217, 1, // Opcode: ABSQ_S_PH
/* 11880 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11893
/* 11884 */   MCD::OPC_CheckPredicate, 14, 66, 7, // Skip to: 13746
/* 11888 */   MCD::OPC_Decode, 165, 11, 218, 1, // Opcode: REPL_PH
/* 11893 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 11912
/* 11897 */   MCD::OPC_CheckPredicate, 14, 53, 7, // Skip to: 13746
/* 11901 */   MCD::OPC_CheckField, 21, 5, 0, 47, 7, // Skip to: 13746
/* 11907 */   MCD::OPC_Decode, 163, 11, 219, 1, // Opcode: REPLV_PH
/* 11912 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11931
/* 11916 */   MCD::OPC_CheckPredicate, 14, 34, 7, // Skip to: 13746
/* 11920 */   MCD::OPC_CheckField, 21, 5, 0, 28, 7, // Skip to: 13746
/* 11926 */   MCD::OPC_Decode, 217, 10, 220, 1, // Opcode: PRECEQ_W_PHL
/* 11931 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 11950
/* 11935 */   MCD::OPC_CheckPredicate, 14, 15, 7, // Skip to: 13746
/* 11939 */   MCD::OPC_CheckField, 21, 5, 0, 9, 7, // Skip to: 13746
/* 11945 */   MCD::OPC_Decode, 218, 10, 220, 1, // Opcode: PRECEQ_W_PHR
/* 11950 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 11968
/* 11954 */   MCD::OPC_CheckPredicate, 14, 252, 6, // Skip to: 13746
/* 11958 */   MCD::OPC_CheckField, 21, 5, 0, 246, 6, // Skip to: 13746
/* 11964 */   MCD::OPC_Decode, 25, 221, 1, // Opcode: ABSQ_S_W
/* 11968 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 11987
/* 11972 */   MCD::OPC_CheckPredicate, 14, 234, 6, // Skip to: 13746
/* 11976 */   MCD::OPC_CheckField, 21, 5, 0, 228, 6, // Skip to: 13746
/* 11982 */   MCD::OPC_Decode, 129, 2, 221, 1, // Opcode: BITREV
/* 11987 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12006
/* 11991 */   MCD::OPC_CheckPredicate, 14, 215, 6, // Skip to: 13746
/* 11995 */   MCD::OPC_CheckField, 21, 5, 0, 209, 6, // Skip to: 13746
/* 12001 */   MCD::OPC_Decode, 219, 10, 217, 1, // Opcode: PRECEU_PH_QBL
/* 12006 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12025
/* 12010 */   MCD::OPC_CheckPredicate, 14, 196, 6, // Skip to: 13746
/* 12014 */   MCD::OPC_CheckField, 21, 5, 0, 190, 6, // Skip to: 13746
/* 12020 */   MCD::OPC_Decode, 221, 10, 217, 1, // Opcode: PRECEU_PH_QBR
/* 12025 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12044
/* 12029 */   MCD::OPC_CheckPredicate, 14, 177, 6, // Skip to: 13746
/* 12033 */   MCD::OPC_CheckField, 21, 5, 0, 171, 6, // Skip to: 13746
/* 12039 */   MCD::OPC_Decode, 220, 10, 217, 1, // Opcode: PRECEU_PH_QBLA
/* 12044 */   MCD::OPC_FilterValue, 31, 162, 6, // Skip to: 13746
/* 12048 */   MCD::OPC_CheckPredicate, 14, 158, 6, // Skip to: 13746
/* 12052 */   MCD::OPC_CheckField, 21, 5, 0, 152, 6, // Skip to: 13746
/* 12058 */   MCD::OPC_Decode, 222, 10, 217, 1, // Opcode: PRECEU_PH_QBRA
/* 12063 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 12354
/* 12067 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12070 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12083
/* 12074 */   MCD::OPC_CheckPredicate, 14, 132, 6, // Skip to: 13746
/* 12078 */   MCD::OPC_Decode, 253, 11, 222, 1, // Opcode: SHLL_QB
/* 12083 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12096
/* 12087 */   MCD::OPC_CheckPredicate, 14, 119, 6, // Skip to: 13746
/* 12091 */   MCD::OPC_Decode, 141, 12, 222, 1, // Opcode: SHRL_QB
/* 12096 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12109
/* 12100 */   MCD::OPC_CheckPredicate, 14, 106, 6, // Skip to: 13746
/* 12104 */   MCD::OPC_Decode, 249, 11, 223, 1, // Opcode: SHLLV_QB
/* 12109 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12122
/* 12113 */   MCD::OPC_CheckPredicate, 14, 93, 6, // Skip to: 13746
/* 12117 */   MCD::OPC_Decode, 139, 12, 223, 1, // Opcode: SHRLV_QB
/* 12122 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12135
/* 12126 */   MCD::OPC_CheckPredicate, 37, 80, 6, // Skip to: 13746
/* 12130 */   MCD::OPC_Decode, 134, 12, 222, 1, // Opcode: SHRA_QB
/* 12135 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12148
/* 12139 */   MCD::OPC_CheckPredicate, 37, 67, 6, // Skip to: 13746
/* 12143 */   MCD::OPC_Decode, 136, 12, 222, 1, // Opcode: SHRA_R_QB
/* 12148 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12161
/* 12152 */   MCD::OPC_CheckPredicate, 37, 54, 6, // Skip to: 13746
/* 12156 */   MCD::OPC_Decode, 129, 12, 223, 1, // Opcode: SHRAV_QB
/* 12161 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12174
/* 12165 */   MCD::OPC_CheckPredicate, 37, 41, 6, // Skip to: 13746
/* 12169 */   MCD::OPC_Decode, 131, 12, 223, 1, // Opcode: SHRAV_R_QB
/* 12174 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12187
/* 12178 */   MCD::OPC_CheckPredicate, 14, 28, 6, // Skip to: 13746
/* 12182 */   MCD::OPC_Decode, 252, 11, 222, 1, // Opcode: SHLL_PH
/* 12187 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12200
/* 12191 */   MCD::OPC_CheckPredicate, 14, 15, 6, // Skip to: 13746
/* 12195 */   MCD::OPC_Decode, 133, 12, 222, 1, // Opcode: SHRA_PH
/* 12200 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12213
/* 12204 */   MCD::OPC_CheckPredicate, 14, 2, 6, // Skip to: 13746
/* 12208 */   MCD::OPC_Decode, 248, 11, 223, 1, // Opcode: SHLLV_PH
/* 12213 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12226
/* 12217 */   MCD::OPC_CheckPredicate, 14, 245, 5, // Skip to: 13746
/* 12221 */   MCD::OPC_Decode, 128, 12, 223, 1, // Opcode: SHRAV_PH
/* 12226 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12239
/* 12230 */   MCD::OPC_CheckPredicate, 14, 232, 5, // Skip to: 13746
/* 12234 */   MCD::OPC_Decode, 254, 11, 222, 1, // Opcode: SHLL_S_PH
/* 12239 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12252
/* 12243 */   MCD::OPC_CheckPredicate, 14, 219, 5, // Skip to: 13746
/* 12247 */   MCD::OPC_Decode, 135, 12, 222, 1, // Opcode: SHRA_R_PH
/* 12252 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12265
/* 12256 */   MCD::OPC_CheckPredicate, 14, 206, 5, // Skip to: 13746
/* 12260 */   MCD::OPC_Decode, 250, 11, 223, 1, // Opcode: SHLLV_S_PH
/* 12265 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12278
/* 12269 */   MCD::OPC_CheckPredicate, 14, 193, 5, // Skip to: 13746
/* 12273 */   MCD::OPC_Decode, 130, 12, 223, 1, // Opcode: SHRAV_R_PH
/* 12278 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12291
/* 12282 */   MCD::OPC_CheckPredicate, 14, 180, 5, // Skip to: 13746
/* 12286 */   MCD::OPC_Decode, 255, 11, 224, 1, // Opcode: SHLL_S_W
/* 12291 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12304
/* 12295 */   MCD::OPC_CheckPredicate, 14, 167, 5, // Skip to: 13746
/* 12299 */   MCD::OPC_Decode, 137, 12, 224, 1, // Opcode: SHRA_R_W
/* 12304 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12316
/* 12308 */   MCD::OPC_CheckPredicate, 14, 154, 5, // Skip to: 13746
/* 12312 */   MCD::OPC_Decode, 251, 11, 44, // Opcode: SHLLV_S_W
/* 12316 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12328
/* 12320 */   MCD::OPC_CheckPredicate, 14, 142, 5, // Skip to: 13746
/* 12324 */   MCD::OPC_Decode, 132, 12, 44, // Opcode: SHRAV_R_W
/* 12328 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12341
/* 12332 */   MCD::OPC_CheckPredicate, 37, 130, 5, // Skip to: 13746
/* 12336 */   MCD::OPC_Decode, 140, 12, 222, 1, // Opcode: SHRL_PH
/* 12341 */   MCD::OPC_FilterValue, 27, 121, 5, // Skip to: 13746
/* 12345 */   MCD::OPC_CheckPredicate, 37, 117, 5, // Skip to: 13746
/* 12349 */   MCD::OPC_Decode, 138, 12, 223, 1, // Opcode: SHRLV_PH
/* 12354 */   MCD::OPC_FilterValue, 24, 199, 0, // Skip to: 12557
/* 12358 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12361 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12373
/* 12365 */   MCD::OPC_CheckPredicate, 37, 97, 5, // Skip to: 13746
/* 12369 */   MCD::OPC_Decode, 56, 211, 1, // Opcode: ADDUH_QB
/* 12373 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12386
/* 12377 */   MCD::OPC_CheckPredicate, 37, 85, 5, // Skip to: 13746
/* 12381 */   MCD::OPC_Decode, 141, 13, 211, 1, // Opcode: SUBUH_QB
/* 12386 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12398
/* 12390 */   MCD::OPC_CheckPredicate, 37, 72, 5, // Skip to: 13746
/* 12394 */   MCD::OPC_Decode, 57, 211, 1, // Opcode: ADDUH_R_QB
/* 12398 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12411
/* 12402 */   MCD::OPC_CheckPredicate, 37, 60, 5, // Skip to: 13746
/* 12406 */   MCD::OPC_Decode, 142, 13, 211, 1, // Opcode: SUBUH_R_QB
/* 12411 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 12423
/* 12415 */   MCD::OPC_CheckPredicate, 37, 47, 5, // Skip to: 13746
/* 12419 */   MCD::OPC_Decode, 35, 211, 1, // Opcode: ADDQH_PH
/* 12423 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12436
/* 12427 */   MCD::OPC_CheckPredicate, 37, 35, 5, // Skip to: 13746
/* 12431 */   MCD::OPC_Decode, 245, 12, 211, 1, // Opcode: SUBQH_PH
/* 12436 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12448
/* 12440 */   MCD::OPC_CheckPredicate, 37, 22, 5, // Skip to: 13746
/* 12444 */   MCD::OPC_Decode, 36, 211, 1, // Opcode: ADDQH_R_PH
/* 12448 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12461
/* 12452 */   MCD::OPC_CheckPredicate, 37, 10, 5, // Skip to: 13746
/* 12456 */   MCD::OPC_Decode, 246, 12, 211, 1, // Opcode: SUBQH_R_PH
/* 12461 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12474
/* 12465 */   MCD::OPC_CheckPredicate, 37, 253, 4, // Skip to: 13746
/* 12469 */   MCD::OPC_Decode, 136, 10, 211, 1, // Opcode: MUL_PH
/* 12474 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12487
/* 12478 */   MCD::OPC_CheckPredicate, 37, 240, 4, // Skip to: 13746
/* 12482 */   MCD::OPC_Decode, 140, 10, 211, 1, // Opcode: MUL_S_PH
/* 12487 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12498
/* 12491 */   MCD::OPC_CheckPredicate, 37, 227, 4, // Skip to: 13746
/* 12495 */   MCD::OPC_Decode, 38, 43, // Opcode: ADDQH_W
/* 12498 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12510
/* 12502 */   MCD::OPC_CheckPredicate, 37, 216, 4, // Skip to: 13746
/* 12506 */   MCD::OPC_Decode, 248, 12, 43, // Opcode: SUBQH_W
/* 12510 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 12521
/* 12514 */   MCD::OPC_CheckPredicate, 37, 204, 4, // Skip to: 13746
/* 12518 */   MCD::OPC_Decode, 37, 43, // Opcode: ADDQH_R_W
/* 12521 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12533
/* 12525 */   MCD::OPC_CheckPredicate, 37, 193, 4, // Skip to: 13746
/* 12529 */   MCD::OPC_Decode, 247, 12, 43, // Opcode: SUBQH_R_W
/* 12533 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12545
/* 12537 */   MCD::OPC_CheckPredicate, 37, 181, 4, // Skip to: 13746
/* 12541 */   MCD::OPC_Decode, 245, 9, 43, // Opcode: MULQ_S_W
/* 12545 */   MCD::OPC_FilterValue, 23, 173, 4, // Skip to: 13746
/* 12549 */   MCD::OPC_CheckPredicate, 37, 169, 4, // Skip to: 13746
/* 12553 */   MCD::OPC_Decode, 243, 9, 43, // Opcode: MULQ_RS_W
/* 12557 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 12621
/* 12561 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12564 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12583
/* 12568 */   MCD::OPC_CheckPredicate, 7, 150, 4, // Skip to: 13746
/* 12572 */   MCD::OPC_CheckField, 21, 5, 0, 144, 4, // Skip to: 13746
/* 12578 */   MCD::OPC_Decode, 164, 14, 221, 1, // Opcode: WSBH
/* 12583 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12602
/* 12587 */   MCD::OPC_CheckPredicate, 7, 131, 4, // Skip to: 13746
/* 12591 */   MCD::OPC_CheckField, 21, 5, 0, 125, 4, // Skip to: 13746
/* 12597 */   MCD::OPC_Decode, 218, 11, 221, 1, // Opcode: SEB
/* 12602 */   MCD::OPC_FilterValue, 24, 116, 4, // Skip to: 13746
/* 12606 */   MCD::OPC_CheckPredicate, 7, 112, 4, // Skip to: 13746
/* 12610 */   MCD::OPC_CheckField, 21, 5, 0, 106, 4, // Skip to: 13746
/* 12616 */   MCD::OPC_Decode, 222, 11, 221, 1, // Opcode: SEH
/* 12621 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 13046
/* 12625 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12628 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 12647
/* 12632 */   MCD::OPC_CheckPredicate, 37, 86, 4, // Skip to: 13746
/* 12636 */   MCD::OPC_CheckField, 13, 3, 0, 80, 4, // Skip to: 13746
/* 12642 */   MCD::OPC_Decode, 128, 5, 132, 1, // Opcode: DPA_W_PH
/* 12647 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 12666
/* 12651 */   MCD::OPC_CheckPredicate, 37, 67, 4, // Skip to: 13746
/* 12655 */   MCD::OPC_CheckField, 13, 3, 0, 61, 4, // Skip to: 13746
/* 12661 */   MCD::OPC_Decode, 143, 5, 132, 1, // Opcode: DPS_W_PH
/* 12666 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12685
/* 12670 */   MCD::OPC_CheckPredicate, 37, 48, 4, // Skip to: 13746
/* 12674 */   MCD::OPC_CheckField, 13, 3, 0, 42, 4, // Skip to: 13746
/* 12680 */   MCD::OPC_Decode, 249, 9, 132, 1, // Opcode: MULSA_W_PH
/* 12685 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12704
/* 12689 */   MCD::OPC_CheckPredicate, 14, 29, 4, // Skip to: 13746
/* 12693 */   MCD::OPC_CheckField, 13, 3, 0, 23, 4, // Skip to: 13746
/* 12699 */   MCD::OPC_Decode, 253, 4, 132, 1, // Opcode: DPAU_H_QBL
/* 12704 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12723
/* 12708 */   MCD::OPC_CheckPredicate, 14, 10, 4, // Skip to: 13746
/* 12712 */   MCD::OPC_CheckField, 13, 3, 0, 4, 4, // Skip to: 13746
/* 12718 */   MCD::OPC_Decode, 252, 4, 132, 1, // Opcode: DPAQ_S_W_PH
/* 12723 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12742
/* 12727 */   MCD::OPC_CheckPredicate, 14, 247, 3, // Skip to: 13746
/* 12731 */   MCD::OPC_CheckField, 13, 3, 0, 241, 3, // Skip to: 13746
/* 12737 */   MCD::OPC_Decode, 133, 5, 132, 1, // Opcode: DPSQ_S_W_PH
/* 12742 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12761
/* 12746 */   MCD::OPC_CheckPredicate, 14, 228, 3, // Skip to: 13746
/* 12750 */   MCD::OPC_CheckField, 13, 3, 0, 222, 3, // Skip to: 13746
/* 12756 */   MCD::OPC_Decode, 248, 9, 132, 1, // Opcode: MULSAQ_S_W_PH
/* 12761 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12780
/* 12765 */   MCD::OPC_CheckPredicate, 14, 209, 3, // Skip to: 13746
/* 12769 */   MCD::OPC_CheckField, 13, 3, 0, 203, 3, // Skip to: 13746
/* 12775 */   MCD::OPC_Decode, 254, 4, 132, 1, // Opcode: DPAU_H_QBR
/* 12780 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 12799
/* 12784 */   MCD::OPC_CheckPredicate, 37, 190, 3, // Skip to: 13746
/* 12788 */   MCD::OPC_CheckField, 13, 3, 0, 184, 3, // Skip to: 13746
/* 12794 */   MCD::OPC_Decode, 255, 4, 132, 1, // Opcode: DPAX_W_PH
/* 12799 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 12818
/* 12803 */   MCD::OPC_CheckPredicate, 37, 171, 3, // Skip to: 13746
/* 12807 */   MCD::OPC_CheckField, 13, 3, 0, 165, 3, // Skip to: 13746
/* 12813 */   MCD::OPC_Decode, 142, 5, 132, 1, // Opcode: DPSX_W_PH
/* 12818 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12837
/* 12822 */   MCD::OPC_CheckPredicate, 14, 152, 3, // Skip to: 13746
/* 12826 */   MCD::OPC_CheckField, 13, 3, 0, 146, 3, // Skip to: 13746
/* 12832 */   MCD::OPC_Decode, 140, 5, 132, 1, // Opcode: DPSU_H_QBL
/* 12837 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12856
/* 12841 */   MCD::OPC_CheckPredicate, 14, 133, 3, // Skip to: 13746
/* 12845 */   MCD::OPC_CheckField, 13, 3, 0, 127, 3, // Skip to: 13746
/* 12851 */   MCD::OPC_Decode, 251, 4, 132, 1, // Opcode: DPAQ_SA_L_W
/* 12856 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12875
/* 12860 */   MCD::OPC_CheckPredicate, 14, 114, 3, // Skip to: 13746
/* 12864 */   MCD::OPC_CheckField, 13, 3, 0, 108, 3, // Skip to: 13746
/* 12870 */   MCD::OPC_Decode, 132, 5, 132, 1, // Opcode: DPSQ_SA_L_W
/* 12875 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 12894
/* 12879 */   MCD::OPC_CheckPredicate, 14, 95, 3, // Skip to: 13746
/* 12883 */   MCD::OPC_CheckField, 13, 3, 0, 89, 3, // Skip to: 13746
/* 12889 */   MCD::OPC_Decode, 141, 5, 132, 1, // Opcode: DPSU_H_QBR
/* 12894 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12913
/* 12898 */   MCD::OPC_CheckPredicate, 14, 76, 3, // Skip to: 13746
/* 12902 */   MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 13746
/* 12908 */   MCD::OPC_Decode, 191, 8, 132, 1, // Opcode: MAQ_SA_W_PHL
/* 12913 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 12932
/* 12917 */   MCD::OPC_CheckPredicate, 14, 57, 3, // Skip to: 13746
/* 12921 */   MCD::OPC_CheckField, 13, 3, 0, 51, 3, // Skip to: 13746
/* 12927 */   MCD::OPC_Decode, 192, 8, 132, 1, // Opcode: MAQ_SA_W_PHR
/* 12932 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12951
/* 12936 */   MCD::OPC_CheckPredicate, 14, 38, 3, // Skip to: 13746
/* 12940 */   MCD::OPC_CheckField, 13, 3, 0, 32, 3, // Skip to: 13746
/* 12946 */   MCD::OPC_Decode, 193, 8, 132, 1, // Opcode: MAQ_S_W_PHL
/* 12951 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 12970
/* 12955 */   MCD::OPC_CheckPredicate, 14, 19, 3, // Skip to: 13746
/* 12959 */   MCD::OPC_CheckField, 13, 3, 0, 13, 3, // Skip to: 13746
/* 12965 */   MCD::OPC_Decode, 194, 8, 132, 1, // Opcode: MAQ_S_W_PHR
/* 12970 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 12989
/* 12974 */   MCD::OPC_CheckPredicate, 37, 0, 3, // Skip to: 13746
/* 12978 */   MCD::OPC_CheckField, 13, 3, 0, 250, 2, // Skip to: 13746
/* 12984 */   MCD::OPC_Decode, 250, 4, 132, 1, // Opcode: DPAQX_S_W_PH
/* 12989 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13008
/* 12993 */   MCD::OPC_CheckPredicate, 37, 237, 2, // Skip to: 13746
/* 12997 */   MCD::OPC_CheckField, 13, 3, 0, 231, 2, // Skip to: 13746
/* 13003 */   MCD::OPC_Decode, 131, 5, 132, 1, // Opcode: DPSQX_S_W_PH
/* 13008 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13027
/* 13012 */   MCD::OPC_CheckPredicate, 37, 218, 2, // Skip to: 13746
/* 13016 */   MCD::OPC_CheckField, 13, 3, 0, 212, 2, // Skip to: 13746
/* 13022 */   MCD::OPC_Decode, 249, 4, 132, 1, // Opcode: DPAQX_SA_W_PH
/* 13027 */   MCD::OPC_FilterValue, 27, 203, 2, // Skip to: 13746
/* 13031 */   MCD::OPC_CheckPredicate, 37, 199, 2, // Skip to: 13746
/* 13035 */   MCD::OPC_CheckField, 13, 3, 0, 193, 2, // Skip to: 13746
/* 13041 */   MCD::OPC_Decode, 130, 5, 132, 1, // Opcode: DPSQX_SA_W_PH
/* 13046 */   MCD::OPC_FilterValue, 49, 41, 0, // Skip to: 13091
/* 13050 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13053 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 13065
/* 13057 */   MCD::OPC_CheckPredicate, 37, 173, 2, // Skip to: 13746
/* 13061 */   MCD::OPC_Decode, 105, 225, 1, // Opcode: APPEND
/* 13065 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13078
/* 13069 */   MCD::OPC_CheckPredicate, 37, 161, 2, // Skip to: 13746
/* 13073 */   MCD::OPC_Decode, 234, 10, 225, 1, // Opcode: PREPEND
/* 13078 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 13746
/* 13082 */   MCD::OPC_CheckPredicate, 37, 148, 2, // Skip to: 13746
/* 13086 */   MCD::OPC_Decode, 181, 1, 225, 1, // Opcode: BALIGN
/* 13091 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 13409
/* 13095 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13098 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13117
/* 13102 */   MCD::OPC_CheckPredicate, 14, 128, 2, // Skip to: 13746
/* 13106 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 13746
/* 13112 */   MCD::OPC_Decode, 187, 5, 226, 1, // Opcode: EXTR_W
/* 13117 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13136
/* 13121 */   MCD::OPC_CheckPredicate, 14, 109, 2, // Skip to: 13746
/* 13125 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 13746
/* 13131 */   MCD::OPC_Decode, 183, 5, 227, 1, // Opcode: EXTRV_W
/* 13136 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13155
/* 13140 */   MCD::OPC_CheckPredicate, 14, 90, 2, // Skip to: 13746
/* 13144 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 13746
/* 13150 */   MCD::OPC_Decode, 176, 5, 226, 1, // Opcode: EXTP
/* 13155 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13174
/* 13159 */   MCD::OPC_CheckPredicate, 14, 71, 2, // Skip to: 13746
/* 13163 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 13746
/* 13169 */   MCD::OPC_Decode, 179, 5, 227, 1, // Opcode: EXTPV
/* 13174 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13193
/* 13178 */   MCD::OPC_CheckPredicate, 14, 52, 2, // Skip to: 13746
/* 13182 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 13746
/* 13188 */   MCD::OPC_Decode, 185, 5, 226, 1, // Opcode: EXTR_R_W
/* 13193 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13212
/* 13197 */   MCD::OPC_CheckPredicate, 14, 33, 2, // Skip to: 13746
/* 13201 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 13746
/* 13207 */   MCD::OPC_Decode, 181, 5, 227, 1, // Opcode: EXTRV_R_W
/* 13212 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13231
/* 13216 */   MCD::OPC_CheckPredicate, 14, 14, 2, // Skip to: 13746
/* 13220 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 13746
/* 13226 */   MCD::OPC_Decode, 184, 5, 226, 1, // Opcode: EXTR_RS_W
/* 13231 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13250
/* 13235 */   MCD::OPC_CheckPredicate, 14, 251, 1, // Skip to: 13746
/* 13239 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 13746
/* 13245 */   MCD::OPC_Decode, 180, 5, 227, 1, // Opcode: EXTRV_RS_W
/* 13250 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 13269
/* 13254 */   MCD::OPC_CheckPredicate, 14, 232, 1, // Skip to: 13746
/* 13258 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 13746
/* 13264 */   MCD::OPC_Decode, 177, 5, 226, 1, // Opcode: EXTPDP
/* 13269 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13288
/* 13273 */   MCD::OPC_CheckPredicate, 14, 213, 1, // Skip to: 13746
/* 13277 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 13746
/* 13283 */   MCD::OPC_Decode, 178, 5, 227, 1, // Opcode: EXTPDPV
/* 13288 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 13307
/* 13292 */   MCD::OPC_CheckPredicate, 14, 194, 1, // Skip to: 13746
/* 13296 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 13746
/* 13302 */   MCD::OPC_Decode, 186, 5, 226, 1, // Opcode: EXTR_S_H
/* 13307 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 13326
/* 13311 */   MCD::OPC_CheckPredicate, 14, 175, 1, // Skip to: 13746
/* 13315 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 13746
/* 13321 */   MCD::OPC_Decode, 182, 5, 227, 1, // Opcode: EXTRV_S_H
/* 13326 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 13339
/* 13330 */   MCD::OPC_CheckPredicate, 14, 156, 1, // Skip to: 13746
/* 13334 */   MCD::OPC_Decode, 159, 11, 228, 1, // Opcode: RDDSP
/* 13339 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 13352
/* 13343 */   MCD::OPC_CheckPredicate, 14, 143, 1, // Skip to: 13746
/* 13347 */   MCD::OPC_Decode, 163, 14, 229, 1, // Opcode: WRDSP
/* 13352 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13371
/* 13356 */   MCD::OPC_CheckPredicate, 14, 130, 1, // Skip to: 13746
/* 13360 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 13746
/* 13366 */   MCD::OPC_Decode, 246, 11, 230, 1, // Opcode: SHILO
/* 13371 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13390
/* 13375 */   MCD::OPC_CheckPredicate, 14, 111, 1, // Skip to: 13746
/* 13379 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 13746
/* 13385 */   MCD::OPC_Decode, 247, 11, 231, 1, // Opcode: SHILOV
/* 13390 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 13746
/* 13394 */   MCD::OPC_CheckPredicate, 14, 92, 1, // Skip to: 13746
/* 13398 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 13746
/* 13404 */   MCD::OPC_Decode, 222, 9, 231, 1, // Opcode: MTHLIP
/* 13409 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 13746
/* 13413 */   MCD::OPC_CheckPredicate, 6, 73, 1, // Skip to: 13746
/* 13417 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 13746
/* 13423 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 13746
/* 13429 */   MCD::OPC_Decode, 160, 11, 232, 1, // Opcode: RDHWR
/* 13434 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 13447
/* 13438 */   MCD::OPC_CheckPredicate, 6, 48, 1, // Skip to: 13746
/* 13442 */   MCD::OPC_Decode, 191, 7, 233, 1, // Opcode: LB
/* 13447 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 13460
/* 13451 */   MCD::OPC_CheckPredicate, 6, 35, 1, // Skip to: 13746
/* 13455 */   MCD::OPC_Decode, 222, 7, 233, 1, // Opcode: LH
/* 13460 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 13473
/* 13464 */   MCD::OPC_CheckPredicate, 13, 22, 1, // Skip to: 13746
/* 13468 */   MCD::OPC_Decode, 133, 8, 233, 1, // Opcode: LWL
/* 13473 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 13486
/* 13477 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 13746
/* 13481 */   MCD::OPC_Decode, 252, 7, 233, 1, // Opcode: LW
/* 13486 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 13499
/* 13490 */   MCD::OPC_CheckPredicate, 6, 252, 0, // Skip to: 13746
/* 13494 */   MCD::OPC_Decode, 196, 7, 233, 1, // Opcode: LBu
/* 13499 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 13512
/* 13503 */   MCD::OPC_CheckPredicate, 6, 239, 0, // Skip to: 13746
/* 13507 */   MCD::OPC_Decode, 227, 7, 233, 1, // Opcode: LHu
/* 13512 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 13525
/* 13516 */   MCD::OPC_CheckPredicate, 13, 226, 0, // Skip to: 13746
/* 13520 */   MCD::OPC_Decode, 142, 8, 233, 1, // Opcode: LWR
/* 13525 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 13538
/* 13529 */   MCD::OPC_CheckPredicate, 6, 213, 0, // Skip to: 13746
/* 13533 */   MCD::OPC_Decode, 192, 11, 233, 1, // Opcode: SB
/* 13538 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 13551
/* 13542 */   MCD::OPC_CheckPredicate, 6, 200, 0, // Skip to: 13746
/* 13546 */   MCD::OPC_Decode, 240, 11, 233, 1, // Opcode: SH
/* 13551 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 13564
/* 13555 */   MCD::OPC_CheckPredicate, 13, 187, 0, // Skip to: 13746
/* 13559 */   MCD::OPC_Decode, 171, 13, 233, 1, // Opcode: SWL
/* 13564 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 13577
/* 13568 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 13746
/* 13572 */   MCD::OPC_Decode, 163, 13, 233, 1, // Opcode: SW
/* 13577 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 13590
/* 13581 */   MCD::OPC_CheckPredicate, 13, 161, 0, // Skip to: 13746
/* 13585 */   MCD::OPC_Decode, 178, 13, 233, 1, // Opcode: SWR
/* 13590 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 13603
/* 13594 */   MCD::OPC_CheckPredicate, 38, 148, 0, // Skip to: 13746
/* 13598 */   MCD::OPC_Decode, 239, 2, 234, 1, // Opcode: CACHE
/* 13603 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 13616
/* 13607 */   MCD::OPC_CheckPredicate, 39, 135, 0, // Skip to: 13746
/* 13611 */   MCD::OPC_Decode, 231, 7, 233, 1, // Opcode: LL
/* 13616 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 13629
/* 13620 */   MCD::OPC_CheckPredicate, 22, 122, 0, // Skip to: 13746
/* 13624 */   MCD::OPC_Decode, 255, 7, 235, 1, // Opcode: LWC1
/* 13629 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 13642
/* 13633 */   MCD::OPC_CheckPredicate, 40, 109, 0, // Skip to: 13746
/* 13637 */   MCD::OPC_Decode, 129, 8, 236, 1, // Opcode: LWC2
/* 13642 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 13655
/* 13646 */   MCD::OPC_CheckPredicate, 38, 96, 0, // Skip to: 13746
/* 13650 */   MCD::OPC_Decode, 230, 10, 234, 1, // Opcode: PREF
/* 13655 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 13668
/* 13659 */   MCD::OPC_CheckPredicate, 30, 83, 0, // Skip to: 13746
/* 13663 */   MCD::OPC_Decode, 200, 7, 235, 1, // Opcode: LDC1
/* 13668 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 13681
/* 13672 */   MCD::OPC_CheckPredicate, 41, 70, 0, // Skip to: 13746
/* 13676 */   MCD::OPC_Decode, 203, 7, 236, 1, // Opcode: LDC2
/* 13681 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 13694
/* 13685 */   MCD::OPC_CheckPredicate, 39, 57, 0, // Skip to: 13746
/* 13689 */   MCD::OPC_Decode, 196, 11, 233, 1, // Opcode: SC
/* 13694 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 13707
/* 13698 */   MCD::OPC_CheckPredicate, 22, 44, 0, // Skip to: 13746
/* 13702 */   MCD::OPC_Decode, 166, 13, 235, 1, // Opcode: SWC1
/* 13707 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 13720
/* 13711 */   MCD::OPC_CheckPredicate, 40, 31, 0, // Skip to: 13746
/* 13715 */   MCD::OPC_Decode, 168, 13, 236, 1, // Opcode: SWC2
/* 13720 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 13733
/* 13724 */   MCD::OPC_CheckPredicate, 30, 18, 0, // Skip to: 13746
/* 13728 */   MCD::OPC_Decode, 206, 11, 235, 1, // Opcode: SDC1
/* 13733 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 13746
/* 13737 */   MCD::OPC_CheckPredicate, 41, 5, 0, // Skip to: 13746
/* 13741 */   MCD::OPC_Decode, 209, 11, 236, 1, // Opcode: SDC2
/* 13746 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 195, 1, // Skip to: 458
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 42, 20, 7, // Skip to: 1830
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 14, 7, // Skip to: 1830
/* 24 */      MCD::OPC_Decode, 245, 7, 237, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 47
/* 33 */      MCD::OPC_CheckPredicate, 42, 1, 7, // Skip to: 1830
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 251, 6, // Skip to: 1830
/* 43 */      MCD::OPC_Decode, 180, 7, 76, // Opcode: JR_HB_R6
/* 47 */      MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 59
/* 51 */      MCD::OPC_CheckPredicate, 42, 239, 6, // Skip to: 1830
/* 55 */      MCD::OPC_Decode, 205, 11, 78, // Opcode: SDBBP_R6
/* 59 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 83
/* 63 */      MCD::OPC_CheckPredicate, 42, 227, 6, // Skip to: 1830
/* 67 */      MCD::OPC_CheckField, 16, 5, 0, 221, 6, // Skip to: 1830
/* 73 */      MCD::OPC_CheckField, 6, 5, 1, 215, 6, // Skip to: 1830
/* 79 */      MCD::OPC_Decode, 176, 3, 14, // Opcode: CLZ_R6
/* 83 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 107
/* 87 */      MCD::OPC_CheckPredicate, 42, 203, 6, // Skip to: 1830
/* 91 */      MCD::OPC_CheckField, 16, 5, 0, 197, 6, // Skip to: 1830
/* 97 */      MCD::OPC_CheckField, 6, 5, 1, 191, 6, // Skip to: 1830
/* 103 */     MCD::OPC_Decode, 156, 3, 14, // Opcode: CLO_R6
/* 107 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 131
/* 111 */     MCD::OPC_CheckPredicate, 43, 179, 6, // Skip to: 1830
/* 115 */     MCD::OPC_CheckField, 16, 5, 0, 173, 6, // Skip to: 1830
/* 121 */     MCD::OPC_CheckField, 6, 5, 1, 167, 6, // Skip to: 1830
/* 127 */     MCD::OPC_Decode, 193, 4, 15, // Opcode: DCLZ_R6
/* 131 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 155
/* 135 */     MCD::OPC_CheckPredicate, 43, 155, 6, // Skip to: 1830
/* 139 */     MCD::OPC_CheckField, 16, 5, 0, 149, 6, // Skip to: 1830
/* 145 */     MCD::OPC_CheckField, 6, 5, 1, 143, 6, // Skip to: 1830
/* 151 */     MCD::OPC_Decode, 191, 4, 15, // Opcode: DCLO_R6
/* 155 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 174
/* 159 */     MCD::OPC_CheckPredicate, 43, 131, 6, // Skip to: 1830
/* 163 */     MCD::OPC_CheckField, 8, 3, 0, 125, 6, // Skip to: 1830
/* 169 */     MCD::OPC_Decode, 219, 4, 238, 1, // Opcode: DLSA_R6
/* 174 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 205
/* 178 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 181 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 193
/* 185 */     MCD::OPC_CheckPredicate, 42, 105, 6, // Skip to: 1830
/* 189 */     MCD::OPC_Decode, 139, 10, 43, // Opcode: MUL_R6
/* 193 */     MCD::OPC_FilterValue, 3, 97, 6, // Skip to: 1830
/* 197 */     MCD::OPC_CheckPredicate, 42, 93, 6, // Skip to: 1830
/* 201 */     MCD::OPC_Decode, 233, 9, 43, // Opcode: MUH
/* 205 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 236
/* 209 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 212 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 224
/* 216 */     MCD::OPC_CheckPredicate, 42, 74, 6, // Skip to: 1830
/* 220 */     MCD::OPC_Decode, 128, 10, 43, // Opcode: MULU
/* 224 */     MCD::OPC_FilterValue, 3, 66, 6, // Skip to: 1830
/* 228 */     MCD::OPC_CheckPredicate, 42, 62, 6, // Skip to: 1830
/* 232 */     MCD::OPC_Decode, 234, 9, 43, // Opcode: MUHU
/* 236 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 267
/* 240 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 243 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 255
/* 247 */     MCD::OPC_CheckPredicate, 42, 43, 6, // Skip to: 1830
/* 251 */     MCD::OPC_Decode, 205, 4, 43, // Opcode: DIV
/* 255 */     MCD::OPC_FilterValue, 3, 35, 6, // Skip to: 1830
/* 259 */     MCD::OPC_CheckPredicate, 42, 31, 6, // Skip to: 1830
/* 263 */     MCD::OPC_Decode, 134, 9, 43, // Opcode: MOD
/* 267 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 298
/* 271 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 274 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 286
/* 278 */     MCD::OPC_CheckPredicate, 42, 12, 6, // Skip to: 1830
/* 282 */     MCD::OPC_Decode, 206, 4, 43, // Opcode: DIVU
/* 286 */     MCD::OPC_FilterValue, 3, 4, 6, // Skip to: 1830
/* 290 */     MCD::OPC_CheckPredicate, 42, 0, 6, // Skip to: 1830
/* 294 */     MCD::OPC_Decode, 136, 9, 43, // Opcode: MODU
/* 298 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 329
/* 302 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 305 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 317
/* 309 */     MCD::OPC_CheckPredicate, 43, 237, 5, // Skip to: 1830
/* 313 */     MCD::OPC_Decode, 236, 4, 12, // Opcode: DMUL_R6
/* 317 */     MCD::OPC_FilterValue, 3, 229, 5, // Skip to: 1830
/* 321 */     MCD::OPC_CheckPredicate, 43, 225, 5, // Skip to: 1830
/* 325 */     MCD::OPC_Decode, 230, 4, 12, // Opcode: DMUH
/* 329 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 360
/* 333 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 336 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 348
/* 340 */     MCD::OPC_CheckPredicate, 43, 206, 5, // Skip to: 1830
/* 344 */     MCD::OPC_Decode, 235, 4, 12, // Opcode: DMULU
/* 348 */     MCD::OPC_FilterValue, 3, 198, 5, // Skip to: 1830
/* 352 */     MCD::OPC_CheckPredicate, 43, 194, 5, // Skip to: 1830
/* 356 */     MCD::OPC_Decode, 231, 4, 12, // Opcode: DMUHU
/* 360 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 391
/* 364 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 367 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 43, 175, 5, // Skip to: 1830
/* 375 */     MCD::OPC_Decode, 194, 4, 12, // Opcode: DDIV
/* 379 */     MCD::OPC_FilterValue, 3, 167, 5, // Skip to: 1830
/* 383 */     MCD::OPC_CheckPredicate, 43, 163, 5, // Skip to: 1830
/* 387 */     MCD::OPC_Decode, 224, 4, 12, // Opcode: DMOD
/* 391 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 422
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 410
/* 402 */     MCD::OPC_CheckPredicate, 43, 144, 5, // Skip to: 1830
/* 406 */     MCD::OPC_Decode, 195, 4, 12, // Opcode: DDIVU
/* 410 */     MCD::OPC_FilterValue, 3, 136, 5, // Skip to: 1830
/* 414 */     MCD::OPC_CheckPredicate, 43, 132, 5, // Skip to: 1830
/* 418 */     MCD::OPC_Decode, 225, 4, 12, // Opcode: DMODU
/* 422 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 440
/* 426 */     MCD::OPC_CheckPredicate, 44, 120, 5, // Skip to: 1830
/* 430 */     MCD::OPC_CheckField, 6, 5, 0, 114, 5, // Skip to: 1830
/* 436 */     MCD::OPC_Decode, 226, 11, 43, // Opcode: SELEQZ
/* 440 */     MCD::OPC_FilterValue, 55, 106, 5, // Skip to: 1830
/* 444 */     MCD::OPC_CheckPredicate, 44, 102, 5, // Skip to: 1830
/* 448 */     MCD::OPC_CheckField, 6, 5, 0, 96, 5, // Skip to: 1830
/* 454 */     MCD::OPC_Decode, 231, 11, 43, // Opcode: SELNEZ
/* 458 */     MCD::OPC_FilterValue, 1, 47, 0, // Skip to: 509
/* 462 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 465 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 478
/* 469 */     MCD::OPC_CheckPredicate, 43, 77, 5, // Skip to: 1830
/* 473 */     MCD::OPC_Decode, 185, 4, 239, 1, // Opcode: DAHI
/* 478 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 496
/* 482 */     MCD::OPC_CheckPredicate, 42, 64, 5, // Skip to: 1830
/* 486 */     MCD::OPC_CheckField, 21, 5, 0, 58, 5, // Skip to: 1830
/* 492 */     MCD::OPC_Decode, 178, 1, 89, // Opcode: BAL
/* 496 */     MCD::OPC_FilterValue, 30, 50, 5, // Skip to: 1830
/* 500 */     MCD::OPC_CheckPredicate, 43, 46, 5, // Skip to: 1830
/* 504 */     MCD::OPC_Decode, 187, 4, 239, 1, // Opcode: DATI
/* 509 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 522
/* 513 */     MCD::OPC_CheckPredicate, 42, 33, 5, // Skip to: 1830
/* 517 */     MCD::OPC_Decode, 224, 1, 240, 1, // Opcode: BGEZALC
/* 522 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 535
/* 526 */     MCD::OPC_CheckPredicate, 42, 20, 5, // Skip to: 1830
/* 530 */     MCD::OPC_Decode, 148, 2, 241, 1, // Opcode: BLTZALC
/* 535 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 548
/* 539 */     MCD::OPC_CheckPredicate, 42, 7, 5, // Skip to: 1830
/* 543 */     MCD::OPC_Decode, 209, 1, 242, 1, // Opcode: BEQC
/* 548 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 560
/* 552 */     MCD::OPC_CheckPredicate, 42, 250, 4, // Skip to: 1830
/* 556 */     MCD::OPC_Decode, 146, 1, 55, // Opcode: AUI
/* 560 */     MCD::OPC_FilterValue, 17, 5, 3, // Skip to: 1337
/* 564 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 567 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 580
/* 571 */     MCD::OPC_CheckPredicate, 45, 231, 4, // Skip to: 1830
/* 575 */     MCD::OPC_Decode, 188, 1, 243, 1, // Opcode: BC1EQZ
/* 580 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 593
/* 584 */     MCD::OPC_CheckPredicate, 45, 218, 4, // Skip to: 1830
/* 588 */     MCD::OPC_Decode, 192, 1, 243, 1, // Opcode: BC1NEZ
/* 593 */     MCD::OPC_FilterValue, 16, 150, 0, // Skip to: 747
/* 597 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 600 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 613
/* 604 */     MCD::OPC_CheckPredicate, 45, 198, 4, // Skip to: 1830
/* 608 */     MCD::OPC_Decode, 237, 11, 244, 1, // Opcode: SEL_S
/* 613 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 625
/* 617 */     MCD::OPC_CheckPredicate, 45, 185, 4, // Skip to: 1830
/* 621 */     MCD::OPC_Decode, 230, 11, 107, // Opcode: SELEQZ_S
/* 625 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 637
/* 629 */     MCD::OPC_CheckPredicate, 45, 173, 4, // Skip to: 1830
/* 633 */     MCD::OPC_Decode, 235, 11, 107, // Opcode: SELNEZ_S
/* 637 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 650
/* 641 */     MCD::OPC_CheckPredicate, 45, 161, 4, // Skip to: 1830
/* 645 */     MCD::OPC_Decode, 172, 8, 245, 1, // Opcode: MADDF_S
/* 650 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 663
/* 654 */     MCD::OPC_CheckPredicate, 45, 148, 4, // Skip to: 1830
/* 658 */     MCD::OPC_Decode, 192, 9, 245, 1, // Opcode: MSUBF_S
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 45, 135, 4, // Skip to: 1830
/* 671 */     MCD::OPC_CheckField, 16, 5, 0, 129, 4, // Skip to: 1830
/* 677 */     MCD::OPC_Decode, 168, 11, 108, // Opcode: RINT_S
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 45, 117, 4, // Skip to: 1830
/* 689 */     MCD::OPC_CheckField, 16, 5, 0, 111, 4, // Skip to: 1830
/* 695 */     MCD::OPC_Decode, 136, 3, 108, // Opcode: CLASS_S
/* 699 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 45, 99, 4, // Skip to: 1830
/* 707 */     MCD::OPC_Decode, 251, 8, 107, // Opcode: MIN_S
/* 711 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 723
/* 715 */     MCD::OPC_CheckPredicate, 45, 87, 4, // Skip to: 1830
/* 719 */     MCD::OPC_Decode, 210, 8, 107, // Opcode: MAX_S
/* 723 */     MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 735
/* 727 */     MCD::OPC_CheckPredicate, 45, 75, 4, // Skip to: 1830
/* 731 */     MCD::OPC_Decode, 237, 8, 107, // Opcode: MINA_S
/* 735 */     MCD::OPC_FilterValue, 31, 67, 4, // Skip to: 1830
/* 739 */     MCD::OPC_CheckPredicate, 45, 63, 4, // Skip to: 1830
/* 743 */     MCD::OPC_Decode, 196, 8, 107, // Opcode: MAXA_S
/* 747 */     MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 907
/* 751 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 754 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 767
/* 758 */     MCD::OPC_CheckPredicate, 45, 44, 4, // Skip to: 1830
/* 762 */     MCD::OPC_Decode, 236, 11, 246, 1, // Opcode: SEL_D
/* 767 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 780
/* 771 */     MCD::OPC_CheckPredicate, 45, 31, 4, // Skip to: 1830
/* 775 */     MCD::OPC_Decode, 228, 11, 247, 1, // Opcode: SELEQZ_D
/* 780 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 793
/* 784 */     MCD::OPC_CheckPredicate, 45, 18, 4, // Skip to: 1830
/* 788 */     MCD::OPC_Decode, 233, 11, 247, 1, // Opcode: SELNEZ_D
/* 793 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 806
/* 797 */     MCD::OPC_CheckPredicate, 45, 5, 4, // Skip to: 1830
/* 801 */     MCD::OPC_Decode, 171, 8, 248, 1, // Opcode: MADDF_D
/* 806 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 819
/* 810 */     MCD::OPC_CheckPredicate, 45, 248, 3, // Skip to: 1830
/* 814 */     MCD::OPC_Decode, 191, 9, 248, 1, // Opcode: MSUBF_D
/* 819 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 837
/* 823 */     MCD::OPC_CheckPredicate, 45, 235, 3, // Skip to: 1830
/* 827 */     MCD::OPC_CheckField, 16, 5, 0, 229, 3, // Skip to: 1830
/* 833 */     MCD::OPC_Decode, 167, 11, 119, // Opcode: RINT_D
/* 837 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 855
/* 841 */     MCD::OPC_CheckPredicate, 45, 217, 3, // Skip to: 1830
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 211, 3, // Skip to: 1830
/* 851 */     MCD::OPC_Decode, 135, 3, 119, // Opcode: CLASS_D
/* 855 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 868
/* 859 */     MCD::OPC_CheckPredicate, 45, 199, 3, // Skip to: 1830
/* 863 */     MCD::OPC_Decode, 250, 8, 247, 1, // Opcode: MIN_D
/* 868 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 881
/* 872 */     MCD::OPC_CheckPredicate, 45, 186, 3, // Skip to: 1830
/* 876 */     MCD::OPC_Decode, 209, 8, 247, 1, // Opcode: MAX_D
/* 881 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckPredicate, 45, 173, 3, // Skip to: 1830
/* 889 */     MCD::OPC_Decode, 236, 8, 247, 1, // Opcode: MINA_D
/* 894 */     MCD::OPC_FilterValue, 31, 164, 3, // Skip to: 1830
/* 898 */     MCD::OPC_CheckPredicate, 45, 160, 3, // Skip to: 1830
/* 902 */     MCD::OPC_Decode, 195, 8, 247, 1, // Opcode: MAXA_D
/* 907 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1122
/* 911 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 914 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 927
/* 918 */     MCD::OPC_CheckPredicate, 45, 140, 3, // Skip to: 1830
/* 922 */     MCD::OPC_Decode, 190, 3, 249, 1, // Opcode: CMP_F_S
/* 927 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 940
/* 931 */     MCD::OPC_CheckPredicate, 45, 127, 3, // Skip to: 1830
/* 935 */     MCD::OPC_Decode, 220, 3, 249, 1, // Opcode: CMP_UN_S
/* 940 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 953
/* 944 */     MCD::OPC_CheckPredicate, 45, 114, 3, // Skip to: 1830
/* 948 */     MCD::OPC_Decode, 188, 3, 249, 1, // Opcode: CMP_EQ_S
/* 953 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 45, 101, 3, // Skip to: 1830
/* 961 */     MCD::OPC_Decode, 214, 3, 249, 1, // Opcode: CMP_UEQ_S
/* 966 */     MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 979
/* 970 */     MCD::OPC_CheckPredicate, 45, 88, 3, // Skip to: 1830
/* 974 */     MCD::OPC_Decode, 196, 3, 249, 1, // Opcode: CMP_LT_S
/* 979 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 992
/* 983 */     MCD::OPC_CheckPredicate, 45, 75, 3, // Skip to: 1830
/* 987 */     MCD::OPC_Decode, 218, 3, 249, 1, // Opcode: CMP_ULT_S
/* 992 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1005
/* 996 */     MCD::OPC_CheckPredicate, 45, 62, 3, // Skip to: 1830
/* 1000 */    MCD::OPC_Decode, 193, 3, 249, 1, // Opcode: CMP_LE_S
/* 1005 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1018
/* 1009 */    MCD::OPC_CheckPredicate, 45, 49, 3, // Skip to: 1830
/* 1013 */    MCD::OPC_Decode, 216, 3, 249, 1, // Opcode: CMP_ULE_S
/* 1018 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1031
/* 1022 */    MCD::OPC_CheckPredicate, 45, 36, 3, // Skip to: 1830
/* 1026 */    MCD::OPC_Decode, 198, 3, 249, 1, // Opcode: CMP_SAF_S
/* 1031 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1044
/* 1035 */    MCD::OPC_CheckPredicate, 45, 23, 3, // Skip to: 1830
/* 1039 */    MCD::OPC_Decode, 212, 3, 249, 1, // Opcode: CMP_SUN_S
/* 1044 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1057
/* 1048 */    MCD::OPC_CheckPredicate, 45, 10, 3, // Skip to: 1830
/* 1052 */    MCD::OPC_Decode, 200, 3, 249, 1, // Opcode: CMP_SEQ_S
/* 1057 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1070
/* 1061 */    MCD::OPC_CheckPredicate, 45, 253, 2, // Skip to: 1830
/* 1065 */    MCD::OPC_Decode, 206, 3, 249, 1, // Opcode: CMP_SUEQ_S
/* 1070 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1083
/* 1074 */    MCD::OPC_CheckPredicate, 45, 240, 2, // Skip to: 1830
/* 1078 */    MCD::OPC_Decode, 204, 3, 249, 1, // Opcode: CMP_SLT_S
/* 1083 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1096
/* 1087 */    MCD::OPC_CheckPredicate, 45, 227, 2, // Skip to: 1830
/* 1091 */    MCD::OPC_Decode, 210, 3, 249, 1, // Opcode: CMP_SULT_S
/* 1096 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1109
/* 1100 */    MCD::OPC_CheckPredicate, 45, 214, 2, // Skip to: 1830
/* 1104 */    MCD::OPC_Decode, 202, 3, 249, 1, // Opcode: CMP_SLE_S
/* 1109 */    MCD::OPC_FilterValue, 15, 205, 2, // Skip to: 1830
/* 1113 */    MCD::OPC_CheckPredicate, 45, 201, 2, // Skip to: 1830
/* 1117 */    MCD::OPC_Decode, 208, 3, 249, 1, // Opcode: CMP_SULE_S
/* 1122 */    MCD::OPC_FilterValue, 21, 192, 2, // Skip to: 1830
/* 1126 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1129 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1142
/* 1133 */    MCD::OPC_CheckPredicate, 45, 181, 2, // Skip to: 1830
/* 1137 */    MCD::OPC_Decode, 189, 3, 250, 1, // Opcode: CMP_F_D
/* 1142 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1155
/* 1146 */    MCD::OPC_CheckPredicate, 45, 168, 2, // Skip to: 1830
/* 1150 */    MCD::OPC_Decode, 219, 3, 250, 1, // Opcode: CMP_UN_D
/* 1155 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1168
/* 1159 */    MCD::OPC_CheckPredicate, 45, 155, 2, // Skip to: 1830
/* 1163 */    MCD::OPC_Decode, 186, 3, 250, 1, // Opcode: CMP_EQ_D
/* 1168 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1181
/* 1172 */    MCD::OPC_CheckPredicate, 45, 142, 2, // Skip to: 1830
/* 1176 */    MCD::OPC_Decode, 213, 3, 250, 1, // Opcode: CMP_UEQ_D
/* 1181 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1194
/* 1185 */    MCD::OPC_CheckPredicate, 45, 129, 2, // Skip to: 1830
/* 1189 */    MCD::OPC_Decode, 194, 3, 250, 1, // Opcode: CMP_LT_D
/* 1194 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1207
/* 1198 */    MCD::OPC_CheckPredicate, 45, 116, 2, // Skip to: 1830
/* 1202 */    MCD::OPC_Decode, 217, 3, 250, 1, // Opcode: CMP_ULT_D
/* 1207 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1220
/* 1211 */    MCD::OPC_CheckPredicate, 45, 103, 2, // Skip to: 1830
/* 1215 */    MCD::OPC_Decode, 191, 3, 250, 1, // Opcode: CMP_LE_D
/* 1220 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1233
/* 1224 */    MCD::OPC_CheckPredicate, 45, 90, 2, // Skip to: 1830
/* 1228 */    MCD::OPC_Decode, 215, 3, 250, 1, // Opcode: CMP_ULE_D
/* 1233 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1246
/* 1237 */    MCD::OPC_CheckPredicate, 45, 77, 2, // Skip to: 1830
/* 1241 */    MCD::OPC_Decode, 197, 3, 250, 1, // Opcode: CMP_SAF_D
/* 1246 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1259
/* 1250 */    MCD::OPC_CheckPredicate, 45, 64, 2, // Skip to: 1830
/* 1254 */    MCD::OPC_Decode, 211, 3, 250, 1, // Opcode: CMP_SUN_D
/* 1259 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1272
/* 1263 */    MCD::OPC_CheckPredicate, 45, 51, 2, // Skip to: 1830
/* 1267 */    MCD::OPC_Decode, 199, 3, 250, 1, // Opcode: CMP_SEQ_D
/* 1272 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1285
/* 1276 */    MCD::OPC_CheckPredicate, 45, 38, 2, // Skip to: 1830
/* 1280 */    MCD::OPC_Decode, 205, 3, 250, 1, // Opcode: CMP_SUEQ_D
/* 1285 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1298
/* 1289 */    MCD::OPC_CheckPredicate, 45, 25, 2, // Skip to: 1830
/* 1293 */    MCD::OPC_Decode, 203, 3, 250, 1, // Opcode: CMP_SLT_D
/* 1298 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1311
/* 1302 */    MCD::OPC_CheckPredicate, 45, 12, 2, // Skip to: 1830
/* 1306 */    MCD::OPC_Decode, 209, 3, 250, 1, // Opcode: CMP_SULT_D
/* 1311 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1324
/* 1315 */    MCD::OPC_CheckPredicate, 45, 255, 1, // Skip to: 1830
/* 1319 */    MCD::OPC_Decode, 201, 3, 250, 1, // Opcode: CMP_SLE_D
/* 1324 */    MCD::OPC_FilterValue, 15, 246, 1, // Skip to: 1830
/* 1328 */    MCD::OPC_CheckPredicate, 45, 242, 1, // Skip to: 1830
/* 1332 */    MCD::OPC_Decode, 207, 3, 250, 1, // Opcode: CMP_SULE_D
/* 1337 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1422
/* 1341 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1344 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1357
/* 1348 */    MCD::OPC_CheckPredicate, 42, 222, 1, // Skip to: 1830
/* 1352 */    MCD::OPC_Decode, 196, 1, 251, 1, // Opcode: BC2EQZ
/* 1357 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1370
/* 1361 */    MCD::OPC_CheckPredicate, 42, 209, 1, // Skip to: 1830
/* 1365 */    MCD::OPC_Decode, 130, 8, 252, 1, // Opcode: LWC2_R6
/* 1370 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1383
/* 1374 */    MCD::OPC_CheckPredicate, 42, 196, 1, // Skip to: 1830
/* 1378 */    MCD::OPC_Decode, 169, 13, 252, 1, // Opcode: SWC2_R6
/* 1383 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1396
/* 1387 */    MCD::OPC_CheckPredicate, 42, 183, 1, // Skip to: 1830
/* 1391 */    MCD::OPC_Decode, 197, 1, 251, 1, // Opcode: BC2NEZ
/* 1396 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1409
/* 1400 */    MCD::OPC_CheckPredicate, 42, 170, 1, // Skip to: 1830
/* 1404 */    MCD::OPC_Decode, 204, 7, 252, 1, // Opcode: LDC2_R6
/* 1409 */    MCD::OPC_FilterValue, 15, 161, 1, // Skip to: 1830
/* 1413 */    MCD::OPC_CheckPredicate, 42, 157, 1, // Skip to: 1830
/* 1417 */    MCD::OPC_Decode, 210, 11, 252, 1, // Opcode: SDC2_R6
/* 1422 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1435
/* 1426 */    MCD::OPC_CheckPredicate, 42, 144, 1, // Skip to: 1830
/* 1430 */    MCD::OPC_Decode, 229, 1, 253, 1, // Opcode: BGEZC
/* 1435 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1448
/* 1439 */    MCD::OPC_CheckPredicate, 42, 131, 1, // Skip to: 1830
/* 1443 */    MCD::OPC_Decode, 153, 2, 254, 1, // Opcode: BLTZC
/* 1448 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1461
/* 1452 */    MCD::OPC_CheckPredicate, 42, 118, 1, // Skip to: 1830
/* 1456 */    MCD::OPC_Decode, 162, 2, 255, 1, // Opcode: BNEC
/* 1461 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1474
/* 1465 */    MCD::OPC_CheckPredicate, 43, 105, 1, // Skip to: 1830
/* 1469 */    MCD::OPC_Decode, 188, 4, 128, 2, // Opcode: DAUI
/* 1474 */    MCD::OPC_FilterValue, 31, 182, 0, // Skip to: 1660
/* 1478 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1481 */    MCD::OPC_FilterValue, 32, 40, 0, // Skip to: 1525
/* 1485 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1488 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1513
/* 1492 */    MCD::OPC_CheckPredicate, 42, 78, 1, // Skip to: 1830
/* 1496 */    MCD::OPC_CheckField, 21, 5, 0, 72, 1, // Skip to: 1830
/* 1502 */    MCD::OPC_CheckField, 6, 2, 0, 66, 1, // Skip to: 1830
/* 1508 */    MCD::OPC_Decode, 130, 2, 221, 1, // Opcode: BITSWAP
/* 1513 */    MCD::OPC_FilterValue, 2, 57, 1, // Skip to: 1830
/* 1517 */    MCD::OPC_CheckPredicate, 42, 53, 1, // Skip to: 1830
/* 1521 */    MCD::OPC_Decode, 86, 237, 1, // Opcode: ALIGN
/* 1525 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1570
/* 1529 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1532 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1557
/* 1536 */    MCD::OPC_CheckPredicate, 43, 34, 1, // Skip to: 1830
/* 1540 */    MCD::OPC_CheckField, 21, 5, 0, 28, 1, // Skip to: 1830
/* 1546 */    MCD::OPC_CheckField, 6, 3, 0, 22, 1, // Skip to: 1830
/* 1552 */    MCD::OPC_Decode, 189, 4, 129, 2, // Opcode: DBITSWAP
/* 1557 */    MCD::OPC_FilterValue, 1, 13, 1, // Skip to: 1830
/* 1561 */    MCD::OPC_CheckPredicate, 43, 9, 1, // Skip to: 1830
/* 1565 */    MCD::OPC_Decode, 186, 4, 130, 2, // Opcode: DALIGN
/* 1570 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1589
/* 1574 */    MCD::OPC_CheckPredicate, 42, 252, 0, // Skip to: 1830
/* 1578 */    MCD::OPC_CheckField, 6, 1, 0, 246, 0, // Skip to: 1830
/* 1584 */    MCD::OPC_Decode, 242, 2, 131, 2, // Opcode: CACHE_R6
/* 1589 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1602
/* 1593 */    MCD::OPC_CheckPredicate, 42, 233, 0, // Skip to: 1830
/* 1597 */    MCD::OPC_Decode, 200, 11, 132, 2, // Opcode: SC_R6
/* 1602 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1615
/* 1606 */    MCD::OPC_CheckPredicate, 42, 220, 0, // Skip to: 1830
/* 1610 */    MCD::OPC_Decode, 198, 11, 132, 2, // Opcode: SCD_R6
/* 1615 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1634
/* 1619 */    MCD::OPC_CheckPredicate, 42, 207, 0, // Skip to: 1830
/* 1623 */    MCD::OPC_CheckField, 6, 1, 0, 201, 0, // Skip to: 1830
/* 1629 */    MCD::OPC_Decode, 233, 10, 131, 2, // Opcode: PREF_R6
/* 1634 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1647
/* 1638 */    MCD::OPC_CheckPredicate, 42, 188, 0, // Skip to: 1830
/* 1642 */    MCD::OPC_Decode, 235, 7, 132, 2, // Opcode: LL_R6
/* 1647 */    MCD::OPC_FilterValue, 55, 179, 0, // Skip to: 1830
/* 1651 */    MCD::OPC_CheckPredicate, 42, 175, 0, // Skip to: 1830
/* 1655 */    MCD::OPC_Decode, 233, 7, 132, 2, // Opcode: LLD_R6
/* 1660 */    MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 1672
/* 1664 */    MCD::OPC_CheckPredicate, 42, 162, 0, // Skip to: 1830
/* 1668 */    MCD::OPC_Decode, 187, 1, 71, // Opcode: BC
/* 1672 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1699
/* 1676 */    MCD::OPC_CheckPredicate, 42, 10, 0, // Skip to: 1690
/* 1680 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1690
/* 1686 */    MCD::OPC_Decode, 172, 7, 60, // Opcode: JIC
/* 1690 */    MCD::OPC_CheckPredicate, 42, 136, 0, // Skip to: 1830
/* 1694 */    MCD::OPC_Decode, 214, 1, 133, 2, // Opcode: BEQZC
/* 1699 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 1711
/* 1703 */    MCD::OPC_CheckPredicate, 42, 123, 0, // Skip to: 1830
/* 1707 */    MCD::OPC_Decode, 179, 1, 71, // Opcode: BALC
/* 1711 */    MCD::OPC_FilterValue, 59, 88, 0, // Skip to: 1803
/* 1715 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1718 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1729
/* 1722 */    MCD::OPC_CheckPredicate, 42, 104, 0, // Skip to: 1830
/* 1726 */    MCD::OPC_Decode, 27, 69, // Opcode: ADDIUPC
/* 1729 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1741
/* 1733 */    MCD::OPC_CheckPredicate, 42, 93, 0, // Skip to: 1830
/* 1737 */    MCD::OPC_Decode, 139, 8, 69, // Opcode: LWPC
/* 1741 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1753
/* 1745 */    MCD::OPC_CheckPredicate, 42, 81, 0, // Skip to: 1830
/* 1749 */    MCD::OPC_Decode, 146, 8, 69, // Opcode: LWUPC
/* 1753 */    MCD::OPC_FilterValue, 3, 73, 0, // Skip to: 1830
/* 1757 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1760 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1773
/* 1764 */    MCD::OPC_CheckPredicate, 43, 62, 0, // Skip to: 1830
/* 1768 */    MCD::OPC_Decode, 211, 7, 134, 2, // Opcode: LDPC
/* 1773 */    MCD::OPC_FilterValue, 1, 53, 0, // Skip to: 1830
/* 1777 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1780 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1792
/* 1784 */    MCD::OPC_CheckPredicate, 42, 42, 0, // Skip to: 1830
/* 1788 */    MCD::OPC_Decode, 147, 1, 70, // Opcode: AUIPC
/* 1792 */    MCD::OPC_FilterValue, 3, 34, 0, // Skip to: 1830
/* 1796 */    MCD::OPC_CheckPredicate, 42, 30, 0, // Skip to: 1830
/* 1800 */    MCD::OPC_Decode, 88, 70, // Opcode: ALUIPC
/* 1803 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1830
/* 1807 */    MCD::OPC_CheckPredicate, 42, 10, 0, // Skip to: 1821
/* 1811 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1821
/* 1817 */    MCD::OPC_Decode, 170, 7, 60, // Opcode: JIALC
/* 1821 */    MCD::OPC_CheckPredicate, 42, 5, 0, // Skip to: 1830
/* 1825 */    MCD::OPC_Decode, 175, 2, 133, 2, // Opcode: BNEZC
/* 1830 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 136, 2, 240, 1, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 42, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 220, 1, 240, 1, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 236, 1, 241, 1, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 42, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 144, 2, 241, 1, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 212, 1, 255, 1, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 42, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 184, 2, 242, 1, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 138, 2, 253, 1, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 42, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 218, 1, 253, 1, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 238, 1, 254, 1, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 42, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 142, 2, 254, 1, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 42, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 173, 2, 255, 1, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 42, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 178, 2, 255, 1, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3 */       MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 46, 28, 0, // Skip to: 39
/* 11 */      MCD::OPC_CheckField, 26, 6, 0, 22, 0, // Skip to: 39
/* 17 */      MCD::OPC_Decode, 227, 11, 12, // Opcode: SELEQZ64
/* 21 */      MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 39
/* 25 */      MCD::OPC_CheckPredicate, 46, 10, 0, // Skip to: 39
/* 29 */      MCD::OPC_CheckField, 26, 6, 0, 4, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 232, 11, 12, // Opcode: SELNEZ64
/* 39 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 108, 1, // Skip to: 371
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 47, 112, 7, // Skip to: 1922
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 106, 7, // Skip to: 1922
/* 24 */      MCD::OPC_Decode, 153, 5, 135, 2, // Opcode: DSLLV
/* 29 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 62
/* 33 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 36 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 49
/* 40 */      MCD::OPC_CheckPredicate, 47, 86, 7, // Skip to: 1922
/* 44 */      MCD::OPC_Decode, 159, 5, 135, 2, // Opcode: DSRLV
/* 49 */      MCD::OPC_FilterValue, 1, 77, 7, // Skip to: 1922
/* 53 */      MCD::OPC_CheckPredicate, 48, 73, 7, // Skip to: 1922
/* 57 */      MCD::OPC_Decode, 146, 5, 135, 2, // Opcode: DROTRV
/* 62 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 81
/* 66 */      MCD::OPC_CheckPredicate, 47, 60, 7, // Skip to: 1922
/* 70 */      MCD::OPC_CheckField, 6, 5, 0, 54, 7, // Skip to: 1922
/* 76 */      MCD::OPC_Decode, 156, 5, 135, 2, // Opcode: DSRAV
/* 81 */      MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 100
/* 85 */      MCD::OPC_CheckPredicate, 49, 41, 7, // Skip to: 1922
/* 89 */      MCD::OPC_CheckField, 6, 10, 0, 35, 7, // Skip to: 1922
/* 95 */      MCD::OPC_Decode, 233, 4, 136, 2, // Opcode: DMULT
/* 100 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 119
/* 104 */     MCD::OPC_CheckPredicate, 49, 22, 7, // Skip to: 1922
/* 108 */     MCD::OPC_CheckField, 6, 10, 0, 16, 7, // Skip to: 1922
/* 114 */     MCD::OPC_Decode, 234, 4, 136, 2, // Opcode: DMULTu
/* 119 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 138
/* 123 */     MCD::OPC_CheckPredicate, 49, 3, 7, // Skip to: 1922
/* 127 */     MCD::OPC_CheckField, 6, 10, 0, 253, 6, // Skip to: 1922
/* 133 */     MCD::OPC_Decode, 148, 5, 136, 2, // Opcode: DSDIV
/* 138 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 157
/* 142 */     MCD::OPC_CheckPredicate, 49, 240, 6, // Skip to: 1922
/* 146 */     MCD::OPC_CheckField, 6, 10, 0, 234, 6, // Skip to: 1922
/* 152 */     MCD::OPC_Decode, 162, 5, 136, 2, // Opcode: DUDIV
/* 157 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 175
/* 161 */     MCD::OPC_CheckPredicate, 47, 221, 6, // Skip to: 1922
/* 165 */     MCD::OPC_CheckField, 6, 5, 0, 215, 6, // Skip to: 1922
/* 171 */     MCD::OPC_Decode, 181, 4, 12, // Opcode: DADD
/* 175 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 193
/* 179 */     MCD::OPC_CheckPredicate, 47, 203, 6, // Skip to: 1922
/* 183 */     MCD::OPC_CheckField, 6, 5, 0, 197, 6, // Skip to: 1922
/* 189 */     MCD::OPC_Decode, 184, 4, 12, // Opcode: DADDu
/* 193 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 211
/* 197 */     MCD::OPC_CheckPredicate, 47, 185, 6, // Skip to: 1922
/* 201 */     MCD::OPC_CheckField, 6, 5, 0, 179, 6, // Skip to: 1922
/* 207 */     MCD::OPC_Decode, 160, 5, 12, // Opcode: DSUB
/* 211 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 229
/* 215 */     MCD::OPC_CheckPredicate, 47, 167, 6, // Skip to: 1922
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 161, 6, // Skip to: 1922
/* 225 */     MCD::OPC_Decode, 161, 5, 12, // Opcode: DSUBu
/* 229 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 248
/* 233 */     MCD::OPC_CheckPredicate, 47, 149, 6, // Skip to: 1922
/* 237 */     MCD::OPC_CheckField, 21, 5, 0, 143, 6, // Skip to: 1922
/* 243 */     MCD::OPC_Decode, 150, 5, 137, 2, // Opcode: DSLL
/* 248 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 281
/* 252 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 255 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 268
/* 259 */     MCD::OPC_CheckPredicate, 47, 123, 6, // Skip to: 1922
/* 263 */     MCD::OPC_Decode, 157, 5, 137, 2, // Opcode: DSRL
/* 268 */     MCD::OPC_FilterValue, 1, 114, 6, // Skip to: 1922
/* 272 */     MCD::OPC_CheckPredicate, 48, 110, 6, // Skip to: 1922
/* 276 */     MCD::OPC_Decode, 144, 5, 137, 2, // Opcode: DROTR
/* 281 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 300
/* 285 */     MCD::OPC_CheckPredicate, 47, 97, 6, // Skip to: 1922
/* 289 */     MCD::OPC_CheckField, 21, 5, 0, 91, 6, // Skip to: 1922
/* 295 */     MCD::OPC_Decode, 154, 5, 137, 2, // Opcode: DSRA
/* 300 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 319
/* 304 */     MCD::OPC_CheckPredicate, 47, 78, 6, // Skip to: 1922
/* 308 */     MCD::OPC_CheckField, 21, 5, 0, 72, 6, // Skip to: 1922
/* 314 */     MCD::OPC_Decode, 151, 5, 137, 2, // Opcode: DSLL32
/* 319 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 352
/* 323 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 326 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 339
/* 330 */     MCD::OPC_CheckPredicate, 47, 52, 6, // Skip to: 1922
/* 334 */     MCD::OPC_Decode, 158, 5, 137, 2, // Opcode: DSRL32
/* 339 */     MCD::OPC_FilterValue, 1, 43, 6, // Skip to: 1922
/* 343 */     MCD::OPC_CheckPredicate, 48, 39, 6, // Skip to: 1922
/* 347 */     MCD::OPC_Decode, 145, 5, 137, 2, // Opcode: DROTR32
/* 352 */     MCD::OPC_FilterValue, 63, 30, 6, // Skip to: 1922
/* 356 */     MCD::OPC_CheckPredicate, 47, 26, 6, // Skip to: 1922
/* 360 */     MCD::OPC_CheckField, 21, 5, 0, 20, 6, // Skip to: 1922
/* 366 */     MCD::OPC_Decode, 155, 5, 137, 2, // Opcode: DSRA32
/* 371 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 416
/* 375 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 378 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 397
/* 382 */     MCD::OPC_CheckPredicate, 50, 0, 6, // Skip to: 1922
/* 386 */     MCD::OPC_CheckField, 3, 8, 0, 250, 5, // Skip to: 1922
/* 392 */     MCD::OPC_Decode, 220, 4, 138, 2, // Opcode: DMFC0
/* 397 */     MCD::OPC_FilterValue, 5, 241, 5, // Skip to: 1922
/* 401 */     MCD::OPC_CheckPredicate, 50, 237, 5, // Skip to: 1922
/* 405 */     MCD::OPC_CheckField, 3, 8, 0, 231, 5, // Skip to: 1922
/* 411 */     MCD::OPC_Decode, 226, 4, 139, 2, // Opcode: DMTC0
/* 416 */     MCD::OPC_FilterValue, 17, 222, 3, // Skip to: 1410
/* 420 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 423 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 481
/* 427 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 430 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 449
/* 434 */     MCD::OPC_CheckPredicate, 51, 204, 5, // Skip to: 1922
/* 438 */     MCD::OPC_CheckField, 6, 5, 0, 198, 5, // Skip to: 1922
/* 444 */     MCD::OPC_Decode, 224, 8, 140, 2, // Opcode: MFHC1_D64
/* 449 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 468
/* 453 */     MCD::OPC_CheckPredicate, 51, 185, 5, // Skip to: 1922
/* 457 */     MCD::OPC_CheckField, 6, 5, 0, 179, 5, // Skip to: 1922
/* 463 */     MCD::OPC_Decode, 216, 9, 141, 2, // Opcode: MTHC1_D64
/* 468 */     MCD::OPC_FilterValue, 17, 170, 5, // Skip to: 1922
/* 472 */     MCD::OPC_CheckPredicate, 52, 166, 5, // Skip to: 1922
/* 476 */     MCD::OPC_Decode, 202, 5, 247, 1, // Opcode: FADD_D64
/* 481 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 500
/* 485 */     MCD::OPC_CheckPredicate, 52, 153, 5, // Skip to: 1922
/* 489 */     MCD::OPC_CheckField, 21, 5, 17, 147, 5, // Skip to: 1922
/* 495 */     MCD::OPC_Decode, 204, 6, 247, 1, // Opcode: FSUB_D64
/* 500 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 519
/* 504 */     MCD::OPC_CheckPredicate, 52, 134, 5, // Skip to: 1922
/* 508 */     MCD::OPC_CheckField, 21, 5, 17, 128, 5, // Skip to: 1922
/* 514 */     MCD::OPC_Decode, 167, 6, 247, 1, // Opcode: FMUL_D64
/* 519 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 538
/* 523 */     MCD::OPC_CheckPredicate, 52, 115, 5, // Skip to: 1922
/* 527 */     MCD::OPC_CheckField, 21, 5, 17, 109, 5, // Skip to: 1922
/* 533 */     MCD::OPC_Decode, 238, 5, 247, 1, // Opcode: FDIV_D64
/* 538 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 557
/* 542 */     MCD::OPC_CheckPredicate, 53, 96, 5, // Skip to: 1922
/* 546 */     MCD::OPC_CheckField, 16, 10, 160, 4, 89, 5, // Skip to: 1922
/* 553 */     MCD::OPC_Decode, 197, 6, 119, // Opcode: FSQRT_D64
/* 557 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 576
/* 561 */     MCD::OPC_CheckPredicate, 52, 77, 5, // Skip to: 1922
/* 565 */     MCD::OPC_CheckField, 16, 10, 160, 4, 70, 5, // Skip to: 1922
/* 572 */     MCD::OPC_Decode, 195, 5, 119, // Opcode: FABS_D64
/* 576 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 595
/* 580 */     MCD::OPC_CheckPredicate, 52, 58, 5, // Skip to: 1922
/* 584 */     MCD::OPC_CheckField, 16, 10, 160, 4, 51, 5, // Skip to: 1922
/* 591 */     MCD::OPC_Decode, 160, 6, 119, // Opcode: FMOV_D64
/* 595 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 614
/* 599 */     MCD::OPC_CheckPredicate, 52, 39, 5, // Skip to: 1922
/* 603 */     MCD::OPC_CheckField, 16, 10, 160, 4, 32, 5, // Skip to: 1922
/* 610 */     MCD::OPC_Decode, 173, 6, 119, // Opcode: FNEG_D64
/* 614 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 647
/* 618 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 621 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 634
/* 626 */     MCD::OPC_CheckPredicate, 52, 12, 5, // Skip to: 1922
/* 630 */     MCD::OPC_Decode, 174, 11, 112, // Opcode: ROUND_L_S
/* 634 */     MCD::OPC_FilterValue, 160, 4, 3, 5, // Skip to: 1922
/* 639 */     MCD::OPC_CheckPredicate, 52, 255, 4, // Skip to: 1922
/* 643 */     MCD::OPC_Decode, 173, 11, 119, // Opcode: ROUND_L_D64
/* 647 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 680
/* 651 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 654 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 667
/* 659 */     MCD::OPC_CheckPredicate, 52, 235, 4, // Skip to: 1922
/* 663 */     MCD::OPC_Decode, 143, 14, 112, // Opcode: TRUNC_L_S
/* 667 */     MCD::OPC_FilterValue, 160, 4, 226, 4, // Skip to: 1922
/* 672 */     MCD::OPC_CheckPredicate, 52, 222, 4, // Skip to: 1922
/* 676 */     MCD::OPC_Decode, 142, 14, 119, // Opcode: TRUNC_L_D64
/* 680 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 713
/* 684 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 687 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 700
/* 692 */     MCD::OPC_CheckPredicate, 52, 202, 4, // Skip to: 1922
/* 696 */     MCD::OPC_Decode, 244, 2, 112, // Opcode: CEIL_L_S
/* 700 */     MCD::OPC_FilterValue, 160, 4, 193, 4, // Skip to: 1922
/* 705 */     MCD::OPC_CheckPredicate, 52, 189, 4, // Skip to: 1922
/* 709 */     MCD::OPC_Decode, 243, 2, 119, // Opcode: CEIL_L_D64
/* 713 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 746
/* 717 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 720 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 733
/* 725 */     MCD::OPC_CheckPredicate, 52, 169, 4, // Skip to: 1922
/* 729 */     MCD::OPC_Decode, 142, 6, 112, // Opcode: FLOOR_L_S
/* 733 */     MCD::OPC_FilterValue, 160, 4, 160, 4, // Skip to: 1922
/* 738 */     MCD::OPC_CheckPredicate, 52, 156, 4, // Skip to: 1922
/* 742 */     MCD::OPC_Decode, 141, 6, 119, // Opcode: FLOOR_L_D64
/* 746 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 766
/* 750 */     MCD::OPC_CheckPredicate, 53, 144, 4, // Skip to: 1922
/* 754 */     MCD::OPC_CheckField, 16, 10, 160, 4, 137, 4, // Skip to: 1922
/* 761 */     MCD::OPC_Decode, 176, 11, 142, 2, // Opcode: ROUND_W_D64
/* 766 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 786
/* 770 */     MCD::OPC_CheckPredicate, 53, 124, 4, // Skip to: 1922
/* 774 */     MCD::OPC_CheckField, 16, 10, 160, 4, 117, 4, // Skip to: 1922
/* 781 */     MCD::OPC_Decode, 145, 14, 142, 2, // Opcode: TRUNC_W_D64
/* 786 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 806
/* 790 */     MCD::OPC_CheckPredicate, 53, 104, 4, // Skip to: 1922
/* 794 */     MCD::OPC_CheckField, 16, 10, 160, 4, 97, 4, // Skip to: 1922
/* 801 */     MCD::OPC_Decode, 246, 2, 142, 2, // Opcode: CEIL_W_D64
/* 806 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 826
/* 810 */     MCD::OPC_CheckPredicate, 53, 84, 4, // Skip to: 1922
/* 814 */     MCD::OPC_CheckField, 16, 10, 160, 4, 77, 4, // Skip to: 1922
/* 821 */     MCD::OPC_Decode, 144, 6, 142, 2, // Opcode: FLOOR_W_D64
/* 826 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 871
/* 830 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 833 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 852
/* 837 */     MCD::OPC_CheckPredicate, 54, 57, 4, // Skip to: 1922
/* 841 */     MCD::OPC_CheckField, 21, 5, 17, 51, 4, // Skip to: 1922
/* 847 */     MCD::OPC_Decode, 152, 9, 143, 2, // Opcode: MOVF_D64
/* 852 */     MCD::OPC_FilterValue, 1, 42, 4, // Skip to: 1922
/* 856 */     MCD::OPC_CheckPredicate, 54, 38, 4, // Skip to: 1922
/* 860 */     MCD::OPC_CheckField, 21, 5, 17, 32, 4, // Skip to: 1922
/* 866 */     MCD::OPC_Decode, 172, 9, 143, 2, // Opcode: MOVT_D64
/* 871 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 890
/* 875 */     MCD::OPC_CheckPredicate, 54, 19, 4, // Skip to: 1922
/* 879 */     MCD::OPC_CheckField, 21, 5, 17, 13, 4, // Skip to: 1922
/* 885 */     MCD::OPC_Decode, 184, 9, 144, 2, // Opcode: MOVZ_I_D64
/* 890 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 909
/* 894 */     MCD::OPC_CheckPredicate, 54, 0, 4, // Skip to: 1922
/* 898 */     MCD::OPC_CheckField, 21, 5, 17, 250, 3, // Skip to: 1922
/* 904 */     MCD::OPC_Decode, 164, 9, 144, 2, // Opcode: MOVN_I_D64
/* 909 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 944
/* 913 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 916 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 930
/* 921 */     MCD::OPC_CheckPredicate, 52, 229, 3, // Skip to: 1922
/* 925 */     MCD::OPC_Decode, 248, 3, 142, 2, // Opcode: CVT_S_D64
/* 930 */     MCD::OPC_FilterValue, 160, 5, 219, 3, // Skip to: 1922
/* 935 */     MCD::OPC_CheckPredicate, 52, 215, 3, // Skip to: 1922
/* 939 */     MCD::OPC_Decode, 249, 3, 142, 2, // Opcode: CVT_S_L
/* 944 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 990
/* 948 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 951 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 964
/* 956 */     MCD::OPC_CheckPredicate, 52, 194, 3, // Skip to: 1922
/* 960 */     MCD::OPC_Decode, 239, 3, 112, // Opcode: CVT_D64_S
/* 964 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 977
/* 969 */     MCD::OPC_CheckPredicate, 52, 181, 3, // Skip to: 1922
/* 973 */     MCD::OPC_Decode, 240, 3, 112, // Opcode: CVT_D64_W
/* 977 */     MCD::OPC_FilterValue, 160, 5, 172, 3, // Skip to: 1922
/* 982 */     MCD::OPC_CheckPredicate, 52, 168, 3, // Skip to: 1922
/* 986 */     MCD::OPC_Decode, 238, 3, 119, // Opcode: CVT_D64_L
/* 990 */     MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1010
/* 994 */     MCD::OPC_CheckPredicate, 52, 156, 3, // Skip to: 1922
/* 998 */     MCD::OPC_CheckField, 16, 10, 160, 4, 149, 3, // Skip to: 1922
/* 1005 */    MCD::OPC_Decode, 253, 3, 142, 2, // Opcode: CVT_W_D64
/* 1010 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1035
/* 1014 */    MCD::OPC_CheckPredicate, 55, 136, 3, // Skip to: 1922
/* 1018 */    MCD::OPC_CheckField, 21, 5, 17, 130, 3, // Skip to: 1922
/* 1024 */    MCD::OPC_CheckField, 6, 5, 0, 124, 3, // Skip to: 1922
/* 1030 */    MCD::OPC_Decode, 133, 4, 145, 2, // Opcode: C_F_D64
/* 1035 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1060
/* 1039 */    MCD::OPC_CheckPredicate, 55, 111, 3, // Skip to: 1922
/* 1043 */    MCD::OPC_CheckField, 21, 5, 17, 105, 3, // Skip to: 1922
/* 1049 */    MCD::OPC_CheckField, 6, 5, 0, 99, 3, // Skip to: 1922
/* 1055 */    MCD::OPC_Decode, 175, 4, 145, 2, // Opcode: C_UN_D64
/* 1060 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1085
/* 1064 */    MCD::OPC_CheckPredicate, 55, 86, 3, // Skip to: 1922
/* 1068 */    MCD::OPC_CheckField, 21, 5, 17, 80, 3, // Skip to: 1922
/* 1074 */    MCD::OPC_CheckField, 6, 5, 0, 74, 3, // Skip to: 1922
/* 1080 */    MCD::OPC_Decode, 130, 4, 145, 2, // Opcode: C_EQ_D64
/* 1085 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1110
/* 1089 */    MCD::OPC_CheckPredicate, 55, 61, 3, // Skip to: 1922
/* 1093 */    MCD::OPC_CheckField, 21, 5, 17, 55, 3, // Skip to: 1922
/* 1099 */    MCD::OPC_CheckField, 6, 5, 0, 49, 3, // Skip to: 1922
/* 1105 */    MCD::OPC_Decode, 166, 4, 145, 2, // Opcode: C_UEQ_D64
/* 1110 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1135
/* 1114 */    MCD::OPC_CheckPredicate, 55, 36, 3, // Skip to: 1922
/* 1118 */    MCD::OPC_CheckField, 21, 5, 17, 30, 3, // Skip to: 1922
/* 1124 */    MCD::OPC_CheckField, 6, 5, 0, 24, 3, // Skip to: 1922
/* 1130 */    MCD::OPC_Decode, 157, 4, 145, 2, // Opcode: C_OLT_D64
/* 1135 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1160
/* 1139 */    MCD::OPC_CheckPredicate, 55, 11, 3, // Skip to: 1922
/* 1143 */    MCD::OPC_CheckField, 21, 5, 17, 5, 3, // Skip to: 1922
/* 1149 */    MCD::OPC_CheckField, 6, 5, 0, 255, 2, // Skip to: 1922
/* 1155 */    MCD::OPC_Decode, 172, 4, 145, 2, // Opcode: C_ULT_D64
/* 1160 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1185
/* 1164 */    MCD::OPC_CheckPredicate, 55, 242, 2, // Skip to: 1922
/* 1168 */    MCD::OPC_CheckField, 21, 5, 17, 236, 2, // Skip to: 1922
/* 1174 */    MCD::OPC_CheckField, 6, 5, 0, 230, 2, // Skip to: 1922
/* 1180 */    MCD::OPC_Decode, 154, 4, 145, 2, // Opcode: C_OLE_D64
/* 1185 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1210
/* 1189 */    MCD::OPC_CheckPredicate, 55, 217, 2, // Skip to: 1922
/* 1193 */    MCD::OPC_CheckField, 21, 5, 17, 211, 2, // Skip to: 1922
/* 1199 */    MCD::OPC_CheckField, 6, 5, 0, 205, 2, // Skip to: 1922
/* 1205 */    MCD::OPC_Decode, 169, 4, 145, 2, // Opcode: C_ULE_D64
/* 1210 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1235
/* 1214 */    MCD::OPC_CheckPredicate, 55, 192, 2, // Skip to: 1922
/* 1218 */    MCD::OPC_CheckField, 21, 5, 17, 186, 2, // Skip to: 1922
/* 1224 */    MCD::OPC_CheckField, 6, 5, 0, 180, 2, // Skip to: 1922
/* 1230 */    MCD::OPC_Decode, 163, 4, 145, 2, // Opcode: C_SF_D64
/* 1235 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1260
/* 1239 */    MCD::OPC_CheckPredicate, 55, 167, 2, // Skip to: 1922
/* 1243 */    MCD::OPC_CheckField, 21, 5, 17, 161, 2, // Skip to: 1922
/* 1249 */    MCD::OPC_CheckField, 6, 5, 0, 155, 2, // Skip to: 1922
/* 1255 */    MCD::OPC_Decode, 145, 4, 145, 2, // Opcode: C_NGLE_D64
/* 1260 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1285
/* 1264 */    MCD::OPC_CheckPredicate, 55, 142, 2, // Skip to: 1922
/* 1268 */    MCD::OPC_CheckField, 21, 5, 17, 136, 2, // Skip to: 1922
/* 1274 */    MCD::OPC_CheckField, 6, 5, 0, 130, 2, // Skip to: 1922
/* 1280 */    MCD::OPC_Decode, 160, 4, 145, 2, // Opcode: C_SEQ_D64
/* 1285 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1310
/* 1289 */    MCD::OPC_CheckPredicate, 55, 117, 2, // Skip to: 1922
/* 1293 */    MCD::OPC_CheckField, 21, 5, 17, 111, 2, // Skip to: 1922
/* 1299 */    MCD::OPC_CheckField, 6, 5, 0, 105, 2, // Skip to: 1922
/* 1305 */    MCD::OPC_Decode, 148, 4, 145, 2, // Opcode: C_NGL_D64
/* 1310 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1335
/* 1314 */    MCD::OPC_CheckPredicate, 55, 92, 2, // Skip to: 1922
/* 1318 */    MCD::OPC_CheckField, 21, 5, 17, 86, 2, // Skip to: 1922
/* 1324 */    MCD::OPC_CheckField, 6, 5, 0, 80, 2, // Skip to: 1922
/* 1330 */    MCD::OPC_Decode, 139, 4, 145, 2, // Opcode: C_LT_D64
/* 1335 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1360
/* 1339 */    MCD::OPC_CheckPredicate, 55, 67, 2, // Skip to: 1922
/* 1343 */    MCD::OPC_CheckField, 21, 5, 17, 61, 2, // Skip to: 1922
/* 1349 */    MCD::OPC_CheckField, 6, 5, 0, 55, 2, // Skip to: 1922
/* 1355 */    MCD::OPC_Decode, 142, 4, 145, 2, // Opcode: C_NGE_D64
/* 1360 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1385
/* 1364 */    MCD::OPC_CheckPredicate, 55, 42, 2, // Skip to: 1922
/* 1368 */    MCD::OPC_CheckField, 21, 5, 17, 36, 2, // Skip to: 1922
/* 1374 */    MCD::OPC_CheckField, 6, 5, 0, 30, 2, // Skip to: 1922
/* 1380 */    MCD::OPC_Decode, 136, 4, 145, 2, // Opcode: C_LE_D64
/* 1385 */    MCD::OPC_FilterValue, 63, 21, 2, // Skip to: 1922
/* 1389 */    MCD::OPC_CheckPredicate, 55, 17, 2, // Skip to: 1922
/* 1393 */    MCD::OPC_CheckField, 21, 5, 17, 11, 2, // Skip to: 1922
/* 1399 */    MCD::OPC_CheckField, 6, 5, 0, 5, 2, // Skip to: 1922
/* 1405 */    MCD::OPC_Decode, 151, 4, 145, 2, // Opcode: C_NGT_D64
/* 1410 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1455
/* 1414 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1417 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1436
/* 1421 */    MCD::OPC_CheckPredicate, 50, 241, 1, // Skip to: 1922
/* 1425 */    MCD::OPC_CheckField, 3, 8, 0, 235, 1, // Skip to: 1922
/* 1431 */    MCD::OPC_Decode, 222, 4, 146, 2, // Opcode: DMFC2
/* 1436 */    MCD::OPC_FilterValue, 5, 226, 1, // Skip to: 1922
/* 1440 */    MCD::OPC_CheckPredicate, 50, 222, 1, // Skip to: 1922
/* 1444 */    MCD::OPC_CheckField, 3, 8, 0, 216, 1, // Skip to: 1922
/* 1450 */    MCD::OPC_Decode, 228, 4, 147, 2, // Opcode: DMTC2
/* 1455 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1590
/* 1459 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1462 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1481
/* 1466 */    MCD::OPC_CheckPredicate, 56, 196, 1, // Skip to: 1922
/* 1470 */    MCD::OPC_CheckField, 11, 5, 0, 190, 1, // Skip to: 1922
/* 1476 */    MCD::OPC_Decode, 214, 7, 148, 2, // Opcode: LDXC164
/* 1481 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1500
/* 1485 */    MCD::OPC_CheckPredicate, 57, 177, 1, // Skip to: 1922
/* 1489 */    MCD::OPC_CheckField, 11, 5, 0, 171, 1, // Skip to: 1922
/* 1495 */    MCD::OPC_Decode, 247, 7, 148, 2, // Opcode: LUXC164
/* 1500 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1519
/* 1504 */    MCD::OPC_CheckPredicate, 56, 158, 1, // Skip to: 1922
/* 1508 */    MCD::OPC_CheckField, 6, 5, 0, 152, 1, // Skip to: 1922
/* 1514 */    MCD::OPC_Decode, 217, 11, 149, 2, // Opcode: SDXC164
/* 1519 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1538
/* 1523 */    MCD::OPC_CheckPredicate, 57, 139, 1, // Skip to: 1922
/* 1527 */    MCD::OPC_CheckField, 6, 5, 0, 133, 1, // Skip to: 1922
/* 1533 */    MCD::OPC_Decode, 161, 13, 149, 2, // Opcode: SUXC164
/* 1538 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1551
/* 1542 */    MCD::OPC_CheckPredicate, 56, 120, 1, // Skip to: 1922
/* 1546 */    MCD::OPC_Decode, 184, 8, 150, 2, // Opcode: MADD_D64
/* 1551 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1564
/* 1555 */    MCD::OPC_CheckPredicate, 56, 107, 1, // Skip to: 1922
/* 1559 */    MCD::OPC_Decode, 204, 9, 150, 2, // Opcode: MSUB_D64
/* 1564 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1577
/* 1568 */    MCD::OPC_CheckPredicate, 56, 94, 1, // Skip to: 1922
/* 1572 */    MCD::OPC_Decode, 159, 10, 150, 2, // Opcode: NMADD_D64
/* 1577 */    MCD::OPC_FilterValue, 57, 85, 1, // Skip to: 1922
/* 1581 */    MCD::OPC_CheckPredicate, 56, 81, 1, // Skip to: 1922
/* 1585 */    MCD::OPC_Decode, 164, 10, 150, 2, // Opcode: NMSUB_D64
/* 1590 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1603
/* 1594 */    MCD::OPC_CheckPredicate, 49, 68, 1, // Skip to: 1922
/* 1598 */    MCD::OPC_Decode, 182, 4, 151, 2, // Opcode: DADDi
/* 1603 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1616
/* 1607 */    MCD::OPC_CheckPredicate, 47, 55, 1, // Skip to: 1922
/* 1611 */    MCD::OPC_Decode, 183, 4, 151, 2, // Opcode: DADDiu
/* 1616 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1629
/* 1620 */    MCD::OPC_CheckPredicate, 49, 42, 1, // Skip to: 1922
/* 1624 */    MCD::OPC_Decode, 210, 7, 233, 1, // Opcode: LDL
/* 1629 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1642
/* 1633 */    MCD::OPC_CheckPredicate, 49, 29, 1, // Skip to: 1922
/* 1637 */    MCD::OPC_Decode, 212, 7, 233, 1, // Opcode: LDR
/* 1642 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1675
/* 1646 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1649 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1662
/* 1653 */    MCD::OPC_CheckPredicate, 58, 9, 1, // Skip to: 1922
/* 1657 */    MCD::OPC_Decode, 192, 4, 152, 2, // Opcode: DCLZ
/* 1662 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 1922
/* 1666 */    MCD::OPC_CheckPredicate, 58, 252, 0, // Skip to: 1922
/* 1670 */    MCD::OPC_Decode, 190, 4, 152, 2, // Opcode: DCLO
/* 1675 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 1805
/* 1679 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1682 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1695
/* 1686 */    MCD::OPC_CheckPredicate, 7, 232, 0, // Skip to: 1922
/* 1690 */    MCD::OPC_Decode, 199, 4, 153, 2, // Opcode: DEXTM
/* 1695 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1708
/* 1699 */    MCD::OPC_CheckPredicate, 7, 219, 0, // Skip to: 1922
/* 1703 */    MCD::OPC_Decode, 200, 4, 153, 2, // Opcode: DEXTU
/* 1708 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1721
/* 1712 */    MCD::OPC_CheckPredicate, 7, 206, 0, // Skip to: 1922
/* 1716 */    MCD::OPC_Decode, 198, 4, 153, 2, // Opcode: DEXT
/* 1721 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 7, 193, 0, // Skip to: 1922
/* 1729 */    MCD::OPC_Decode, 203, 4, 154, 2, // Opcode: DINSM
/* 1734 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1747
/* 1738 */    MCD::OPC_CheckPredicate, 7, 180, 0, // Skip to: 1922
/* 1742 */    MCD::OPC_Decode, 204, 4, 154, 2, // Opcode: DINSU
/* 1747 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1760
/* 1751 */    MCD::OPC_CheckPredicate, 7, 167, 0, // Skip to: 1922
/* 1755 */    MCD::OPC_Decode, 202, 4, 154, 2, // Opcode: DINS
/* 1760 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 1922
/* 1764 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1767 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1786
/* 1771 */    MCD::OPC_CheckPredicate, 48, 147, 0, // Skip to: 1922
/* 1775 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 1922
/* 1781 */    MCD::OPC_Decode, 147, 5, 129, 2, // Opcode: DSBH
/* 1786 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 1922
/* 1790 */    MCD::OPC_CheckPredicate, 48, 128, 0, // Skip to: 1922
/* 1794 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 1922
/* 1800 */    MCD::OPC_Decode, 149, 5, 129, 2, // Opcode: DSHD
/* 1805 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 47, 109, 0, // Skip to: 1922
/* 1813 */    MCD::OPC_Decode, 153, 8, 233, 1, // Opcode: LWu
/* 1818 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 1831
/* 1822 */    MCD::OPC_CheckPredicate, 49, 96, 0, // Skip to: 1922
/* 1826 */    MCD::OPC_Decode, 214, 11, 233, 1, // Opcode: SDL
/* 1831 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 1844
/* 1835 */    MCD::OPC_CheckPredicate, 49, 83, 0, // Skip to: 1922
/* 1839 */    MCD::OPC_Decode, 215, 11, 233, 1, // Opcode: SDR
/* 1844 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 1857
/* 1848 */    MCD::OPC_CheckPredicate, 49, 70, 0, // Skip to: 1922
/* 1852 */    MCD::OPC_Decode, 232, 7, 233, 1, // Opcode: LLD
/* 1857 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 1870
/* 1861 */    MCD::OPC_CheckPredicate, 53, 57, 0, // Skip to: 1922
/* 1865 */    MCD::OPC_Decode, 201, 7, 235, 1, // Opcode: LDC164
/* 1870 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 1883
/* 1874 */    MCD::OPC_CheckPredicate, 47, 44, 0, // Skip to: 1922
/* 1878 */    MCD::OPC_Decode, 199, 7, 233, 1, // Opcode: LD
/* 1883 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 1896
/* 1887 */    MCD::OPC_CheckPredicate, 49, 31, 0, // Skip to: 1922
/* 1891 */    MCD::OPC_Decode, 197, 11, 233, 1, // Opcode: SCD
/* 1896 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 1909
/* 1900 */    MCD::OPC_CheckPredicate, 53, 18, 0, // Skip to: 1922
/* 1904 */    MCD::OPC_Decode, 207, 11, 235, 1, // Opcode: SDC164
/* 1909 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 1922
/* 1913 */    MCD::OPC_CheckPredicate, 47, 5, 0, // Skip to: 1922
/* 1917 */    MCD::OPC_Decode, 201, 11, 233, 1, // Opcode: SD
/* 1922 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMicroMips]);
  case 5:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 6:
    return (!Bits[Mips::FeatureMips16]);
  case 7:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 8:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 9:
    return (Bits[Mips::FeatureMSA]);
  case 10:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 11:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 12:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 13:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 14:
    return (Bits[Mips::FeatureDSP]);
  case 15:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 16:
    return (Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 17:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 20:
    return (!Bits[Mips::FeatureMicroMips]);
  case 21:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 22:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 30:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 31:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 32:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 34:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 35:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 36:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 37:
    return (Bits[Mips::FeatureDSPR2]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 39:
    return (Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 41:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 50:
    return (Bits[Mips::FeatureMips64]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImm5lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSimm4(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImm6Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLiSimm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 133:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 194:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 206:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 233:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 234:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 235:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 236:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 240:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 241:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 242:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 252:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 253:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 254:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 255:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 259:
    if (DecodeCacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 260:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 280:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
