// name: FUN_1001ead5c
// address: 1001ead5c

undefined8 FUN_1001ead5c(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c363e(uVar2);
    }
    uVar2 = 0;
    FUN_1001782e9(0,1);
  }
  else {
    uVar2 = *param_1;
  }
  return uVar2;
}

