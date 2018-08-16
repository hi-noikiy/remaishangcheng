//
// Created by Dawei on 3/18/16.
// Copyright (c) 2016 Enation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^SortViewBlock)(NSInteger index);

@interface StoreSortView : UIView

@property(strong, nonatomic) UIButton *gridList;

- (instancetype)initWithFrame:(CGRect)frame sortBlock:(SortViewBlock)sortHandle;

- (void)addEvent:(id)target action:(SEL)action;

@end