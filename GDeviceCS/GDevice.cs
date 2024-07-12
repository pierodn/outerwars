using System.Runtime.InteropServices;

namespace GDevice
{
    public class Window
    {
        [DllImport("gdevice.dll", EntryPoint = "gdCreateWindow")]
        public static extern int Create();
    }
}