// name: FUN_1001ed0ad
// address: 1001ed0ad

void FUN_1001ed0ad(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x78) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c49bb(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined4 *)(param_2 + 0x78) = 0;
  (**(code **)(param_2 + 0x60))(param_2,*(undefined8 *)(param_2 + 0x68));
  return;
}

