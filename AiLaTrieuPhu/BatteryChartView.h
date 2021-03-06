//
//  ChartView.h
//  ChartView
//
//  Created by star  on 9/18/12.
//  Copyright (c) 2012 star . All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef ChartView_CV_Config_h
#define ChartView_CV_Config_h

#define COLUMN_W_SCALE 1.3 //设定列的宽比例，推荐不要修改
#define MARGIN_LEFT 40 //左边界这个数字越大，整个图就x坐标集体往右越多
#define MARGIN_BOTTOM 70  //边缘的底部:这个数字越大，整个图就y坐标集体往上越多
#define SHOW_SCALE_NUM 5  //显示比例数字：这个数字越大，柱子就越长

typedef enum {
    
    
    REDChartType,//这种类型，只传一个数组，默认为红色
    
    GRChartType,//这种类型，只传两个数组，默认为上白下绿,只传1个数组，默认为白
    
    
} ChartType;

#endif

@interface BatteryChartView : UIView{
	//标题数据
	NSArray *chartTitle;
	//柱状图组数据
	NSArray *groupData;
    //Ｘ轴标签最下面的（200X）
    NSArray *xAxisLabel;
	
	//最大值，最小值, 列宽度,比率,高比率，边宽
	float maxValue,minValue,columnWidth,maxScaleValue,maxScaleHeight,sideWidth;
	
	ChartType chartType; //类型
    
    int baseGroundY;
    int baseGroundX;
}

@property(strong, nonatomic) NSArray *chartTitle;
@property(strong, nonatomic) NSArray *groupData;
@property(strong, nonatomic) NSArray *xAxisLabel;
@property(assign) ChartType chartType;

- (id)initWithFrame:(CGRect)frame withArrary:(NSDictionary*)dic_ withType:(ChartType)type_;
@end
