//
//  AZAMediationConfiguration.h
//  AzerionAds
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MediationConfigType) {
    MediationConfigTypePrivacyConsent,
    MediationConfigTypeAdFormat
};

@interface AZAMediationConfiguration : NSObject

@property (assign, nonatomic) MediationConfigType mediationConfigType;
@property (assign, nonatomic) BOOL withUserConsent;
@property (strong, nonatomic) NSString *gdprConsentString;
@property (assign, nonatomic) BOOL isCOPPACompliant;
@property (assign, nonatomic) BOOL isTestModeEnabled;
@property (assign, nonatomic) BOOL isDebugModeEnabled;

@end
