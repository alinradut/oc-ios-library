//
//  ownCloud.h
//  ownCloud
//
//  Created by Alin Radut on 2/24/23.
//  Copyright © 2023 ownCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ownCloud.
FOUNDATION_EXPORT double ownCloudVersionNumber;

//! Project version string for ownCloud.
FOUNDATION_EXPORT const unsigned char ownCloudVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ownCloud/PublicHeader.h>

#import <ownCloud/OCOAuth2Configuration.h>
#import <ownCloud/OCCommunication.h>
#import <ownCloud/OCConstants.h>
#import <ownCloud/OCCredentialsDto.h>
#import <ownCloud/OCCredentialsStorage.h>
#import <ownCloud/OCErrorMsg.h>
#import <ownCloud/OCFileDto.h>
#import <ownCloud/OCFrameworkConstants.h>
#import <ownCloud/OCShareUser.h>
#import <ownCloud/OCSharedDto.h>
#import <ownCloud/OCTrustedCertificatesStore.h>
