// name: FUN_1001e8d42
// address: 1001e8d42

int FUN_1001e8d42(int param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (param_1 == 0x636c6561) {
    FUN_1001ea1df(param_2 + 0x18);
  }
  else {
    iVar2 = 0;
    if (param_1 == 0x696e6974) {
      iVar2 = FUN_1001ea0b9(param_2 + 0x18);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c1441(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

