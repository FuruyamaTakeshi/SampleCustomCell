//
//  FTDetailViewController.h
//  SampleCustomCell
//
//  Created by 古山 健司 on 2014/02/25.
//  Copyright (c) 2014年 古山 健司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
