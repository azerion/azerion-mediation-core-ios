//
//  AZAAdNetworkInitializer.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/8/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#ifndef AZAAdNetworkInitializer_h
#define AZAAdNetworkInitializer_h
#import <AzerionAdsMediationCore/AZAMediationAdNetworkStatus.h>
#import <AzerionAdsMediationCore/AZAMediationConfiguration.h>

typedef void (^AZAAdNetworkInitializerCompletionHandler)(AZAMediationAdNetworkStatus *_Nonnull, id<AZAMediationAdapter>);

@protocol AZAAdNetworkInitializer <NSObject>

- (void)startWithConfiguration:(AZAMediationConfiguration* _Nonnull)configuration withCompletionHandler:(AZAAdNetworkInitializerCompletionHandler _Nonnull)completionHandler;

@end

#endif /* AZAAdNetworkInitializer_h */
