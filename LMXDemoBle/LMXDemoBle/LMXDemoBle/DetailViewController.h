//
//  DetailViewController.h
//  LMXDemoBle
//
//  Created by Hoan on 2014-09-20.
//  Copyright (c) 2014 I-SYST inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
