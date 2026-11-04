// name: FUN_100177a12
// address: 100177a12

undefined8 FUN_100177a12(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  void *key;
  CCCryptorStatus CVar3;
  undefined8 uVar4;
  CCCryptorRef *cryptorRef;
  CCMode mode;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar2 == 3) && (*(long *)(param_1 + 0x30) == 0)) {
      uVar4 = 0x20a0;
    }
    else {
      key = *(void **)(param_1 + 0x18);
      uVar4 = 0x20a3;
      if (key != (void *)0x0) {
        bVar1 = param_1[0x20];
        if (((bVar1 == 0x20) || (bVar1 == 0x10)) &&
           ((iVar2 == 3 || (uVar4 = 0x209e, param_1[0x38] == '\0')))) {
          cryptorRef = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
          if (cryptorRef != (CCCryptorRef *)0x0) {
            *cryptorRef = (CCCryptorRef)0x0;
          }
          *(CCCryptorRef **)(param_1 + 0x28) = cryptorRef;
          mode = 2;
          if (iVar2 != 3) {
            mode = (uint)(iVar2 == 2) * 3 + 1;
          }
          CVar3 = _CCCryptorCreateWithMode
                            ((uint)(*(int *)(param_1 + 0xc) == 2),mode,0,
                             (uint)(*(int *)(param_1 + 0x10) == 1),*(void **)(param_1 + 0x30),key,
                             (ulong)bVar1,(void *)0x0,0,0,0,cryptorRef);
          uVar4 = 0x20a6;
          if (CVar3 == 0) {
            *param_1 = 1;
            uVar4 = 0;
          }
        }
      }
    }
    return uVar4;
  }
  return 0x206d;
}

