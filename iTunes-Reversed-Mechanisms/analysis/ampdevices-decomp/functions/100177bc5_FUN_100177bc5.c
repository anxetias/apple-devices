// name: FUN_100177bc5
// address: 100177bc5

undefined4 FUN_100177bc5(char *param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  CCCryptorStatus CVar4;
  undefined4 uVar5;
  size_t local_48;
  ulong local_40;
  uint *local_38;
  
  uVar5 = 0x206f;
  if ((((param_1 != (char *)0x0) && (*param_1 == '\x01')) &&
      (uVar5 = 0x2070, param_3 != 0 && param_2 != (void *)0x0)) &&
     ((uVar5 = 0x2071, param_4 != (void *)0x0 && (uVar3 = *param_5, param_3 <= uVar3)))) {
    uVar1 = param_3 & 0xfffffff0;
    if (*(int *)(param_1 + 0x10) != 2) {
      uVar1 = param_3;
    }
    local_48 = 0;
    local_38 = param_5;
    if (param_1[0x38] == '\x01') {
      _CCCryptorReset((CCCryptorRef)**(undefined8 **)(param_1 + 0x28),*(void **)(param_1 + 0x30));
      uVar3 = *local_38;
    }
    local_40 = (ulong)uVar1;
    CVar4 = _CCCryptorUpdate((CCCryptorRef)**(undefined8 **)(param_1 + 0x28),param_2,(ulong)uVar1,
                             param_4,(ulong)uVar3,&local_48);
    puVar2 = local_38;
    *local_38 = (uint)local_48;
    uVar5 = 0x20a9;
    if (CVar4 == 0) {
      uVar5 = 0;
    }
    if (uVar1 < param_3 && CVar4 == 0) {
      _memcpy((void *)((long)param_4 + (local_48 & 0xffffffff)),(void *)((long)param_2 + local_40),
              (ulong)(param_3 & 0xf));
      *puVar2 = *puVar2 + (param_3 & 0xf);
    }
  }
  return uVar5;
}

