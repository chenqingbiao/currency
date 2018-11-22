//
//  TableViewCell.h
//  UniversalApp
//
//  Created by 陈庆彪 on 2017/8/1.
//  Copyright © 2017年 陈庆彪. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellModel.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic,strong) CellModel * model;
@end
