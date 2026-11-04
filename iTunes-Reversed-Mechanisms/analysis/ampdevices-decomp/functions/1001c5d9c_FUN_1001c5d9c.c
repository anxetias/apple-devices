// name: FUN_1001c5d9c
// address: 1001c5d9c

undefined4 FUN_1001c5d9c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1001c5dea();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8e66(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar3;
}

