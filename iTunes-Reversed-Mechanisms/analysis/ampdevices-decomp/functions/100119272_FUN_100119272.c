// name: FUN_100119272
// address: 100119272

undefined8 FUN_100119272(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x20) {
    return 0x73697a65;
  }
  uVar1 = FUN_100119080(DAT_100700b50 / (float)param_2);
  return uVar1;
}

