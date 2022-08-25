//
//  AZAMediationRequest.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZAMediationAdRequest : NSObject

@property (nonatomic, retain) NSString *adUnitId;
@property (nonatomic, retain) NSDictionary *mediationExtras;
@property (nonatomic, retain) NSString *requestAgent;
@property (nonatomic, assign) BOOL isTestRequest;
@property (nonatomic, assign) BOOL gdprConsent;

- (instancetype)initWithAdUnitId:(NSString *)adUnitId mediationExtras:(nullable NSDictionary *)mediationExtras isTestRequest:(BOOL)isTestRequest;

@end

NS_ASSUME_NONNULL_END
