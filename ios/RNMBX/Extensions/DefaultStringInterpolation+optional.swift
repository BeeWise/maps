#if SWIFT_PACKAGE
import React
import RNMBXSupport
#endif
internal extension DefaultStringInterpolation {
  mutating func appendInterpolation<T>(optional: T?) {
    if let optional = optional {
      appendInterpolation(String(describing: optional))
    } else {
      appendInterpolation("nil")
    }
  }
}
