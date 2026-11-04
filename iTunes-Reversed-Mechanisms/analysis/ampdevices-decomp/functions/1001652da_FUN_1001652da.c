// name: FUN_1001652da
// address: 1001652da

undefined1 FUN_1001652da(long param_1,float *param_2)

{
  double dVar1;
  char cVar2;
  uint in_EAX;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  if (param_2 == (float *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100672c84(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100672c0e(uVar5);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
    uStack_28._4_4_ = 0.0;
  }
  else {
    lVar3 = _CFGetTypeID(param_1);
    lVar4 = _CFNumberGetTypeID();
    if (lVar3 == lVar4) {
      _CFNumberGetValue(param_1,0xc,(long)&uStack_28 + 4);
      uVar6 = 1;
    }
    else {
      lVar4 = _CFStringGetTypeID();
      if (lVar3 == lVar4) {
        dVar1 = (double)_CFStringGetDoubleValue(param_1);
        uStack_28._4_4_ = (float)dVar1;
      }
      else {
        lVar4 = _CFBooleanGetTypeID();
        if (lVar3 != lVar4) {
          uStack_28._4_4_ = 0.0;
          uVar6 = 0;
          goto LAB_1001653ca;
        }
        cVar2 = _CFBooleanGetValue(param_1);
        uStack_28._4_4_ = 0.0;
        if (cVar2 != '\0') {
          uStack_28._4_4_ = DAT_100700b50;
        }
      }
      uVar6 = 1;
    }
  }
LAB_1001653ca:
  *param_2 = uStack_28._4_4_;
  return uVar6;
}

