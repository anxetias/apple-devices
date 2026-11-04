// name: FUN_1001c666e
// address: 1001c666e

undefined8 FUN_1001c666e(undefined4 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9907(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_1,0x28);
    puVar2 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a9891(uVar3);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0xffffff94;
    }
    else {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 4) = 0x3f800000;
      *(undefined8 **)(param_1 + 8) = puVar2;
      *param_1 = 0x4d536e64;
      uVar3 = 0;
    }
  }
  return uVar3;
}

