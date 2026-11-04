// name: FUN_100184067
// address: 100184067

long FUN_100184067(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 0x270) <= param_2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068abfb(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  lVar4 = (ulong)param_2 * 0xac0;
  if ((*(byte *)(*(long *)(param_1 + 0x278) + 0xab8 + lVar4) & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068ac71(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  lVar3 = *(long *)(param_1 + 0x2a8);
  if ((lVar3 == 0) || (lVar5 = (ulong)param_2 * 0x200, *(short *)(lVar3 + lVar5) == 0)) {
    lVar3 = *(long *)(param_1 + 0x278) + lVar4 + 0x420;
  }
  else {
    lVar3 = lVar3 + lVar5;
  }
  return lVar3;
}

