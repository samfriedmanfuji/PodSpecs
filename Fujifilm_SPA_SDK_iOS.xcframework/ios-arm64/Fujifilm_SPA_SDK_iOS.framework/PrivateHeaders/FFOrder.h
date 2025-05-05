//
//  FFOrder.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Michael on 11/28/17.
//  Copyright © 2017 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fujifilm.SPA.SDK.h"

NS_ASSUME_NONNULL_BEGIN

@class FFLine;

@interface FFOrder ()

+(nullable instancetype)order;
+(nullable instancetype)orderWithLines:(NSArray <FFLine *> *)lines;

-(nullable instancetype)init;
-(nullable instancetype)initWithLines:(NSArray <FFLine *> *)lines;

-(void)addLine:(FFLine *)line;
-(void)removeLine:(FFLine *)line;

@end

NS_ASSUME_NONNULL_END
