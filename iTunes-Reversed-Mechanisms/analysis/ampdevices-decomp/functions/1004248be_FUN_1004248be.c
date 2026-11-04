// name: FUN_1004248be
// address: 1004248be

void FUN_1004248be(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  byte bVar6;
  undefined1 local_38 [16];
  
  if ((*(int *)(param_1 + 0x4c4) == 0x55f2) && (*(char *)(param_1 + 0x5c) == '\x01')) {
    uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00e4);
    FUN_1001b81f2(param_2,uVar4);
  }
  if (*(char *)(param_1 + 0x5e) == '\x01') {
    uVar4 = FUN_100416f20(*(int *)(param_1 + 0x58),0x10cc029d);
    FUN_1001b81f2(param_2 + 0x10,uVar4);
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0x69545620) {
    FUN_100424320(param_1,param_2 + 0x20,param_2 + 0x38,param_2 + 0x68);
    cVar3 = *(char *)(param_1 + 0x1359);
    *(char *)(param_2 + 0x30) = cVar3;
    bVar6 = 1;
    if (cVar3 == '\0') {
      iVar2 = *(int *)(param_1 + 0x58);
      if (((iVar2 != 0x4d616320) && (iVar2 != 0x57617463)) && (iVar2 != 0x69427269)) {
        bVar6 = *(byte *)(param_1 + 0x5d);
      }
    }
    bVar6 = *(char *)(param_1 + 0x135a) == '\0' & bVar6;
    *(byte *)(param_2 + 0x69) = bVar6;
    if (bVar6 == 1) {
      uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),
                            (uint)*(byte *)(param_1 + 0x5c) + (uint)*(byte *)(param_1 + 0x5c) * 4 +
                            0x10cc00d4);
      FUN_1001b81f2(param_2 + 0x48,uVar4);
      if ((*(char *)(param_2 + 0x68) == '\x01') && (*(char *)(param_1 + 0x5c) == '\x01')) {
        uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d8);
        FUN_1001b81f2(param_2 + 0x58,uVar4);
      }
    }
  }
  uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d5);
  FUN_1001b81f2(param_2 + 0x88,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  cVar3 = FUN_100247cdd(uVar1);
  uVar4 = FUN_100416f20(uVar1,(cVar3 == '\0') + 0x10cc00d6);
  FUN_1001b81f2(param_2 + 0x98,uVar4);
  FUN_100424874(param_1,param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x80) = 1;
  *(undefined1 *)(param_2 + 0xa8) = 1;
  plVar5 = (long *)FUN_10039a28c();
  cVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,0,0,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x80) != 0) {
      cVar3 = FUN_100502c95();
      if (cVar3 != '\0') {
        uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc029e);
        FUN_1001b81f2(param_2 + 0x20,uVar4);
        *(undefined1 *)(param_2 + 0x69) = 0;
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x69) = 0;
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1001b7a44(local_38);
    uVar4 = FUN_1001b80b2(param_2 + 0x58,local_38);
    FUN_1001b8172(param_2 + 0x48,uVar4);
    FUN_1001b7a50(local_38);
  }
  if (*(char *)(param_2 + 0xa8) == '\0') {
    FUN_1001b7a44(local_38);
    FUN_1001b80b2(param_2 + 0x98,local_38);
    FUN_1001b7a50(local_38);
  }
  return;
}

