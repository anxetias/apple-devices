// name: FUN_100235c03
// address: 100235c03

int FUN_100235c03(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  
  iVar2 = FUN_100235b70(param_2,param_3,local_24,0xffffffff,param_1);
  if (iVar2 == 0) {
    sVar1 = _AEPutParamDesc(local_24,0x2d2d2d2d,param_4);
    if (sVar1 == 0) {
      sVar1 = _AESend(local_24,local_30,0x11,0,0xffffffff,0,0);
    }
    iVar2 = (int)sVar1;
    _AEDisposeDesc(local_24);
  }
  return iVar2;
}

