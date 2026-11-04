// name: FUN_1003574ab
// address: 1003574ab

long FUN_1003574ab(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((((*(long *)(param_1 + 0x10) != 0) &&
            ((*(byte *)(*(long *)(param_1 + 0x58) + 0x4a) & 1) != 0)) &&
           (lVar1 = FUN_100309333(*(undefined8 *)(param_1 + 0x180)), lVar1 != 0)) &&
          (lVar1 = FUN_100300729(lVar1,*(undefined8 *)(param_1 + 0x188)), lVar1 != 0)) {
    param_1 = lVar1;
  }
  return param_1;
}

