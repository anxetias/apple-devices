// name: FUN_1001ed939
// address: 1001ed939

void FUN_1001ed939(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4ffd(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    if (param_2 == '\0') {
      FUN_1001728a5(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_1001e8dd6(&local_38,0,0);
      *(undefined8 **)(param_1 + 0x38) = &local_38;
      FUN_1001728a5(*(undefined8 *)(param_1 + 0x10));
      FUN_1001e944c(&local_38);
      FUN_1001e9587(&local_38);
    }
  }
  return;
}

