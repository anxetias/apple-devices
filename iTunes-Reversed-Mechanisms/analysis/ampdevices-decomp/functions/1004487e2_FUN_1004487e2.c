// name: FUN_1004487e2
// address: 1004487e2

undefined8 FUN_1004487e2(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x38))();
  if (*(char *)((long)param_1 + 0x45) == '\0') {
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_1 + 9);
    if (iVar4 == 0) {
      *(undefined1 *)((long)param_1 + 0x45) = 1;
    }
    else if ((*(byte *)((long)param_1 + 0x45) & 1) == 0) {
      return 0xffffffce;
    }
  }
  param_2[4] = param_1[0xd];
  lVar1 = param_1[9];
  lVar2 = param_1[10];
  lVar3 = param_1[0xc];
  param_2[2] = param_1[0xb];
  param_2[3] = lVar3;
  *param_2 = lVar1;
  param_2[1] = lVar2;
  return 0;
}

