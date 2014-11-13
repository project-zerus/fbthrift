/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/wangle/Future.h>
#include "Sasl_types.h"
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>



namespace apache { namespace thrift { namespace sasl {

class SaslAuthServiceSvAsyncIf {
 public:
  virtual ~SaslAuthServiceSvAsyncIf() {}
  virtual void async_tm_authFirstRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslStart> saslStart) = 0;
  virtual void async_authFirstRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslStart> saslStart) = delete;
  virtual void async_tm_authNextRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslRequest> saslRequest) = 0;
  virtual void async_authNextRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslRequest> saslRequest) = delete;
};

class SaslAuthServiceAsyncProcessor;

class SaslAuthServiceSvIf : public SaslAuthServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef SaslAuthServiceAsyncProcessor ProcessorType;

  virtual ~SaslAuthServiceSvIf() {}
  virtual std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor();
  apache::thrift::concurrency::PriorityThreadManager::PRIORITY getprio_authFirstRequest(apache::thrift::Cpp2RequestContext* reqCtx);
  virtual void authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, std::unique_ptr< ::apache::thrift::sasl::SaslStart> saslStart);
  virtual void async_tm_authFirstRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslStart> saslStart);
  apache::thrift::concurrency::PriorityThreadManager::PRIORITY getprio_authNextRequest(apache::thrift::Cpp2RequestContext* reqCtx);
  virtual void authNextRequest( ::apache::thrift::sasl::SaslReply& _return, std::unique_ptr< ::apache::thrift::sasl::SaslRequest> saslRequest);
  virtual void async_tm_authNextRequest(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>> callback, std::unique_ptr< ::apache::thrift::sasl::SaslRequest> saslRequest);
};

class SaslAuthServiceSvNull : public SaslAuthServiceSvIf {
 public:
  virtual ~SaslAuthServiceSvNull() {}
  virtual void authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, std::unique_ptr< ::apache::thrift::sasl::SaslStart> saslStart);
  virtual void authNextRequest( ::apache::thrift::sasl::SaslReply& _return, std::unique_ptr< ::apache::thrift::sasl::SaslRequest> saslRequest);
};

class SaslAuthServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  virtual std::string getServiceName();
 protected:
  SaslAuthServiceSvIf* iface_;
  virtual void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType,apache::thrift::Cpp2RequestContext* context,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  virtual bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header);
 private:
  static std::unordered_set<std::string> onewayMethods;
  typedef void (SaslAuthServiceAsyncProcessor::*binaryProcessFunction)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  typedef std::unordered_map<std::string, binaryProcessFunction> binaryProcessMap;
  static SaslAuthServiceAsyncProcessor::binaryProcessMap binaryProcessMap_;
  typedef void (SaslAuthServiceAsyncProcessor::*compactProcessFunction)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::CompactProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  typedef std::unordered_map<std::string, compactProcessFunction> compactProcessMap;
  static SaslAuthServiceAsyncProcessor::compactProcessMap compactProcessMap_;
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_authFirstRequest(int32_t protoSeqId, std::unique_ptr<apache::thrift::ContextStack> ctx,  ::apache::thrift::sasl::SaslReply const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,std::unique_ptr<apache::thrift::ContextStack> ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,std::unique_ptr<apache::thrift::ContextStack> ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_authNextRequest(int32_t protoSeqId, std::unique_ptr<apache::thrift::ContextStack> ctx,  ::apache::thrift::sasl::SaslReply const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,std::unique_ptr<apache::thrift::ContextStack> ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,std::unique_ptr<apache::thrift::ContextStack> ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  SaslAuthServiceAsyncProcessor(SaslAuthServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~SaslAuthServiceAsyncProcessor() {}
};

class SaslAuthServiceAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual std::string getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, apache::thrift::async::TDelayedDestruction::Destructor> channel_ptr;

  virtual ~SaslAuthServiceAsyncClient() {}

  SaslAuthServiceAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_ = std::unique_ptr<TClientBase::ConnContext>(new TClientBase::ConnContext(channel_->getHeader(),nullptr));
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }
  virtual void authFirstRequest(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void callback_authFirstRequest(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void authFirstRequest(const apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void sync_authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void sync_authFirstRequest(const apache::thrift::RpcOptions& rpcOptions,  ::apache::thrift::sasl::SaslReply& _return, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void authFirstRequest(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual void functor_authFirstRequest(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual folly::wangle::Future< ::apache::thrift::sasl::SaslReply> future_authFirstRequest(const  ::apache::thrift::sasl::SaslStart& saslStart);
  virtual folly::wangle::Future< ::apache::thrift::sasl::SaslReply> future_authFirstRequest(const apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::sasl::SaslStart& saslStart);
  static folly::exception_wrapper recv_wrapped_authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_authFirstRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void authFirstRequestT(Protocol_* prot, const apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslStart& saslStart);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_authFirstRequestT(Protocol_* prot,  ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_authFirstRequestT(Protocol_* prot,  ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void authNextRequest(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void callback_authNextRequest(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void authNextRequest(const apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void sync_authNextRequest( ::apache::thrift::sasl::SaslReply& _return, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void sync_authNextRequest(const apache::thrift::RpcOptions& rpcOptions,  ::apache::thrift::sasl::SaslReply& _return, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void authNextRequest(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual void functor_authNextRequest(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual folly::wangle::Future< ::apache::thrift::sasl::SaslReply> future_authNextRequest(const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  virtual folly::wangle::Future< ::apache::thrift::sasl::SaslReply> future_authNextRequest(const apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  static folly::exception_wrapper recv_wrapped_authNextRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_authNextRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_authNextRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_authNextRequest( ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void authNextRequestT(Protocol_* prot, const apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::sasl::SaslRequest& saslRequest);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_authNextRequestT(Protocol_* prot,  ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_authNextRequestT(Protocol_* prot,  ::apache::thrift::sasl::SaslReply& _return, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::server::TConnectionContext>connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

class SaslAuthService_authFirstRequest_args : private boost::totally_ordered<SaslAuthService_authFirstRequest_args> {
 public:

  SaslAuthService_authFirstRequest_args() {}
  // FragileConstructor for use in initialization lists only

  SaslAuthService_authFirstRequest_args(apache::thrift::FragileConstructor,  ::apache::thrift::sasl::SaslStart saslStart__arg) :
      saslStart(std::move(saslStart__arg)) {}

  SaslAuthService_authFirstRequest_args(SaslAuthService_authFirstRequest_args&&) = default;

  SaslAuthService_authFirstRequest_args(const SaslAuthService_authFirstRequest_args&) = default;

  SaslAuthService_authFirstRequest_args& operator=(SaslAuthService_authFirstRequest_args&&) = default;

  SaslAuthService_authFirstRequest_args& operator=(const SaslAuthService_authFirstRequest_args&) = default;
  void __clear();

  virtual ~SaslAuthService_authFirstRequest_args() throw() {}

   ::apache::thrift::sasl::SaslStart saslStart;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      saslStart = false;
    }

    bool saslStart;
  } __isset;
  bool operator==(const SaslAuthService_authFirstRequest_args& rhs) const;
  bool operator < (const SaslAuthService_authFirstRequest_args& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authFirstRequest_pargs : private boost::totally_ordered<SaslAuthService_authFirstRequest_pargs> {
 public:
  virtual ~SaslAuthService_authFirstRequest_pargs() throw() {}

   ::apache::thrift::sasl::SaslStart* saslStart;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      saslStart = false;
    }

    bool saslStart;
  } __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authFirstRequest_presult : private boost::totally_ordered<SaslAuthService_authFirstRequest_presult> {
 public:
  virtual ~SaslAuthService_authFirstRequest_presult() throw() {}

   ::apache::thrift::sasl::SaslReply* success;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      success = false;
    }

    bool success;
  } __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authFirstRequest_result : private boost::totally_ordered<SaslAuthService_authFirstRequest_result> {
 public:

  SaslAuthService_authFirstRequest_result() {}
  // FragileConstructor for use in initialization lists only

  SaslAuthService_authFirstRequest_result(apache::thrift::FragileConstructor,  ::apache::thrift::sasl::SaslReply success__arg) :
      success(std::move(success__arg)) {}

  SaslAuthService_authFirstRequest_result(SaslAuthService_authFirstRequest_result&&) = default;

  SaslAuthService_authFirstRequest_result(const SaslAuthService_authFirstRequest_result&) = default;

  SaslAuthService_authFirstRequest_result& operator=(SaslAuthService_authFirstRequest_result&&) = default;

  SaslAuthService_authFirstRequest_result& operator=(const SaslAuthService_authFirstRequest_result&) = default;
  void __clear();

  virtual ~SaslAuthService_authFirstRequest_result() throw() {}

   ::apache::thrift::sasl::SaslReply success;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      success = false;
    }

    bool success;
  } __isset;
  bool operator==(const SaslAuthService_authFirstRequest_result& rhs) const;
  bool operator < (const SaslAuthService_authFirstRequest_result& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authNextRequest_args : private boost::totally_ordered<SaslAuthService_authNextRequest_args> {
 public:

  SaslAuthService_authNextRequest_args() {}
  // FragileConstructor for use in initialization lists only

  SaslAuthService_authNextRequest_args(apache::thrift::FragileConstructor,  ::apache::thrift::sasl::SaslRequest saslRequest__arg) :
      saslRequest(std::move(saslRequest__arg)) {}

  SaslAuthService_authNextRequest_args(SaslAuthService_authNextRequest_args&&) = default;

  SaslAuthService_authNextRequest_args(const SaslAuthService_authNextRequest_args&) = default;

  SaslAuthService_authNextRequest_args& operator=(SaslAuthService_authNextRequest_args&&) = default;

  SaslAuthService_authNextRequest_args& operator=(const SaslAuthService_authNextRequest_args&) = default;
  void __clear();

  virtual ~SaslAuthService_authNextRequest_args() throw() {}

   ::apache::thrift::sasl::SaslRequest saslRequest;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      saslRequest = false;
    }

    bool saslRequest;
  } __isset;
  bool operator==(const SaslAuthService_authNextRequest_args& rhs) const;
  bool operator < (const SaslAuthService_authNextRequest_args& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authNextRequest_pargs : private boost::totally_ordered<SaslAuthService_authNextRequest_pargs> {
 public:
  virtual ~SaslAuthService_authNextRequest_pargs() throw() {}

   ::apache::thrift::sasl::SaslRequest* saslRequest;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      saslRequest = false;
    }

    bool saslRequest;
  } __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authNextRequest_presult : private boost::totally_ordered<SaslAuthService_authNextRequest_presult> {
 public:
  virtual ~SaslAuthService_authNextRequest_presult() throw() {}

   ::apache::thrift::sasl::SaslReply* success;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      success = false;
    }

    bool success;
  } __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

class SaslAuthService_authNextRequest_result : private boost::totally_ordered<SaslAuthService_authNextRequest_result> {
 public:

  SaslAuthService_authNextRequest_result() {}
  // FragileConstructor for use in initialization lists only

  SaslAuthService_authNextRequest_result(apache::thrift::FragileConstructor,  ::apache::thrift::sasl::SaslReply success__arg) :
      success(std::move(success__arg)) {}

  SaslAuthService_authNextRequest_result(SaslAuthService_authNextRequest_result&&) = default;

  SaslAuthService_authNextRequest_result(const SaslAuthService_authNextRequest_result&) = default;

  SaslAuthService_authNextRequest_result& operator=(SaslAuthService_authNextRequest_result&&) = default;

  SaslAuthService_authNextRequest_result& operator=(const SaslAuthService_authNextRequest_result&) = default;
  void __clear();

  virtual ~SaslAuthService_authNextRequest_result() throw() {}

   ::apache::thrift::sasl::SaslReply success;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      success = false;
    }

    bool success;
  } __isset;
  bool operator==(const SaslAuthService_authNextRequest_result& rhs) const;
  bool operator < (const SaslAuthService_authNextRequest_result& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_args* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_pargs* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_presult* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authFirstRequest_result* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_args>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_args* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_args>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authNextRequest_args* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_args>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_args* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_args>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_args* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_pargs* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_presult* obj) {
  return obj->serializedSizeZC(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_result>::write(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_result* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_result>::read(Protocol* proto,   ::apache::thrift::sasl::SaslAuthService_authNextRequest_result* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_result>::serializedSize(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_result* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::apache::thrift::sasl::SaslAuthService_authNextRequest_result>::serializedSizeZC(Protocol* proto, const  ::apache::thrift::sasl::SaslAuthService_authNextRequest_result* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift