//================================================================================
//
// (c) Copyright China Digital Video (Beijing) Limited, 2022. All rights reserved.
//
// This code and information is provided "as is" without warranty of any kind,
// either expressed or implied, including but not limited to the implied
// warranties of merchantability and/or fitness for a particular purpose.
//
//--------------------------------------------------------------------------------
//   Birth Date:    Mar 21. 2022
//   Author:        NewAuto video team
//================================================================================
#pragma once

#import <Foundation/Foundation.h>
#import "NvsCommonDef.h"

/*! \cond */

/*! \if ENGLISH
 *  \brief Type of convertor error
 *  \else
 *  \brief 转码错误
 *  \endif
*/
typedef enum {
    NvsPassthroughConvertorErrorType_NoError = 0,                   //!< \if ENGLISH no error \else 没有错误 \endif
    NvsPassthroughConvertorErrorType_Cancled,                       //!< \if ENGLISH task is canceled \else 当前任务已经取消 \endif
    NvsPassthroughConvertorErrorType_ProcessVideoError,             //!< \if ENGLISH process video error \else 输出视频帧失败 \endif
    NvsPassthroughConvertorErrorType_ProcessAudioError,             //!< \if ENGLISH process audio error \else 输出音频帧失败 \endif
    NvsPassthroughConvertorErrorType_InvalidData,                   //!< \if ENGLISH invalid data error \else 无效参数 \endif
    NvsPassthroughConvertorErrorType_IO,                            //!< \if ENGLISH input/output error \else IO错误 \endif
    NvsPassthroughConvertorErrorType_UnkownError = 65535            //!< \if ENGLISH task has unknown error \else 出现没有定义的错误 \endif
} NvsPassthroughConvertorErrorType;

@protocol NvsPassthroughConvertorDelegate<NSObject>

- (void)didConvertorProgress:(int64_t)taskId progress:(float)progress;

- (void)didConvertorFinish:(int64_t)taskId sourceFile:(NSString*)src outputFile:(NSString*)dst trimIn:(int64_t)trimIn trimOut:(int64_t)trimOut errorCode:(NvsPassthroughConvertorErrorType)error;

@end


NVS_EXPORT @interface NvsPassthroughConvertor : NSObject

@property (nonatomic, weak) id<NvsPassthroughConvertorDelegate> delegate;

- (instancetype)init;

- (int64_t)convertMediaFile:(NSString *)srcFilePath
                          outputFile:(NSString *)outputFilePath
                          trimIn:(int64_t)trimIn
                          trimOut:(int64_t)trimOut
                          options:(NSMutableDictionary *)options;

- (void)cancelTask:(int64_t)taskId;

@end
/*! \endcond */

