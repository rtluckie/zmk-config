#pragma once
#include <behaviors.dtsi>

#include <dt-bindings/zmk/outputs.h>
#include <dt-bindings/zmk/mouse.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/ext_power.h>
#include <dt-bindings/zmk/bt.h>

#include "helpers.h"
#include "config.dtsi"
#include "../features/features.dtsi"
#include "layouts.dtsi"

#if __has_include("../secret.dtsi")
#include "../secret.dtsi"
#endif