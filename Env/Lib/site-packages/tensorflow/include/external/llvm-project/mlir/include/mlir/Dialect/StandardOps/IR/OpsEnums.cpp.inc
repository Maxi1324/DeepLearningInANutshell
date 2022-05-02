/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
::llvm::StringRef stringifyAtomicRMWKind(AtomicRMWKind val) {
  switch (val) {
    case AtomicRMWKind::addf: return "addf";
    case AtomicRMWKind::addi: return "addi";
    case AtomicRMWKind::assign: return "assign";
    case AtomicRMWKind::maxf: return "maxf";
    case AtomicRMWKind::maxs: return "maxs";
    case AtomicRMWKind::maxu: return "maxu";
    case AtomicRMWKind::minf: return "minf";
    case AtomicRMWKind::mins: return "mins";
    case AtomicRMWKind::minu: return "minu";
    case AtomicRMWKind::mulf: return "mulf";
    case AtomicRMWKind::muli: return "muli";
  }
  return "";
}

::llvm::Optional<AtomicRMWKind> symbolizeAtomicRMWKind(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::llvm::Optional<AtomicRMWKind>>(str)
      .Case("addf", AtomicRMWKind::addf)
      .Case("addi", AtomicRMWKind::addi)
      .Case("assign", AtomicRMWKind::assign)
      .Case("maxf", AtomicRMWKind::maxf)
      .Case("maxs", AtomicRMWKind::maxs)
      .Case("maxu", AtomicRMWKind::maxu)
      .Case("minf", AtomicRMWKind::minf)
      .Case("mins", AtomicRMWKind::mins)
      .Case("minu", AtomicRMWKind::minu)
      .Case("mulf", AtomicRMWKind::mulf)
      .Case("muli", AtomicRMWKind::muli)
      .Default(::llvm::None);
}
::llvm::Optional<AtomicRMWKind> symbolizeAtomicRMWKind(uint64_t value) {
  switch (value) {
  case 0: return AtomicRMWKind::addf;
  case 1: return AtomicRMWKind::addi;
  case 2: return AtomicRMWKind::assign;
  case 3: return AtomicRMWKind::maxf;
  case 4: return AtomicRMWKind::maxs;
  case 5: return AtomicRMWKind::maxu;
  case 6: return AtomicRMWKind::minf;
  case 7: return AtomicRMWKind::mins;
  case 8: return AtomicRMWKind::minu;
  case 9: return AtomicRMWKind::mulf;
  case 10: return AtomicRMWKind::muli;
  default: return ::llvm::None;
  }
}

bool AtomicRMWKindAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 3)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 4)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 5)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 6)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 7)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 8)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 9)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 10)));
}
AtomicRMWKindAttr AtomicRMWKindAttr::get(::mlir::MLIRContext *context, AtomicRMWKind val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return baseAttr.cast<AtomicRMWKindAttr>();
}
AtomicRMWKind AtomicRMWKindAttr::getValue() const {
  return static_cast<AtomicRMWKind>(::mlir::IntegerAttr::getInt());
}
} // namespace mlir

