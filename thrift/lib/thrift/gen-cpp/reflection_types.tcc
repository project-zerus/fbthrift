/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _apache_thrift_reflection_reflection_TYPES_TCC
#define  _apache_thrift_reflection_reflection_TYPES_TCC

#include "reflection_types.h"

#include "reflection_reflection.h"

namespace apache { namespace thrift { namespace reflection {

template <class Protocol_>
uint32_t StructField::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::reflection::reflection_reflection_::reflectionInitializer_214309804125196972(*schema);
    iprot->setNextStructType(StructField::_reflection_id);
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
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isRequired);
          this->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->annotations.clear();
            uint32_t _size1;
            bool _sizeUnknown2;
            apache::thrift::protocol::TType _ktype3;
            apache::thrift::protocol::TType _vtype4;
            xfer += iprot->readMapBegin(_ktype3, _vtype4, _size1, _sizeUnknown2);
            if (!_sizeUnknown2) {
              uint32_t _i6;
              for (_i6 = 0; _i6 < _size1; ++_i6)
              {
                std::string _key7;
                xfer += iprot->readString(_key7);
                std::string& _val8 = this->annotations[_key7];
                xfer += iprot->readString(_val8);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key9;
                xfer += iprot->readString(_key9);
                std::string& _val10 = this->annotations[_key9];
                xfer += iprot->readString(_val10);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.annotations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->order);
          this->__isset.order = true;
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
uint32_t StructField::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StructField");
  xfer += oprot->writeFieldBegin("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isRequired);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type", apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->type);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.annotations) {
    xfer += oprot->writeFieldBegin("annotations", apache::thrift::protocol::T_MAP, 4);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_STRING, this->annotations.size());
      boost::container::flat_map<std::string, std::string> ::const_iterator _iter11;
      for (_iter11 = this->annotations.begin(); _iter11 != this->annotations.end(); ++_iter11)
      {
        xfer += oprot->writeString(_iter11->first);
        xfer += oprot->writeString(_iter11->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("order", apache::thrift::protocol::T_I16, 5);
  xfer += oprot->writeI16(this->order);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

template <class Protocol_>
uint32_t DataType::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::reflection::reflection_reflection_::reflectionInitializer_4733295045172396908(*schema);
    iprot->setNextStructType(DataType::_reflection_id);
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
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fields.clear();
            uint32_t _size13;
            bool _sizeUnknown14;
            apache::thrift::protocol::TType _ktype15;
            apache::thrift::protocol::TType _vtype16;
            xfer += iprot->readMapBegin(_ktype15, _vtype16, _size13, _sizeUnknown14);
            if (!_sizeUnknown14) {
              uint32_t _i18;
              for (_i18 = 0; _i18 < _size13; ++_i18)
              {
                int16_t _key19;
                xfer += iprot->readI16(_key19);
                StructField& _val20 = this->fields[_key19];
                xfer += _val20.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key21;
                xfer += iprot->readI16(_key21);
                StructField& _val22 = this->fields[_key21];
                xfer += _val22.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fields = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->mapKeyType);
          this->__isset.mapKeyType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->valueType);
          this->__isset.valueType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->enumValues.clear();
            uint32_t _size23;
            bool _sizeUnknown24;
            apache::thrift::protocol::TType _ktype25;
            apache::thrift::protocol::TType _vtype26;
            xfer += iprot->readMapBegin(_ktype25, _vtype26, _size23, _sizeUnknown24);
            if (!_sizeUnknown24) {
              uint32_t _i28;
              for (_i28 = 0; _i28 < _size23; ++_i28)
              {
                std::string _key29;
                xfer += iprot->readString(_key29);
                int32_t& _val30 = this->enumValues[_key29];
                xfer += iprot->readI32(_val30);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key31;
                xfer += iprot->readString(_key31);
                int32_t& _val32 = this->enumValues[_key31];
                xfer += iprot->readI32(_val32);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.enumValues = true;
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
uint32_t DataType::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("DataType");
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.fields) {
    xfer += oprot->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->fields.size());
      boost::container::flat_map<int16_t, StructField> ::const_iterator _iter33;
      for (_iter33 = this->fields.begin(); _iter33 != this->fields.end(); ++_iter33)
      {
        xfer += oprot->writeI16(_iter33->first);
        xfer += _iter33->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.mapKeyType) {
    xfer += oprot->writeFieldBegin("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->mapKeyType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.valueType) {
    xfer += oprot->writeFieldBegin("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->valueType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.enumValues) {
    xfer += oprot->writeFieldBegin("enumValues", apache::thrift::protocol::T_MAP, 5);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I32, this->enumValues.size());
      boost::container::flat_map<std::string, int32_t> ::const_iterator _iter34;
      for (_iter34 = this->enumValues.begin(); _iter34 != this->enumValues.end(); ++_iter34)
      {
        xfer += oprot->writeString(_iter34->first);
        xfer += oprot->writeI32(_iter34->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
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
     ::apache::thrift::reflection::reflection_reflection_::reflectionInitializer_6902704939566307148(*schema);
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
      case 1:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->dataTypes.clear();
            uint32_t _size36;
            bool _sizeUnknown37;
            apache::thrift::protocol::TType _ktype38;
            apache::thrift::protocol::TType _vtype39;
            xfer += iprot->readMapBegin(_ktype38, _vtype39, _size36, _sizeUnknown37);
            if (!_sizeUnknown37) {
              uint32_t _i41;
              for (_i41 = 0; _i41 < _size36; ++_i41)
              {
                int64_t _key42;
                xfer += iprot->readI64(_key42);
                DataType& _val43 = this->dataTypes[_key42];
                xfer += _val43.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int64_t _key44;
                xfer += iprot->readI64(_key44);
                DataType& _val45 = this->dataTypes[_key44];
                xfer += _val45.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.dataTypes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->names.clear();
            uint32_t _size46;
            bool _sizeUnknown47;
            apache::thrift::protocol::TType _ktype48;
            apache::thrift::protocol::TType _vtype49;
            xfer += iprot->readMapBegin(_ktype48, _vtype49, _size46, _sizeUnknown47);
            if (!_sizeUnknown47) {
              uint32_t _i51;
              for (_i51 = 0; _i51 < _size46; ++_i51)
              {
                std::string _key52;
                xfer += iprot->readString(_key52);
                int64_t& _val53 = this->names[_key52];
                xfer += iprot->readI64(_val53);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key54;
                xfer += iprot->readString(_key54);
                int64_t& _val55 = this->names[_key54];
                xfer += iprot->readI64(_val55);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.names = true;
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
  xfer += oprot->writeFieldBegin("dataTypes", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I64, apache::thrift::protocol::T_STRUCT, this->dataTypes.size());
    std::unordered_map<int64_t, DataType> ::const_iterator _iter56;
    for (_iter56 = this->dataTypes.begin(); _iter56 != this->dataTypes.end(); ++_iter56)
    {
      xfer += oprot->writeI64(_iter56->first);
      xfer += _iter56->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("names", apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I64, this->names.size());
    std::unordered_map<std::string, int64_t> ::const_iterator _iter57;
    for (_iter57 = this->names.begin(); _iter57 != this->names.end(); ++_iter57)
    {
      xfer += oprot->writeString(_iter57->first);
      xfer += oprot->writeI64(_iter57->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

}}} // namespace

#endif
