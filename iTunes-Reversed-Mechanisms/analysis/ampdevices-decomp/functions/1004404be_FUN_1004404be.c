// name: FUN_1004404be
// address: 1004404be

undefined4 FUN_1004404be(long param_1,byte *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x4a8) != 0) {
    lVar3 = _AVCFPlayerItemGetStatus(*(long *)(param_1 + 0x4a8),0);
    if (lVar3 == 1) {
      uVar2 = FUN_10044053e(param_1,param_2);
      goto LAB_10044050e;
    }
  }
  FUN_1004406ae(param_1,1,0);
  uVar2 = FUN_100440706(param_1,param_2);
LAB_10044050e:
  if ((char)uVar2 == '\x01' && param_2 != (byte *)0x0) {
    cVar1 = FUN_100440864(param_1);
    if (cVar1 != '\0') {
      *param_2 = *param_2 | 0x40;
    }
  }
  return uVar2;
}

