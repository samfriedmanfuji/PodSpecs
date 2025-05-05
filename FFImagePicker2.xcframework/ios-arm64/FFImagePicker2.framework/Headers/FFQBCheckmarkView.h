//
//  FFQBCheckmarkView.h
//  FFQBImagePicker
//
//  Created by Katsuma Tanaka on 2015/04/03.
//  Copyright (c) 2015 Katsuma Tanaka. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface FFQBCheckmarkView : UIView

@property (nonatomic, assign) IBInspectable CGFloat borderWidth;
@property (nonatomic, assign) IBInspectable CGFloat checkmarkLineWidth;
@property (nonatomic, assign) IBInspectable BOOL includeShadow;

@property (nonatomic, strong) IBInspectable UIColor *borderColor;
@property (nonatomic, strong) IBInspectable UIColor *bodyColor;
@property (nonatomic, strong) IBInspectable UIColor *checkmarkColor;
- (void) setBrandingWithBodyColor:(UIColor *)bodyColor textColor:(UIColor *)textColor lineWidth:(CGFloat)lineWidth includeBorder:(BOOL)includeBorder includeShadow:(BOOL)includeShadow;

@end
