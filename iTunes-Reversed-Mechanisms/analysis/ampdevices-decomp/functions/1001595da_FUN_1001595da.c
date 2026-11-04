// name: FUN_1001595da
// address: 1001595da

undefined8 FUN_1001595da(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  *param_3 = 0;
  local_28 = in_RAX;
  lVar2 = (**(code **)(*param_1 + 0x48))();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_100164e20(lVar2,&local_28);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      *param_3 = 1;
      uVar3 = local_28;
    }
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

