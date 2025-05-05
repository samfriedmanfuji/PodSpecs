//
//  QBVideoIndicatorView.h
//  FFQBImagePicker
//
//  Created by Katsuma Tanaka on 2015/04/04.
//  Copyright (c) 2015 Katsuma Tanaka. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FFQBVideoIconView.h"
#import "FFQBSlomoIconView.h"

@interface FFQBVideoIndicatorView : UIView

@property (nonatomic, weak) UILabel *timeLabel;
@property (nonatomic, weak) FFQBVideoIconView *videoIcon;
@property (nonatomic, weak) FFQBSlomoIconView *slomoIcon;


@end
