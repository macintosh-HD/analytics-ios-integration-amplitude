#import <Foundation/Foundation.h>
#import "SEGAmplitudeIntegration.h"

#if defined(__has_include) && __has_include(<Analytics/Analytics.h>)
#import <Analytics/Analytics.h>
#else
#import <Segment/SEGAnalytics.h>
#endif


@interface SEGAmplitudeIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

/**
 This method can be used to set Amplitude's adSupportBlock and locationInfoBlock.
 
 Example:
 
    SEGAmplitudeIntegrationFactory *factory = [SEGAmplitudeIntegrationFactory instanceWithSetupBlock:^{
        amplitude.adSupportBlock = ^{
            return [[ASIdentifierManager sharedManager] advertisingIdentifier];
        };
        amplitude.locationInfoBlock = ^{
            return @{
                @"lat" : @37.7,
                @"lng" : @122.4
            };
        };
    }];
    ...
    [analyticsConfiguration use:factory];
 
 */
+ (instancetype)instanceWithSetupBlock:(SEGAmplitudeSetupBlock)setupBlock;

@end
