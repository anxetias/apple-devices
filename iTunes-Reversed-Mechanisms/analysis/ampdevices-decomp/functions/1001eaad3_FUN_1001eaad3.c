// name: FUN_1001eaad3
// address: 1001eaad3

undefined8 FUN_1001eaad3(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3298(uVar2);
    }
    uVar2 = 0;
    FUN_1001782e9(0,1);
  }
  else {
    uVar2 = *param_1;
  }
  return uVar2;
}

