//
//  RootViewController.h
//  AppSales
//
//  Created by Ole Zorn on 30.06.11.
//  Copyright 2011 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FieldEditorViewController.h"

#define kAccountUsername					@"username"
#define kAccountPassword					@"password"
#define kAccountVendorID					@"vendorID"

@class ASAccount;

@interface AccountsViewController : UITableViewController <NSFetchedResultsControllerDelegate, UIAlertViewDelegate, FieldEditorViewControllerDelegate>
{
	NSArray *accounts;
	NSManagedObjectContext *managedObjectContext;
	ASAccount *selectedAccount;
	UIBarButtonItem *refreshButtonItem;
}

@property (nonatomic, retain) UIBarButtonItem *refreshButtonItem;
@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, retain) ASAccount *selectedAccount;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (void)reloadAccounts;
- (void)downloadReports:(id)sender;
- (NSString *)folderNameForExportingReportsOfAccount:(ASAccount *)account;
- (void)showSettings;
- (void)addNewAccount;
- (void)editAccount:(ASAccount *)account;
- (void)saveContext;

@end
