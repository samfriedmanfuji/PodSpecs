//
//  FFImage.h
//  Fujifilm_SPA_SDK_iOS
//
//  Copyright (c) 2012 FUJIFILM North America Corp. All rights reserved.

#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/Photos.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "Fujifilm.SPA.SDK.h"

typedef NS_ENUM(NSUInteger, FFUploadStatus) {
    FFUploadNotStarted = 0,
    FFUploadComplete = 1,
    FFUploadInProgress = 2,
    FFUploadFailed = 3,
};

typedef NS_ENUM(NSInteger, FFImageType) {
    kImageTypePHAsset = 1,
    kImageTypeALAsset,
    kImageTypePublicUrl,
    kImageTypePublicUrlWithAuthorizationHeader,
    KImageTypeNotSupported,
    KImageTypeUnknown,
    kImageTypeLocalPath
};

//@interface FFImage: NSObject <NSCopying>{
@interface FFImage() {
    id image;
    bool isValidImage;
    NSString *url;
    int uploadTryCount;
    FFImageType imageType;
    NSString *imageSource;
    FFUploadStatus uploadStatus;
    int width;
    int height;
    int index;
}

//-(id) copyWithZone: (NSZone *) zone;

- (instancetype) initWithPHAsset: (PHAsset *) phAsset;
- (instancetype) initWithALAsset: (ALAsset *) alAsset;
- (instancetype) initWithNSURL: (NSURL *) url;
- (instancetype) initWithNSURL: (NSURL *) url authroizationHeader: (NSString *) authHeader;
- (instancetype) initWithLocalPath: (NSURL *)url;
- (instancetype) initWithUniqueIdentifier: (NSString *) uniqueIdentifier;

+ (instancetype) imageWithPHAsset: (PHAsset *) phASset;
+ (instancetype) imageWithALAsset: (ALAsset *) alAsset;
+ (instancetype) imageWithNSURL: (NSURL *) url;
+ (instancetype) imageWithNSURL: (NSURL *) url authorizationHeader: (NSString *) authHeader;
+ (instancetype) imageWithLocalPath: (NSURL *) url;
+ (instancetype) imageWithUniqueIdentifier: (NSString *) uniqueIdentifier;

+(BOOL) localImageExists:(NSString *)localPath;
+(NSString *) getPretaggedImagePath:(NSString *)localPath;
+ (int) ConvertToDegreesWith:(UIImageOrientation) imageOrientation;

- (void) updateCloudImageDimensionsUsingImageData:(NSData*) imageData;
- (UIImage *)getUIImage;
- (NSString *)getUniqueIdentifier;
@property (nonatomic) BOOL active;
@property (nonatomic, strong) id image;
@property (nonatomic, assign) FFUploadStatus uploadStatus;
@property (nonatomic, assign) FFImageType imageType;
@property (nonatomic) NSString *imageSource;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString* authorizationHeader;
@property (nonatomic, assign)  bool isValidImage;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (assign) int uploadTryCount;
@property (assign) int orientation;
@property (assign) int index;
@property (assign) Boolean isInCloud;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSNumber *orderBy;
@property (assign) Boolean isCustomIdentifier;
@property (assign) Boolean generatedThumbnail;
@property (nonatomic, retain) NSString* checksum;
@property (assign) bool isHeicFormat;
@property (nonatomic) NSMutableArray<NSString*>* userImageSets;


@end
