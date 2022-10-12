//
//  AZAMediationBannerAdRequest.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import "AZAMediationAdRequest.h"
#import "AZAMediationAdSize.h"
#import <CoreGraphics/CoreGraphics.h>
NS_ASSUME_NONNULL_BEGIN

@interface AZAMediationBannerAdRequest : AZAMediationAdRequest

@property (nonatomic, assign) AZAMediationAdSize adSize;
@property (nonatomic, assign) CGPoint adPosition;

- (instancetype)initWithAdUnitId:(NSString *)adUnitId mediationExtras:(nullable NSDictionary *)mediationExtras isTestRequest:(BOOL)isTestRequest adSize:(AZAMediationAdSize)adSize;

@end

NS_ASSUME_NONNULL_END
