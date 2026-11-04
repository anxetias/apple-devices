// name: FUN_1001c70dd
// address: 1001c70dd

undefined8 FUN_1001c70dd(undefined4 *param_1,long param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9e8c(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  FUN_1001c62d9(param_1,0x40);
  if (*(long *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0xc) = param_3;
    lVar4 = 0x38;
  }
  else {
    param_4 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
    if (param_4 == (void *)0x0) {
      *(undefined8 *)(param_1 + 10) = 0;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a9da0(uVar3);
      }
      goto LAB_1001c71f9;
    }
    lVar4 = 0x28;
    FUN_10028593a(param_4,param_2);
  }
  *(void **)((long)param_1 + lVar4) = param_4;
  puVar2 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    *(undefined8 **)(param_1 + 8) = puVar2;
    *param_1 = 0x4d526376;
    return 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006a9e16(uVar3);
  }
LAB_1001c71f9:
  FUN_1001782e9(0,0);
  return 0xffffff94;
}

