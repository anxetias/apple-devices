// name: FUN_1005c8b89
// address: 1005c8b89

undefined8 FUN_1005c8b89(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == -0x2b) {
    uVar1 = 0x830005;
  }
  else {
    if (param_2 != -0x1f) {
      FUN_1001b7a44();
      return param_1;
    }
    uVar1 = 0x83000a;
  }
  FUN_1001c334a(param_1,uVar1);
  return param_1;
}

