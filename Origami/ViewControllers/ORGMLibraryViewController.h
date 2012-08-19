//
//  ORGMLibraryViewController.h
//  Origami
//
//  Created by ap4y on 8/16/12.
//
//

#import <UIKit/UIKit.h>

typedef enum : NSInteger {
    ORGMLibraryControllerTrack,
    ORGMLibraryControllerArtist,    
    ORGMLibraryControllerAlbum,
    ORGMLibraryControllerGenre
} ORGMLibraryControllerType;

@interface ORGMLibraryViewController : UIViewController
@property (assign, nonatomic) ORGMLibraryControllerType controllerType;
@end