// name: FUN_100353213
// address: 100353213

void FUN_100353213(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x3d8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = FUN_100352c96(param_2,(long)puVar1 + 0x14,0);
    if (lVar2 != 0) {
      _memcpy((void *)(lVar2 + 0x20),puVar1 + 4,0xaf4);
      if ((param_3 & 2) == 0) {
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 3);
        *(undefined1 *)(lVar2 + 0x1c) = *(undefined1 *)((long)puVar1 + 0x1c);
        *(undefined1 *)(lVar2 + 0x1d) = *(undefined1 *)((long)puVar1 + 0x1d);
      }
      if ((param_3 & 1) != 0) {
        *(undefined2 *)(lVar2 + 0x22) = 0;
      }
      FUN_100352999(lVar2);
    }
  }
  return;
}

