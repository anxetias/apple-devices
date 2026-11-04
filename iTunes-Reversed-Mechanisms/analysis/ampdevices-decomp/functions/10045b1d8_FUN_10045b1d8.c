// name: FUN_10045b1d8
// address: 10045b1d8

void FUN_10045b1d8(long param_1,void *param_2)

{
  if ((((*(char *)(param_1 + 0x870) == '\x01') && (*(char *)(param_1 + 0x428) == '\x01')) &&
      (*(char *)(param_1 + 0x880) == *(char *)(param_1 + 0x438))) &&
     (*(undefined1 (*) [16])(param_1 + 0x429) == *(undefined1 (*) [16])(param_1 + 0x871))) {
    _memcpy(param_2,(void *)(param_1 + 8),0x420);
    _memcpy((void *)((long)param_2 + 0x420),(void *)(param_1 + 0x450),0x420);
    return;
  }
  return;
}

