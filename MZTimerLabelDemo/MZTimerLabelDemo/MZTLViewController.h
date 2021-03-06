//
//  MZTLViewController.h
//  MZTimerLabelDemo
//
//  Created by mines.chan on 16/10/13.
//  Copyright (c) 2013 MineS Chan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MZTimerLabel.h"

@interface MZTLViewController : UIViewController<MZTimerLabelDelegate>{
    MZTimerLabel *timerExample4;
    MZTimerLabel *timerExample5;
    MZTimerLabel *timerExample6;
    MZTimerLabel *timerExample7;
    MZTimerLabel *timerExample8;
}

/*Controls for Example 1*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample1;


/*Controls for Example 3*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample3;


/*Controls and Methods for Example 4*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample4;
@property (weak, nonatomic) IBOutlet UIButton *btnStartPauseExample4;
- (IBAction)startOrResumeStopwatch:(id)sender;
- (IBAction)resetStopWatch:(id)sender;


/*Controls and Methods for Example 5*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample5;
@property (weak, nonatomic) IBOutlet UIButton *btnStartPauseExample5;
- (IBAction)startOrResumeCountDown:(id)sender;
- (IBAction)resetCountDown:(id)sender;


/*Controls and Methods for Example 6*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample6;
@property (weak, nonatomic) IBOutlet UIButton *btnStartCountdownExample6;
- (IBAction)startCountDownWithDelegate:(id)sender;


/*Controls and Methods for Example 7*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample7;
@property (weak, nonatomic) IBOutlet UIButton *btnStartCountdownExample7;
- (IBAction)startCountDownWithBlock:(id)sender;

/*Controls and Methods for Example 8*/
@property (weak, nonatomic) IBOutlet UILabel *lblTimerExample8;
@property (weak, nonatomic) IBOutlet UIButton *btnStartCountdownExample8;
- (IBAction)startStopWatchWithProgressDelegate:(id)sender;
@end
