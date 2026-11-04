// name: FUN_100117d54
// address: 100117d54

void FUN_100117d54(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x40))();
  FUN_100111a7c(param_1,*(undefined4 *)(param_2 + 0x2c),1);
  lVar1 = param_1[0x165];
  uVar2 = FUN_100117a8e(param_2 + 0x2c);
  FUN_10010c1a2(lVar1,uVar2,*(undefined4 *)((long)param_1 + 0x1f54));
  ___bzero(param_1 + 0x167,0x1418);
  return;
}

