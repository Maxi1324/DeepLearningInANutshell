/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace mhlo {

// two 64-bit integers 'handle' and 'type'
class ChannelHandle : public ::mlir::DictionaryAttr {
public:
  using ::mlir::DictionaryAttr::DictionaryAttr;
  static bool classof(::mlir::Attribute attr);
  static ChannelHandle get(
      ::mlir::IntegerAttr handle,
      ::mlir::IntegerAttr type,
      ::mlir::MLIRContext* context);

  ::mlir::IntegerAttr handle() const;
  ::mlir::IntegerAttr type() const;
};

} // namespace mlir
} // namespace mhlo
