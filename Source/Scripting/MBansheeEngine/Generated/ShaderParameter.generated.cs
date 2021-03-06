using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace BansheeEngine
{
	/** @addtogroup Rendering
	 *  @{
	 */

	/// <summary>Contains information about a single shader parameter.</summary>
	[StructLayout(LayoutKind.Sequential), SerializeObject]
	public partial struct ShaderParameter
	{
		/// <summary>Name of the parameter variable.</summary>
		public string name;
		/// <summary>Data type of the parameter.</summary>
		public ShaderParameterType type;
		/// <summary>
		/// Determines is parameter managed internally be the renderer, or is it expected to be set by the user.
		/// </summary>
		public bool isInternal;
	}

	/** @} */
}
