// name: FUN_1001ebe12
// address: 1001ebe12

void FUN_1001ebe12(double param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double local_28;
  timespec local_20;
  
  if (0.0 < param_1) {
    dVar3 = (double)_modf(&local_28);
    local_20.tv_sec = (__darwin_time_t)local_28;
    local_20.tv_nsec = (long)(int)(dVar3 * DAT_10070e4d8);
    if (999999999 < (uint)(int)(dVar3 * DAT_10070e4d8)) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2);
      if (cVar1 != '\0') {
        FUN_1006c3d19(uVar2);
      }
      FUN_1001782e9(0);
    }
    _nanosleep(&local_20,(timespec *)0x0);
  }
  return;
}

