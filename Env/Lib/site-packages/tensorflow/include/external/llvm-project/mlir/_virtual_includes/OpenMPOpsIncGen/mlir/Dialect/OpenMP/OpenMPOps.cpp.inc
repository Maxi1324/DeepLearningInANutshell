/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::omp::AtomicReadOp,
::mlir::omp::AtomicUpdateOp,
::mlir::omp::AtomicWriteOp,
::mlir::omp::BarrierOp,
::mlir::omp::CriticalDeclareOp,
::mlir::omp::CriticalOp,
::mlir::omp::FlushOp,
::mlir::omp::MasterOp,
::mlir::omp::OrderedOp,
::mlir::omp::OrderedRegionOp,
::mlir::omp::ParallelOp,
::mlir::omp::ReductionDeclareOp,
::mlir::omp::ReductionOp,
::mlir::omp::SectionOp,
::mlir::omp::SectionsOp,
::mlir::omp::TargetOp,
::mlir::omp::TaskwaitOp,
::mlir::omp::TaskyieldOp,
::mlir::omp::TerminatorOp,
::mlir::omp::WsLoopOp,
::mlir::omp::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace omp {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::omp::PointerLikeType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be OpenMP-compatible variable type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::IntegerType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isa<::mlir::IntegerType>())) || ((type.isa<::mlir::IndexType>())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer or index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "seq_cst")) || ((attr.cast<::mlir::StringAttr>().getValue() == "acq_rel")) || ((attr.cast<::mlir::StringAttr>().getValue() == "acquire")) || ((attr.cast<::mlir::StringAttr>().getValue() == "release")) || ((attr.cast<::mlir::StringAttr>().getValue() == "relaxed"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: MemoryOrderKind Clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::UnitAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: unit attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::omp::AtomicBinOpKindAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: BinOp for Atomic Updates";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::StringAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: string attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::FlatSymbolRefAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: flat symbol reference attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "dependsource")) || ((attr.cast<::mlir::StringAttr>().getValue() == "dependsink"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: depend clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && ((attr.cast<::mlir::IntegerAttr>().getInt() >= 0)))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "defprivate")) || ((attr.cast<::mlir::StringAttr>().getValue() == "deffirstprivate")) || ((attr.cast<::mlir::StringAttr>().getValue() == "defshared")) || ((attr.cast<::mlir::StringAttr>().getValue() == "defnone"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: default clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "primary")) || ((attr.cast<::mlir::StringAttr>().getValue() == "master")) || ((attr.cast<::mlir::StringAttr>().getValue() == "close")) || ((attr.cast<::mlir::StringAttr>().getValue() == "spread"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: ProcBindKind Clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::TypeAttr>())) && ((attr.cast<::mlir::TypeAttr>().getValue().isa<::mlir::Type>())))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: any type attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::SymbolRefAttr>()); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: symbol ref array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "Static")) || ((attr.cast<::mlir::StringAttr>().getValue() == "Dynamic")) || ((attr.cast<::mlir::StringAttr>().getValue() == "Guided")) || ((attr.cast<::mlir::StringAttr>().getValue() == "Auto")) || ((attr.cast<::mlir::StringAttr>().getValue() == "Runtime"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: ScheduleKind Clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "none")) || ((attr.cast<::mlir::StringAttr>().getValue() == "monotonic")) || ((attr.cast<::mlir::StringAttr>().getValue() == "nonmonotonic")) || ((attr.cast<::mlir::StringAttr>().getValue() == "simd"))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: OpenMP Schedule Modifier";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::StringAttr>())) && ((attr.cast<::mlir::StringAttr>().getValue() == "concurrent")))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: OrderKind Clause";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace omp
} // namespace mlir
namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicReadOp definitions
//===----------------------------------------------------------------------===//

AtomicReadOpAdaptor::AtomicReadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

AtomicReadOpAdaptor::AtomicReadOpAdaptor(AtomicReadOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange AtomicReadOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AtomicReadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AtomicReadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicReadOpAdaptor::address() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AtomicReadOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AtomicReadOpAdaptor::hint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("hint").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

::mlir::StringAttr AtomicReadOpAdaptor::memory_order() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("memory_order").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult AtomicReadOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_hint = odsAttrs.get("hint");
    if (tblgen_hint && !(((tblgen_hint.isa<::mlir::IntegerAttr>())) && ((tblgen_hint.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
      return emitError(loc, "'omp.atomic.read' op ""attribute 'hint' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
    auto tblgen_memory_order = odsAttrs.get("memory_order");
    if (tblgen_memory_order && !(((tblgen_memory_order.isa<::mlir::StringAttr>())) && (((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "seq_cst")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acq_rel")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acquire")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "release")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "relaxed")))))
      return emitError(loc, "'omp.atomic.read' op ""attribute 'memory_order' failed to satisfy constraint: MemoryOrderKind Clause");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicReadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicReadOp::address() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AtomicReadOp::addressMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AtomicReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr AtomicReadOp::hintAttr() {
  return (*this)->getAttr(hintAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t AtomicReadOp::hint() {
  auto attr = hintAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::StringAttr AtomicReadOp::memory_orderAttr() {
  return (*this)->getAttr(memory_orderAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > AtomicReadOp::memory_order() {
  auto attr = memory_orderAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void AtomicReadOp::hintAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(hintAttrName(), attr);
}

void AtomicReadOp::memory_orderAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(memory_orderAttrName(), attr);
}

::mlir::Attribute AtomicReadOp::removeMemory_orderAttr() {
  return (*this)->removeAttr(memory_orderAttrName());
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value address, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  odsState.addTypes(resultType0);
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value address, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value address, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  odsState.addTypes(resultType0);
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value address, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicReadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult AtomicReadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseAtomicReadOp(parser, result);
}

void AtomicReadOp::print(::mlir::OpAsmPrinter &p) {
  return printAtomicReadOp(p, *this);
}

::mlir::LogicalResult AtomicReadOp::verify() {
  {
    auto tblgen_hint = (*this)->getAttr(hintAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint, "hint")))
      return ::mlir::failure();
  }
  {
    auto tblgen_memory_order = (*this)->getAttr(memory_orderAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order, "memory_order")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return verifyAtomicReadOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicReadOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicUpdateOp definitions
//===----------------------------------------------------------------------===//

AtomicUpdateOpAdaptor::AtomicUpdateOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

AtomicUpdateOpAdaptor::AtomicUpdateOpAdaptor(AtomicUpdateOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange AtomicUpdateOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AtomicUpdateOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AtomicUpdateOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicUpdateOpAdaptor::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value AtomicUpdateOpAdaptor::expr() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr AtomicUpdateOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr AtomicUpdateOpAdaptor::isXBinopExpr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("isXBinopExpr").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::omp::AtomicBinOpKindAttr AtomicUpdateOpAdaptor::binop() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::omp::AtomicBinOpKindAttr attr = odsAttrs.get("binop").cast<::mlir::omp::AtomicBinOpKindAttr>();
  return attr;
}

::mlir::IntegerAttr AtomicUpdateOpAdaptor::hint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("hint").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

::mlir::StringAttr AtomicUpdateOpAdaptor::memory_order() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("memory_order").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult AtomicUpdateOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_isXBinopExpr = odsAttrs.get("isXBinopExpr");
    if (tblgen_isXBinopExpr && !((tblgen_isXBinopExpr.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.atomic.update' op ""attribute 'isXBinopExpr' failed to satisfy constraint: unit attribute");
  }
  {
    auto tblgen_binop = odsAttrs.get("binop");
    if (!tblgen_binop)
      return emitError(loc, "'omp.atomic.update' op ""requires attribute 'binop'");

    if (tblgen_binop && !((tblgen_binop.isa<::mlir::omp::AtomicBinOpKindAttr>())))
      return emitError(loc, "'omp.atomic.update' op ""attribute 'binop' failed to satisfy constraint: BinOp for Atomic Updates");
  }
  {
    auto tblgen_hint = odsAttrs.get("hint");
    if (tblgen_hint && !(((tblgen_hint.isa<::mlir::IntegerAttr>())) && ((tblgen_hint.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
      return emitError(loc, "'omp.atomic.update' op ""attribute 'hint' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
    auto tblgen_memory_order = odsAttrs.get("memory_order");
    if (tblgen_memory_order && !(((tblgen_memory_order.isa<::mlir::StringAttr>())) && (((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "seq_cst")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acq_rel")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acquire")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "release")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "relaxed")))))
      return emitError(loc, "'omp.atomic.update' op ""attribute 'memory_order' failed to satisfy constraint: MemoryOrderKind Clause");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicUpdateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicUpdateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicUpdateOp::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value AtomicUpdateOp::expr() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AtomicUpdateOp::xMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AtomicUpdateOp::exprMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AtomicUpdateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicUpdateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::UnitAttr AtomicUpdateOp::isXBinopExprAttr() {
  return (*this)->getAttr(isXBinopExprAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool AtomicUpdateOp::isXBinopExpr() {
  auto attr = isXBinopExprAttr();
  return attr != nullptr;
}

::mlir::omp::AtomicBinOpKindAttr AtomicUpdateOp::binopAttr() {
  return (*this)->getAttr(binopAttrName()).cast<::mlir::omp::AtomicBinOpKindAttr>();
}

::mlir::omp::AtomicBinOpKind AtomicUpdateOp::binop() {
  auto attr = binopAttr();
  return attr.getValue();
}

::mlir::IntegerAttr AtomicUpdateOp::hintAttr() {
  return (*this)->getAttr(hintAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t AtomicUpdateOp::hint() {
  auto attr = hintAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::StringAttr AtomicUpdateOp::memory_orderAttr() {
  return (*this)->getAttr(memory_orderAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > AtomicUpdateOp::memory_order() {
  auto attr = memory_orderAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void AtomicUpdateOp::isXBinopExprAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(isXBinopExprAttrName(), attr);
}

void AtomicUpdateOp::binopAttr(::mlir::omp::AtomicBinOpKindAttr attr) {
  (*this)->setAttr(binopAttrName(), attr);
}

void AtomicUpdateOp::hintAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(hintAttrName(), attr);
}

void AtomicUpdateOp::memory_orderAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(memory_orderAttrName(), attr);
}

::mlir::Attribute AtomicUpdateOp::removeIsXBinopExprAttr() {
  return (*this)->removeAttr(isXBinopExprAttrName());
}

::mlir::Attribute AtomicUpdateOp::removeMemory_orderAttr() {
  return (*this)->removeAttr(memory_orderAttrName());
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value expr, /*optional*/::mlir::UnitAttr isXBinopExpr, ::mlir::omp::AtomicBinOpKindAttr binop, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (isXBinopExpr) {
  odsState.addAttribute(isXBinopExprAttrName(odsState.name), isXBinopExpr);
  }
  odsState.addAttribute(binopAttrName(odsState.name), binop);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value expr, /*optional*/::mlir::UnitAttr isXBinopExpr, ::mlir::omp::AtomicBinOpKindAttr binop, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (isXBinopExpr) {
  odsState.addAttribute(isXBinopExprAttrName(odsState.name), isXBinopExpr);
  }
  odsState.addAttribute(binopAttrName(odsState.name), binop);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value expr, /*optional*/bool isXBinopExpr, ::mlir::omp::AtomicBinOpKind binop, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (isXBinopExpr) {
  odsState.addAttribute(isXBinopExprAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  odsState.addAttribute(binopAttrName(odsState.name), ::mlir::omp::AtomicBinOpKindAttr::get(odsBuilder.getContext(), binop));
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value expr, /*optional*/bool isXBinopExpr, ::mlir::omp::AtomicBinOpKind binop, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (isXBinopExpr) {
  odsState.addAttribute(isXBinopExprAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  odsState.addAttribute(binopAttrName(odsState.name), ::mlir::omp::AtomicBinOpKindAttr::get(odsBuilder.getContext(), binop));
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicUpdateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult AtomicUpdateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseAtomicUpdateOp(parser, result);
}

void AtomicUpdateOp::print(::mlir::OpAsmPrinter &p) {
  return printAtomicUpdateOp(p, *this);
}

::mlir::LogicalResult AtomicUpdateOp::verify() {
  {
    auto tblgen_isXBinopExpr = (*this)->getAttr(isXBinopExprAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_isXBinopExpr, "isXBinopExpr")))
      return ::mlir::failure();
  }
  {
    auto tblgen_binop = (*this)->getAttr(binopAttrName());
    if (!tblgen_binop)
      return emitOpError("requires attribute 'binop'");

    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps3(*this, tblgen_binop, "binop")))
      return ::mlir::failure();
  }
  {
    auto tblgen_hint = (*this)->getAttr(hintAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint, "hint")))
      return ::mlir::failure();
  }
  {
    auto tblgen_memory_order = (*this)->getAttr(memory_orderAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order, "memory_order")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return verifyAtomicUpdateOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicUpdateOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicWriteOp definitions
//===----------------------------------------------------------------------===//

AtomicWriteOpAdaptor::AtomicWriteOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

AtomicWriteOpAdaptor::AtomicWriteOpAdaptor(AtomicWriteOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange AtomicWriteOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AtomicWriteOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AtomicWriteOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicWriteOpAdaptor::address() {
  return *getODSOperands(0).begin();
}

::mlir::Value AtomicWriteOpAdaptor::value() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr AtomicWriteOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AtomicWriteOpAdaptor::hint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("hint").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

::mlir::StringAttr AtomicWriteOpAdaptor::memory_order() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("memory_order").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult AtomicWriteOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_hint = odsAttrs.get("hint");
    if (tblgen_hint && !(((tblgen_hint.isa<::mlir::IntegerAttr>())) && ((tblgen_hint.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
      return emitError(loc, "'omp.atomic.write' op ""attribute 'hint' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
    auto tblgen_memory_order = odsAttrs.get("memory_order");
    if (tblgen_memory_order && !(((tblgen_memory_order.isa<::mlir::StringAttr>())) && (((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "seq_cst")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acq_rel")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "acquire")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "release")) || ((tblgen_memory_order.cast<::mlir::StringAttr>().getValue() == "relaxed")))))
      return emitError(loc, "'omp.atomic.write' op ""attribute 'memory_order' failed to satisfy constraint: MemoryOrderKind Clause");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicWriteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtomicWriteOp::address() {
  return *getODSOperands(0).begin();
}

::mlir::Value AtomicWriteOp::value() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AtomicWriteOp::addressMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AtomicWriteOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AtomicWriteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr AtomicWriteOp::hintAttr() {
  return (*this)->getAttr(hintAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t AtomicWriteOp::hint() {
  auto attr = hintAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::StringAttr AtomicWriteOp::memory_orderAttr() {
  return (*this)->getAttr(memory_orderAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > AtomicWriteOp::memory_order() {
  auto attr = memory_orderAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void AtomicWriteOp::hintAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(hintAttrName(), attr);
}

void AtomicWriteOp::memory_orderAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(memory_orderAttrName(), attr);
}

::mlir::Attribute AtomicWriteOp::removeMemory_orderAttr() {
  return (*this)->removeAttr(memory_orderAttrName());
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value address, ::mlir::Value value, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addOperands(value);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value address, ::mlir::Value value, ::mlir::IntegerAttr hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addOperands(value);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value address, ::mlir::Value value, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addOperands(value);
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value address, ::mlir::Value value, uint64_t hint, /*optional*/::mlir::StringAttr memory_order) {
  odsState.addOperands(address);
  odsState.addOperands(value);
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  if (memory_order) {
  odsState.addAttribute(memory_orderAttrName(odsState.name), memory_order);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicWriteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult AtomicWriteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseAtomicWriteOp(parser, result);
}

void AtomicWriteOp::print(::mlir::OpAsmPrinter &p) {
  return printAtomicWriteOp(p, *this);
}

::mlir::LogicalResult AtomicWriteOp::verify() {
  {
    auto tblgen_hint = (*this)->getAttr(hintAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint, "hint")))
      return ::mlir::failure();
  }
  {
    auto tblgen_memory_order = (*this)->getAttr(memory_orderAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order, "memory_order")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return verifyAtomicWriteOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicWriteOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::BarrierOp definitions
//===----------------------------------------------------------------------===//

BarrierOpAdaptor::BarrierOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

BarrierOpAdaptor::BarrierOpAdaptor(BarrierOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange BarrierOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BarrierOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BarrierOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr BarrierOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult BarrierOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BarrierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BarrierOp::verify() {
  return ::mlir::success();
}

::mlir::ParseResult BarrierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  return ::mlir::success();
}

void BarrierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::BarrierOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CriticalDeclareOp definitions
//===----------------------------------------------------------------------===//

CriticalDeclareOpAdaptor::CriticalDeclareOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

CriticalDeclareOpAdaptor::CriticalDeclareOpAdaptor(CriticalDeclareOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange CriticalDeclareOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CriticalDeclareOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CriticalDeclareOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr CriticalDeclareOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr CriticalDeclareOpAdaptor::sym_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("sym_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr CriticalDeclareOpAdaptor::hint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("hint").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

::mlir::LogicalResult CriticalDeclareOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_sym_name = odsAttrs.get("sym_name");
    if (!tblgen_sym_name)
      return emitError(loc, "'omp.critical.declare' op ""requires attribute 'sym_name'");

    if (tblgen_sym_name && !((tblgen_sym_name.isa<::mlir::StringAttr>())))
      return emitError(loc, "'omp.critical.declare' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  {
    auto tblgen_hint = odsAttrs.get("hint");
    if (tblgen_hint && !(((tblgen_hint.isa<::mlir::IntegerAttr>())) && ((tblgen_hint.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
      return emitError(loc, "'omp.critical.declare' op ""attribute 'hint' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CriticalDeclareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CriticalDeclareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CriticalDeclareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CriticalDeclareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr CriticalDeclareOp::sym_nameAttr() {
  return (*this)->getAttr(sym_nameAttrName()).cast<::mlir::StringAttr>();
}

::llvm::StringRef CriticalDeclareOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

::mlir::IntegerAttr CriticalDeclareOp::hintAttr() {
  return (*this)->getAttr(hintAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t CriticalDeclareOp::hint() {
  auto attr = hintAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

void CriticalDeclareOp::sym_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(sym_nameAttrName(), attr);
}

void CriticalDeclareOp::hintAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(hintAttrName(), attr);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr hint) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), sym_name);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr hint) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), sym_name);
  odsState.addAttribute(hintAttrName(odsState.name), hint);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, uint64_t hint) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, uint64_t hint) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute(hintAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CriticalDeclareOp::verify() {
  {
    auto tblgen_sym_name = (*this)->getAttr(sym_nameAttrName());
    if (!tblgen_sym_name)
      return emitOpError("requires attribute 'sym_name'");

    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(*this, tblgen_sym_name, "sym_name")))
      return ::mlir::failure();
  }
  {
    auto tblgen_hint = (*this)->getAttr(hintAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint, "hint")))
      return ::mlir::failure();
  }
  return verifyCriticalDeclareOp(*this);
}

::mlir::ParseResult CriticalDeclareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::IntegerAttr hintAttr;

  if (parser.parseSymbolName(sym_nameAttr, "sym_name", result.attributes))
    return ::mlir::failure();
  {
    if (parseSynchronizationHint(parser, hintAttr))
      return ::mlir::failure();
    result.addAttribute("hint", hintAttr);
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  return ::mlir::success();
}

void CriticalDeclareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(sym_nameAttr().getValue());
  _odsPrinter << ' ';
  printSynchronizationHint(_odsPrinter, *this, hintAttr());
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{"sym_name", "hint"});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CriticalDeclareOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CriticalOp definitions
//===----------------------------------------------------------------------===//

CriticalOpAdaptor::CriticalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

CriticalOpAdaptor::CriticalOpAdaptor(CriticalOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange CriticalOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CriticalOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CriticalOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr CriticalOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr CriticalOpAdaptor::name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FlatSymbolRefAttr attr = odsAttrs.get("name").dyn_cast_or_null<::mlir::FlatSymbolRefAttr>();
  return attr;
}

::mlir::RegionRange CriticalOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &CriticalOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult CriticalOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_name = odsAttrs.get("name");
    if (tblgen_name && !((tblgen_name.isa<::mlir::FlatSymbolRefAttr>())))
      return emitError(loc, "'omp.critical' op ""attribute 'name' failed to satisfy constraint: flat symbol reference attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CriticalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CriticalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CriticalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CriticalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &CriticalOp::region() {
  return (*this)->getRegion(0);
}

::mlir::FlatSymbolRefAttr CriticalOp::nameAttr() {
  return (*this)->getAttr(nameAttrName()).dyn_cast_or_null<::mlir::FlatSymbolRefAttr>();
}

::llvm::Optional< ::llvm::StringRef > CriticalOp::name() {
  auto attr = nameAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void CriticalOp::nameAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(nameAttrName(), attr);
}

::mlir::Attribute CriticalOp::removeNameAttr() {
  return (*this)->removeAttr(nameAttrName());
}

void CriticalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::FlatSymbolRefAttr name) {
  if (name) {
  odsState.addAttribute(nameAttrName(odsState.name), name);
  }
  (void)odsState.addRegion();
}

void CriticalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::FlatSymbolRefAttr name) {
  if (name) {
  odsState.addAttribute(nameAttrName(odsState.name), name);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CriticalOp::verify() {
  {
    auto tblgen_name = (*this)->getAttr(nameAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps5(*this, tblgen_name, "name")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::verifyCriticalOp(*this);
}

::mlir::ParseResult CriticalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr nameAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  if (succeeded(parser.parseOptionalLParen())) {

  {
    ::mlir::OptionalParseResult parseResult =
      parser.parseOptionalAttribute(nameAttr, parser.getBuilder().getType<::mlir::NoneType>(), "name", result.attributes);
    if (parseResult.hasValue() && failed(*parseResult))
      return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void CriticalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if ((*this)->getAttr("name")) {
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(nameAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(region());
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{"name"});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CriticalOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::FlushOp definitions
//===----------------------------------------------------------------------===//

FlushOpAdaptor::FlushOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

FlushOpAdaptor::FlushOpAdaptor(FlushOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange FlushOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> FlushOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange FlushOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange FlushOpAdaptor::varList() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr FlushOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult FlushOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FlushOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range FlushOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range FlushOp::varList() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange FlushOp::varListMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FlushOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FlushOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FlushOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange varList) {
  odsState.addOperands(varList);
}

void FlushOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FlushOp::verify() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::ParseResult FlushOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> varListOperands;
  ::llvm::SMLoc varListOperandsLoc;
  (void)varListOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> varListTypes;
  if (succeeded(parser.parseOptionalLParen())) {

  varListOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(varListOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(varListTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.resolveOperands(varListOperands, varListTypes, varListOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FlushOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!varList().empty()) {
  _odsPrinter << "(";
  _odsPrinter << varList();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << varList().getTypes();
  _odsPrinter << ")";
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::FlushOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::MasterOp definitions
//===----------------------------------------------------------------------===//

MasterOpAdaptor::MasterOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

MasterOpAdaptor::MasterOpAdaptor(MasterOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange MasterOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MasterOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MasterOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr MasterOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange MasterOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &MasterOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult MasterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MasterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MasterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MasterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MasterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &MasterOp::region() {
  return (*this)->getRegion(0);
}

void MasterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
}

void MasterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MasterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MasterOp::verify() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::ParseResult MasterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void MasterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(region());
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::MasterOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::OrderedOp definitions
//===----------------------------------------------------------------------===//

OrderedOpAdaptor::OrderedOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

OrderedOpAdaptor::OrderedOpAdaptor(OrderedOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange OrderedOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> OrderedOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange OrderedOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange OrderedOpAdaptor::depend_vec_vars() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr OrderedOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr OrderedOpAdaptor::depend_type_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("depend_type_val").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr OrderedOpAdaptor::num_loops_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("num_loops_val").dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult OrderedOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_depend_type_val = odsAttrs.get("depend_type_val");
    if (tblgen_depend_type_val && !(((tblgen_depend_type_val.isa<::mlir::StringAttr>())) && (((tblgen_depend_type_val.cast<::mlir::StringAttr>().getValue() == "dependsource")) || ((tblgen_depend_type_val.cast<::mlir::StringAttr>().getValue() == "dependsink")))))
      return emitError(loc, "'omp.ordered' op ""attribute 'depend_type_val' failed to satisfy constraint: depend clause");
  }
  {
    auto tblgen_num_loops_val = odsAttrs.get("num_loops_val");
    if (tblgen_num_loops_val && !((((tblgen_num_loops_val.isa<::mlir::IntegerAttr>())) && ((tblgen_num_loops_val.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && ((tblgen_num_loops_val.cast<::mlir::IntegerAttr>().getInt() >= 0))))
      return emitError(loc, "'omp.ordered' op ""attribute 'num_loops_val' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrderedOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range OrderedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OrderedOp::depend_vec_vars() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange OrderedOp::depend_vec_varsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> OrderedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrderedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr OrderedOp::depend_type_valAttr() {
  return (*this)->getAttr(depend_type_valAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > OrderedOp::depend_type_val() {
  auto attr = depend_type_valAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::IntegerAttr OrderedOp::num_loops_valAttr() {
  return (*this)->getAttr(num_loops_valAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

::llvm::Optional<uint64_t> OrderedOp::num_loops_val() {
  auto attr = num_loops_valAttr();
  return attr ? ::llvm::Optional<uint64_t>(attr.getValue().getZExtValue()) : (::llvm::None);
}

void OrderedOp::depend_type_valAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(depend_type_valAttrName(), attr);
}

void OrderedOp::num_loops_valAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(num_loops_valAttrName(), attr);
}

::mlir::Attribute OrderedOp::removeDepend_type_valAttr() {
  return (*this)->removeAttr(depend_type_valAttrName());
}

::mlir::Attribute OrderedOp::removeNum_loops_valAttr() {
  return (*this)->removeAttr(num_loops_valAttrName());
}

void OrderedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::StringAttr depend_type_val, /*optional*/::mlir::IntegerAttr num_loops_val, ::mlir::ValueRange depend_vec_vars) {
  odsState.addOperands(depend_vec_vars);
  if (depend_type_val) {
  odsState.addAttribute(depend_type_valAttrName(odsState.name), depend_type_val);
  }
  if (num_loops_val) {
  odsState.addAttribute(num_loops_valAttrName(odsState.name), num_loops_val);
  }
}

void OrderedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::StringAttr depend_type_val, /*optional*/::mlir::IntegerAttr num_loops_val, ::mlir::ValueRange depend_vec_vars) {
  odsState.addOperands(depend_vec_vars);
  if (depend_type_val) {
  odsState.addAttribute(depend_type_valAttrName(odsState.name), depend_type_val);
  }
  if (num_loops_val) {
  odsState.addAttribute(num_loops_valAttrName(odsState.name), num_loops_val);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrderedOp::verify() {
  {
    auto tblgen_depend_type_val = (*this)->getAttr(depend_type_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps6(*this, tblgen_depend_type_val, "depend_type_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_num_loops_val = (*this)->getAttr(num_loops_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_num_loops_val, "num_loops_val")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::verifyOrderedOp(*this);
}

::mlir::ParseResult OrderedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr depend_type_valAttr;
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> depend_vec_varsOperands;
  ::llvm::SMLoc depend_vec_varsOperandsLoc;
  (void)depend_vec_varsOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> depend_vec_varsTypes;
  if (succeeded(parser.parseOptionalKeyword("depend_type"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::OptionalParseResult parseResult =
      parser.parseOptionalAttribute(depend_type_valAttr, parser.getBuilder().getType<::mlir::NoneType>(), "depend_type_val", result.attributes);
    if (parseResult.hasValue() && failed(*parseResult))
      return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (succeeded(parser.parseOptionalKeyword("depend_vec"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  depend_vec_varsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(depend_vec_varsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(depend_vec_varsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.resolveOperands(depend_vec_varsOperands, depend_vec_varsTypes, depend_vec_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OrderedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if ((*this)->getAttr("depend_type_val")) {
  _odsPrinter << ' ' << "depend_type";
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(depend_type_valAttr());
  _odsPrinter << ")";
  }
  if (!depend_vec_vars().empty()) {
  _odsPrinter << ' ' << "depend_vec";
  _odsPrinter << "(";
  _odsPrinter << depend_vec_vars();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << depend_vec_vars().getTypes();
  _odsPrinter << ")";
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{"depend_type_val"});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::OrderedOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::OrderedRegionOp definitions
//===----------------------------------------------------------------------===//

OrderedRegionOpAdaptor::OrderedRegionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

OrderedRegionOpAdaptor::OrderedRegionOpAdaptor(OrderedRegionOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange OrderedRegionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> OrderedRegionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange OrderedRegionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr OrderedRegionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr OrderedRegionOpAdaptor::simd() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("simd").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::RegionRange OrderedRegionOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &OrderedRegionOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult OrderedRegionOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_simd = odsAttrs.get("simd");
    if (tblgen_simd && !((tblgen_simd.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.ordered_region' op ""attribute 'simd' failed to satisfy constraint: unit attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrderedRegionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OrderedRegionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> OrderedRegionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrderedRegionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &OrderedRegionOp::region() {
  return (*this)->getRegion(0);
}

::mlir::UnitAttr OrderedRegionOp::simdAttr() {
  return (*this)->getAttr(simdAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool OrderedRegionOp::simd() {
  auto attr = simdAttr();
  return attr != nullptr;
}

void OrderedRegionOp::simdAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(simdAttrName(), attr);
}

::mlir::Attribute OrderedRegionOp::removeSimdAttr() {
  return (*this)->removeAttr(simdAttrName());
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::UnitAttr simd) {
  if (simd) {
  odsState.addAttribute(simdAttrName(odsState.name), simd);
  }
  (void)odsState.addRegion();
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::UnitAttr simd) {
  if (simd) {
  odsState.addAttribute(simdAttrName(odsState.name), simd);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool simd) {
  if (simd) {
  odsState.addAttribute(simdAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool simd) {
  if (simd) {
  odsState.addAttribute(simdAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedRegionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrderedRegionOp::verify() {
  {
    auto tblgen_simd = (*this)->getAttr(simdAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_simd, "simd")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::verifyOrderedRegionOp(*this);
}

::mlir::ParseResult OrderedRegionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  if (succeeded(parser.parseOptionalKeyword("simd"))) {
    result.addAttribute("simd", parser.getBuilder().getUnitAttr());
  }

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void OrderedRegionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if ((*this)->getAttr("simd")) {
  _odsPrinter << ' ' << "simd";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(region());
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{"simd"});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::OrderedRegionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ParallelOp definitions
//===----------------------------------------------------------------------===//

ParallelOpAdaptor::ParallelOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

ParallelOpAdaptor::ParallelOpAdaptor(ParallelOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange ParallelOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ParallelOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::ValueRange ParallelOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ParallelOpAdaptor::if_expr_var() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value ParallelOpAdaptor::num_threads_var() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::ValueRange ParallelOpAdaptor::private_vars() {
  return getODSOperands(2);
}

::mlir::ValueRange ParallelOpAdaptor::firstprivate_vars() {
  return getODSOperands(3);
}

::mlir::ValueRange ParallelOpAdaptor::shared_vars() {
  return getODSOperands(4);
}

::mlir::ValueRange ParallelOpAdaptor::copyin_vars() {
  return getODSOperands(5);
}

::mlir::ValueRange ParallelOpAdaptor::allocate_vars() {
  return getODSOperands(6);
}

::mlir::ValueRange ParallelOpAdaptor::allocators_vars() {
  return getODSOperands(7);
}

::mlir::DictionaryAttr ParallelOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ParallelOpAdaptor::default_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("default_val").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr ParallelOpAdaptor::proc_bind_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("proc_bind_val").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::RegionRange ParallelOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &ParallelOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult ParallelOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitError(loc, "'omp.parallel' op ""missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 8)
      return emitError(loc, "'omp.parallel' op ""'operand_segment_sizes' attribute for specifying operand segments must have 8 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_default_val = odsAttrs.get("default_val");
    if (tblgen_default_val && !(((tblgen_default_val.isa<::mlir::StringAttr>())) && (((tblgen_default_val.cast<::mlir::StringAttr>().getValue() == "defprivate")) || ((tblgen_default_val.cast<::mlir::StringAttr>().getValue() == "deffirstprivate")) || ((tblgen_default_val.cast<::mlir::StringAttr>().getValue() == "defshared")) || ((tblgen_default_val.cast<::mlir::StringAttr>().getValue() == "defnone")))))
      return emitError(loc, "'omp.parallel' op ""attribute 'default_val' failed to satisfy constraint: default clause");
  }
  {
    auto tblgen_proc_bind_val = odsAttrs.get("proc_bind_val");
    if (tblgen_proc_bind_val && !(((tblgen_proc_bind_val.isa<::mlir::StringAttr>())) && (((tblgen_proc_bind_val.cast<::mlir::StringAttr>().getValue() == "primary")) || ((tblgen_proc_bind_val.cast<::mlir::StringAttr>().getValue() == "master")) || ((tblgen_proc_bind_val.cast<::mlir::StringAttr>().getValue() == "close")) || ((tblgen_proc_bind_val.cast<::mlir::StringAttr>().getValue() == "spread")))))
      return emitError(loc, "'omp.parallel' op ""attribute 'proc_bind_val' failed to satisfy constraint: ProcBindKind Clause");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ParallelOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr =
      (*this)->getAttr(operand_segment_sizesAttrName()).cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::Operation::operand_range ParallelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ParallelOp::if_expr_var() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value ParallelOp::num_threads_var() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Operation::operand_range ParallelOp::private_vars() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range ParallelOp::firstprivate_vars() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range ParallelOp::shared_vars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range ParallelOp::copyin_vars() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range ParallelOp::allocate_vars() {
  return getODSOperands(6);
}

::mlir::Operation::operand_range ParallelOp::allocators_vars() {
  return getODSOperands(7);
}

::mlir::MutableOperandRange ParallelOp::if_expr_varMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::num_threads_varMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::private_varsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::firstprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::shared_varsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::copyin_varsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::allocate_varsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::allocators_varsMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> ParallelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ParallelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ParallelOp::region() {
  return (*this)->getRegion(0);
}

::mlir::StringAttr ParallelOp::default_valAttr() {
  return (*this)->getAttr(default_valAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > ParallelOp::default_val() {
  auto attr = default_valAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::StringAttr ParallelOp::proc_bind_valAttr() {
  return (*this)->getAttr(proc_bind_valAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > ParallelOp::proc_bind_val() {
  auto attr = proc_bind_valAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void ParallelOp::default_valAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(default_valAttrName(), attr);
}

void ParallelOp::proc_bind_valAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(proc_bind_valAttrName(), attr);
}

::mlir::Attribute ParallelOp::removeDefault_valAttr() {
  return (*this)->removeAttr(default_valAttrName());
}

::mlir::Attribute ParallelOp::removeProc_bind_valAttr() {
  return (*this)->removeAttr(proc_bind_valAttrName());
}

void ParallelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr_var, /*optional*/::mlir::Value num_threads_var, /*optional*/::mlir::StringAttr default_val, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange shared_vars, ::mlir::ValueRange copyin_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::StringAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(shared_vars);
  odsState.addOperands(copyin_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(shared_vars.size()), static_cast<int32_t>(copyin_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (default_val) {
  odsState.addAttribute(default_valAttrName(odsState.name), default_val);
  }
  if (proc_bind_val) {
  odsState.addAttribute(proc_bind_valAttrName(odsState.name), proc_bind_val);
  }
  (void)odsState.addRegion();
}

void ParallelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr_var, /*optional*/::mlir::Value num_threads_var, /*optional*/::mlir::StringAttr default_val, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange shared_vars, ::mlir::ValueRange copyin_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::StringAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(shared_vars);
  odsState.addOperands(copyin_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(shared_vars.size()), static_cast<int32_t>(copyin_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (default_val) {
  odsState.addAttribute(default_valAttrName(odsState.name), default_val);
  }
  if (proc_bind_val) {
  odsState.addAttribute(proc_bind_valAttrName(odsState.name), proc_bind_val);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ParallelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ParallelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseParallelOp(parser, result);
}

void ParallelOp::print(::mlir::OpAsmPrinter &p) {
  return printParallelOp(p, *this);
}

::mlir::LogicalResult ParallelOp::verify() {
  {
    auto sizeAttr = (*this)->getAttr(operand_segment_sizesAttrName()).dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitOpError("missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 8)
      return emitOpError("'operand_segment_sizes' attribute for specifying operand segments must have 8 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_default_val = (*this)->getAttr(default_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(*this, tblgen_default_val, "default_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_proc_bind_val = (*this)->getAttr(proc_bind_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps9(*this, tblgen_proc_bind_val, "proc_bind_val")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::verifyParallelOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ParallelOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ReductionDeclareOp definitions
//===----------------------------------------------------------------------===//

ReductionDeclareOpAdaptor::ReductionDeclareOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

ReductionDeclareOpAdaptor::ReductionDeclareOpAdaptor(ReductionDeclareOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange ReductionDeclareOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReductionDeclareOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReductionDeclareOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr ReductionDeclareOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ReductionDeclareOpAdaptor::sym_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("sym_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::TypeAttr ReductionDeclareOpAdaptor::type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::TypeAttr attr = odsAttrs.get("type").cast<::mlir::TypeAttr>();
  return attr;
}

::mlir::RegionRange ReductionDeclareOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &ReductionDeclareOpAdaptor::initializerRegion() {
  return *odsRegions[0];
}

::mlir::Region &ReductionDeclareOpAdaptor::reductionRegion() {
  return *odsRegions[1];
}

::mlir::Region &ReductionDeclareOpAdaptor::atomicReductionRegion() {
  return *odsRegions[2];
}

::mlir::LogicalResult ReductionDeclareOpAdaptor::verify(::mlir::Location loc) {
  {
    auto tblgen_sym_name = odsAttrs.get("sym_name");
    if (!tblgen_sym_name)
      return emitError(loc, "'omp.reduction.declare' op ""requires attribute 'sym_name'");

    if (tblgen_sym_name && !((tblgen_sym_name.isa<::mlir::StringAttr>())))
      return emitError(loc, "'omp.reduction.declare' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  {
    auto tblgen_type = odsAttrs.get("type");
    if (!tblgen_type)
      return emitError(loc, "'omp.reduction.declare' op ""requires attribute 'type'");

    if (tblgen_type && !(((tblgen_type.isa<::mlir::TypeAttr>())) && ((tblgen_type.cast<::mlir::TypeAttr>().getValue().isa<::mlir::Type>()))))
      return emitError(loc, "'omp.reduction.declare' op ""attribute 'type' failed to satisfy constraint: any type attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReductionDeclareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReductionDeclareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ReductionDeclareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionDeclareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ReductionDeclareOp::initializerRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &ReductionDeclareOp::reductionRegion() {
  return (*this)->getRegion(1);
}

::mlir::Region &ReductionDeclareOp::atomicReductionRegion() {
  return (*this)->getRegion(2);
}

::mlir::StringAttr ReductionDeclareOp::sym_nameAttr() {
  return (*this)->getAttr(sym_nameAttrName()).cast<::mlir::StringAttr>();
}

::llvm::StringRef ReductionDeclareOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

::mlir::TypeAttr ReductionDeclareOp::typeAttr() {
  return (*this)->getAttr(typeAttrName()).cast<::mlir::TypeAttr>();
}

::mlir::Type ReductionDeclareOp::type() {
  auto attr = typeAttr();
  return attr.getValue().cast<::mlir::Type>();
}

void ReductionDeclareOp::sym_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(sym_nameAttrName(), attr);
}

void ReductionDeclareOp::typeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(typeAttrName(), attr);
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), sym_name);
  odsState.addAttribute(typeAttrName(odsState.name), type);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), sym_name);
  odsState.addAttribute(typeAttrName(odsState.name), type);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::Type type) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute(typeAttrName(odsState.name), ::mlir::TypeAttr::get(type));
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::Type type) {
  odsState.addAttribute(sym_nameAttrName(odsState.name), odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute(typeAttrName(odsState.name), ::mlir::TypeAttr::get(type));
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionDeclareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 3; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReductionDeclareOp::verify() {
  {
    auto tblgen_sym_name = (*this)->getAttr(sym_nameAttrName());
    if (!tblgen_sym_name)
      return emitOpError("requires attribute 'sym_name'");

    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(*this, tblgen_sym_name, "sym_name")))
      return ::mlir::failure();
  }
  {
    auto tblgen_type = (*this)->getAttr(typeAttrName());
    if (!tblgen_type)
      return emitOpError("requires attribute 'type'");

    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps10(*this, tblgen_type, "type")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "initializerRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "reductionRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(2)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "atomicReductionRegion", index++)))
        return ::mlir::failure();
  }
  return ::verifyReductionDeclareOp(*this);
}

::mlir::ParseResult ReductionDeclareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::TypeAttr typeAttr;
  std::unique_ptr<::mlir::Region> initializerRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> reductionRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> atomicReductionRegionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseSymbolName(sym_nameAttr, "sym_name", result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(typeAttr, parser.getBuilder().getType<::mlir::NoneType>(), "type",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
    return ::mlir::failure();
  if (parser.parseKeyword("init"))
    return ::mlir::failure();

  if (parser.parseRegion(*initializerRegionRegion))
    return ::mlir::failure();
  if (parser.parseKeyword("combiner"))
    return ::mlir::failure();

  if (parser.parseRegion(*reductionRegionRegion))
    return ::mlir::failure();
  {
    if (parseAtomicReductionRegion(parser, *atomicReductionRegionRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(initializerRegionRegion));
  result.addRegion(std::move(reductionRegionRegion));
  result.addRegion(std::move(atomicReductionRegionRegion));
  return ::mlir::success();
}

void ReductionDeclareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(sym_nameAttr().getValue());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(typeAttr());
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), /*elidedAttrs=*/{"sym_name", "type"});
  _odsPrinter << ' ' << "init";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(initializerRegion());
  _odsPrinter << ' ' << "combiner";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(reductionRegion());
  _odsPrinter << ' ';
  printAtomicReductionRegion(_odsPrinter, *this, atomicReductionRegion());
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ReductionDeclareOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ReductionOp definitions
//===----------------------------------------------------------------------===//

ReductionOpAdaptor::ReductionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

ReductionOpAdaptor::ReductionOpAdaptor(ReductionOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange ReductionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReductionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReductionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReductionOpAdaptor::accumulator() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ReductionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ReductionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReductionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReductionOp::accumulator() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ReductionOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ReductionOp::accumulatorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value accumulator) {
  odsState.addOperands(operand);
  odsState.addOperands(accumulator);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value accumulator) {
  odsState.addOperands(operand);
  odsState.addOperands(accumulator);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReductionOp::verify() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()((*this->getODSOperands(1).begin()).getType().cast<::mlir::omp::PointerLikeType>().getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that value types matches accumulator element type");
  return ::verifyReductionOp(*this);
}

::mlir::ParseResult ReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::OpAsmParser::OperandType accumulatorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> accumulatorOperands(accumulatorRawOperands);  ::llvm::SMLoc accumulatorOperandsLoc;
  (void)accumulatorOperandsLoc;
  ::mlir::Type accumulatorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> accumulatorTypes(accumulatorRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  accumulatorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accumulatorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    accumulatorRawTypes[0] = type;
  }
  for (::mlir::Type type : accumulatorTypes) {
    (void)type;
    if (!((type.isa<::mlir::omp::PointerLikeType>()))) {
      return parser.emitError(parser.getNameLoc()) << "'accumulator' must be OpenMP-compatible variable type, but got " << type;
    }
  }
  if (parser.resolveOperands(operandOperands, accumulatorTypes[0].cast<::mlir::omp::PointerLikeType>().getElementType(), operandOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accumulatorOperands, accumulatorTypes, accumulatorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << operand();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << accumulator();
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = accumulator().getType();
    if (auto validType = type.dyn_cast<::mlir::omp::PointerLikeType>())
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ReductionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SectionOp definitions
//===----------------------------------------------------------------------===//

SectionOpAdaptor::SectionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

SectionOpAdaptor::SectionOpAdaptor(SectionOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange SectionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SectionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SectionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr SectionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange SectionOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &SectionOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult SectionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SectionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SectionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SectionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SectionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SectionOp::region() {
  return (*this)->getRegion(0);
}

void SectionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
}

void SectionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SectionOp::verify() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::ParseResult SectionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void SectionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(region());
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SectionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SectionsOp definitions
//===----------------------------------------------------------------------===//

SectionsOpAdaptor::SectionsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

SectionsOpAdaptor::SectionsOpAdaptor(SectionsOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange SectionsOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SectionsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::ValueRange SectionsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange SectionsOpAdaptor::private_vars() {
  return getODSOperands(0);
}

::mlir::ValueRange SectionsOpAdaptor::firstprivate_vars() {
  return getODSOperands(1);
}

::mlir::ValueRange SectionsOpAdaptor::lastprivate_vars() {
  return getODSOperands(2);
}

::mlir::ValueRange SectionsOpAdaptor::reduction_vars() {
  return getODSOperands(3);
}

::mlir::ValueRange SectionsOpAdaptor::allocate_vars() {
  return getODSOperands(4);
}

::mlir::ValueRange SectionsOpAdaptor::allocators_vars() {
  return getODSOperands(5);
}

::mlir::DictionaryAttr SectionsOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr SectionsOpAdaptor::reductions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("reductions").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::UnitAttr SectionsOpAdaptor::nowait() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("nowait").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::RegionRange SectionsOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &SectionsOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult SectionsOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitError(loc, "'omp.sections' op ""missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 6)
      return emitError(loc, "'omp.sections' op ""'operand_segment_sizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_reductions = odsAttrs.get("reductions");
    if (tblgen_reductions && !(((tblgen_reductions.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_reductions.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::SymbolRefAttr>()); }))))
      return emitError(loc, "'omp.sections' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");
  }
  {
    auto tblgen_nowait = odsAttrs.get("nowait");
    if (tblgen_nowait && !((tblgen_nowait.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.sections' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SectionsOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr =
      (*this)->getAttr(operand_segment_sizesAttrName()).cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::Operation::operand_range SectionsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SectionsOp::private_vars() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range SectionsOp::firstprivate_vars() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range SectionsOp::lastprivate_vars() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range SectionsOp::reduction_vars() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range SectionsOp::allocate_vars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range SectionsOp::allocators_vars() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange SectionsOp::private_varsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::firstprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::lastprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::reduction_varsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::allocate_varsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::allocators_varsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> SectionsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SectionsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SectionsOp::region() {
  return (*this)->getRegion(0);
}

::mlir::ArrayAttr SectionsOp::reductionsAttr() {
  return (*this)->getAttr(reductionsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > SectionsOp::reductions() {
  auto attr = reductionsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::UnitAttr SectionsOp::nowaitAttr() {
  return (*this)->getAttr(nowaitAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool SectionsOp::nowait() {
  auto attr = nowaitAttr();
  return attr != nullptr;
}

void SectionsOp::reductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(reductionsAttrName(), attr);
}

void SectionsOp::nowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(nowaitAttrName(), attr);
}

::mlir::Attribute SectionsOp::removeReductionsAttr() {
  return (*this)->removeAttr(reductionsAttrName());
}

::mlir::Attribute SectionsOp::removeNowaitAttr() {
  return (*this)->removeAttr(nowaitAttrName());
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange lastprivate_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(lastprivate_vars);
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(lastprivate_vars.size()), static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (reductions) {
  odsState.addAttribute(reductionsAttrName(odsState.name), reductions);
  }
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), nowait);
  }
  (void)odsState.addRegion();
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange lastprivate_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(lastprivate_vars);
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(lastprivate_vars.size()), static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (reductions) {
  odsState.addAttribute(reductionsAttrName(odsState.name), reductions);
  }
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), nowait);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange lastprivate_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(lastprivate_vars);
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(lastprivate_vars.size()), static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (reductions) {
  odsState.addAttribute(reductionsAttrName(odsState.name), reductions);
  }
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange private_vars, ::mlir::ValueRange firstprivate_vars, ::mlir::ValueRange lastprivate_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(lastprivate_vars);
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(lastprivate_vars.size()), static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}));
  if (reductions) {
  odsState.addAttribute(reductionsAttrName(odsState.name), reductions);
  }
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult SectionsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseSectionsOp(parser, result);
}

void SectionsOp::print(::mlir::OpAsmPrinter &p) {
  return printSectionsOp(p, *this);
}

::mlir::LogicalResult SectionsOp::verify() {
  {
    auto sizeAttr = (*this)->getAttr(operand_segment_sizesAttrName()).dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitOpError("missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 6)
      return emitOpError("'operand_segment_sizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_reductions = (*this)->getAttr(reductionsAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps11(*this, tblgen_reductions, "reductions")))
      return ::mlir::failure();
  }
  {
    auto tblgen_nowait = (*this)->getAttr(nowaitAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_nowait, "nowait")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return verifySectionsOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SectionsOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TargetOp definitions
//===----------------------------------------------------------------------===//

TargetOpAdaptor::TargetOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

TargetOpAdaptor::TargetOpAdaptor(TargetOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange TargetOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TargetOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::ValueRange TargetOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TargetOpAdaptor::if_expr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value TargetOpAdaptor::device() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value TargetOpAdaptor::thread_limit() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::DictionaryAttr TargetOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TargetOpAdaptor::nowait() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("nowait").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::RegionRange TargetOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &TargetOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult TargetOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitError(loc, "'omp.target' op ""missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'omp.target' op ""'operand_segment_sizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_nowait = odsAttrs.get("nowait");
    if (tblgen_nowait && !((tblgen_nowait.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.target' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TargetOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr =
      (*this)->getAttr(operand_segment_sizesAttrName()).cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::Operation::operand_range TargetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TargetOp::if_expr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value TargetOp::device() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::Value TargetOp::thread_limit() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::MutableOperandRange TargetOp::if_exprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TargetOp::deviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TargetOp::thread_limitMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> TargetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TargetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TargetOp::region() {
  return (*this)->getRegion(0);
}

::mlir::UnitAttr TargetOp::nowaitAttr() {
  return (*this)->getAttr(nowaitAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool TargetOp::nowait() {
  auto attr = nowaitAttr();
  return attr != nullptr;
}

void TargetOp::nowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(nowaitAttrName(), attr);
}

::mlir::Attribute TargetOp::removeNowaitAttr() {
  return (*this)->removeAttr(nowaitAttrName());
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/::mlir::UnitAttr nowait) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0)}));
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), nowait);
  }
  (void)odsState.addRegion();
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/::mlir::UnitAttr nowait) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0)}));
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), nowait);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/bool nowait) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0)}));
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/bool nowait) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addAttribute(operand_segment_sizesAttrName(odsState.name), odsBuilder.getI32VectorAttr({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0)}));
  if (nowait) {
  odsState.addAttribute(nowaitAttrName(odsState.name), odsBuilder.getUnitAttr());
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TargetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TargetOp::verify() {
  {
    auto sizeAttr = (*this)->getAttr(operand_segment_sizesAttrName()).dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitOpError("missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 3)
      return emitOpError("'operand_segment_sizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_nowait = (*this)->getAttr(nowaitAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_nowait, "nowait")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TargetOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskwaitOp definitions
//===----------------------------------------------------------------------===//

TaskwaitOpAdaptor::TaskwaitOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

TaskwaitOpAdaptor::TaskwaitOpAdaptor(TaskwaitOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange TaskwaitOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TaskwaitOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TaskwaitOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr TaskwaitOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TaskwaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TaskwaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskwaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TaskwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskwaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskwaitOp::verify() {
  return ::mlir::success();
}

::mlir::ParseResult TaskwaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  return ::mlir::success();
}

void TaskwaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskwaitOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskyieldOp definitions
//===----------------------------------------------------------------------===//

TaskyieldOpAdaptor::TaskyieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

TaskyieldOpAdaptor::TaskyieldOpAdaptor(TaskyieldOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange TaskyieldOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TaskyieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TaskyieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr TaskyieldOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TaskyieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TaskyieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskyieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskyieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TaskyieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskyieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskyieldOp::verify() {
  return ::mlir::success();
}

::mlir::ParseResult TaskyieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  return ::mlir::success();
}

void TaskyieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskyieldOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TerminatorOp definitions
//===----------------------------------------------------------------------===//

TerminatorOpAdaptor::TerminatorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

TerminatorOpAdaptor::TerminatorOpAdaptor(TerminatorOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange TerminatorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TerminatorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TerminatorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr TerminatorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TerminatorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TerminatorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TerminatorOp::verify() {
  return ::mlir::success();
}

::mlir::ParseResult TerminatorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  return ::mlir::success();
}

void TerminatorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TerminatorOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::WsLoopOp definitions
//===----------------------------------------------------------------------===//

WsLoopOpAdaptor::WsLoopOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

WsLoopOpAdaptor::WsLoopOpAdaptor(WsLoopOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange WsLoopOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> WsLoopOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::ValueRange WsLoopOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange WsLoopOpAdaptor::lowerBound() {
  return getODSOperands(0);
}

::mlir::ValueRange WsLoopOpAdaptor::upperBound() {
  return getODSOperands(1);
}

::mlir::ValueRange WsLoopOpAdaptor::step() {
  return getODSOperands(2);
}

::mlir::ValueRange WsLoopOpAdaptor::private_vars() {
  return getODSOperands(3);
}

::mlir::ValueRange WsLoopOpAdaptor::firstprivate_vars() {
  return getODSOperands(4);
}

::mlir::ValueRange WsLoopOpAdaptor::lastprivate_vars() {
  return getODSOperands(5);
}

::mlir::ValueRange WsLoopOpAdaptor::linear_vars() {
  return getODSOperands(6);
}

::mlir::ValueRange WsLoopOpAdaptor::linear_step_vars() {
  return getODSOperands(7);
}

::mlir::ValueRange WsLoopOpAdaptor::reduction_vars() {
  return getODSOperands(8);
}

::mlir::Value WsLoopOpAdaptor::schedule_chunk_var() {
  auto operands = getODSOperands(9);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::DictionaryAttr WsLoopOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr WsLoopOpAdaptor::reductions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("reductions").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::StringAttr WsLoopOpAdaptor::schedule_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("schedule_val").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr WsLoopOpAdaptor::schedule_modifier() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("schedule_modifier").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::UnitAttr WsLoopOpAdaptor::simd_modifier() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("simd_modifier").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::IntegerAttr WsLoopOpAdaptor::collapse_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("collapse_val").dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::mlir::UnitAttr WsLoopOpAdaptor::nowait() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("nowait").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::IntegerAttr WsLoopOpAdaptor::ordered_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("ordered_val").dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::mlir::StringAttr WsLoopOpAdaptor::order_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("order_val").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::UnitAttr WsLoopOpAdaptor::inclusive() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("inclusive").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::RegionRange WsLoopOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &WsLoopOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult WsLoopOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitError(loc, "'omp.wsloop' op ""missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 10)
      return emitError(loc, "'omp.wsloop' op ""'operand_segment_sizes' attribute for specifying operand segments must have 10 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_reductions = odsAttrs.get("reductions");
    if (tblgen_reductions && !(((tblgen_reductions.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_reductions.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::SymbolRefAttr>()); }))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");
  }
  {
    auto tblgen_schedule_val = odsAttrs.get("schedule_val");
    if (tblgen_schedule_val && !(((tblgen_schedule_val.isa<::mlir::StringAttr>())) && (((tblgen_schedule_val.cast<::mlir::StringAttr>().getValue() == "Static")) || ((tblgen_schedule_val.cast<::mlir::StringAttr>().getValue() == "Dynamic")) || ((tblgen_schedule_val.cast<::mlir::StringAttr>().getValue() == "Guided")) || ((tblgen_schedule_val.cast<::mlir::StringAttr>().getValue() == "Auto")) || ((tblgen_schedule_val.cast<::mlir::StringAttr>().getValue() == "Runtime")))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'schedule_val' failed to satisfy constraint: ScheduleKind Clause");
  }
  {
    auto tblgen_schedule_modifier = odsAttrs.get("schedule_modifier");
    if (tblgen_schedule_modifier && !(((tblgen_schedule_modifier.isa<::mlir::StringAttr>())) && (((tblgen_schedule_modifier.cast<::mlir::StringAttr>().getValue() == "none")) || ((tblgen_schedule_modifier.cast<::mlir::StringAttr>().getValue() == "monotonic")) || ((tblgen_schedule_modifier.cast<::mlir::StringAttr>().getValue() == "nonmonotonic")) || ((tblgen_schedule_modifier.cast<::mlir::StringAttr>().getValue() == "simd")))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'schedule_modifier' failed to satisfy constraint: OpenMP Schedule Modifier");
  }
  {
    auto tblgen_simd_modifier = odsAttrs.get("simd_modifier");
    if (tblgen_simd_modifier && !((tblgen_simd_modifier.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.wsloop' op ""attribute 'simd_modifier' failed to satisfy constraint: unit attribute");
  }
  {
    auto tblgen_collapse_val = odsAttrs.get("collapse_val");
    if (tblgen_collapse_val && !((((tblgen_collapse_val.isa<::mlir::IntegerAttr>())) && ((tblgen_collapse_val.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && ((tblgen_collapse_val.cast<::mlir::IntegerAttr>().getInt() >= 0))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'collapse_val' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  }
  {
    auto tblgen_nowait = odsAttrs.get("nowait");
    if (tblgen_nowait && !((tblgen_nowait.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.wsloop' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  }
  {
    auto tblgen_ordered_val = odsAttrs.get("ordered_val");
    if (tblgen_ordered_val && !((((tblgen_ordered_val.isa<::mlir::IntegerAttr>())) && ((tblgen_ordered_val.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))) && ((tblgen_ordered_val.cast<::mlir::IntegerAttr>().getInt() >= 0))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'ordered_val' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  }
  {
    auto tblgen_order_val = odsAttrs.get("order_val");
    if (tblgen_order_val && !(((tblgen_order_val.isa<::mlir::StringAttr>())) && ((tblgen_order_val.cast<::mlir::StringAttr>().getValue() == "concurrent"))))
      return emitError(loc, "'omp.wsloop' op ""attribute 'order_val' failed to satisfy constraint: OrderKind Clause");
  }
  {
    auto tblgen_inclusive = odsAttrs.get("inclusive");
    if (tblgen_inclusive && !((tblgen_inclusive.isa<::mlir::UnitAttr>())))
      return emitError(loc, "'omp.wsloop' op ""attribute 'inclusive' failed to satisfy constraint: unit attribute");
  }
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WsLoopOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr =
      (*this)->getAttr(operand_segment_sizesAttrName()).cast<::mlir::DenseIntElementsAttr>();

  const uint32_t *sizeAttrValueIt = &*sizeAttr.value_begin<uint32_t>();
  if (sizeAttr.isSplat())
    return {*sizeAttrValueIt * index, *sizeAttrValueIt};

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttrValueIt[i];
  return {start, sizeAttrValueIt[index]};
}

::mlir::Operation::operand_range WsLoopOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WsLoopOp::lowerBound() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range WsLoopOp::upperBound() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range WsLoopOp::step() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range WsLoopOp::private_vars() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range WsLoopOp::firstprivate_vars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range WsLoopOp::lastprivate_vars() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range WsLoopOp::linear_vars() {
  return getODSOperands(6);
}

::mlir::Operation::operand_range WsLoopOp::linear_step_vars() {
  return getODSOperands(7);
}

::mlir::Operation::operand_range WsLoopOp::reduction_vars() {
  return getODSOperands(8);
}

::mlir::Value WsLoopOp::schedule_chunk_var() {
  auto operands = getODSOperands(9);
  return operands.empty() ? ::mlir::Value() : *operands.begin();
}

::mlir::MutableOperandRange WsLoopOp::lowerBoundMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::upperBoundMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::stepMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::private_varsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::firstprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::lastprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::linear_varsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::linear_step_varsMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::reduction_varsMutable() {
  auto range = getODSOperandIndexAndLength(8);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(8u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::schedule_chunk_varMutable() {
  auto range = getODSOperandIndexAndLength(9);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(9u, *getOperation()->getAttrDictionary().getNamed(operand_segment_sizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> WsLoopOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WsLoopOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &WsLoopOp::region() {
  return (*this)->getRegion(0);
}

::mlir::ArrayAttr WsLoopOp::reductionsAttr() {
  return (*this)->getAttr(reductionsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > WsLoopOp::reductions() {
  auto attr = reductionsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::StringAttr WsLoopOp::schedule_valAttr() {
  return (*this)->getAttr(schedule_valAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > WsLoopOp::schedule_val() {
  auto attr = schedule_valAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::StringAttr WsLoopOp::schedule_modifierAttr() {
  return (*this)->getAttr(schedule_modifierAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > WsLoopOp::schedule_modifier() {
  auto attr = schedule_modifierAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::UnitAttr WsLoopOp::simd_modifierAttr() {
  return (*this)->getAttr(simd_modifierAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool WsLoopOp::simd_modifier() {
  auto attr = simd_modifierAttr();
  return attr != nullptr;
}

::mlir::IntegerAttr WsLoopOp::collapse_valAttr() {
  return (*this)->getAttr(collapse_valAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

::llvm::Optional<uint64_t> WsLoopOp::collapse_val() {
  auto attr = collapse_valAttr();
  return attr ? ::llvm::Optional<uint64_t>(attr.getValue().getZExtValue()) : (::llvm::None);
}

::mlir::UnitAttr WsLoopOp::nowaitAttr() {
  return (*this)->getAttr(nowaitAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool WsLoopOp::nowait() {
  auto attr = nowaitAttr();
  return attr != nullptr;
}

::mlir::IntegerAttr WsLoopOp::ordered_valAttr() {
  return (*this)->getAttr(ordered_valAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

::llvm::Optional<uint64_t> WsLoopOp::ordered_val() {
  auto attr = ordered_valAttr();
  return attr ? ::llvm::Optional<uint64_t>(attr.getValue().getZExtValue()) : (::llvm::None);
}

::mlir::StringAttr WsLoopOp::order_valAttr() {
  return (*this)->getAttr(order_valAttrName()).dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > WsLoopOp::order_val() {
  auto attr = order_valAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::UnitAttr WsLoopOp::inclusiveAttr() {
  return (*this)->getAttr(inclusiveAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool WsLoopOp::inclusive() {
  auto attr = inclusiveAttr();
  return attr != nullptr;
}

void WsLoopOp::reductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(reductionsAttrName(), attr);
}

void WsLoopOp::schedule_valAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(schedule_valAttrName(), attr);
}

void WsLoopOp::schedule_modifierAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(schedule_modifierAttrName(), attr);
}

void WsLoopOp::simd_modifierAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(simd_modifierAttrName(), attr);
}

void WsLoopOp::collapse_valAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(collapse_valAttrName(), attr);
}

void WsLoopOp::nowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(nowaitAttrName(), attr);
}

void WsLoopOp::ordered_valAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(ordered_valAttrName(), attr);
}

void WsLoopOp::order_valAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(order_valAttrName(), attr);
}

void WsLoopOp::inclusiveAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(inclusiveAttrName(), attr);
}

::mlir::Attribute WsLoopOp::removeReductionsAttr() {
  return (*this)->removeAttr(reductionsAttrName());
}

::mlir::Attribute WsLoopOp::removeSchedule_valAttr() {
  return (*this)->removeAttr(schedule_valAttrName());
}

::mlir::Attribute WsLoopOp::removeSchedule_modifierAttr() {
  return (*this)->removeAttr(schedule_modifierAttrName());
}

::mlir::Attribute WsLoopOp::removeSimd_modifierAttr() {
  return (*this)->removeAttr(simd_modifierAttrName());
}

::mlir::Attribute WsLoopOp::removeCollapse_valAttr() {
  return (*this)->removeAttr(collapse_valAttrName());
}

::mlir::Attribute WsLoopOp::removeNowaitAttr() {
  return (*this)->removeAttr(nowaitAttrName());
}

::mlir::Attribute WsLoopOp::removeOrdered_valAttr() {
  return (*this)->removeAttr(ordered_valAttrName());
}

::mlir::Attribute WsLoopOp::removeOrder_valAttr() {
  return (*this)->removeAttr(order_valAttrName());
}

::mlir::Attribute WsLoopOp::removeInclusiveAttr() {
  return (*this)->removeAttr(inclusiveAttrName());
}

::mlir::ParseResult WsLoopOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return parseWsLoopOp(parser, result);
}

void WsLoopOp::print(::mlir::OpAsmPrinter &p) {
  return printWsLoopOp(p, *this);
}

::mlir::LogicalResult WsLoopOp::verify() {
  {
    auto sizeAttr = (*this)->getAttr(operand_segment_sizesAttrName()).dyn_cast<::mlir::DenseIntElementsAttr>();
    if (!sizeAttr)
      return emitOpError("missing segment sizes attribute 'operand_segment_sizes'");
    auto numElements =
        sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 10)
      return emitOpError("'operand_segment_sizes' attribute for specifying operand segments must have 10 "
                "elements, but got ") << numElements;
  }
    {
    auto tblgen_reductions = (*this)->getAttr(reductionsAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps11(*this, tblgen_reductions, "reductions")))
      return ::mlir::failure();
  }
  {
    auto tblgen_schedule_val = (*this)->getAttr(schedule_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps12(*this, tblgen_schedule_val, "schedule_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_schedule_modifier = (*this)->getAttr(schedule_modifierAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_schedule_modifier, "schedule_modifier")))
      return ::mlir::failure();
  }
  {
    auto tblgen_simd_modifier = (*this)->getAttr(simd_modifierAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_simd_modifier, "simd_modifier")))
      return ::mlir::failure();
  }
  {
    auto tblgen_collapse_val = (*this)->getAttr(collapse_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_collapse_val, "collapse_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_nowait = (*this)->getAttr(nowaitAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_nowait, "nowait")))
      return ::mlir::failure();
  }
  {
    auto tblgen_ordered_val = (*this)->getAttr(ordered_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_ordered_val, "ordered_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_order_val = (*this)->getAttr(order_valAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps14(*this, tblgen_order_val, "order_val")))
      return ::mlir::failure();
  }
  {
    auto tblgen_inclusive = (*this)->getAttr(inclusiveAttrName());
    if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_inclusive, "inclusive")))
      return ::mlir::failure();
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup8 = getODSOperands(8);

    for (auto v : valueGroup8) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup9 = getODSOperands(9);

    if (valueGroup9.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup9.size();
    }

    for (auto v : valueGroup9) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((::llvm::is_splat(::llvm::makeArrayRef({this->getODSOperands(0).getType(), this->getODSOperands(1).getType(), this->getODSOperands(2).getType()})))))
    return emitOpError("failed to verify that all of {lowerBound, upperBound, step} have same type");
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::makeMutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::verifyWsLoopOp(*this);
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::WsLoopOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::YieldOp definitions
//===----------------------------------------------------------------------===//

YieldOpAdaptor::YieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {}

YieldOpAdaptor::YieldOpAdaptor(YieldOp &op) : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {}

::mlir::ValueRange YieldOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> YieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange YieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange YieldOpAdaptor::results() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr YieldOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult YieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range YieldOp::results() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::resultsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results) {
  odsState.addOperands(results);
}

void YieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldOp::verify() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> resultsOperands;
  ::llvm::SMLoc resultsOperandsLoc;
  (void)resultsOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> resultsTypes;
  if (succeeded(parser.parseOptionalLParen())) {

  resultsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(resultsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.resolveOperands(resultsOperands, resultsTypes, resultsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!results().empty()) {
  _odsPrinter << "(";
  _odsPrinter << results();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << results().getTypes();
  _odsPrinter << ")";
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
}

void YieldOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace omp
} // namespace mlir
DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::YieldOp)


#endif  // GET_OP_CLASSES

