// name: FUN_1001f023e
// address: 1001f023e

undefined4 FUN_1001f023e(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffff9a;
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0x140), puVar1 != (undefined8 *)0x0)) {
    uVar2 = 0;
    if ((puVar1[0x18] == 0) &&
       ((uVar2 = 0, *(int *)(puVar1 + 0x27) == 0 &&
        (uVar2 = 0xffffff97, puVar1[0x15] == puVar1[0x16])))) {
      uVar2 = 0;
    }
    if ((void *)*puVar1 != (void *)0x0) {
      _free((void *)*puVar1);
    }
    *puVar1 = 0;
    if (puVar1[0x10] == 8) {
      _inflateEnd((z_streamp)(puVar1 + 1));
    }
    _free(puVar1);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return uVar2;
}

