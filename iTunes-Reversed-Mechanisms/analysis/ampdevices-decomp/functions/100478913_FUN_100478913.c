// name: FUN_100478913
// address: 100478913

undefined4 FUN_100478913(undefined8 param_1,long *param_2,int *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == (long *)0x0) {
    iVar2 = FUN_10047857c(param_1,0,param_3);
    if (iVar2 == 0) goto LAB_100478963;
  }
  else {
    *param_2 = 0;
    iVar2 = FUN_10047857c(param_1,param_2,param_3);
    if ((iVar2 == 0) && (*param_2 != 0)) {
LAB_100478963:
      if ((param_3 == (int *)0x0) || (*param_3 != 0)) {
        uVar1 = 0;
        uVar3 = 0;
        if (param_4 == (undefined1 *)0x0) {
          return 0;
        }
        goto LAB_10047899b;
      }
    }
  }
  uVar3 = FUN_100477ed1(param_1,param_2,param_3);
  if (param_4 == (undefined1 *)0x0) {
    return uVar3;
  }
  uVar1 = FUN_1002dd350(param_1);
LAB_10047899b:
  *param_4 = uVar1;
  return uVar3;
}

