/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace omp {
// BinOp for Atomic Updates
enum class AtomicBinOpKind : uint64_t {
  ADD = 0,
  MUL = 1,
  SUB = 2,
  DIV = 3,
  AND = 4,
  OR = 5,
  XOR = 6,
  SHIFTR = 7,
  SHIFTL = 8,
  MAX = 9,
  MIN = 10,
  EQV = 11,
  NEQV = 12,
};

::llvm::Optional<AtomicBinOpKind> symbolizeAtomicBinOpKind(uint64_t);
::llvm::StringRef AtomicBinOpKindToString(AtomicBinOpKind);
::llvm::Optional<AtomicBinOpKind> AtomicBinOpKindToEnum(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForAtomicBinOpKind() {
  return 12;
}


inline ::llvm::StringRef stringifyEnum(AtomicBinOpKind enumValue) {
  return AtomicBinOpKindToString(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<AtomicBinOpKind> symbolizeEnum<AtomicBinOpKind>(::llvm::StringRef str) {
  return AtomicBinOpKindToEnum(str);
}

class AtomicBinOpKindAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = AtomicBinOpKind;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static AtomicBinOpKindAttr get(::mlir::MLIRContext *context, AtomicBinOpKind val);
  AtomicBinOpKind getValue() const;
};
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::AtomicBinOpKind> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::omp::AtomicBinOpKind getEmptyKey() {
    return static_cast<::mlir::omp::AtomicBinOpKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::AtomicBinOpKind getTombstoneKey() {
    return static_cast<::mlir::omp::AtomicBinOpKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::AtomicBinOpKind &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::omp::AtomicBinOpKind &lhs, const ::mlir::omp::AtomicBinOpKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// default clause
enum class ClauseDefault {
  defprivate,
  deffirstprivate,
  defshared,
  defnone,
};

::llvm::StringRef stringifyClauseDefault(ClauseDefault);
::llvm::Optional<ClauseDefault> symbolizeClauseDefault(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseDefault enumValue) {
  return stringifyClauseDefault(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseDefault> symbolizeEnum<ClauseDefault>(::llvm::StringRef str) {
  return symbolizeClauseDefault(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseDefault> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseDefault>::type>;

  static inline ::mlir::omp::ClauseDefault getEmptyKey() {
    return static_cast<::mlir::omp::ClauseDefault>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseDefault getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseDefault>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseDefault &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseDefault>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseDefault &lhs, const ::mlir::omp::ClauseDefault &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// depend clause
enum class ClauseDepend {
  dependsource,
  dependsink,
};

::llvm::StringRef stringifyClauseDepend(ClauseDepend);
::llvm::Optional<ClauseDepend> symbolizeClauseDepend(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseDepend enumValue) {
  return stringifyClauseDepend(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseDepend> symbolizeEnum<ClauseDepend>(::llvm::StringRef str) {
  return symbolizeClauseDepend(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseDepend> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseDepend>::type>;

  static inline ::mlir::omp::ClauseDepend getEmptyKey() {
    return static_cast<::mlir::omp::ClauseDepend>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseDepend getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseDepend>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseDepend &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseDepend>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseDepend &lhs, const ::mlir::omp::ClauseDepend &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// MemoryOrderKind Clause
enum class ClauseMemoryOrderKind {
  seq_cst,
  acq_rel,
  acquire,
  release,
  relaxed,
};

::llvm::StringRef stringifyClauseMemoryOrderKind(ClauseMemoryOrderKind);
::llvm::Optional<ClauseMemoryOrderKind> symbolizeClauseMemoryOrderKind(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseMemoryOrderKind enumValue) {
  return stringifyClauseMemoryOrderKind(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseMemoryOrderKind> symbolizeEnum<ClauseMemoryOrderKind>(::llvm::StringRef str) {
  return symbolizeClauseMemoryOrderKind(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseMemoryOrderKind> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseMemoryOrderKind>::type>;

  static inline ::mlir::omp::ClauseMemoryOrderKind getEmptyKey() {
    return static_cast<::mlir::omp::ClauseMemoryOrderKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseMemoryOrderKind getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseMemoryOrderKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseMemoryOrderKind &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseMemoryOrderKind>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseMemoryOrderKind &lhs, const ::mlir::omp::ClauseMemoryOrderKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// OrderKind Clause
enum class ClauseOrderKind {
  concurrent,
};

::llvm::StringRef stringifyClauseOrderKind(ClauseOrderKind);
::llvm::Optional<ClauseOrderKind> symbolizeClauseOrderKind(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseOrderKind enumValue) {
  return stringifyClauseOrderKind(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseOrderKind> symbolizeEnum<ClauseOrderKind>(::llvm::StringRef str) {
  return symbolizeClauseOrderKind(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseOrderKind> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseOrderKind>::type>;

  static inline ::mlir::omp::ClauseOrderKind getEmptyKey() {
    return static_cast<::mlir::omp::ClauseOrderKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseOrderKind getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseOrderKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseOrderKind &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseOrderKind>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseOrderKind &lhs, const ::mlir::omp::ClauseOrderKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// ProcBindKind Clause
enum class ClauseProcBindKind {
  primary,
  master,
  close,
  spread,
};

::llvm::StringRef stringifyClauseProcBindKind(ClauseProcBindKind);
::llvm::Optional<ClauseProcBindKind> symbolizeClauseProcBindKind(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseProcBindKind enumValue) {
  return stringifyClauseProcBindKind(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseProcBindKind> symbolizeEnum<ClauseProcBindKind>(::llvm::StringRef str) {
  return symbolizeClauseProcBindKind(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseProcBindKind> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseProcBindKind>::type>;

  static inline ::mlir::omp::ClauseProcBindKind getEmptyKey() {
    return static_cast<::mlir::omp::ClauseProcBindKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseProcBindKind getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseProcBindKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseProcBindKind &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseProcBindKind>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseProcBindKind &lhs, const ::mlir::omp::ClauseProcBindKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// ScheduleKind Clause
enum class ClauseScheduleKind {
  Static,
  Dynamic,
  Guided,
  Auto,
  Runtime,
};

::llvm::StringRef stringifyClauseScheduleKind(ClauseScheduleKind);
::llvm::Optional<ClauseScheduleKind> symbolizeClauseScheduleKind(::llvm::StringRef);

inline ::llvm::StringRef stringifyEnum(ClauseScheduleKind enumValue) {
  return stringifyClauseScheduleKind(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ClauseScheduleKind> symbolizeEnum<ClauseScheduleKind>(::llvm::StringRef str) {
  return symbolizeClauseScheduleKind(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseScheduleKind> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseScheduleKind>::type>;

  static inline ::mlir::omp::ClauseScheduleKind getEmptyKey() {
    return static_cast<::mlir::omp::ClauseScheduleKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseScheduleKind getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseScheduleKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseScheduleKind &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseScheduleKind>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseScheduleKind &lhs, const ::mlir::omp::ClauseScheduleKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// OpenMP Schedule Modifier
enum class ScheduleModifier {
  none = 0,
  monotonic = 1,
  nonmonotonic = 2,
  simd = 3,
};

::llvm::Optional<ScheduleModifier> symbolizeScheduleModifier(unsigned);
::llvm::StringRef stringifyScheduleModifier(ScheduleModifier);
::llvm::Optional<ScheduleModifier> symbolizeScheduleModifier(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForScheduleModifier() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(ScheduleModifier enumValue) {
  return stringifyScheduleModifier(enumValue);
}

template <typename EnumType>
::llvm::Optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::llvm::Optional<ScheduleModifier> symbolizeEnum<ScheduleModifier>(::llvm::StringRef str) {
  return symbolizeScheduleModifier(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ScheduleModifier> {
  using StorageInfo = ::llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ScheduleModifier>::type>;

  static inline ::mlir::omp::ScheduleModifier getEmptyKey() {
    return static_cast<::mlir::omp::ScheduleModifier>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ScheduleModifier getTombstoneKey() {
    return static_cast<::mlir::omp::ScheduleModifier>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ScheduleModifier &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ScheduleModifier>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ScheduleModifier &lhs, const ::mlir::omp::ScheduleModifier &rhs) {
    return lhs == rhs;
  }
};
}

