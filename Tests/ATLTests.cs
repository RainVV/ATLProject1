using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ATLProject1Lib;
using Xunit;

namespace Tests
{
  public class ATLTests
  {
      [Fact]
      public void testobj_constructed_correctly()
      {
          var obj = new TestObj();
          Assert.NotNull(obj);
      }

      [Fact]
      public void testobj_get_set_testprop()
      {
          const int expected = 2;

          var obj = new TestObj();
          obj.TestProp = expected;

          Assert.Equal(expected, obj.TestProp);
      }

      public void testobj_get_LPCWSTR_prop()
      {
          var obj = new TestObj();
      }
  }
}
