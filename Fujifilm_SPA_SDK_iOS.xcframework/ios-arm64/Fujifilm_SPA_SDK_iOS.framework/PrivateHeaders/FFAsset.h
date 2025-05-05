//
//  FFAsset.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Michael on 11/28/17.
//  Copyright © 2017 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fujifilm.SPA.SDK.h"

NS_ASSUME_NONNULL_BEGIN


@interface FFAsset()

+(nullable instancetype)assetWithHiResImageURL:(NSString *)hiResImageURL;

-(nullable instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithHiResImageURL:(NSString *)hiResImageURL;

@end

NS_ASSUME_NONNULL_END
