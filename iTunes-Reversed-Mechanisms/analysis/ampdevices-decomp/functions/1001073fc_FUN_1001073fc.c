// name: FUN_1001073fc
// address: 1001073fc

void FUN_1001073fc(undefined8 *param_1,long param_2,undefined4 param_3)

{
  void *pvVar1;
  long *plVar2;
  
  FUN_100117ba4();
  *param_1 = &PTR_FUN_10082fdb8;
  pvVar1 = operator_new(1000);
  FUN_100105ab4(pvVar1);
  param_1[0x3ec] = pvVar1;
  ___bzero(param_1 + 0x167,0x1418);
  plVar2 = (long *)FUN_100107aa4(*(undefined4 *)(param_2 + 0x28));
  param_1[0x3ed] = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined2 *)(param_1 + 0x3ea),param_3);
  return;
}

