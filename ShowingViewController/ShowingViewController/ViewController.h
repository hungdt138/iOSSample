//
//  ViewController.h
//  ShowingViewController
//
//  Created by Do Tien Hung on 7/9/14.
//  Copyright (c) 2014 Do Tien Hung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *txtText;
@property (strong, nonatomic) IBOutlet UILabel *lblText;
- (IBAction)Clickme:(id)sender;
- (IBAction)ShowNewView:(id)sender;


@end
