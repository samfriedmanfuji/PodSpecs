//
//  AddMorePhotosSortMap.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by Sam Friedman on 1/21/20.
//  Copyright © 2020 ___Jnick___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AddMorePhotosSection : NSObject

@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger year;
@property (nonatomic) NSMutableArray<NSString *> *contentTokens;
@property (nonatomic) NSString* dateString;
-(instancetype) initWithMonth:(NSInteger)month Year:(NSInteger)year;
-(void) addContentToken:(NSString *)contentToken;

@end

@interface AddMorePhotosSortMap : NSObject
@property (nonatomic) NSMutableDictionary<NSNumber*, NSMutableArray<AddMorePhotosSection*>*> *map;
@property (nonatomic) NSMutableSet<NSString*> *allContentTokens;
-(instancetype)initWithSortTypes:(NSArray<NSNumber*>*)sortTypes;
-(void) addContentToken:(NSString*)contentToken withDate:(NSDate *)date toSortType:(NSNumber *)sortType;
-(NSString *)getContentTokenForSortType:(NSNumber*)sortType IndexPath:(NSIndexPath*)indexPath;
-(NSIndexPath *)getIndexPathForSortType:(NSNumber*)sortType ContentToken:(NSString *)contentToken;
-(NSInteger)numberOfSectionsForSortType:(NSNumber*)sortType;
-(NSInteger)numberOfItemsForSortType:(NSNumber *)sortType inSection:(NSInteger)section;
@end

NS_ASSUME_NONNULL_END
