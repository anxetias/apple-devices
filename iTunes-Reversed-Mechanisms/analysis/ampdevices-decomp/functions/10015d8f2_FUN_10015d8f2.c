// name: FUN_10015d8f2
// address: 10015d8f2

void FUN_10015d8f2(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066d75f(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1001c64c1();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

