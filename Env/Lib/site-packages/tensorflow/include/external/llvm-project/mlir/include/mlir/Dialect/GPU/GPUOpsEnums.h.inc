/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
// built-in reduction operations supported by gpu.allreduce.
enum class AllReduceOperationAttr {
  ADD,
  AND,
  MAX,
  MIN,
  MUL,
  OR,
  XOR,
};

::llvm::StringRef stringifyAllReduceOperationAttr(AllReduceOperationAttr);
::llvm::Optional<AllReduceOperationAttr> symbolizeAllReduceOperationAttr(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(AllReduceOperationAttr enumValue) {
  return stringifyAllReduceOperationAttr(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<AllReduceOperationAttr> symbolizeEnum<AllReduceOperationAttr>(::llvm::StringRef str) {
  return symbolizeAllReduceOperationAttr(str);
}
} // namespace gpu
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::AllReduceOperationAttr> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::gpu::AllReduceOperationAttr>::type>;

  static inline ::mlir::gpu::AllReduceOperationAttr getEmptyKey() {
    return static_cast<::mlir::gpu::AllReduceOperationAttr>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::AllReduceOperationAttr getTombstoneKey() {
    return static_cast<::mlir::gpu::AllReduceOperationAttr>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::AllReduceOperationAttr &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::gpu::AllReduceOperationAttr>::type>(val));
  }

  static bool isEqual(const ::mlir::gpu::AllReduceOperationAttr &lhs, const ::mlir::gpu::AllReduceOperationAttr &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// Indexing modes supported by gpu.shuffle.
enum class ShuffleModeAttr {
  XOR,
  UP,
  DOWN,
  IDX,
};

::llvm::StringRef stringifyShuffleModeAttr(ShuffleModeAttr);
::llvm::Optional<ShuffleModeAttr> symbolizeShuffleModeAttr(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ShuffleModeAttr enumValue) {
  return stringifyShuffleModeAttr(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ShuffleModeAttr> symbolizeEnum<ShuffleModeAttr>(::llvm::StringRef str) {
  return symbolizeShuffleModeAttr(str);
}
} // namespace gpu
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::ShuffleModeAttr> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::gpu::ShuffleModeAttr>::type>;

  static inline ::mlir::gpu::ShuffleModeAttr getEmptyKey() {
    return static_cast<::mlir::gpu::ShuffleModeAttr>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::ShuffleModeAttr getTombstoneKey() {
    return static_cast<::mlir::gpu::ShuffleModeAttr>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::ShuffleModeAttr &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::gpu::ShuffleModeAttr>::type>(val));
  }

  static bool isEqual(const ::mlir::gpu::ShuffleModeAttr &lhs, const ::mlir::gpu::ShuffleModeAttr &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// elementwise operation to apply to mma matrix
enum class MMAElementwiseOp {
  ADDF,
  MULF,
  MAXF,
  MINF,
  DIVF,
};

::llvm::StringRef stringifyMMAElementwiseOp(MMAElementwiseOp);
::llvm::Optional<MMAElementwiseOp> symbolizeMMAElementwiseOp(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(MMAElementwiseOp enumValue) {
  return stringifyMMAElementwiseOp(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<MMAElementwiseOp> symbolizeEnum<MMAElementwiseOp>(::llvm::StringRef str) {
  return symbolizeMMAElementwiseOp(str);
}
} // namespace gpu
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::MMAElementwiseOp> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::gpu::MMAElementwiseOp>::type>;

  static inline ::mlir::gpu::MMAElementwiseOp getEmptyKey() {
    return static_cast<::mlir::gpu::MMAElementwiseOp>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::MMAElementwiseOp getTombstoneKey() {
    return static_cast<::mlir::gpu::MMAElementwiseOp>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::MMAElementwiseOp &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::gpu::MMAElementwiseOp>::type>(val));
  }

  static bool isEqual(const ::mlir::gpu::MMAElementwiseOp &lhs, const ::mlir::gpu::MMAElementwiseOp &rhs) {
    return lhs == rhs;
  }
};
}

