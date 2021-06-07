public_incdir = include_directories('.')
public_headers = files(
  'cvb_blob.h',
  'cvb_boundary.h',
  'cvb_defines.h',
  'cvb_detect.h',
)

includes = [
  public_incdir,
  private_incdir,
]

install_headers(public_headers, subdir: meson.project_name())
