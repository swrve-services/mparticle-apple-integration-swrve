#import <Foundation/Foundation.h>
#import "SwrvePush.h"
#if defined(__has_include) && __has_include(<mParticle_Apple_SDK/mParticle.h>)
#import <mParticle_Apple_SDK/mParticle.h>
#else
#import "mParticle.h"
#endif

@interface MPKitSwrve : NSObject <MPKitProtocol, SwrvePushResponseDelegate>

@property (nonatomic, strong, nonnull) NSDictionary *configuration;
@property (nonatomic, strong, nullable) NSDictionary *launchOptions;
@property (nonatomic, unsafe_unretained, readonly) BOOL started;
@property (nonatomic, unsafe_unretained, readonly) BOOL init_called;

@end
