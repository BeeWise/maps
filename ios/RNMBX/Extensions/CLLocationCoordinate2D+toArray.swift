#if SWIFT_PACKAGE
import React
import RNMBXSupport
#endif
import MapboxMaps

internal extension CLLocationCoordinate2D {
  func toArray() -> [Double] {
    return [Double(longitude), Double(latitude)]
  }
}