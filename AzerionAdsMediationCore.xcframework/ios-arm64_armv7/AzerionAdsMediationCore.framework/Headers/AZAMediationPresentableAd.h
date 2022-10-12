//
//  AZAMediationPresentableAd.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/7/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AZAMediationPresentableAd <NSObject>

- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
