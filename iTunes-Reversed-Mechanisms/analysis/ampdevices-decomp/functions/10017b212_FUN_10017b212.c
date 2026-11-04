// name: FUN_10017b212
// address: 10017b212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017b212(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  if (*(long *)(param_4 + 8) != 0) {
    _CGContextTranslateCTM(param_2,param_3);
    _CGContextRotateCTM(param_1,*(undefined8 *)(param_4 + 8));
    _CGContextTranslateCTM
              (CONCAT44((uint)((ulong)param_2 >> 0x20) ^ _UNK_100700b34,
                        (uint)param_2 ^ _DAT_100700b30),param_3 ^ _DAT_100700b30,
               *(undefined8 *)(param_4 + 8));
    return;
  }
  return;
}

