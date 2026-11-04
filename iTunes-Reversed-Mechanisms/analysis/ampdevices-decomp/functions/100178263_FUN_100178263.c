// name: FUN_100178263
// address: 100178263

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100178263(void)

{
  long lVar1;
  
  if (DAT_10088ffc0 == '\0') {
    DAT_10088ffc0 = '\x01';
    lVar1 = _CFTimeZoneCopyDefault();
    if (lVar1 != 0) {
      FUN_1001711e2();
      _DAT_10088ffc8 = (double)_CFTimeZoneGetSecondsFromGMT(lVar1);
      FUN_10017060f(lVar1);
    }
  }
  return (int)_DAT_10088ffc8;
}

