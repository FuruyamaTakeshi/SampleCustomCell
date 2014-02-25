//
//  CustomCell.h
//  SampleCustomCell
//
//  Created by 古山 健司 on 2014/02/25.
//  Copyright (c) 2014年 古山 健司. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol CustomCellDelegate
- (void)cellButtonDidPush:(id)sender;
@end
@interface CustomCell : UITableViewCell
@property (nonatomic) id<CustomCellDelegate> delegate;
@property (weak, nonatomic) IBOutlet UILabel *customCellLabel;
@property (weak, nonatomic) IBOutlet UIButton *button;

@end
