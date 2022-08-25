//
//  AZAMediationAdNetworkStatus.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AZAMediationInitializationState) {
    AZAMediationInitializationStateNotReady = 0,
    AZAMediationInitializationStateReady = 1
};

@interface AZAMediationAdNetworkStatus : NSObject

@property (nonatomic, retain) NSString *adProvider;
@property (nonatomic, retain) NSString *networkDescription;
@property (nonatomic, assign) AZAMediationInitializationState state;

- (instancetype)initWithAdProvider:(NSString *)provider withState:(AZAMediationInitializationState)state withDescription:(NSString *)description;

@end

NS_ASSUME_NONNULL_END
