//
//  FFBrandingInfo.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Sam Friedman on 5/24/19.
//  Copyright © 2019 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
#import "Fujifilm.SPA.SDK.h"


NS_ASSUME_NONNULL_BEGIN
static NSString* const kBrandingKeyButtonStyles = @"buttonStyles";
static NSString* const kBrandingKeyPressedState = @"pressedState";
static NSString* const kBrandingKeyNormalState = @"normalState";
static NSString* const kBrandingKeyTextColor = @"textColor";
static NSString* const kBrandingKeyBackgroundColor = @"backgroundColor";
@interface FFBrandingInfo()

@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) NSData *headerFontData;
@property (nonatomic, retain) UIFont *headerFont;

@property (nonatomic, assign) CGFloat checkmarkLineWidth;
@property (nonatomic, assign) BOOL includeCheckmarkBorder;
@property (nonatomic, assign) BOOL includeCheckmarkShadow;
@property (nonatomic, assign) BOOL shrinkSelected;
@property (nonatomic, assign) BOOL flatButtons;
@property (nonatomic, assign) BOOL pillButtons;





+(nullable instancetype)brandingWithPrimaryTextColor:(UIColor*)primaryTextColor pressedTextColor:(UIColor*)pressedTextColor primaryBackgroundColor:(UIColor*)primaryBackgroundColor pressedBackgroundColor:(UIColor*)pressedBackgroundColor
    headerFontData:(NSData*)headerFontData;

-(nullable instancetype)init NS_UNAVAILABLE;

+(UIColor *) getGradientEndColorForStartColor:(UIColor *)startColor;

-(void) styleImagePickerWithHighlightColor:(UIColor*)highlightColor checkmarkLineWidth:(CGFloat)checkmarkLineWidth  checkmarkBorder:(BOOL)includeCheckmarkBorder checkmarkShadow:(BOOL)includeCheckmarkShadow shrinkSelected:(BOOL) shrinkSelected flatButtons:(BOOL)flatButtons pillButtons:(BOOL)pillButtons;
-(NSMutableDictionary *)getJsonObject;

@end

NS_ASSUME_NONNULL_END
