// name: FUN_100503dd8
// address: 100503dd8

void FUN_100503dd8(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_100503928(uVar1,(long)param_2 + 0x31,(long)param_2 + 0x51);
  uVar3 = uVar1;
  if ((char)param_2[6] != '\0') {
    uVar3 = FUN_10017072a(DAT_1008c4d90,0,uVar1);
    FUN_100164902(uVar3,FUN_1005269e4,0);
    FUN_10017060f(uVar1);
  }
  if ((long *)param_2[4] != (long *)0x0) {
    (**(code **)(*(long *)param_2[4] + 0x30))();
  }
  FUN_10017060f(uVar3);
  plVar2 = (long *)param_2[4];
  if (plVar2 == param_2) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (plVar2 == (long *)0x0) goto LAB_100503e70;
  }
  (**(code **)(*plVar2 + lVar4))();
LAB_100503e70:
  operator_delete(param_2);
  return;
}

