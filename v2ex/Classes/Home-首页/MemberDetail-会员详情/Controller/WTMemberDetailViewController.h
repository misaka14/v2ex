//
//  WTMemberDetailViewController.h
//  v2ex
//
//  Created by gengjie on 16/8/23.
//  Copyright © 2016年 无头骑士 GJ. All rights reserved.
//

#import "YZPersonViewController.h"
@class WTTopicDetailViewModel, WTTopic;
@interface WTMemberDetailViewController : YZPersonViewController

@property (nonatomic, strong) WTTopicDetailViewModel *topicDetailVM;

@property (nonatomic, strong) WTTopic                *topic;

@end
