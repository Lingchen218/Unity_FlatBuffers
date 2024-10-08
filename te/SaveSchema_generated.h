// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SAVESCHEMA_ZOO_H_
#define FLATBUFFERS_GENERATED_SAVESCHEMA_ZOO_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

namespace Zoo {

struct Animal_Fb;
struct Animal_FbBuilder;

struct Director_Fb;
struct Director_FbBuilder;

struct Zoo_Fb;
struct Zoo_FbBuilder;

enum Animal_Type : int8_t {
  Animal_Type_tiger = 0,
  Animal_Type_lion = 1,
  Animal_Type_giraffe = 2,
  Animal_Type_kangaroo = 3,
  Animal_Type_monkey = 4,
  Animal_Type_MIN = Animal_Type_tiger,
  Animal_Type_MAX = Animal_Type_monkey
};

inline const Animal_Type (&EnumValuesAnimal_Type())[5] {
  static const Animal_Type values[] = {
    Animal_Type_tiger,
    Animal_Type_lion,
    Animal_Type_giraffe,
    Animal_Type_kangaroo,
    Animal_Type_monkey
  };
  return values;
}

inline const char * const *EnumNamesAnimal_Type() {
  static const char * const names[6] = {
    "tiger",
    "lion",
    "giraffe",
    "kangaroo",
    "monkey",
    nullptr
  };
  return names;
}

inline const char *EnumNameAnimal_Type(Animal_Type e) {
  if (::flatbuffers::IsOutRange(e, Animal_Type_tiger, Animal_Type_monkey)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesAnimal_Type()[index];
}

struct Animal_Fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Animal_FbBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_NOTE = 6,
    VT_NUM = 8
  };
  Zoo::Animal_Type type() const {
    return static_cast<Zoo::Animal_Type>(GetField<int8_t>(VT_TYPE, 0));
  }
  const ::flatbuffers::String *note() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NOTE);
  }
  int64_t num() const {
    return GetField<int64_t>(VT_NUM, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_TYPE, 1) &&
           VerifyOffset(verifier, VT_NOTE) &&
           verifier.VerifyString(note()) &&
           VerifyField<int64_t>(verifier, VT_NUM, 8) &&
           verifier.EndTable();
  }
};

struct Animal_FbBuilder {
  typedef Animal_Fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_type(Zoo::Animal_Type type) {
    fbb_.AddElement<int8_t>(Animal_Fb::VT_TYPE, static_cast<int8_t>(type), 0);
  }
  void add_note(::flatbuffers::Offset<::flatbuffers::String> note) {
    fbb_.AddOffset(Animal_Fb::VT_NOTE, note);
  }
  void add_num(int64_t num) {
    fbb_.AddElement<int64_t>(Animal_Fb::VT_NUM, num, 0);
  }
  explicit Animal_FbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Animal_Fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Animal_Fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Animal_Fb> CreateAnimal_Fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Zoo::Animal_Type type = Zoo::Animal_Type_tiger,
    ::flatbuffers::Offset<::flatbuffers::String> note = 0,
    int64_t num = 0) {
  Animal_FbBuilder builder_(_fbb);
  builder_.add_num(num);
  builder_.add_note(note);
  builder_.add_type(type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Animal_Fb> CreateAnimal_FbDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    Zoo::Animal_Type type = Zoo::Animal_Type_tiger,
    const char *note = nullptr,
    int64_t num = 0) {
  auto note__ = note ? _fbb.CreateString(note) : 0;
  return Zoo::CreateAnimal_Fb(
      _fbb,
      type,
      note__,
      num);
}

struct Director_Fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Director_FbBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_AGE = 6
  };
  const ::flatbuffers::String *name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NAME);
  }
  int64_t age() const {
    return GetField<int64_t>(VT_AGE, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int64_t>(verifier, VT_AGE, 8) &&
           verifier.EndTable();
  }
};

struct Director_FbBuilder {
  typedef Director_Fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_name(::flatbuffers::Offset<::flatbuffers::String> name) {
    fbb_.AddOffset(Director_Fb::VT_NAME, name);
  }
  void add_age(int64_t age) {
    fbb_.AddElement<int64_t>(Director_Fb::VT_AGE, age, 0);
  }
  explicit Director_FbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Director_Fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Director_Fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Director_Fb> CreateDirector_Fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> name = 0,
    int64_t age = 0) {
  Director_FbBuilder builder_(_fbb);
  builder_.add_age(age);
  builder_.add_name(name);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Director_Fb> CreateDirector_FbDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int64_t age = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return Zoo::CreateDirector_Fb(
      _fbb,
      name__,
      age);
}

struct Zoo_Fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Zoo_FbBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_DIRECTOR = 6,
    VT_ANIMALS = 8
  };
  const ::flatbuffers::String *name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NAME);
  }
  const Zoo::Director_Fb *director() const {
    return GetPointer<const Zoo::Director_Fb *>(VT_DIRECTOR);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<Zoo::Animal_Fb>> *animals() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Zoo::Animal_Fb>> *>(VT_ANIMALS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_DIRECTOR) &&
           verifier.VerifyTable(director()) &&
           VerifyOffset(verifier, VT_ANIMALS) &&
           verifier.VerifyVector(animals()) &&
           verifier.VerifyVectorOfTables(animals()) &&
           verifier.EndTable();
  }
};

struct Zoo_FbBuilder {
  typedef Zoo_Fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_name(::flatbuffers::Offset<::flatbuffers::String> name) {
    fbb_.AddOffset(Zoo_Fb::VT_NAME, name);
  }
  void add_director(::flatbuffers::Offset<Zoo::Director_Fb> director) {
    fbb_.AddOffset(Zoo_Fb::VT_DIRECTOR, director);
  }
  void add_animals(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Zoo::Animal_Fb>>> animals) {
    fbb_.AddOffset(Zoo_Fb::VT_ANIMALS, animals);
  }
  explicit Zoo_FbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Zoo_Fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Zoo_Fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Zoo_Fb> CreateZoo_Fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> name = 0,
    ::flatbuffers::Offset<Zoo::Director_Fb> director = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Zoo::Animal_Fb>>> animals = 0) {
  Zoo_FbBuilder builder_(_fbb);
  builder_.add_animals(animals);
  builder_.add_director(director);
  builder_.add_name(name);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Zoo_Fb> CreateZoo_FbDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    ::flatbuffers::Offset<Zoo::Director_Fb> director = 0,
    const std::vector<::flatbuffers::Offset<Zoo::Animal_Fb>> *animals = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto animals__ = animals ? _fbb.CreateVector<::flatbuffers::Offset<Zoo::Animal_Fb>>(*animals) : 0;
  return Zoo::CreateZoo_Fb(
      _fbb,
      name__,
      director,
      animals__);
}

inline const Zoo::Zoo_Fb *GetZoo_Fb(const void *buf) {
  return ::flatbuffers::GetRoot<Zoo::Zoo_Fb>(buf);
}

inline const Zoo::Zoo_Fb *GetSizePrefixedZoo_Fb(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<Zoo::Zoo_Fb>(buf);
}

inline bool VerifyZoo_FbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Zoo::Zoo_Fb>(nullptr);
}

inline bool VerifySizePrefixedZoo_FbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Zoo::Zoo_Fb>(nullptr);
}

inline void FinishZoo_FbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Zoo::Zoo_Fb> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedZoo_FbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Zoo::Zoo_Fb> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Zoo

#endif  // FLATBUFFERS_GENERATED_SAVESCHEMA_ZOO_H_
