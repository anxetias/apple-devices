// name: FUN_1002a9409
// address: 1002a9409

void FUN_1002a9409(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_30 [16];
  
  FUN_10042ae71(param_1,0x55534c54,0);
  FUN_10042ae71(param_1,0x554c5420,0);
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_1001737f8(lVar1);
    if (0 < lVar3) {
      FUN_1001b7eb0(local_30,lVar1);
      uVar5 = 0x554c5420;
      if (2 < *(byte *)(param_1 + 0xb)) {
        uVar5 = 0x55534c54;
      }
      uVar4 = FUN_1001b8336(local_30);
      uVar2 = FUN_1001b8378(local_30);
      FUN_10042b895(param_1,uVar5,0,0,uVar4,uVar2);
      FUN_1001b7a50(local_30);
    }
  }
  return;
}

