/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyAllReduceOperationAttr(AllReduceOperationAttr val) {
  switch (val) {
    case AllReduceOperationAttr::ADD: return "add";
    case AllReduceOperationAttr::AND: return "and";
    case AllReduceOperationAttr::MAX: return "max";
    case AllReduceOperationAttr::MIN: return "min";
    case AllReduceOperationAttr::MUL: return "mul";
    case AllReduceOperationAttr::OR: return "or";
    case AllReduceOperationAttr::XOR: return "xor";
  }
  return "";
}

::llvm::Optional<AllReduceOperationAttr> symbolizeAllReduceOperationAttr(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::llvm::Optional<AllReduceOperationAttr>>(str)
      .Case("add", AllReduceOperationAttr::ADD)
      .Case("and", AllReduceOperationAttr::AND)
      .Case("max", AllReduceOperationAttr::MAX)
      .Case("min", AllReduceOperationAttr::MIN)
      .Case("mul", AllReduceOperationAttr::MUL)
      .Case("or", AllReduceOperationAttr::OR)
      .Case("xor", AllReduceOperationAttr::XOR)
      .Default(::llvm::None);
}
} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyShuffleModeAttr(ShuffleModeAttr val) {
  switch (val) {
    case ShuffleModeAttr::XOR: return "xor";
    case ShuffleModeAttr::UP: return "up";
    case ShuffleModeAttr::DOWN: return "down";
    case ShuffleModeAttr::IDX: return "idx";
  }
  return "";
}

::llvm::Optional<ShuffleModeAttr> symbolizeShuffleModeAttr(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::llvm::Optional<ShuffleModeAttr>>(str)
      .Case("xor", ShuffleModeAttr::XOR)
      .Case("up", ShuffleModeAttr::UP)
      .Case("down", ShuffleModeAttr::DOWN)
      .Case("idx", ShuffleModeAttr::IDX)
      .Default(::llvm::None);
}
} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyMMAElementwiseOp(MMAElementwiseOp val) {
  switch (val) {
    case MMAElementwiseOp::ADDF: return "ADDF";
    case MMAElementwiseOp::MULF: return "MULF";
    case MMAElementwiseOp::MAXF: return "MAXF";
    case MMAElementwiseOp::MINF: return "MINF";
    case MMAElementwiseOp::DIVF: return "DIVF";
  }
  return "";
}

::llvm::Optional<MMAElementwiseOp> symbolizeMMAElementwiseOp(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::llvm::Optional<MMAElementwiseOp>>(str)
      .Case("ADDF", MMAElementwiseOp::ADDF)
      .Case("MULF", MMAElementwiseOp::MULF)
      .Case("MAXF", MMAElementwiseOp::MAXF)
      .Case("MINF", MMAElementwiseOp::MINF)
      .Case("DIVF", MMAElementwiseOp::DIVF)
      .Default(::llvm::None);
}
} // namespace gpu
} // namespace mlir

