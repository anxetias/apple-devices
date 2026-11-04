// name: FUN_10015a4db
// address: 10015a4db

void FUN_10015a4db(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x61726179)) {
    param_1[3] = param_1[3] + 1;
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10066ab17(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

