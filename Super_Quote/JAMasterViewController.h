//
//  JAMasterViewController.h
//  Super_Quote
//
//  Created by Aimee on 9/25/13.
//  Copyright (c) 2013 Web Diggity. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JADetailViewController;

#import <CoreData/CoreData.h>

@interface JAMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) JADetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
