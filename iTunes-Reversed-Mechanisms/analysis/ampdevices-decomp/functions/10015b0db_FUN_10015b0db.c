// name: FUN_10015b0db
// address: 10015b0db

undefined8 FUN_10015b0db(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x61726179)) {
    uVar2 = FUN_1001c627e(*(undefined8 *)(param_1 + 4));
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10066b775(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

