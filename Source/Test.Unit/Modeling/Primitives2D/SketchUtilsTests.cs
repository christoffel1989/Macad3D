﻿using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives2D
{
    [TestFixture]
    public class SketchUtilsTests
    {
        const string _BasePath = @"Modeling\Primitives2D\SketchUtils";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointLineLine()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(10, 0));
            int p3 = sketch.AddPoint(new Pnt2d(20, 0));
            int s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
            int s2 = sketch.AddSegment(new SketchSegmentLine(p2, p3));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p2);
            Assert.AreEqual(2, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p3, sketch.Segments[s2+1].EndPoint);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointArcArc()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 5));
            int p2 = sketch.AddPoint(new Pnt2d(4, 3));
            int p3 = sketch.AddPoint(new Pnt2d(3, 4));
            var arc1 = new SketchSegmentArc(p1, p2, p3);
            int s1 = sketch.AddSegment(arc1);
            int p4 = sketch.AddPoint(new Pnt2d(4, -3));
            int p5 = sketch.AddPoint(new Pnt2d(5, 0));
            var arc2 = new SketchSegmentArc(p2, p4, p5);
            int s2 = sketch.AddSegment(arc2);

            Assume.That(arc1.Center(sketch.Points).IsEqual(arc2.Center(sketch.Points), 0.001));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p2);
            Assert.AreEqual(3, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p4, sketch.Segments[s2+1].EndPoint);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointBezierBezier()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
            int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
            int p3 = sketch.AddPoint(new Pnt2d(3, 2));
            int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3));
            int p4 = sketch.AddPoint(new Pnt2d(5.5, 5));
            int p5 = sketch.AddPoint(new Pnt2d(8, 0));
            int s2 = sketch.AddSegment(new SketchSegmentBezier(p3, p4, p5));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p3);
            Assert.AreEqual(3, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p5, sketch.Segments[s2+1].EndPoint);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
