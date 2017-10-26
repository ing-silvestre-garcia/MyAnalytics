//
//  ViewController.m
//  MyAnalitics
//
//  Created by Silvestre Garcia on 10/25/17.
//  Copyright © 2017 silver. All rights reserved.
//

#import "Home.h"

@interface Home ()

@end

@implementation Home

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    // TODO(developer) Configure the sign-in button look/feel
    // ...
    // Do any additional setup after loading the view, typically from a nib.
    
    //    [FIRAnalytics logEventWithName:kFIREventSelectContent
    //                        parameters:@{
    //                                     kFIRParameterItemID:[NSString stringWithFormat:@"Home"],
    //                                     kFIRParameterItemName:@"TitleHome"
    //                                     }];
    
    
}

- (void)viewWillAppear:(BOOL)animated{
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)btnSignInPressed:(id)sender {
    [GIDSignIn sharedInstance].uiDelegate = self;
    [[GIDSignIn sharedInstance] signIn];
}
@end
