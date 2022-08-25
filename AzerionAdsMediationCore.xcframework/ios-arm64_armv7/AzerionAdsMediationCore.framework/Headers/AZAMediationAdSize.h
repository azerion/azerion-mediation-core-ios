//
//  AZAMediationAdSize.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 3/25/22.
//  Copyright © 2022 Azerion. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>

#ifndef AZAMediationAdSize_h
#define AZAMediationAdSize_h

#if __has_attribute(objc_boxable)
#define AZA_BOXABLE __attribute__((objc_boxable))
#else
#error "Use latest Xcode version."
#endif

#if defined(__cplusplus)
#define AZA_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define AZA_EXTERN extern __attribute__((visibility("default")))
#endif  // defined(__cplusplus)

typedef struct AZA_BOXABLE AZAMediationAdSize AZAMediationAdSize;

struct AZA_BOXABLE AZAMediationAdSize {
    CGSize size;
};

/// 320x50
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeBanner;
/// 320x100
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeLargeBanner;
/// 300x250
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeMediumRectangleBanner;
/// 468x60
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeFullBanner;
///728x90
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeLeaderboardBanner;
///// {300, 320, 468, 728} x {50, 90}
AZA_EXTERN AZAMediationAdSize const kAZAMediationSizeSmartBanner;

AZA_EXTERN bool AZAMediationAdSizeEqualToSize(AZAMediationAdSize size1, AZAMediationAdSize size2);
AZA_EXTERN CGSize CGSizeFromAZAMediationAdSize(AZAMediationAdSize adSize);

#endif /* AZAMediationAdSize_h */
