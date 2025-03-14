/*
ShaderGlass preset crt / crt-mattias imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/crt/crt-mattias.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtMattiasPresetDef : public PresetDef
{
public:
	CrtCrtMattiasPresetDef() : PresetDef{}
	{
		Name = "crt-mattias";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtMattiasShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
