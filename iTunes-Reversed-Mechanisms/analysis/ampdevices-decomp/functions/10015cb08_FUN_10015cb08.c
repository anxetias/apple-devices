// name: FUN_10015cb08
// address: 10015cb08

undefined8 FUN_10015cb08(uint *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (uint *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10066c789(uVar5);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_2 = 0;
      lVar3 = FUN_1001c6429(0x28);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_10066c69d(uVar5);
        }
        FUN_1001782e9(0,0);
        return 0xffffff94;
      }
      uVar2 = *param_1;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      *(uint *)(lVar3 + 0x1c) = uVar2;
      if ((param_3 & 1) == 0) {
        *(uint **)(lVar3 + 0x20) = param_1;
      }
      else {
        lVar4 = FUN_1001c63e1((long)(int)uVar2);
        *(long *)(lVar3 + 0x20) = lVar4;
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_10066c627(uVar5);
          }
          FUN_1001782e9(0,0);
          FUN_1001c64c1(lVar3);
          return 0xffffff94;
        }
        FUN_1001c631b(param_1,lVar4,(long)(int)uVar2);
        *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 1;
      }
      if ((param_3 & 2) != 0) {
        *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 1;
      }
      *param_2 = lVar3;
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10066c713(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

