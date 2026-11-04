// name: FUN_100177b23
// address: 100177b23

undefined4 FUN_100177b23(char *param_1,void *param_2,uint *param_3)

{
  void *pvVar1;
  CCCryptorStatus CVar2;
  size_t in_RAX;
  undefined4 uVar3;
  size_t local_28;
  
  uVar3 = 0x206f;
  if ((param_1 != (char *)0x0) && (*param_1 == '\x01')) {
    if (param_3 == (uint *)0x0 || param_2 == (void *)0x0) {
      uVar3 = 0;
      local_28 = in_RAX;
      if (param_3 != (uint *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      local_28 = 0;
      CVar2 = _CCCryptorFinal((CCCryptorRef)**(undefined8 **)(param_1 + 0x28),param_2,
                              (ulong)*param_3,&local_28);
      *param_3 = (uint)local_28;
      uVar3 = 0x20a8;
      if (CVar2 == 0) {
        uVar3 = 0;
      }
    }
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      FUN_100177ce4(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    *param_1 = '\0';
  }
  return uVar3;
}

