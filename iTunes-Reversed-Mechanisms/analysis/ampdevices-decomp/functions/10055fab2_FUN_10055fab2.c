// name: FUN_10055fab2
// address: 10055fab2

undefined4 FUN_10055fab2(int param_1,long param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = FUN_10055f8e9(param_1,param_2);
  uVar3 = 0;
  if (param_1 == 0x44574e4c) {
    param_2 = FUN_1004aa9fa(param_2 + 0x2c);
    if (param_2 == 0) goto LAB_10055fb30;
  }
  else {
    if ((param_1 != 0x4d46494c) && (uVar3 = 0, param_1 != 0x46494c45)) goto LAB_10055fb30;
    param_2 = param_2 + 0x2c;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x420);
LAB_10055fb30:
  if (param_3 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_10055fa32(uVar1,uVar3,param_4);
    if (puVar2 != (undefined4 *)0x0) {
      return *puVar2;
    }
  }
  else {
    *param_3 = uVar3;
    puVar2 = (undefined4 *)FUN_10055fa32(uVar1,uVar3,param_4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = *puVar2;
      *param_3 = puVar2[2];
      return uVar3;
    }
  }
  return 0;
}

