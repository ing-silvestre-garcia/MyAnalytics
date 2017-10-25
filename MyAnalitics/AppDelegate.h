//
//  AppDelegate.h
//  MyAnalitics
//
//  Created by Silvestre Garcia on 10/25/17.
//  Copyright © 2017 silver. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@import UIKit;
@import Firebase;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [FIRApp configure];
    return YES;
}


@end

