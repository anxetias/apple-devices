// name: FUN_10039e077
// address: 10039e077

ulong FUN_10039e077(undefined4 param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 unaff_R14;
  ulong uVar5;
  
  uVar3 = FUN_10039a28c();
  cVar1 = FUN_10039e0f4(uVar3,param_1);
  uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (cVar1 == '\0') {
    plVar4 = (long *)FUN_10039a28c();
    uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
    uVar5 = 0;
    plVar4 = (long *)FUN_10039c016(uVar3,param_1,0);
    if (plVar4 != (long *)0x0) {
      uVar5 = 0;
      cVar1 = (**(code **)(*plVar4 + 0x60))(plVar4,0);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,0);
        uVar5 = (ulong)CONCAT31((int3)((uint)uVar2 >> 8),(byte)uVar2 | param_3);
      }
    }
  }
  return uVar5 & 0xffffffff;
}

