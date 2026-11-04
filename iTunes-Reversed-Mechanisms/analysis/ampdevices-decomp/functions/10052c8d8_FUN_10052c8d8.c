// name: FUN_10052c8d8
// address: 10052c8d8

long FUN_10052c8d8(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  plVar1 = param_1 + 0xb6;
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,plVar1);
  if (iVar2 == 0) {
    lVar3 = *plVar1;
  }
  else {
    *plVar1 = 0;
    lVar3 = 0;
  }
  return lVar3;
}

