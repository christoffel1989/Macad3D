// Generated wrapper code for package Graphic3d

#pragma once

#include "Graphic3d.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Graphic3d_AlphaMode
//---------------------------------------------------------------------
public enum class Graphic3d_AlphaMode
{
	Graphic3d_AlphaMode_Opaque = 0,
	Graphic3d_AlphaMode_Mask = 1,
	Graphic3d_AlphaMode_Blend = 2,
	Graphic3d_AlphaMode_MaskBlend = 3,
	Graphic3d_AlphaMode_BlendAuto = -1
}; // enum  class Graphic3d_AlphaMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfAttribute
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfAttribute
{
	Graphic3d_TOA_POS = 0,
	Graphic3d_TOA_NORM = 1,
	Graphic3d_TOA_UV = 2,
	Graphic3d_TOA_COLOR = 3,
	Graphic3d_TOA_CUSTOM = 4
}; // enum  class Graphic3d_TypeOfAttribute

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfData
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfData
{
	Graphic3d_TOD_USHORT = 0,
	Graphic3d_TOD_UINT = 1,
	Graphic3d_TOD_VEC2 = 2,
	Graphic3d_TOD_VEC3 = 3,
	Graphic3d_TOD_VEC4 = 4,
	Graphic3d_TOD_VEC4UB = 5,
	Graphic3d_TOD_FLOAT = 6
}; // enum  class Graphic3d_TypeOfData

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfPrimitiveArray
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfPrimitiveArray
{
	Graphic3d_TOPA_UNDEFINED = 0,
	Graphic3d_TOPA_POINTS = 1,
	Graphic3d_TOPA_SEGMENTS = 2,
	Graphic3d_TOPA_POLYLINES = 3,
	Graphic3d_TOPA_TRIANGLES = 4,
	Graphic3d_TOPA_TRIANGLESTRIPS = 5,
	Graphic3d_TOPA_TRIANGLEFANS = 6,
	Graphic3d_TOPA_LINES_ADJACENCY = 7,
	Graphic3d_TOPA_LINE_STRIP_ADJACENCY = 8,
	Graphic3d_TOPA_TRIANGLES_ADJACENCY = 9,
	Graphic3d_TOPA_TRIANGLE_STRIP_ADJACENCY = 10,
	Graphic3d_TOPA_QUADRANGLES = 11,
	Graphic3d_TOPA_QUADRANGLESTRIPS = 12,
	Graphic3d_TOPA_POLYGONS = 13
}; // enum  class Graphic3d_TypeOfPrimitiveArray

//---------------------------------------------------------------------
//  Enum  Graphic3d_FresnelModel
//---------------------------------------------------------------------
public enum class Graphic3d_FresnelModel
{
	Graphic3d_FM_SCHLICK = 0,
	Graphic3d_FM_CONSTANT = 1,
	Graphic3d_FM_CONDUCTOR = 2,
	Graphic3d_FM_DIELECTRIC = 3
}; // enum  class Graphic3d_FresnelModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfMaterial
//---------------------------------------------------------------------
public enum class Graphic3d_NameOfMaterial
{
	Graphic3d_NameOfMaterial_Brass = 0,
	Graphic3d_NameOfMaterial_Bronze = 1,
	Graphic3d_NameOfMaterial_Copper = 2,
	Graphic3d_NameOfMaterial_Gold = 3,
	Graphic3d_NameOfMaterial_Pewter = 4,
	Graphic3d_NameOfMaterial_Plastered = 5,
	Graphic3d_NameOfMaterial_Plastified = 6,
	Graphic3d_NameOfMaterial_Silver = 7,
	Graphic3d_NameOfMaterial_Steel = 8,
	Graphic3d_NameOfMaterial_Stone = 9,
	Graphic3d_NameOfMaterial_ShinyPlastified = 10,
	Graphic3d_NameOfMaterial_Satin = 11,
	Graphic3d_NameOfMaterial_Metalized = 12,
	Graphic3d_NameOfMaterial_Ionized = 13,
	Graphic3d_NameOfMaterial_Chrome = 14,
	Graphic3d_NameOfMaterial_Aluminum = 15,
	Graphic3d_NameOfMaterial_Obsidian = 16,
	Graphic3d_NameOfMaterial_Neon = 17,
	Graphic3d_NameOfMaterial_Jade = 18,
	Graphic3d_NameOfMaterial_Charcoal = 19,
	Graphic3d_NameOfMaterial_Water = 20,
	Graphic3d_NameOfMaterial_Glass = 21,
	Graphic3d_NameOfMaterial_Diamond = 22,
	Graphic3d_NameOfMaterial_Transparent = 23,
	Graphic3d_NameOfMaterial_DEFAULT = 24,
	Graphic3d_NameOfMaterial_UserDefined = 25,
	Graphic3d_NOM_BRASS = 0,
	Graphic3d_NOM_BRONZE = 1,
	Graphic3d_NOM_COPPER = 2,
	Graphic3d_NOM_GOLD = 3,
	Graphic3d_NOM_PEWTER = 4,
	Graphic3d_NOM_PLASTER = 5,
	Graphic3d_NOM_PLASTIC = 6,
	Graphic3d_NOM_SILVER = 7,
	Graphic3d_NOM_STEEL = 8,
	Graphic3d_NOM_STONE = 9,
	Graphic3d_NOM_SHINY_PLASTIC = 10,
	Graphic3d_NOM_SATIN = 11,
	Graphic3d_NOM_METALIZED = 12,
	Graphic3d_NOM_NEON_GNC = 13,
	Graphic3d_NOM_CHROME = 14,
	Graphic3d_NOM_ALUMINIUM = 15,
	Graphic3d_NOM_OBSIDIAN = 16,
	Graphic3d_NOM_NEON_PHC = 17,
	Graphic3d_NOM_JADE = 18,
	Graphic3d_NOM_CHARCOAL = 19,
	Graphic3d_NOM_WATER = 20,
	Graphic3d_NOM_GLASS = 21,
	Graphic3d_NOM_DIAMOND = 22,
	Graphic3d_NOM_TRANSPARENT = 23,
	Graphic3d_NOM_DEFAULT = 24,
	Graphic3d_NOM_UserDefined = 25
}; // enum  class Graphic3d_NameOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfMaterial
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfMaterial
{
	Graphic3d_MATERIAL_ASPECT = 0,
	Graphic3d_MATERIAL_PHYSIC = 1
}; // enum  class Graphic3d_TypeOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfReflection
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfReflection
{
	Graphic3d_TOR_AMBIENT = 0,
	Graphic3d_TOR_DIFFUSE = 1,
	Graphic3d_TOR_SPECULAR = 2,
	Graphic3d_TOR_EMISSION = 3
}; // enum  class Graphic3d_TypeOfReflection

//---------------------------------------------------------------------
//  Enum  Graphic3d_RenderTransparentMethod
//---------------------------------------------------------------------
public enum class Graphic3d_RenderTransparentMethod
{
	Graphic3d_RTM_BLEND_UNORDERED = 0,
	Graphic3d_RTM_BLEND_OIT = 1,
	Graphic3d_RTM_DEPTH_PEELING_OIT = 2
}; // enum  class Graphic3d_RenderTransparentMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfShaderObject
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfShaderObject
{
	Graphic3d_TOS_VERTEX = 1,
	Graphic3d_TOS_TESS_CONTROL = 2,
	Graphic3d_TOS_TESS_EVALUATION = 4,
	Graphic3d_TOS_GEOMETRY = 8,
	Graphic3d_TOS_FRAGMENT = 16,
	Graphic3d_TOS_COMPUTE = 32
}; // enum  class Graphic3d_TypeOfShaderObject

//---------------------------------------------------------------------
//  Enum  Graphic3d_LevelOfTextureAnisotropy
//---------------------------------------------------------------------
public enum class Graphic3d_LevelOfTextureAnisotropy
{
	Graphic3d_LOTA_OFF = 0,
	Graphic3d_LOTA_FAST = 1,
	Graphic3d_LOTA_MIDDLE = 2,
	Graphic3d_LOTA_QUALITY = 3
}; // enum  class Graphic3d_LevelOfTextureAnisotropy

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureUnit
//---------------------------------------------------------------------
public enum class Graphic3d_TextureUnit
{
	Graphic3d_TextureUnit_0 = 0,
	Graphic3d_TextureUnit_1 = 1,
	Graphic3d_TextureUnit_2 = 2,
	Graphic3d_TextureUnit_3 = 3,
	Graphic3d_TextureUnit_4 = 4,
	Graphic3d_TextureUnit_5 = 5,
	Graphic3d_TextureUnit_6 = 6,
	Graphic3d_TextureUnit_7 = 7,
	Graphic3d_TextureUnit_8 = 8,
	Graphic3d_TextureUnit_9 = 9,
	Graphic3d_TextureUnit_10 = 10,
	Graphic3d_TextureUnit_11 = 11,
	Graphic3d_TextureUnit_12 = 12,
	Graphic3d_TextureUnit_13 = 13,
	Graphic3d_TextureUnit_14 = 14,
	Graphic3d_TextureUnit_15 = 15,
	Graphic3d_TextureUnit_BaseColor = 0,
	Graphic3d_TextureUnit_Emissive = 1,
	Graphic3d_TextureUnit_Occlusion = 2,
	Graphic3d_TextureUnit_Normal = 3,
	Graphic3d_TextureUnit_MetallicRoughness = 4,
	Graphic3d_TextureUnit_EnvMap = 0,
	Graphic3d_TextureUnit_PointSprite = 1,
	Graphic3d_TextureUnit_DepthPeelingDepth = -6,
	Graphic3d_TextureUnit_DepthPeelingFrontColor = -5,
	Graphic3d_TextureUnit_ShadowMap = -4,
	Graphic3d_TextureUnit_PbrEnvironmentLUT = -3,
	Graphic3d_TextureUnit_PbrIblDiffuseSH = -2,
	Graphic3d_TextureUnit_PbrIblSpecular = -1
}; // enum  class Graphic3d_TextureUnit

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureFilter
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfTextureFilter
{
	Graphic3d_TOTF_NEAREST = 0,
	Graphic3d_TOTF_BILINEAR = 1,
	Graphic3d_TOTF_TRILINEAR = 2
}; // enum  class Graphic3d_TypeOfTextureFilter

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureMode
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfTextureMode
{
	Graphic3d_TOTM_OBJECT = 0,
	Graphic3d_TOTM_SPHERE = 1,
	Graphic3d_TOTM_EYE = 2,
	Graphic3d_TOTM_MANUAL = 3,
	Graphic3d_TOTM_SPRITE = 4
}; // enum  class Graphic3d_TypeOfTextureMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureSetBits
//---------------------------------------------------------------------
public enum class Graphic3d_TextureSetBits
{
	Graphic3d_TextureSetBits_NONE = 0,
	Graphic3d_TextureSetBits_BaseColor = 1,
	Graphic3d_TextureSetBits_Emissive = 2,
	Graphic3d_TextureSetBits_Occlusion = 4,
	Graphic3d_TextureSetBits_Normal = 8,
	Graphic3d_TextureSetBits_MetallicRoughness = 16
}; // enum  class Graphic3d_TextureSetBits

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTexture
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfTexture
{
	Graphic3d_TOT_1D = 0,
	Graphic3d_TOT_2D = 1,
	Graphic3d_TOT_2D_MIPMAP = 2,
	Graphic3d_TOT_CUBEMAP = 3
}; // enum  class Graphic3d_TypeOfTexture

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackfacingModel
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfBackfacingModel
{
	Graphic3d_TypeOfBackfacingModel_Auto = 0,
	Graphic3d_TypeOfBackfacingModel_DoubleSided = 1,
	Graphic3d_TypeOfBackfacingModel_BackCulled = 2,
	Graphic3d_TOBM_AUTOMATIC = 0,
	Graphic3d_TOBM_FORCE = 1,
	Graphic3d_TOBM_DISABLE = 2,
	V3d_TOBM_AUTOMATIC = 0,
	V3d_TOBM_ALWAYS_DISPLAYED = 1,
	V3d_TOBM_NEVER_DISPLAYED = 2
}; // enum  class Graphic3d_TypeOfBackfacingModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfShadingModel
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfShadingModel
{
	Graphic3d_TypeOfShadingModel_DEFAULT = -1,
	Graphic3d_TypeOfShadingModel_Unlit = 0,
	Graphic3d_TypeOfShadingModel_PhongFacet = 1,
	Graphic3d_TypeOfShadingModel_Gouraud = 2,
	Graphic3d_TypeOfShadingModel_Phong = 3,
	Graphic3d_TypeOfShadingModel_Pbr = 4,
	Graphic3d_TypeOfShadingModel_PbrFacet = 5,
	Graphic3d_TOSM_DEFAULT = -1,
	Graphic3d_TOSM_UNLIT = 0,
	Graphic3d_TOSM_FACET = 1,
	Graphic3d_TOSM_VERTEX = 2,
	Graphic3d_TOSM_FRAGMENT = 3,
	Graphic3d_TOSM_PBR = 4,
	Graphic3d_TOSM_PBR_FACET = 5,
	Graphic3d_TOSM_NONE = 0,
	V3d_COLOR = 0,
	V3d_FLAT = 1,
	V3d_GOURAUD = 2,
	V3d_PHONG = 3
}; // enum  class Graphic3d_TypeOfShadingModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_BufferType
//---------------------------------------------------------------------
public enum class Graphic3d_BufferType
{
	Graphic3d_BT_RGB = 0,
	Graphic3d_BT_RGBA = 1,
	Graphic3d_BT_Depth = 2,
	Graphic3d_BT_RGB_RayTraceHdrLeft = 3,
	Graphic3d_BT_Red = 4
}; // enum  class Graphic3d_BufferType

//---------------------------------------------------------------------
//  Enum  Graphic3d_CappingFlags
//---------------------------------------------------------------------
public enum class Graphic3d_CappingFlags
{
	Graphic3d_CappingFlags_None = 0,
	Graphic3d_CappingFlags_ObjectMaterial = 1,
	Graphic3d_CappingFlags_ObjectTexture = 2,
	Graphic3d_CappingFlags_ObjectShader = 8,
	Graphic3d_CappingFlags_ObjectAspect = 11
}; // enum  class Graphic3d_CappingFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLightSource
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfLightSource
{
	Graphic3d_TypeOfLightSource_Ambient = 0,
	Graphic3d_TypeOfLightSource_Directional = 1,
	Graphic3d_TypeOfLightSource_Positional = 2,
	Graphic3d_TypeOfLightSource_Spot = 3,
	Graphic3d_TOLS_AMBIENT = 0,
	Graphic3d_TOLS_DIRECTIONAL = 1,
	Graphic3d_TOLS_POSITIONAL = 2,
	Graphic3d_TOLS_SPOT = 3,
	V3d_AMBIENT = 0,
	V3d_DIRECTIONAL = 1,
	V3d_POSITIONAL = 2,
	V3d_SPOT = 3
}; // enum  class Graphic3d_TypeOfLightSource

//---------------------------------------------------------------------
//  Enum  Graphic3d_ClipState
//---------------------------------------------------------------------
public enum class Graphic3d_ClipState
{
	Graphic3d_ClipState_Out = 0,
	Graphic3d_ClipState_In = 1,
	Graphic3d_ClipState_On = 2
}; // enum  class Graphic3d_ClipState

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextPath
//---------------------------------------------------------------------
public enum class Graphic3d_TextPath
{
	Graphic3d_TP_UP = 0,
	Graphic3d_TP_DOWN = 1,
	Graphic3d_TP_LEFT = 2,
	Graphic3d_TP_RIGHT = 3
}; // enum  class Graphic3d_TextPath

//---------------------------------------------------------------------
//  Enum  Graphic3d_HorizontalTextAlignment
//---------------------------------------------------------------------
public enum class Graphic3d_HorizontalTextAlignment
{
	Graphic3d_HTA_LEFT = 0,
	Graphic3d_HTA_CENTER = 1,
	Graphic3d_HTA_RIGHT = 2
}; // enum  class Graphic3d_HorizontalTextAlignment

//---------------------------------------------------------------------
//  Enum  Graphic3d_VerticalTextAlignment
//---------------------------------------------------------------------
public enum class Graphic3d_VerticalTextAlignment
{
	Graphic3d_VTA_BOTTOM = 0,
	Graphic3d_VTA_CENTER = 1,
	Graphic3d_VTA_TOP = 2,
	Graphic3d_VTA_TOPFIRSTLINE = 3
}; // enum  class Graphic3d_VerticalTextAlignment

//---------------------------------------------------------------------
//  Enum  Graphic3d_TransModeFlags
//---------------------------------------------------------------------
public enum class Graphic3d_TransModeFlags
{
	Graphic3d_TMF_None = 0,
	Graphic3d_TMF_ZoomPers = 2,
	Graphic3d_TMF_RotatePers = 8,
	Graphic3d_TMF_TriedronPers = 32,
	Graphic3d_TMF_2d = 64,
	Graphic3d_TMF_CameraPers = 128,
	Graphic3d_TMF_ZoomRotatePers = 10
}; // enum  class Graphic3d_TransModeFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_CubeMapSide
//---------------------------------------------------------------------
public enum class Graphic3d_CubeMapSide
{
	Graphic3d_CMS_POS_X = 0,
	Graphic3d_CMS_NEG_X = 1,
	Graphic3d_CMS_POS_Y = 2,
	Graphic3d_CMS_NEG_Y = 3,
	Graphic3d_CMS_POS_Z = 4,
	Graphic3d_CMS_NEG_Z = 5
}; // enum  class Graphic3d_CubeMapSide

//---------------------------------------------------------------------
//  Enum  Graphic3d_DiagnosticInfo
//---------------------------------------------------------------------
public enum class Graphic3d_DiagnosticInfo
{
	Graphic3d_DiagnosticInfo_Device = 1,
	Graphic3d_DiagnosticInfo_FrameBuffer = 2,
	Graphic3d_DiagnosticInfo_Limits = 4,
	Graphic3d_DiagnosticInfo_Memory = 8,
	Graphic3d_DiagnosticInfo_NativePlatform = 16,
	Graphic3d_DiagnosticInfo_Extensions = 32,
	Graphic3d_DiagnosticInfo_Short = 7,
	Graphic3d_DiagnosticInfo_Basic = 31,
	Graphic3d_DiagnosticInfo_Complete = 63
}; // enum  class Graphic3d_DiagnosticInfo

//---------------------------------------------------------------------
//  Enum  Graphic3d_RenderingMode
//---------------------------------------------------------------------
public enum class Graphic3d_RenderingMode
{
	Graphic3d_RM_RASTERIZATION = 0,
	Graphic3d_RM_RAYTRACING = 1
}; // enum  class Graphic3d_RenderingMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_StereoMode
//---------------------------------------------------------------------
public enum class Graphic3d_StereoMode
{
	Graphic3d_StereoMode_QuadBuffer = 0,
	Graphic3d_StereoMode_Anaglyph = 1,
	Graphic3d_StereoMode_RowInterlaced = 2,
	Graphic3d_StereoMode_ColumnInterlaced = 3,
	Graphic3d_StereoMode_ChessBoard = 4,
	Graphic3d_StereoMode_SideBySide = 5,
	Graphic3d_StereoMode_OverUnder = 6,
	Graphic3d_StereoMode_SoftPageFlip = 7,
	Graphic3d_StereoMode_OpenVR = 8,
	Graphic3d_StereoMode_NB = 9
}; // enum  class Graphic3d_StereoMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_ToneMappingMethod
//---------------------------------------------------------------------
public enum class Graphic3d_ToneMappingMethod
{
	Graphic3d_ToneMappingMethod_Disabled = 0,
	Graphic3d_ToneMappingMethod_Filmic = 1
}; // enum  class Graphic3d_ToneMappingMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfConnection
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfConnection
{
	Graphic3d_TOC_ANCESTOR = 0,
	Graphic3d_TOC_DESCENDANT = 1
}; // enum  class Graphic3d_TypeOfConnection

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfStructure
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfStructure
{
	Graphic3d_TOS_WIREFRAME = 0,
	Graphic3d_TOS_SHADING = 1,
	Graphic3d_TOS_COMPUTED = 2,
	Graphic3d_TOS_ALL = 3
}; // enum  class Graphic3d_TypeOfStructure

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture2D
//---------------------------------------------------------------------
public enum class Graphic3d_NameOfTexture2D
{
	Graphic3d_NOT_2D_MATRA = 0,
	Graphic3d_NOT_2D_ALIENSKIN = 1,
	Graphic3d_NOT_2D_BLUE_ROCK = 2,
	Graphic3d_NOT_2D_BLUEWHITE_PAPER = 3,
	Graphic3d_NOT_2D_BRUSHED = 4,
	Graphic3d_NOT_2D_BUBBLES = 5,
	Graphic3d_NOT_2D_BUMP = 6,
	Graphic3d_NOT_2D_CAST = 7,
	Graphic3d_NOT_2D_CHIPBD = 8,
	Graphic3d_NOT_2D_CLOUDS = 9,
	Graphic3d_NOT_2D_FLESH = 10,
	Graphic3d_NOT_2D_FLOOR = 11,
	Graphic3d_NOT_2D_GALVNISD = 12,
	Graphic3d_NOT_2D_GRASS = 13,
	Graphic3d_NOT_2D_ALUMINUM = 14,
	Graphic3d_NOT_2D_ROCK = 15,
	Graphic3d_NOT_2D_KNURL = 16,
	Graphic3d_NOT_2D_MAPLE = 17,
	Graphic3d_NOT_2D_MARBLE = 18,
	Graphic3d_NOT_2D_MOTTLED = 19,
	Graphic3d_NOT_2D_RAIN = 20,
	Graphic3d_NOT_2D_CHESS = 21,
	Graphic3d_NOT_2D_UNKNOWN = 22
}; // enum  class Graphic3d_NameOfTexture2D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTextureEnv
//---------------------------------------------------------------------
public enum class Graphic3d_NameOfTextureEnv
{
	Graphic3d_NOT_ENV_CLOUDS = 0,
	Graphic3d_NOT_ENV_CV = 1,
	Graphic3d_NOT_ENV_MEDIT = 2,
	Graphic3d_NOT_ENV_PEARL = 3,
	Graphic3d_NOT_ENV_SKY1 = 4,
	Graphic3d_NOT_ENV_SKY2 = 5,
	Graphic3d_NOT_ENV_LINES = 6,
	Graphic3d_NOT_ENV_ROAD = 7,
	Graphic3d_NOT_ENV_UNKNOWN = 8
}; // enum  class Graphic3d_NameOfTextureEnv

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfAnswer
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfAnswer
{
	Graphic3d_TOA_YES = 0,
	Graphic3d_TOA_NO = 1,
	Graphic3d_TOA_COMPUTE = 2
}; // enum  class Graphic3d_TypeOfAnswer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackground
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfBackground
{
	Graphic3d_TOB_NONE = -1,
	Graphic3d_TOB_GRADIENT = 0,
	Graphic3d_TOB_TEXTURE = 1,
	Graphic3d_TOB_CUBEMAP = 2
}; // enum  class Graphic3d_TypeOfBackground

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfVisualization
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfVisualization
{
	Graphic3d_TOV_WIREFRAME = 0,
	Graphic3d_TOV_SHADING = 1
}; // enum  class Graphic3d_TypeOfVisualization

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsCounter
//---------------------------------------------------------------------
public enum class Graphic3d_FrameStatsCounter
{
	Graphic3d_FrameStatsCounter_NbLayers = 0,
	Graphic3d_FrameStatsCounter_NbStructs = 1,
	Graphic3d_FrameStatsCounter_EstimatedBytesGeom = 2,
	Graphic3d_FrameStatsCounter_EstimatedBytesFbos = 3,
	Graphic3d_FrameStatsCounter_EstimatedBytesTextures = 4,
	Graphic3d_FrameStatsCounter_NbLayersNotCulled = 5,
	Graphic3d_FrameStatsCounter_NbStructsNotCulled = 6,
	Graphic3d_FrameStatsCounter_NbGroupsNotCulled = 7,
	Graphic3d_FrameStatsCounter_NbElemsNotCulled = 8,
	Graphic3d_FrameStatsCounter_NbElemsFillNotCulled = 9,
	Graphic3d_FrameStatsCounter_NbElemsLineNotCulled = 10,
	Graphic3d_FrameStatsCounter_NbElemsPointNotCulled = 11,
	Graphic3d_FrameStatsCounter_NbElemsTextNotCulled = 12,
	Graphic3d_FrameStatsCounter_NbTrianglesNotCulled = 13,
	Graphic3d_FrameStatsCounter_NbLinesNotCulled = 14,
	Graphic3d_FrameStatsCounter_NbPointsNotCulled = 15,
	Graphic3d_FrameStatsCounter_NbLayersImmediate = 16,
	Graphic3d_FrameStatsCounter_NbStructsImmediate = 17,
	Graphic3d_FrameStatsCounter_NbGroupsImmediate = 18,
	Graphic3d_FrameStatsCounter_NbElemsImmediate = 19,
	Graphic3d_FrameStatsCounter_NbElemsFillImmediate = 20,
	Graphic3d_FrameStatsCounter_NbElemsLineImmediate = 21,
	Graphic3d_FrameStatsCounter_NbElemsPointImmediate = 22,
	Graphic3d_FrameStatsCounter_NbElemsTextImmediate = 23,
	Graphic3d_FrameStatsCounter_NbTrianglesImmediate = 24,
	Graphic3d_FrameStatsCounter_NbLinesImmediate = 25,
	Graphic3d_FrameStatsCounter_NbPointsImmediate = 26
}; // enum  class Graphic3d_FrameStatsCounter

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsTimer
//---------------------------------------------------------------------
public enum class Graphic3d_FrameStatsTimer
{
	Graphic3d_FrameStatsTimer_ElapsedFrame = 0,
	Graphic3d_FrameStatsTimer_CpuFrame = 1,
	Graphic3d_FrameStatsTimer_CpuCulling = 2,
	Graphic3d_FrameStatsTimer_CpuPicking = 3,
	Graphic3d_FrameStatsTimer_CpuDynamics = 4
}; // enum  class Graphic3d_FrameStatsTimer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLimit
//---------------------------------------------------------------------
public enum class Graphic3d_TypeOfLimit
{
	Graphic3d_TypeOfLimit_MaxNbLights = 0,
	Graphic3d_TypeOfLimit_MaxNbClipPlanes = 1,
	Graphic3d_TypeOfLimit_MaxNbViews = 2,
	Graphic3d_TypeOfLimit_MaxTextureSize = 3,
	Graphic3d_TypeOfLimit_MaxViewDumpSizeX = 4,
	Graphic3d_TypeOfLimit_MaxViewDumpSizeY = 5,
	Graphic3d_TypeOfLimit_MaxCombinedTextureUnits = 6,
	Graphic3d_TypeOfLimit_MaxMsaa = 7,
	Graphic3d_TypeOfLimit_HasPBR = 8,
	Graphic3d_TypeOfLimit_HasRayTracing = 9,
	Graphic3d_TypeOfLimit_HasRayTracingTextures = 10,
	Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSampling = 11,
	Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSamplingAtomic = 12,
	Graphic3d_TypeOfLimit_HasSRGB = 13,
	Graphic3d_TypeOfLimit_HasBlendedOit = 14,
	Graphic3d_TypeOfLimit_HasBlendedOitMsaa = 15,
	Graphic3d_TypeOfLimit_HasFlatShading = 16,
	Graphic3d_TypeOfLimit_HasMeshEdges = 17,
	Graphic3d_TypeOfLimit_IsWorkaroundFBO = 18,
	Graphic3d_TypeOfLimit_NB = 19
}; // enum  class Graphic3d_TypeOfLimit

//---------------------------------------------------------------------
//  Enum  Graphic3d_GroupAspect
//---------------------------------------------------------------------
public enum class Graphic3d_GroupAspect
{
	Graphic3d_ASPECT_LINE = 0,
	Graphic3d_ASPECT_TEXT = 1,
	Graphic3d_ASPECT_MARKER = 2,
	Graphic3d_ASPECT_FILL_AREA = 3
}; // enum  class Graphic3d_GroupAspect

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture1D
//---------------------------------------------------------------------
public enum class Graphic3d_NameOfTexture1D
{
	Graphic3d_NOT_1D_ELEVATION = 0,
	Graphic3d_NOT_1D_UNKNOWN = 1
}; // enum  class Graphic3d_NameOfTexture1D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexturePlane
//---------------------------------------------------------------------
public enum class Graphic3d_NameOfTexturePlane
{
	Graphic3d_NOTP_XY = 0,
	Graphic3d_NOTP_YZ = 1,
	Graphic3d_NOTP_ZX = 2,
	Graphic3d_NOTP_UNKNOWN = 3
}; // enum  class Graphic3d_NameOfTexturePlane

//---------------------------------------------------------------------
//  Enum  Graphic3d_ShaderFlags
//---------------------------------------------------------------------
public enum class Graphic3d_ShaderFlags
{
	Graphic3d_ShaderFlags_VertColor = 1,
	Graphic3d_ShaderFlags_TextureRGB = 2,
	Graphic3d_ShaderFlags_TextureEnv = 4,
	Graphic3d_ShaderFlags_TextureNormal = 6,
	Graphic3d_ShaderFlags_PointSimple = 8,
	Graphic3d_ShaderFlags_PointSprite = 16,
	Graphic3d_ShaderFlags_PointSpriteA = 24,
	Graphic3d_ShaderFlags_StippleLine = 32,
	Graphic3d_ShaderFlags_ClipPlanes1 = 64,
	Graphic3d_ShaderFlags_ClipPlanes2 = 128,
	Graphic3d_ShaderFlags_ClipPlanesN = 192,
	Graphic3d_ShaderFlags_ClipChains = 256,
	Graphic3d_ShaderFlags_MeshEdges = 512,
	Graphic3d_ShaderFlags_AlphaTest = 1024,
	Graphic3d_ShaderFlags_WriteOit = 2048,
	Graphic3d_ShaderFlags_OitDepthPeeling = 4096,
	Graphic3d_ShaderFlags_NB = 8192,
	Graphic3d_ShaderFlags_IsPoint = 24,
	Graphic3d_ShaderFlags_HasTextures = 6,
	Graphic3d_ShaderFlags_NeedsGeomShader = 512
}; // enum  class Graphic3d_ShaderFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_GlslExtension
//---------------------------------------------------------------------
public enum class Graphic3d_GlslExtension
{
	Graphic3d_GlslExtension_GL_OES_standard_derivatives = 0,
	Graphic3d_GlslExtension_GL_EXT_shader_texture_lod = 1,
	Graphic3d_GlslExtension_GL_EXT_frag_depth = 2,
	Graphic3d_GlslExtension_GL_EXT_gpu_shader4 = 3
}; // enum  class Graphic3d_GlslExtension

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2 sealed : public BaseClass<::Graphic3d_Vec2>
{

#ifdef Include_Graphic3d_Vec2_h
public:
	Include_Graphic3d_Vec2_h
#endif

public:
	Graphic3d_Vec2(::Graphic3d_Vec2* nativeInstance)
		: BaseClass<::Graphic3d_Vec2>( nativeInstance, true )
	{}

	Graphic3d_Vec2(::Graphic3d_Vec2& nativeInstance)
		: BaseClass<::Graphic3d_Vec2>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2* NativeInstance
	{
		::Graphic3d_Vec2* get()
		{
			return static_cast<::Graphic3d_Vec2*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2(float theXY);
	Graphic3d_Vec2(float theX, float theY);
	Graphic3d_Vec2(Macad::Occt::Graphic3d_Vec2^ theOtherVec2);
	static int Length();
	void SetValues(float theX, float theY);
	float x();
	float y();
	Macad::Occt::Graphic3d_Vec2^ xy();
	Macad::Occt::Graphic3d_Vec2^ yx();
	bool IsEqual(Macad::Occt::Graphic3d_Vec2^ theOther);
	float GetData();
	float ChangeData();
	void Multiply(float theFactor);
	Macad::Occt::Graphic3d_Vec2^ Multiplied(float theFactor);
	Macad::Occt::Graphic3d_Vec2^ cwiseMin(Macad::Occt::Graphic3d_Vec2^ theVec);
	Macad::Occt::Graphic3d_Vec2^ cwiseMax(Macad::Occt::Graphic3d_Vec2^ theVec);
	Macad::Occt::Graphic3d_Vec2^ cwiseAbs();
	float maxComp();
	float minComp();
	float Dot(Macad::Occt::Graphic3d_Vec2^ theOther);
	float Modulus();
	float SquareModulus();
	static Macad::Occt::Graphic3d_Vec2^ DX();
	static Macad::Occt::Graphic3d_Vec2^ DY();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2d
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2d sealed : public BaseClass<::Graphic3d_Vec2d>
{

#ifdef Include_Graphic3d_Vec2d_h
public:
	Include_Graphic3d_Vec2d_h
#endif

public:
	Graphic3d_Vec2d(::Graphic3d_Vec2d* nativeInstance)
		: BaseClass<::Graphic3d_Vec2d>( nativeInstance, true )
	{}

	Graphic3d_Vec2d(::Graphic3d_Vec2d& nativeInstance)
		: BaseClass<::Graphic3d_Vec2d>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2d* NativeInstance
	{
		::Graphic3d_Vec2d* get()
		{
			return static_cast<::Graphic3d_Vec2d*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2d(double theXY);
	Graphic3d_Vec2d(double theX, double theY);
	Graphic3d_Vec2d(Macad::Occt::Graphic3d_Vec2d^ theOtherVec2);
	static int Length();
	void SetValues(double theX, double theY);
	double x();
	double y();
	Macad::Occt::Graphic3d_Vec2d^ xy();
	Macad::Occt::Graphic3d_Vec2d^ yx();
	bool IsEqual(Macad::Occt::Graphic3d_Vec2d^ theOther);
	double GetData();
	double ChangeData();
	void Multiply(double theFactor);
	Macad::Occt::Graphic3d_Vec2d^ Multiplied(double theFactor);
	Macad::Occt::Graphic3d_Vec2d^ cwiseMin(Macad::Occt::Graphic3d_Vec2d^ theVec);
	Macad::Occt::Graphic3d_Vec2d^ cwiseMax(Macad::Occt::Graphic3d_Vec2d^ theVec);
	Macad::Occt::Graphic3d_Vec2d^ cwiseAbs();
	double maxComp();
	double minComp();
	double Dot(Macad::Occt::Graphic3d_Vec2d^ theOther);
	double Modulus();
	double SquareModulus();
	static Macad::Occt::Graphic3d_Vec2d^ DX();
	static Macad::Occt::Graphic3d_Vec2d^ DY();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2d

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2i
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2i sealed : public BaseClass<::Graphic3d_Vec2i>
{

#ifdef Include_Graphic3d_Vec2i_h
public:
	Include_Graphic3d_Vec2i_h
#endif

public:
	Graphic3d_Vec2i(::Graphic3d_Vec2i* nativeInstance)
		: BaseClass<::Graphic3d_Vec2i>( nativeInstance, true )
	{}

	Graphic3d_Vec2i(::Graphic3d_Vec2i& nativeInstance)
		: BaseClass<::Graphic3d_Vec2i>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2i* NativeInstance
	{
		::Graphic3d_Vec2i* get()
		{
			return static_cast<::Graphic3d_Vec2i*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2i(int theXY);
	Graphic3d_Vec2i(int theX, int theY);
	Graphic3d_Vec2i(Macad::Occt::Graphic3d_Vec2i^ theOtherVec2);
	static int Length();
	void SetValues(int theX, int theY);
	int x();
	int y();
	Macad::Occt::Graphic3d_Vec2i^ xy();
	Macad::Occt::Graphic3d_Vec2i^ yx();
	bool IsEqual(Macad::Occt::Graphic3d_Vec2i^ theOther);
	int GetData();
	int ChangeData();
	void Multiply(int theFactor);
	Macad::Occt::Graphic3d_Vec2i^ Multiplied(int theFactor);
	Macad::Occt::Graphic3d_Vec2i^ cwiseMin(Macad::Occt::Graphic3d_Vec2i^ theVec);
	Macad::Occt::Graphic3d_Vec2i^ cwiseMax(Macad::Occt::Graphic3d_Vec2i^ theVec);
	Macad::Occt::Graphic3d_Vec2i^ cwiseAbs();
	int maxComp();
	int minComp();
	int Dot(Macad::Occt::Graphic3d_Vec2i^ theOther);
	int Modulus();
	int SquareModulus();
	static Macad::Occt::Graphic3d_Vec2i^ DX();
	static Macad::Occt::Graphic3d_Vec2i^ DY();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2i

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2b
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2b sealed : public BaseClass<::Graphic3d_Vec2b>
{

#ifdef Include_Graphic3d_Vec2b_h
public:
	Include_Graphic3d_Vec2b_h
#endif

public:
	Graphic3d_Vec2b(::Graphic3d_Vec2b* nativeInstance)
		: BaseClass<::Graphic3d_Vec2b>( nativeInstance, true )
	{}

	Graphic3d_Vec2b(::Graphic3d_Vec2b& nativeInstance)
		: BaseClass<::Graphic3d_Vec2b>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2b* NativeInstance
	{
		::Graphic3d_Vec2b* get()
		{
			return static_cast<::Graphic3d_Vec2b*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2b(char theXY);
	Graphic3d_Vec2b(char theX, char theY);
	Graphic3d_Vec2b(Macad::Occt::Graphic3d_Vec2b^ theOtherVec2);
	static int Length();
	void SetValues(char theX, char theY);
	char x();
	char y();
	Macad::Occt::Graphic3d_Vec2b^ xy();
	Macad::Occt::Graphic3d_Vec2b^ yx();
	bool IsEqual(Macad::Occt::Graphic3d_Vec2b^ theOther);
	char GetData();
	char ChangeData();
	void Multiply(char theFactor);
	Macad::Occt::Graphic3d_Vec2b^ Multiplied(char theFactor);
	Macad::Occt::Graphic3d_Vec2b^ cwiseMin(Macad::Occt::Graphic3d_Vec2b^ theVec);
	Macad::Occt::Graphic3d_Vec2b^ cwiseMax(Macad::Occt::Graphic3d_Vec2b^ theVec);
	Macad::Occt::Graphic3d_Vec2b^ cwiseAbs();
	char maxComp();
	char minComp();
	char Dot(Macad::Occt::Graphic3d_Vec2b^ theOther);
	char Modulus();
	char SquareModulus();
	static Macad::Occt::Graphic3d_Vec2b^ DX();
	static Macad::Occt::Graphic3d_Vec2b^ DY();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2b

//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute
//---------------------------------------------------------------------
public ref class Graphic3d_Array1OfAttribute sealed : public BaseClass<::Graphic3d_Array1OfAttribute>
{

#ifdef Include_Graphic3d_Array1OfAttribute_h
public:
	Include_Graphic3d_Array1OfAttribute_h
#endif

public:
	Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute* nativeInstance)
		: BaseClass<::Graphic3d_Array1OfAttribute>( nativeInstance, true )
	{}

	Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute& nativeInstance)
		: BaseClass<::Graphic3d_Array1OfAttribute>( &nativeInstance, false )
	{}

	property ::Graphic3d_Array1OfAttribute* NativeInstance
	{
		::Graphic3d_Array1OfAttribute* get()
		{
			return static_cast<::Graphic3d_Array1OfAttribute*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Array1OfAttribute();
	Graphic3d_Array1OfAttribute(int theLower, int theUpper);
	Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Graphic3d_Attribute^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Graphic3d_Array1OfAttribute^ Assign(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Macad::Occt::Graphic3d_Array1OfAttribute^ Move(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Macad::Occt::Graphic3d_Attribute^ First();
	Macad::Occt::Graphic3d_Attribute^ ChangeFirst();
	Macad::Occt::Graphic3d_Attribute^ Last();
	Macad::Occt::Graphic3d_Attribute^ ChangeLast();
	Macad::Occt::Graphic3d_Attribute^ Value(int theIndex);
	Macad::Occt::Graphic3d_Attribute^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Attribute^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Graphic3d_Array1OfAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderObjectList sealed : public BaseClass<::Graphic3d_ShaderObjectList>
{

#ifdef Include_Graphic3d_ShaderObjectList_h
public:
	Include_Graphic3d_ShaderObjectList_h
#endif

public:
	Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderObjectList>( nativeInstance, true )
	{}

	Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderObjectList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderObjectList* NativeInstance
	{
		::Graphic3d_ShaderObjectList* get()
		{
			return static_cast<::Graphic3d_ShaderObjectList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderObjectList();
	Graphic3d_ShaderObjectList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderObjectList(Macad::Occt::Graphic3d_ShaderObjectList^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_ShaderObjectList^ Assign(Macad::Occt::Graphic3d_ShaderObjectList^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Append(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Prepend(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderObject theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	Macad::Occt::Graphic3d_ShaderObject^ First();
	Macad::Occt::Graphic3d_ShaderObject^ ChangeFirst();
	Macad::Occt::Graphic3d_ShaderObject^ Last();
	Macad::Occt::Graphic3d_ShaderObject^ ChangeLast();
	Macad::Occt::Graphic3d_ShaderObject^ Value(int theIndex);
	Macad::Occt::Graphic3d_ShaderObject^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
}; // class Graphic3d_ShaderObjectList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderVariableList sealed : public BaseClass<::Graphic3d_ShaderVariableList>
{

#ifdef Include_Graphic3d_ShaderVariableList_h
public:
	Include_Graphic3d_ShaderVariableList_h
#endif

public:
	Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderVariableList>( nativeInstance, true )
	{}

	Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderVariableList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderVariableList* NativeInstance
	{
		::Graphic3d_ShaderVariableList* get()
		{
			return static_cast<::Graphic3d_ShaderVariableList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderVariableList();
	Graphic3d_ShaderVariableList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderVariableList(Macad::Occt::Graphic3d_ShaderVariableList^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_ShaderVariableList^ Assign(Macad::Occt::Graphic3d_ShaderVariableList^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(Graphic3d_ShaderVariable theItem, ) */
	void Append(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void Prepend(Graphic3d_ShaderVariable theItem, ) */
	void Prepend(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderVariable theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable First() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeFirst() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable Last() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeLast() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
}; // class Graphic3d_ShaderVariableList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderAttributeList sealed : public BaseClass<::Graphic3d_ShaderAttributeList>
{

#ifdef Include_Graphic3d_ShaderAttributeList_h
public:
	Include_Graphic3d_ShaderAttributeList_h
#endif

public:
	Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderAttributeList>( nativeInstance, true )
	{}

	Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderAttributeList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderAttributeList* NativeInstance
	{
		::Graphic3d_ShaderAttributeList* get()
		{
			return static_cast<::Graphic3d_ShaderAttributeList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderAttributeList();
	Graphic3d_ShaderAttributeList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderAttributeList(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_ShaderAttributeList^ Assign(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Append(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Prepend(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderAttribute theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	Macad::Occt::Graphic3d_ShaderAttribute^ First();
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeFirst();
	Macad::Occt::Graphic3d_ShaderAttribute^ Last();
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeLast();
	Macad::Occt::Graphic3d_ShaderAttribute^ Value(int theIndex);
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
}; // class Graphic3d_ShaderAttributeList

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfAspectsToAspects
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfAspectsToAspects sealed : public BaseClass<::Graphic3d_MapOfAspectsToAspects>
{

#ifdef Include_Graphic3d_MapOfAspectsToAspects_h
public:
	Include_Graphic3d_MapOfAspectsToAspects_h
#endif

public:
	Graphic3d_MapOfAspectsToAspects(::Graphic3d_MapOfAspectsToAspects* nativeInstance)
		: BaseClass<::Graphic3d_MapOfAspectsToAspects>( nativeInstance, true )
	{}

	Graphic3d_MapOfAspectsToAspects(::Graphic3d_MapOfAspectsToAspects& nativeInstance)
		: BaseClass<::Graphic3d_MapOfAspectsToAspects>( &nativeInstance, false )
	{}

	property ::Graphic3d_MapOfAspectsToAspects* NativeInstance
	{
		::Graphic3d_MapOfAspectsToAspects* get()
		{
			return static_cast<::Graphic3d_MapOfAspectsToAspects*>(_NativeInstance);
		}
	}

public:
	Graphic3d_MapOfAspectsToAspects();
	Graphic3d_MapOfAspectsToAspects(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_MapOfAspectsToAspects(int theNbBuckets);
	Graphic3d_MapOfAspectsToAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	void Exchange(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	Macad::Occt::Graphic3d_MapOfAspectsToAspects^ Assign(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	Macad::Occt::Graphic3d_Aspects^ Bound(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theItem);
	bool IsBound(Macad::Occt::Graphic3d_Aspects^ theKey);
	bool UnBind(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ Seek(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ Find(Macad::Occt::Graphic3d_Aspects^ theKey);
	bool Find(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theValue);
	Macad::Occt::Graphic3d_Aspects^ ChangeSeek(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ ChangeFind(Macad::Occt::Graphic3d_Aspects^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class Graphic3d_MapOfAspectsToAspects

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfGroup sealed : public BaseClass<::Graphic3d_SequenceOfGroup>
{

#ifdef Include_Graphic3d_SequenceOfGroup_h
public:
	Include_Graphic3d_SequenceOfGroup_h
#endif

public:
	Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup* nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfGroup>( nativeInstance, true )
	{}

	Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup& nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfGroup>( &nativeInstance, false )
	{}

	property ::Graphic3d_SequenceOfGroup* NativeInstance
	{
		::Graphic3d_SequenceOfGroup* get()
		{
			return static_cast<::Graphic3d_SequenceOfGroup*>(_NativeInstance);
		}
	}

public:
	Graphic3d_SequenceOfGroup();
	Graphic3d_SequenceOfGroup(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_SequenceOfGroup(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_SequenceOfGroup^ Assign(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_Group^ theItem);
	void Append(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_Group^ theItem);
	void Prepend(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_Group theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	Macad::Occt::Graphic3d_Group^ First();
	Macad::Occt::Graphic3d_Group^ ChangeFirst();
	Macad::Occt::Graphic3d_Group^ Last();
	Macad::Occt::Graphic3d_Group^ ChangeLast();
	Macad::Occt::Graphic3d_Group^ Value(int theIndex);
	Macad::Occt::Graphic3d_Group^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
}; // class Graphic3d_SequenceOfGroup

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfStructure sealed : public BaseClass<::Graphic3d_MapOfStructure>
{

#ifdef Include_Graphic3d_MapOfStructure_h
public:
	Include_Graphic3d_MapOfStructure_h
#endif

public:
	Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure* nativeInstance)
		: BaseClass<::Graphic3d_MapOfStructure>( nativeInstance, true )
	{}

	Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure& nativeInstance)
		: BaseClass<::Graphic3d_MapOfStructure>( &nativeInstance, false )
	{}

	property ::Graphic3d_MapOfStructure* NativeInstance
	{
		::Graphic3d_MapOfStructure* get()
		{
			return static_cast<::Graphic3d_MapOfStructure*>(_NativeInstance);
		}
	}

public:
	Graphic3d_MapOfStructure();
	Graphic3d_MapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_MapOfStructure(int theNbBuckets);
	Graphic3d_MapOfStructure(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Exchange(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	Macad::Occt::Graphic3d_MapOfStructure^ Assign(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	Macad::Occt::Graphic3d_Structure^ Added(Macad::Occt::Graphic3d_Structure^ K);
	bool Contains(Macad::Occt::Graphic3d_Structure^ K);
	bool Remove(Macad::Occt::Graphic3d_Structure^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	bool Contains(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Union(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Unite(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	bool HasIntersection(Macad::Occt::Graphic3d_MapOfStructure^ theMap);
	void Intersection(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Intersect(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Subtraction(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Subtract(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Difference(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Differ(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
}; // class Graphic3d_MapOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfStructure sealed : public BaseClass<::Graphic3d_SequenceOfStructure>
{

#ifdef Include_Graphic3d_SequenceOfStructure_h
public:
	Include_Graphic3d_SequenceOfStructure_h
#endif

public:
	Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure* nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfStructure>( nativeInstance, true )
	{}

	Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure& nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfStructure>( &nativeInstance, false )
	{}

	property ::Graphic3d_SequenceOfStructure* NativeInstance
	{
		::Graphic3d_SequenceOfStructure* get()
		{
			return static_cast<::Graphic3d_SequenceOfStructure*>(_NativeInstance);
		}
	}

public:
	Graphic3d_SequenceOfStructure();
	Graphic3d_SequenceOfStructure(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_SequenceOfStructure(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_SequenceOfStructure^ Assign(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_Structure^ theItem);
	void Append(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_Structure^ theItem);
	void Prepend(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_Structure theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	Macad::Occt::Graphic3d_Structure^ First();
	Macad::Occt::Graphic3d_Structure^ ChangeFirst();
	Macad::Occt::Graphic3d_Structure^ Last();
	Macad::Occt::Graphic3d_Structure^ ChangeLast();
	Macad::Occt::Graphic3d_Structure^ Value(int theIndex);
	Macad::Occt::Graphic3d_Structure^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
}; // class Graphic3d_SequenceOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactoryList
//---------------------------------------------------------------------
public ref class Graphic3d_GraphicDriverFactoryList sealed : public BaseClass<::Graphic3d_GraphicDriverFactoryList>
{

#ifdef Include_Graphic3d_GraphicDriverFactoryList_h
public:
	Include_Graphic3d_GraphicDriverFactoryList_h
#endif

public:
	Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList* nativeInstance)
		: BaseClass<::Graphic3d_GraphicDriverFactoryList>( nativeInstance, true )
	{}

	Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList& nativeInstance)
		: BaseClass<::Graphic3d_GraphicDriverFactoryList>( &nativeInstance, false )
	{}

	property ::Graphic3d_GraphicDriverFactoryList* NativeInstance
	{
		::Graphic3d_GraphicDriverFactoryList* get()
		{
			return static_cast<::Graphic3d_GraphicDriverFactoryList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_GraphicDriverFactoryList();
	Graphic3d_GraphicDriverFactoryList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_GraphicDriverFactoryList(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	int Size();
	Macad::Occt::Graphic3d_GraphicDriverFactoryList^ Assign(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ First();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Last();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Append(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
	/* Method skipped due to unknown mapping: void Append(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	void Append(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Prepend(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
	void Prepend(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriverFactory InsertBefore(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(Graphic3d_GraphicDriverFactoryList theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriverFactory InsertAfter(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Graphic3d_GraphicDriverFactoryList theOther, Iterator theIter, ) */
	void Reverse();
}; // class Graphic3d_GraphicDriverFactoryList

//---------------------------------------------------------------------
//  Class  Graphic3d_BufferRange
//---------------------------------------------------------------------
public ref class Graphic3d_BufferRange sealed : public BaseClass<::Graphic3d_BufferRange>
{

#ifdef Include_Graphic3d_BufferRange_h
public:
	Include_Graphic3d_BufferRange_h
#endif

public:
	Graphic3d_BufferRange(::Graphic3d_BufferRange* nativeInstance)
		: BaseClass<::Graphic3d_BufferRange>( nativeInstance, true )
	{}

	Graphic3d_BufferRange(::Graphic3d_BufferRange& nativeInstance)
		: BaseClass<::Graphic3d_BufferRange>( &nativeInstance, false )
	{}

	property ::Graphic3d_BufferRange* NativeInstance
	{
		::Graphic3d_BufferRange* get()
		{
			return static_cast<::Graphic3d_BufferRange*>(_NativeInstance);
		}
	}

public:
	Graphic3d_BufferRange();
	Graphic3d_BufferRange(int theStart, int theLength);
	Graphic3d_BufferRange(Macad::Occt::Graphic3d_BufferRange^ parameter1);
	bool IsEmpty();
	int Upper();
	void Clear();
	void Unite(Macad::Occt::Graphic3d_BufferRange^ theRange);
}; // class Graphic3d_BufferRange

//---------------------------------------------------------------------
//  Class  Graphic3d_Attribute
//---------------------------------------------------------------------
public ref class Graphic3d_Attribute sealed : public BaseClass<::Graphic3d_Attribute>
{

#ifdef Include_Graphic3d_Attribute_h
public:
	Include_Graphic3d_Attribute_h
#endif

public:
	Graphic3d_Attribute(::Graphic3d_Attribute* nativeInstance)
		: BaseClass<::Graphic3d_Attribute>( nativeInstance, true )
	{}

	Graphic3d_Attribute(::Graphic3d_Attribute& nativeInstance)
		: BaseClass<::Graphic3d_Attribute>( &nativeInstance, false )
	{}

	property ::Graphic3d_Attribute* NativeInstance
	{
		::Graphic3d_Attribute* get()
		{
			return static_cast<::Graphic3d_Attribute*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Attribute();
	Graphic3d_Attribute(Macad::Occt::Graphic3d_Attribute^ parameter1);
	int Stride();
	static int Stride(Macad::Occt::Graphic3d_TypeOfData theType);
}; // class Graphic3d_Attribute

//---------------------------------------------------------------------
//  Class  Graphic3d_PolygonOffset
//---------------------------------------------------------------------
public ref class Graphic3d_PolygonOffset sealed : public BaseClass<::Graphic3d_PolygonOffset>
{

#ifdef Include_Graphic3d_PolygonOffset_h
public:
	Include_Graphic3d_PolygonOffset_h
#endif

public:
	Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset* nativeInstance)
		: BaseClass<::Graphic3d_PolygonOffset>( nativeInstance, true )
	{}

	Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset& nativeInstance)
		: BaseClass<::Graphic3d_PolygonOffset>( &nativeInstance, false )
	{}

	property ::Graphic3d_PolygonOffset* NativeInstance
	{
		::Graphic3d_PolygonOffset* get()
		{
			return static_cast<::Graphic3d_PolygonOffset*>(_NativeInstance);
		}
	}

public:
	Graphic3d_PolygonOffset();
	Graphic3d_PolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ parameter1);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PolygonOffset

//---------------------------------------------------------------------
//  Class  Graphic3d_ValueInterface
//---------------------------------------------------------------------
public ref class Graphic3d_ValueInterface : public BaseClass<::Graphic3d_ValueInterface>
{

#ifdef Include_Graphic3d_ValueInterface_h
public:
	Include_Graphic3d_ValueInterface_h
#endif

public:
	Graphic3d_ValueInterface(::Graphic3d_ValueInterface* nativeInstance)
		: BaseClass<::Graphic3d_ValueInterface>( nativeInstance, true )
	{}

	Graphic3d_ValueInterface(::Graphic3d_ValueInterface& nativeInstance)
		: BaseClass<::Graphic3d_ValueInterface>( &nativeInstance, false )
	{}

	property ::Graphic3d_ValueInterface* NativeInstance
	{
		::Graphic3d_ValueInterface* get()
		{
			return static_cast<::Graphic3d_ValueInterface*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ValueInterface(Macad::Occt::Graphic3d_ValueInterface^ parameter1);
	Graphic3d_ValueInterface();
	size_t TypeID();
}; // class Graphic3d_ValueInterface

//---------------------------------------------------------------------
//  Class  Graphic3d_ZLayerSettings
//---------------------------------------------------------------------
public ref class Graphic3d_ZLayerSettings sealed : public BaseClass<::Graphic3d_ZLayerSettings>
{

#ifdef Include_Graphic3d_ZLayerSettings_h
public:
	Include_Graphic3d_ZLayerSettings_h
#endif

public:
	Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings* nativeInstance)
		: BaseClass<::Graphic3d_ZLayerSettings>( nativeInstance, true )
	{}

	Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings& nativeInstance)
		: BaseClass<::Graphic3d_ZLayerSettings>( &nativeInstance, false )
	{}

	property ::Graphic3d_ZLayerSettings* NativeInstance
	{
		::Graphic3d_ZLayerSettings* get()
		{
			return static_cast<::Graphic3d_ZLayerSettings*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ZLayerSettings();
	Graphic3d_ZLayerSettings(Macad::Occt::Graphic3d_ZLayerSettings^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Name();
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	Macad::Occt::Graphic3d_LightSet^ Lights();
	void SetLights(Macad::Occt::Graphic3d_LightSet^ theLights);
	Macad::Occt::XYZ Origin();
	Macad::Occt::TopLoc_Datum3D^ OriginTransformation();
	void SetOrigin(Macad::Occt::XYZ theOrigin);
	bool HasCullingDistance();
	double CullingDistance();
	void SetCullingDistance(double theDistance);
	bool HasCullingSize();
	double CullingSize();
	void SetCullingSize(double theSize);
	bool IsImmediate();
	void SetImmediate(bool theValue);
	bool IsRaytracable();
	void SetRaytracable(bool theToRaytrace);
	bool UseEnvironmentTexture();
	void SetEnvironmentTexture(bool theValue);
	bool ToEnableDepthTest();
	void SetEnableDepthTest(bool theValue);
	bool ToEnableDepthWrite();
	void SetEnableDepthWrite(bool theValue);
	bool ToClearDepth();
	void SetClearDepth(bool theValue);
	bool ToRenderInDepthPrepass();
	void SetRenderInDepthPrepass(bool theToRender);
	Macad::Occt::Graphic3d_PolygonOffset^ PolygonOffset();
	void SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theParams);
	Macad::Occt::Graphic3d_PolygonOffset^ ChangePolygonOffset();
	void SetDepthOffsetPositive();
	void SetDepthOffsetNegative();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_ZLayerSettings

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPrimitives
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfPrimitives : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ArrayOfPrimitives_h
public:
	Include_Graphic3d_ArrayOfPrimitives_h
#endif

protected:
	Graphic3d_ArrayOfPrimitives(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_ArrayOfPrimitives(::Graphic3d_ArrayOfPrimitives* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ArrayOfPrimitives(::Graphic3d_ArrayOfPrimitives& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfPrimitives* NativeInstance
	{
		::Graphic3d_ArrayOfPrimitives* get()
		{
			return static_cast<::Graphic3d_ArrayOfPrimitives*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateDowncasted(::Graphic3d_ArrayOfPrimitives* instance);

public:
	Graphic3d_ArrayOfPrimitives(Macad::Occt::Graphic3d_ArrayOfPrimitives^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxEdges, int theArrayFlags);
	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
	/* Method skipped due to unknown mapping: Graphic3d_Buffer Attributes() */
	Macad::Occt::Graphic3d_TypeOfPrimitiveArray Type();
	System::String^ StringType();
	bool HasVertexNormals();
	bool HasVertexColors();
	bool HasVertexTexels();
	int VertexNumber();
	int VertexNumberAllocated();
	int ItemNumber();
	bool IsValid();
	int AddVertex(Macad::Occt::Pnt theVertex);
	/* Method skipped due to unknown mapping: Standard_Integer AddVertex(Graphic3d_Vec3 theVertex, ) */
	int AddVertex(double theX, double theY, double theZ);
	int AddVertex(float theX, float theY, float theZ);
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Quantity_Color^ theColor);
	int AddVertex(Macad::Occt::Pnt theVertex, int theColor32);
	/* Method skipped due to unknown mapping: Standard_Integer AddVertex(gp_Pnt theVertex, Graphic3d_Vec4ub theColor, ) */
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal);
	int AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ);
	int AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ);
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Quantity_Color^ theColor);
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, int theColor32);
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Pnt2d theTexel);
	int AddVertex(double theX, double theY, double theZ, double theTX, double theTY);
	int AddVertex(float theX, float theY, float theZ, float theTX, float theTY);
	int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Pnt2d theTexel);
	int AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ, double theTX, double theTY);
	int AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ, float theTX, float theTY);
	void SetVertice(int theIndex, Macad::Occt::Pnt theVertex);
	void SetVertice(int theIndex, float theX, float theY, float theZ);
	void SetVertexColor(int theIndex, Macad::Occt::Quantity_Color^ theColor);
	void SetVertexColor(int theIndex, double theR, double theG, double theB);
	/* Method skipped due to unknown mapping: void SetVertexColor(Standard_Integer theIndex, Graphic3d_Vec4ub theColor, ) */
	void SetVertexColor(int theIndex, int theColor32);
	void SetVertexNormal(int theIndex, Macad::Occt::Dir theNormal);
	void SetVertexNormal(int theIndex, double theNX, double theNY, double theNZ);
	void SetVertexTexel(int theIndex, Macad::Occt::Pnt2d theTexel);
	void SetVertexTexel(int theIndex, double theTX, double theTY);
	Macad::Occt::Pnt Vertice(int theRank);
	void Vertice(int theRank, double% theX, double% theY, double% theZ);
	Macad::Occt::Quantity_Color^ VertexColor(int theRank);
	/* Method skipped due to unknown mapping: void VertexColor(Standard_Integer theIndex, Graphic3d_Vec4ub theColor, ) */
	void VertexColor(int theRank, double% theR, double% theG, double% theB);
	void VertexColor(int theRank, int% theColor);
	Macad::Occt::Dir VertexNormal(int theRank);
	void VertexNormal(int theRank, double% theNX, double% theNY, double% theNZ);
	Macad::Occt::Pnt2d VertexTexel(int theRank);
	void VertexTexel(int theRank, double% theTX, double% theTY);
	/* Method skipped due to unknown mapping: Graphic3d_IndexBuffer Indices() */
	int EdgeNumber();
	int EdgeNumberAllocated();
	int Edge(int theRank);
	int AddEdge(int theVertexIndex);
	int AddEdges(int theVertexIndex1, int theVertexIndex2);
	int AddSegmentEdges(int theVertexIndex1, int theVertexIndex2);
	int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
	int AddTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
	/* Method skipped due to unknown mapping: Standard_Integer AddTriangleEdges(Graphic3d_Vec3i theIndexes, ) */
	/* Method skipped due to unknown mapping: Standard_Integer AddTriangleEdges(Graphic3d_Vec4i theIndexes, ) */
	int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	int AddQuadEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	int AddQuadTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	/* Method skipped due to unknown mapping: Standard_Integer AddQuadTriangleEdges(Graphic3d_Vec4i theIndexes, ) */
	void AddTriangleStripEdges(int theVertexLower, int theVertexUpper);
	void AddTriangleFanEdges(int theVertexLower, int theVertexUpper, bool theToClose);
	void AddPolylineEdges(int theVertexLower, int theVertexUpper, bool theToClose);
	/* Method skipped due to unknown mapping: Graphic3d_BoundBuffer Bounds() */
	bool HasBoundColors();
	int BoundNumber();
	int BoundNumberAllocated();
	int Bound(int theRank);
	Macad::Occt::Quantity_Color^ BoundColor(int theRank);
	void BoundColor(int theRank, double% theR, double% theG, double% theB);
	int AddBound(int theEdgeNumber);
	int AddBound(int theEdgeNumber, Macad::Occt::Quantity_Color^ theBColor);
	int AddBound(int theEdgeNumber, double theR, double theG, double theB);
	void SetBoundColor(int theIndex, Macad::Occt::Quantity_Color^ theColor);
	void SetBoundColor(int theIndex, double theR, double theG, double theB);
}; // class Graphic3d_ArrayOfPrimitives

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPoints
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfPoints sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPoints_h
public:
	Include_Graphic3d_ArrayOfPoints_h
#endif

public:
	Graphic3d_ArrayOfPoints(::Graphic3d_ArrayOfPoints* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfPoints(::Graphic3d_ArrayOfPoints& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfPoints* NativeInstance
	{
		::Graphic3d_ArrayOfPoints* get()
		{
			return static_cast<::Graphic3d_ArrayOfPoints*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfPoints^ CreateDowncasted(::Graphic3d_ArrayOfPoints* instance);

public:
	Graphic3d_ArrayOfPoints(int theMaxVertexs, int theArrayFlags);
	Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors, bool theHasVNormals);
	Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors);
	Graphic3d_ArrayOfPoints(int theMaxVertexs);
	Graphic3d_ArrayOfPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ parameter1);
}; // class Graphic3d_ArrayOfPoints

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolygons
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfPolygons sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPolygons_h
public:
	Include_Graphic3d_ArrayOfPolygons_h
#endif

public:
	Graphic3d_ArrayOfPolygons(::Graphic3d_ArrayOfPolygons* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfPolygons(::Graphic3d_ArrayOfPolygons& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfPolygons* NativeInstance
	{
		::Graphic3d_ArrayOfPolygons* get()
		{
			return static_cast<::Graphic3d_ArrayOfPolygons*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfPolygons^ CreateDowncasted(::Graphic3d_ArrayOfPolygons* instance);

public:
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds);
	Graphic3d_ArrayOfPolygons(int theMaxVertexs);
	Graphic3d_ArrayOfPolygons(Macad::Occt::Graphic3d_ArrayOfPolygons^ parameter1);
}; // class Graphic3d_ArrayOfPolygons

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolylines
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfPolylines sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPolylines_h
public:
	Include_Graphic3d_ArrayOfPolylines_h
#endif

public:
	Graphic3d_ArrayOfPolylines(::Graphic3d_ArrayOfPolylines* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfPolylines(::Graphic3d_ArrayOfPolylines& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfPolylines* NativeInstance
	{
		::Graphic3d_ArrayOfPolylines* get()
		{
			return static_cast<::Graphic3d_ArrayOfPolylines*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfPolylines^ CreateDowncasted(::Graphic3d_ArrayOfPolylines* instance);

public:
	Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
	Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors, bool theHasBColors);
	Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors);
	Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges);
	Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds);
	Graphic3d_ArrayOfPolylines(int theMaxVertexs);
	Graphic3d_ArrayOfPolylines(Macad::Occt::Graphic3d_ArrayOfPolylines^ parameter1);
}; // class Graphic3d_ArrayOfPolylines

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangles
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfQuadrangles sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfQuadrangles_h
public:
	Include_Graphic3d_ArrayOfQuadrangles_h
#endif

public:
	Graphic3d_ArrayOfQuadrangles(::Graphic3d_ArrayOfQuadrangles* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfQuadrangles(::Graphic3d_ArrayOfQuadrangles& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfQuadrangles* NativeInstance
	{
		::Graphic3d_ArrayOfQuadrangles* get()
		{
			return static_cast<::Graphic3d_ArrayOfQuadrangles*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfQuadrangles^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangles* instance);

public:
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels);
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals);
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges);
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs);
	Graphic3d_ArrayOfQuadrangles(Macad::Occt::Graphic3d_ArrayOfQuadrangles^ parameter1);
}; // class Graphic3d_ArrayOfQuadrangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangleStrips
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfQuadrangleStrips sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfQuadrangleStrips_h
public:
	Include_Graphic3d_ArrayOfQuadrangleStrips_h
#endif

public:
	Graphic3d_ArrayOfQuadrangleStrips(::Graphic3d_ArrayOfQuadrangleStrips* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfQuadrangleStrips(::Graphic3d_ArrayOfQuadrangleStrips& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfQuadrangleStrips* NativeInstance
	{
		::Graphic3d_ArrayOfQuadrangleStrips* get()
		{
			return static_cast<::Graphic3d_ArrayOfQuadrangleStrips*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangleStrips* instance);

public:
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors, bool theHasVTexels);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips);
	Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs);
	Graphic3d_ArrayOfQuadrangleStrips(Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ parameter1);
}; // class Graphic3d_ArrayOfQuadrangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfSegments
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfSegments sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfSegments_h
public:
	Include_Graphic3d_ArrayOfSegments_h
#endif

public:
	Graphic3d_ArrayOfSegments(::Graphic3d_ArrayOfSegments* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfSegments(::Graphic3d_ArrayOfSegments& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfSegments* NativeInstance
	{
		::Graphic3d_ArrayOfSegments* get()
		{
			return static_cast<::Graphic3d_ArrayOfSegments*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfSegments^ CreateDowncasted(::Graphic3d_ArrayOfSegments* instance);

public:
	Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
	Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, bool theHasVColors);
	Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges);
	Graphic3d_ArrayOfSegments(int theMaxVertexs);
	Graphic3d_ArrayOfSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ parameter1);
}; // class Graphic3d_ArrayOfSegments

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleFans
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfTriangleFans sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangleFans_h
public:
	Include_Graphic3d_ArrayOfTriangleFans_h
#endif

public:
	Graphic3d_ArrayOfTriangleFans(::Graphic3d_ArrayOfTriangleFans* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfTriangleFans(::Graphic3d_ArrayOfTriangleFans& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfTriangleFans* NativeInstance
	{
		::Graphic3d_ArrayOfTriangleFans* get()
		{
			return static_cast<::Graphic3d_ArrayOfTriangleFans*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfTriangleFans^ CreateDowncasted(::Graphic3d_ArrayOfTriangleFans* instance);

public:
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, int theArrayFlags);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans);
	Graphic3d_ArrayOfTriangleFans(int theMaxVertexs);
	Graphic3d_ArrayOfTriangleFans(Macad::Occt::Graphic3d_ArrayOfTriangleFans^ parameter1);
}; // class Graphic3d_ArrayOfTriangleFans

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangles
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfTriangles sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangles_h
public:
	Include_Graphic3d_ArrayOfTriangles_h
#endif

public:
	Graphic3d_ArrayOfTriangles(::Graphic3d_ArrayOfTriangles* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfTriangles(::Graphic3d_ArrayOfTriangles& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfTriangles* NativeInstance
	{
		::Graphic3d_ArrayOfTriangles* get()
		{
			return static_cast<::Graphic3d_ArrayOfTriangles*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfTriangles^ CreateDowncasted(::Graphic3d_ArrayOfTriangles* instance);

public:
	Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
	Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels);
	Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals);
	Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges);
	Graphic3d_ArrayOfTriangles(int theMaxVertexs);
	Graphic3d_ArrayOfTriangles(Macad::Occt::Graphic3d_ArrayOfTriangles^ parameter1);
}; // class Graphic3d_ArrayOfTriangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleStrips
//---------------------------------------------------------------------
public ref class Graphic3d_ArrayOfTriangleStrips sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangleStrips_h
public:
	Include_Graphic3d_ArrayOfTriangleStrips_h
#endif

public:
	Graphic3d_ArrayOfTriangleStrips(::Graphic3d_ArrayOfTriangleStrips* nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	Graphic3d_ArrayOfTriangleStrips(::Graphic3d_ArrayOfTriangleStrips& nativeInstance)
		: Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
	{}

	property ::Graphic3d_ArrayOfTriangleStrips* NativeInstance
	{
		::Graphic3d_ArrayOfTriangleStrips* get()
		{
			return static_cast<::Graphic3d_ArrayOfTriangleStrips*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfTriangleStrips* instance);

public:
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips);
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs);
	Graphic3d_ArrayOfTriangleStrips(Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ parameter1);
}; // class Graphic3d_ArrayOfTriangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_MarkerImage
//---------------------------------------------------------------------
public ref class Graphic3d_MarkerImage sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_MarkerImage_h
public:
	Include_Graphic3d_MarkerImage_h
#endif

public:
	Graphic3d_MarkerImage(::Graphic3d_MarkerImage* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_MarkerImage(::Graphic3d_MarkerImage& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_MarkerImage* NativeInstance
	{
		::Graphic3d_MarkerImage* get()
		{
			return static_cast<::Graphic3d_MarkerImage*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_MarkerImage^ CreateDowncasted(::Graphic3d_MarkerImage* instance);

public:
	Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Image_PixMap^ theImageAlpha);
	Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage);
	Graphic3d_MarkerImage(Macad::Occt::TColStd_HArray1OfByte^ theBitMap, int theWidth, int theHeight);
	Graphic3d_MarkerImage(Macad::Occt::Graphic3d_MarkerImage^ parameter1);
	/* Method skipped due to unknown mapping: Graphic3d_MarkerImage StandardMarker(Aspect_TypeOfMarker theMarkerType, Standard_ShortReal theScale, Graphic3d_Vec4 theColor, ) */
	Macad::Occt::Image_PixMap^ GetImage();
	Macad::Occt::Image_PixMap^ GetImageAlpha();
	Macad::Occt::TCollection_AsciiString^ GetImageId();
	Macad::Occt::TCollection_AsciiString^ GetImageAlphaId();
	void GetTextureSize(int% theWidth, int% theHeight);
	bool IsColoredImage();
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue, bool theIsTopDown);
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue);
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray();
}; // class Graphic3d_MarkerImage

//---------------------------------------------------------------------
//  Class  Graphic3d_PBRMaterial
//---------------------------------------------------------------------
public ref class Graphic3d_PBRMaterial sealed : public BaseClass<::Graphic3d_PBRMaterial>
{

#ifdef Include_Graphic3d_PBRMaterial_h
public:
	Include_Graphic3d_PBRMaterial_h
#endif

public:
	Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial* nativeInstance)
		: BaseClass<::Graphic3d_PBRMaterial>( nativeInstance, true )
	{}

	Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial& nativeInstance)
		: BaseClass<::Graphic3d_PBRMaterial>( &nativeInstance, false )
	{}

	property ::Graphic3d_PBRMaterial* NativeInstance
	{
		::Graphic3d_PBRMaterial* get()
		{
			return static_cast<::Graphic3d_PBRMaterial*>(_NativeInstance);
		}
	}

public:
	Graphic3d_PBRMaterial();
	Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_BSDF^ theBSDF);
	Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ parameter1);
	float Metallic();
	void SetMetallic(float theMetallic);
	static float Roughness(float theNormalizedRoughness);
	float Roughness();
	float NormalizedRoughness();
	void SetRoughness(float theRoughness);
	float IOR();
	void SetIOR(float theIOR);
	Macad::Occt::Quantity_ColorRGBA^ Color();
	void SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	float Alpha();
	void SetAlpha(float theAlpha);
	/* Method skipped due to unknown mapping: Graphic3d_Vec3 Emission() */
	/* Method skipped due to unknown mapping: void SetEmission(Graphic3d_Vec3 theEmission, ) */
	void SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF);
	static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT, unsigned int theNbIntegralSamples);
	static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT);
	static float RoughnessFromSpecular(Macad::Occt::Quantity_Color^ theSpecular, double theShiness);
	static float MetallicFromSpecular(Macad::Occt::Quantity_Color^ theSpecular);
	static float MinRoughness();
	static float SpecIBLMapSamplesFactor(float theProbability, float theRoughness);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PBRMaterial

//---------------------------------------------------------------------
//  Class  Graphic3d_Fresnel
//---------------------------------------------------------------------
public ref class Graphic3d_Fresnel sealed : public BaseClass<::Graphic3d_Fresnel>
{

#ifdef Include_Graphic3d_Fresnel_h
public:
	Include_Graphic3d_Fresnel_h
#endif

public:
	Graphic3d_Fresnel(::Graphic3d_Fresnel* nativeInstance)
		: BaseClass<::Graphic3d_Fresnel>( nativeInstance, true )
	{}

	Graphic3d_Fresnel(::Graphic3d_Fresnel& nativeInstance)
		: BaseClass<::Graphic3d_Fresnel>( &nativeInstance, false )
	{}

	property ::Graphic3d_Fresnel* NativeInstance
	{
		::Graphic3d_Fresnel* get()
		{
			return static_cast<::Graphic3d_Fresnel*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Fresnel();
	Graphic3d_Fresnel(Macad::Occt::Graphic3d_Fresnel^ parameter1);
	/* Method skipped due to unknown mapping: Graphic3d_Fresnel CreateSchlick(Graphic3d_Vec3 theSpecularColor, ) */
	static Macad::Occt::Graphic3d_Fresnel^ CreateConstant(float theReflection);
	static Macad::Occt::Graphic3d_Fresnel^ CreateDielectric(float theRefractionIndex);
	static Macad::Occt::Graphic3d_Fresnel^ CreateConductor(float theRefractionIndex, float theAbsorptionIndex);
	/* Method skipped due to unknown mapping: Graphic3d_Fresnel CreateConductor(Graphic3d_Vec3 theRefractionIndex, Graphic3d_Vec3 theAbsorptionIndex, ) */
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 Serialize() */
	Macad::Occt::Graphic3d_FresnelModel FresnelType();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Fresnel

//---------------------------------------------------------------------
//  Class  Graphic3d_BSDF
//---------------------------------------------------------------------
public ref class Graphic3d_BSDF sealed : public BaseClass<::Graphic3d_BSDF>
{

#ifdef Include_Graphic3d_BSDF_h
public:
	Include_Graphic3d_BSDF_h
#endif

public:
	Graphic3d_BSDF(::Graphic3d_BSDF* nativeInstance)
		: BaseClass<::Graphic3d_BSDF>( nativeInstance, true )
	{}

	Graphic3d_BSDF(::Graphic3d_BSDF& nativeInstance)
		: BaseClass<::Graphic3d_BSDF>( &nativeInstance, false )
	{}

	property ::Graphic3d_BSDF* NativeInstance
	{
		::Graphic3d_BSDF* get()
		{
			return static_cast<::Graphic3d_BSDF*>(_NativeInstance);
		}
	}

public:
	Graphic3d_BSDF();
	Graphic3d_BSDF(Macad::Occt::Graphic3d_BSDF^ parameter1);
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateDiffuse(Graphic3d_Vec3 theWeight, ) */
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateMetallic(Graphic3d_Vec3 theWeight, Graphic3d_Fresnel theFresnel, Standard_ShortReal theRoughness, ) */
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateTransparent(Graphic3d_Vec3 theWeight, Graphic3d_Vec3 theAbsorptionColor, Standard_ShortReal theAbsorptionCoeff, ) */
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateGlass(Graphic3d_Vec3 theWeight, Graphic3d_Vec3 theAbsorptionColor, Standard_ShortReal theAbsorptionCoeff, Standard_ShortReal theRefractionIndex, ) */
	static Macad::Occt::Graphic3d_BSDF^ CreateMetallicRoughness(Macad::Occt::Graphic3d_PBRMaterial^ thePbr);
	void Normalize();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_BSDF

//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialAspect
//---------------------------------------------------------------------
public ref class Graphic3d_MaterialAspect sealed : public BaseClass<::Graphic3d_MaterialAspect>
{

#ifdef Include_Graphic3d_MaterialAspect_h
public:
	Include_Graphic3d_MaterialAspect_h
#endif

public:
	Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect* nativeInstance)
		: BaseClass<::Graphic3d_MaterialAspect>( nativeInstance, true )
	{}

	Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect& nativeInstance)
		: BaseClass<::Graphic3d_MaterialAspect>( &nativeInstance, false )
	{}

	property ::Graphic3d_MaterialAspect* NativeInstance
	{
		::Graphic3d_MaterialAspect* get()
		{
			return static_cast<::Graphic3d_MaterialAspect*>(_NativeInstance);
		}
	}

public:
	Graphic3d_MaterialAspect();
	Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_NameOfMaterial theName);
	Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_MaterialAspect^ parameter1);
	static int NumberOfMaterials();
	static System::String^ MaterialName(int theRank);
	static Macad::Occt::Graphic3d_TypeOfMaterial MaterialType(int theRank);
	static bool MaterialFromName(System::String^ theName, Macad::Occt::Graphic3d_NameOfMaterial% theMat);
	static Macad::Occt::Graphic3d_NameOfMaterial MaterialFromName(System::String^ theName);
	Macad::Occt::Graphic3d_NameOfMaterial Name();
	Macad::Occt::Graphic3d_NameOfMaterial RequestedName();
	Macad::Occt::TCollection_AsciiString^ StringName();
	System::String^ MaterialName();
	void SetMaterialName(Macad::Occt::TCollection_AsciiString^ theName);
	void Reset();
	Macad::Occt::Quantity_Color^ Color();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	float Transparency();
	float Alpha();
	void SetTransparency(float theValue);
	void SetAlpha(float theValue);
	Macad::Occt::Quantity_Color^ AmbientColor();
	void SetAmbientColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ DiffuseColor();
	void SetDiffuseColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ SpecularColor();
	void SetSpecularColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ EmissiveColor();
	void SetEmissiveColor(Macad::Occt::Quantity_Color^ theColor);
	float Shininess();
	void SetShininess(float theValue);
	void IncreaseShine(float theDelta);
	float RefractionIndex();
	void SetRefractionIndex(float theValue);
	Macad::Occt::Graphic3d_BSDF^ BSDF();
	void SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF);
	Macad::Occt::Graphic3d_PBRMaterial^ PBRMaterial();
	void SetPBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ thePBRMaterial);
	bool ReflectionMode(Macad::Occt::Graphic3d_TypeOfReflection theType);
	Macad::Occt::Graphic3d_TypeOfMaterial MaterialType();
	bool MaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType);
	void SetMaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType);
	bool IsDifferent(Macad::Occt::Graphic3d_MaterialAspect^ theOther);
	bool IsEqual(Macad::Occt::Graphic3d_MaterialAspect^ theOther);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	void SetReflectionModeOff(Macad::Occt::Graphic3d_TypeOfReflection theType);
}; // class Graphic3d_MaterialAspect

//---------------------------------------------------------------------
//  Class  Graphic3d_HatchStyle
//---------------------------------------------------------------------
public ref class Graphic3d_HatchStyle sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_HatchStyle_h
public:
	Include_Graphic3d_HatchStyle_h
#endif

public:
	Graphic3d_HatchStyle(::Graphic3d_HatchStyle* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_HatchStyle(::Graphic3d_HatchStyle& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_HatchStyle* NativeInstance
	{
		::Graphic3d_HatchStyle* get()
		{
			return static_cast<::Graphic3d_HatchStyle*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_HatchStyle^ CreateDowncasted(::Graphic3d_HatchStyle* instance);

public:
	Graphic3d_HatchStyle(Macad::Occt::Image_PixMap^ thePattern);
	Graphic3d_HatchStyle(Macad::Occt::Aspect_HatchStyle theType);
	Graphic3d_HatchStyle(Macad::Occt::Graphic3d_HatchStyle^ parameter1);
	unsigned char Pattern();
	int HatchType();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_HatchStyle

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttribute
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderAttribute sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderAttribute_h
public:
	Include_Graphic3d_ShaderAttribute_h
#endif

public:
	Graphic3d_ShaderAttribute(::Graphic3d_ShaderAttribute* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ShaderAttribute(::Graphic3d_ShaderAttribute& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ShaderAttribute* NativeInstance
	{
		::Graphic3d_ShaderAttribute* get()
		{
			return static_cast<::Graphic3d_ShaderAttribute*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ShaderAttribute^ CreateDowncasted(::Graphic3d_ShaderAttribute* instance);

public:
	Graphic3d_ShaderAttribute(Macad::Occt::TCollection_AsciiString^ theName, int theLocation);
	Graphic3d_ShaderAttribute(Macad::Occt::Graphic3d_ShaderAttribute^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Name();
	int Location();
}; // class Graphic3d_ShaderAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObject
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderObject sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderObject_h
public:
	Include_Graphic3d_ShaderObject_h
#endif

public:
	Graphic3d_ShaderObject(::Graphic3d_ShaderObject* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ShaderObject(::Graphic3d_ShaderObject& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ShaderObject* NativeInstance
	{
		::Graphic3d_ShaderObject* get()
		{
			return static_cast<::Graphic3d_ShaderObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ShaderObject^ CreateDowncasted(::Graphic3d_ShaderObject* instance);

public:
	Graphic3d_ShaderObject(Macad::Occt::Graphic3d_ShaderObject^ parameter1);
	static Macad::Occt::Graphic3d_ShaderObject^ CreateFromFile(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ thePath);
	static Macad::Occt::Graphic3d_ShaderObject^ CreateFromSource(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ theSource);
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	bool IsDone();
	/* Method skipped due to unknown mapping: OSD_Path Path() */
	Macad::Occt::TCollection_AsciiString^ Source();
	Macad::Occt::Graphic3d_TypeOfShaderObject Type();
	Macad::Occt::TCollection_AsciiString^ GetId();
}; // class Graphic3d_ShaderObject

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureParams
//---------------------------------------------------------------------
public ref class Graphic3d_TextureParams sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TextureParams_h
public:
	Include_Graphic3d_TextureParams_h
#endif

public:
	Graphic3d_TextureParams(::Graphic3d_TextureParams* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_TextureParams(::Graphic3d_TextureParams& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_TextureParams* NativeInstance
	{
		::Graphic3d_TextureParams* get()
		{
			return static_cast<::Graphic3d_TextureParams*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TextureParams^ CreateDowncasted(::Graphic3d_TextureParams* instance);

public:
	Graphic3d_TextureParams();
	Graphic3d_TextureParams(Macad::Occt::Graphic3d_TextureParams^ parameter1);
	Macad::Occt::Graphic3d_TextureUnit TextureUnit();
	void SetTextureUnit(Macad::Occt::Graphic3d_TextureUnit theUnit);
	bool IsModulate();
	void SetModulate(bool theToModulate);
	bool IsRepeat();
	void SetRepeat(bool theToRepeat);
	Macad::Occt::Graphic3d_TypeOfTextureFilter Filter();
	void SetFilter(Macad::Occt::Graphic3d_TypeOfTextureFilter theFilter);
	Macad::Occt::Graphic3d_LevelOfTextureAnisotropy AnisoFilter();
	void SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel);
	float Rotation();
	void SetRotation(float theAngleDegrees);
	Macad::Occt::Graphic3d_Vec2^ Scale();
	void SetScale(Macad::Occt::Graphic3d_Vec2^ theScale);
	Macad::Occt::Graphic3d_Vec2^ Translation();
	void SetTranslation(Macad::Occt::Graphic3d_Vec2^ theVec);
	Macad::Occt::Graphic3d_TypeOfTextureMode GenMode();
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 GenPlaneS() */
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 GenPlaneT() */
	/* Method skipped due to unknown mapping: void SetGenMode(Graphic3d_TypeOfTextureMode theMode, Graphic3d_Vec4 thePlaneS, Graphic3d_Vec4 thePlaneT, ) */
	int BaseLevel();
	int MaxLevel();
	void SetLevelsRange(int theFirstLevel, int theSecondLevel);
	void SetLevelsRange(int theFirstLevel);
	unsigned int SamplerRevision();
}; // class Graphic3d_TextureParams

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureRoot
//---------------------------------------------------------------------
public ref class Graphic3d_TextureRoot : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TextureRoot_h
public:
	Include_Graphic3d_TextureRoot_h
#endif

protected:
	Graphic3d_TextureRoot(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_TextureRoot(::Graphic3d_TextureRoot* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_TextureRoot(::Graphic3d_TextureRoot& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_TextureRoot* NativeInstance
	{
		::Graphic3d_TextureRoot* get()
		{
			return static_cast<::Graphic3d_TextureRoot*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TextureRoot^ CreateDowncasted(::Graphic3d_TextureRoot* instance);

public:
	Graphic3d_TextureRoot(Macad::Occt::Graphic3d_TextureRoot^ parameter1);
	static Macad::Occt::TCollection_AsciiString^ TexturesFolder();
	bool IsDone();
	/* Method skipped due to unknown mapping: OSD_Path Path() */
	Macad::Occt::Graphic3d_TypeOfTexture Type();
	Macad::Occt::TCollection_AsciiString^ GetId();
	size_t Revision();
	void UpdateRevision();
	Macad::Occt::Image_CompressedPixMap^ GetCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Graphic3d_TextureParams^ GetParams();
	bool IsColorMap();
	void SetColorMap(bool theIsColor);
	bool IsTopDown();
}; // class Graphic3d_TextureRoot

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureMap
//---------------------------------------------------------------------
public ref class Graphic3d_TextureMap : public Macad::Occt::Graphic3d_TextureRoot
{

#ifdef Include_Graphic3d_TextureMap_h
public:
	Include_Graphic3d_TextureMap_h
#endif

protected:
	Graphic3d_TextureMap(InitMode init)
		: Macad::Occt::Graphic3d_TextureRoot( init )
	{}

public:
	Graphic3d_TextureMap(::Graphic3d_TextureMap* nativeInstance)
		: Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
	{}

	Graphic3d_TextureMap(::Graphic3d_TextureMap& nativeInstance)
		: Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
	{}

	property ::Graphic3d_TextureMap* NativeInstance
	{
		::Graphic3d_TextureMap* get()
		{
			return static_cast<::Graphic3d_TextureMap*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TextureMap^ CreateDowncasted(::Graphic3d_TextureMap* instance);

public:
	Graphic3d_TextureMap(Macad::Occt::Graphic3d_TextureMap^ parameter1);
	void EnableSmooth();
	bool IsSmoothed();
	void DisableSmooth();
	void EnableModulate();
	void DisableModulate();
	bool IsModulate();
	void EnableRepeat();
	void DisableRepeat();
	bool IsRepeat();
	Macad::Occt::Graphic3d_LevelOfTextureAnisotropy AnisoFilter();
	void SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel);
}; // class Graphic3d_TextureMap

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureSet
//---------------------------------------------------------------------
public ref class Graphic3d_TextureSet sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TextureSet_h
public:
	Include_Graphic3d_TextureSet_h
#endif

public:
	Graphic3d_TextureSet(::Graphic3d_TextureSet* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_TextureSet(::Graphic3d_TextureSet& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_TextureSet* NativeInstance
	{
		::Graphic3d_TextureSet* get()
		{
			return static_cast<::Graphic3d_TextureSet*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TextureSet^ CreateDowncasted(::Graphic3d_TextureSet* instance);

public:
	Graphic3d_TextureSet();
	Graphic3d_TextureSet(int theNbTextures);
	Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureMap^ theTexture);
	Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureSet^ parameter1);
	bool IsEmpty();
	int Size();
	int Lower();
	int Upper();
	Macad::Occt::Graphic3d_TextureMap^ First();
	void SetFirst(Macad::Occt::Graphic3d_TextureMap^ theTexture);
	Macad::Occt::Graphic3d_TextureMap^ Value(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_TextureMap^ theTexture);
}; // class Graphic3d_TextureSet

//---------------------------------------------------------------------
//  Class  Graphic3d_Aspects
//---------------------------------------------------------------------
public ref class Graphic3d_Aspects : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Aspects_h
public:
	Include_Graphic3d_Aspects_h
#endif

protected:
	Graphic3d_Aspects(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_Aspects(::Graphic3d_Aspects* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_Aspects(::Graphic3d_Aspects& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_Aspects* NativeInstance
	{
		::Graphic3d_Aspects* get()
		{
			return static_cast<::Graphic3d_Aspects*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Aspects^ CreateDowncasted(::Graphic3d_Aspects* instance);

public:
	Graphic3d_Aspects();
	Graphic3d_Aspects(Macad::Occt::Graphic3d_Aspects^ parameter1);
	Macad::Occt::Aspect_InteriorStyle InteriorStyle();
	void SetInteriorStyle(Macad::Occt::Aspect_InteriorStyle theStyle);
	Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
	void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel);
	Macad::Occt::Graphic3d_AlphaMode AlphaMode();
	float AlphaCutoff();
	void SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode, float theAlphaCutoff);
	void SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode);
	Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
	Macad::Occt::Quantity_Color^ Color();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ InteriorColor();
	Macad::Occt::Quantity_ColorRGBA^ InteriorColorRGBA();
	void SetInteriorColor(Macad::Occt::Quantity_Color^ theColor);
	void SetInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
	Macad::Occt::Quantity_Color^ BackInteriorColor();
	Macad::Occt::Quantity_ColorRGBA^ BackInteriorColorRGBA();
	void SetBackInteriorColor(Macad::Occt::Quantity_Color^ theColor);
	void SetBackInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
	Macad::Occt::Graphic3d_MaterialAspect^ FrontMaterial();
	Macad::Occt::Graphic3d_MaterialAspect^ ChangeFrontMaterial();
	void SetFrontMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial);
	Macad::Occt::Graphic3d_MaterialAspect^ BackMaterial();
	Macad::Occt::Graphic3d_MaterialAspect^ ChangeBackMaterial();
	void SetBackMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial);
	Macad::Occt::Graphic3d_TypeOfBackfacingModel FaceCulling();
	void SetFaceCulling(Macad::Occt::Graphic3d_TypeOfBackfacingModel theCulling);
	bool Distinguish();
	void SetDistinguish(bool toDistinguish);
	void SetDistinguishOn();
	void SetDistinguishOff();
	/* Method skipped due to unknown mapping: Graphic3d_ShaderProgram ShaderProgram() */
	/* Method skipped due to unknown mapping: void SetShaderProgram(Graphic3d_ShaderProgram theProgram, ) */
	Macad::Occt::Graphic3d_TextureSet^ TextureSet();
	void SetTextureSet(Macad::Occt::Graphic3d_TextureSet^ theTextures);
	Macad::Occt::Graphic3d_TextureMap^ TextureMap();
	void SetTextureMap(Macad::Occt::Graphic3d_TextureMap^ theTexture);
	bool ToMapTexture();
	bool TextureMapState();
	void SetTextureMapOn(bool theToMap);
	void SetTextureMapOn();
	void SetTextureMapOff();
	Macad::Occt::Graphic3d_PolygonOffset^ PolygonOffset();
	void SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theOffset);
	void PolygonOffsets(int% theMode, float% theFactor, float% theUnits);
	void SetPolygonOffsets(int theMode, float theFactor, float theUnits);
	void SetPolygonOffsets(int theMode, float theFactor);
	void SetPolygonOffsets(int theMode);
	Macad::Occt::Aspect_TypeOfLine LineType();
	void SetLineType(Macad::Occt::Aspect_TypeOfLine theType);
	unsigned short LinePattern();
	void SetLinePattern(unsigned short thePattern);
	unsigned short LineStippleFactor();
	void SetLineStippleFactor(unsigned short theFactor);
	float LineWidth();
	void SetLineWidth(float theWidth);
	static unsigned short DefaultLinePatternForType(Macad::Occt::Aspect_TypeOfLine theType);
	static Macad::Occt::Aspect_TypeOfLine DefaultLineTypeForPattern(unsigned short thePattern);
	Macad::Occt::Aspect_TypeOfMarker MarkerType();
	void SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType);
	float MarkerScale();
	void SetMarkerScale(float theScale);
	Macad::Occt::Graphic3d_MarkerImage^ MarkerImage();
	void SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage);
	bool IsMarkerSprite();
	Macad::Occt::TCollection_HAsciiString^ TextFont();
	void SetTextFont(Macad::Occt::TCollection_HAsciiString^ theFont);
	/* Method skipped due to unknown mapping: Font_FontAspect TextFontAspect() */
	/* Method skipped due to unknown mapping: void SetTextFontAspect(Font_FontAspect theFontAspect, ) */
	Macad::Occt::Aspect_TypeOfDisplayText TextDisplayType();
	void SetTextDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theType);
	Macad::Occt::Quantity_ColorRGBA^ ColorSubTitleRGBA();
	Macad::Occt::Quantity_Color^ ColorSubTitle();
	void SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor);
	void SetColorSubTitle(Macad::Occt::Quantity_ColorRGBA^ theColor);
	bool IsTextZoomable();
	void SetTextZoomable(bool theFlag);
	Macad::Occt::Aspect_TypeOfStyleText TextStyle();
	void SetTextStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle);
	float TextAngle();
	void SetTextAngle(float theAngle);
	bool ToDrawEdges();
	void SetDrawEdges(bool theToDraw);
	void SetEdgeOn();
	void SetEdgeOff();
	Macad::Occt::Quantity_Color^ EdgeColor();
	Macad::Occt::Quantity_ColorRGBA^ EdgeColorRGBA();
	void SetEdgeColor(Macad::Occt::Quantity_Color^ theColor);
	void SetEdgeColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
	Macad::Occt::Aspect_TypeOfLine EdgeLineType();
	void SetEdgeLineType(Macad::Occt::Aspect_TypeOfLine theType);
	float EdgeWidth();
	void SetEdgeWidth(double theWidth);
	bool ToSkipFirstEdge();
	void SetSkipFirstEdge(bool theToSkipFirstEdge);
	bool ToDrawSilhouette();
	void SetDrawSilhouette(bool theToDraw);
	Macad::Occt::Graphic3d_HatchStyle^ HatchStyle();
	void SetHatchStyle(Macad::Occt::Graphic3d_HatchStyle^ theStyle);
	void SetHatchStyle(Macad::Occt::Aspect_HatchStyle theStyle);
	bool IsEqual(Macad::Occt::Graphic3d_Aspects^ theOther);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	bool ToSuppressBackFaces();
	void SetSuppressBackFaces(bool theToSuppress);
	bool BackFace();
	void AllowBackFace();
	void SuppressBackFace();
}; // class Graphic3d_Aspects

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectFillArea3d
//---------------------------------------------------------------------
public ref class Graphic3d_AspectFillArea3d sealed : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectFillArea3d_h
public:
	Include_Graphic3d_AspectFillArea3d_h
#endif

public:
	Graphic3d_AspectFillArea3d(::Graphic3d_AspectFillArea3d* nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	Graphic3d_AspectFillArea3d(::Graphic3d_AspectFillArea3d& nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	property ::Graphic3d_AspectFillArea3d* NativeInstance
	{
		::Graphic3d_AspectFillArea3d* get()
		{
			return static_cast<::Graphic3d_AspectFillArea3d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_AspectFillArea3d^ CreateDowncasted(::Graphic3d_AspectFillArea3d* instance);

public:
	Graphic3d_AspectFillArea3d();
	Graphic3d_AspectFillArea3d(Macad::Occt::Aspect_InteriorStyle theInterior, Macad::Occt::Quantity_Color^ theInteriorColor, Macad::Occt::Quantity_Color^ theEdgeColor, Macad::Occt::Aspect_TypeOfLine theEdgeLineType, double theEdgeWidth, Macad::Occt::Graphic3d_MaterialAspect^ theFrontMaterial, Macad::Occt::Graphic3d_MaterialAspect^ theBackMaterial);
	Graphic3d_AspectFillArea3d(Macad::Occt::Graphic3d_AspectFillArea3d^ parameter1);
	bool Edge();
}; // class Graphic3d_AspectFillArea3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectLine3d
//---------------------------------------------------------------------
public ref class Graphic3d_AspectLine3d sealed : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectLine3d_h
public:
	Include_Graphic3d_AspectLine3d_h
#endif

public:
	Graphic3d_AspectLine3d(::Graphic3d_AspectLine3d* nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	Graphic3d_AspectLine3d(::Graphic3d_AspectLine3d& nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	property ::Graphic3d_AspectLine3d* NativeInstance
	{
		::Graphic3d_AspectLine3d* get()
		{
			return static_cast<::Graphic3d_AspectLine3d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_AspectLine3d^ CreateDowncasted(::Graphic3d_AspectLine3d* instance);

public:
	Graphic3d_AspectLine3d();
	Graphic3d_AspectLine3d(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth);
	Graphic3d_AspectLine3d(Macad::Occt::Graphic3d_AspectLine3d^ parameter1);
	Macad::Occt::Aspect_TypeOfLine Type();
	void SetType(Macad::Occt::Aspect_TypeOfLine theType);
	float Width();
	void SetWidth(double theWidth);
	void SetWidth(float theWidth);
}; // class Graphic3d_AspectLine3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectMarker3d
//---------------------------------------------------------------------
public ref class Graphic3d_AspectMarker3d sealed : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectMarker3d_h
public:
	Include_Graphic3d_AspectMarker3d_h
#endif

public:
	Graphic3d_AspectMarker3d(::Graphic3d_AspectMarker3d* nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	Graphic3d_AspectMarker3d(::Graphic3d_AspectMarker3d& nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	property ::Graphic3d_AspectMarker3d* NativeInstance
	{
		::Graphic3d_AspectMarker3d* get()
		{
			return static_cast<::Graphic3d_AspectMarker3d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_AspectMarker3d^ CreateDowncasted(::Graphic3d_AspectMarker3d* instance);

public:
	Graphic3d_AspectMarker3d();
	Graphic3d_AspectMarker3d(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale);
	Graphic3d_AspectMarker3d(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTextureBitmap);
	Graphic3d_AspectMarker3d(Macad::Occt::Image_PixMap^ theTextureImage);
	Graphic3d_AspectMarker3d(Macad::Occt::Graphic3d_AspectMarker3d^ parameter1);
	float Scale();
	void SetScale(float theScale);
	void SetScale(double theScale);
	Macad::Occt::Aspect_TypeOfMarker Type();
	void SetType(Macad::Occt::Aspect_TypeOfMarker theType);
	void GetTextureSize(int% theWidth, int% theHeight);
	Macad::Occt::Graphic3d_MarkerImage^ GetMarkerImage();
	void SetBitMap(int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture);
}; // class Graphic3d_AspectMarker3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectText3d
//---------------------------------------------------------------------
public ref class Graphic3d_AspectText3d sealed : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectText3d_h
public:
	Include_Graphic3d_AspectText3d_h
#endif

public:
	Graphic3d_AspectText3d(::Graphic3d_AspectText3d* nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	Graphic3d_AspectText3d(::Graphic3d_AspectText3d& nativeInstance)
		: Macad::Occt::Graphic3d_Aspects( nativeInstance )
	{}

	property ::Graphic3d_AspectText3d* NativeInstance
	{
		::Graphic3d_AspectText3d* get()
		{
			return static_cast<::Graphic3d_AspectText3d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_AspectText3d^ CreateDowncasted(::Graphic3d_AspectText3d* instance);

public:
	Graphic3d_AspectText3d();
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle, Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle);
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace);
	Graphic3d_AspectText3d(Macad::Occt::Graphic3d_AspectText3d^ parameter1);
	Macad::Occt::Quantity_Color^ Color();
	Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
	Macad::Occt::TCollection_AsciiString^ Font();
	void SetFont(Macad::Occt::TCollection_AsciiString^ theFont);
	void SetFont(System::String^ theFont);
	Macad::Occt::Aspect_TypeOfStyleText Style();
	void SetStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle);
	Macad::Occt::Aspect_TypeOfDisplayText DisplayType();
	void SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
	bool GetTextZoomable();
	float GetTextAngle();
	void SetTextAngle(double theAngle);
	/* Method skipped due to unknown mapping: Font_FontAspect GetTextFontAspect() */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_AspectText3d

//---------------------------------------------------------------------
//  Class  Graphic3d_CStructure
//---------------------------------------------------------------------
public ref class Graphic3d_CStructure : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_CStructure_h
public:
	Include_Graphic3d_CStructure_h
#endif

public:
	Graphic3d_CStructure(::Graphic3d_CStructure* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_CStructure(::Graphic3d_CStructure& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_CStructure* NativeInstance
	{
		::Graphic3d_CStructure* get()
		{
			return static_cast<::Graphic3d_CStructure*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CStructure^ CreateDowncasted(::Graphic3d_CStructure* instance);

public:
	Graphic3d_CStructure(Macad::Occt::Graphic3d_CStructure^ parameter1);
	Macad::Occt::Graphic3d_GraphicDriver^ GraphicDriver();
	Macad::Occt::Graphic3d_SequenceOfGroup^ Groups();
	Macad::Occt::TopLoc_Datum3D^ Transformation();
	void SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf);
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	bool HasGroupTransformPersistence();
	void SetGroupTransformPersistence(bool theValue);
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	/* Method skipped due to unknown mapping: Graphic3d_BndBox3d BoundingBox() */
	/* Method skipped due to unknown mapping: Graphic3d_BndBox3d ChangeBoundingBox() */
	bool IsVisible();
	bool IsVisible(int theViewId);
	void SetZLayer(int theLayerIndex);
	int ZLayer();
	Macad::Occt::Graphic3d_PresentationAttributes^ HighlightStyle();
	bool IsCulled();
	void SetCulled(bool theIsCulled);
	void MarkAsNotCulled();
	bool BndBoxClipCheck();
	void SetBndBoxClipCheck(bool theBndBoxClipCheck);
	bool IsAlwaysRendered();
	void OnVisibilityChanged();
	void Clear();
	void Connect(Macad::Occt::Graphic3d_CStructure^ theStructure);
	void Disconnect(Macad::Occt::Graphic3d_CStructure^ theStructure);
	void GraphicHighlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle);
	void GraphicUnhighlight();
	Macad::Occt::Graphic3d_CStructure^ ShadowLink(Macad::Occt::Graphic3d_StructureManager^ theManager);
	Macad::Occt::Graphic3d_Group^ NewGroup(Macad::Occt::Graphic3d_Structure^ theStruct);
	void RemoveGroup(Macad::Occt::Graphic3d_Group^ theGroup);
	void updateLayerTransformation();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_WorldViewProjState
//---------------------------------------------------------------------
public ref class Graphic3d_WorldViewProjState sealed : public BaseClass<::Graphic3d_WorldViewProjState>
{

#ifdef Include_Graphic3d_WorldViewProjState_h
public:
	Include_Graphic3d_WorldViewProjState_h
#endif

public:
	Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState* nativeInstance)
		: BaseClass<::Graphic3d_WorldViewProjState>( nativeInstance, true )
	{}

	Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState& nativeInstance)
		: BaseClass<::Graphic3d_WorldViewProjState>( &nativeInstance, false )
	{}

	property ::Graphic3d_WorldViewProjState* NativeInstance
	{
		::Graphic3d_WorldViewProjState* get()
		{
			return static_cast<::Graphic3d_WorldViewProjState*>(_NativeInstance);
		}
	}

public:
	Graphic3d_WorldViewProjState();
	Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
	Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState);
	Graphic3d_WorldViewProjState(Macad::Occt::Graphic3d_WorldViewProjState^ parameter1);
	bool IsValid();
	void Reset();
	void Initialize(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
	void Initialize(size_t theProjectionState, size_t theWorldViewState);
	void Initialize(Macad::Occt::Standard_Transient^ theCamera);
	void Initialize();
	size_t ProjectionState();
	size_t WorldViewState();
	bool IsProjectionChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
	bool IsWorldViewChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
	bool IsChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer parameter1, ) */
}; // class Graphic3d_WorldViewProjState

//---------------------------------------------------------------------
//  Class  Graphic3d_Camera
//---------------------------------------------------------------------
public ref class Graphic3d_Camera sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Camera_h
public:
	Include_Graphic3d_Camera_h
#endif

public:
	Graphic3d_Camera(::Graphic3d_Camera* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_Camera(::Graphic3d_Camera& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_Camera* NativeInstance
	{
		::Graphic3d_Camera* get()
		{
			return static_cast<::Graphic3d_Camera*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Camera^ CreateDowncasted(::Graphic3d_Camera* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  Projection
	//---------------------------------------------------------------------
	enum class Projection
	{
		Projection_Orthographic = 0,
		Projection_Perspective = 1,
		Projection_Stereo = 2,
		Projection_MonoLeftEye = 3,
		Projection_MonoRightEye = 4
	}; // enum  class Projection

	//---------------------------------------------------------------------
	//  Enum  FocusType
	//---------------------------------------------------------------------
	enum class FocusType
	{
		FocusType_Absolute = 0,
		FocusType_Relative = 1
	}; // enum  class FocusType

	//---------------------------------------------------------------------
	//  Enum  IODType
	//---------------------------------------------------------------------
	enum class IODType
	{
		IODType_Absolute = 0,
		IODType_Relative = 1
	}; // enum  class IODType

	Graphic3d_Camera();
	Graphic3d_Camera(Macad::Occt::Graphic3d_Camera^ theOther);
	static void Interpolate(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd, double theT, Macad::Occt::Graphic3d_Camera^ theCamera);
	void CopyMappingData(Macad::Occt::Graphic3d_Camera^ theOtherCamera);
	void CopyOrientationData(Macad::Occt::Graphic3d_Camera^ theOtherCamera);
	void Copy(Macad::Occt::Graphic3d_Camera^ theOther);
	Macad::Occt::Dir Direction();
	void SetDirectionFromEye(Macad::Occt::Dir theDir);
	void SetDirection(Macad::Occt::Dir theDir);
	Macad::Occt::Dir Up();
	void SetUp(Macad::Occt::Dir theUp);
	void OrthogonalizeUp();
	Macad::Occt::Dir OrthogonalizedUp();
	Macad::Occt::Dir SideRight();
	Macad::Occt::Pnt Eye();
	void MoveEyeTo(Macad::Occt::Pnt theEye);
	void SetEyeAndCenter(Macad::Occt::Pnt theEye, Macad::Occt::Pnt theCenter);
	void SetEye(Macad::Occt::Pnt theEye);
	Macad::Occt::Pnt Center();
	void SetCenter(Macad::Occt::Pnt theCenter);
	double Distance();
	void SetDistance(double theDistance);
	double Scale();
	void SetScale(double theScale);
	Macad::Occt::XYZ AxialScale();
	void SetAxialScale(Macad::Occt::XYZ theAxialScale);
	void SetProjectionType(Macad::Occt::Graphic3d_Camera::Projection theProjection);
	Macad::Occt::Graphic3d_Camera::Projection ProjectionType();
	bool IsOrthographic();
	bool IsStereo();
	void SetFOVy(double theFOVy);
	double FOVy();
	double FOVx();
	double FOV2d();
	void SetFOV2d(double theFOV);
	bool FitMinMax(Macad::Occt::Bnd_Box^ theBox, double theResolution, bool theToEnlargeIfLine);
	bool ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB, double% theZNear, double% theZFar);
	void ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB);
	void SetZRange(double theZNear, double theZFar);
	double ZNear();
	double ZFar();
	bool IsZeroToOneDepth();
	void SetZeroToOneDepth(bool theIsZeroToOne);
	void SetAspect(double theAspect);
	double Aspect();
	void SetZFocus(Macad::Occt::Graphic3d_Camera::FocusType theType, double theZFocus);
	double ZFocus();
	Macad::Occt::Graphic3d_Camera::FocusType ZFocusType();
	void SetIOD(Macad::Occt::Graphic3d_Camera::IODType theType, double theIOD);
	double IOD();
	Macad::Occt::Graphic3d_Camera::IODType GetIODType();
	Macad::Occt::Graphic3d_CameraTile^ Tile();
	void SetTile(Macad::Occt::Graphic3d_CameraTile^ theTile);
	void SetIdentityOrientation();
	void Transform(Macad::Occt::Trsf theTrsf);
	Macad::Occt::XYZ ViewDimensions();
	Macad::Occt::XYZ ViewDimensions(double theZValue);
	double NDC2dOffsetX();
	double NDC2dOffsetY();
	void Frustum(Macad::Occt::Pln% theLeft, Macad::Occt::Pln% theRight, Macad::Occt::Pln% theBottom, Macad::Occt::Pln% theTop, Macad::Occt::Pln% theNear, Macad::Occt::Pln% theFar);
	Macad::Occt::Pnt Project(Macad::Occt::Pnt thePnt);
	Macad::Occt::Pnt UnProject(Macad::Occt::Pnt thePnt);
	Macad::Occt::Pnt ConvertView2Proj(Macad::Occt::Pnt thePnt);
	Macad::Occt::Pnt ConvertProj2View(Macad::Occt::Pnt thePnt);
	Macad::Occt::Pnt ConvertWorld2View(Macad::Occt::Pnt thePnt);
	Macad::Occt::Pnt ConvertView2World(Macad::Occt::Pnt thePnt);
	Macad::Occt::Graphic3d_WorldViewProjState^ WorldViewProjState();
	size_t ProjectionState();
	size_t WorldViewState();
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d OrientationMatrix() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 OrientationMatrixF() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionMatrix() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionMatrixF() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionStereoLeft() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionStereoLeftF() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionStereoRight() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionStereoRightF() */
	void InvalidateProjection();
	void InvalidateOrientation();
	/* Method skipped due to unknown mapping: void StereoProjection(Graphic3d_Mat4d theProjL, Graphic3d_Mat4d theHeadToEyeL, Graphic3d_Mat4d theProjR, Graphic3d_Mat4d theHeadToEyeR, ) */
	/* Method skipped due to unknown mapping: void StereoProjectionF(Graphic3d_Mat4 theProjL, Graphic3d_Mat4 theHeadToEyeL, Graphic3d_Mat4 theProjR, Graphic3d_Mat4 theHeadToEyeR, ) */
	void ResetCustomProjection();
	bool IsCustomStereoFrustum();
	/* Method skipped due to unknown mapping: void SetCustomStereoFrustums(Aspect_FrustumLRBT<double> theFrustumL, Aspect_FrustumLRBT<double> theFrustumR, ) */
	bool IsCustomStereoProjection();
	/* Method skipped due to unknown mapping: void SetCustomStereoProjection(Graphic3d_Mat4d theProjL, Graphic3d_Mat4d theHeadToEyeL, Graphic3d_Mat4d theProjR, Graphic3d_Mat4d theHeadToEyeR, ) */
	bool IsCustomMonoProjection();
	/* Method skipped due to unknown mapping: void SetCustomMonoProjection(Graphic3d_Mat4d theProj, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
	/* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
}; // class Graphic3d_Camera

//---------------------------------------------------------------------
//  Class  Graphic3d_CameraTile
//---------------------------------------------------------------------
public ref class Graphic3d_CameraTile sealed : public BaseClass<::Graphic3d_CameraTile>
{

#ifdef Include_Graphic3d_CameraTile_h
public:
	Include_Graphic3d_CameraTile_h
#endif

public:
	Graphic3d_CameraTile(::Graphic3d_CameraTile* nativeInstance)
		: BaseClass<::Graphic3d_CameraTile>( nativeInstance, true )
	{}

	Graphic3d_CameraTile(::Graphic3d_CameraTile& nativeInstance)
		: BaseClass<::Graphic3d_CameraTile>( &nativeInstance, false )
	{}

	property ::Graphic3d_CameraTile* NativeInstance
	{
		::Graphic3d_CameraTile* get()
		{
			return static_cast<::Graphic3d_CameraTile*>(_NativeInstance);
		}
	}

public:
	Graphic3d_CameraTile();
	Graphic3d_CameraTile(Macad::Occt::Graphic3d_CameraTile^ parameter1);
	bool IsValid();
	Macad::Occt::Graphic3d_Vec2i^ OffsetLowerLeft();
	Macad::Occt::Graphic3d_CameraTile^ Cropped();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CameraTile

//---------------------------------------------------------------------
//  Class  Graphic3d_CLight
//---------------------------------------------------------------------
public ref class Graphic3d_CLight : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_CLight_h
public:
	Include_Graphic3d_CLight_h
#endif

protected:
	Graphic3d_CLight(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_CLight(::Graphic3d_CLight* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_CLight(::Graphic3d_CLight& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_CLight* NativeInstance
	{
		::Graphic3d_CLight* get()
		{
			return static_cast<::Graphic3d_CLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CLight^ CreateDowncasted(::Graphic3d_CLight* instance);

public:
	Graphic3d_CLight(Macad::Occt::Graphic3d_TypeOfLightSource theType);
	void CopyFrom(Macad::Occt::Graphic3d_CLight^ theLight);
	Macad::Occt::Graphic3d_TypeOfLightSource Type();
	Macad::Occt::TCollection_AsciiString^ Name();
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	Macad::Occt::Quantity_Color^ Color();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	bool IsEnabled();
	void SetEnabled(bool theIsOn);
	bool ToCastShadows();
	void SetCastShadows(bool theToCast);
	bool IsHeadlight();
	bool Headlight();
	void SetHeadlight(bool theValue);
	Macad::Occt::Pnt Position();
	void SetPosition(Macad::Occt::Pnt thePosition);
	void Position(double% theX, double% theY, double% theZ);
	void SetPosition(double theX, double theY, double theZ);
	float ConstAttenuation();
	float LinearAttenuation();
	void Attenuation(double% theConstAttenuation, double% theLinearAttenuation);
	void SetAttenuation(float theConstAttenuation, float theLinearAttenuation);
	Macad::Occt::Dir Direction();
	void SetDirection(Macad::Occt::Dir theDir);
	void Direction(double% theVx, double% theVy, double% theVz);
	void SetDirection(double theVx, double theVy, double theVz);
	Macad::Occt::Pnt DisplayPosition();
	void SetDisplayPosition(Macad::Occt::Pnt thePosition);
	float Angle();
	void SetAngle(float theAngle);
	float Concentration();
	void SetConcentration(float theConcentration);
	float Intensity();
	void SetIntensity(float theValue);
	float Smoothness();
	void SetSmoothRadius(float theValue);
	void SetSmoothAngle(float theValue);
	bool HasRange();
	float Range();
	void SetRange(float theValue);
	Macad::Occt::TCollection_AsciiString^ GetId();
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedParams() */
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedColor() */
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedDirectionRange() */
	/* Method skipped due to unknown mapping: Graphic3d_Vec3 PackedDirection() */
	size_t Revision();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CLight

//---------------------------------------------------------------------
//  Class  Graphic3d_ClipPlane
//---------------------------------------------------------------------
public ref class Graphic3d_ClipPlane sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ClipPlane_h
public:
	Include_Graphic3d_ClipPlane_h
#endif

public:
	Graphic3d_ClipPlane(::Graphic3d_ClipPlane* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ClipPlane(::Graphic3d_ClipPlane& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ClipPlane* NativeInstance
	{
		::Graphic3d_ClipPlane* get()
		{
			return static_cast<::Graphic3d_ClipPlane*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ClipPlane^ CreateDowncasted(::Graphic3d_ClipPlane* instance);

public:
	Graphic3d_ClipPlane();
	Graphic3d_ClipPlane(Macad::Occt::Graphic3d_ClipPlane^ theOther);
	/* Method skipped due to unknown mapping: void Graphic3d_ClipPlane(Graphic3d_Vec4d theEquation, ) */
	Graphic3d_ClipPlane(Macad::Occt::Pln thePlane);
	void SetEquation(Macad::Occt::Pln thePlane);
	/* Method skipped due to unknown mapping: void SetEquation(Graphic3d_Vec4d theEquation, ) */
	/* Method skipped due to unknown mapping: Graphic3d_Vec4d ReversedEquation() */
	bool IsOn();
	void SetOn(bool theIsOn);
	void SetCapping(bool theIsOn);
	bool IsCapping();
	Macad::Occt::Pln ToPlane();
	Macad::Occt::Graphic3d_ClipPlane^ Clone();
	bool IsChain();
	Macad::Occt::Graphic3d_ClipPlane^ ChainPreviousPlane();
	Macad::Occt::Graphic3d_ClipPlane^ ChainNextPlane();
	int NbChainNextPlanes();
	void SetChainNextPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	Macad::Occt::Quantity_Color^ CappingColor();
	void SetCappingColor(Macad::Occt::Quantity_Color^ theColor);
	void SetCappingMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
	Macad::Occt::Graphic3d_MaterialAspect^ CappingMaterial();
	void SetCappingTexture(Macad::Occt::Graphic3d_TextureMap^ theTexture);
	Macad::Occt::Graphic3d_TextureMap^ CappingTexture();
	void SetCappingHatch(Macad::Occt::Aspect_HatchStyle theStyle);
	Macad::Occt::Aspect_HatchStyle CappingHatch();
	void SetCappingCustomHatch(Macad::Occt::Graphic3d_HatchStyle^ theStyle);
	Macad::Occt::Graphic3d_HatchStyle^ CappingCustomHatch();
	void SetCappingHatchOn();
	void SetCappingHatchOff();
	bool IsHatchOn();
	Macad::Occt::TCollection_AsciiString^ GetId();
	Macad::Occt::Graphic3d_AspectFillArea3d^ CappingAspect();
	void SetCappingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
	bool ToUseObjectMaterial();
	void SetUseObjectMaterial(bool theToUse);
	bool ToUseObjectTexture();
	void SetUseObjectTexture(bool theToUse);
	bool ToUseObjectShader();
	void SetUseObjectShader(bool theToUse);
	bool ToUseObjectProperties();
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbePoint(Graphic3d_Vec4d thePoint, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBox(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean ProbeBoxTouch(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbePointHalfspace(Graphic3d_Vec4d thePoint, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxHalfspace(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: bool IsPointOutHalfspace(Graphic3d_Vec4d thePoint, ) */
	/* Method skipped due to unknown mapping: bool IsBoxFullOutHalfspace(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxMaxPointHalfspace(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: bool IsBoxFullInHalfspace(Graphic3d_BndBox3d theBox, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	unsigned int MCountEquation();
	unsigned int MCountAspect();
}; // class Graphic3d_ClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_Structure
//---------------------------------------------------------------------
public ref class Graphic3d_Structure : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Structure_h
public:
	Include_Graphic3d_Structure_h
#endif

protected:
	Graphic3d_Structure(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_Structure(::Graphic3d_Structure* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_Structure(::Graphic3d_Structure& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_Structure* NativeInstance
	{
		::Graphic3d_Structure* get()
		{
			return static_cast<::Graphic3d_Structure*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Structure^ CreateDowncasted(::Graphic3d_Structure* instance);

public:
	Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager, Macad::Occt::Graphic3d_Structure^ theLinkPrs);
	Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager);
	Graphic3d_Structure(Macad::Occt::Graphic3d_Structure^ parameter1);
	void Clear(bool WithDestruction);
	void Clear();
	void Display();
	int DisplayPriority();
	void Erase();
	void Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle, bool theToUpdateMgr);
	void Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle);
	void Remove();
	void CalculateBoundBox();
	void SetInfiniteState(bool theToSet);
	void SetDisplayPriority(int Priority);
	void ResetDisplayPriority();
	void SetZLayer(int theLayerId);
	int GetZLayer();
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	void SetVisible(bool AValue);
	void SetVisual(Macad::Occt::Graphic3d_TypeOfStructure AVisual);
	void SetZoomLimit(double LimitInf, double LimitSup);
	void SetIsForHighlight(bool isForHighlight);
	void UnHighlight();
	void Compute();
	void computeHLR(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ theStructure);
	void ReCompute();
	void ReCompute(Macad::Occt::Graphic3d_DataStructureManager^ aProjector);
	bool ContainsFacet();
	Macad::Occt::Graphic3d_SequenceOfGroup^ Groups();
	int NumberOfGroups();
	Macad::Occt::Graphic3d_Group^ NewGroup();
	Macad::Occt::Graphic3d_Group^ CurrentGroup();
	Macad::Occt::Graphic3d_PresentationAttributes^ HighlightStyle();
	bool IsDeleted();
	bool IsDisplayed();
	bool IsEmpty();
	bool IsInfinite();
	bool IsHighlighted();
	bool IsTransformed();
	bool IsVisible();
	Macad::Occt::Bnd_Box^ MinMaxValues(bool theToIgnoreInfiniteFlag);
	Macad::Occt::Bnd_Box^ MinMaxValues();
	Macad::Occt::Graphic3d_TypeOfStructure Visual();
	static bool AcceptConnection(Macad::Occt::Graphic3d_Structure^ theStructure1, Macad::Occt::Graphic3d_Structure^ theStructure2, Macad::Occt::Graphic3d_TypeOfConnection theType);
	void Ancestors(Macad::Occt::Graphic3d_MapOfStructure^ SG);
	void Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType, bool theWithCheck);
	void Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType);
	void Connect(Macad::Occt::Graphic3d_Structure^ thePrs);
	void Descendants(Macad::Occt::Graphic3d_MapOfStructure^ SG);
	void Disconnect(Macad::Occt::Graphic3d_Structure^ theStructure);
	void Remove(Macad::Occt::Graphic3d_Structure^ thePrs);
	void DisconnectAll(Macad::Occt::Graphic3d_TypeOfConnection AType);
	void RemoveAll();
	/* Method skipped due to unknown mapping: void Network(Graphic3d_Structure theStructure, Graphic3d_TypeOfConnection theType, NCollection_Map<Graphic3d_Structure *, NCollection_DefaultHasher<Graphic3d_Structure *>> theSet, ) */
	void SetOwner(System::IntPtr theOwner);
	System::IntPtr Owner();
	void SetHLRValidation(bool theFlag);
	bool HLRValidation();
	Macad::Occt::TopLoc_Datum3D^ Transformation();
	void SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf);
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	void SetMutable(bool theIsMutable);
	bool IsMutable();
	Macad::Occt::Graphic3d_TypeOfStructure ComputeVisual();
	void GraphicClear(bool WithDestruction);
	void GraphicConnect(Macad::Occt::Graphic3d_Structure^ theDaughter);
	void GraphicDisconnect(Macad::Occt::Graphic3d_Structure^ theDaughter);
	void GraphicTransform(Macad::Occt::TopLoc_Datum3D^ theTrsf);
	int Identification();
	static void PrintNetwork(Macad::Occt::Graphic3d_Structure^ AStructure, Macad::Occt::Graphic3d_TypeOfConnection AType);
	void Remove(Macad::Occt::Graphic3d_Structure^ thePtr, Macad::Occt::Graphic3d_TypeOfConnection theType);
	void SetComputeVisual(Macad::Occt::Graphic3d_TypeOfStructure theVisual);
	static void Transforms(Macad::Occt::Trsf theTrsf, double theX, double theY, double theZ, double% theNewX, double% theNewY, double% theNewZ);
	Macad::Occt::Graphic3d_CStructure^ CStructure();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Structure

//---------------------------------------------------------------------
//  Class  Graphic3d_Text
//---------------------------------------------------------------------
public ref class Graphic3d_Text sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Text_h
public:
	Include_Graphic3d_Text_h
#endif

public:
	Graphic3d_Text(::Graphic3d_Text* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_Text(::Graphic3d_Text& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_Text* NativeInstance
	{
		::Graphic3d_Text* get()
		{
			return static_cast<::Graphic3d_Text*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Text^ CreateDowncasted(::Graphic3d_Text* instance);

public:
	Graphic3d_Text(float theHeight);
	Graphic3d_Text(Macad::Occt::Graphic3d_Text^ parameter1);
	/* Method skipped due to unknown mapping: NCollection_Utf8String Text() */
	/* Method skipped due to unknown mapping: void SetText(NCollection_Utf8String theText, ) */
	void SetText(Macad::Occt::TCollection_AsciiString^ theText);
	void SetText(System::String^ theText);
	/* Method skipped due to unknown mapping: Font_TextFormatter TextFormatter() */
	/* Method skipped due to unknown mapping: void SetTextFormatter(Font_TextFormatter theFormatter, ) */
	Macad::Occt::Pnt Position();
	void SetPosition(Macad::Occt::Pnt thePoint);
	Macad::Occt::Ax2 Orientation();
	bool HasPlane();
	void SetOrientation(Macad::Occt::Ax2 theOrientation);
	void ResetOrientation();
	bool HasOwnAnchorPoint();
	void SetOwnAnchorPoint(bool theHasOwnAnchor);
	float Height();
	void SetHeight(float theHeight);
	Macad::Occt::Graphic3d_HorizontalTextAlignment HorizontalAlignment();
	void SetHorizontalAlignment(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification);
	Macad::Occt::Graphic3d_VerticalTextAlignment VerticalAlignment();
	void SetVerticalAlignment(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification);
}; // class Graphic3d_Text

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPers
//---------------------------------------------------------------------
public ref class Graphic3d_TransformPers : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TransformPers_h
public:
	Include_Graphic3d_TransformPers_h
#endif

protected:
	Graphic3d_TransformPers(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_TransformPers(::Graphic3d_TransformPers* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_TransformPers(::Graphic3d_TransformPers& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_TransformPers* NativeInstance
	{
		::Graphic3d_TransformPers* get()
		{
			return static_cast<::Graphic3d_TransformPers*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TransformPers^ CreateDowncasted(::Graphic3d_TransformPers* instance);

public:
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode);
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt);
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset);
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner);
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransformPers^ parameter1);
	static bool IsZoomOrRotate(Macad::Occt::Graphic3d_TransModeFlags theMode);
	static bool IsTrihedronOr2d(Macad::Occt::Graphic3d_TransModeFlags theMode);
	bool IsZoomOrRotate();
	bool IsTrihedronOr2d();
	Macad::Occt::Graphic3d_TransModeFlags Mode();
	Macad::Occt::Graphic3d_TransModeFlags Flags();
	void SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt);
	void SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset);
	Macad::Occt::Pnt AnchorPoint();
	void SetAnchorPoint(Macad::Occt::Pnt thePnt);
	Macad::Occt::Aspect_TypeOfTriedronPosition Corner2d();
	void SetCorner2d(Macad::Occt::Aspect_TypeOfTriedronPosition thePos);
	Macad::Occt::Graphic3d_Vec2i^ Offset2d();
	void SetOffset2d(Macad::Occt::Graphic3d_Vec2i^ theOffset);
	double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int parameter1, int theViewportHeight);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_TransformPers

//---------------------------------------------------------------------
//  Class  Graphic3d_Group
//---------------------------------------------------------------------
public ref class Graphic3d_Group : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Group_h
public:
	Include_Graphic3d_Group_h
#endif

public:
	Graphic3d_Group(::Graphic3d_Group* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_Group(::Graphic3d_Group& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_Group* NativeInstance
	{
		::Graphic3d_Group* get()
		{
			return static_cast<::Graphic3d_Group*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Group^ CreateDowncasted(::Graphic3d_Group* instance);

public:
	Graphic3d_Group(Macad::Occt::Graphic3d_Group^ parameter1);
	void Clear(bool theUpdateStructureMgr);
	void Clear();
	void Remove();
	Macad::Occt::Graphic3d_Aspects^ Aspects();
	void SetGroupPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect);
	void SetPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect);
	void SynchronizeAspects();
	void ReplaceAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theMap);
	void AddText(Macad::Occt::Graphic3d_Text^ theTextParams, bool theToEvalMinMax);
	void AddText(Macad::Occt::Graphic3d_Text^ theTextParams);
	/* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, Standard_Boolean theToEvalMinMax, ) */
	/* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, Standard_Boolean theToEvalMinMax, ) */
	void AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim, bool theToEvalMinMax);
	void AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim);
	void SetStencilTestOptions(bool theIsEnabled);
	void SetFlippingOptions(bool theIsEnabled, Macad::Occt::Ax2 theRefPlane);
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	bool ContainsFacet();
	bool IsDeleted();
	bool IsEmpty();
	void MinMaxValues(double% theXMin, double% theYMin, double% theZMin, double% theXMax, double% theYMax, double% theZMax);
	void SetMinMaxValues(double theXMin, double theYMin, double theZMin, double theXMax, double theYMax, double theZMax);
	/* Method skipped due to unknown mapping: Graphic3d_BndBox4f BoundingBox() */
	/* Method skipped due to unknown mapping: Graphic3d_BndBox4f ChangeBoundingBox() */
	Macad::Occt::Graphic3d_Structure^ Structure();
	void SetClosed(bool theIsClosed);
	bool IsClosed();
	/* Method skipped due to unknown mapping: void Marker(Graphic3d_Vertex thePoint, Standard_Boolean theToEvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Marker(Graphic3d_Vertex thePoint, Standard_Boolean theToEvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
	void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor);
	void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax);
	void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA);
	void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor);
	void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax);
	void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Group

//---------------------------------------------------------------------
//  Class  Graphic3d_PresentationAttributes
//---------------------------------------------------------------------
public ref class Graphic3d_PresentationAttributes : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_PresentationAttributes_h
public:
	Include_Graphic3d_PresentationAttributes_h
#endif

protected:
	Graphic3d_PresentationAttributes(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_PresentationAttributes(::Graphic3d_PresentationAttributes* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_PresentationAttributes(::Graphic3d_PresentationAttributes& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_PresentationAttributes* NativeInstance
	{
		::Graphic3d_PresentationAttributes* get()
		{
			return static_cast<::Graphic3d_PresentationAttributes*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_PresentationAttributes^ CreateDowncasted(::Graphic3d_PresentationAttributes* instance);

public:
	Graphic3d_PresentationAttributes();
	Graphic3d_PresentationAttributes(Macad::Occt::Graphic3d_PresentationAttributes^ parameter1);
	Macad::Occt::Aspect_TypeOfHighlightMethod Method();
	void SetMethod(Macad::Occt::Aspect_TypeOfHighlightMethod theMethod);
	Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
	Macad::Occt::Quantity_Color^ Color();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	float Transparency();
	void SetTransparency(float theTranspCoef);
	int ZLayer();
	void SetZLayer(int theLayer);
	int DisplayMode();
	void SetDisplayMode(int theMode);
	Macad::Occt::Graphic3d_AspectFillArea3d^ BasicFillAreaAspect();
	void SetBasicFillAreaAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PresentationAttributes

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfHClipPlane
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfHClipPlane sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_SequenceOfHClipPlane_h
public:
	Include_Graphic3d_SequenceOfHClipPlane_h
#endif

public:
	Graphic3d_SequenceOfHClipPlane(::Graphic3d_SequenceOfHClipPlane* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_SequenceOfHClipPlane(::Graphic3d_SequenceOfHClipPlane& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_SequenceOfHClipPlane* NativeInstance
	{
		::Graphic3d_SequenceOfHClipPlane* get()
		{
			return static_cast<::Graphic3d_SequenceOfHClipPlane*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_SequenceOfHClipPlane^ CreateDowncasted(::Graphic3d_SequenceOfHClipPlane* instance);

public:
	Graphic3d_SequenceOfHClipPlane();
	Graphic3d_SequenceOfHClipPlane(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ parameter1);
	bool ToOverrideGlobal();
	void SetOverrideGlobal(bool theToOverride);
	bool IsEmpty();
	int Size();
	bool Append(Macad::Occt::Graphic3d_ClipPlane^ theItem);
	bool Remove(Macad::Occt::Graphic3d_ClipPlane^ theItem);
	/* Method skipped due to unknown mapping: void Remove(Iterator theItem, ) */
	void Clear();
	Macad::Occt::Graphic3d_ClipPlane^ First();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_SequenceOfHClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_ViewAffinity
//---------------------------------------------------------------------
public ref class Graphic3d_ViewAffinity sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ViewAffinity_h
public:
	Include_Graphic3d_ViewAffinity_h
#endif

public:
	Graphic3d_ViewAffinity(::Graphic3d_ViewAffinity* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ViewAffinity(::Graphic3d_ViewAffinity& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ViewAffinity* NativeInstance
	{
		::Graphic3d_ViewAffinity* get()
		{
			return static_cast<::Graphic3d_ViewAffinity*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ViewAffinity^ CreateDowncasted(::Graphic3d_ViewAffinity* instance);

public:
	Graphic3d_ViewAffinity();
	Graphic3d_ViewAffinity(Macad::Occt::Graphic3d_ViewAffinity^ parameter1);
	bool IsVisible(int theViewId);
	void SetVisible(bool theIsVisible);
	void SetVisible(int theViewId, bool theIsVisible);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_ViewAffinity

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriver
//---------------------------------------------------------------------
public ref class Graphic3d_GraphicDriver : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_GraphicDriver_h
public:
	Include_Graphic3d_GraphicDriver_h
#endif

public:
	Graphic3d_GraphicDriver(::Graphic3d_GraphicDriver* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_GraphicDriver(::Graphic3d_GraphicDriver& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_GraphicDriver* NativeInstance
	{
		::Graphic3d_GraphicDriver* get()
		{
			return static_cast<::Graphic3d_GraphicDriver*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_GraphicDriver^ CreateDowncasted(::Graphic3d_GraphicDriver* instance);

public:
	Graphic3d_GraphicDriver(Macad::Occt::Graphic3d_GraphicDriver^ parameter1);
	int InquireLimit(Macad::Occt::Graphic3d_TypeOfLimit theType);
	int InquireLightLimit();
	int InquirePlaneLimit();
	int InquireViewLimit();
	Macad::Occt::Graphic3d_CStructure^ CreateStructure(Macad::Occt::Graphic3d_StructureManager^ theManager);
	void RemoveStructure(Macad::Occt::Graphic3d_CStructure^ theCStructure);
	Macad::Occt::Graphic3d_CView^ CreateView(Macad::Occt::Graphic3d_StructureManager^ theMgr);
	void RemoveView(Macad::Occt::Graphic3d_CView^ theView);
	void EnableVBO(bool status);
	bool IsVerticalSync();
	void SetVerticalSync(bool theToEnable);
	bool MemoryInfo(size_t% theFreeBytes, Macad::Occt::TCollection_AsciiString^ theInfo);
	float DefaultTextHeight();
	void TextSize(Macad::Occt::Graphic3d_CView^ theView, System::String^ theText, float theHeight, float% theWidth, float% theAscent, float% theDescent);
	void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
	void InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
	void RemoveZLayer(int theLayerId);
	void ZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq);
	void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
	Macad::Occt::Graphic3d_ZLayerSettings^ ZLayerSettings(int theLayerId);
	bool ViewExists(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::Graphic3d_CView^ theView);
	/* Method skipped due to unknown mapping: Aspect_DisplayConnection GetDisplayConnection() */
	int NewIdentification();
	void RemoveIdentification(int theId);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_GraphicDriver

//---------------------------------------------------------------------
//  Class  Graphic3d_StructureManager
//---------------------------------------------------------------------
public ref class Graphic3d_StructureManager sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_StructureManager_h
public:
	Include_Graphic3d_StructureManager_h
#endif

public:
	Graphic3d_StructureManager(::Graphic3d_StructureManager* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_StructureManager(::Graphic3d_StructureManager& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_StructureManager* NativeInstance
	{
		::Graphic3d_StructureManager* get()
		{
			return static_cast<::Graphic3d_StructureManager*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_StructureManager^ CreateDowncasted(::Graphic3d_StructureManager* instance);

public:
	Graphic3d_StructureManager(Macad::Occt::Graphic3d_GraphicDriver^ theDriver);
	Graphic3d_StructureManager(Macad::Occt::Graphic3d_StructureManager^ parameter1);
	void Update(int theLayerId);
	void Update();
	void Remove();
	void Erase();
	void DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG);
	void HighlightedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG);
	void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure);
	void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DataStructureManager^ theProjector);
	void Clear(Macad::Occt::Graphic3d_Structure^ theStructure, bool theWithDestruction);
	void Connect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter);
	void Disconnect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter);
	void Display(Macad::Occt::Graphic3d_Structure^ theStructure);
	void Erase(Macad::Occt::Graphic3d_Structure^ theStructure);
	void Highlight(Macad::Occt::Graphic3d_Structure^ theStructure);
	void SetTransform(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::TopLoc_Datum3D^ theTrsf);
	void ChangeDisplayPriority(Macad::Occt::Graphic3d_Structure^ theStructure, int theOldPriority, int theNewPriority);
	void ChangeZLayer(Macad::Occt::Graphic3d_Structure^ theStructure, int theLayerId);
	Macad::Occt::Graphic3d_GraphicDriver^ GraphicDriver();
	int Identification(Macad::Occt::Graphic3d_CView^ theView);
	void UnIdentification(Macad::Occt::Graphic3d_CView^ theView);
	/* Method skipped due to unknown mapping: Graphic3d_IndexedMapOfView DefinedViews() */
	int MaxNumOfViews();
	Macad::Occt::Graphic3d_Structure^ Identification(int AId);
	void UnHighlight(Macad::Occt::Graphic3d_Structure^ AStructure);
	void UnHighlight();
	void RecomputeStructures();
	/* Method skipped due to unknown mapping: void RecomputeStructures(NCollection_Map<Graphic3d_Structure *, NCollection_DefaultHasher<Graphic3d_Structure *>> theStructures, ) */
	Macad::Occt::Graphic3d_ViewAffinity^ RegisterObject(Macad::Occt::Standard_Transient^ theObject);
	void UnregisterObject(Macad::Occt::Standard_Transient^ theObject);
	Macad::Occt::Graphic3d_ViewAffinity^ ObjectAffinity(Macad::Occt::Standard_Transient^ theObject);
	bool IsDeviceLost();
	void SetDeviceLost();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_StructureManager

//---------------------------------------------------------------------
//  Class  Graphic3d_ValidatedCubeMapOrder
//---------------------------------------------------------------------
public ref class Graphic3d_ValidatedCubeMapOrder sealed : public BaseClass<::Graphic3d_ValidatedCubeMapOrder>
{

#ifdef Include_Graphic3d_ValidatedCubeMapOrder_h
public:
	Include_Graphic3d_ValidatedCubeMapOrder_h
#endif

public:
	Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder* nativeInstance)
		: BaseClass<::Graphic3d_ValidatedCubeMapOrder>( nativeInstance, true )
	{}

	Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder& nativeInstance)
		: BaseClass<::Graphic3d_ValidatedCubeMapOrder>( &nativeInstance, false )
	{}

	property ::Graphic3d_ValidatedCubeMapOrder* NativeInstance
	{
		::Graphic3d_ValidatedCubeMapOrder* get()
		{
			return static_cast<::Graphic3d_ValidatedCubeMapOrder*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ValidatedCubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOther);
}; // class Graphic3d_ValidatedCubeMapOrder

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapOrder
//---------------------------------------------------------------------
public ref class Graphic3d_CubeMapOrder sealed : public BaseClass<::Graphic3d_CubeMapOrder>
{

#ifdef Include_Graphic3d_CubeMapOrder_h
public:
	Include_Graphic3d_CubeMapOrder_h
#endif

public:
	Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder* nativeInstance)
		: BaseClass<::Graphic3d_CubeMapOrder>( nativeInstance, true )
	{}

	Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder& nativeInstance)
		: BaseClass<::Graphic3d_CubeMapOrder>( &nativeInstance, false )
	{}

	property ::Graphic3d_CubeMapOrder* NativeInstance
	{
		::Graphic3d_CubeMapOrder* get()
		{
			return static_cast<::Graphic3d_CubeMapOrder*>(_NativeInstance);
		}
	}

public:
	Graphic3d_CubeMapOrder();
	Graphic3d_CubeMapOrder(unsigned char thePosXLocation, unsigned char theNegXLocation, unsigned char thePosYLocation, unsigned char theNegYLocation, unsigned char thePosZLocation, unsigned char theNegZLocation);
	Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
	Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_CubeMapOrder^ parameter1);
	Macad::Occt::Graphic3d_CubeMapOrder^ Set(Macad::Occt::Graphic3d_CubeMapOrder^ theOrder);
	Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Validated();
	Macad::Occt::Graphic3d_CubeMapOrder^ Set(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide, unsigned char theValue);
	Macad::Occt::Graphic3d_CubeMapOrder^ SetDefault();
	Macad::Occt::Graphic3d_CubeMapOrder^ Permute(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder);
	Macad::Occt::Graphic3d_CubeMapOrder^ Permuted(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder);
	Macad::Occt::Graphic3d_CubeMapOrder^ Swap(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide);
	Macad::Occt::Graphic3d_CubeMapOrder^ Swapped(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide);
	unsigned char Get(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide);
	Macad::Occt::Graphic3d_CubeMapOrder^ Clear();
	bool IsEmpty();
	bool HasRepetitions();
	bool HasOverflows();
	bool IsValid();
	static Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Default();
}; // class Graphic3d_CubeMapOrder

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMap
//---------------------------------------------------------------------
public ref class Graphic3d_CubeMap : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_CubeMap_h
public:
	Include_Graphic3d_CubeMap_h
#endif

protected:
	Graphic3d_CubeMap(InitMode init)
		: Macad::Occt::Graphic3d_TextureMap( init )
	{}

public:
	Graphic3d_CubeMap(::Graphic3d_CubeMap* nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	Graphic3d_CubeMap(::Graphic3d_CubeMap& nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	property ::Graphic3d_CubeMap* NativeInstance
	{
		::Graphic3d_CubeMap* get()
		{
			return static_cast<::Graphic3d_CubeMap*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CubeMap^ CreateDowncasted(::Graphic3d_CubeMap* instance);

public:
	Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName, bool theToGenerateMipmaps);
	Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap, bool theToGenerateMipmaps);
	Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap);
	Graphic3d_CubeMap(Macad::Occt::Graphic3d_CubeMap^ parameter1);
	bool More();
	Macad::Occt::Graphic3d_CubeMapSide CurrentSide();
	void Next();
	void SetZInversion(bool theZIsInverted);
	bool ZIsInverted();
	bool HasMipmaps();
	void SetMipmapsGeneration(bool theToGenerateMipmaps);
	Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Graphic3d_CubeMap^ Reset();
}; // class Graphic3d_CubeMap

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapPacked
//---------------------------------------------------------------------
public ref class Graphic3d_CubeMapPacked sealed : public Macad::Occt::Graphic3d_CubeMap
{

#ifdef Include_Graphic3d_CubeMapPacked_h
public:
	Include_Graphic3d_CubeMapPacked_h
#endif

public:
	Graphic3d_CubeMapPacked(::Graphic3d_CubeMapPacked* nativeInstance)
		: Macad::Occt::Graphic3d_CubeMap( nativeInstance )
	{}

	Graphic3d_CubeMapPacked(::Graphic3d_CubeMapPacked& nativeInstance)
		: Macad::Occt::Graphic3d_CubeMap( nativeInstance )
	{}

	property ::Graphic3d_CubeMapPacked* NativeInstance
	{
		::Graphic3d_CubeMapPacked* get()
		{
			return static_cast<::Graphic3d_CubeMapPacked*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CubeMapPacked^ CreateDowncasted(::Graphic3d_CubeMapPacked* instance);

public:
	Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
	Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
	Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage);
	Graphic3d_CubeMapPacked(Macad::Occt::Graphic3d_CubeMapPacked^ parameter1);
	Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
}; // class Graphic3d_CubeMapPacked

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapSeparate
//---------------------------------------------------------------------
public ref class Graphic3d_CubeMapSeparate sealed : public Macad::Occt::Graphic3d_CubeMap
{

#ifdef Include_Graphic3d_CubeMapSeparate_h
public:
	Include_Graphic3d_CubeMapSeparate_h
#endif

public:
	Graphic3d_CubeMapSeparate(::Graphic3d_CubeMapSeparate* nativeInstance)
		: Macad::Occt::Graphic3d_CubeMap( nativeInstance )
	{}

	Graphic3d_CubeMapSeparate(::Graphic3d_CubeMapSeparate& nativeInstance)
		: Macad::Occt::Graphic3d_CubeMap( nativeInstance )
	{}

	property ::Graphic3d_CubeMapSeparate* NativeInstance
	{
		::Graphic3d_CubeMapSeparate* get()
		{
			return static_cast<::Graphic3d_CubeMapSeparate*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CubeMapSeparate^ CreateDowncasted(::Graphic3d_CubeMapSeparate* instance);

public:
	/* Method skipped due to unknown mapping: void Graphic3d_CubeMapSeparate(NCollection_Array1<TCollection_AsciiString> thePaths, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_CubeMapSeparate(NCollection_Array1<opencascade::handle<Image_PixMap>> theImages, ) */
	Graphic3d_CubeMapSeparate(Macad::Occt::Graphic3d_CubeMapSeparate^ parameter1);
	Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
	Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ parameter1);
	bool IsDone();
}; // class Graphic3d_CubeMapSeparate

//---------------------------------------------------------------------
//  Class  Graphic3d_CullingTool
//---------------------------------------------------------------------
public ref class Graphic3d_CullingTool sealed : public BaseClass<::Graphic3d_CullingTool>
{

#ifdef Include_Graphic3d_CullingTool_h
public:
	Include_Graphic3d_CullingTool_h
#endif

public:
	Graphic3d_CullingTool(::Graphic3d_CullingTool* nativeInstance)
		: BaseClass<::Graphic3d_CullingTool>( nativeInstance, true )
	{}

	Graphic3d_CullingTool(::Graphic3d_CullingTool& nativeInstance)
		: BaseClass<::Graphic3d_CullingTool>( &nativeInstance, false )
	{}

	property ::Graphic3d_CullingTool* NativeInstance
	{
		::Graphic3d_CullingTool* get()
		{
			return static_cast<::Graphic3d_CullingTool*>(_NativeInstance);
		}
	}

public:
	Graphic3d_CullingTool();
	Graphic3d_CullingTool(Macad::Occt::Graphic3d_CullingTool^ parameter1);
	/* Method skipped due to unknown mapping: void SetViewVolume(Graphic3d_Camera theCamera, Graphic3d_Mat4d theModelWorld, ) */
	void SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera);
	void SetViewportSize(int theViewportWidth, int theViewportHeight, double theResolutionRatio);
	/* Method skipped due to unknown mapping: void SetCullingDistance(CullingContext theCtx, Standard_Real theDistance, ) */
	/* Method skipped due to unknown mapping: void SetCullingSize(CullingContext theCtx, Standard_Real theSize, ) */
	void CacheClipPtsProjections();
	/* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	Macad::Occt::Graphic3d_Camera^ Camera();
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionMatrix() */
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d WorldViewMatrix() */
	int ViewportWidth();
	int ViewportHeight();
	Macad::Occt::Graphic3d_WorldViewProjState^ WorldViewProjState();
	/* Method skipped due to unknown mapping: Graphic3d_Vec3d CameraEye() */
	/* Method skipped due to unknown mapping: Graphic3d_Vec3d CameraDirection() */
	/* Method skipped due to unknown mapping: Standard_Real SignedPlanePointDistance(Graphic3d_Vec4d theNormal, Graphic3d_Vec4d thePnt, ) */
	/* Method skipped due to unknown mapping: bool IsOutFrustum(Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/* Method skipped due to unknown mapping: bool IsOutFrustum(Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/* Method skipped due to unknown mapping: bool IsTooSmall(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, ) */
}; // class Graphic3d_CullingTool

//---------------------------------------------------------------------
//  Class  Graphic3d_DataStructureManager
//---------------------------------------------------------------------
public ref class Graphic3d_DataStructureManager : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_DataStructureManager_h
public:
	Include_Graphic3d_DataStructureManager_h
#endif

protected:
	Graphic3d_DataStructureManager(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Graphic3d_DataStructureManager(::Graphic3d_DataStructureManager* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_DataStructureManager(::Graphic3d_DataStructureManager& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_DataStructureManager* NativeInstance
	{
		::Graphic3d_DataStructureManager* get()
		{
			return static_cast<::Graphic3d_DataStructureManager*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_DataStructureManager^ CreateDowncasted(::Graphic3d_DataStructureManager* instance);

public:
	Graphic3d_DataStructureManager(Macad::Occt::Graphic3d_DataStructureManager^ parameter1);
}; // class Graphic3d_DataStructureManager

//---------------------------------------------------------------------
//  Class  Graphic3d_CView
//---------------------------------------------------------------------
public ref class Graphic3d_CView : public Macad::Occt::Graphic3d_DataStructureManager
{

#ifdef Include_Graphic3d_CView_h
public:
	Include_Graphic3d_CView_h
#endif

public:
	Graphic3d_CView(::Graphic3d_CView* nativeInstance)
		: Macad::Occt::Graphic3d_DataStructureManager( nativeInstance )
	{}

	Graphic3d_CView(::Graphic3d_CView& nativeInstance)
		: Macad::Occt::Graphic3d_DataStructureManager( nativeInstance )
	{}

	property ::Graphic3d_CView* NativeInstance
	{
		::Graphic3d_CView* get()
		{
			return static_cast<::Graphic3d_CView*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_CView^ CreateDowncasted(::Graphic3d_CView* instance);

public:
	Graphic3d_CView(Macad::Occt::Graphic3d_StructureManager^ theMgr);
	Graphic3d_CView(Macad::Occt::Graphic3d_CView^ parameter1);
	int Identification();
	void Activate();
	void Deactivate();
	bool IsActive();
	void Remove();
	bool IsRemoved();
	Macad::Occt::Graphic3d_Camera^ Camera();
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
	void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel);
	Macad::Occt::Graphic3d_TypeOfBackfacingModel BackfacingModel();
	void SetBackfacingModel(Macad::Occt::Graphic3d_TypeOfBackfacingModel theModel);
	Macad::Occt::Graphic3d_TypeOfVisualization VisualizationType();
	void SetVisualizationType(Macad::Occt::Graphic3d_TypeOfVisualization theType);
	void SetComputedMode(bool theMode);
	bool ComputedMode();
	void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure);
	void Update(int theLayerId);
	void Update();
	void Compute();
	bool ContainsFacet();
	bool ContainsFacet(Macad::Occt::Graphic3d_MapOfStructure^ theSet);
	void DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ theStructures);
	int NumberOfDisplayedStructures();
	/* Method skipped due to unknown mapping: NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void HiddenObjects() */
	/* Method skipped due to unknown mapping: NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void ChangeHiddenObjects() */
	bool IsComputed(int theStructId, Macad::Occt::Graphic3d_Structure^ theComputedStruct);
	Macad::Occt::Bnd_Box^ MinMaxValues(bool theToIncludeAuxiliary);
	Macad::Occt::Bnd_Box^ MinMaxValues();
	Macad::Occt::Bnd_Box^ MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet, bool theToIncludeAuxiliary);
	Macad::Occt::Bnd_Box^ MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet);
	Macad::Occt::Graphic3d_StructureManager^ StructureManager();
	void Redraw();
	void RedrawImmediate();
	void Invalidate();
	bool IsInvalidated();
	void Resized();
	bool SetImmediateModeDrawToFront(bool theDrawToFrontBuffer);
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext);
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow);
	Macad::Occt::Aspect_Window^ Window();
	bool IsDefined();
	bool BufferDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_BufferType% theBufferType);
	void InvalidateBVHData(int theLayerId);
	void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
	void InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
	int ZLayerMax();
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<Graphic3d_Layer>> Layers() */
	/* Method skipped due to unknown mapping: Graphic3d_Layer Layer(Standard_Integer theLayerId, ) */
	void InvalidateZLayerBoundingBox(int theLayerId);
	void RemoveZLayer(int theLayerId);
	void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
	double ConsiderZoomPersistenceObjects();
	Macad::Occt::Standard_Transient^ FBO();
	void SetFBO(Macad::Occt::Standard_Transient^ theFbo);
	Macad::Occt::Standard_Transient^ FBOCreate(int theWidth, int theHeight);
	void FBORelease(Macad::Occt::Standard_Transient^ theFbo);
	void FBOGetDimensions(Macad::Occt::Standard_Transient^ theFbo, int% theWidth, int% theHeight, int% theWidthMax, int% theHeightMax);
	void FBOChangeViewport(Macad::Occt::Standard_Transient^ theFbo, int theWidth, int theHeight);
	void CopySettings(Macad::Occt::Graphic3d_CView^ theOther);
	Macad::Occt::Graphic3d_RenderingParams^ RenderingParams();
	Macad::Occt::Graphic3d_RenderingParams^ ChangeRenderingParams();
	Macad::Occt::Aspect_Background^ Background();
	void SetBackground(Macad::Occt::Aspect_Background^ theBackground);
	Macad::Occt::Aspect_GradientBackground^ GradientBackground();
	void SetGradientBackground(Macad::Occt::Aspect_GradientBackground^ theBackground);
	Macad::Occt::Graphic3d_TextureMap^ BackgroundImage();
	Macad::Occt::Graphic3d_CubeMap^ BackgroundCubeMap();
	Macad::Occt::Graphic3d_CubeMap^ IBLCubeMap();
	void SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap, bool theToUpdatePBREnv);
	void SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap);
	Macad::Occt::Aspect_FillMethod BackgroundImageStyle();
	void SetBackgroundImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle);
	Macad::Occt::Graphic3d_TypeOfBackground BackgroundType();
	void SetBackgroundType(Macad::Occt::Graphic3d_TypeOfBackground theType);
	void SetImageBasedLighting(bool theToEnableIBL);
	Macad::Occt::Graphic3d_TextureEnv^ TextureEnv();
	void SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTextureEnv);
	Macad::Occt::Graphic3d_LightSet^ Lights();
	void SetLights(Macad::Occt::Graphic3d_LightSet^ theLights);
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	void DiagnosticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict, Macad::Occt::Graphic3d_DiagnosticInfo theFlags);
	Macad::Occt::TCollection_AsciiString^ StatisticInformation();
	void StatisticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict);
	double UnitFactor();
	void SetUnitFactor(double theFactor);
	Macad::Occt::Aspect_XRSession^ XRSession();
	void SetXRSession(Macad::Occt::Aspect_XRSession^ theSession);
	bool IsActiveXR();
	bool InitXR();
	void ReleaseXR();
	void ProcessXRInput();
	void SetupXRPosedCamera();
	void UnsetXRPosedCamera();
	Macad::Occt::Graphic3d_Camera^ PosedXRCamera();
	void SetPosedXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	Macad::Occt::Graphic3d_Camera^ BaseXRCamera();
	void SetBaseXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	Macad::Occt::Trsf PoseXRToWorld(Macad::Occt::Trsf thePoseXR);
	Macad::Occt::Ax1 ViewAxisInWorld(Macad::Occt::Trsf thePoseXR);
	void SynchronizeXRBaseToPosedCamera();
	void SynchronizeXRPosedToBaseCamera();
	void ComputeXRPosedCameraFromBase(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Trsf theXRTrsf);
	void ComputeXRBaseCameraFromPosed(Macad::Occt::Graphic3d_Camera^ theCamPosed, Macad::Occt::Trsf thePoseTrsf);
	void TurnViewXRCamera(Macad::Occt::Trsf theTrsfTurn);
	Macad::Occt::Graphic3d_GraduatedTrihedron^ GetGraduatedTrihedron();
	void GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData);
	void GraduatedTrihedronErase();
	/* Method skipped due to unknown mapping: void GraduatedTrihedronMinMaxValues(Graphic3d_Vec3 theMin, Graphic3d_Vec3 theMax, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CView

//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron
//---------------------------------------------------------------------
public ref class Graphic3d_GraduatedTrihedron sealed : public BaseClass<::Graphic3d_GraduatedTrihedron>
{

#ifdef Include_Graphic3d_GraduatedTrihedron_h
public:
	Include_Graphic3d_GraduatedTrihedron_h
#endif

public:
	Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron* nativeInstance)
		: BaseClass<::Graphic3d_GraduatedTrihedron>( nativeInstance, true )
	{}

	Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron& nativeInstance)
		: BaseClass<::Graphic3d_GraduatedTrihedron>( &nativeInstance, false )
	{}

	property ::Graphic3d_GraduatedTrihedron* NativeInstance
	{
		::Graphic3d_GraduatedTrihedron* get()
		{
			return static_cast<::Graphic3d_GraduatedTrihedron*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	Graphic3d_GraduatedTrihedron(Macad::Occt::TCollection_AsciiString^ theNamesFont);
	Graphic3d_GraduatedTrihedron(Macad::Occt::Graphic3d_GraduatedTrihedron^ parameter1);
	/* Method skipped due to unknown mapping: AxisAspect ChangeXAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeYAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeZAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeAxisAspect(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: AxisAspect XAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect YAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ZAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect AxisAspectAt(Standard_Integer theIndex, ) */
	float ArrowsLength();
	void SetArrowsLength(float theValue);
	Macad::Occt::Quantity_Color^ GridColor();
	void SetGridColor(Macad::Occt::Quantity_Color^ theColor);
	bool ToDrawGrid();
	void SetDrawGrid(bool theToDraw);
	bool ToDrawAxes();
	void SetDrawAxes(bool theToDraw);
	Macad::Occt::TCollection_AsciiString^ NamesFont();
	void SetNamesFont(Macad::Occt::TCollection_AsciiString^ theFont);
	/* Method skipped due to unknown mapping: Font_FontAspect NamesFontAspect() */
	/* Method skipped due to unknown mapping: void SetNamesFontAspect(Font_FontAspect theAspect, ) */
	int NamesSize();
	void SetNamesSize(int theValue);
	Macad::Occt::TCollection_AsciiString^ ValuesFont();
	void SetValuesFont(Macad::Occt::TCollection_AsciiString^ theFont);
	/* Method skipped due to unknown mapping: Font_FontAspect ValuesFontAspect() */
	/* Method skipped due to unknown mapping: void SetValuesFontAspect(Font_FontAspect theAspect, ) */
	int ValuesSize();
	void SetValuesSize(int theValue);
	bool CubicAxesCallback(Macad::Occt::Graphic3d_CView^ theView);
}; // class Graphic3d_GraduatedTrihedron

//---------------------------------------------------------------------
//  Class  Graphic3d_RenderingParams
//---------------------------------------------------------------------
public ref class Graphic3d_RenderingParams sealed : public BaseClass<::Graphic3d_RenderingParams>
{

#ifdef Include_Graphic3d_RenderingParams_h
public:
	Include_Graphic3d_RenderingParams_h
#endif

public:
	Graphic3d_RenderingParams(::Graphic3d_RenderingParams* nativeInstance)
		: BaseClass<::Graphic3d_RenderingParams>( nativeInstance, true )
	{}

	Graphic3d_RenderingParams(::Graphic3d_RenderingParams& nativeInstance)
		: BaseClass<::Graphic3d_RenderingParams>( &nativeInstance, false )
	{}

	property ::Graphic3d_RenderingParams* NativeInstance
	{
		::Graphic3d_RenderingParams* get()
		{
			return static_cast<::Graphic3d_RenderingParams*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  Anaglyph
	//---------------------------------------------------------------------
	enum class Anaglyph
	{
		Anaglyph_RedCyan_Simple = 0,
		Anaglyph_RedCyan_Optimized = 1,
		Anaglyph_YellowBlue_Simple = 2,
		Anaglyph_YellowBlue_Optimized = 3,
		Anaglyph_GreenMagenta_Simple = 4,
		Anaglyph_UserDefined = 5
	}; // enum  class Anaglyph

	//---------------------------------------------------------------------
	//  Enum  PerfCounters
	//---------------------------------------------------------------------
	enum class PerfCounters
	{
		PerfCounters_NONE = 0,
		PerfCounters_FrameRate = 1,
		PerfCounters_CPU = 2,
		PerfCounters_Layers = 4,
		PerfCounters_Structures = 8,
		PerfCounters_Groups = 16,
		PerfCounters_GroupArrays = 32,
		PerfCounters_Triangles = 64,
		PerfCounters_Points = 128,
		PerfCounters_Lines = 256,
		PerfCounters_EstimMem = 512,
		PerfCounters_FrameTime = 1024,
		PerfCounters_FrameTimeMax = 2048,
		PerfCounters_SkipImmediate = 4096,
		PerfCounters_Basic = 15,
		PerfCounters_Extended = 1023,
		PerfCounters_All = 4095
	}; // enum  class PerfCounters

	//---------------------------------------------------------------------
	//  Enum  FrustumCulling
	//---------------------------------------------------------------------
	enum class FrustumCulling
	{
		FrustumCulling_Off = 0,
		FrustumCulling_On = 1,
		FrustumCulling_NoUpdate = 2
	}; // enum  class FrustumCulling

	Graphic3d_RenderingParams();
	Graphic3d_RenderingParams(Macad::Occt::Graphic3d_RenderingParams^ parameter1);
	float ResolutionRatio();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_RenderingParams

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2D
//---------------------------------------------------------------------
public ref class Graphic3d_Texture2D : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_Texture2D_h
public:
	Include_Graphic3d_Texture2D_h
#endif

protected:
	Graphic3d_Texture2D(InitMode init)
		: Macad::Occt::Graphic3d_TextureMap( init )
	{}

public:
	Graphic3d_Texture2D(::Graphic3d_Texture2D* nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	Graphic3d_Texture2D(::Graphic3d_Texture2D& nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	property ::Graphic3d_Texture2D* NativeInstance
	{
		::Graphic3d_Texture2D* get()
		{
			return static_cast<::Graphic3d_Texture2D*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture2D^ CreateDowncasted(::Graphic3d_Texture2D* instance);

public:
	Graphic3d_Texture2D(Macad::Occt::Graphic3d_Texture2D^ parameter1);
	static int NumberOfTextures();
	static Macad::Occt::TCollection_AsciiString^ TextureName(int theRank);
	Macad::Occt::Graphic3d_NameOfTexture2D Name();
	void SetImage(Macad::Occt::Image_PixMap^ thePixMap);
	bool HasMipMaps();
	void SetMipMaps(bool theToUse);
}; // class Graphic3d_Texture2D

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dmanual
//---------------------------------------------------------------------
public ref class Graphic3d_Texture2Dmanual sealed : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_Texture2Dmanual_h
public:
	Include_Graphic3d_Texture2Dmanual_h
#endif

public:
	Graphic3d_Texture2Dmanual(::Graphic3d_Texture2Dmanual* nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	Graphic3d_Texture2Dmanual(::Graphic3d_Texture2Dmanual& nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	property ::Graphic3d_Texture2Dmanual* NativeInstance
	{
		::Graphic3d_Texture2Dmanual* get()
		{
			return static_cast<::Graphic3d_Texture2Dmanual*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture2Dmanual^ CreateDowncasted(::Graphic3d_Texture2Dmanual* instance);

public:
	Graphic3d_Texture2Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_NameOfTexture2D theNOT);
	Graphic3d_Texture2Dmanual(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_Texture2Dmanual^ parameter1);
}; // class Graphic3d_Texture2Dmanual

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureEnv
//---------------------------------------------------------------------
public ref class Graphic3d_TextureEnv sealed : public Macad::Occt::Graphic3d_TextureRoot
{

#ifdef Include_Graphic3d_TextureEnv_h
public:
	Include_Graphic3d_TextureEnv_h
#endif

public:
	Graphic3d_TextureEnv(::Graphic3d_TextureEnv* nativeInstance)
		: Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
	{}

	Graphic3d_TextureEnv(::Graphic3d_TextureEnv& nativeInstance)
		: Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
	{}

	property ::Graphic3d_TextureEnv* NativeInstance
	{
		::Graphic3d_TextureEnv* get()
		{
			return static_cast<::Graphic3d_TextureEnv*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TextureEnv^ CreateDowncasted(::Graphic3d_TextureEnv* instance);

public:
	Graphic3d_TextureEnv(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_TextureEnv(Macad::Occt::Graphic3d_NameOfTextureEnv theName);
	Graphic3d_TextureEnv(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_TextureEnv(Macad::Occt::Graphic3d_TextureEnv^ parameter1);
	Macad::Occt::Graphic3d_NameOfTextureEnv Name();
	static int NumberOfTextures();
	static Macad::Occt::TCollection_AsciiString^ TextureName(int theRank);
}; // class Graphic3d_TextureEnv

//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet
//---------------------------------------------------------------------
public ref class Graphic3d_LightSet sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_LightSet_h
public:
	Include_Graphic3d_LightSet_h
#endif

public:
	Graphic3d_LightSet(::Graphic3d_LightSet* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_LightSet(::Graphic3d_LightSet& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_LightSet* NativeInstance
	{
		::Graphic3d_LightSet* get()
		{
			return static_cast<::Graphic3d_LightSet*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_LightSet^ CreateDowncasted(::Graphic3d_LightSet* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  IterationFilter
	//---------------------------------------------------------------------
	enum class IterationFilter
	{
		IterationFilter_None = 0,
		IterationFilter_ExcludeAmbient = 2,
		IterationFilter_ExcludeDisabled = 4,
		IterationFilter_ExcludeNoShadow = 8,
		IterationFilter_ExcludeDisabledAndAmbient = 6,
		IterationFilter_ActiveShadowCasters = 14
	}; // enum  class IterationFilter

	Graphic3d_LightSet();
	Graphic3d_LightSet(Macad::Occt::Graphic3d_LightSet^ parameter1);
	int Lower();
	int Upper();
	bool IsEmpty();
	int Extent();
	Macad::Occt::Graphic3d_CLight^ Value(int theIndex);
	bool Contains(Macad::Occt::Graphic3d_CLight^ theLight);
	bool Add(Macad::Occt::Graphic3d_CLight^ theLight);
	bool Remove(Macad::Occt::Graphic3d_CLight^ theLight);
	int NbLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType);
	size_t UpdateRevision();
	size_t Revision();
	int NbEnabled();
	int NbEnabledLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType);
	int NbCastShadows();
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 AmbientColor() */
	Macad::Occt::TCollection_AsciiString^ KeyEnabledLong();
	Macad::Occt::TCollection_AsciiString^ KeyEnabledShort();
}; // class Graphic3d_LightSet

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsData
//---------------------------------------------------------------------
public ref class Graphic3d_FrameStatsData : public BaseClass<::Graphic3d_FrameStatsData>
{

#ifdef Include_Graphic3d_FrameStatsData_h
public:
	Include_Graphic3d_FrameStatsData_h
#endif

protected:
	Graphic3d_FrameStatsData(InitMode init)
		: BaseClass<::Graphic3d_FrameStatsData>( init )
	{}

public:
	Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData* nativeInstance)
		: BaseClass<::Graphic3d_FrameStatsData>( nativeInstance, true )
	{}

	Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData& nativeInstance)
		: BaseClass<::Graphic3d_FrameStatsData>( &nativeInstance, false )
	{}

	property ::Graphic3d_FrameStatsData* NativeInstance
	{
		::Graphic3d_FrameStatsData* get()
		{
			return static_cast<::Graphic3d_FrameStatsData*>(_NativeInstance);
		}
	}

public:
	Graphic3d_FrameStatsData();
	Graphic3d_FrameStatsData(Macad::Occt::Graphic3d_FrameStatsData^ parameter1);
	double FrameRate();
	double FrameRateCpu();
	double ImmediateFrameRate();
	double ImmediateFrameRateCpu();
	size_t CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
	double TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex);
	void Reset();
	void FillMax(Macad::Occt::Graphic3d_FrameStatsData^ theOther);
}; // class Graphic3d_FrameStatsData

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsDataTmp
//---------------------------------------------------------------------
public ref class Graphic3d_FrameStatsDataTmp sealed : public Macad::Occt::Graphic3d_FrameStatsData
{

#ifdef Include_Graphic3d_FrameStatsDataTmp_h
public:
	Include_Graphic3d_FrameStatsDataTmp_h
#endif

public:
	Graphic3d_FrameStatsDataTmp(::Graphic3d_FrameStatsDataTmp* nativeInstance)
		: Macad::Occt::Graphic3d_FrameStatsData( nativeInstance )
	{}

	Graphic3d_FrameStatsDataTmp(::Graphic3d_FrameStatsDataTmp& nativeInstance)
		: Macad::Occt::Graphic3d_FrameStatsData( nativeInstance )
	{}

	property ::Graphic3d_FrameStatsDataTmp* NativeInstance
	{
		::Graphic3d_FrameStatsDataTmp* get()
		{
			return static_cast<::Graphic3d_FrameStatsDataTmp*>(_NativeInstance);
		}
	}

public:
	Graphic3d_FrameStatsDataTmp();
	Graphic3d_FrameStatsDataTmp(Macad::Occt::Graphic3d_FrameStatsDataTmp^ parameter1);
	void FlushTimers(size_t theNbFrames, bool theIsFinal);
	void Reset();
	double ChangeFrameRate();
	double ChangeFrameRateCpu();
	double ChangeImmediateFrameRate();
	double ChangeImmediateFrameRateCpu();
	/* Method skipped due to unknown mapping: OSD_Timer ChangeTimer(Graphic3d_FrameStatsTimer theTimer, ) */
	size_t ChangeCounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
	double ChangeTimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex);
}; // class Graphic3d_FrameStatsDataTmp

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStats
//---------------------------------------------------------------------
public ref class Graphic3d_FrameStats : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_FrameStats_h
public:
	Include_Graphic3d_FrameStats_h
#endif

public:
	Graphic3d_FrameStats(::Graphic3d_FrameStats* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_FrameStats(::Graphic3d_FrameStats& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_FrameStats* NativeInstance
	{
		::Graphic3d_FrameStats* get()
		{
			return static_cast<::Graphic3d_FrameStats*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_FrameStats^ CreateDowncasted(::Graphic3d_FrameStats* instance);

public:
	Graphic3d_FrameStats();
	Graphic3d_FrameStats(Macad::Occt::Graphic3d_FrameStats^ parameter1);
	double UpdateInterval();
	void SetUpdateInterval(double theInterval);
	bool IsLongLineFormat();
	void SetLongLineFormat(bool theValue);
	void FrameStart(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly);
	void FrameEnd(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly);
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatStats(PerfCounters theFlags, ) */
	/* Method skipped due to unknown mapping: void FormatStats(TColStd_IndexedDataMapOfStringString theDict, PerfCounters theFlags, ) */
	double FrameDuration();
	double FrameRate();
	double FrameRateCpu();
	size_t CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
	double TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theTimer);
	bool HasCulledLayers();
	bool HasCulledStructs();
	Macad::Occt::Graphic3d_FrameStatsData^ LastDataFrame();
	int LastDataFrameIndex();
	/* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> DataFrames() */
	/* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> ChangeDataFrames() */
	size_t ChangeCounter(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
	double ChangeTimer(Macad::Occt::Graphic3d_FrameStatsTimer theTimer);
	Macad::Occt::Graphic3d_FrameStatsDataTmp^ ActiveDataFrame();
}; // class Graphic3d_FrameStats

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactory
//---------------------------------------------------------------------
public ref class Graphic3d_GraphicDriverFactory : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_GraphicDriverFactory_h
public:
	Include_Graphic3d_GraphicDriverFactory_h
#endif

public:
	Graphic3d_GraphicDriverFactory(::Graphic3d_GraphicDriverFactory* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_GraphicDriverFactory(::Graphic3d_GraphicDriverFactory& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_GraphicDriverFactory* NativeInstance
	{
		::Graphic3d_GraphicDriverFactory* get()
		{
			return static_cast<::Graphic3d_GraphicDriverFactory*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_GraphicDriverFactory^ CreateDowncasted(::Graphic3d_GraphicDriverFactory* instance);

public:
	Graphic3d_GraphicDriverFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ parameter1);
	static void RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory, bool theIsPreferred);
	static void RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory);
	static void UnregisterFactory(Macad::Occt::TCollection_AsciiString^ theName);
	static Macad::Occt::Graphic3d_GraphicDriverFactory^ DefaultDriverFactory();
	static Macad::Occt::Graphic3d_GraphicDriverFactoryList^ DriverFactories();
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriver CreateDriver(Aspect_DisplayConnection theDisp, ) */
	Macad::Occt::TCollection_AsciiString^ Name();
}; // class Graphic3d_GraphicDriverFactory

//---------------------------------------------------------------------
//  Class  Graphic3d_GroupDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_GroupDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_GroupDefinitionError_h
public:
	Include_Graphic3d_GroupDefinitionError_h
#endif

public:
	Graphic3d_GroupDefinitionError(::Graphic3d_GroupDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Graphic3d_GroupDefinitionError(::Graphic3d_GroupDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Graphic3d_GroupDefinitionError* NativeInstance
	{
		::Graphic3d_GroupDefinitionError* get()
		{
			return static_cast<::Graphic3d_GroupDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_GroupDefinitionError^ CreateDowncasted(::Graphic3d_GroupDefinitionError* instance);

public:
	Graphic3d_GroupDefinitionError();
	Graphic3d_GroupDefinitionError(System::String^ theMessage);
	Graphic3d_GroupDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_GroupDefinitionError(Macad::Occt::Graphic3d_GroupDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_GroupDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_MaterialDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_MaterialDefinitionError_h
public:
	Include_Graphic3d_MaterialDefinitionError_h
#endif

public:
	Graphic3d_MaterialDefinitionError(::Graphic3d_MaterialDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Graphic3d_MaterialDefinitionError(::Graphic3d_MaterialDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Graphic3d_MaterialDefinitionError* NativeInstance
	{
		::Graphic3d_MaterialDefinitionError* get()
		{
			return static_cast<::Graphic3d_MaterialDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_MaterialDefinitionError^ CreateDowncasted(::Graphic3d_MaterialDefinitionError* instance);

public:
	Graphic3d_MaterialDefinitionError();
	Graphic3d_MaterialDefinitionError(System::String^ theMessage);
	Graphic3d_MaterialDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_MaterialDefinitionError(Macad::Occt::Graphic3d_MaterialDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_MaterialDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_MediaTexture
//---------------------------------------------------------------------
public ref class Graphic3d_MediaTexture sealed : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_MediaTexture_h
public:
	Include_Graphic3d_MediaTexture_h
#endif

public:
	Graphic3d_MediaTexture(::Graphic3d_MediaTexture* nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	Graphic3d_MediaTexture(::Graphic3d_MediaTexture& nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	property ::Graphic3d_MediaTexture* NativeInstance
	{
		::Graphic3d_MediaTexture* get()
		{
			return static_cast<::Graphic3d_MediaTexture*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_MediaTexture^ CreateDowncasted(::Graphic3d_MediaTexture* instance);

public:
	/* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex, void theMutex, Standard_Integer thePlane, ) */
	/* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex, void theMutex, Standard_Integer thePlane, ) */
	Graphic3d_MediaTexture(Macad::Occt::Graphic3d_MediaTexture^ parameter1);
	Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	/* Method skipped due to unknown mapping: Media_Frame Frame() */
	/* Method skipped due to unknown mapping: void SetFrame(Media_Frame theFrame, ) */
	void GenerateNewId();
}; // class Graphic3d_MediaTexture

//---------------------------------------------------------------------
//  Class  Graphic3d_PriorityDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_PriorityDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_PriorityDefinitionError_h
public:
	Include_Graphic3d_PriorityDefinitionError_h
#endif

public:
	Graphic3d_PriorityDefinitionError(::Graphic3d_PriorityDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Graphic3d_PriorityDefinitionError(::Graphic3d_PriorityDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Graphic3d_PriorityDefinitionError* NativeInstance
	{
		::Graphic3d_PriorityDefinitionError* get()
		{
			return static_cast<::Graphic3d_PriorityDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_PriorityDefinitionError^ CreateDowncasted(::Graphic3d_PriorityDefinitionError* instance);

public:
	Graphic3d_PriorityDefinitionError();
	Graphic3d_PriorityDefinitionError(System::String^ theMessage);
	Graphic3d_PriorityDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_PriorityDefinitionError(Macad::Occt::Graphic3d_PriorityDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_PriorityDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderManager
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderManager sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderManager_h
public:
	Include_Graphic3d_ShaderManager_h
#endif

public:
	Graphic3d_ShaderManager(::Graphic3d_ShaderManager* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Graphic3d_ShaderManager(::Graphic3d_ShaderManager& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Graphic3d_ShaderManager* NativeInstance
	{
		::Graphic3d_ShaderManager* get()
		{
			return static_cast<::Graphic3d_ShaderManager*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_ShaderManager^ CreateDowncasted(::Graphic3d_ShaderManager* instance);

public:
	Graphic3d_ShaderManager(Macad::Occt::Aspect_GraphicsLibrary theGapi);
	Graphic3d_ShaderManager(Macad::Occt::Graphic3d_ShaderManager^ parameter1);
	bool IsGapiGreaterEqual(int theVerMajor, int theVerMinor);
	int GapiVersionMajor();
	int GapiVersionMinor();
	void SetGapiVersion(int theVerMajor, int theVerMinor);
	bool UseRedAlpha();
	void SetUseRedAlpha(bool theUseRedAlpha);
	bool HasFlatShading();
	bool ToReverseDFdxSign();
	void SetFlatShading(bool theToUse, bool theToReverseSign);
	bool ToEmulateDepthClamp();
	void SetEmulateDepthClamp(bool theToEmulate);
	bool HasGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt);
	void EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt, bool theToEnable);
	void EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt);
}; // class Graphic3d_ShaderManager

//---------------------------------------------------------------------
//  Class  Graphic3d_StructureDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_StructureDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_StructureDefinitionError_h
public:
	Include_Graphic3d_StructureDefinitionError_h
#endif

public:
	Graphic3d_StructureDefinitionError(::Graphic3d_StructureDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Graphic3d_StructureDefinitionError(::Graphic3d_StructureDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Graphic3d_StructureDefinitionError* NativeInstance
	{
		::Graphic3d_StructureDefinitionError* get()
		{
			return static_cast<::Graphic3d_StructureDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_StructureDefinitionError^ CreateDowncasted(::Graphic3d_StructureDefinitionError* instance);

public:
	Graphic3d_StructureDefinitionError();
	Graphic3d_StructureDefinitionError(System::String^ theMessage);
	Graphic3d_StructureDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_StructureDefinitionError(Macad::Occt::Graphic3d_StructureDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_StructureDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1D
//---------------------------------------------------------------------
public ref class Graphic3d_Texture1D : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_Texture1D_h
public:
	Include_Graphic3d_Texture1D_h
#endif

protected:
	Graphic3d_Texture1D(InitMode init)
		: Macad::Occt::Graphic3d_TextureMap( init )
	{}

public:
	Graphic3d_Texture1D(::Graphic3d_Texture1D* nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	Graphic3d_Texture1D(::Graphic3d_Texture1D& nativeInstance)
		: Macad::Occt::Graphic3d_TextureMap( nativeInstance )
	{}

	property ::Graphic3d_Texture1D* NativeInstance
	{
		::Graphic3d_Texture1D* get()
		{
			return static_cast<::Graphic3d_Texture1D*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture1D^ CreateDowncasted(::Graphic3d_Texture1D* instance);

public:
	Graphic3d_Texture1D(Macad::Occt::Graphic3d_Texture1D^ parameter1);
	Macad::Occt::Graphic3d_NameOfTexture1D Name();
	static int NumberOfTextures();
	static Macad::Occt::TCollection_AsciiString^ TextureName(int aRank);
}; // class Graphic3d_Texture1D

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dmanual
//---------------------------------------------------------------------
public ref class Graphic3d_Texture1Dmanual sealed : public Macad::Occt::Graphic3d_Texture1D
{

#ifdef Include_Graphic3d_Texture1Dmanual_h
public:
	Include_Graphic3d_Texture1Dmanual_h
#endif

public:
	Graphic3d_Texture1Dmanual(::Graphic3d_Texture1Dmanual* nativeInstance)
		: Macad::Occt::Graphic3d_Texture1D( nativeInstance )
	{}

	Graphic3d_Texture1Dmanual(::Graphic3d_Texture1Dmanual& nativeInstance)
		: Macad::Occt::Graphic3d_Texture1D( nativeInstance )
	{}

	property ::Graphic3d_Texture1Dmanual* NativeInstance
	{
		::Graphic3d_Texture1Dmanual* get()
		{
			return static_cast<::Graphic3d_Texture1Dmanual*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture1Dmanual^ CreateDowncasted(::Graphic3d_Texture1Dmanual* instance);

public:
	Graphic3d_Texture1Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_NameOfTexture1D theNOT);
	Graphic3d_Texture1Dmanual(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_Texture1Dmanual^ parameter1);
}; // class Graphic3d_Texture1Dmanual

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dsegment
//---------------------------------------------------------------------
public ref class Graphic3d_Texture1Dsegment sealed : public Macad::Occt::Graphic3d_Texture1D
{

#ifdef Include_Graphic3d_Texture1Dsegment_h
public:
	Include_Graphic3d_Texture1Dsegment_h
#endif

public:
	Graphic3d_Texture1Dsegment(::Graphic3d_Texture1Dsegment* nativeInstance)
		: Macad::Occt::Graphic3d_Texture1D( nativeInstance )
	{}

	Graphic3d_Texture1Dsegment(::Graphic3d_Texture1Dsegment& nativeInstance)
		: Macad::Occt::Graphic3d_Texture1D( nativeInstance )
	{}

	property ::Graphic3d_Texture1Dsegment* NativeInstance
	{
		::Graphic3d_Texture1Dsegment* get()
		{
			return static_cast<::Graphic3d_Texture1Dsegment*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture1Dsegment^ CreateDowncasted(::Graphic3d_Texture1Dsegment* instance);

public:
	Graphic3d_Texture1Dsegment(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_NameOfTexture1D theNOT);
	Graphic3d_Texture1Dsegment(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_Texture1Dsegment^ parameter1);
	void SetSegment(float theX1, float theY1, float theZ1, float theX2, float theY2, float theZ2);
	void Segment(float% theX1, float% theY1, float% theZ1, float% theX2, float% theY2, float% theZ2);
}; // class Graphic3d_Texture1Dsegment

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dplane
//---------------------------------------------------------------------
public ref class Graphic3d_Texture2Dplane sealed : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_Texture2Dplane_h
public:
	Include_Graphic3d_Texture2Dplane_h
#endif

public:
	Graphic3d_Texture2Dplane(::Graphic3d_Texture2Dplane* nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	Graphic3d_Texture2Dplane(::Graphic3d_Texture2Dplane& nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	property ::Graphic3d_Texture2Dplane* NativeInstance
	{
		::Graphic3d_Texture2Dplane* get()
		{
			return static_cast<::Graphic3d_Texture2Dplane*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture2Dplane^ CreateDowncasted(::Graphic3d_Texture2Dplane* instance);

public:
	Graphic3d_Texture2Dplane(Macad::Occt::TCollection_AsciiString^ theFileName);
	Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_NameOfTexture2D theNOT);
	Graphic3d_Texture2Dplane(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_Texture2Dplane^ parameter1);
	void SetPlaneS(float A, float B, float C, float D);
	void SetPlaneT(float A, float B, float C, float D);
	void SetPlane(Macad::Occt::Graphic3d_NameOfTexturePlane thePlane);
	void SetScaleS(float theVal);
	void SetScaleT(float theVal);
	void SetTranslateS(float theVal);
	void SetTranslateT(float theVal);
	void SetRotation(float theVal);
	Macad::Occt::Graphic3d_NameOfTexturePlane Plane();
	void PlaneS(float% A, float% B, float% C, float% D);
	void PlaneT(float% A, float% B, float% C, float% D);
	void TranslateS(float% theVal);
	void TranslateT(float% theVal);
	void ScaleS(float% theVal);
	void ScaleT(float% theVal);
	void Rotation(float% theVal);
}; // class Graphic3d_Texture2Dplane

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPersScaledAbove
//---------------------------------------------------------------------
public ref class Graphic3d_TransformPersScaledAbove sealed : public Macad::Occt::Graphic3d_TransformPers
{

#ifdef Include_Graphic3d_TransformPersScaledAbove_h
public:
	Include_Graphic3d_TransformPersScaledAbove_h
#endif

public:
	Graphic3d_TransformPersScaledAbove(::Graphic3d_TransformPersScaledAbove* nativeInstance)
		: Macad::Occt::Graphic3d_TransformPers( nativeInstance )
	{}

	Graphic3d_TransformPersScaledAbove(::Graphic3d_TransformPersScaledAbove& nativeInstance)
		: Macad::Occt::Graphic3d_TransformPers( nativeInstance )
	{}

	property ::Graphic3d_TransformPersScaledAbove* NativeInstance
	{
		::Graphic3d_TransformPersScaledAbove* get()
		{
			return static_cast<::Graphic3d_TransformPersScaledAbove*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_TransformPersScaledAbove^ CreateDowncasted(::Graphic3d_TransformPersScaledAbove* instance);

public:
	Graphic3d_TransformPersScaledAbove(double theScale, Macad::Occt::Pnt thePnt);
	Graphic3d_TransformPersScaledAbove(Macad::Occt::Graphic3d_TransformPersScaledAbove^ parameter1);
	double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight);
}; // class Graphic3d_TransformPersScaledAbove

}; // namespace Occt
}; // namespace Macad
