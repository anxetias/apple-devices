// name: FUN_100107d76
// address: 100107d76

undefined8 FUN_100107d76(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_100107c50();
  if ((int)uVar1 == 0) {
    uVar3 = param_3 >> 3;
    uVar1 = FUN_100119272(param_1 + 0x78,uVar3);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_100116d62(param_3);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      uVar1 = FUN_100116d62(uVar3);
      *(undefined8 *)(param_1 + 8) = uVar1;
      uVar1 = FUN_100116d8c(param_3);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      lVar2 = FUN_100116d8c(uVar3);
      *(long *)(param_1 + 0x18) = lVar2;
      if (((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 8) == 0)) ||
         (uVar1 = 0, lVar2 == 0 || *(long *)(param_1 + 0x20) == 0)) {
        uVar1 = 0xfffffffe;
      }
    }
  }
  return uVar1;
}

