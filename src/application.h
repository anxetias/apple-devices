#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define APPLE_TYPE_APPLICATION (apple_application_get_type())
G_DECLARE_FINAL_TYPE(AppleApplication, apple_application,
                     APPLE, APPLICATION, AdwApplication)

AppleApplication *apple_application_new(void);

G_END_DECLS