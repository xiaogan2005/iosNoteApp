//
//  TableViewController.h
//  firstAppFromApple
//
//  Created by GuoRui on 9/29/15.
//  Copyright © 2015 GuoRui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListViewController : UITableViewController
//MARK: function
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;
- (void)loadInitialData;


//MARK: property

@property NSMutableArray *toDoItems;
@end
