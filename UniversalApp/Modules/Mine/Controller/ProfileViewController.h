//
//  ProfileViewController.h
//  MiAiApp
//
//  Created by 陈庆彪 on 2017/6/14.
//  Copyright © 2017年 陈庆彪. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 个人资料
 */
@interface ProfileViewController : RootViewController

@property (nonatomic, strong) UIImage *headerImage;
@property(nonatomic,assign) BOOL isTransition;//是否开启转场动画

@end
