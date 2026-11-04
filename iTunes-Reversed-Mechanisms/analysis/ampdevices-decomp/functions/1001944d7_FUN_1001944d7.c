// name: FUN_1001944d7
// address: 1001944d7

int FUN_1001944d7(long param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [8];
  
  cVar1 = FUN_1001ce65d(0x464e4452,0x4d414353,local_30);
  if (cVar1 == '\0') {
    return -600;
  }
  iVar3 = FUN_100235b70(param_2,param_3,local_3c,0xffffffff,local_30);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_1 != 0) {
    iVar3 = FUN_100235c84(param_1,local_48);
    if (iVar3 != 0) goto LAB_1001945ad;
    sVar2 = _AEPutParamDesc(local_3c,0x2d2d2d2d,local_48);
    _AEDisposeDesc(local_48);
    if (sVar2 != 0) {
      iVar3 = (int)sVar2;
      goto LAB_1001945ad;
    }
  }
  sVar2 = _AESend(local_3c,local_48,0x11,0,0xffffffff,0,0);
  iVar3 = (int)sVar2;
  if (param_4 != '\0') {
    _SetFrontProcess(local_30);
  }
LAB_1001945ad:
  _AEDisposeDesc(local_3c);
  return iVar3;
}

