// name: FUN_10019266d
// address: 10019266d

undefined8 FUN_10019266d(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _sync_volume_np((char *)(param_1 + 0x19),1);
  if (iVar1 != 0) {
    uVar2 = FUN_1001eb020(iVar1);
    return uVar2;
  }
  return 0;
}

