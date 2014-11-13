/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _apache_thrift_frozen_schema_frozen_TYPES_TCC
#define  _apache_thrift_frozen_schema_frozen_TYPES_TCC

#include "frozen_types.h"

#include "frozen_reflection.h"

namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
uint32_t Field::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::frozen::schema::frozen_reflection_::reflectionInitializer_2361056240366028172(*schema);
    iprot->setNextStructType(Field::_reflection_id);
  }
  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->layoutId);
          this->__isset.layoutId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->offset);
          this->__isset.offset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Field::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Field");
  xfer += oprot->writeFieldBegin("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->layoutId);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("offset", apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->offset);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

template <class Protocol_>
uint32_t Layout::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::frozen::schema::frozen_reflection_::reflectionInitializer_3221448234020655692(*schema);
    iprot->setNextStructType(Layout::_reflection_id);
  }
  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->size);
          this->__isset.size = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->bits);
          this->__isset.bits = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fields.clear();
            uint32_t _size2;
            bool _sizeUnknown3;
            apache::thrift::protocol::TType _ktype4;
            apache::thrift::protocol::TType _vtype5;
            xfer += iprot->readMapBegin(_ktype4, _vtype5, _size2, _sizeUnknown3);
            if (!_sizeUnknown3) {
              uint32_t _i7;
              for (_i7 = 0; _i7 < _size2; ++_i7)
              {
                int16_t _key8;
                xfer += iprot->readI16(_key8);
                Field& _val9 = this->fields[_key8];
                xfer += _val9.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key10;
                xfer += iprot->readI16(_key10);
                Field& _val11 = this->fields[_key10];
                xfer += _val11.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fields = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->typeName);
          this->__isset.typeName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Layout::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Layout");
  xfer += oprot->writeFieldBegin("size", apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->size);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("bits", apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->bits);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 3);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->fields.size());
    std::map<int16_t, Field> ::const_iterator _iter12;
    for (_iter12 = this->fields.begin(); _iter12 != this->fields.end(); ++_iter12)
    {
      xfer += oprot->writeI16(_iter12->first);
      xfer += _iter12->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->typeName);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::frozen::schema::frozen_reflection_::reflectionInitializer_6060681111115730220(*schema);
    iprot->setNextStructType(Schema::_reflection_id);
  }
  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 4:
        if (ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fileVersion);
          this->__isset.fileVersion = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->relaxTypeChecks);
          this->__isset.relaxTypeChecks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->layouts.clear();
            uint32_t _size14;
            bool _sizeUnknown15;
            apache::thrift::protocol::TType _ktype16;
            apache::thrift::protocol::TType _vtype17;
            xfer += iprot->readMapBegin(_ktype16, _vtype17, _size14, _sizeUnknown15);
            if (!_sizeUnknown15) {
              uint32_t _i19;
              for (_i19 = 0; _i19 < _size14; ++_i19)
              {
                int16_t _key20;
                xfer += iprot->readI16(_key20);
                Layout& _val21 = this->layouts[_key20];
                xfer += _val21.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key22;
                xfer += iprot->readI16(_key22);
                Layout& _val23 = this->layouts[_key22];
                xfer += _val23.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.layouts = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->rootLayout);
          this->__isset.rootLayout = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Schema::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Schema");
  xfer += oprot->writeFieldBegin("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->relaxTypeChecks);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("layouts", apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->layouts.size());
    std::map<int16_t, Layout> ::const_iterator _iter24;
    for (_iter24 = this->layouts.begin(); _iter24 != this->layouts.end(); ++_iter24)
    {
      xfer += oprot->writeI16(_iter24->first);
      xfer += _iter24->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += oprot->writeI16(this->rootLayout);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->fileVersion);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

}}}} // namespace

#endif
