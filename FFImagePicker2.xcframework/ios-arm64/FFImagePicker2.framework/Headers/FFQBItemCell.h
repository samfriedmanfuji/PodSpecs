//
//  QBItemCell.h
//  FFQBImagePicker
//
//  Created by Katsuma Tanaka on 2015/04/03.
//  Copyright (c) 2015 Katsuma Tanaka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FFQBVideoIndicatorView;
@class FFQBCheckmarkView;

@interface FFQBItemCell : UICollectionViewCell

@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) FFQBVideoIndicatorView *videoIndicatorView;
@property (weak, nonatomic) UIView *overlayView;
@property (weak, nonatomic) UIView *disabledView;

@property (weak, nonatomic) FFQBCheckmarkView *checkView;
@property (nonatomic, assign) BOOL showsOverlayViewWhenSelected;
@property (nonatomic, assign) BOOL shrinkSelected;


// SAMF: the following NSLayoutConstraint properties MUST be declared as strong
@property (nonatomic, strong) NSLayoutConstraint *ivWidth;
@property (nonatomic, strong) NSLayoutConstraint *ivHeight;
@property (nonatomic, strong) NSLayoutConstraint *ivSelectedWidth;
@property (nonatomic, strong) NSLayoutConstraint *ivSelectedHeight;


- (void) setBrandingWithBodyColor:(UIColor *)bodyColor textColor:(UIColor *)textColor lineWidth:(CGFloat)lineWidth includeBorder:(BOOL)includeBorder includeShadow:(BOOL)includeShadow shrinkSelected:(BOOL)shrinkSelected;
- (void) animateShrinkGrow;
@end
