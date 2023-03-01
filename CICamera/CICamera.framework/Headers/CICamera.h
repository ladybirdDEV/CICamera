//
//  CICamera.h
//  CICamera
//
//  Created by daben on 2023/2/20.
//

#import <Foundation/Foundation.h>

#if __has_include(<CICamera/CICamera.h>)
//! Project version number for CICamera.
FOUNDATION_EXPORT double CICameraVersionNumber;

//! Project version string for CICamera.
FOUNDATION_EXPORT const unsigned char CICameraVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CICamera/PublicHeader.h>

#import <CICamera/CICameraManager.h>
#import <CICamera/CIGalleryManager.h>
#else
#import "CICameraManager.h"
#import "CIGalleryManager.h"
#endif


