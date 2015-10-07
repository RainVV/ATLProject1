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
  }
}
