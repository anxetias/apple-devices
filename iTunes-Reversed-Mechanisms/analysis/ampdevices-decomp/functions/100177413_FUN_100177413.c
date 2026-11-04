// name: FUN_100177413
// address: 100177413

bool FUN_100177413(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006832f0(uVar4);
    }
    FUN_1001782e9(0,0);
    return false;
  }
  lVar3 = *(long *)(param_1 + 10);
  if (lVar3 == 0) {
    iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x6e616d65,param_1 + 10);
    if (iVar2 == 0) {
      lVar3 = *(long *)(param_1 + 10);
      goto LAB_100177435;
    }
  }
  else {
LAB_100177435:
    if (*(int *)(lVar3 + 4) != 0) {
      iVar2 = *(int *)(lVar3 + 0xc + (ulong)(*(int *)(lVar3 + 4) - 1) * 8);
      goto LAB_100177485;
    }
  }
  iVar2 = 0;
LAB_100177485:
  return param_2 + 0x96 < iVar2;
}

