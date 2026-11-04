// name: FUN_100353146
// address: 100353146

long FUN_100353146(long param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x3e0);
  if (lVar1 == 0) {
    uStack_28 = in_RAX;
    FUN_1001c62d9((long)&uStack_28 + 6,2);
    uStack_28 = CONCAT17(*(undefined1 *)(param_1 + 0x335),CONCAT16(3,(undefined6)uStack_28));
    lVar1 = FUN_100352c96(param_1,(long)&uStack_28 + 6,param_2);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      FUN_100352999(*(undefined8 *)(param_1 + 0x3e0));
      *(long *)(param_1 + 0x3e0) = lVar1;
    }
  }
  else {
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
  }
  return lVar1;
}

