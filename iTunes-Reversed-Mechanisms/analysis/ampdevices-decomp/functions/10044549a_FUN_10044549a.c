// name: FUN_10044549a
// address: 10044549a

byte FUN_10044549a(undefined8 param_1,undefined8 param_2,uint *param_3,long param_4)

{
  byte bVar1;
  
  if ((param_3 == (uint *)0x0) || (bVar1 = 1, (*param_3 & 0xa961565d) == 0)) {
    if (param_4 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (*(byte *)(param_4 + 1) & 0x10) >> 4;
    }
  }
  return bVar1;
}

