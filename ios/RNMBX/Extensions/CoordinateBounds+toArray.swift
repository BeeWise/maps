#if SWIFT_PACKAGE
import React
import RNMBXSupport
#endif
import MapboxMaps

internal extension CoordinateBounds {
  func toArray() -> [[Double]] {
    return [
      northeast.toArray(),
      southwest.toArray()
    ]
  }
}
