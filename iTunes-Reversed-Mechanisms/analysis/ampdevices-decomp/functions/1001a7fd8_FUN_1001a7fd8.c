// name: FUN_1001a7fd8
// address: 1001a7fd8

ulong FUN_1001a7fd8(long *param_1,ulong param_2,ulong *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong unaff_R12;
  undefined7 uVar7;
  
  if (*param_1 != 0) {
    uVar2 = _CFArrayGetCount();
    if (uVar2 <= param_2) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10069ec51(uVar3);
      }
      unaff_R12 = 0;
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001a80e2;
    }
    lVar4 = _CFArrayGetValueAtIndex(*param_1,param_2);
    if (lVar4 != 0) {
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFNumberGetTypeID();
      uVar7 = (undefined7)(unaff_R12 >> 8);
      if (lVar5 == lVar6) {
        cVar1 = _CFNumberGetValue(lVar4,4,param_3);
        unaff_R12 = CONCAT71(uVar7,cVar1 != '\0');
        goto LAB_1001a80e2;
      }
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar5 == lVar6) {
        cVar1 = _CFBooleanGetValue(lVar4);
        *param_3 = (ulong)(cVar1 != '\0');
LAB_1001a80da:
        unaff_R12 = CONCAT71(uVar7,1);
        goto LAB_1001a80e2;
      }
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 == lVar6) {
        cVar1 = FUN_100167475(lVar4);
        if (cVar1 != '\0') {
          *param_3 = 0;
          goto LAB_1001a80da;
        }
      }
    }
  }
  unaff_R12 = 0;
LAB_1001a80e2:
  return unaff_R12 & 0xffffffff;
}

