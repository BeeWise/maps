#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNMBXViewResolver.h"

#ifdef __cplusplus
#if RNMBX_SPM
#import <rnmapbox_maps_specs/rnmapbox_maps_specs.h>
#else
#import "rnmapbox_maps_specs.h"
#endif

@interface RNMBXMapViewModule : NSObject <NativeMapViewModuleSpec, RNMBXViewResolverDelegate>
@end

#else

@interface RNMBXMapViewModule : NSObject
@end

#endif
