#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(RigEditorLandVehiclePropertiesWindowLayout, "rig_editor_land_vehicle_properties_window.layout");
class RigEditorLandVehiclePropertiesWindowLayout : public wraps::BaseLayout
{

public:

	RigEditorLandVehiclePropertiesWindowLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~RigEditorLandVehiclePropertiesWindowLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_land_vehicle_properties_window, "land_vehicle_properties_window");
	MyGUI::Window* m_land_vehicle_properties_window;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_shift_down_rpm, "editbox_shift_down_rpm");
	MyGUI::EditBox* m_editbox_shift_down_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_shift_up_rpm, "editbox_shift_up_rpm");
	MyGUI::EditBox* m_editbox_shift_up_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_torque, "editbox_torque");
	MyGUI::EditBox* m_editbox_torque;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_global_gear_ratio, "editbox_global_gear_ratio");
	MyGUI::EditBox* m_editbox_global_gear_ratio;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_reverse_gear_ratio, "editbox_reverse_gear_ratio");
	MyGUI::EditBox* m_editbox_reverse_gear_ratio;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_neutral_gear_ratio, "editbox_neutral_gear_ratio");
	MyGUI::EditBox* m_editbox_neutral_gear_ratio;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_first_gear_ratio, "editbox_first_gear_ratio");
	MyGUI::EditBox* m_editbox_first_gear_ratio;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_more_gear_ratios, "editbox_more_gear_ratios");
	MyGUI::EditBox* m_editbox_more_gear_ratios;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_engine_inertia, "label_engoption_engine_inertia");
	MyGUI::TextBox* m_label_engoption_engine_inertia;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_engine_type, "label_engoption_engine_type");
	MyGUI::TextBox* m_label_engoption_engine_type;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_clutch_force, "label_engoption_clutch_force");
	MyGUI::TextBox* m_label_engoption_clutch_force;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_shift_time, "label_engoption_shift_time");
	MyGUI::TextBox* m_label_engoption_shift_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_clutch_time, "label_engoption_clutch_time");
	MyGUI::TextBox* m_label_engoption_clutch_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_post_shift_time, "label_engoption_post_shift_time");
	MyGUI::TextBox* m_label_engoption_post_shift_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_stall_rpm, "label_engoption_stall_rpm");
	MyGUI::TextBox* m_label_engoption_stall_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_idle_rpm, "label_engoption_idle_rpm");
	MyGUI::TextBox* m_label_engoption_idle_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_max_idle_mixture, "label_engoption_max_idle_mixture");
	MyGUI::TextBox* m_label_engoption_max_idle_mixture;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_label_engoption_min_idle_mixture, "label_engoption_min_idle_mixture");
	MyGUI::TextBox* m_label_engoption_min_idle_mixture;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_radiobutton_engine_truck, "radiobutton_engine_truck");
	MyGUI::Button* m_radiobutton_engine_truck;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_radiobutton_engine_car, "radiobutton_engine_car");
	MyGUI::Button* m_radiobutton_engine_car;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_engine_inertia, "editbox_engoption_engine_inertia");
	MyGUI::EditBox* m_editbox_engoption_engine_inertia;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_clutch_force, "editbox_engoption_clutch_force");
	MyGUI::EditBox* m_editbox_engoption_clutch_force;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_shift_time, "editbox_engoption_shift_time");
	MyGUI::EditBox* m_editbox_engoption_shift_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_clutch_time, "editbox_engoption_clutch_time");
	MyGUI::EditBox* m_editbox_engoption_clutch_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_post_shift_time, "editbox_engoption_post_shift_time");
	MyGUI::EditBox* m_editbox_engoption_post_shift_time;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_stall_rpm, "editbox_engoption_stall_rpm");
	MyGUI::EditBox* m_editbox_engoption_stall_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_idle_rpm, "editbox_engoption_idle_rpm");
	MyGUI::EditBox* m_editbox_engoption_idle_rpm;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_max_idle_mixture, "editbox_engoption_max_idle_mixture");
	MyGUI::EditBox* m_editbox_engoption_max_idle_mixture;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_editbox_engoption_min_idle_mixture, "editbox_engoption_min_idle_mixture");
	MyGUI::EditBox* m_editbox_engoption_min_idle_mixture;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_button_save, "button_save");
	MyGUI::Button* m_button_save;

	ATTRIBUTE_FIELD_WIDGET_NAME(RigEditorLandVehiclePropertiesWindowLayout, m_button_cancel, "button_cancel");
	MyGUI::Button* m_button_cancel;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR

