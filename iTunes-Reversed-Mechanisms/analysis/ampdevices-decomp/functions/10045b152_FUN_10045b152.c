// name: FUN_10045b152
// address: 10045b152

undefined8 FUN_10045b152(long param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x439) == '\x01') {
    if (((*(char *)(param_1 + 0xcb8) == '\x01') &&
        (*(char *)(param_1 + 0x449) == *(char *)(param_1 + 0xcc8))) &&
       (*(undefined1 (*) [16])(param_1 + 0xcb9) == *(undefined1 (*) [16])(param_1 + 0x43a))) {
      _memcpy(param_2,(void *)(param_1 + 0x898),0x420);
      _memcpy((void *)((long)param_2 + 0x420),(void *)(param_1 + 8),0x420);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

