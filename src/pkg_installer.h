#pragma once

#define PKG_INSTALL_UNSUPPORTED 0x7fffffff

int pkg_installer_initialize(void);
int pkg_installer_install(const char *path);

/* Caller owns the returned path; source names contain no SMB credentials. */
char *pkg_installer_source_path(const char *name);
