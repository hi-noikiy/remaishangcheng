//
// Created by Dawei on 9/23/16.
// Copyright (c) 2016 Enation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseViewController.h"


@interface MyOrderDeliveryViewController : BaseViewController<UITableViewDelegate, UITableViewDataSource>

@property (assign, nonatomic) NSInteger orderId;

@end