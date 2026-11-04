// name: FUN_1001ebfee
// address: 1001ebfee

undefined8 FUN_1001ebfee(int *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_1 == (int *)0x0) {
LAB_1001ec0e9:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c3ee7(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  if (*param_1 != 0x776b7470) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c3e05(uVar5);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_1001ec0e9;
  }
  piVar1 = param_1 + 2;
  FUN_1001e85e3(piVar1);
  param_1[0x48] = param_1[0x48] + 1;
  FUN_1001ea897(param_2,param_1 + 0x28);
  if ((((char)param_1[0x49] == '\0') && (uVar2 = param_1[0x3a], uVar2 < (uint)param_1[0x3c])) &&
     (uVar2 < (uint)param_1[0x48])) {
    param_1[0x3a] = uVar2 + 1;
    iVar4 = FUN_1001ee6ff(FUN_1001ec13d,param_1,param_1[0x26],0,0,(long)param_1 + 0x126);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) goto LAB_1001ec0d5;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_1006c3e7b(iVar4,uVar5);
      }
    }
    param_1[0x3a] = param_1[0x3a] + -1;
  }
LAB_1001ec0d5:
  FUN_1001e8671(piVar1);
  FUN_1001e89de(piVar1);
  return 0;
}

