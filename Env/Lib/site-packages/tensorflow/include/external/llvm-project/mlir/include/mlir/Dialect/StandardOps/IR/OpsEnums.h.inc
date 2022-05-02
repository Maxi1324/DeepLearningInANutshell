/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
// allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
enum class AtomicRMWKind : uint64_t {
  addf = 0,
  addi = 1,
  assign = 2,
  maxf = 3,
  maxs = 4,
  maxu = 5,
  minf = 6,
  mins = 7,
  minu = 8,
  mulf = 9,
  muli = 10,
};

::llvm::Optional<AtomicRMWKind> symbolizeAtomicRMWKind(uint64_t);
::llvm::StringRef stringifyAtomicRMWKind(AtomicRMWKind);
::llvm::Optional<AtomicRMWKind> symbolizeAtomicRMWKind(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForAtomicRMWKind() {
  return 10;
}


inline ::llvm::StringRef stringifyEnum(AtomicRMWKind enumValue) {
  return stringifyAtomicRMWKind(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<AtomicRMWKind> symbolizeEnum<AtomicRMWKind>(::llvm::StringRef str) {
  return symbolizeAtomicRMWKind(str);
}

class AtomicRMWKindAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = AtomicRMWKind;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static AtomicRMWKindAttr get(::mlir::MLIRContext *context, AtomicRMWKind val);
  AtomicRMWKind getValue() const;
};
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::AtomicRMWKind> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::AtomicRMWKind getEmptyKey() {
    return static_cast<::mlir::AtomicRMWKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::AtomicRMWKind getTombstoneKey() {
    return static_cast<::mlir::AtomicRMWKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::AtomicRMWKind &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::AtomicRMWKind &lhs, const ::mlir::AtomicRMWKind &rhs) {
    return lhs == rhs;
  }
};
}

