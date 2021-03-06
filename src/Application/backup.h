/*
 * demo.h
 *
 *  Created on: Aug 20, 2015
 *      Author: yankai
 */
/*
#ifndef SRC_EXTCAMCONTROL_H_
#define SRC_EXTCAMCONTROL_H_

#include <cstdio>
#include <cmath>
#include <cstdarg>

#include "AI/_ClassifierManager.h"
#include "AI/_SegNet.h"
#include "Autopilot/_AutoPilot.h"
#include "Camera/CamInput.h"
#include "Detector/_CascadeDetector.h"
#include "Detector/_MarkerDetector.h"
#include "Detector/_ObjectDetector.h"
#include "Detector/_BgFgDetector.h"
#include "Interface/_MavlinkInterface.h"
#include "UI/UIMonitor.h"
#include "Interface/_VehicleInterface.h"
#include "Utility/util.h"
#include "Image/_DenseFlow.h"

using namespace kai;

int g_key;
bool g_bRun;

_CamStream* g_pCamFront;
_ObjectDetector* g_pOD;
_CascadeDetector* g_pFD;
_AutoPilot* g_pAP;
_ClassifierManager* g_pClassMgr;
_DenseFlow* g_pDF;
_MavlinkInterface* g_pMavlink;
_SegNet* g_pSegNet;
_MarkerDetector* g_pMD;
_BgFgDetector* g_pBgFgD;

CamFrame* g_pShow;
CamFrame* g_pMat;
CamFrame* g_pMat2;
UIMonitor* g_pUIMonitor;
//cv::Mat g_displayMat;


bool extCamControl(JSON* pJson);

void showScreenSegNet(void);
void showScreenCascadeDetector(void);
void showScreenDenseFlow(void);
bool showScreenMarkerDetector(void);
void showScreenBgFgDetector(void);

void onMouse(int event, int x, int y, int flags, void* userdata);
void showInfo(Mat* pDisplayMat);
void handleKey(int key);
void printEnvironment(void);

#endif
*/
