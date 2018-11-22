//
//  PersonListCollectionViewCell.h
//  MiAiApp
//
//  Created by 陈庆彪 on 2017/7/14.
//  Copyright © 2017年 陈庆彪. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface PersonListCollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) UIImageView *imgView;
@property(nonatomic,strong)PersonModel *personModel;

@end
