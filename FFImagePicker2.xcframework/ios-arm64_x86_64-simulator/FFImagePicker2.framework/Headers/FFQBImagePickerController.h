//
//  FFQBImagePickerController.h
//  QBImagePicker
//
//  Created by Katsuma Tanaka on 2015/04/03.
//  Copyright (c) 2015 Katsuma Tanaka. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

@class FFQBImagePickerController;

@protocol FFQBImagePickerControllerDelegate <NSObject>

@optional
- (void)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController didFinishPickingItems:(NSArray *)items;
- (void)qb_imagePickerControllerDidCancel:(FFQBImagePickerController *)imagePickerController;

- (BOOL)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController shouldEnableItem:(NSObject *)item;
- (BOOL)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController shouldSelectItem:(NSObject *)item;
- (BOOL)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController shouldDeselectItem:(NSObject *)item;
- (void)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController didSelectItem:(NSObject *)item;
- (void)qb_imagePickerController:(FFQBImagePickerController *)imagePickerController didDeselectItem:(NSObject *)item;
@end

typedef NS_ENUM(NSUInteger, QBImagePickerMediaType) {
    FFQBImagePickerMediaTypeAny = 0,
    FFQBImagePickerMediaTypeImage,
    FFQBImagePickerMediaTypeVideo,
};

@interface FFQBImagePickerController : UIViewController

@property (nonatomic, strong) NSBundle *assetBundle;

@property (nonatomic, weak) id<FFQBImagePickerControllerDelegate> delegate;

@property (nonatomic, strong, readonly) NSMutableOrderedSet *selectedItems;
@property (nonatomic, strong) UICollectionViewController *assetsVC;

@property (nonatomic, copy) NSArray *assetCollectionSubtypes;
@property (nonatomic, copy) NSArray *assetMediaSubtypes;
@property (nonatomic, assign) BOOL excludeEmptyAlbums;
@property (nonatomic, assign) BOOL includeRecentlyDeletedAlbum;
@property (nonatomic, assign) QBImagePickerMediaType mediaType;

@property (nonatomic, assign) BOOL allowsMultipleSelection;
@property (nonatomic, assign) NSUInteger minimumNumberOfSelection;
@property (nonatomic, assign) NSUInteger maximumNumberOfSelection;

@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, assign) BOOL showsNumberOfSelectedItems;

@property (nonatomic, assign) NSUInteger numberOfColumnsInPortrait;
@property (nonatomic, assign) NSUInteger numberOfColumnsInLandscape;

@property (nonatomic, copy) NSString *maxImagesMessage;
@property (nonatomic, retain) NSString *unsupportedImageMessage;

@property (nonatomic, assign) UIColor *textColor;
@property (nonatomic, assign) UIColor *backgroundColor;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) BOOL includeBorder;
@property (nonatomic, assign) BOOL includeShadow;
@property (nonatomic, assign) BOOL shrinkSelected;
@property (nonatomic, retain) UIFont *headerFont;

- (void) setBrandingWithBodyColor:(UIColor *)bodyColor textColor:(UIColor *)textColor lineWidth:(CGFloat)lineWidth includeBorder:(BOOL)includeBorder includeShadow:(BOOL)includeShadow shrinkSelected:(BOOL)shrinkSelected headerFont:(UIFont *)headerFont;

- (void)segueToView;
- (void)setSelectedItemsWithIDs:(NSArray<NSString *>*)ids;
- (UINavigationController *)createPickerNavigation;
- (void) dismissPicker;


+(UIImage *) getBrokenImage;
+(UIImage *) getUnselectableImageOverlay;
@end
