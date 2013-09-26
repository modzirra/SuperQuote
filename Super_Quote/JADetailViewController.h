//
//  JADetailViewController.h
//  Super_Quote
//
//  Created by Aimee on 9/25/13.
//  Copyright (c) 2013 Web Diggity. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JADetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
