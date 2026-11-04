// name: FUN_10010a966
// address: 10010a966

void FUN_10010a966(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5,uint *param_6,char param_7)

{
  uint uVar1;
  
  if (param_7 != '\0') {
    uVar1 = *param_6;
    if (*(byte *)(**(long **)(param_1 + 0x1e30) + 0x21 + (ulong)uVar1) == param_5) {
      FUN_10010a9ec(param_1,(ulong)uVar1,param_4);
      uVar1 = uVar1 + 1;
    }
    *param_6 = uVar1;
    FUN_10010ad1a(param_1,param_2,param_3,param_1 + 0xa050,param_1 + 0xa150);
    return;
  }
  return;
}

