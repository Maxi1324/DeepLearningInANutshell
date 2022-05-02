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
class BFloat16Type;
class ComplexType;
class Float128Type;
class Float16Type;
class Float32Type;
class Float64Type;
class Float80Type;
class FunctionType;
class IndexType;
class IntegerType;
class MemRefType;
class NoneType;
class OpaqueType;
class RankedTensorType;
class TupleType;
class UnrankedMemRefType;
class UnrankedTensorType;
class VectorType;
class BFloat16Type : public ::mlir::Type::TypeBase<BFloat16Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static BFloat16Type get(MLIRContext *context);
};
namespace detail {
struct ComplexTypeStorage;
} // namespace detail
class ComplexType : public ::mlir::Type::TypeBase<ComplexType, ::mlir::Type, detail::ComplexTypeStorage> {
public:
  using Base::Base;
  using Base::getChecked;
public:
  static ComplexType get(Type elementType);
  static ComplexType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType);
  Type getElementType() const;
};
class Float128Type : public ::mlir::Type::TypeBase<Float128Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static Float128Type get(MLIRContext *context);
};
class Float16Type : public ::mlir::Type::TypeBase<Float16Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static Float16Type get(MLIRContext *context);
};
class Float32Type : public ::mlir::Type::TypeBase<Float32Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static Float32Type get(MLIRContext *context);
};
class Float64Type : public ::mlir::Type::TypeBase<Float64Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static Float64Type get(MLIRContext *context);
};
class Float80Type : public ::mlir::Type::TypeBase<Float80Type, ::mlir::FloatType, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static Float80Type get(MLIRContext *context);
};
namespace detail {
struct FunctionTypeStorage;
} // namespace detail
class FunctionType : public ::mlir::Type::TypeBase<FunctionType, ::mlir::Type, detail::FunctionTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  /// Input types.
  unsigned getNumInputs() const;
  Type getInput(unsigned i) const { return getInputs()[i]; }

  /// Result types.
  unsigned getNumResults() const;
  Type getResult(unsigned i) const { return getResults()[i]; }

  /// Returns a new function type with the specified arguments and results
  /// inserted.
  FunctionType getWithArgsAndResults(ArrayRef<unsigned> argIndices,
                                     TypeRange argTypes,
                                     ArrayRef<unsigned> resultIndices,
                                     TypeRange resultTypes);

  /// Returns a new function type without the specified arguments and results.
  FunctionType getWithoutArgsAndResults(ArrayRef<unsigned> argIndices,
                                        ArrayRef<unsigned> resultIndices);
public:
  static FunctionType get(::mlir::MLIRContext *context, TypeRange inputs, TypeRange results);
  ArrayRef<Type> getInputs() const;
  ArrayRef<Type> getResults() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
class IndexType : public ::mlir::Type::TypeBase<IndexType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static IndexType get(MLIRContext *context);

  /// Storage bit width used for IndexType by internal compiler data
  /// structures.
  static constexpr unsigned kInternalStorageBitWidth = 64;
};
namespace detail {
struct IntegerTypeStorage;
} // namespace detail
class IntegerType : public ::mlir::Type::TypeBase<IntegerType, ::mlir::Type, detail::IntegerTypeStorage> {
public:
  using Base::Base;
  /// Signedness semantics.
  enum SignednessSemantics : uint32_t {
    Signless, /// No signedness semantics
    Signed,   /// Signed integer
    Unsigned, /// Unsigned integer
  };

  /// Return true if this is a signless integer type.
  bool isSignless() const { return getSignedness() == Signless; }
  /// Return true if this is a signed integer type.
  bool isSigned() const { return getSignedness() == Signed; }
  /// Return true if this is an unsigned integer type.
  bool isUnsigned() const { return getSignedness() == Unsigned; }

  /// Get or create a new IntegerType with the same signedness as `this` and a
  /// bitwidth scaled by `scale`.
  /// Return null if the scaled element type cannot be represented.
  IntegerType scaleElementBitwidth(unsigned scale);

  /// Integer representation maximal bitwidth.
  /// Note: This is aligned with the maximum width of llvm::IntegerType.
  static constexpr unsigned kMaxWidth = (1 << 24) - 1;
  using Base::getChecked;
public:
  static IntegerType get(::mlir::MLIRContext *context, unsigned width, SignednessSemantics signedness = Signless);
  static IntegerType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, unsigned width, SignednessSemantics signedness = Signless);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, unsigned width, SignednessSemantics signedness);
  unsigned getWidth() const;
  SignednessSemantics getSignedness() const;
};
namespace detail {
struct MemRefTypeStorage;
} // namespace detail
class MemRefType : public ::mlir::Type::TypeBase<MemRefType, BaseMemRefType, detail::MemRefTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  /// This is a builder type that keeps local references to arguments.
  /// Arguments that are passed into the builder must outlive the builder.
  class Builder;

  /// [deprecated] Returns the memory space in old raw integer representation.
  /// New `Attribute getMemorySpace()` method should be used instead.
  unsigned getMemorySpaceAsInt() const;

  // TODO: merge these two special values in a single one used everywhere.
  // Unfortunately, uses of `-1` have crept deep into the codebase now and are
  // hard to track.
  static int64_t getDynamicStrideOrOffset() {
    return ShapedType::kDynamicStrideOrOffset;
  }
  using Base::getChecked;
public:
  static MemRefType get(ArrayRef<int64_t> shape, Type elementType, MemRefLayoutAttrInterface layout = {}, Attribute memorySpace = {});
  static MemRefType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType, MemRefLayoutAttrInterface layout = {}, Attribute memorySpace = {});
  static MemRefType get(ArrayRef<int64_t> shape, Type elementType, AffineMap map, Attribute memorySpace = {});
  static MemRefType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType, AffineMap map, Attribute memorySpace = {});
  static MemRefType get(ArrayRef<int64_t> shape, Type elementType, AffineMap map, unsigned memorySpaceInd);
  static MemRefType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType, AffineMap map, unsigned memorySpaceInd);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<int64_t> shape, Type elementType, MemRefLayoutAttrInterface layout, Attribute memorySpace);
  ::llvm::ArrayRef<int64_t> getShape() const;
  Type getElementType() const;
  MemRefLayoutAttrInterface getLayout() const;
  Attribute getMemorySpace() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
class NoneType : public ::mlir::Type::TypeBase<NoneType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static NoneType get(MLIRContext *context);
};
namespace detail {
struct OpaqueTypeStorage;
} // namespace detail
class OpaqueType : public ::mlir::Type::TypeBase<OpaqueType, ::mlir::Type, detail::OpaqueTypeStorage> {
public:
  using Base::Base;
  using Base::getChecked;
public:
  static OpaqueType get(StringAttr dialectNamespace, StringRef typeData = {});
  static OpaqueType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, StringAttr dialectNamespace, StringRef typeData = {});
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, StringAttr dialectNamespace, ::llvm::StringRef typeData);
  StringAttr getDialectNamespace() const;
  ::llvm::StringRef getTypeData() const;
};
namespace detail {
struct RankedTensorTypeStorage;
} // namespace detail
class RankedTensorType : public ::mlir::Type::TypeBase<RankedTensorType, TensorType, detail::RankedTensorTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  /// This is a builder type that keeps local references to arguments.
  /// Arguments that are passed into the builder must outlive the builder.
  class Builder;
  using Base::getChecked;
public:
  static RankedTensorType get(ArrayRef<int64_t> shape, Type elementType, Attribute encoding = {});
  static RankedTensorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType, Attribute encoding = {});
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<int64_t> shape, Type elementType, Attribute encoding);
  ::llvm::ArrayRef<int64_t> getShape() const;
  Type getElementType() const;
  Attribute getEncoding() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
namespace detail {
struct TupleTypeStorage;
} // namespace detail
class TupleType : public ::mlir::Type::TypeBase<TupleType, ::mlir::Type, detail::TupleTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  /// Accumulate the types contained in this tuple and tuples nested within
  /// it. Note that this only flattens nested tuples, not any other container
  /// type, e.g. a tuple<i32, tensor<i32>, tuple<f32, tuple<i64>>> is
  /// flattened to (i32, tensor<i32>, f32, i64)
  void getFlattenedTypes(SmallVectorImpl<Type> &types);

  /// Return the number of held types.
  size_t size() const;

  /// Iterate over the held elements.
  using iterator = ArrayRef<Type>::iterator;
  iterator begin() const { return getTypes().begin(); }
  iterator end() const { return getTypes().end(); }

  /// Return the element type at index 'index'.
  Type getType(size_t index) const {
    assert(index < size() && "invalid index for tuple type");
    return getTypes()[index];
  }
public:
  static TupleType get(::mlir::MLIRContext *context, TypeRange elementTypes);
  static TupleType get(::mlir::MLIRContext *context);
  ArrayRef<Type> getTypes() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
namespace detail {
struct UnrankedMemRefTypeStorage;
} // namespace detail
class UnrankedMemRefType : public ::mlir::Type::TypeBase<UnrankedMemRefType, BaseMemRefType, detail::UnrankedMemRefTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  ArrayRef<int64_t> getShape() const { return llvm::None; }

  /// [deprecated] Returns the memory space in old raw integer representation.
  /// New `Attribute getMemorySpace()` method should be used instead.
  unsigned getMemorySpaceAsInt() const;
  using Base::getChecked;
public:
  static UnrankedMemRefType get(Type elementType, Attribute memorySpace);
  static UnrankedMemRefType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, Attribute memorySpace);
  static UnrankedMemRefType get(Type elementType, unsigned memorySpace);
  static UnrankedMemRefType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned memorySpace);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, Attribute memorySpace);
  Type getElementType() const;
  Attribute getMemorySpace() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
namespace detail {
struct UnrankedTensorTypeStorage;
} // namespace detail
class UnrankedTensorType : public ::mlir::Type::TypeBase<UnrankedTensorType, TensorType, detail::UnrankedTensorTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  ArrayRef<int64_t> getShape() const { return llvm::None; }
  using Base::getChecked;
public:
  static UnrankedTensorType get(Type elementType);
  static UnrankedTensorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType);
  Type getElementType() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
namespace detail {
struct VectorTypeStorage;
} // namespace detail
class VectorType : public ::mlir::Type::TypeBase<VectorType, ShapedType, detail::VectorTypeStorage, ::mlir::SubElementTypeInterface::Trait> {
public:
  using Base::Base;
  /// This is a builder type that keeps local references to arguments.
  /// Arguments that are passed into the builder must outlive the builder.
  class Builder;

  /// Returns true if the given type can be used as an element of a vector
  /// type. In particular, vectors can consist of integer, index, or float
  /// primitives.
  static bool isValidElementType(Type t) {
    return t.isa<IntegerType, IndexType, FloatType>();
  }

  /// Returns true if the vector contains scalable dimensions.
  bool isScalable() const {
    return getNumScalableDims() > 0;
  }

  /// Get or create a new VectorType with the same shape as `this` and an
  /// element type of bitwidth scaled by `scale`.
  /// Return null if the scaled element type cannot be represented.
  VectorType scaleElementBitwidth(unsigned scale);
  using Base::getChecked;
public:
  static VectorType get(ArrayRef<int64_t> shape, Type elementType, unsigned numScalableDims = 0);
  static VectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType, unsigned numScalableDims = 0);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<int64_t> shape, Type elementType, unsigned numScalableDims);
  ::llvm::ArrayRef<int64_t> getShape() const;
  Type getElementType() const;
  unsigned getNumScalableDims() const;
  void walkImmediateSubElements(llvm::function_ref<void(mlir::Attribute)> walkAttrsFn, llvm::function_ref<void(mlir::Type)> walkTypesFn) const;
};
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::BFloat16Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::ComplexType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::Float128Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::Float16Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::Float32Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::Float64Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::Float80Type)
DECLARE_EXPLICIT_TYPE_ID(::mlir::FunctionType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::IndexType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::IntegerType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::MemRefType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::NoneType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::OpaqueType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::RankedTensorType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::TupleType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::UnrankedMemRefType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::UnrankedTensorType)
DECLARE_EXPLICIT_TYPE_ID(::mlir::VectorType)

#endif  // GET_TYPEDEF_CLASSES

