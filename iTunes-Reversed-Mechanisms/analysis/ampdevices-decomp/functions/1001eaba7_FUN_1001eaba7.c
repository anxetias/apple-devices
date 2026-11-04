// name: FUN_1001eaba7
// address: 1001eaba7

void FUN_1001eaba7(ulong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1001c62d9(param_1,0x18);
  if ((param_1 & 7) != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c33f0(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

