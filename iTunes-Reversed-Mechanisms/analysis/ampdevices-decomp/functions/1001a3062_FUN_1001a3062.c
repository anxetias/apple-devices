// name: FUN_1001a3062
// address: 1001a3062

bool FUN_1001a3062(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069ca3e(uVar2);
    }
    bVar3 = false;
    FUN_1001782e9(0,0);
  }
  else {
    bVar3 = *param_1 - 300U < 100;
  }
  return bVar3;
}

