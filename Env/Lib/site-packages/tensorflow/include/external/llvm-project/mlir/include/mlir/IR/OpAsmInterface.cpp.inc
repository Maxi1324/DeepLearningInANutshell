/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

void mlir::OpAsmOpInterface::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
      return getImpl()->getAsmResultNames(getImpl(), getOperation(), setNameFn);
  }
void mlir::OpAsmOpInterface::getAsmBlockArgumentNames(::mlir::Region& region, ::mlir::OpAsmSetValueNameFn setNameFn) {
      return getImpl()->getAsmBlockArgumentNames(getImpl(), getOperation(), region, setNameFn);
  }
StringRef mlir::OpAsmOpInterface::getDefaultDialect() {
      return getImpl()->getDefaultDialect();
  }
