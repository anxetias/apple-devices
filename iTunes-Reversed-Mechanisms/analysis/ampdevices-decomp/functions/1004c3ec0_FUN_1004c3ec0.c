// name: FUN_1004c3ec0
// address: 1004c3ec0

undefined8 FUN_1004c3ec0(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  
  if (param_2 == 0x73746b69) {
    lVar1 = 0x5e0;
  }
  else {
    if (param_2 != 0x73747064) {
      return 0x232a;
    }
    lVar1 = 0x5e8;
  }
  *param_3 = *(undefined8 *)(param_1 + lVar1);
  return 0;
}

