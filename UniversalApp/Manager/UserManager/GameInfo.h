//
//  GameInfo.h
//  MiAiApp
//
//  Created by 陈庆彪 on 2017/5/31.
//  Copyright © 2017年 陈庆彪. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameInfo : NSObject

@property(nonatomic,assign) long long gold_coin;//金币数
@property(nonatomic,assign) long long flow;//流量币
@property(nonatomic,assign) long long growth_value;//成长值
@property (nonatomic,assign) NSInteger  level;//用户等级
@property(nonatomic,assign) long long cash;//现金

@end
