//
//  SCHomeTableViewCell.h
//  SocialDemo
//
//  Created by LuXuan on 8/22/17.
//  Copyright © 2017 LuXuan. All rights reserved.
//


#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end

