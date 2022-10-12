//
//  AZAMediationAdapter.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#ifndef AZAMediationAdapter_h
#define AZAMediationAdapter_h

#import <UIKit/UIKit.h>
#import "AZAMediationAdDelegate.h"
#import "AZAMediationRewardedAdDelegate.h"
#import "AZAMediationBannerAdRequest.h"
#import "AZAMediationInterstitialAdRequest.h"
#import "AZAMediationRewardedAdRequest.h"
#import "AZAMediationConfiguration.h"
#import "AZAMediationAdNetworkStatus.h"

typedef void (^AZAMediationInitializationCompletionBlock)(NSArray<AZAMediationAdNetworkStatus *> *_Nonnull);

@protocol AZAMediationAdapter <NSObject>

- (void)startWithConfiguration:(AZAMediationConfiguration* _Nonnull)configuration withCompletionHandler:(AZAMediationInitializationCompletionBlock _Nullable)completionHandler;

- (void)loadBannerAdWithViewController:(UIViewController * _Nonnull)viewController withRequest:(AZAMediationBannerAdRequest *_Nullable)request mediationAdDelegate:(id<AZAMediationAdDelegate> _Nullable)delegate;

- (void)loadInterstitialAdWithRequest:(AZAMediationInterstitialAdRequest *_Nullable)request mediationAdDelegate:(id<AZAMediationAdDelegate> _Nullable)delegate;

- (void)loadRewardedVideoAdWithRequest:(AZAMediationRewardedAdRequest *_Nullable)request mediationAdDelegate:(id<AZAMediationAdDelegate> _Nullable)delegate;

@end

#endif /* AZAMediationAdapter_h */
