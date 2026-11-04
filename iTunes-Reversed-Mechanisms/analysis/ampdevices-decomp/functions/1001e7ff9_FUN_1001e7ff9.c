// name: FUN_1001e7ff9
// address: 1001e7ff9

undefined4 FUN_1001e7ff9(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_38;
  
  if (DAT_1008a2a10 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1008a2a10);
    if (iVar2 != 0) {
      DAT_1008a2a08 = FUN_1001e816d();
      ___cxa_guard_release(&DAT_1008a2a10);
    }
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar6 = 0;
  if (param_4 != 0 && param_2 != 0) {
    if (param_1 == 0 || param_3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0768(uVar5);
      }
      FUN_1001782e9(0,0);
      uVar6 = 0xffffffce;
    }
    else {
      lVar3 = FUN_100173568(0,param_1,param_2,DAT_1008a2a08,0,
                            *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
      if (lVar3 == 0) {
        uVar6 = 0xffffddce;
      }
      else {
        lVar4 = _CFStringGetBytes(lVar3,0,param_2,0x8000100,0,0,param_3,param_4,&local_38);
        uVar6 = 0xffffddce;
        if (lVar4 != 0) {
          uVar6 = 0;
        }
        if (param_5 != (undefined8 *)0x0) {
          *param_5 = local_38;
        }
      }
      FUN_10017060f(lVar3);
    }
  }
  return uVar6;
}

