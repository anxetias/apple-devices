// name: FUN_1001b4e36
// address: 1001b4e36

undefined4 * FUN_1001b4e36(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  if (lVar1 == 0) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
  }
  else {
    puVar2 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(lVar1);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0x3ff0000000000000;
      puVar2[8] = 0x100000000;
      *puVar2 = &PTR_FUN_10083cc58;
      puVar2[9] = uVar3;
      *(undefined1 *)(puVar2 + 10) = 0;
    }
    FUN_1001b5e96(&local_38,puVar2);
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  (*(code *)PTR__objc_release_10082c7b0)(lVar1);
  return param_1;
}

