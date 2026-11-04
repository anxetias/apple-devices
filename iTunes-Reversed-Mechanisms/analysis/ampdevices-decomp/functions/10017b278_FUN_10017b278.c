// name: FUN_10017b278
// address: 10017b278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017b278(uint param_1,uint param_2,long param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_3 + 8) == 0) {
    return;
  }
  _CGContextTranslateCTM();
  uVar2 = (undefined4)DAT_100700af8;
  uVar1 = (int)DAT_100700458;
  if (param_4 != '\0') {
    uVar1 = uVar2;
    uVar2 = (int)DAT_100700458;
  }
  _CGContextScaleCTM(uVar1,uVar2,*(undefined8 *)(param_3 + 8));
  _CGContextTranslateCTM
            (param_1 ^ _DAT_100700b30,param_2 ^ _DAT_100700b30,*(undefined8 *)(param_3 + 8));
  return;
}

