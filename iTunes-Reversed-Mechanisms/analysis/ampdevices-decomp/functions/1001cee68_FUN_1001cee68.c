// name: FUN_1001cee68
// address: 1001cee68

void FUN_1001cee68(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10083d350;
  if (*(int *)(param_1 + 1) != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006afbff(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

