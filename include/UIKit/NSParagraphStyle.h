//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#ifndef _NSPARAGRAPHSTYLE_H_
#define _NSPARAGRAPHSTYLE_H_

enum {
    NSLineBreakByWordWrapping,
    NSLineBreakByCharWrapping,
    NSLineBreakByClipping,
    NSLineBreakByTruncatingHead,
    NSLineBreakByTruncatingTail,
    NSLineBreakByTruncatingMiddle
};
typedef uint32_t NSLineBreakMode;

@interface NSParagraphStyle : NSObject

+ (NSParagraphStyle *)defaultParagraphStyle;

- (NSTextAlignment)alignment;
- (CGFloat)lineSpacing;
- (CGFloat)lineHeightMultiple;
- (CGFloat)firstLineHeadIndent;
- (CGFloat)paragraphSpacing;
- (CGFloat)paragraphSpacingBefore;
- (CGFloat)headIndent;
- (CGFloat)tailIndent;
- (NSLineBreakMode)lineBreakMode;

@end

@interface NSMutableParagraphStyle : NSParagraphStyle

- (void)setAlignment:(NSTextAlignment)alignment;
- (void)setLineSpacing:(CGFloat)aFloat;
- (void)setMaximumLineHeight:(CGFloat)aFloat;
- (void)setFirstLineHeadIndent:(CGFloat)aFloat;
- (void)setParagraphSpacingBefore:(CGFloat)aFloat;
- (void)setParagraphSpacing:(CGFloat)aFloat;
- (void)setHeadIndent:(CGFloat)aFloat;
- (void)setTailIndent:(CGFloat)aFloat;
- (void)setLineBreakMode:(NSLineBreakMode)mode;
- (void)setLineHeightMultiple:(CGFloat)aFloat;

@end

#endif /* _NSPARAGRAPHSTYLE_H_ */
