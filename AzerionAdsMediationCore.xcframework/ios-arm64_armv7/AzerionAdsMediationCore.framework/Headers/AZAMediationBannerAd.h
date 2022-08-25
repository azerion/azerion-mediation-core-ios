//
//  AZAMediationBannerAd.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/7/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZAMediationAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AZAMediationBannerAd <NSObject>

- (UIView *)getBannerView;

@end

NS_ASSUME_NONNULL_END
