// name: FUN_1001f2303
// address: 1001f2303

undefined8 FUN_1001f2303(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c5f39(uVar3);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 != 0) {
      puVar2 = (undefined4 *)FUN_1001c6429(0x50);
      if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 0xffffff94;
      }
      else {
        FUN_1001c62d9(puVar2,0x38);
        *puVar2 = 0x786d6c65;
        *(long *)(puVar2 + 0x10) = param_1;
        *(undefined8 *)(puVar2 + 0x12) = param_2;
        uVar3 = 0;
      }
      *param_3 = puVar2;
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c5ec3(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

