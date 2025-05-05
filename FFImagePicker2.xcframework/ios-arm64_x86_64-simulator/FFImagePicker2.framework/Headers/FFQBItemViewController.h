//
//  FFQBItemViewController.h
//  FFQBImagePicker
//
//  Created by Owen Hart on 1/31/16.
//  Copyright © 2016 Katsuma Tanaka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FFQBImagePickerController;
@class FFQBItemCell;
@interface FFQBItemViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

@property (nonatomic, assign) BOOL disableScrollToBottom;
@property (nonatomic, weak) FFQBImagePickerController *imagePickerController;
@property (nonatomic, strong) NSIndexPath *lastSelectedItemIndexPath;

- (BOOL)isAutoDeselectEnabled;
- (BOOL)isMinimumSelectionLimitFulfilled;
- (BOOL)isMaximumSelectionLimitReached;

- (NSObject *)objectForItemAtIndex:(NSUInteger)index;
- (UIImage *)thumbnailForItem:(NSObject *)item;
- (void)loadThumbnailCell:(FFQBItemCell *)cell withItem:(NSObject *)item atIndexPath:(NSIndexPath *)indexPath;
- (BOOL)showsVideoIconForItem:(NSObject *)item;
- (BOOL)showsSlowMoIconForItem:(NSObject *)item;
- (NSTimeInterval)durationForItem:(NSObject *)item;
- (NSUInteger)numberOfImages;
- (NSUInteger)numberOfVideos;

@end
