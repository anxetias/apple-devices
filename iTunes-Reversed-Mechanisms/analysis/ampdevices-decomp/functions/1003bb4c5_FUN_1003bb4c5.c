// name: FUN_1003bb4c5
// address: 1003bb4c5

long * FUN_1003bb4c5(long *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_1008570d8;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined1 *)((long)puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = 0;
  }
  FUN_1003bbdc0(param_1,puVar2);
  FUN_100167740(param_4,PTR_cf_usernotification_kind_10088f8e0,*param_1 + 0x20);
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1c) = param_2;
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  uVar3 = FUN_100166b7f(param_4,PTR_cf_usernotification_userdict_10088f8e8);
  uVar3 = FUN_1001705fc(uVar3);
  *(undefined8 *)(*param_1 + 0x28) = uVar3;
  return param_1;
}

