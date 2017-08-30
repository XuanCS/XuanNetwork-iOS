//
//  SCCreatePostViewController.h
//  SocialDemo
//
//  Created by LuXuan on 8/24/17.
//  Copyright © 2017 LuXuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

