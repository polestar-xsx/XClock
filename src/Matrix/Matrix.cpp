/****************************************************************************
Copyright (c) 2021      Yinbaiyuan

https://www.yinbaiyuan.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#include "Matrix.h"
#include <Arduino.h>

NS_DT_BEGIN

bool Matrix::init()
{
    MatrixLayer *rootLayer = MatrixLayer::create();
    rootLayer->setContentSize(Size(32,8));
    this->addChild(rootLayer);
    rootLayer->initLayer();
    return true;
}

MatrixLayer::~MatrixLayer()
{
    DT_SAFE_FREE(animateList);
}

bool MatrixLayer::initLayer()
{
    // Size size = this->getContentSize();
    // showInterval = size.height / 12.0;
    // animateCount = 3;
    // animateList = (Animate*)malloc(sizeof(Animate)*animateCount);
    // for (int16_t i=0; i<animateCount; i++) {
    //     Animate& animate = animateList[i];
    //     animate.offset = INT16_MAX;
    // }
    // canvasSprite = CanvasSprite::create(size.width,size.height);
    // this->addChild(canvasSprite);
    // this->scheduleUpdate();
    // FrameSprite* Test = FrameSprite::create(icon_sun,sizeof(icon_sun),BMP_GIF);
    // if(nullptr != Test)
    // {
    //     this->addChild(Test);
    //     Test->setPosition(0,0);
    //     Test->setAutoSwitch(true);
    // }
    // else
    // {
    //     Serial.printf("Gif read failed!\n");
    // }

    // FrameSprite* Test2 = FrameSprite::create(icon_sun2,sizeof(icon_sun2),BMP_GIF);
    // if(nullptr != Test2)
    // {
    //     this->addChild(Test2);
    //     Test2->setPosition(8,0);
    //     Test2->setAutoSwitch(true);
    // }
    // else
    // {
    //     Serial.printf("Gif read failed!\n");
    // }
    
    FrameSprite* Test3 = FrameSprite::create(icon_test7,sizeof(icon_test7),BMP_GIF);
    if(nullptr != Test3)
    {
        this->addChild(Test3);
        Test3->setPosition(16,0);
        Test3->setAutoSwitch(true);
    }
    else
    {
        Serial.printf("Gif read failed!\n");
    }

    FrameSprite* Test4 = FrameSprite::create(icon_test6,sizeof(icon_test6),BMP_GIF);
    if(nullptr != Test4)
    {
        this->addChild(Test4);
        Test4->setPosition(24,0);
        Test4->setAutoSwitch(true);
    }
    else
    {
        Serial.printf("Gif read failed!\n");
    }

    FrameSprite* Test5 = FrameSprite::create(icon_sun5,sizeof(icon_sun5),BMP_GIF);
    if(nullptr != Test5)
    {
        this->addChild(Test5);
        Test5->setPosition(0,0);
        Test5->setAutoSwitch(true);
    }
    else
    {
        Serial.printf("Gif read failed!\n");
    }

    // FrameSprite* bmpt = FrameSprite::create(bmp_t,sizeof(bmp_t),BMP_BMP);
    // if(nullptr != bmpt)
    // {
    //     this->addChild(bmpt);
    //     bmpt->setPosition(16,0);
    // }
    // else
    // {
    //     Serial.printf("Gif read failed!\n");
    // }

    return true;
}

// void MatrixLayer::update(float dt)
// {
//     Size size = this->getContentSize();
//     SpriteCanvas* canvas = canvasSprite->getSpriteCanvas();
//     canvas->canvasReset();
//     for (int16_t i=0; i<animateCount; i++) {
//         Animate& animate = animateList[i];
//         if (animate.offset > size.height * 2) {
//             animate.offset = -random(0,size.height);
//             animate.interval = random(showInterval * 1,showInterval * 2) / (float)(size.height*2);
//             animate.dInterval = animate.interval;
//         }
//         animate.dInterval-=dt;
//         if (animate.dInterval<=0) {
//             animate.offset++;
//             animate.dInterval = animate.interval;
//         }
//         canvas->writeGradientLine(i, animate.offset, i, animate.offset - (size.height-1), DTHSV(100,50,200), DTHSV(100,255,0));
//         canvas->writeGradientLine(i, animate.offset - size.height, i, animate.offset - (size.height*2-1), DTHSV(100,50,200), DTHSV(100,255,0));
//     }
// }


NS_DT_END