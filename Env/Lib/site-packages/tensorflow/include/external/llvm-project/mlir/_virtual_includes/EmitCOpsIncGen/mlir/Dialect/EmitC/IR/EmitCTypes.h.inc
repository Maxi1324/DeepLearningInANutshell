/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace emitc {
class OpaqueType;
namespace detail {
struct OpaqueTypeStorage;
} // namespace detail
class OpaqueType : public ::mlir::Type::TypeBase<OpaqueType, ::mlir::Type, detail::OpaqueTypeStorage> {
public:
  using Base::Base;
public:
  static OpaqueType get(::mlir::MLIRContext *context, ::llvm::StringRef value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"opaque"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &parser);
  void print(::mlir::AsmPrinter &printer) const;
  ::llvm::StringRef getValue() const;
};
} // namespace emitc
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::OpaqueType)

#endif  // GET_TYPEDEF_CLASSES

