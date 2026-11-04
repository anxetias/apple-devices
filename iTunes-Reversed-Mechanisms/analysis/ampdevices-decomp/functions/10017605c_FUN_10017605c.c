// name: FUN_10017605c
// address: 10017605c

int FUN_10017605c(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 local_22;
  
  local_22 = 1;
  if (*param_1 == 0x63687064) {
    param_2 = param_2 + (uint)(param_2 == 0);
    if (((char)param_1[0x10] == '\0') || (param_1[0x11] != param_2)) {
      iVar2 = FUN_10015bc21(*(undefined8 *)(param_1 + 6),0,0x63686170,param_2,&local_22);
      iVar4 = 0;
      if (iVar2 != 0) {
        param_1[0x12] = iVar2;
        param_1[0x11] = param_2;
        *(undefined2 *)(param_1 + 0x13) = local_22;
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(undefined1 *)((long)param_1 + 0x4e) = 0;
        iVar4 = iVar2;
      }
    }
    else {
      iVar4 = param_1[0x12];
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068225a(uVar3);
    }
    iVar4 = 0;
    FUN_1001782e9(0,0);
  }
  return iVar4;
}

