

#ifndef SRC_FASTDETECTOR_H_
#define SRC_FASTDETECTOR_H_

#include "common.h"
#include "cvplatform.h"
#include "CamStream.h"

using namespace cv;
using namespace cv::cuda;
using namespace std;

#define TRD_INTERVAL_OBJDETECTOR 0
#define NUM_FASTOBJ 1000

namespace kai
{

struct FAST_OBJECT
{
	Rect		m_boundBox;
};

class FastDetector: public ThreadBase
{
public:
	FastDetector();
	~FastDetector();

	bool init(JSON* pJson);
	bool start(void);
	bool complete(void);
	void stop(void);
	void waitForComplete(void);

	void setFrame(CamStream* pCam);
	int  getHuman(FAST_OBJECT** ppHuman);

private:
	void detect(void);

public:
	int 			m_frameID;
	CamStream*		m_pCamStream;

	Ptr<cuda::CascadeClassifier> m_pCascade;
	int 			m_numHuman;
	FAST_OBJECT 	m_pHuman[NUM_FASTOBJ];

//    HOGDescriptor m_hogCar;
	int 			m_numCar;
	FAST_OBJECT 	m_pCar[NUM_FASTOBJ];

	Mat		m_frame;
	GpuMat  m_pGMat;

private:
	pthread_t m_threadID;
	bool m_bThreadON;

	void update(void);
	static void* getUpdateThread(void* This)
	{
		((FastDetector *) This)->update();
		return NULL;
	}


};
}

#endif /* SRC_FASTDETECTOR_H_ */
