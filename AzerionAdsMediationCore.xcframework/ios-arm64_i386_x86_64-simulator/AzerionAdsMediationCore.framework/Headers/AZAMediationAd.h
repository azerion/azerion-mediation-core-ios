//
//  AZAMediationAd.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAMediationAdRequest.h"

@protocol AZAMediationAdDelegate;

NS_ASSUME_NONNULL_BEGIN

@protocol AZAMediationAd <NSObject>

- (void)loadRequest:(AZAMediationAdRequest *)request;

@property (nonatomic, weak) id<AZAMediationAdDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
