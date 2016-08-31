//
//  ViewController.h
//  ResizeView
//
//  Created by Ryan Tang on 12-11-20.
//  Copyright (c) 2012年 Ericsson Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *userNameText;
@property (weak, nonatomic) IBOutlet UITextField *passwordText;

@end
