/*
ShaderGlass preset pixel-art-scaling / aann imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/pixel-art-scaling/aann.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingAannPresetDef : public PresetDef
{
public:
	PixelArtScalingAannPresetDef() : PresetDef{}
	{
		Name = "aann";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersAannShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
