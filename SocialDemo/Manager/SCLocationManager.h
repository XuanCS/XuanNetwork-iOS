//
//  SCLocationManager.h
//  SocialDemo
//
//  Created by LuXuan on 8/22/17.
//  Copyright © 2017 LuXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
