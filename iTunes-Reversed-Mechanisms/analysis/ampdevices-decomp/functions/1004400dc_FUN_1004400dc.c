// name: FUN_1004400dc
// address: 1004400dc

undefined8 FUN_1004400dc(long param_1)

{
  char cVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x52b);
  uVar3 = (undefined7)((ulong)in_RAX >> 8);
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 0x498) == 0) {
      cVar1 = '\0';
      uVar3 = 0;
    }
    else {
      lVar2 = _AVCFAssetGetStatusOfValueForProperty
                        (*(long *)(param_1 + 0x498),
                         *(undefined8 *)PTR__AVCFAssetPropertyDuration_10082b140,0);
      uVar3 = (undefined7)((ulong)lVar2 >> 8);
      if ((lVar2 == 2) || (lVar2 == 3)) {
        *(undefined1 *)(param_1 + 0x52b) = 1;
        cVar1 = '\x01';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x52b);
      }
    }
  }
  return CONCAT71(uVar3,cVar1 == '\x01');
}

