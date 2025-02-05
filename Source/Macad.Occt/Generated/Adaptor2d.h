// Generated wrapper code for package Adaptor2d

#pragma once

#include "Adaptor2d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Adaptor2d_Curve2d
//---------------------------------------------------------------------
public ref class Adaptor2d_Curve2d : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor2d_Curve2d_h
public:
	Include_Adaptor2d_Curve2d_h
#endif

protected:
	Adaptor2d_Curve2d(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Adaptor2d_Curve2d(::Adaptor2d_Curve2d* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Adaptor2d_Curve2d(::Adaptor2d_Curve2d& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Adaptor2d_Curve2d* NativeInstance
	{
		::Adaptor2d_Curve2d* get()
		{
			return static_cast<::Adaptor2d_Curve2d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor2d_Curve2d^ CreateDowncasted(::Adaptor2d_Curve2d* instance);

public:
	Adaptor2d_Curve2d(Macad::Occt::Adaptor2d_Curve2d^ parameter1);
	Adaptor2d_Curve2d();
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt2d Value(double U);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	int NbSamples();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
}; // class Adaptor2d_Curve2d

//---------------------------------------------------------------------
//  Class  Adaptor2d_Line2d
//---------------------------------------------------------------------
public ref class Adaptor2d_Line2d sealed : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_Adaptor2d_Line2d_h
public:
	Include_Adaptor2d_Line2d_h
#endif

public:
	Adaptor2d_Line2d(::Adaptor2d_Line2d* nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	Adaptor2d_Line2d(::Adaptor2d_Line2d& nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	property ::Adaptor2d_Line2d* NativeInstance
	{
		::Adaptor2d_Line2d* get()
		{
			return static_cast<::Adaptor2d_Line2d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor2d_Line2d^ CreateDowncasted(::Adaptor2d_Line2d* instance);

public:
	Adaptor2d_Line2d();
	Adaptor2d_Line2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d D, double UFirst, double ULast);
	Adaptor2d_Line2d(Macad::Occt::Adaptor2d_Line2d^ parameter1);
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	void Load(Macad::Occt::gp_Lin2d^ L);
	void Load(Macad::Occt::gp_Lin2d^ L, double UFirst, double ULast);
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt2d Value(double X);
	void D0(double X, Macad::Occt::Pnt2d% P);
	void D1(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
}; // class Adaptor2d_Line2d

//---------------------------------------------------------------------
//  Class  Adaptor2d_OffsetCurve
//---------------------------------------------------------------------
public ref class Adaptor2d_OffsetCurve sealed : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_Adaptor2d_OffsetCurve_h
public:
	Include_Adaptor2d_OffsetCurve_h
#endif

public:
	Adaptor2d_OffsetCurve(::Adaptor2d_OffsetCurve* nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	Adaptor2d_OffsetCurve(::Adaptor2d_OffsetCurve& nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	property ::Adaptor2d_OffsetCurve* NativeInstance
	{
		::Adaptor2d_OffsetCurve* get()
		{
			return static_cast<::Adaptor2d_OffsetCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor2d_OffsetCurve^ CreateDowncasted(::Adaptor2d_OffsetCurve* instance);

public:
	Adaptor2d_OffsetCurve();
	Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C);
	Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C, double Offset);
	Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C, double Offset, double WFirst, double WLast);
	Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_OffsetCurve^ parameter1);
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	void Load(Macad::Occt::Adaptor2d_Curve2d^ S);
	void Load(double Offset);
	void Load(double Offset, double WFirst, double WLast);
	Macad::Occt::Adaptor2d_Curve2d^ Curve();
	double Offset();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt2d Value(double U);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
	int NbSamples();
}; // class Adaptor2d_OffsetCurve

}; // namespace Occt
}; // namespace Macad
