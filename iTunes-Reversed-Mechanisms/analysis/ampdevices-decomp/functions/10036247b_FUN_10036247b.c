// name: FUN_10036247b
// address: 10036247b

undefined4 FUN_10036247b(undefined8 param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 local_40;
  undefined4 local_38;
  ushort local_32;
  
  iVar1 = FUN_10023ea92(param_1,&local_32);
  if ((iVar1 == 0) && (local_32 != 0)) {
    uVar2 = 1;
    do {
      local_40 = 4;
      iVar1 = FUN_100240158(param_1,uVar2,&local_38,&local_40,0x44427466);
      if (iVar1 == 0) {
        return local_38;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= local_32);
  }
  return 0;
}

