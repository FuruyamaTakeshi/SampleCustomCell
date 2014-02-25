//
//  CustomCell.m
//  SampleCustomCell
//
//  Created by 古山 健司 on 2014/02/25.
//  Copyright (c) 2014年 古山 健司. All rights reserved.
//

#import "CustomCell.h"

@implementation CustomCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (IBAction)buttonDidPush:(id)sender
{
    [self.delegate cellButtonDidPush:sender];
}

@end
