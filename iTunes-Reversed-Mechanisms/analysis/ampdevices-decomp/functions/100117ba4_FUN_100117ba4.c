// name: FUN_100117ba4
// address: 100117ba4

void FUN_100117ba4(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_100111964();
  *param_1 = &PTR_FUN_100835c78;
  param_1[0x166] = 0;
  *(undefined4 *)((long)param_1 + 0x1f54) = param_3;
  param_1[0x3eb] = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  if ((ulong)uVar1 == 0) {
    uVar2 = FUN_100123f88(param_1,param_2 + 100);
  }
  else if (uVar1 < 8) {
    uVar2 = *(undefined2 *)(&DAT_100700a20 + (ulong)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined2 *)(param_1 + 0x3ea) = uVar2;
  FUN_100111a7c(param_1,*(undefined4 *)(param_2 + 0x2c),1);
  param_1[0x166] = (long)param_1 + 0x494;
  uVar4 = FUN_100105f68(0x1dbd0);
  uVar3 = FUN_100117a8e(param_2 + 0x2c);
  FUN_10010c9dc(uVar4,uVar3,*(undefined4 *)((long)param_1 + 0x1f54),1,param_4);
  param_1[0x165] = uVar4;
  ___bzero(param_1 + 0x167,0x1418);
  return;
}

