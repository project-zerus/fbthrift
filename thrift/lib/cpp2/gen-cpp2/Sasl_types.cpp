/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Sasl_types.h"

#include "Sasl_types.tcc"

#include <algorithm>

namespace apache { namespace thrift { namespace sasl {

template uint32_t SaslOutcome::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t SaslOutcome::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslOutcome::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslOutcome::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslOutcome::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t SaslOutcome::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslOutcome::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslOutcome::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslOutcome::write<apache::thrift::DebugProtocolWriter>(apache::thrift::DebugProtocolWriter*) const;
template uint32_t SaslOutcome::read<apache::thrift::VirtualReaderBase>(apache::thrift::VirtualReaderBase*);

void SaslOutcome::__clear() {
  success = 0;
  additional_data = std::string();
  __isset.__clear();
}

bool SaslOutcome::operator==(const SaslOutcome& rhs) const {
  if (!((success == rhs.success))) {
    return false;
  }
  if (__isset.additional_data != rhs.__isset.additional_data) {
    return false;
  }
  else if (__isset.additional_data && !((additional_data == rhs.additional_data))) {
    return false;
  }
  return true;
}

void swap(SaslOutcome& a, SaslOutcome& b) {
  using ::std::swap;
  swap(a.success, b.success);
  swap(a.additional_data, b.additional_data);
  swap(a.__isset, b.__isset);
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template uint32_t SaslRequest::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t SaslRequest::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslRequest::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslRequest::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslRequest::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t SaslRequest::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslRequest::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslRequest::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslRequest::write<apache::thrift::DebugProtocolWriter>(apache::thrift::DebugProtocolWriter*) const;
template uint32_t SaslRequest::read<apache::thrift::VirtualReaderBase>(apache::thrift::VirtualReaderBase*);

void SaslRequest::__clear() {
  response = std::string();
  abort = 0;
  __isset.__clear();
}

bool SaslRequest::operator==(const SaslRequest& rhs) const {
  if (__isset.response != rhs.__isset.response) {
    return false;
  }
  else if (__isset.response && !((response == rhs.response))) {
    return false;
  }
  if (__isset.abort != rhs.__isset.abort) {
    return false;
  }
  else if (__isset.abort && !((abort == rhs.abort))) {
    return false;
  }
  return true;
}

void swap(SaslRequest& a, SaslRequest& b) {
  using ::std::swap;
  swap(a.response, b.response);
  swap(a.abort, b.abort);
  swap(a.__isset, b.__isset);
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template uint32_t SaslReply::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t SaslReply::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslReply::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslReply::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslReply::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t SaslReply::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslReply::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslReply::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslReply::write<apache::thrift::DebugProtocolWriter>(apache::thrift::DebugProtocolWriter*) const;
template uint32_t SaslReply::read<apache::thrift::VirtualReaderBase>(apache::thrift::VirtualReaderBase*);

void SaslReply::__clear() {
  challenge = std::string();
  ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslOutcome>::clear(&outcome);
  __isset.__clear();
}

bool SaslReply::operator==(const SaslReply& rhs) const {
  if (__isset.challenge != rhs.__isset.challenge) {
    return false;
  }
  else if (__isset.challenge && !((challenge == rhs.challenge))) {
    return false;
  }
  if (__isset.outcome != rhs.__isset.outcome) {
    return false;
  }
  else if (__isset.outcome && !((outcome == rhs.outcome))) {
    return false;
  }
  return true;
}

void swap(SaslReply& a, SaslReply& b) {
  using ::std::swap;
  swap(a.challenge, b.challenge);
  swap(a.outcome, b.outcome);
  swap(a.__isset, b.__isset);
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template uint32_t SaslStart::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t SaslStart::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslStart::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslStart::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SaslStart::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t SaslStart::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslStart::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslStart::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SaslStart::write<apache::thrift::DebugProtocolWriter>(apache::thrift::DebugProtocolWriter*) const;
template uint32_t SaslStart::read<apache::thrift::VirtualReaderBase>(apache::thrift::VirtualReaderBase*);

void SaslStart::__clear() {
  mechanism = std::string();
  ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslRequest>::clear(&request);
  __isset.__clear();
}

bool SaslStart::operator==(const SaslStart& rhs) const {
  if (!((mechanism == rhs.mechanism))) {
    return false;
  }
  if (__isset.request != rhs.__isset.request) {
    return false;
  }
  else if (__isset.request && !((request == rhs.request))) {
    return false;
  }
  return true;
}

void swap(SaslStart& a, SaslStart& b) {
  using ::std::swap;
  swap(a.mechanism, b.mechanism);
  swap(a.request, b.request);
  swap(a.__isset, b.__isset);
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

}}} // apache::thrift::sasl