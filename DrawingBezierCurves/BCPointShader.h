//
//  BCPointShader.h
//  DrawingBezierCurves
//
//  Created by Bartosz Ciechanowski on 15.02.2014.
//  Copyright (c) 2014 Bartosz Ciechanowski. All rights reserved.
//

#import "BCShader.h"

@interface BCPointShader : BCShader

@property (nonatomic) GLint viewProjectionMatrixUniform;
@property (nonatomic) GLint texSamplerUniform;


@end
