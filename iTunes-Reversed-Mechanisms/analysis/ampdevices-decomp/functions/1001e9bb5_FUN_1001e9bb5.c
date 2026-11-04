// name: FUN_1001e9bb5
// address: 1001e9bb5

undefined8 FUN_1001e9bb5(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63636d70)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2063(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if ((param_1[2] & 1U) == 0) {
      FUN_1001e9809(param_1);
    }
    FUN_1001c62d9(param_1,0x10);
    uVar2 = 0;
  }
  return uVar2;
}

