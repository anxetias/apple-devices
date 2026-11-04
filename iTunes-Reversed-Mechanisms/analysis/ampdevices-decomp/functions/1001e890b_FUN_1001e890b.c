// name: FUN_1001e890b
// address: 1001e890b

int FUN_1001e890b(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) || (param_1[2] != 0x636f6e64)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c111b(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001ea458(param_1 + 2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        lVar4 = 0x7fffffffffffffff;
        if (param_2 != 0x7fffffff) {
          lVar4 = (ulong)param_2 * 1000000;
        }
        iVar2 = FUN_1001e87bb(param_1,lVar4);
        FUN_1001ea4ac(param_1 + 2);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c10af(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

