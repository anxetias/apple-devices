// name: FUN_1001e86ff
// address: 1001e86ff

int FUN_1001e86ff(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) || (param_1[2] != 0x636f6e64)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0ee1(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001ea458(param_1 + 2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1001e87bb(param_1,0x7fffffffffffffff);
        FUN_1001ea4ac(param_1 + 2);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c0e75(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

