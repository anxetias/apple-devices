// name: FUN_100375ed0
// address: 100375ed0

void FUN_100375ed0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
  if (lVar2 == 0) {
    uVar1 = 0xffffffdd;
  }
  else {
    uVar3 = _AFCFileDescriptorCreateCloseOperation(*(undefined8 *)(param_1 + 0x4e8),0);
    uVar1 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar3);
    FUN_10036da6d(uVar1,"Close",param_1);
    FUN_10017060f(uVar3);
  }
  FUN_10017060f(*(undefined8 *)(param_1 + 0x4e8));
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1001ecf9f();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar2 != 0) {
    FUN_10036d4d2(lVar2);
  }
  FUN_10036db97(uVar1);
  return;
}

