#pragma once
#include <string>
namespace moonlight_xbox_dx
{
    ref class StreamConfiguration {
	public:
		property Platform::String^ hostname;
		property int appID;
		property int width;
		property int height;
		property int bitrate;
		property int FPS;
		property bool supportsHevc;
		property Platform::String^ compositionScale;
		property Platform::String^ audioConfig;
		property Platform::String^ videoCodec;
	};

	moonlight_xbox_dx::StreamConfiguration^ GetStreamConfig();
	void SetStreamConfig(StreamConfiguration^ config);

}