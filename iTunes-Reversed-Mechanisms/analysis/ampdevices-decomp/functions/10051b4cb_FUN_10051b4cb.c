// name: FUN_10051b4cb
// address: 10051b4cb

void FUN_10051b4cb(long param_1)

{
  long lVar1;
  short local_1a;
  
  if ((*(char *)(param_1 + 0x14d18) != '\0') &&
     (lVar1 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 0x30)), lVar1 != 0)) {
    do {
      if ((((*(short *)(lVar1 + 0x54) == 0x80) && (*(short *)(lVar1 + 0x74) == 0)) &&
          (*(int *)(lVar1 + 0x78) == 0)) && (FUN_10031ab0f(lVar1,&local_1a,1), local_1a == 0x1f6)) {
        *(byte *)(lVar1 + 0x4a) = *(byte *)(lVar1 + 0x4a) | 1;
      }
      lVar1 = FUN_1002fa118(lVar1);
    } while (lVar1 != 0);
  }
  return;
}

