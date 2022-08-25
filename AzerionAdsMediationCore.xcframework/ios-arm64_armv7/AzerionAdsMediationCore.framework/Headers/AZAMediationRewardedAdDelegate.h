//
//  AZAMediationRewardedAdDelegate.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 5/30/22.
//  Copyright © 2022 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAMediationRewardItem.h"
#import "AZAMediationPresentableAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AZAMediationRewardedAdDelegate <AZAMediationAdDelegate>

- (void)onRewardEarned:(id<AZAMediationAd>)ad rewardItem:(AZAMediationRewardItem *)rewardItem;

@end

NS_ASSUME_NONNULL_END
