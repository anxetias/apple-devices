// name: FUN_10044851c
// address: 10044851c

int FUN_10044851c(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = _AVCFAssetReaderGetStatus(*(undefined8 *)(param_1 + 0x30));
  if (lVar3 == 2) {
    iVar1 = -0x27;
  }
  else if (lVar3 == 4) {
    iVar1 = -0x80;
  }
  else {
    iVar1 = 0;
    if (lVar3 != 3) goto LAB_10044858b;
    lVar3 = _AVCFAssetReaderCopyError(*(undefined8 *)(param_1 + 0x30));
    if (lVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_100171607(lVar3);
      FUN_10017060f(lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0xe0) = 1;
LAB_10044858b:
  iVar2 = -0x32;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  if (param_2 == '\0') {
    iVar2 = iVar1;
  }
  return iVar2;
}

