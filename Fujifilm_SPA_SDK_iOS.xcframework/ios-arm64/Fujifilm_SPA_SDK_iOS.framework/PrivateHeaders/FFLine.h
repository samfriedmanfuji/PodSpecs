//
//  FFLine.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Michael on 11/28/17.
//  Copyright © 2017 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fujifilm.SPA.SDK.h"

@class FFPage;

NS_ASSUME_NONNULL_BEGIN

@interface FFLine()


+(nullable instancetype)lineWithProductCode:(NSString *)productCode;
+(nullable instancetype)lineWithProductCode:(NSString *)productCode pages:(NSArray<FFPage *> *)pages;

-(nullable instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithProductCode:(NSString *)productCode;
-(nullable instancetype)initWithProductCode:(NSString *)productCode pages:(NSArray<FFPage *> *)pages;

-(void)addPage:(FFPage *)page;
-(void)removePage:(FFPage *)page;

@end

NS_ASSUME_NONNULL_END
