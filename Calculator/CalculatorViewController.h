//
//  CalculatorViewController.h
//  Calculator
//
//  Created by artuser on 5/27/14.
//  Copyright (c) 2014 Gentry. All rights reserved.
//

#import <UIKit/UIKit.h>
int method;
int selectnumber;
float runningtotal;
@interface CalculatorViewController : UIViewController
{
    IBOutlet UILabel *Screen;

}
-(IBAction) number1 : (id) sender;
-(IBAction) number2 : (id) sender;
-(IBAction) number3 : (id) sender;
-(IBAction) number4 : (id) sender;
-(IBAction) number5 : (id) sender;
-(IBAction) number6 : (id) sender;
-(IBAction) number7 : (id) sender;
-(IBAction) number8 : (id) sender;
-(IBAction) number9 : (id) sender;
-(IBAction) number0 : (id) sender;
-(IBAction) times : (id) sender;
-(IBAction) divide : (id) sender;
-(IBAction) sub : (id) sender;
-(IBAction) add : (id) sender;
-(IBAction) equals : (id) sender;
-(IBAction) AC : (id) sender;


@end
