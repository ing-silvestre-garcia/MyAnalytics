//
//  ViewController.h
//  MyAnalitics
//
//  Created by Silvestre Garcia on 10/25/17.
//  Copyright © 2017 silver. All rights reserved.
//
#import <UIKit/UIKit.h>

@import Firebase;
@import GoogleSignIn;

@interface Home : UIViewController<GIDSignInUIDelegate>
- (IBAction)btnSignInPressed:(id)sender;

@end

