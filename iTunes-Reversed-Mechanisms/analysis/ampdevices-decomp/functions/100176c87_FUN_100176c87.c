// name: FUN_100176c87
// address: 100176c87

int FUN_100176c87(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0x63687064) {
    iVar3 = FUN_10017605c(param_1,param_2 + (uint)(param_2 == 0));
    if (iVar3 != 0) {
      iVar3 = FUN_10015bb96(*(undefined8 *)(param_1 + 6),iVar3,param_3,1,0);
      if (iVar3 == 0) {
        return -0x32;
      }
      sVar2 = FUN_10015bdbd(*(undefined8 *)(param_1 + 6),iVar3,1,param_4,param_5,0);
      return (int)sVar2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100682cb8(uVar4);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100682c42(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

