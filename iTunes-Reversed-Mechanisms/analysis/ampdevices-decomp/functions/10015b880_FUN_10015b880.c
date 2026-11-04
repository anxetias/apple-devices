// name: FUN_10015b880
// address: 10015b880

long FUN_10015b880(uint param_1,void *param_2)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  lVar3 = FUN_1001c5c8c((ulong)param_1);
  if (lVar3 != 0) {
    pvVar4 = (void *)FUN_1001c627e(lVar3);
    _memcpy(pvVar4,param_2,(ulong)param_1);
    cVar2 = FUN_10015b3fc(lVar3);
    if ((cVar2 != '\0') && (cVar2 = FUN_10015b6c3(lVar3,0,1), cVar2 != '\0')) {
      lVar5 = FUN_1001c627e(lVar3);
      *(undefined2 *)(lVar5 + 0x18) = 1;
      lVar5 = FUN_1001c627e(lVar3);
      uVar1 = *(ushort *)(lVar5 + 8);
      lVar5 = FUN_1001c627e(lVar3);
      *(ushort *)(lVar5 + 8) = uVar1 | 0x80;
      return lVar3;
    }
    FUN_1001c6209(lVar3);
  }
  return 0;
}

