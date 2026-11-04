// name: FUN_1001b9bf8
// address: 1001b9bf8

int FUN_1001b9bf8(long param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    if (param_2 == (char *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a1eec(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = 0;
    }
    else {
      iVar3 = _strcmp((char *)(param_1 + 0xc),param_2);
      iVar2 = 1;
      if (iVar3 < 1) {
        iVar2 = -(uint)(iVar3 != 0);
      }
    }
  }
  else {
    iVar2 = FUN_1001bdbd4();
  }
  return iVar2;
}

