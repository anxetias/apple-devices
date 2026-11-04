// name: FUN_1004c4b04
// address: 1004c4b04

void FUN_1004c4b04(long *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 local_28 [8];
  
  lVar4 = (**(code **)(*param_1 + 0x248))();
  if (lVar4 != 0) {
    cVar2 = FUN_1002b630e(lVar4);
    uVar1 = *(uint *)(param_1 + 0xa9);
    uVar3 = FUN_10047eee6(*(undefined8 *)(lVar4 + 8));
    FUN_1005d10e0(local_28,uVar3,uVar1 >> 0x1a & 2 | 0x41 - (cVar2 == '\0'));
    FUN_100445138(param_1[0x9e],local_28);
    FUN_1001ab006(local_28);
  }
  return;
}

