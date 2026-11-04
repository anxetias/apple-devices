// name: FUN_10041b38c
// address: 10041b38c

void FUN_10041b38c(long param_1,long param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  FUN_100249f2c(param_1 + 0x4a8);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x4b8));
  uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 0x4b8) = uVar1;
  *(byte *)(param_1 + 0x1353) = ~param_4 & param_3;
  plVar2 = (long *)FUN_10039a28c();
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  lVar3 = FUN_10039c016(uVar1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (lVar3 != 0) {
    return;
  }
  plVar2 = (long *)FUN_10039a28c();
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  FUN_10039bdfc(uVar1,param_1);
  return;
}

