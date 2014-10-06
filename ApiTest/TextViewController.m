//
//  TextViewController.m
//  ApiTest
//
//  Created by Kranthi Kumar on 15/09/14.
//  Copyright (c) 2014 unknown. All rights reserved.
//

#import "TextViewController.h"///heheehehahahgehegehe

@interface TextViewController ()
@property (weak, nonatomic) IBOutlet UITextView *textView;


@end

@implementation TextViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    self.textView.text=self.tempData2;
    [super viewDidLoad];
    NSLog(@"In master copy");
    NSLog(@"In temporary copy1");//gdfd
    


	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
