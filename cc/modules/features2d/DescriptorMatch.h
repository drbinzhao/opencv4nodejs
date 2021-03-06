#include "macros.h"
#include <opencv2/features2d.hpp>

#ifndef __FF_DESCRIPTORMATCH_H__
#define __FF_DESCRIPTORMATCH_H__

class DescriptorMatch : public Nan::ObjectWrap {
public:
	cv::DMatch dmatch;

	static NAN_MODULE_INIT(Init);
	static NAN_METHOD(New);

	static FF_GETTER(DescriptorMatch, GetQueryIdx, dmatch.queryIdx)
	static FF_GETTER(DescriptorMatch, GetTrainIdx, dmatch.trainIdx)
	static FF_GETTER(DescriptorMatch, GetDistance, dmatch.distance)

  static Nan::Persistent<v8::FunctionTemplate> constructor;
};

#endif