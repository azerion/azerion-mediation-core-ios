//
//  AZAMediationAdDelegate.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAMediationAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AZAMediationAdDelegate <NSObject>

- (void)onAdLoaded:(id<AZAMediationAd>)ad;
- (void)onAdFailedToLoad:(id<AZAMediationAd>)ad error:(NSError *)error;
- (void)onAdDisplayed:(id<AZAMediationAd>)ad;
- (void)onAdFailedToDisplay:(id<AZAMediationAd>)ad error:(NSError *)error;
- (void)onAdClosed:(id<AZAMediationAd>)ad;
- (void)onAdLeftApplication:(id<AZAMediationAd>)ad;

@end

NS_ASSUME_NONNULL_END
