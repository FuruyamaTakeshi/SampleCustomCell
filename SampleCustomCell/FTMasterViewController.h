//
//  FTMasterViewController.h
//  SampleCustomCell
//
//  Created by 古山 健司 on 2014/02/25.
//  Copyright (c) 2014年 古山 健司. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FTDetailViewController;

#import <CoreData/CoreData.h>

@interface FTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) FTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
