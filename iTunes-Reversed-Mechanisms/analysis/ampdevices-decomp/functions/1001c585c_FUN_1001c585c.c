// name: FUN_1001c585c
// address: 1001c585c

undefined8 FUN_1001c585c(int *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x46697841)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a89ca(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      param_1[2] = param_2;
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8954(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

