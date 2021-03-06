//
//  ManageCookiesStorageDB.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 10/07/14.
//

/*
 Copyright (C) 2016, ownCloud GmbH.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@class CookiesStorageDto;
@class UserDto;

@interface ManageCookiesStorageDB : NSObject

//-----------------------------------
/// @name insertCookie
///-----------------------------------

/**
 * Method to insert a cookie on the Database
 *
 * @param CookiesStorageDto -> cookie
 *
 */
+ (void) insertCookie:(CookiesStorageDto *) cookie;

//-----------------------------------
/// @name getCookiesByUser
///-----------------------------------

/**
 * Method to return the list of cookies of a user
 *
 * @param UserDto -> user
 *
 * @return NSMutableArray -> output
 */
+ (NSMutableArray *) getCookiesByUser:(UserDto *) user;

//-----------------------------------
/// @name deleteCookiesByUser
///-----------------------------------

/**
 * Method delete the cookies of a user
 *
 * @param UserDto -> user
 *
 */
+ (void) deleteCookiesByUser:(UserDto *) user;

@end
