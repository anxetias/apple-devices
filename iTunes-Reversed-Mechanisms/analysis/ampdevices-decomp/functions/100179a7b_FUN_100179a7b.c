// name: FUN_100179a7b
// address: 100179a7b

undefined8 FUN_100179a7b(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x48617368)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100683d04(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_1,0x90);
    FUN_1001c64c1(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

