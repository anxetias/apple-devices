// name: FUN_1003e3436
// address: 1003e3436

undefined8 FUN_1003e3436(long param_1,long param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    do {
      cVar6 = FUN_1003b6f88(*(undefined4 *)(param_1 + 0x28),param_1 + 0x2c,uVar3,uVar7);
      if (cVar6 != '\0') {
        if (*(long *)(param_1 + 0x4f0) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0x4f0) + 4);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1005d3cba();
          }
        }
        *(undefined8 *)(param_1 + 0x4f0) = 0;
        *(undefined1 *)(param_1 + 0x4f8) = 0;
        bVar5 = true;
        goto LAB_1003e34a8;
      }
      param_1 = *(long *)(param_1 + 8);
    } while (param_1 != 0);
  }
  bVar5 = false;
  param_1 = 0;
LAB_1003e34a8:
  cVar6 = FUN_1003df2de(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  uVar7 = 0xfffffffc;
  if (cVar6 != '\0') {
    uVar7 = FUN_1003df966(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),0,
                          *(uint *)(param_2 + 0x28) | 1,FUN_1002a93f0,param_2);
    if (bVar5 && (int)uVar7 == 0) {
      lVar4 = *(long *)(param_2 + 0x38);
      uVar2 = *(undefined1 *)(param_2 + 0x40);
      if (*(long *)(param_1 + 0x4f0) != 0) {
        piVar1 = (int *)(*(long *)(param_1 + 0x4f0) + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1005d3cba();
        }
      }
      if (lVar4 != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      }
      *(long *)(param_1 + 0x4f0) = lVar4;
      *(undefined1 *)(param_1 + 0x4f8) = uVar2;
      *(undefined8 *)(param_1 + 0x4fc) = *(undefined8 *)(param_2 + 0x44);
      uVar7 = 0;
    }
  }
  return uVar7;
}

