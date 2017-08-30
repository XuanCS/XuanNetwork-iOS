//
//  SCPostDetailViewController.h
//  SocialDemo
//
//  Created by LuXuan on 8/27/17.
//  Copyright © 2017 LuXuan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
