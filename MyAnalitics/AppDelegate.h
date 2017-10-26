//
//  AppDelegate.h
//  MyAnalitics
//
//  Created by Silvestre Garcia on 10/25/17.
//  Copyright © 2017 silver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@import Firebase;
@import GoogleSignIn;

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate>
@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

