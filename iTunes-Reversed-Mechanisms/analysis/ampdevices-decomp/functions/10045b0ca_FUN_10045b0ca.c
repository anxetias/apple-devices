// name: FUN_10045b0ca
// address: 10045b0ca

undefined8 FUN_10045b0ca(long param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x881) == '\x01') {
    if (((*(char *)(param_1 + 0xcb8) == '\x01') &&
        (*(char *)(param_1 + 0x891) == *(char *)(param_1 + 0xcc8))) &&
       (*(undefined1 (*) [16])(param_1 + 0xcb9) == *(undefined1 (*) [16])(param_1 + 0x882))) {
      _memcpy(param_2,(void *)(param_1 + 0x898),0x420);
      _memcpy((void *)((long)param_2 + 0x420),(void *)(param_1 + 0x450),0x420);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

