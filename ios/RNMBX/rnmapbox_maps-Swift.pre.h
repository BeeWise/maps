#import <CoreFoundation/CoreFoundation.h>
#import <CoreLocation/CoreLocation.h>

#import <React/RCTComponent.h>

@interface MapView : UIView
@end

#if RNMBX_SPM
#import "../spm/RNMBXSwiftInterop.h"
#elif __has_include(<rnmapbox_maps/rnmapbox_maps-Swift.h>)
#import <rnmapbox_maps/rnmapbox_maps-Swift.h>
#else
#import <rnmapbox_maps-Swift.h>
#endif
