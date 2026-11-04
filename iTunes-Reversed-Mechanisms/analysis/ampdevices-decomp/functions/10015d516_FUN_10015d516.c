// name: FUN_10015d516
// address: 10015d516

undefined8 FUN_10015d516(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d4a1(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      if (*(long *)(param_2 + 8) != param_1) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_10066d3b5(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1001c2502(param_1 + 0x10,param_2);
      lVar4 = *(long *)(param_2 + 8);
      if (lVar4 == 0) {
        return 0;
      }
      uVar1 = **(uint **)(param_2 + 0x20);
      do {
        *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) | 2;
        uVar5 = **(uint **)(lVar4 + 0x20);
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) -
                (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
        **(uint **)(lVar4 + 0x20) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d42b(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

