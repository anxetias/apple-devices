// name: FUN_1004affd8
// address: 1004affd8

void FUN_1004affd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x17) != '\0')) {
    FUN_1001c6987(lVar1 + 0x80,0x646d6963,param_1,0,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x61a) = 1;
  }
  return;
}

