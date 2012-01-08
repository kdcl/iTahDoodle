//
//  BNRAppDelegate.h
//  iTahDoodle
//
//  Created by Cheng MingChun on 12/1/8.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate>
{
  UITableView *taskTable;
  UITextField *taskField;
  UIButton *insertButton;
  
  NSMutableArray *tasks;
}

-(void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
