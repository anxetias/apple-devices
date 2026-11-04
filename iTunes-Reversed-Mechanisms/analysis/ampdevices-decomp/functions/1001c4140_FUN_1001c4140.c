// name: FUN_1001c4140
// address: 1001c4140

void FUN_1001c4140(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_1001c4101(0x7066726d,param_1,param_2,param_3);
  if (lVar1 != 0) {
    return;
  }
  FUN_1001c4101(0x6672616d,param_1,param_2,param_3 & 0xff);
  return;
}

