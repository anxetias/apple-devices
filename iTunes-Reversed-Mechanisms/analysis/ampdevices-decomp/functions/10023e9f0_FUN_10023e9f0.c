// name: FUN_10023e9f0
// address: 10023e9f0

int FUN_10023e9f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  local_38 = 0;
  _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x78));
  iVar1 = _PasteboardCopyItemFlavorData(*(undefined8 *)(param_1 + 0x78),param_2,param_3,&local_38);
  if (iVar1 == 0) {
    lVar2 = _CFDataGetLength(local_38);
    iVar1 = -0x73e;
    if (lVar2 <= *param_5) {
      uVar3 = _CFDataGetBytePtr(local_38);
      FUN_1001c631b(uVar3,param_4,lVar2);
      *param_5 = lVar2;
      iVar1 = 0;
    }
    FUN_10017060f(local_38);
  }
  return iVar1;
}

