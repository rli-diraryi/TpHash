#import <Foundation/Foundation.h>

@interface TpHash : NSObject

+ (uint64_t)ptHash:(UIImage*)image;  //生成64位的图像Hash
+ (int)hamdist:(uint64_t)x with:(uint64_t) y;  //比较两个Hash值的汉明距离
+ (UIImage *)scaleImage:(UIImage *)image toSize:(CGSize)newSize;
+ (uint8_t *) convertToGreyscale64Array:(UIImage *)i;
@end
