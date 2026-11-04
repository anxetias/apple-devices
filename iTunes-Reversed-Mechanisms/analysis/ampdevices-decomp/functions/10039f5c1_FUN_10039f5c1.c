// name: FUN_10039f5c1
// address: 10039f5c1

void FUN_10039f5c1(long *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (*param_1 != 0) {
    _ucol_close();
  }
  if (param_1[1] != 0) {
    _utrans_close();
  }
  pvVar4 = (void *)param_1[2];
  if (pvVar4 != (void *)0x0) {
    if (0 < param_1[3]) {
      uVar3 = 0;
      uVar5 = 1;
      do {
        lVar1 = param_1[2];
        _CFRelease(*(undefined8 *)(lVar1 + uVar3 * 0x28));
        _CFRelease(*(undefined8 *)(lVar1 + 8 + uVar3 * 0x28));
        _CFRelease(*(undefined8 *)(lVar1 + 0x18 + uVar3 * 0x28));
        _CFRelease(*(undefined8 *)(lVar1 + 0x10 + uVar3 * 0x28));
        bVar2 = (long)uVar5 < param_1[3];
        uVar3 = uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar2);
      pvVar4 = (void *)param_1[2];
    }
    _free(pvVar4);
  }
  _free(param_1);
  return;
}

