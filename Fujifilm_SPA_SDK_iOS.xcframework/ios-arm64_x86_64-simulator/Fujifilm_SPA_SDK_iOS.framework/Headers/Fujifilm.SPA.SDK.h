//
//  Fujifilm_SPA_SDK_iOS.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Jonathan Nick
//  Copyright (c) 2016 FUJIFILM North America Corp. All rights reserved.
//

#import <Photos/Photos.h>
/** The FujifilmSPASDKDelegate protocol defines methods that your delegate object must implement to interact with the Fujifilm SPA SDK interface. The methods of this protocol notify your delegate when the user exits the checkout flow or when an error occurs. See documentation for details on status codes.
 */
@class FFImage;

static NSString *const kEnableAddMorePhotos                            = @"enableAddMorePhotos";
static NSString *const kSiteDeepLink                                   = @"SiteDeepLink";
static NSString *const kMaxImagesMessage = @"maxImagesMessage";
static NSString *const kPreRenderedOrder = @"preRenderedOrder";
//Events
static NSString *const kAnalyticsEventExit                             = @"exit";
static NSString *const kAnalyticsEventPhotoEdited                      = @"photoEdited";
static NSString *const kAnalyticsEventProductEdited                    = @"productEdited";
static NSString *const kAnalyticsEventContinueShopping                 = @"continueShopping";
static NSString *const kAnalyticsEventItemAddedToCart                  = @"addToCart";
static NSString *const kAnalyticsEventItemComposed                     = @"itemComposed";
static NSString *const kAnalyticsEventDetailsViewed                    = @"detailsViewed";
static NSString *const kAnalyticsEventItemPurchased                    = @"itemPurchased";
static NSString *const kAnalyticsEventOrderComplete                    = @"orderComplete";
static NSString *const kAnalyticsEventCheckoutStarted                  = @"checkoutStarted";
static NSString *const kAnalyticsEventStoreSearched                    = @"storesSearched";
static NSString *const kAnalyticsEventRemovedFromCart                  = @"removedFromCart";
static NSString *const kAnalyticsEventStoreFavorited                   = @"storeFavorited";
static NSString *const kAnalyticsEventCartItemCountUpdated             = @"cartItemCountUpdated";

//Cloud Print Shop Exit
static NSString *const kAnalyticsAttributeItemsPurchased               = @"itemsPurchased";
static NSString *const kAnalyticsAttributeExitPoint                    = @"exitPoint";
static NSString *const kAnalyticsAttributePromoCode                    = @"promoCode";
static NSString *const kAnalyticsAttributeEntryPoint                   = @"entryPoint";
static NSString *const kAnalyticsAttributeExitMethod                   = @"exitMethod";
static NSString *const kAnalyticsAttributeDeliveryType                 = @"deliveryType";
static NSString *const kAnalyticsAttributePickupLocation               = @"pickupLocation";
static NSString *const kAnalyticsAttributeAddressValidationErrors      = @"addressValidationErrors";

//Cloud Print Continue Shopping
static NSString *const kAnalyticsAttributeScreen                       = @"screen";

//Cloud Print Item Added To Cart
static NSString *const kAnalyticsAttributeStatus                       = @"status";
static NSString *const kAnalyticsAttributeDuration                     = @"duration";
static NSString *const kAnalyticsAttributeAddToCartDelivery            = @"addedDelivery";
static NSString *const kAnalyticsAttributeAddToCartPickup              = @"addedPickup";
static NSString *const kAnalyticsAttributeItemAdded                    = @"itemAdded";
static NSString *const kAnalyticsAttributeAddToCartImageSource         = @"imageSource";


//Cloud Print Item Detail Viewed
static NSString *const kAnalyticsAttributeDetailsSource                = @"detailedSource";
static NSString *const kAnalyticsAttributeDetailsDelivery              = @"detailedDelivery";
static NSString *const kAnalyticsAttributeDetailsPickup                = @"detailedPickup";
static NSString *const kAnalyticsAttributeDetailsProduct               = @"itemDetailsViewed";

//Cloud Print Item Composed
static NSString *const kAnalyticsAttributeComposedSource               = @"composedSource";
static NSString *const kAnalyticsAttributeComposedDelivery             = @"composedDelivery";
static NSString *const kAnalyticsAttributeComposedPickup               = @"composedPickup";
static NSString *const kAnalyticsAttributeComposedProduct              = @"productComposed";

//Cloud Print Items Purchased
static NSString *const kAnalyticsAttributePurchasedDelivery            = @"purchasedDelivery";
static NSString *const kAnalyticsAttributePurchasedPickup              = @"purchasePickup";
static NSString *const kAnalyticsAttributePurchasedProduct             = @"productPurchased";
static NSString *const kAnalyticsAttributePurchasedQuantity            = @"quantityPurchased";
static NSString *const kAnalyticsAttributePurchasedCategoryName        = @"categoryName";


static NSString *const kAnalyticsAttributeAddedProductCode             = @"addedProductCode";
static NSString *const kAnalyticsAttributeProductCodePurchased         = @"productCodePurchased";
static NSString *const kAnalyticsAttributePurchasedUnitPrice           = @"purchasedUnitPrice";
static NSString *const kAnalyticsAttributeNumberOfItems                = @"numberOfItems";
static NSString *const kAnalyticsAttributeNumberOfDistinctItems        = @"numberOfDistinctItems";
static NSString *const kAnalyticsAttributeOrderPaymentType             = @"orderPaymentType";
static NSString *const kAnalyticsAttributeOrderCurrencyType            = @"orderCurrencyType";
static NSString *const kAnalyticsAttributeOrderSubtotal                = @"orderSubtotal";
static NSString *const kAnalyticsAttributeOrderTax                     = @"orderTax";
static NSString *const kAnalyticsAttributeOrderShipping                = @"orderShipping";
static NSString *const kAnalyticsAttributeOrderDiscount                = @"orderDiscount";
static NSString *const kAnalyticsAttributeOrderRetailer                = @"orderRetailer";
static NSString *const kAnalyticsAttributeOrderServiceType             = @"orderServiceType";
static NSString *const kAnalyticsAttributeOrderDeliveryMethod          = @"orderDeliveryMethod";
static NSString *const kAnalyticsAttributeOrderTotal                   = @"orderTotal";
static NSString *const kAnalyticsAttributeProductRemoved               = @"productRemoved";
static NSString *const kAnalyticsAttributeProductCodeRemoved           = @"productCodeRemoved";
static NSString *const kAnalyticsAttributeFavoritedStoreNumber         = @"favoritedStoreNumber";
static NSString *const kAnalyticsAttributeIsPreservedCart              = @"isPreservedCart";
static NSString *const kAnalyticsAttributeStoreNumber                  = @"storeNumber";
static NSString *const kAnalyticsAttributeSearchLatitude               = @"searchLatitude";
static NSString *const kAnalyticsAttributeSearchLongitude              = @"searchLongitude";
static NSString *const kAnalyticsAttributeSearchZip                    = @"searchZip";
static NSString *const kAnalyticsAttributeSearchRadius                 = @"searchRadius";
static NSString *const kAnalyticsAttributeSearchResultsCount           = @"searchResultsCount";
static NSString *const kAnalyticsAttributeCartItemCount                = @"cartItemCount";

static NSString *const attributeKey = @"attribute";
static NSString *const valueKey = @"value";

@protocol FujifilmSPASDKDelegate

-(void) fujifilmSPASDKFinishedWithStatus: (int) statusCode andMessage: (NSString*) message;

@optional
-(void) promoCodeDidFailValidationWithError: (int) error;

-(void) receivedAnalyticsEvent:(NSString *)event withAttributes:(NSArray *)attributes;
-(NSString *) determineExitMethod: (int) statusCode;

-(void) requestForAdditionalPhotos:(NSArray<FFImage *>*)selectedImages lockedImages:(NSArray<FFImage *>*)notDeselectable imageLimit:(int)imageLimit withCompletionHandler:(void (^)(NSArray<FFImage *>*))completionHandler;

@end

@interface Fujifilm_SPA_SDK_iOS : UIViewController

@property (assign) id <FujifilmSPASDKDelegate, NSObject> delegate;

typedef enum FFSDKStatusCode {
    kFFSDKStatusCodeFatal= 0,
    kFFSDKStatusCodeNoImagesUploaded= 1,
    kFFSDKStatusCodeNoInternet= 2,
    kFFSDKStatusCodeInvalidAPIKey= 3,
    kFFSDKStatusCodeUserCanceled= 4,
    kFFSDKStatusCodeoNoValidImages= 5,
    kFFSDKStatusCodeTimeout= 6,
    kFFSDKStatusCodeOrderComplete= 7,
    kFFSDKStatusCodeUploadFailed= 8,
    kFFSDKStatusCodeInvalidUserIDFormat= 9,
    kFFSDKStatusCodeInvalidPromoCodeFormat= 10,
    kFSSDKStatusCodeRequiresPhotoPermission= 11,
    kFSSDKStatusCodePartnerClosedSDK= 12
} FFSDKStatusCode;

typedef enum {
    kHome,
    kCart
} LaunchPage;

- (id)initWithApiKey:(NSString *)apiKey environment:(NSString*)environment images:(NSArray *)images userID:(NSString*)userid retainUserInfo:(BOOL)retainUserInfo promoCode:(NSString *)promoCode launchPage:(LaunchPage)initialPage extraOptions:(NSDictionary<NSString *, id>*)extraOptions;

-(void)closeSPASDK;
-(void)deleteCache;
@end

@interface FujifilmSPASDKNavigationController : UINavigationController

@end

@class FFOrder, FFLine, FFPage, FFAsset;

NS_ASSUME_NONNULL_BEGIN

@interface FFOrder : NSObject

@property (nonatomic, retain, readonly, getter=getOrderLines) NSArray<FFLine *> *lines;

+(nullable instancetype)order;
+(nullable instancetype)orderWithLines:(NSArray <FFLine *> *)lines;

-(nullable instancetype)init;
-(nullable instancetype)initWithLines:(NSArray <FFLine *> *)lines;

-(void)addLine:(FFLine *)line;
-(void)removeLine:(FFLine *)line;

@end

@interface FFLine : NSObject

@property (nonatomic, retain, readonly) NSString *productCode;
@property (nonatomic, retain, readonly, getter=getPages) NSArray<FFPage *> *pages;

+(nullable instancetype)lineWithProductCode:(NSString *)productCode;
+(nullable instancetype)lineWithProductCode:(NSString *)productCode pages:(NSArray<FFPage *> *)pages;

-(nullable instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithProductCode:(NSString *)productCode;
-(nullable instancetype)initWithProductCode:(NSString *)productCode pages:(NSArray<FFPage *> *)pages;

-(void)addPage:(FFPage *)page;
-(void)removePage:(FFPage *)page;

@end

@class FFAsset;

@interface FFPage : NSObject

@property (nonatomic, retain, readonly, getter=getPageAssets) NSArray<FFAsset *> *assets;

+(nullable instancetype)page;
+(nullable instancetype)pageWithAssets:(NSArray<FFAsset *> *)assets;

-(nullable instancetype)init;
-(nullable instancetype)initWithAssets:(NSArray<FFAsset *> *)assets;

-(void)addAsset:(FFAsset *)asset;
-(void)removeAsset:(FFAsset *)asset;

@end

typedef NS_ENUM(NSUInteger, FFAssetType) {
 FFAssetTypeImage = 1,
 FFAssetTypeText = 2
};

@interface FFAsset : NSObject

@property (nonatomic, retain, readonly) NSString *hiResImageURL;
@property (nonatomic, assign, readonly) FFAssetType type;

+(nullable instancetype)assetWithHiResImageURL:(NSString *)hiResImageURL;

-(nullable instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithHiResImageURL:(NSString *)hiResImageURL;

@end

@interface FFBrandingInfo : NSObject

@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *pressedTextColor;
@property (nonatomic, retain) UIColor *primaryBackgroundColor;
@property (nonatomic, retain) UIColor *pressedBackgroundColor;

+(nullable instancetype)brandingWithPrimaryTextColor:(UIColor*)primaryTextColor pressedTextColor:(UIColor*)pressedTextColor primaryBackgroundColor:(UIColor*)primaryBackgroundColor pressedBackgroundColor:(UIColor*)pressedBackgroundColor
 headerFontData:(NSData*)headerFontData;
-(nullable instancetype)init NS_UNAVAILABLE;

-(NSMutableDictionary *)getJsonObject;

@end

@interface FFImage: NSObject
- (instancetype) initWithPHAsset: (PHAsset *) phAsset;
- (instancetype) initWithNSURL: (NSURL *) url;
- (instancetype) initWithLocalPath: (NSURL *)url;


/**
 Gets the unique identifier for an FFImage which is set to the PHAsset's identifier or the NSURL's path and can be accessed by calling getUniqueIdentifier
 */
- (NSString *)getUniqueIdentifier;
@end
NS_ASSUME_NONNULL_END




