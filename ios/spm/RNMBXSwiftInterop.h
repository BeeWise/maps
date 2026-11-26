// Generated Objective-C interface for RNMBXSwift. See SPM.md for regeneration.
#ifndef RNMBXSWIFT_SWIFT_H
#define RNMBXSWIFT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif // defined(__OBJC__)
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef unsigned char char8_t;
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X)
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X)
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X)
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# if (defined(__cplusplus) && __cplusplus >= 201103L) ||      (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L) ||      __has_feature(objc_fixed_enum)
#  define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
#  if __has_feature(generalized_swift_name)
#   define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
#  else
#   define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
#  endif
# else
#  define SWIFT_ENUM(_type, _name, _extensibility) _type _name; enum
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM_TAG)
# if (defined(__cplusplus) && __cplusplus >= 201103L) ||      (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L) ||      __has_feature(objc_fixed_enum)
#  define SWIFT_ENUM_TAG enum
# else
#  define SWIFT_ENUM_TAG
# endif
#endif
#if !defined(SWIFT_ENUM_FWD_DECL)
# if (defined(__cplusplus) && __cplusplus >= 201103L) ||      (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L) ||      __has_feature(objc_fixed_enum)
#  define SWIFT_ENUM_FWD_DECL(_type, _name) enum _name : _type;
# else
#  define SWIFT_ENUM_FWD_DECL(_type, _name) typedef _type _name;
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_AVAILABILITY_DOMAIN)
# define SWIFT_AVAILABILITY_DOMAIN(dom, ...) __attribute__((availability(domain: dom, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL
#endif
#endif
#if !__has_feature(nullability)
# define _Nonnull
# define _Nullable
# define _Null_unspecified
#elif !defined(__OBJC__)
# pragma clang diagnostic ignored "-Wnullability-extension"
#endif
#if !__has_feature(nullability_nullable_result)
# define _Nullable_result _Nullable
#endif
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Warc-bridge-casts-disallowed-in-nonarc"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RNMBXSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__cplusplus)
} // extern "C"
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import React;
@import UIKit;
@import _DarwinFoundation2.sys_types;
#endif

#endif // defined(__OBJC__)
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Warc-bridge-casts-disallowed-in-nonarc"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RNMBXSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC10RNMBXSwift19ShapeAnimatorCommon")
@interface ShapeAnimatorCommon : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

SWIFT_CLASS("_TtC10RNMBXSwift30ChangeLineOffsetsShapeAnimator")
@interface ChangeLineOffsetsShapeAnimator : ShapeAnimatorCommon
@end

@class NSNumber;
@class NSArray;
@class NSString;
@class NSError;
@interface ChangeLineOffsetsShapeAnimator (SWIFT_EXTENSION(RNMBXSwift))
- (NSNumber * _Nonnull)getTag SWIFT_WARN_UNUSED_RESULT;
+ (ChangeLineOffsetsShapeAnimator * _Nullable)createWithTag:(NSNumber * _Nonnull)tag coordinates:(NSArray * _Nonnull)coordinates startOffset:(NSNumber * _Nonnull)startOffset endOffset:(NSNumber * _Nonnull)endOffset SWIFT_WARN_UNUSED_RESULT;
+ (void)setLineStringWithTag:(NSNumber * _Nonnull)tag coordinates:(NSArray * _Nonnull)coordinates startOffset:(NSNumber * _Nonnull)startOffset endOffset:(NSNumber * _Nonnull)endOffset resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull, NSError * _Nonnull))reject;
+ (void)setStartOffsetWithTag:(NSNumber * _Nonnull)tag offset:(NSNumber * _Nonnull)offset durationMs:(NSNumber * _Nonnull)durationMs resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull, NSError * _Nonnull))reject;
+ (void)setEndOffsetWithTag:(NSNumber * _Nonnull)tag offset:(NSNumber * _Nonnull)offset durationMs:(NSNumber * _Nonnull)durationMs resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull, NSError * _Nonnull))reject;
@end

SWIFT_CLASS("_TtC10RNMBXSwift22MovePointShapeAnimator")
@interface MovePointShapeAnimator : ShapeAnimatorCommon
@end

@interface MovePointShapeAnimator (SWIFT_EXTENSION(RNMBXSwift))
- (NSNumber * _Nonnull)getTag SWIFT_WARN_UNUSED_RESULT;
+ (MovePointShapeAnimator * _Nullable)generateWithTag:(NSNumber * _Nonnull)tag startCoordinate:(NSArray * _Nonnull)startCoordinate SWIFT_WARN_UNUSED_RESULT;
+ (void)moveToTag:(NSNumber * _Nonnull)tag coordinate:(NSArray * _Nonnull)coordinate durationMs:(NSNumber * _Nonnull)durationMs resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull, NSError * _Nonnull))reject;
@end

@class RCTBridge;
@class NSCoder;
/// RNMBXSingletonLayer is absract superclass for Light, Atmosphere, Terrain
SWIFT_CLASS("_TtC10RNMBXSwift19RNMBXSingletonLayer")
@interface RNMBXSingletonLayer : UIView
@property (nonatomic, weak) RCTBridge * _Nullable bridge;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable reactStyle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXAtmosphere")
@interface RNMBXAtmosphere : RNMBXSingletonLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXLayer")
@interface RNMBXLayer : UIView
@property (nonatomic, weak) RCTBridge * _Nullable bridge;
@property (nonatomic, copy) NSString * _Nullable sourceLayerID;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable reactStyle;
@property (nonatomic, copy) NSArray * _Nullable filter;
@property (nonatomic, copy) NSString * _Null_unspecified id;
@property (nonatomic, copy) NSString * _Nullable sourceID;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, copy) NSString * _Nullable aboveLayerID;
@property (nonatomic, copy) NSString * _Nullable belowLayerID;
@property (nonatomic, strong) NSNumber * _Nullable layerIndex;
@property (nonatomic, copy) NSString * _Nullable slot;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXBackgroundLayer")
@interface RNMBXBackgroundLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift12RNMBXCallout")
@interface RNMBXCallout : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

/// Base class for components that require MapView to be non-nil
SWIFT_CLASS("_TtC10RNMBXSwift31RNMBXMapAndMapViewComponentBase")
@interface RNMBXMapAndMapViewComponentBase : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXCamera")
@interface RNMBXCamera : RNMBXMapAndMapViewComponentBase
@property (nonatomic, strong) NSNumber * _Nullable animationDuration;
@property (nonatomic, strong) NSString * _Nullable animationMode;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable defaultStop;
@property (nonatomic) BOOL followUserLocation;
@property (nonatomic, copy) NSString * _Nullable followUserMode;
@property (nonatomic, strong) NSNumber * _Nullable followZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable followPitch;
@property (nonatomic, strong) NSNumber * _Nullable followHeading;
@property (nonatomic, strong) NSDictionary * _Nullable followPadding;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onUserTrackingModeChange;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable stop;
@property (nonatomic, copy) NSString * _Nullable maxBounds;
- (void)updateCameraStop:(NSDictionary<NSString *, id> * _Nonnull)stop;
- (void)moveByX:(double)x y:(double)y animationMode:(double)animationMode animationDuration:(double)animationDuration resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(RCTPromiseRejectBlock _Nonnull)reject;
- (void)scaleByX:(double)x y:(double)y scaleFactor:(double)scaleFactor animationMode:(double)animationMode animationDuration:(double)animationDuration resolve:(RCTPromiseResolveBlock _Nonnull)resolve reject:(RCTPromiseRejectBlock _Nonnull)reject;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift21RNMBXMapComponentBase")
@interface RNMBXMapComponentBase : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXCameraGestureObserver")
@interface RNMBXCameraGestureObserver : RNMBXMapComponentBase
@property (nonatomic, strong) NSNumber * _Nullable quietPeriodMs;
@property (nonatomic, strong) NSNumber * _Nullable maxIntervalMs;
@property (nonatomic, copy) void (^ _Nullable onMapSteady)(NSString * _Nonnull, NSNumber * _Nullable, NSString * _Nullable, NSNumber * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onCameraChanged)(NSDictionary<NSString *, id> * _Nonnull);
- (void)setHasOnMapSteady:(BOOL)hasOnMapSteady;
- (void)setHasOnCameraChanged:(BOOL)hasOnCameraChanged;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXVectorLayer")
@interface RNMBXVectorLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXCircleLayer")
@interface RNMBXCircleLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift27RNMBXCustomLocationProvider")
@interface RNMBXCustomLocationProvider : UIView
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull coordinate;
@property (nonatomic, strong) NSNumber * _Nonnull heading;
- (void)didSetProps:(NSArray<NSString *> * _Nonnull)props;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXFillExtrusionLayer")
@interface RNMBXFillExtrusionLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXFillLayer")
@interface RNMBXFillLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXHeatmapLayer")
@interface RNMBXHeatmapLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXHillshadeLayer")
@interface RNMBXHillshadeLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
SWIFT_CLASS("_TtC10RNMBXSwift10RNMBXImage")
@interface RNMBXImage : UIView
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic) BOOL sdf;
@property (nonatomic, copy) NSArray<NSArray<NSNumber *> *> * _Nonnull stretchX;
@property (nonatomic, copy) NSArray<NSArray<NSNumber *> *> * _Nonnull stretchY;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable content;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)insertReactSubviewInternal:(UIView * _Null_unspecified)subview at:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (void)removeReactSubviewInternal:(UIView * _Null_unspecified)subview;
- (void)setImage;
- (void)refresh;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift23RNMBXInteractiveElement")
@interface RNMBXInteractiveElement : UIView
@property (nonatomic) BOOL draggable;
@property (nonatomic) BOOL hasPressListener;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull hitbox;
@property (nonatomic, copy) NSString * _Null_unspecified id;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onDragStart;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onPress;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift11RNMBXSource")
@interface RNMBXSource : RNMBXInteractiveElement
@property (nonatomic) BOOL existing;
@property (nonatomic, strong) id _Nullable promoteId;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)insertReactSubviewInternal:(UIView * _Null_unspecified)subview at:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (void)removeReactSubviewInternal:(UIView * _Null_unspecified)subview;
- (void)didUpdateReactSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift16RNMBXImageSource")
@interface RNMBXImageSource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSArray<NSArray<NSNumber *> *> * _Nullable coordinates;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift11RNMBXImages")
@interface RNMBXImages : UIView
@property (nonatomic, weak) RCTBridge * _Null_unspecified bridge;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onImageMissing;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull images;
@property (nonatomic, copy) NSArray * _Nonnull nativeImages;
- (void)addImageView:(RNMBXImage * _Nonnull)image;
- (void)removeImageView:(RNMBXImage * _Nonnull)image;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXLight")
@interface RNMBXLight : UIView
@property (nonatomic, weak) RCTBridge * _Null_unspecified bridge;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Null_unspecified reactStyle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXLineLayer")
@interface RNMBXLineLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXLogger")
@interface RNMBXLogger : NSObject
+ (void)error:(NSString * _Nonnull)message;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol RCTEventDispatcherProtocol;
SWIFT_CLASS_NAMED("RNMBXMapView")
@interface RNMBXMapView : UIView <RCTInvalidating>
- (void)invalidate;
@property (nonatomic) BOOL deselectAnnotationOnTap;
@property (nonatomic, copy) NSString * _Nullable mapViewImpl;
@property (nonatomic, readonly) BOOL hasMap;
- (void)addToMap:(UIView * _Nonnull)subview;
- (void)removeFromMap:(UIView * _Nonnull)subview;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (nonnull instancetype)initWithFrame:(CGRect)frame eventDispatcher:(id <RCTEventDispatcherProtocol> _Nonnull)eventDispatcher OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)setReactProjection:(NSString * _Nullable)value;
- (void)setReactTransparent:(BOOL)value;
- (void)setReactPreferredFramesPerSecond:(NSInteger)value;
- (void)setReactSymbolScaleBehavior:(id _Nullable)value;
- (void)setReactMaxPitch:(NSNumber * _Nullable)value;
- (void)setReactMinPitch:(NSNumber * _Nullable)value;
- (void)setReactLocalizeLabels:(NSDictionary * _Nullable)value;
- (void)setReactStyleGlyphURL:(NSString * _Nullable)value;
- (void)setReactDebugOptions:(NSArray * _Nullable)value;
- (void)setReactGestureSettings:(NSDictionary * _Nullable)value;
- (void)setReactAttributionEnabled:(BOOL)value;
- (void)setReactAttributionPosition:(NSDictionary<NSString *, NSNumber *> * _Nonnull)position;
- (void)setReactLogoEnabled:(BOOL)value;
- (void)setReactLogoPosition:(NSDictionary<NSString *, NSNumber *> * _Nonnull)position;
- (void)setReactCompassEnabled:(BOOL)value;
- (void)setReactCompassFadeWhenNorth:(BOOL)value;
- (void)setReactCompassPosition:(NSDictionary<NSString *, NSNumber *> * _Nonnull)position;
- (void)setReactCompassViewPosition:(NSInteger)position;
- (void)setReactCompassViewMargins:(CGPoint)margins;
- (void)setReactCompassImage:(NSString * _Nonnull)image;
- (void)setReactScaleBarEnabled:(BOOL)value;
- (void)setReactScaleBarPosition:(NSDictionary<NSString *, NSNumber *> * _Nonnull)position;
- (void)setReactScaleBarUnits:(NSString * _Nullable)value;
- (void)didSetProps:(NSArray<NSString *> * _Nonnull)props;
- (void)setReactZoomEnabled:(BOOL)value;
- (void)setReactScrollEnabled:(BOOL)value;
- (void)setReactRotateEnabled:(BOOL)value;
- (void)setReactPitchEnabled:(BOOL)value;
- (void)setReactStyleURL:(NSString * _Nullable)value;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class NSURL;
@interface RNMBXMapView (SWIFT_EXTENSION(RNMBXSwift))
- (NSURL * _Nonnull)takeSnapWithWriteToDisk:(BOOL)writeToDisk SWIFT_WARN_UNUSED_RESULT;
@end

@interface RNMBXMapView (SWIFT_EXTENSION(RNMBXSwift))
- (void)setReactOnPress:(RCTBubblingEventBlock _Nonnull)value;
- (void)setReactOnLongPress:(RCTBubblingEventBlock _Nonnull)value;
@end

@interface RNMBXMapView (SWIFT_EXTENSION(RNMBXSwift))
- (void)setReactOnMapChange:(RCTBubblingEventBlock _Nonnull)value;
@end

@interface RNMBXMapView (SWIFT_EXTENSION(RNMBXSwift))
- (void)takeSnapWithWriteToDisk:(BOOL)writeToDisk resolver:(RCTPromiseResolveBlock _Nonnull)resolver;
- (void)queryTerrainElevationWithCoordinates:(NSArray<NSNumber *> * _Nonnull)coordinates resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)setSourceVisibilityWithVisible:(BOOL)visible sourceId:(NSString * _Nonnull)sourceId sourceLayerId:(NSString * _Nullable)sourceLayerId resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)setStyleLayerPropertyWithLayerId:(NSString * _Nonnull)layerId property:(NSString * _Nonnull)property value:(NSDictionary<NSString *, id> * _Nonnull)value resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getCenterWithResolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getCoordinateFromViewWithAtPoint:(CGPoint)point resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getPointInViewWithAtCoordinate:(NSArray<NSNumber *> * _Nonnull)coordinate resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)setHandledMapChangedEventsWithEvents:(NSArray<NSString *> * _Nonnull)events resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getZoomWithResolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getVisibleBoundsWithResolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)setFeatureStateWithFeatureId:(NSString * _Nonnull)featureId state:(NSDictionary<NSString *, id> * _Nonnull)state sourceId:(NSString * _Nonnull)sourceId sourceLayerId:(NSString * _Nullable)sourceLayerId resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getFeatureStateWithFeatureId:(NSString * _Nonnull)featureId sourceId:(NSString * _Nonnull)sourceId sourceLayerId:(NSString * _Nullable)sourceLayerId resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)removeFeatureStateWithFeatureId:(NSString * _Nonnull)featureId stateKey:(NSString * _Nullable)stateKey sourceId:(NSString * _Nonnull)sourceId sourceLayerId:(NSString * _Nullable)sourceLayerId resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)queryRenderedFeaturesAtPointWithAtPoint:(NSArray<NSNumber *> * _Nonnull)point withFilter:(NSArray * _Nullable)filter withLayerIDs:(NSArray<NSString *> * _Nullable)layerIDs resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)queryRenderedFeaturesInRectWithBBox:(NSArray<NSNumber *> * _Nonnull)bbox withFilter:(NSArray * _Nullable)filter withLayerIDs:(NSArray<NSString *> * _Nullable)layerIDs resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)querySourceFeaturesWithSourceId:(NSString * _Nonnull)sourceId withFilter:(NSArray * _Nullable)filter withSourceLayerIds:(NSArray<NSString *> * _Nullable)sourceLayerIds resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)clearDataWithResolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
@end

SWIFT_CLASS_NAMED("RNMBXMarkerView")
@interface RNMBXMarkerView : UIView
@property (nonatomic, copy) void (^ _Nullable onPositionChange)(void);
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable coordinate;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nullable anchor;
@property (nonatomic) BOOL allowOverlap;
@property (nonatomic) BOOL allowOverlapWithPuck;
@property (nonatomic) BOOL isSelected;
@property (nonatomic, strong) NSNumber * _Nullable allowZElevate;
@property (nonatomic, strong) NSNumber * _Nullable priority;
@property (nonatomic, strong) NSNumber * _Nullable minZoom;
@property (nonatomic, strong) NSNumber * _Nullable maxZoom;
@property (nonatomic, getter=isHidden) BOOL hidden;
- (void)reactSetFrame:(CGRect)frame;
- (void)insertReactSubview:(UIView * _Nonnull)subview atIndex:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Nonnull)subview;
- (void)updateAnnotationViewSize:(CGRect)next :(CGRect)prev;
- (void)addOrUpdate;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXModelLayer")
@interface RNMBXModelLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXModels")
@interface RNMBXModels : UIView
@property (nonatomic, strong) NSDictionary * _Nonnull models;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXModule")
@interface RNMBXModule : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift23RNMBXNativeUserLocation")
@interface RNMBXNativeUserLocation : UIView
@property (nonatomic) BOOL iosShowsUserHeadingIndicator;
@property (nonatomic, copy) NSString * _Nullable topImage;
@property (nonatomic, copy) NSString * _Nullable bearingImage;
@property (nonatomic, copy) NSString * _Nullable shadowImage;
@property (nonatomic, strong) id _Nullable scale;
@property (nonatomic) BOOL visible;
@property (nonatomic, copy) NSString * _Nullable puckBearing;
@property (nonatomic) BOOL puckBearingEnabled;
@property (nonatomic, strong) NSDictionary * _Nullable pulsing;
@property (nonatomic, strong) NSDictionary * _Nullable model;
- (void)didSetProps:(NSArray<NSString *> * _Nonnull)props;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift20RNMBXPointAnnotation")
@interface RNMBXPointAnnotation : RNMBXInteractiveElement
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onDeselected;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onDrag;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onDragEnd;
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onSelected;
- (void)setReactSelected:(BOOL)_selected;
@property (nonatomic, copy) NSString * _Nullable coordinate;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull anchor;
- (void)refresh;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)insertReactSubviewInternal:(UIView * _Null_unspecified)subview at:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (void)removeReactSubviewInternal:(UIView * _Null_unspecified)subview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXPointAnnotationManagerView")
@interface RNMBXPointAnnotationManagerView : RNMBXMapComponentBase
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL isDefault;
@property (nonatomic, copy) NSString * _Nullable slot;
@property (nonatomic, strong) NSNumber * _Nullable iconAllowOverlap;
@property (nonatomic, strong) NSNumber * _Nullable iconIgnorePlacement;
@property (nonatomic, strong) NSNumber * _Nullable iconOptional;
@property (nonatomic, strong) NSNumber * _Nullable textAllowOverlap;
@property (nonatomic, strong) NSNumber * _Nullable textIgnorePlacement;
@property (nonatomic, strong) NSNumber * _Nullable textOptional;
- (void)insertReactSubview:(UIView * _Null_unspecified)subview atIndex:(NSInteger)atIndex;
- (void)insertReactSubviewInternal:(UIView * _Null_unspecified)subview at:(NSInteger)atIndex;
- (void)removeReactSubview:(UIView * _Null_unspecified)subview;
- (void)removeReactSubviewInternal:(UIView * _Null_unspecified)subview;
- (void)didUpdateReactSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXRain")
@interface RNMBXRain : RNMBXSingletonLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift22RNMBXRasterArraySource")
@interface RNMBXRasterArraySource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable tileUrlTemplates;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable tileSize;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable sourceBounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift20RNMBXRasterDemSource")
@interface RNMBXRasterDemSource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable tileUrlTemplates;
@property (nonatomic, strong) NSNumber * _Nullable tileSize;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXRasterLayer")
@interface RNMBXRasterLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXRasterParticleLayer")
@interface RNMBXRasterParticleLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift17RNMBXRasterSource")
@interface RNMBXRasterSource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable tileUrlTemplates;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable tileSize;
@property (nonatomic, strong) NSNumber * _Nullable prefetchZoomDelta;
@property (nonatomic, strong) NSNumber * _Nullable tileNetworkRequestsDelay;
@property (nonatomic) BOOL tms;
@property (nonatomic, copy) NSString * _Nullable attribution;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable sourceBounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift16RNMBXShapeSource")
@interface RNMBXShapeSource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable shape;
@property (nonatomic, strong) NSNumber * _Nullable cluster;
@property (nonatomic, strong) NSNumber * _Nullable clusterRadius;
@property (nonatomic, strong) NSNumber * _Nullable clusterMaxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable clusterMinPoints;
@property (nonatomic, copy) NSDictionary<NSString *, NSArray *> * _Nullable clusterProperties;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable buffer;
@property (nonatomic, strong) NSNumber * _Nullable tolerance;
@property (nonatomic) BOOL lineMetrics;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@interface RNMBXShapeSource (SWIFT_EXTENSION(RNMBXSwift))
- (void)addFeaturesWithFeaturesJSON:(NSString * _Nonnull)featuresJSON resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)updateFeaturesWithFeaturesJSON:(NSString * _Nonnull)featuresJSON resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)removeFeaturesWithFeatureIds:(NSArray<NSString *> * _Nonnull)featureIds resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
@end

@interface RNMBXShapeSource (SWIFT_EXTENSION(RNMBXSwift))
- (void)getClusterChildrenWithFeatureJSON:(NSString * _Nonnull)featureJSON resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getClusterLeavesWithFeatureJSON:(NSString * _Nonnull)featureJSON number:(uint)number offset:(uint)offset resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
- (void)getClusterExpansionZoomWithFeatureJSON:(NSString * _Nonnull)featureJSON resolver:(RCTPromiseResolveBlock _Nonnull)resolver rejecter:(RCTPromiseRejectBlock _Nonnull)rejecter;
@end

SWIFT_CLASS_NAMED("RNMBXSkyLayer")
@interface RNMBXSkyLayer : RNMBXLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXSnow")
@interface RNMBXSnow : RNMBXSingletonLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXStyleImport")
@interface RNMBXStyleImport : UIView
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL existing;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable config;
- (void)didSetProps:(NSArray<NSString *> * _Nonnull)props;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXSymbolLayer")
@interface RNMBXSymbolLayer : RNMBXVectorLayer
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift12RNMBXTerrain")
@interface RNMBXTerrain : RNMBXSingletonLayer
@property (nonatomic, copy) NSString * _Nullable sourceID;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift15RNMBXTileSource")
@interface RNMBXTileSource : RNMBXSource
@property (nonatomic, copy) NSString * _Nullable url;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS("_TtC10RNMBXSwift17RNMBXVectorSource")
@interface RNMBXVectorSource : RNMBXTileSource
@property (nonatomic, copy) NSString * _Nullable attribution;
@property (nonatomic, strong) NSNumber * _Nullable maxZoomLevel;
@property (nonatomic, strong) NSNumber * _Nullable minZoomLevel;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull tileUrlTemplates;
@property (nonatomic) BOOL tms;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_CLASS_NAMED("RNMBXViewport")
@interface RNMBXViewport : UIView
@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onStatusChanged;
@property (nonatomic) BOOL hasStatusChanged;
/// <code>NSNumber</code> (boolean) or a dictionary of gesture names to booleans.
@property (nonatomic, strong) id _Nullable transitionsToIdleUponUserInteraction;
- (NSDictionary<NSString *, id> * _Nonnull)getState SWIFT_WARN_UNUSED_RESULT;
- (void)idle;
- (void)transitionToState:(NSDictionary<NSString *, id> * _Nonnull)state transition:(NSDictionary<NSString *, id> * _Nonnull)transition resolve:(void (^ _Nonnull)(NSNumber * _Nonnull))resolve;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#endif // defined(__OBJC__)
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif
