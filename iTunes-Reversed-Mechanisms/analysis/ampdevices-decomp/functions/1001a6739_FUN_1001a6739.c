// name: FUN_1001a6739
// address: 1001a6739

void FUN_1001a6739(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 local_1c;
  
  *param_1 = 0;
  iVar2 = _IOMasterPort(0,&local_1c);
  if (iVar2 == 0) {
    uVar1 = _IOBSDNameMatching(local_1c,0,param_2);
    _IOServiceGetMatchingServices(local_1c,uVar1,param_1);
  }
  return;
}

