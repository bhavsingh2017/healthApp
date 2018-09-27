//
//  DetailViewController.h
//  BetterMe
//
//  Created by Bhav Singh on 9/27/18.
//  Copyright © 2018 Bhav Singh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BetterMe+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

