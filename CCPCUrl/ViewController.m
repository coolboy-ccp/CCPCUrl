//
//  ViewController.m
//  CCPCUrl
//
//  Created by 储诚鹏 on 2018/12/11.
//  Copyright © 2018 储诚鹏. All rights reserved.
//

#import "ViewController.h"
#include "CUrl/CurlRequests.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
  //  requestGet("https://www.baidu.com");
    requestGet("https://passport.lrlz.com/mobile/index.php?act=special&from=YWN0PW1lbWJlcl90YWxrJm9wPXRhbGtz&op=index&special_id=0");
    // Do any additional setup after loading the view, typically from a nib.
}


@end
