/*
 * CamStereo.h
 *
 *  Created on: Aug 25, 2015
 *      Author: yankai
 */

#ifndef SRC_CAMSTEREO_H_
#define SRC_CAMSTEREO_H_

#include "../Base/common.h"
#include "../Base/cvplatform.h"

#include "CamFrame.h"

namespace kai
{

class CamStereo
{
public:
	CamStereo();
	virtual ~CamStereo();


	bool init(void);
	void detect(CamFrame* pLeft, CamFrame* pRight, CamFrame* pDepth);

public:
    int		m_disparity;

    Ptr<cuda::StereoBM> m_pBM;
    Ptr<cuda::StereoBeliefPropagation> m_pBP;
    Ptr<cuda::StereoConstantSpaceBP> m_pCSBP;

};

} /* namespace kai */

#endif /* SRC_CAMSTEREO_H_ */
