//
//  FFPage.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Michael on 11/28/17.
//  Copyright © 2017 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fujifilm.SPA.SDK.h"

NS_ASSUME_NONNULL_BEGIN

@class FFAsset;

@interface FFPage ()

+(nullable instancetype)page;
+(nullable instancetype)pageWithAssets:(NSArray<FFAsset *> *)assets;

-(nullable instancetype)init;
-(nullable instancetype)initWithAssets:(NSArray<FFAsset *> *)assets;

-(void)addAsset:(FFAsset *)asset;
-(void)removeAsset:(FFAsset *)asset;

@end

NS_ASSUME_NONNULL_END
