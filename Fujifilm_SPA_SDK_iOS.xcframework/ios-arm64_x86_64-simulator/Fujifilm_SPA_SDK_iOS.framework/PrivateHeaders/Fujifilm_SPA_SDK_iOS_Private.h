//
//  Fujifilm_SPA_SDK_iOS_Private.h
//  Pods
//
//  Created by Sam Friedman on 2/28/23.
//
#ifndef Fujifilm_SPA_SDK_iOS_Private_h
#define Fujifilm_SPA_SDK_iOS_Private_h
#import "AddMorePhotosSortMap.h"
static NSString *const kSPAOverrideURL = @"SPAOverrideURL";
static NSString *const kBrandingInfo = @"brandingInfo";
static NSString *const kSuppressTermsAndPrivacyPolicy = @"suppressTermsAndPrivacyPolicy";
static NSString *const kShoppingCartBackButtonClosesSDK = @"shoppingCartBackButtonClosesSDK";
static NSString *const kContinueShoppingClosesSDK = @"continueShoppingClosesSDK";
static NSString *const kUserGroup = @"userGroup";
static NSString *const kThumbnailsProvidedAreRotated = @"thumbnailsProvidedAreRotated";
static NSString *const kContactsOnly = @"contactsOnly";
static NSString *const kEnablePrintFolder = @"enablePrintFolder";
static NSString *const kAllowNoPhotos = @"allowNoPhotos";
static NSString *const kRequestForThumbnailPhoto = @"requestForThumbnailPhoto";
static NSString *const kRequestForMidresPhoto = @"requestForMidresPhoto";
static NSString *const kRequestForOriginalPhoto = @"requestForOriginalPhoto";
@interface Fujifilm_SPA_SDK_iOS()
+ (BOOL) isPresented;
@property (nonatomic, retain) NSString * apikey;
@end
#endif /* Fujifilm_SPA_SDK_iOS_Private_h */
