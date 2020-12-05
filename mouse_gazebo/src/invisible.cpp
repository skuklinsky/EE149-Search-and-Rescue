#include <gazebo/gazebo.hh>
#include <gazebo/rendering/rendering.hh>

namespace gazebo {
	class InvisiblePlugin : public VisualPlugin {
		public: InvisiblePlugin() : VisualPlugin() {}

		public: void Load(rendering::VisualPtr _parent, sdf::ElementPtr _sdf) {
			this->visual = _parent;
			this->visual->SetVisibilityFlags(GZ_VISIBILITY_GUI);
		}

		private: rendering::VisualPtr visual;
	};

	GZ_REGISTER_VISUAL_PLUGIN(InvisiblePlugin)
}